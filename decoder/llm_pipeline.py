"""llm_pipeline.py -- condition-controlled LLM-CRT experiment (A / B / C).

Question: can an LLM replace the expert who writes the CRT? The LLM gets what
an expert gets at the START of the job, never the expert's work product.

  A  "paper-equivalent": coverage-plan text (the LLM4DV paper's bins_description)
     + ISA encoder library (crt/isa.py) + coverage feedback (uncovered plan bins).
     NO RTL, NO testbench / sampling code.
  B  "expert": A + DUT RTL + Verilator code-coverage feedback.
  C  "expert + testbench": B + exact coverage-sampling rules (ml4dv
     CoverageMonitor semantics). Pass 1 of 2026-10-05 is run C_run1
     (prompt archived in llm_passes/, built by the older llm_crt_prompts.py).

Protocol (fixed before any run):
  - each run = independent fresh agents; a run never sees another run's files
  - pass k (agent-driven, the orchestrator never touches CRT code):
      synthesis agent: designs the streams, WRITES crt/llm_runs/<run>_p<k>.py itself,
        runs `check --stage synth` (imports passes 1..k together = the merge,
        validates builders, snapshots p<k>_synth_snapshot.py), writes
        llm_passes/<run>/p<k>_synthesis_report.md
      review agent: reviews that file, FIXES it in place, runs `check --stage
        review` (snapshot p<k>_review_snapshot.py), writes p<k>_review_report.md
      orchestrator: only builds prompts, measures, builds feedback
    (runs A_run*, B_run*, C_run1 were made with the older flow in which the
    orchestrator copied the agents' code blocks into the file: `merge`, legacy)
  - feedback for pass k+1 = holes after measuring passes 1..k (PAPER_MODE=1,
    3 seeds x 100k, union over seeds)
  - stop after 3 passes, or earlier when a pass adds zero plan bins

Usage (WSL, from this directory):
  python3 llm_pipeline.py synth  --run A_run1 --pass 1     -> llm_passes/A_run1/p1_synthesis_prompt.md
  python3 llm_pipeline.py review --run A_run1 --pass 1     -> llm_passes/A_run1/p1_review_prompt.md
  python3 llm_pipeline.py check  --run A_run1 --pass 1 --stage synth|review   (run BY THE AGENTS)
  python3 llm_pipeline.py merge  --run A_run1 --pass 1     (legacy flow only)
  python3 llm_pipeline.py modules --run A_run1 --pass 2    -> LLM_MODULE value for measuring
  python3 llm_pipeline.py gaps   --run A_run1 --pass 1     -> feedback text after measuring pass 1
"""
import argparse
import json
import os
import re
from collections import defaultdict
from pathlib import Path

HERE = Path(__file__).resolve().parent
RUNS_DIR = HERE / "crt" / "llm_runs"
PASSES_DIR = HERE / "llm_passes"
RESULTS = HERE / "results"


def _p(path):
    # Agents run from the Windows harness: give them the UNC view of the WSL file.
    if os.environ.get("PROMPT_UNC_PATHS", "1") == "1":
        return "//wsl.localhost/Ubuntu" + str(path)
    return str(path)


RTL = _p(HERE / "rtl")
ISA = _p(HERE / "crt" / "isa.py")
BINS = _p(HERE / "docs" / "ml4dv_bins_description.txt")

FORBIDDEN_COMMON = [
    "crt/generator.py", "crt/func_coverage.py", "crt/ml4dv_coverage.py", "test_crt_decoder.py",
    "profiles/", "results/", "PAPER_COMPARISON.md", "README.md",
    "llm_passes/ (except files named in this brief)",
    "crt/llm_runs/ (except your own run's files named in this brief)",
    "crt/llm_streams.py", "llm_crt_prompts.py", "llm_pipeline.py",
    "mutants/ (mutation benchmark -- must not contaminate stimulus derivation)",
    "mutator.py", "run_mutation.py", "mutation_results/",
    "ibex-coverage-experiments/decoder/ (repo-level ml4dv copy)", "rl-coverage/", "cpu/",
    "/tmp/ml4dv", "any ml4dv / LLM4DV repository or paper text",
    "any scratch folder other than your own",
]
FORBIDDEN = {
    "A": FORBIDDEN_COMMON + ["rtl/ (no RTL in this condition)", "any other Ibex source"],
    "A1": FORBIDDEN_COMMON + ["rtl/ (no RTL in this condition)",
                              "crt/isa.py (no encoder library in this condition)",
                              "any other Ibex source"],
    "B": FORBIDDEN_COMMON,
    "C": FORBIDDEN_COMMON,
}

