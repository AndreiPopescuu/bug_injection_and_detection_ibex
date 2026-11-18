"""run_agent.py -- Gemma runner for LLM-CRT, conditions A and A1.

Usage (activate .venv first, then from crt-coverage/decoder/):

  python3 run_agent.py synth  --run A_run4  --pass 1
  python3 run_agent.py review --run A_run4  --pass 1
  python3 run_agent.py synth  --run A1_run1 --pass 1   # paper-equivalent info, CRT scope

Conditions:
  A    coverage plan + isa.py + feedback (no RTL, no testbench)
  A1   coverage plan + feedback only (no isa.py, no RTL) -- info level matches
       the LLM4DV paper; always runs with the no-isa prompt template.

Flags:
  --no-isa   omit isa.py from the prompt (forced on for A1 runs)

Environment (.env or shell):
  GEMINI_API_KEY   required
  GEMINI_MODEL     default: gemma-4-31b-it
"""
import argparse
import os
import re
import subprocess
import sys
from pathlib import Path

from dotenv import load_dotenv
from google import genai

load_dotenv(Path(__file__).resolve().parent / ".env")

HERE     = Path(__file__).resolve().parent
RUNS_DIR = HERE / "crt" / "llm_runs"
PASSES_DIR = HERE / "llm_passes"

MODEL       = os.environ.get("GEMINI_MODEL", "gemma-4-31b-it")
MAX_RETRIES = 3

sys.path.insert(0, str(HERE))
import llm_pipeline as _pl  # noqa: E402

ISA_PATH  = HERE / "crt" / "isa.py"
BINS_PATH = HERE / "docs" / "ml4dv_bins_description.txt"


def _read(path: Path) -> str:
    return path.read_text(encoding="utf-8", errors="replace")


# ---------------------------------------------------------------------------
# prompt templates
# ---------------------------------------------------------------------------

_SYNTH_TMPL = """\
You are writing a constrained-random test (CRT) generator for a hardware \
design-verification task.

## The design under test

{dut_facts}

## Coverage metric(s)

{metrics}

## Coverage feedback ({pass_label})

{feedback}

## isa.py -- encoder library (the ONLY way to build instruction words)

```python
{isa}
```

## ml4dv_bins_description.txt -- coverage plan

```
{bins}
```

{own_code}\
## Action space

Build 32-bit instruction words ONLY with the encoders above \
(enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4, OPC). \
Raw integer literals only for deliberately malformed words (comment why).

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting \
ONE specific coverage goal. Each docstring must state {cite}, and why random \
words would rarely achieve it. Each stream: 16..512 words; `rng` is a \
random.Random -- use it for every free field.

Style reference (format only):

```python
{example}
```

## Required output format

Output ONLY a single fenced Python code block -- no prose before or after it. \
The block must start with EXACTLY these header line(s), copied verbatim:

```python
{header}
```

Then your helpers (if any), your `build_*_stream` functions, and a final line:

    NEW_BUILDERS = [<list of your new functions>]

No other imports. No explanations outside the code block.
"""

_SYNTH_NOISA_TMPL = """\
You are writing a constrained-random test (CRT) generator for a hardware \
design-verification task.

## The design under test

{dut_facts}

## Coverage metric(s)

{metrics}

## Coverage feedback ({pass_label})

{feedback}

## ml4dv_bins_description.txt -- coverage plan

```
{bins}
```

{own_code}\
## Action space

Build 32-bit instruction words directly as Python integers, using your \
knowledge of the RISC-V ISA encoding (opcodes, funct3, funct7, field positions). \
Use Python bitwise operations to assemble words. \
Use `rng.randint()` for every free field (rd, rs1, rs2, imm, etc.).

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting \
ONE specific coverage goal. Each docstring must state {cite}, and why random \
words would rarely achieve it. Each stream: 16..512 words; `rng` is a \
random.Random.

Style reference (format only -- build words with bit ops, NOT with encoders):

```python
def build_addi_rd_sweep_stream(rng):
    \"\"\"addi rd, rs1, imm -- sweeps all rd values to hit write_reg bins.\"\"\"
    stream = []
    for rd in range(32):
        rs1 = rng.randint(0, 31)
        imm12 = rng.randint(-2048, 2047) & 0xFFF
        # addi: opcode=0x13, funct3=0b000, format I
        word = ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (0b000 << 12) | (rd << 7) | 0x13
        stream.append(word & 0xFFFFFFFF)
    return stream
```

## Required output format

Output ONLY a single fenced Python code block -- no prose before or after it. \
The block must start with EXACTLY these header line(s), copied verbatim:

```python
{header}
```

Then your helpers (if any), your `build_*_stream` functions, and a final line:

    NEW_BUILDERS = [<list of your new functions>]

No other imports. No explanations outside the code block.
"""

