"""llm_pipeline.py — condition-controlled LLM-CRT experiment for ibex_cpu.

Mirrors decoder/llm_pipeline.py. Same protocol: isolated synthesis + review
subagents, condition A (no RTL) and B (with RTL), 3 passes max, feedback
between passes.

Differences from decoder:
  - Stimulus is a SEQUENCE of 32-bit words (a program fragment), not one word.
  - 196-bin ml4dv coverage plan on ibex_cpu with RVFI sampling.
  - Encoder library (crt/isa.py) exposes 14 plan instructions + ADDI/NOP for
    prelude and glue.
  - Builders are LINEAR by default: no backward JAL unless the builder also
    emits the landing pad and an escape. The test concatenates all builder
    outputs with a 2-NOP separator so RAW_HAZARD doesn't leak between
    builders.

Usage (WSL, from this directory):
  python3 llm_pipeline.py synth  --run A_run1 --pass 1
  python3 llm_pipeline.py review --run A_run1 --pass 1
  python3 llm_pipeline.py check  --run A_run1 --pass 1 --stage synth|review  (by the agents)
  python3 llm_pipeline.py modules --run A_run1 --pass 2  -> LLM_MODULES value
  python3 llm_pipeline.py gaps   --run A_run1 --pass 1
"""
import argparse
import json
import os
import re
from pathlib import Path

HERE = Path(__file__).resolve().parent
RUNS_DIR = HERE / "crt" / "llm_runs"
PASSES_DIR = HERE / "llm_passes"
RESULTS = HERE / "results"


def _p(path):
    if os.environ.get("PROMPT_UNC_PATHS", "1") == "1":
        return "//wsl.localhost/Ubuntu" + str(path)
    return str(path)


# IBEX_CPU_ROOT is the companion repo that owns the RTL + Spike cosim DPI.
IBEX_CPU_ROOT = Path("/home/andre/ibex-coverage-experiments/cpu")
RTL = _p(IBEX_CPU_ROOT / "src" / "lowrisc_ibex_ibex_core_0.1" / "rtl")
ISA = _p(HERE / "crt" / "isa.py")
BINS = _p(HERE / "docs" / "ml4dv_bins_description.txt")

FORBIDDEN_COMMON = [
    "test_random_cpu.py", "test_paper_random.py", "test_llm_crt.py",
    "crt/random_generator.py",
    "results/", "README.md",
    "llm_passes/ (except files named in this brief)",
    "crt/llm_runs/ (except your own run's files named in this brief)",
    "instructions.py", "instruction_monitor.py", "shared_types.py",
    "llm_pipeline.py", "scripts/",
    "mutants/", "run_mutation.py", "mutation_results/",
    "ibex-coverage-experiments/cpu/ (companion repo, except RTL path listed in your brief)",
    "../decoder/", "any ml4dv / LLM4DV repository or paper text",
    "any scratch folder other than your own",
]
FORBIDDEN = {
    "A": FORBIDDEN_COMMON + [f"{RTL} (no RTL in condition A)", "any Ibex RTL file"],
    "B": FORBIDDEN_COMMON,
}

DUT_FACTS = {
    "A": """The DUT is a small RISC-V CPU (Ibex) running RV32IM configuration (no bit-manipulation, \
no compressed, no PMP, no ICache). Each stimulus is a PROGRAM FRAGMENT — a list of 32-bit \
instruction words loaded into instruction memory. The CPU boots, executes the program, and \
retires instructions in order. Coverage is sampled at EVERY retirement via a monitor on the \
RVFI (RISC-V Formal Interface) signals. You do NOT have the RTL or testbench source.""",
    "B": f"""The DUT is `ibex_core` from lowRISC Ibex. Configuration: RV32E=0, RV32M=RV32MFast, \
RV32B=RV32BNone, BranchTargetALU=0, WritebackStage=0, ICache=0, PMPEnable=0.
  - Stimulus = a program loaded into instruction memory at address 0x100080.
  - The CPU runs; the monitor samples functional coverage at each RVFI retirement.
  - You MAY read the RTL under {RTL}/ to understand how pipeline hazards resolve.""",
}