DUT_FACTS = {
    "A": """The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr \
(+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. \
Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled \
once per word. You do NOT have the RTL or the testbench source.""",
    "A1": """A RISC-V processor. Each stimulus is one 32-bit instruction word applied to the \
processor.""",
    "B": """The DUT is ibex_decoder.sv, simulated stand-alone (cocotb + Verilator).
  - Each stimulus is one 32-bit instruction word driven on instr_rdata_i AND instr_rdata_alu_i.
  - Configuration: RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1.
  - Side inputs are tied: instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0.
  - Outputs are sampled once per stimulus. You do NOT have the testbench source.""",
}
DUT_FACTS["C"] = DUT_FACTS["B"]

METRICS = {
    "A": f"""Functional coverage plan of 2107 bins, described (in prose) in {BINS}. That \
description is all that is known about the plan.""",
    "A1": f"""Functional coverage plan described (in prose) in {BINS}. That description is all \
that is known about the plan.""",
    "B": f"""  1. Functional coverage plan of 2107 bins, described (in prose) in {BINS}.
  2. Verilator line / branch / toggle coverage of ibex_decoder.""",
    "C": f"""  1. Functional plan (2107 bins), sampled from decoder outputs exactly as described in \
{BINS}. An ALU op bin is counted when rf_we_o=1, mult_sel_o=0, div_sel_o=0, rf_ren_a_o=1, \
alu_op_a_mux_sel_o=OP_A_REG_A, rf_wdata_sel_o=RF_WD_EX and alu_operator_o is one of \
ADD/SUB/XOR/OR/AND/SRA/SRL/SLL/SLT/SLTU; it is an "...I" (immediate) bin when \
alu_op_b_mux_sel_o=OP_B_IMM. Loads/stores come from data_req_o/data_we_o/data_type_o. The write \
port is sampled when rf_we_o=1 (or the instruction is a load), read ports when rf_ren_a_o / \
rf_ren_b_o = 1. Any instruction with illegal_insn_o=1 only counts the "illegal_instruction" bin.
  2. Verilator line / branch / toggle coverage of ibex_decoder.""",
}

FILES = {
    "A": f"""  {ISA}   -- the encoder library (the ONLY way to build instruction words)
  {BINS}   -- the coverage plan description""",
    "A1": f"""  {BINS}   -- the coverage plan description""",
    "B": f"""  {RTL}/ibex_decoder.sv   -- the DUT
  {RTL}/ibex_pkg.sv       -- its enums / constants
  {ISA}   -- the encoder library (the ONLY way to build instruction words)
  {BINS}   -- the coverage plan description""",
}
FILES["C"] = FILES["B"]

CITE = {
    "A": "which plan bins it targets and which instruction encodings / fields it relies on",
    "A1": "which plan bins it targets",
    "B": "the exact ibex_decoder.sv line number(s) and output signals it relies on, and which plan bins it targets",
}
CITE["C"] = CITE["B"]

EXAMPLE_FUNCTION = '''def build_example_addi_rd_sweep_stream(rng):
    """<what this targets and why, see the output contract>"""
    stream = []
    for rd in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rd, rng.randint(0, 31),
                            rng.randint(-2048, 2047)))   # addi rd, rs1, imm
    return stream'''

