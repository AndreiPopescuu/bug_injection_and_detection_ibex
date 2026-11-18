You are deriving constrained-random test-generation rules for the Ibex RISC-V instruction decoder (ibex_decoder.sv), simulated stand-alone in a cocotb + Verilator testbench. This is a research project measuring whether an LLM given ONLY the RTL source, a coverage-plan description and this project's own coverage feedback can derive a constrained-random generator that beats unconstrained random and hand-written CRT -- WITHOUT borrowed verification knowledge.

IMPORTANT: Do NOT reference or rely on lowRISC's verification IP (riscv-dv, UVM testbenches, testlist.yaml) or on any existing LLM4DV / ml4dv prompts or stimuli. Do NOT open these paths: crt/generator.py, crt/func_coverage.py, profiles/, results/, llm_passes/, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy incl. test_max_coverage.py), rl-coverage/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text. Derive everything from the files listed below and the coverage data here.

## Files you may read (use the Read / Grep tools yourself)

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_decoder.sv     -- the DUT
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_pkg.sv         -- enums (alu_op_e, op_a_sel_e, ...)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py                    -- the ONLY encoder you may use (see action space)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt                   -- description of the functional coverage plan

## Test harness facts (fixed, not something you can change)

  - Each stimulus is one 32-bit instruction word driven on instr_rdata_i AND instr_rdata_alu_i.
  - Configuration: RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1.
  - Side inputs are tied: instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0.
  - Outputs are sampled once per stimulus. Order of stimuli does not matter for this purely combinational configuration, but streams are consumed in order anyway.

## Two coverage metrics (both measured on every run)

  1. Functional plan (2107 bins, the LLM4DV paper metric), sampled from decoder outputs exactly as described in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. An ALU op bin is counted when rf_we_o=1, mult_sel_o=0, div_sel_o=0, rf_ren_a_o=1, alu_op_a_mux_sel_o=OP_A_REG_A, rf_wdata_sel_o=RF_WD_EX and alu_operator_o is one of ADD/SUB/XOR/OR/AND/SRA/SRL/SLL/SLT/SLTU; it is an "...I" (immediate) bin when alu_op_b_mux_sel_o=OP_B_IMM. Loads/stores come from data_req_o/data_we_o/data_type_o. The write port is sampled when rf_we_o=1 (or the instruction is a load), read ports when rf_ren_a_o / rf_ren_b_o = 1. Any instruction with illegal_insn_o=1 only counts the "illegal_instruction" bin.
  2. Verilator line / branch / toggle coverage of ibex_decoder.

## Coverage feedback for this pass (pass 1 (from zero))

(no coverage data -- this pass starts from zero; reason from the RTL and the coverage-plan description alone, do not invent coverage numbers)

## Action space

A builder returns a list of 32-bit instruction words. Build them ONLY with the encoders in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py (enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4 and the OPC opcode table); they are already imported in crt/llm_streams.py. Raw integer literals are allowed only for deliberately malformed words, with a comment saying which decoder branch they hit.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage structure (a group of plan bins, or a specific case arm / if-branch in ibex_decoder.sv). Each function needs a docstring citing the exact ibex_decoder.sv line number(s) and output signals it relies on, and WHY the stream hits bins / lines that unconstrained random would rarely hit. Keep each stream between 16 and 512 words; `rng` is a random.Random instance -- use it for every free field so different seeds explore different values.

Style reference (this project's convention only, not RTL knowledge):

```python
def build_example_addi_rd_sweep_stream(rng):
    """Target ibex_decoder.sv:<line> -- <signal / case arm>.

    <why this sequence of instruction words exercises that structure,
    citing the exact RTL lines>.
    """
    stream = []
    for rd in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rd, rng.randint(0, 31),
                            rng.randint(-2048, 2047)))   # addi rd, rs1, imm
    return stream
```

Output ONLY a single ```python fenced code block containing your function(s) and a final line `NEW_BUILDERS = [<your functions>]`, plus a short prose section (outside the code block) with your reasoning per stream, citing exact RTL lines. If you conclude a bin or RTL line is unreachable in this configuration, say so explicitly with your citation instead of inventing a stream for it -- report it as a finding. Do not edit any file in the repository.