METRICS = {
    "A": f"""Functional coverage plan of 196 bins on ibex_cpu, described in prose in {BINS}. \
That description is all that is known about the plan.""",
    "B": f"""Functional coverage plan of 196 bins on ibex_cpu, described in prose in {BINS}. \
Sampling is on RVFI retirements. Internal pipeline behavior (stalls, bypasses) does not change \
the plan but it may affect WHICH retirement is adjacent to which, which matters for RAW_HAZARD \
cross-coverage.""",
}

FILES = {
    "A": f"""  {ISA}   -- the encoder library (the ONLY way to build instruction words)
  {BINS}  -- the coverage plan description""",
    "B": f"""  {RTL}/ibex_core.sv              -- the DUT (top-level core)
  {RTL}/ibex_decoder.sv           -- instruction decoder (for retirement timing)
  {RTL}/ibex_id_stage.sv          -- instruction decode stage (RAW hazard logic)
  {RTL}/ibex_ex_block.sv          -- execution block
  {RTL}/ibex_pkg.sv               -- enums / constants
  {ISA}   -- the encoder library (the ONLY way to build instruction words)
  {BINS}  -- the coverage plan description""",
}

CITE = {
    "A": "which plan bins it targets and which instruction encodings / registers / sequencing \
constraints it relies on",
    "B": "the exact RTL file:line(s) that establish the behavior you rely on (e.g. where RAW \
hazard is detected, pipeline depth), which plan bins it targets, and why",
}

EXAMPLE_FUNCTION = '''def build_example_add_zero_dst_stream(rng):
    """Target `ADD.ZERO_DST` + `ADD.SEEN`.

    ADD with rd=x0 is retired as a NOP by the writeback stage but the decoder
    still reports ADD, so the monitor samples ZERO_DST. Repeat 32x with random
    sources to also light up SAME_SRC and ZERO_SRC in a side-effect-free way.
    """
    stream = []
    for _ in range(32):
        rs1 = rng.randint(0, 15)
        rs2 = rng.randint(0, 15)
        stream.append(ADD(rd=0, rs1=rs1, rs2=rs2))
    return stream'''

