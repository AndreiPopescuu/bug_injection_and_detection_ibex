```python
# Pass 2: no new builders. Nothing in the pass-2 feedback (65 plan bins, 171
# Verilator points) can be reached in this DUT configuration
# (RV32B=RV32BNone, BranchTargetALU=1, instr_first_cycle_i=1,
# illegal_c_insn_i=0). The prose below gives the RTL reason for each group.
NEW_BUILDERS = []
```

## Reasoning: why each unreached group cannot be hit

**Functional plan: SUBI op bin, SUBI x read_A (32 bins), SUBI x write (32 bins), 65 bins in total**
- RV32I has no subtract-immediate instruction, and this decoder has no output state that could mean one. `ALU_SUB` is assigned in exactly one place, ibex_decoder.sv line 994. That is inside `OPCODE_OP` (lines 944-946), which also sets `alu_op_b_mux_sel_o = OP_B_REG_B`. So "ALU_SUB with an immediate operand" never appears on the outputs.
- In `OPCODE_OP_IMM` (lines 816-827), funct3=000 always gives `ALU_ADD`, whatever the immediate is.
- Pass 1 already sent the two encodings a monitor could plausibly call "SUBI":
  - `addi` with negative immediates, in half of the ADDI sweep.
  - `addi` with imm[11:5]=0100000, the SUB funct7 pattern in the I-type slot. Positive immediates are drawn uniformly from 0..2047, so about 1/64 of them have this pattern. That is thousands of such words over 3 x 100k stimuli.
- Neither encoding credited the bin. Both instruction ports carry the same word, so no stimulus can make the decoder report a subtract-immediate. 2042/2107 is the ceiling for this plan.

**Verilator branch/line points: unreachable because of fixed parameters or tied inputs**
- **RV32B-gated code (RV32B=RV32BNone is a constant).**
  - Lines 830-889 (`if (RV32B != RV32BNone)` and the case items 832-849, 855-885, 889 under it).
  - Lines 897-927 (the 898/901 if/else, 908-927 case items, 912/923/924).
  - Lines 949-987 (the 954/963/972/981 if/else, 951/960/969/978/987 case items).
  - The inner `if (RV32B...)` bodies at 1006-1089. Pass 1 already reaches their case items (rol, ror, min, ... bcompress).
  - Lines 413, 415 and 422 (`RV32B == ...` elsif/if).
  - Toggle bits that come only from this code: `alu_multicycle_o` (line 70), `use_rs3_d` / `use_rs3_q` (lines 114-115, 160, 683), and `alu_operator_o[6]`. Bit 6 needs an ALU op with enum index 64 or more. In ibex_pkg.sv lines 78-185 the largest RV32I/M op the decoder emits is `ALU_SLTU` at index 43.
- **BranchTargetALU=1 is a constant.**
  - The else branches at lines 695, 717, 750 and 1148.
  - The `if (instr_first_cycle_i && !BranchTargetALU)` at lines 701 and 723.
  - `bt_a_mux_sel_o[0]` (line 46): it only takes `OP_A_CURRPC` (2'b10) or `OP_A_REG_A` (2'b00) (lines 677, 696, 718, 751, 1149; enum at pkg lines 239-244), so bit 0 is always 0.
- **instr_first_cycle_i is tied to 1.**
  - The else branches at lines 244, 257 and 578.
  - Line 762 if/else (`else if (!BranchTargetALU)` is only reached when first_cycle=0).
- **illegal_c_insn_i is tied to 0.** This covers line 645 `if` and the toggle point at line 41.
- **RV32E=0 is a constant.** `illegal_reg_rv32e` (line 101) is set to 1'b0 at line 182.
- **Default arms that can never be selected.**
  - Line 443: the `instr[14:12]` case at 352 lists all 8 funct3 values (353-358, 360, 398).
  - Line 940: the case at 821 likewise lists all 8 values.
  - Line 431 else: needs instr[26]=1, but those words are already taken by the `if (instr[26])` at line 399.
- **Constant-zero immediate bits (wiring, lines 135-140).**
  - `imm_b_type_o[0]` and `imm_j_type_o[0]` are hard 1'b0.
  - `imm_u_type_o[11:0]` is hard 12'b0.
  - `zimm_rs1_type_o[31:5]` is hard 27'b0.

## Summary
I added no builders. All 65 missing plan bins belong to SUBI, an operation this decoder cannot express. All 171 missing code-coverage points are tied off by parameters (RV32B=None, BranchTargetALU=1, RV32E=0), by tied inputs (instr_first_cycle_i=1, illegal_c_insn_i=0), by case defaults no funct3 value can select, or by immediate bits wired to zero. The pass-1 builders already reach everything reachable: 2042/2107 plan bins and the code coverage reported in the brief.