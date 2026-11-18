"""llm_crt_prompts.py -- FIXED prompt templates for the isolated agents that
write / review crt/llm_streams.py builders (decoder port of
rl-coverage/level11_maxconfig/crt_synthesis_prompts.py).

Same rules as L11: the wording is part of the methodology -- do not edit it
casually. Only the placeholders vary per pass (coverage gaps, draft files).

Information the synthesis agent MAY use (the same kind of input the LLM4DV
paper's LLM receives, plus the RTL):
  - rtl/ibex_decoder.sv, rtl/ibex_pkg.sv
  - crt/isa.py              (this project's encoder = the action space)
  - docs/ml4dv_bins_description.txt (the paper's coverage-plan description)
  - the uncovered-bin / uncovered-line lists passed in below
It must NOT read: crt/generator.py, profiles/ (the hand-written CRT it is
compared against), results/, anything under rl-coverage/, or the ml4dv repo
(paper prompts / logged LLM stimuli).

Usage:
    python3 llm_crt_prompts.py synthesis --pass-id 1 [--gaps-file gaps.txt]
    python3 llm_crt_prompts.py review --draft-file draft1.md [--draft-file ...]
"""
import argparse
import os
from pathlib import Path

HERE = Path(__file__).resolve().parent

EXAMPLE_FUNCTION = '''def build_example_addi_rd_sweep_stream(rng):
    """Target ibex_decoder.sv:<line> -- <signal / case arm>.

    <why this sequence of instruction words exercises that structure,
    citing the exact RTL lines>.
    """
    stream = []
    for rd in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rd, rng.randint(0, 31),
                            rng.randint(-2048, 2047)))   # addi rd, rs1, imm
    return stream'''

SYNTHESIS_PROMPT_TEMPLATE = """You are deriving constrained-random test-generation rules for the \
Ibex RISC-V instruction decoder (ibex_decoder.sv), simulated stand-alone in a cocotb + Verilator \
testbench. This is a research project measuring whether an LLM given ONLY the RTL source, a \
coverage-plan description and this project's own coverage feedback can derive a constrained-\
random generator that beats unconstrained random and hand-written CRT -- WITHOUT borrowed \
verification knowledge.

IMPORTANT: Do NOT reference or rely on lowRISC's verification IP (riscv-dv, UVM testbenches, \
testlist.yaml) or on any existing LLM4DV / ml4dv prompts or stimuli. Do NOT open these paths: \
{forbidden_paths}. Derive everything from the files listed below and the coverage data here.

## Files you may read (use the Read / Grep tools yourself)

  {rtl_dir}/ibex_decoder.sv     -- the DUT
  {rtl_dir}/ibex_pkg.sv         -- enums (alu_op_e, op_a_sel_e, ...)
  {isa_path}                    -- the ONLY encoder you may use (see action space)
  {bins_path}                   -- description of the functional coverage plan

## Test harness facts (fixed, not something you can change)

  - Each stimulus is one 32-bit instruction word driven on instr_rdata_i AND instr_rdata_alu_i.
  - Configuration: RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1.
  - Side inputs are tied: instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0.
  - Outputs are sampled once per stimulus. Order of stimuli does not matter for this purely \
combinational configuration, but streams are consumed in order anyway.

## Two coverage metrics (both measured on every run)

  1. Functional plan (2107 bins, the LLM4DV paper metric), sampled from decoder outputs exactly \
as described in {bins_path}. An ALU op bin is counted when rf_we_o=1, mult_sel_o=0, div_sel_o=0, \
rf_ren_a_o=1, alu_op_a_mux_sel_o=OP_A_REG_A, rf_wdata_sel_o=RF_WD_EX and alu_operator_o is one of \
ADD/SUB/XOR/OR/AND/SRA/SRL/SLL/SLT/SLTU; it is an "...I" (immediate) bin when \
alu_op_b_mux_sel_o=OP_B_IMM. Loads/stores come from data_req_o/data_we_o/data_type_o. The write \
port is sampled when rf_we_o=1 (or the instruction is a load), read ports when rf_ren_a_o / \
rf_ren_b_o = 1. Any instruction with illegal_insn_o=1 only counts the "illegal_instruction" bin.
  2. Verilator line / branch / toggle coverage of ibex_decoder.

## Coverage feedback for this pass ({pass_label})

{gaps_block}

## Action space

A builder returns a list of 32-bit instruction words. Build them ONLY with the encoders in \
{isa_path} (enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4 and the OPC opcode table); \
they are already imported in crt/llm_streams.py. Raw integer literals are allowed only for \
deliberately malformed words, with a comment saying which decoder branch they hit.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific \
coverage structure (a group of plan bins, or a specific case arm / if-branch in \
ibex_decoder.sv). Each function needs a docstring citing the exact ibex_decoder.sv line \
number(s) and output signals it relies on, and WHY the stream hits bins / lines that \
unconstrained random would rarely hit. Keep each stream between 16 and 512 words; `rng` is a \
random.Random instance -- use it for every free field so different seeds explore different \
values.

Style reference (this project's convention only, not RTL knowledge):

```python
{example_function}
```

Output ONLY a single ```python fenced code block containing your function(s) and a final line \
`NEW_BUILDERS = [<your functions>]`, plus a short prose section (outside the code block) with \
your reasoning per stream, citing exact RTL lines. If you conclude a bin or RTL line is \
unreachable in this configuration, say so explicitly with your citation instead of inventing \
a stream for it -- report it as a finding. Do not edit any file in the repository.
"""