SYNTH = """You are writing a constrained-random test (CRT) generator for a hardware \
design-verification task. This is a research experiment: can an LLM, given only the inputs a \
verification engineer gets at the start of the job, write a CRT generator as good as an \
expert's?

IMPORTANT: Do NOT use or look for any existing verification IP or test generator for this \
design (lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or \
stimuli). Do NOT open these paths: {forbidden}.

## The design under test

{dut_facts}

## Harness mechanics (fixed, you cannot change)

1. There is a fixed prelude that initializes x1..x15 = {{1..15}} via ADDI.
2. Each builder's output is appended to the program in a stable order.
3. Between consecutive builders, 2 NOP instructions are inserted. The \
instructions inside a single builder are placed into memory in the order \
you return them (the harness does NOT shuffle them).
4. The program ends with WFI, which halts the CPU cleanly.
5. The CPU runs for ~20 * program_words clock cycles — enough for every \
instruction to retire.

## Files you may read (Read / Grep tools)

{files}
{own_files}
## Coverage metric

{metrics}

## Coverage feedback ({pass_label})

{feedback}

## Action space

A builder returns a list of 32-bit instruction words. Build them using the \
functions in {isa} ({plan_instrs}, plus ADDI and NOP for glue). ADDI/NOP are \
NOT in the plan — they only exist to initialize registers or pad. Raw \
integer literals are not allowed; use the encoders.

Important constraints on sequences:
  - LINEAR by default: no backward JAL unless the same builder emits the \
landing pad and ensures execution escapes (otherwise you create an infinite \
loop that the CPU can only exit by running out of simulation time).
  - Forward JAL is safe. Backward JAL is only safe if the TARGET is a \
previously-emitted instruction INSIDE the same builder AND the target \
sequence eventually ends with another forward JAL that skips past the \
backward JAL.
  - Keep each builder between 1 and 512 words.

## Operand coverage

Each instruction operates on a 32-bit datapath; its behavior can depend \
qualitatively on where its operands sit in that 32-bit space (sign bit, zero, \
all-ones, powers of two, signed/unsigned boundaries). A thorough CRT does not \
just permute register indices — it varies the architectural *values* those \
registers hold. Standard verification practice covers corner values of the \
datapath (zero, ±1, max/min signed, max unsigned, boundary bit patterns), \
operand pairs that trigger sign-sensitive paths, and shift amounts across the \
full 0..31 range. Store addresses span both aligned and unaligned low 2 bits \
(offsets 00, 01, 10, 11 from the base).

The prelude initializes x1..x15 with the small positive values 1..15 as a \
starting point. Any other operand value is your responsibility to construct \
in-stream (chain ADDI/SLL/SUB/XOR etc. to materialize the value in a register \
before the instruction that needs it). A builder that only consumes the \
prelude values exercises one slice of the datapath and may miss behaviors \
visible only on other operand corners.

## Register state is mutable across builders

Register state is NOT reset between builders. Every builder's writes to \
x1..x31 persist into subsequent builders. If your builder *reads* a specific \
value from a register (e.g., using x1 as the operand "1" to construct a \
larger value), re-initialize that register locally with ADDI before the use — \
otherwise an earlier builder may have overwritten it, and your constructed \
value will be wrong at runtime (your encoder sees the right instruction but \
the CPU retires it with corrupt operands).

Equivalently: do not assume prelude values survive. Treat x1..x31 as scratch \
and reconstruct whatever you need. The checker only validates encoder \
correctness, not runtime state assumptions.

## Operand variety is also useful within OTHER builders

Interesting behaviors in sign-sensitive, overflow, and shift operations can \
emerge when operands with those patterns are consumed by ANY instruction, not \
just by a dedicated "corner value" builder. If your builder uses an \
instruction class (R-type, S-type, JAL) that has operand-dependent behavior, \
consider rotating through operand corners within that same builder rather \
than relying on a single downstream builder to cover everything.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting \
ONE specific coverage goal (a bin or a small related group). Each docstring \
must state {cite}, and why random stimuli would rarely hit this goal. `rng` \
is a `random.Random` — use it for every free field so different seeds \
explore different values. Builders MUST be deterministic for a given seed.

Style reference (formatting only):

```python
{example}
```

## Writing and merging your generator (you do this yourself)

1. Write your builders YOURSELF (Write tool) into this file:

     {target}

   The file MUST start with exactly these lines:

```python
{header}
```

   followed by any private helpers, your `build_*_stream` functions, and a \
final line `NEW_BUILDERS = [<your new functions>]` (an empty list is allowed \
if you conclude nothing new is worth adding). No other imports.

2. Run the checker until it prints `CHECK OK` (validates every builder):

     {check_cmd_synth}

3. Write your reasoning per stream (what it targets, why, every "cannot be \
hit" conclusion with justification) to:

     {synth_report}

Do not create or edit any other repository file. Scratch files only under \
{scratch}. Your final message: a short summary (builders written, checker \
result).
"""