_REVIEW_TMPL = """\
You are the independent adversarial reviewer of a draft CRT generator written \
by another model. Re-derive every claim -- do not rubber-stamp.

## The design under test

{dut_facts}

## Coverage metric(s)

{metrics}

## isa.py -- encoder library

```python
{isa}
```

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument \
order and field widths in isa.py (enc_i(op, f3, rd, rs1, imm), \
enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)).
2. The words are legal (or illegal, when intended) and plausibly hit the \
claimed coverage goal.{extra_checks}
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for \
free fields, no imports.

## Draft generator to review

```python
{draft_code}
```

## Required output format

Output ONLY a single fenced Python code block with the corrected generator. \
Keep the header line(s) unchanged. Remove any fundamentally broken builder \
(REJECT) rather than leaving it in. Do not add new coverage goals. \
No prose outside the code block.
"""

_REVIEW_NOISA_TMPL = """\
You are the independent adversarial reviewer of a draft CRT generator written \
by another model. Re-derive every claim -- do not rubber-stamp.

## The design under test

{dut_facts}

## Coverage metric(s)

{metrics}

## What to check, for EVERY function

1. The 32-bit instruction words are assembled correctly (opcode, funct3, funct7, \
field positions and widths match the RISC-V ISA; use your own knowledge of the \
encoding -- no encoder library is provided to either agent in this condition).
2. The words are legal (or illegal, when intended) and plausibly hit the \
claimed coverage goal.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for \
free fields, no imports, no undefined names (only Python builtins and `rng`).

## Draft generator to review

```python
{draft_code}
```

## Required output format

Output ONLY a single fenced Python code block with the corrected generator. \
Keep the header line unchanged. Remove any fundamentally broken builder \
(REJECT) rather than leaving it in. Do not add new coverage goals. \
No prose outside the code block.
"""


def _own_code_section(run: str, k: int) -> str:
    paths = [RUNS_DIR / f"{run}_p{i}.py" for i in range(1, k)]
    blocks = [f"### {p.name}\n```python\n{_read(p)}\n```"
              for p in paths if p.exists()]
    if not blocks:
        return ""
    return ("## Your earlier passes (keep those builders, add NEW ones)\n\n"
            + "\n\n".join(blocks) + "\n\n")


# ---------------------------------------------------------------------------
# API call
# ---------------------------------------------------------------------------

def call_model(prompt: str) -> str:
    client = genai.Client(api_key=os.environ["GEMINI_API_KEY"])
    resp = client.models.generate_content(model=MODEL, contents=prompt)
    return resp.text


# ---------------------------------------------------------------------------
# response parsing
# ---------------------------------------------------------------------------

def extract_python(text: str) -> str | None:
    matches = re.findall(r"```python\n(.*?)```", text, re.DOTALL)
    if not matches:
        matches = re.findall(r"```\n(.*?)```", text, re.DOTALL)
    return matches[-1].rstrip() if matches else None


def fix_header(code: str, run: str, k: int) -> str:
    want = _pl.pass_header(run, k)
    lines = code.splitlines()
    body_start = 0
    for i, l in enumerate(lines):
        if l.startswith("def ") or l.startswith("NEW_BUILDERS"):
            body_start = i
            break
    return want + "\n\n" + "\n".join(lines[body_start:])


# ---------------------------------------------------------------------------
# checker
# ---------------------------------------------------------------------------

def run_checker(run: str, k: int, stage: str) -> tuple[bool, str]:
    result = subprocess.run(
        [sys.executable, "llm_pipeline.py", "check",
         "--run", run, "--pass", str(k), "--stage", stage],
        cwd=HERE, capture_output=True, text=True,
    )
    out = result.stdout + result.stderr
    print(out, end="")
    return result.returncode == 0, out


# ---------------------------------------------------------------------------
# synth
# ---------------------------------------------------------------------------