SYNTH = """You are writing a constrained-random test (CRT) generator for a hardware design-verification \
task. This is a research experiment: can an LLM, given only the inputs a verification engineer gets \
at the start of the job, write a CRT generator as good as an expert's? Work from the information \
listed here and your general knowledge of the RISC-V ISA.

IMPORTANT: Do NOT use or look for any existing verification IP or test generator for this design \
(lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or stimuli). \
Do NOT open these paths: {forbidden}.

## The design under test

{dut_facts}

## Files you may read (Read / Grep tools)

{files}
{own_files}
## Coverage metric(s) used to score your generator

{metrics}

## Coverage feedback ({pass_label})

{feedback}

## Action space

A builder returns a list of 32-bit instruction words. Build them ONLY with the encoders in \
{isa} (enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4 and the OPC opcode table); \
they will be imported for you. Raw integer literals are allowed only for deliberately malformed \
words, with a comment saying why.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific \
coverage goal. Each docstring must state {cite}, and why random words would rarely achieve it. \
Each stream: 16..512 words; `rng` is a random.Random -- use it for every free field so different \
seeds explore different values. The generator repeatedly picks one of ALL builders (yours from \
earlier passes too) uniformly at random and emits its whole stream.

Style reference (formatting only):

```python
{example}
```

## Writing and merging your generator (you do this yourself)

1. Write your builders YOURSELF (Write tool) into this file, which is your pass of the CRT:

     {target}

   The file must start with exactly these two lines:

```python
{header}
```

   followed by any private helpers, your `build_*_stream` functions, and a final line \
`NEW_BUILDERS = [<your new functions>]` (an empty list is allowed if you conclude nothing new \
is worth adding). No other imports.
2. Run the checker until it prints `CHECK OK`. It imports this file TOGETHER with your earlier \
passes (that is the merge into the run's generator), validates every builder, and snapshots \
your version for the record:

     {check_cmd_synth}

3. Write your reasoning per stream (what it targets, why, and every "cannot be hit" conclusion \
with your justification) to:

     {synth_report}

Do not create or edit any other repository file. Scratch files only under {scratch}. Your final \
message: a short summary (builders written, checker result).
"""

REVIEW = """You are the independent adversarial reviewer of a draft constrained-random test \
(CRT) generator written by another agent for a design-verification experiment. You have NO \
context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do \
not rubber-stamp.

Do NOT open: {forbidden}.

## The design under test

{dut_facts}

## Files you may read

{files}
{own_files}
## Coverage metric(s)

{metrics}

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field \
widths in {isa} yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), \
enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the \
claimed coverage goal.{rtl_check}
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines \
any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under {scratch} and run \
`MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the \
encoders, add {isa_dir_wsl} to sys.path and `from isa import *`.

## What you review

The draft generator, already written and merged by the synthesis agent:

  {target}

The synthesis agent's report (its reasoning and "cannot be hit" claims):

  {synth_report}

## Output (you edit the generator yourself)

1. Fix every problem DIRECTLY in {target} (Edit tool). Keep the two header lines unchanged. \
Remove a builder that is fundamentally broken (REJECT) rather than leaving it in. \
Do not add new coverage goals of your own -- you review, you do not author.
2. Run the checker until it prints `CHECK OK` (it also snapshots the reviewed version):

     {check_cmd_review}

3. Write your review to {review_report}: per function CONFIRMED, NEEDS FIX (what was wrong and \
what you changed) or REJECT; per "cannot be hit" claim CONFIRMED or DISPUTE, with reasoning.

Do not create or edit any other repository file. Your final message: a short summary \
(verdict counts, what you changed, checker result).
"""

PASS_HEADER = '''"""LLM-CRT run {run}, pass {k} (condition {cond}): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401'''

PASS_HEADER_NO_ISA = '''"""LLM-CRT run {run}, pass {k} (condition {cond}): written by the synthesis agent, reviewed and fixed in place by the review agent."""'''


def pass_header(run, k):
    """Return the required header for this run's condition.
    A1 has no isa import (paper-equivalent info level: no encoder library)."""
    cond = cond_of(run)
    tmpl = PASS_HEADER_NO_ISA if cond == "A1" else PASS_HEADER
    return tmpl.format(run=run, k=k, cond=cond)

SCRATCH = "C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad"


def cond_of(run):
    return run.split("_")[0]


def own_files(run, k):
    prev = [RUNS_DIR / f"{run}_p{i}.py" for i in range(1, k)]
    if not prev:
        return ""
    lines = "\n".join(f"  {_p(f)}" for f in prev)
    return (f"\nYour own generator from earlier passes (these builders keep running; "
            f"add NEW builders, do not repeat them):\n{lines}\n")


def scratch(run):
    return f"{SCRATCH}/{run}"


def tag(run, k):
    return f"llm_{run}_p{k}"


