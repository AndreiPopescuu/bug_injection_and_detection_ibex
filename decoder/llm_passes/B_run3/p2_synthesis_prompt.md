You are writing a constrained-random test (CRT) generator for a hardware design-verification task. This is a research experiment: can an LLM, given only the inputs a verification engineer gets at the start of the job, write a CRT generator as good as an expert's? Work from the information listed here and your general knowledge of the RISC-V ISA.

IMPORTANT: Do NOT use or look for any existing verification IP or test generator for this design (lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or stimuli). Do NOT open these paths: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own.

## The design under test

The DUT is ibex_decoder.sv, simulated stand-alone (cocotb + Verilator).
  - Each stimulus is one 32-bit instruction word driven on instr_rdata_i AND instr_rdata_alu_i.
  - Configuration: RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1.
  - Side inputs are tied: instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0.
  - Outputs are sampled once per stimulus. You do NOT have the testbench source.

## Files you may read (Read / Grep tools)

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_decoder.sv   -- the DUT
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_pkg.sv       -- its enums / constants
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

Your own generator from earlier passes (these builders keep running; add NEW builders, do not repeat them):
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_runs/B_run3_p1.py

## Coverage metric(s) used to score your generator

  1. Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt.
  2. Verilator line / branch / toggle coverage of ibex_decoder.

## Coverage feedback (run B_run3, pass 2)

Plan coverage after measuring passes 1..1 (union of 3 seeds x 100k stimuli): 2042/2107. Unreached bins (65):
  operation bins: SUBI
  SUBI x read_A, registers 0-31
  SUBI x write, registers 0-31

Verilator code coverage of ibex_decoder (merged over the same runs):
  v_branch       80/164     48.78%
  v_line        158/197     80.20%
  v_toggle      394/442     89.14%
  all           632/803     78.70%