def do_synth(run: str, k: int, no_isa: bool = False):
    RUNS_DIR.mkdir(exist_ok=True)
    (RUNS_DIR / "__init__.py").touch()
    pass_dir = PASSES_DIR / run
    pass_dir.mkdir(parents=True, exist_ok=True)
    c = _pl.cond_of(run)
    header = _pl.pass_header(run, k)

    if no_isa:
        print("[synth] --no-isa mode: isa.py omitted from prompt")
        prompt = _SYNTH_NOISA_TMPL.format(
            dut_facts=_pl.DUT_FACTS[c], metrics=_pl.METRICS[c],
            pass_label=f"run {run}, pass {k}", feedback=_pl.feedback(run, k),
            bins=_read(BINS_PATH), own_code=_own_code_section(run, k),
            cite=_pl.CITE[c], header=header,
        )
    else:
        prompt = _SYNTH_TMPL.format(
            dut_facts=_pl.DUT_FACTS[c], metrics=_pl.METRICS[c],
            pass_label=f"run {run}, pass {k}", feedback=_pl.feedback(run, k),
            isa=_read(ISA_PATH), bins=_read(BINS_PATH),
            own_code=_own_code_section(run, k), cite=_pl.CITE[c],
            example=_pl.EXAMPLE_FUNCTION, header=header,
        )

    (pass_dir / f"p{k}_synthesis_prompt.md").write_text(prompt)
    print(f"[synth] prompt: {len(prompt)} chars, calling {MODEL} ...")

    for attempt in range(1, MAX_RETRIES + 1):
        raw = call_model(prompt)
        (pass_dir / f"p{k}_synthesis_raw.md").write_text(raw)
        code = extract_python(raw)
        if code is None:
            print(f"[synth] attempt {attempt}: no Python block, retrying ...")
            prompt += "\n\nIMPORTANT: output ONLY the fenced ```python block."
            continue
        _pl.target(run, k).write_text(fix_header(code, run, k))
        ok, out = run_checker(run, k, "synth")
        if ok:
            print("[synth] CHECK OK")
            return
        prompt += f"\n\nChecker failed (attempt {attempt}):\n{out}\nFix all issues and output the corrected code block."

    sys.exit(f"[synth] FAILED after {MAX_RETRIES} attempts")


# ---------------------------------------------------------------------------
# review
# ---------------------------------------------------------------------------

def do_review(run: str, k: int, no_isa: bool = False):
    pass_dir = PASSES_DIR / run
    pass_dir.mkdir(parents=True, exist_ok=True)
    target = _pl.target(run, k)
    c = _pl.cond_of(run)

    if not target.exists():
        sys.exit(f"ERROR: {target} not found -- run synth first")

    if c == "A1":
        prompt = _REVIEW_NOISA_TMPL.format(
            dut_facts=_pl.DUT_FACTS[c], metrics=_pl.METRICS[c],
            draft_code=_read(target),
        )
    else:
        extra_checks = ""
        if no_isa:
            extra_checks = (
                "\n\nIMPORTANT: the synthesis agent had NO access to isa.py. "
                "The only names available are Python builtins, `rng`, and from the header import: "
                "`OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4`. "
                "Any other name (e.g. SPEC_BY_NAME) is undefined -- replace with bit ops or a valid encoder."
            )
        prompt = _REVIEW_TMPL.format(
            dut_facts=_pl.DUT_FACTS[c], metrics=_pl.METRICS[c],
            isa=_read(ISA_PATH), extra_checks=extra_checks,
            draft_code=_read(target),
        )
    (pass_dir / f"p{k}_review_prompt.md").write_text(prompt)
    print(f"[review] prompt: {len(prompt)} chars, calling {MODEL} ...")

    for attempt in range(1, MAX_RETRIES + 1):
        raw = call_model(prompt)
        (pass_dir / f"p{k}_review_raw.md").write_text(raw)
        code = extract_python(raw)
        if code is None:
            print(f"[review] attempt {attempt}: no Python block, retrying ...")
            prompt += "\n\nIMPORTANT: output ONLY the fenced ```python block."
            continue
        target.write_text(fix_header(code, run, k))
        ok, out = run_checker(run, k, "review")
        if ok:
            print("[review] CHECK OK")
            return
        prompt += f"\n\nChecker failed (attempt {attempt}):\n{out}\nFix all issues and output the corrected block."

    sys.exit(f"[review] FAILED after {MAX_RETRIES} attempts")


# ---------------------------------------------------------------------------

def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("stage", choices=["synth", "review"])
    ap.add_argument("--run", required=True, help="e.g. A_run4")
    ap.add_argument("--pass", dest="k", type=int, required=True)
    ap.add_argument("--no-isa", action="store_true",
                    help="omit isa.py from the prompt")
    a = ap.parse_args()

    if "GEMINI_API_KEY" not in os.environ:
        sys.exit("ERROR: GEMINI_API_KEY not set. Add it to .env or export it.")

    cond = _pl.cond_of(a.run)
    if cond not in ("A", "A1"):
        sys.exit(f"ERROR: run name must start with A_ or A1_ (got '{a.run}')")

    no_isa = a.no_isa or cond == "A1"

    if a.stage == "synth":
        do_synth(a.run, a.k, no_isa=no_isa)
    else:
        do_review(a.run, a.k, no_isa=no_isa)


if __name__ == "__main__":
    main()