REVIEW = """You are the independent adversarial reviewer of a draft constrained-random test \
(CRT) generator written by another agent for a design-verification experiment. You have NO \
context from whoever wrote it; treat it as an unverified submission. Re-derive every claim — \
do not rubber-stamp.

Do NOT open: {forbidden}.

## The design under test

{dut_facts}

## Harness mechanics (fixed)

1. Prelude initializes x1..x15 = {{1..15}}.
2. Builder outputs are concatenated in order with a 2-NOP SEPARATOR between \
consecutive builders. Inside one builder, two adjacent instructions in the \
returned list retire back-to-back.
3. Program ends with WFI.

## Files you may read

{files}
{own_files}
## Coverage metric

{metrics}

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims. Verify \
argument order and widths in {isa} yourself (R-type: f(rd, rs1, rs2); \
S-type: SB/SH/SW(rs2, rs1, imm); JAL: JAL(rd, offset)). Argument-order \
mistakes are the most common bug.
2. The emitted sequence is LINEAR or correctly handles backward JAL (if \
any) with its own landing + escape — a backward JAL into previously-\
executed code without an escape forward JAL creates an infinite loop.
3. For every RAW_HAZARD(producer, consumer) claim: are the producer and \
consumer ADJACENT inside the builder's returned list? Any instruction (even \
NOP) between them breaks the hazard.
4. For every "cannot be hit" claim: CONFIRMED or DISPUTE, with reasoning.
5. Python: returns `list[int]` of 32-bit values, 1..512 words, uses `rng` \
for free fields, deterministic (same seed = same output), no imports beyond \
the header.{rtl_check}

## What you review

The draft generator, already written and merged by the synthesis agent:

  {target}

The synthesis agent's report:

  {synth_report}

## Output (you edit the generator yourself)

1. Fix every problem DIRECTLY in {target} (Edit tool). Keep header lines \
unchanged. Remove a fundamentally broken builder (REJECT) rather than \
leaving it in. Do not add new coverage goals of your own — you review, you \
do not author.

2. Run the checker until it prints `CHECK OK` (also snapshots the \
reviewed version):

     {check_cmd_review}

3. Write your review to {review_report}: per function CONFIRMED, NEEDS FIX \
(what was wrong, what you changed) or REJECT; per "cannot be hit" claim \
CONFIRMED or DISPUTE with reasoning.

Do not create or edit any other repository file. Your final message: a \
short summary (verdict counts, what you changed, checker result).
"""

PASS_HEADER = '''"""LLM-CRT run {run}, pass {k} (condition {cond}): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL, ADDI, NOP, R_PLAN, S_PLAN  # noqa: F401'''

SCRATCH_TEMPLATE = "C:/Users/Andre/AppData/Local/Temp/claude/cpu-{run}"

PLAN_INSTRS = "ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL"


def cond_of(run: str) -> str:
    return run.split("_")[0]


def pass_header(run: str, k: int) -> str:
    return PASS_HEADER.format(run=run, k=k, cond=cond_of(run))


def scratch(run: str) -> str:
    return SCRATCH_TEMPLATE.format(run=run)


def own_files(run: str, k: int) -> str:
    prev = [RUNS_DIR / f"{run}_p{i}.py" for i in range(1, k)]
    if not prev:
        return ""
    lines = "\n".join(f"  {_p(f)}" for f in prev)
    return (f"\nYour own generator from earlier passes (these builders keep running; "
            f"add NEW builders, do not repeat them):\n{lines}\n")


def tag(run: str, k: int) -> str:
    return f"llm_{run}_p{k}"


def results_dir(run: str, k: int) -> Path:
    return RESULTS / tag(run, k)


# ─── feedback ───────────────────────────────────────────────────────────────