def results_dir(run, k):
    return RESULTS / f"{tag(run, k)}_e0_m2_b0"


# ---------------------------------------------------------------------------
# feedback
# ---------------------------------------------------------------------------
_CROSS = re.compile(r"^(\w+?)_x_(read_A|read_B|write)_reg_(\d+)$")
_PORT = re.compile(r"^(read_A|read_B|write)_reg_(\d+)$")


def _ranges(nums):
    nums, out, i = sorted(nums), [], 0
    while i < len(nums):
        j = i
        while j + 1 < len(nums) and nums[j + 1] == nums[j] + 1:
            j += 1
        out.append(str(nums[i]) if i == j else f"{nums[i]}-{nums[j]}")
        i = j + 1
    return ",".join(out)


def plan_feedback(run, k):
    files = sorted(results_dir(run, k).glob("ml4dv_cov_seed*.json"))
    union = None
    for f in files:
        b = json.load(open(f))["bins"]
        union = dict(b) if union is None else {x: union[x] + b[x] for x in union}
    holes = [x for x, v in union.items() if not v]
    hit = len(union) - len(holes)
    ops, ports, cross = [], defaultdict(list), defaultdict(list)
    for h in holes:
        m, mp = _CROSS.match(h), _PORT.match(h)
        if m:
            cross[(m.group(1), m.group(2))].append(int(m.group(3)))
        elif mp:
            ports[mp.group(1)].append(int(mp.group(2)))
        else:
            ops.append(h)
    out = [f"Plan coverage after measuring passes 1..{k} (union of 3 seeds x 100k stimuli): "
           f"{hit}/2107. Unreached bins ({len(holes)}):"]
    if ops:
        out.append("  operation bins: " + ", ".join(ops))
    for p, regs in sorted(ports.items()):
        out.append(f"  {p} port, registers {_ranges(regs)}")
    for (op, p), regs in sorted(cross.items()):
        out.append(f"  {op} x {p}, registers {_ranges(regs)}")
    if not holes:
        out.append("  (none)")
    return "\n".join(out), hit


def code_feedback(run, k):
    txt = (results_dir(run, k) / "code_cov.txt").read_text().splitlines()
    summary = [l for l in txt[1:5] if l.strip()]
    unc = [l.strip() for l in txt if re.match(r"\s+ibex_decoder\.sv:\d+", l)]
    keep = [l for l in unc]
    return ("Verilator code coverage of ibex_decoder (merged over the same runs):\n"
            + "\n".join(summary)
            + f"\nUncovered points ({len(keep)}; file:line  kind):\n  " + "\n  ".join(keep))


def feedback(run, k):
    if k == 1:
        return ("(none yet -- this is pass 1, nothing has been simulated. Work from the "
                "information above alone; do not invent coverage numbers.)")
    plan, _ = plan_feedback(run, k - 1)
    if cond_of(run) in ("A", "A1"):
        return plan
    return plan + "\n\n" + code_feedback(run, k - 1)


# ---------------------------------------------------------------------------
def target(run, k):
    return RUNS_DIR / f"{run}_p{k}.py"


def check_cmd(run, k, stage):
    return (f"MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 {HERE / 'llm_pipeline.py'} "
            f"check --run {run} --pass {k} --stage {stage}")


def _agent_paths(run, k):
    d = PASSES_DIR / run
    return dict(target=_p(target(run, k)),
                synth_report=_p(d / f"p{k}_synthesis_report.md"),
                review_report=_p(d / f"p{k}_review_report.md"),
                header=pass_header(run, k),
                check_cmd_synth=check_cmd(run, k, "synth"),
                check_cmd_review=check_cmd(run, k, "review"))


def _reject_a1(run):
    if cond_of(run) == "A1":
        raise SystemExit(
            f"ERROR: condition A1 (paper-equivalent info level) is text-only by design. "
            f"Run it via run_agent.py instead: python3 run_agent.py synth --run {run} --pass K"
        )


def build_synth(run, k):
    _reject_a1(run)
    c = cond_of(run)
    return SYNTH.format(
        forbidden=", ".join(FORBIDDEN[c]), dut_facts=DUT_FACTS[c], files=FILES[c],
        own_files=own_files(run, k), metrics=METRICS[c],
        pass_label=f"run {run}, pass {k}", feedback=feedback(run, k), isa=ISA, cite=CITE[c],
        example=EXAMPLE_FUNCTION, scratch=scratch(run), **_agent_paths(run, k))


