```python
# Pass 2: no new builders. None of the 65 unreached plan bins and none of the
# 171 uncovered Verilator points can be reached with this DUT configuration
# (RV32B=RV32BNone, BranchTargetALU=1, instr_first_cycle_i=1,
# illegal_c_insn_i=0). Adding streams would only take generator time away from
# the pass-1 builders, which already saturate everything reachable.
NEW_BUILDERS = []
```

## Reasoning: why each remaining group cannot be reached

**Plan bins: SUBI, SUBI x read_A (32), SUBI x write (32), 65 bins in total.**
- RV32I has no SUBI instruction. The decoder makes `ALU_SUB` in one place only: ibex_decoder.sv:994, for OPCODE_OP with `{funct7,funct3}={0100000,000}`. On that path line 946 sets `alu_op_b_mux_sel_o = OP_B_REG_B`.
- For OPCODE_OP_IMM, funct3=000 always sets `alu_operator_o = ALU_ADD` (line 822) and `OP_B_IMM` (line 818).
- So no word can produce ALU_SUB together with an immediate operand. `instr_rdata_i` and `instr_rdata_alu_i` carry the same word, so the two always-blocks can't be split either.
- Pass 1 already tested the "addi with a negative immediate" reading. `build_itype_op_x_port_sweep_stream` swept addi_neg x all 32 rd/rs1, and SUBI still stayed at 0.
- Random negative immediates also put imm[11:5]=0100000 (a sub-like funct7 pattern on OP_IMM) in about 1 of every 64 addi_neg words. Over 300k stimuli that happened many times, so that classifier reading is ruled out too.
- That leaves no encoding to try.

**Verilator points that depend on RV32B != RV32BNone (the parameter is a constant false):**
- Lines 830/835/841/850/856/862/868/874/880 (if/else), the case arms at 832-889, and lines 897/898/901, 908-927, 912/923/924.
- Lines 949/954/963/972/981 and the case arms at 951/960/969/978/987.
- Lines 1006-1089, all `if (RV32B ...)` guards.
- Lines 413/415/422, the elsif chains on RV32B values.
- Toggle points:
  - `alu_multicycle_o` (line 70) is set only at 852-1091 inside these blocks.
  - `use_rs3_d` / `use_rs3_q` (lines 114-115) are set only at 902/955/964/973/982.
  - `alu_operator_o[6]` (line 65): the enum index needs to be at least 64. The largest value the RV32I/M paths assign is ALU_SLTU = 44 (ibex_pkg.sv:78-147).

**BranchTargetALU=1 constant:**
- Lines 695 else, 717 else, 750 else and 1148 else.
- Lines 701 if and 723 if (`&& !BranchTargetALU`), and 762 if/else (`else if (!BranchTargetALU)`).

**instr_first_cycle_i tied to 1:**
- Lines 244 else, 257 else and 578 else. Line 762 is also never evaluated because of this.

**illegal_c_insn_i tied to 0:**
- Line 645 if, and the toggle point at line 41.

**Logically dead code in the RTL:**
- Line 431 else: it sits inside the `else` of `if (instr[26])` at line 399, so instr[26] is already 0.
- Lines 443 and 940 case default: funct3 has 3 bits and all 8 values are listed explicitly (or as 001/101).

**Toggle points tied to a constant by the RTL structure:**
- `illegal_reg_rv32e` (line 101) is 0 because RV32E=0 (line 182).
- `imm_b_type_o[0]` and `imm_j_type_o[0]` are literal 1'b0 (lines 135, 137). `imm_u_type_o[11:0]` is literal 12'b0 (line 136).
- `zimm_rs1_type_o[31:5]` is literal 27'b0 (line 140).
- `bt_a_mux_sel_o[0]` only ever takes OP_A_CURRPC=2 or OP_A_REG_A=0 (lines 677/696/718/751/1149; enum at ibex_pkg.sv:240-243), so bit 0 is always 0.

**Bottom line:** under this configuration 2042/2107 is the plan ceiling. The 171 uncovered code points sit on parameter- or tie-off-constant branches, constant output bits, or dead RTL arms, so no new instruction stream can reach them.