def plan_feedback(run: str, k: int) -> tuple[str, int]:
    files = sorted(results_dir(run, k).glob("seed*.json"))
    if not files:
        return "(no measurement data found)", 0
    union: dict[str, int] = {}
    for f in files:
        b = json.load(open(f))["bins"]
        for name, cnt in b.items():
            union[name] = union.get(name, 0) + cnt
    holes = [x for x, v in union.items() if not v]
    hit = len(union) - len(holes)
    out = [
        f"Plan coverage after measuring passes 1..{k} "
        f"(union of {len(files)} seeds): {hit}/{len(union)}. "
        f"Unreached bins ({len(holes)}):"
    ]
    if not holes:
        out.append("  (none)")
    else:
        # Group by coverpoint type for readability.
        seen = [h for h in holes if h.endswith("_seen")]
        zero_dst = [h for h in holes if h.endswith("_zero_dst")]
        zero_src = [h for h in holes if h.endswith("_zero_src")]
        same_src = [h for h in holes if h.endswith("_same_src")]
        br = [h for h in holes if h.endswith("_br_backwards") or h.endswith("_br_forwards")]
        raw = [h for h in holes if "->" in h and h.endswith("_raw_hazard")]
        other = set(holes) - set(seen + zero_dst + zero_src + same_src + br + raw)
        if seen:
            out.append(f"  SEEN     ({len(seen)}): {', '.join(seen)}")
        if zero_dst:
            out.append(f"  ZERO_DST ({len(zero_dst)}): {', '.join(zero_dst)}")
        if zero_src:
            out.append(f"  ZERO_SRC ({len(zero_src)}): {', '.join(zero_src)}")
        if same_src:
            out.append(f"  SAME_SRC ({len(same_src)}): {', '.join(same_src)}")
        if br:
            out.append(f"  BR_*     ({len(br)}): {', '.join(br)}")
        if raw:
            # Compact RAW listing: group by producer -> {consumers}
            by_prod: dict[str, list[str]] = {}
            for h in raw:
                prod, rest = h.split("->", 1)
                cons = rest.split("_raw_hazard")[0]
                by_prod.setdefault(prod, []).append(cons)
            out.append(f"  RAW_HAZARD ({len(raw)}):")
            for prod in sorted(by_prod):
                out.append(f"    {prod} -> {{{', '.join(sorted(by_prod[prod]))}}}")
        if other:
            out.append(f"  OTHER    ({len(other)}): {', '.join(sorted(other))}")
    return "\n".join(out), hit


def feedback(run: str, k: int) -> str:
    if k == 1:
        return ("(none yet — this is pass 1, nothing has been simulated. Work from the "
                "information above alone; do not invent coverage numbers.)")
    plan, _ = plan_feedback(run, k - 1)
    return plan


# ─── prompt builders ────────────────────────────────────────────────────────

def target(run: str, k: int) -> Path:
    return RUNS_DIR / f"{run}_p{k}.py"


def check_cmd(run: str, k: int, stage: str) -> str:
    return (f"MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 {HERE / 'llm_pipeline.py'} "
            f"check --run {run} --pass {k} --stage {stage}")


def _agent_paths(run: str, k: int) -> dict:
    d = PASSES_DIR / run
    return dict(
        target=_p(target(run, k)),
        synth_report=_p(d / f"p{k}_synthesis_report.md"),
        review_report=_p(d / f"p{k}_review_report.md"),
        header=pass_header(run, k),
        check_cmd_synth=check_cmd(run, k, "synth"),
        check_cmd_review=check_cmd(run, k, "review"),
    )


def build_synth(run: str, k: int) -> str:
    c = cond_of(run)
    return SYNTH.format(
        forbidden=", ".join(FORBIDDEN[c]),
        dut_facts=DUT_FACTS[c],
        files=FILES[c],
        own_files=own_files(run, k),
        metrics=METRICS[c],
        pass_label=f"run {run}, pass {k}",
        feedback=feedback(run, k),
        isa=ISA,
        plan_instrs=PLAN_INSTRS,
        cite=CITE[c],
        example=EXAMPLE_FUNCTION,
        scratch=scratch(run),
        **_agent_paths(run, k),
    )


def build_review(run: str, k: int) -> str:
    c = cond_of(run)
    rtl_check = ("" if c == "A"
                 else " Check every cited RTL file:line against the actual file.")
    return REVIEW.format(
        forbidden=", ".join(FORBIDDEN[c]),
        dut_facts=DUT_FACTS[c],
        files=FILES[c],
        own_files=own_files(run, k),
        metrics=METRICS[c],
        isa=ISA,
        rtl_check=rtl_check,
        scratch=scratch(run),
        **_agent_paths(run, k),
    )