def build_review(run, k):
    _reject_a1(run)
    c = cond_of(run)
    rtl_check = ("" if c in ("A", "A1") else
                 " Check every cited ibex_decoder.sv line / signal against the actual file.")
    return REVIEW.format(
        forbidden=", ".join(FORBIDDEN[c]), dut_facts=DUT_FACTS[c], files=FILES[c],
        own_files=own_files(run, k), metrics=METRICS[c], isa=ISA, rtl_check=rtl_check,
        scratch=scratch(run), isa_dir_wsl=str(HERE / "crt"), **_agent_paths(run, k))


def check(run, k, stage):
    """Run by the AGENTS: import passes 1..k of the run together (the merge),
    validate every builder, snapshot this pass's file into llm_passes/."""
    import importlib
    import random
    import shutil
    import sys
    sys.path.insert(0, str(HERE))
    f = target(run, k)
    errs = []
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
    names = {}
    for i in range(1, k + 1):
        try:
            mod = importlib.import_module(f"crt.llm_runs.{run}_p{i}")
        except Exception as e:  # noqa: BLE001
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
                    s = b(random.Random(seed))
                    again = b(random.Random(seed))
                except Exception as e:  # noqa: BLE001
                    errs.append(f"{b.__name__}(seed {seed}) raised {type(e).__name__}: {e}")
                    break
                if not isinstance(s, list) or not all(isinstance(w, int) and 0 <= w < 2 ** 32 for w in s):
                    errs.append(f"{b.__name__}: must return list[int] of 32-bit values")
                    break
                if not 16 <= len(s) <= 512:
                    errs.append(f"{b.__name__}: {len(s)} words (allowed 16..512)")
                    break
                if s != again:
                    errs.append(f"{b.__name__}: not deterministic for a given seed (use only rng)")
                    break
            else:
                print(f"  {b.__name__}: ok ({len(s)} words on seed 4)")
    if errs:
        print("CHECK FAILED:")
        for e in errs:
            print("  - " + e)
        sys.exit(1)
    snap = PASSES_DIR / run / f"p{k}_{stage}_snapshot.py"
    shutil.copyfile(f, snap)
    print(f"CHECK OK: run {run}, passes 1..{k} import together "
          f"({len(names)} builders in total); snapshot -> {snap.name}")


def merge(run, k):
    """LEGACY (runs made before 2026-10-05 afternoon): the orchestrator copied the
    reviewer's final code block into the pass file. New runs: agents write it."""
    block = (PASSES_DIR / run / f"p{k}_final_block.py").read_text()
    block = re.sub(r"^\s*(from|import)\s+\S+.*$", lambda m: "# (removed) " + m.group(0).strip(),
                   block, flags=re.M)
    RUNS_DIR.mkdir(exist_ok=True)
    (RUNS_DIR / "__init__.py").touch()
    out = RUNS_DIR / f"{run}_p{k}.py"
    out.write_text(pass_header(run, k) + "\n\n" + block + "\n")
    import importlib
    import random
    import sys
    sys.path.insert(0, str(HERE))
    mod = importlib.import_module(f"crt.llm_runs.{run}_p{k}")
    for b in mod.NEW_BUILDERS:
        for seed in range(3):
            s = b(random.Random(seed))
            assert isinstance(s, list) and all(isinstance(w, int) and 0 <= w < 2 ** 32 for w in s), b
        print(f"  {b.__name__}: {len(s)} words")
    print(f"merged -> {out}")


def modules(run, k):
    return ",".join(f"crt.llm_runs.{run}_p{i}" for i in range(1, k + 1))


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("cmd", choices=["synth", "review", "check", "merge", "modules", "gaps", "tag"])
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
    elif a.cmd == "merge":
        merge(a.run, a.k)
    elif a.cmd == "modules":
        print(modules(a.run, a.k))
    elif a.cmd == "tag":
        print(tag(a.run, a.k))
    elif a.cmd == "gaps":
        txt, hit = plan_feedback(a.run, a.k)
        print(txt.splitlines()[0])


if __name__ == "__main__":
    main()