REVIEW_PROMPT_TEMPLATE = """You are the independent adversarial review pass for the draft \
report(s) below, produced by another agent that derived constrained-random stream builders \
for the Ibex instruction decoder (cocotb + Verilator coverage project). Re-derive and \
cross-check every claim -- do NOT rubber-stamp. You have NO context from whatever produced \
these drafts; treat them as unverified external submissions.

## Files to read yourself

  {rtl_dir}/ibex_decoder.sv, {rtl_dir}/ibex_pkg.sv   -- the DUT (verify every line citation)
  {isa_path}                                         -- the encoders (verify every encoding)
  {bins_path}                                        -- coverage plan description
  {streams_path}                                     -- where the functions will be merged

Do NOT open: {forbidden_paths}.

Harness facts: RV32B=RV32BNone, RV32M=RV32MFast, BranchTargetALU=1, instr_first_cycle_i=1, \
branch_taken_i=1, illegal_c_insn_i=0; one 32-bit word per stimulus, outputs sampled each time.

## What to check, for EVERY function

1. Does every cited ibex_decoder.sv line / signal exist and say what the draft claims?
2. Does every encoder call produce the instruction the comment says? Check field order and \
widths in {isa_path} yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), \
enc_r(op, f3, f7, rd, rs1, rs2)) -- argument-order mistakes are the most likely bug.
3. Would the decoder actually decode the word as legal (or illegal, if intended) in THIS \
configuration (RV32BNone!) and drive the outputs the coverage plan samples?
4. Every "unreachable" claim: verify independently, CONFIRMED UNREACHABLE or DISPUTE.
5. Python correctness: returns list[int] of 32-bit values, 16..512 words, uses rng for free \
fields, no imports beyond what crt/llm_streams.py already provides.

## Draft(s) to review

{draft_reports_block}

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix + corrected code) or REJECT. Per unreachable \
claim: CONFIRMED UNREACHABLE or DISPUTE. End with ONE final ```python block containing only \
CONFIRMED / fixed functions and a final line `NEW_BUILDERS = [...]`, ready to append to \
{streams_path} as-is. Do not edit any file in the repository.
"""

FORBIDDEN = ["crt/generator.py", "crt/func_coverage.py", "profiles/", "results/", "llm_passes/",
             "ibex-coverage-experiments/decoder/ (repo-level ml4dv copy incl. test_max_coverage.py)",
             "rl-coverage/", "/tmp/ml4dv", "any ml4dv / LLM4DV repository or paper text"]


def _p(path):
    # Agents run from the Windows harness: give them the UNC view of the WSL file.
    if os.environ.get("PROMPT_UNC_PATHS") == "1":
        return "//wsl.localhost/Ubuntu" + str(path)
    return str(path)


def _common():
    return dict(
        rtl_dir=_p(HERE / "rtl"),
        isa_path=_p(HERE / "crt" / "isa.py"),
        bins_path=_p(HERE / "docs" / "ml4dv_bins_description.txt"),
        streams_path=_p(HERE / "crt" / "llm_streams.py"),
        forbidden_paths=", ".join(FORBIDDEN),
    )


def build_synthesis_prompt(pass_label, gaps_text):
    gaps = gaps_text.strip() or (
        "(no coverage data -- this pass starts from zero; reason from the RTL and the "
        "coverage-plan description alone, do not invent coverage numbers)")
    return SYNTHESIS_PROMPT_TEMPLATE.format(
        pass_label=pass_label, gaps_block=gaps, example_function=EXAMPLE_FUNCTION, **_common())


def build_review_prompt(draft_texts):
    return REVIEW_PROMPT_TEMPLATE.format(
        draft_reports_block="\n\n---\n\n".join(draft_texts), **_common())


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    s = sub.add_parser("synthesis")
    s.add_argument("--pass-id", required=True)
    s.add_argument("--gaps-file", help="text file with uncovered bins / lines")
    r = sub.add_parser("review")
    r.add_argument("--draft-file", action="append", required=True, dest="drafts")
    a = ap.parse_args()
    if a.cmd == "synthesis":
        gaps = Path(a.gaps_file).read_text() if a.gaps_file else ""
        print(build_synthesis_prompt(f"pass {a.pass_id}", gaps))
    else:
        print(build_review_prompt([Path(f).read_text() for f in a.drafts]))


if __name__ == "__main__":
    main()