# ─── check: run by agents to validate their file ────────────────────────────

def check(run: str, k: int, stage: str) -> None:
    import importlib
    import random
    import shutil
    import sys
    sys.path.insert(0, str(HERE))
    f = target(run, k)
    errs: list[str] = []
    if not f.exists():
        sys.exit(f"CHECK FAILED: {f} does not exist")
    lines = f.read_text().splitlines()
    want = pass_header(run, k).splitlines()
    n = len(want)
    if lines[:n] != want:
        errs.append(f"the file must start with the exact {n} header line(s) given in your brief")
    extra_imports = [l for l in lines[n:] if re.match(r"\s*(import|from)\s", l)]
    if extra_imports:
        errs.append(f"no imports allowed besides the header: {extra_imports}")
    (RUNS_DIR / "__init__.py").touch()
    names: dict[str, int] = {}
    for i in range(1, k + 1):
        try:
            mod = importlib.import_module(f"crt.llm_runs.{run}_p{i}")
        except Exception as e:
            sys.exit(f"CHECK FAILED: cannot import pass {i}: {type(e).__name__}: {e}")
        nb = getattr(mod, "NEW_BUILDERS", None)
        if not isinstance(nb, list):
            sys.exit(f"CHECK FAILED: pass {i} has no NEW_BUILDERS list")
        for b in nb:
            if b.__name__ in names:
                errs.append(f"builder name {b.__name__} already used in pass {names[b.__name__]}")
            names[b.__name__] = i
            if i != k:
                continue
            for seed in range(5):
                try:
                    s1 = b(random.Random(seed))
                    s2 = b(random.Random(seed))
                except Exception as e:
                    errs.append(f"{b.__name__}(seed {seed}) raised {type(e).__name__}: {e}")
                    break
                if not isinstance(s1, list) or not all(isinstance(w, int) and 0 <= w < 2**32 for w in s1):
                    errs.append(f"{b.__name__}: must return list[int] of 32-bit values")
                    break
                if not 1 <= len(s1) <= 512:
                    errs.append(f"{b.__name__}: {len(s1)} words (allowed 1..512)")
                    break
                if s1 != s2:
                    errs.append(f"{b.__name__}: not deterministic for a given seed (use only rng)")
                    break
            else:
                print(f"  {b.__name__}: ok ({len(s1)} words on seed 4)")
    if errs:
        print("CHECK FAILED:")
        for e in errs:
            print("  - " + e)
        sys.exit(1)
    snap = PASSES_DIR / run / f"p{k}_{stage}_snapshot.py"
    snap.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(f, snap)
    print(f"CHECK OK: run {run}, passes 1..{k} import together "
          f"({len(names)} builders); snapshot -> {snap.name}")


def modules(run: str, k: int) -> str:
    return ",".join(f"crt.llm_runs.{run}_p{i}" for i in range(1, k + 1))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", choices=["synth", "review", "check", "modules", "gaps", "tag"])
    ap.add_argument("--run", required=True)
    ap.add_argument("--pass", dest="k", type=int, required=True)
    ap.add_argument("--stage", choices=["synth", "review"], default="synth")
    a = ap.parse_args()
    d = PASSES_DIR / a.run
    d.mkdir(parents=True, exist_ok=True)
    if a.cmd == "synth":
        f = d / f"p{a.k}_synthesis_prompt.md"
        f.write_text(build_synth(a.run, a.k))
        print(f)
    elif a.cmd == "review":
        f = d / f"p{a.k}_review_prompt.md"
        f.write_text(build_review(a.run, a.k))
        print(f)
    elif a.cmd == "check":
        check(a.run, a.k, a.stage)
    elif a.cmd == "modules":
        print(modules(a.run, a.k))
    elif a.cmd == "tag":
        print(tag(a.run, a.k))
    elif a.cmd == "gaps":
        txt, _ = plan_feedback(a.run, a.k)
        print(txt.splitlines()[0])


if __name__ == "__main__":
    main()