Uncovered points (171; file:line  kind):
  ibex_decoder.sv:1006  if
  ibex_decoder.sv:1012  if
  ibex_decoder.sv:1018  if
  ibex_decoder.sv:1019  if
  ibex_decoder.sv:1020  if
  ibex_decoder.sv:1021  if
  ibex_decoder.sv:1023  if
  ibex_decoder.sv:1024  if
  ibex_decoder.sv:1025  if
  ibex_decoder.sv:1027  if
  ibex_decoder.sv:1028  if
  ibex_decoder.sv:1029  if
  ibex_decoder.sv:1032  if
  ibex_decoder.sv:1033  if
  ibex_decoder.sv:1034  if
  ibex_decoder.sv:1037  if
  ibex_decoder.sv:1038  if
  ibex_decoder.sv:1039  if
  ibex_decoder.sv:1040  if
  ibex_decoder.sv:1043  if
  ibex_decoder.sv:1046  if
  ibex_decoder.sv:1047  if
  ibex_decoder.sv:1049  if
  ibex_decoder.sv:1052  if
  ibex_decoder.sv:1055  if
  ibex_decoder.sv:1058  if
  ibex_decoder.sv:1061  if
  ibex_decoder.sv:1064  if
  ibex_decoder.sv:1067  if
  ibex_decoder.sv:1072  if
  ibex_decoder.sv:1075  if
  ibex_decoder.sv:1078  if
  ibex_decoder.sv:1083  if
  ibex_decoder.sv:1089  if
  ibex_decoder.sv:1148  else
  ibex_decoder.sv:244  else
  ibex_decoder.sv:257  else
  ibex_decoder.sv:431  else
  ibex_decoder.sv:578  else
  ibex_decoder.sv:645  if
  ibex_decoder.sv:695  else
  ibex_decoder.sv:701  if
  ibex_decoder.sv:717  else
  ibex_decoder.sv:723  if
  ibex_decoder.sv:750  else
  ibex_decoder.sv:762  if
  ibex_decoder.sv:762  else
  ibex_decoder.sv:830  if
  ibex_decoder.sv:835  if
  ibex_decoder.sv:835  else
  ibex_decoder.sv:841  if
  ibex_decoder.sv:841  else
  ibex_decoder.sv:850  if
  ibex_decoder.sv:850  else
  ibex_decoder.sv:856  if
  ibex_decoder.sv:856  else
  ibex_decoder.sv:862  if
  ibex_decoder.sv:862  else
  ibex_decoder.sv:868  if
  ibex_decoder.sv:868  else
  ibex_decoder.sv:874  if
  ibex_decoder.sv:874  else
  ibex_decoder.sv:880  if
  ibex_decoder.sv:880  else
  ibex_decoder.sv:897  if
  ibex_decoder.sv:898  if
  ibex_decoder.sv:898  else
  ibex_decoder.sv:901  if
  ibex_decoder.sv:901  else
  ibex_decoder.sv:912  if
  ibex_decoder.sv:912  else
  ibex_decoder.sv:923  if
  ibex_decoder.sv:923  else
  ibex_decoder.sv:924  if
  ibex_decoder.sv:924  else
  ibex_decoder.sv:949  if
  ibex_decoder.sv:954  if
  ibex_decoder.sv:954  else
  ibex_decoder.sv:963  if
  ibex_decoder.sv:963  else
  ibex_decoder.sv:972  if
  ibex_decoder.sv:972  else
  ibex_decoder.sv:981  if
  ibex_decoder.sv:981  else
  ibex_decoder.sv:413  elsif
  ibex_decoder.sv:415  if
  ibex_decoder.sv:422  elsif
  ibex_decoder.sv:443  case
  ibex_decoder.sv:832  case
  ibex_decoder.sv:834  case
  ibex_decoder.sv:837  case
  ibex_decoder.sv:838  case
  ibex_decoder.sv:839  case
  ibex_decoder.sv:841  case
  ibex_decoder.sv:842  case
  ibex_decoder.sv:844  case
  ibex_decoder.sv:845  case
  ibex_decoder.sv:846  case
  ibex_decoder.sv:847  case
  ibex_decoder.sv:848  case
  ibex_decoder.sv:849  case
  ibex_decoder.sv:855  case
  ibex_decoder.sv:861  case
  ibex_decoder.sv:867  case
  ibex_decoder.sv:873  case
  ibex_decoder.sv:879  case
  ibex_decoder.sv:885  case
  ibex_decoder.sv:889  case
  ibex_decoder.sv:908  case
  ibex_decoder.sv:909  case
  ibex_decoder.sv:911  case
  ibex_decoder.sv:914  case
  ibex_decoder.sv:915  case
  ibex_decoder.sv:919  case
  ibex_decoder.sv:920  case
  ibex_decoder.sv:922  case
  ibex_decoder.sv:927  case
  ibex_decoder.sv:940  case
  ibex_decoder.sv:951  case
  ibex_decoder.sv:960  case
  ibex_decoder.sv:969  case
  ibex_decoder.sv:978  case
  ibex_decoder.sv:987  case
  ibex_decoder.sv:101  illegal_reg_rv32e
  ibex_decoder.sv:114  use_rs3_d
  ibex_decoder.sv:115  use_rs3_q
  ibex_decoder.sv:41  illegal_c_insn_i
  ibex_decoder.sv:46  bt_a_mux_sel_o[0]
  ibex_decoder.sv:50  imm_b_type_o[0]
  ibex_decoder.sv:51  imm_u_type_o[0]
  ibex_decoder.sv:51  imm_u_type_o[10]
  ibex_decoder.sv:51  imm_u_type_o[11]
  ibex_decoder.sv:51  imm_u_type_o[1]
  ibex_decoder.sv:51  imm_u_type_o[2]
  ibex_decoder.sv:51  imm_u_type_o[3]
  ibex_decoder.sv:51  imm_u_type_o[4]
  ibex_decoder.sv:51  imm_u_type_o[5]
  ibex_decoder.sv:51  imm_u_type_o[6]
  ibex_decoder.sv:51  imm_u_type_o[7]
  ibex_decoder.sv:51  imm_u_type_o[8]
  ibex_decoder.sv:51  imm_u_type_o[9]
  ibex_decoder.sv:52  imm_j_type_o[0]
  ibex_decoder.sv:53  zimm_rs1_type_o[10]
  ibex_decoder.sv:53  zimm_rs1_type_o[11]
  ibex_decoder.sv:53  zimm_rs1_type_o[12]
  ibex_decoder.sv:53  zimm_rs1_type_o[13]
  ibex_decoder.sv:53  zimm_rs1_type_o[14]
  ibex_decoder.sv:53  zimm_rs1_type_o[15]
  ibex_decoder.sv:53  zimm_rs1_type_o[16]
  ibex_decoder.sv:53  zimm_rs1_type_o[17]
  ibex_decoder.sv:53  zimm_rs1_type_o[18]
  ibex_decoder.sv:53  zimm_rs1_type_o[19]
  ibex_decoder.sv:53  zimm_rs1_type_o[20]
  ibex_decoder.sv:53  zimm_rs1_type_o[21]
  ibex_decoder.sv:53  zimm_rs1_type_o[22]
  ibex_decoder.sv:53  zimm_rs1_type_o[23]
  ibex_decoder.sv:53  zimm_rs1_type_o[24]
  ibex_decoder.sv:53  zimm_rs1_type_o[25]
  ibex_decoder.sv:53  zimm_rs1_type_o[26]
  ibex_decoder.sv:53  zimm_rs1_type_o[27]
  ibex_decoder.sv:53  zimm_rs1_type_o[28]
  ibex_decoder.sv:53  zimm_rs1_type_o[29]
  ibex_decoder.sv:53  zimm_rs1_type_o[30]
  ibex_decoder.sv:53  zimm_rs1_type_o[31]
  ibex_decoder.sv:53  zimm_rs1_type_o[5]
  ibex_decoder.sv:53  zimm_rs1_type_o[6]
  ibex_decoder.sv:53  zimm_rs1_type_o[7]
  ibex_decoder.sv:53  zimm_rs1_type_o[8]
  ibex_decoder.sv:53  zimm_rs1_type_o[9]
  ibex_decoder.sv:65  alu_operator_o[6]
  ibex_decoder.sv:70  alu_multicycle_o

## Action space

A builder returns a list of 32-bit instruction words. Build them ONLY with the encoders in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py (enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4 and the OPC opcode table); they will be imported for you. Raw integer literals are allowed only for deliberately malformed words, with a comment saying why.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage goal. Each docstring must state the exact ibex_decoder.sv line number(s) and output signals it relies on, and which plan bins it targets, and why random words would rarely achieve it. Each stream: 16..512 words; `rng` is a random.Random -- use it for every free field so different seeds explore different values. The generator repeatedly picks one of ALL builders (yours from earlier passes too) uniformly at random and emits its whole stream.

Style reference (formatting only):

```python
def build_example_addi_rd_sweep_stream(rng):
    """<what this targets and why, see the output contract>"""
    stream = []
    for rd in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rd, rng.randint(0, 31),
                            rng.randint(-2048, 2047)))   # addi rd, rs1, imm
    return stream
```

Output ONLY a single ```python fenced code block with your function(s) (plus any private helpers they need, no imports) ending with `NEW_BUILDERS = [<your new functions>]`, then a short prose section with your reasoning per stream. If you conclude some bins cannot be hit at all, say so with your reasoning instead of inventing a stream for them. Do not edit any repository file; you may write scratch files only under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run3.
