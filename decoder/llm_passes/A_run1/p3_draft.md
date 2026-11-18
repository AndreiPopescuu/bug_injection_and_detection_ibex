```python
NEW_BUILDERS = []
```

**Reasoning: I added no builders, because I think all 65 open bins are unreachable.**

The 65 open bins all come from one operation: the SUBI operation bin, SUBI x read_A for registers 0-31, and SUBI x write for registers 0-31.

- **No such instruction in RV32IM + Zicsr.** RV32I has no subtract-immediate. The OP_IMM opcode (0x13) uses funct3 values 000, 010, 011, 100, 110, 111, 001 and 101. funct3=000 is always ADDI. Unlike OP (0x33), OP_IMM has no funct7 bit that turns an add into a subtract: for ADDI, bit 30 is just bit 10 of the immediate. Subtracting a constant is written as ADDI with a negative immediate, and the decoder's output for that is an add with an immediate operand. The only path to a subtract operation is OP funct7=0x20 funct3=000 (SUB), and that has a register as the second operand, not an immediate. So no word should produce the "subtract with an immediate" combination that a SUBI bin would need.

- **Earlier passes already tried every likely route:**
  - Pass 1 `build_addi_negative_imm_subi_probe_stream` emits ADDI with immediates from -2048 to -1, with rd and rs1 swept over all 32 registers. Pass 1 `build_itype_alu_port_cross_stream` covers the non-negative range. Together they hit every 12-bit immediate value, including all bit-30 / bit-31 patterns, for funct3=000.
  - Pass 2 `build_illegal_instruction_stream` emits OP_IMM shift words with every non-standard instr[31:25] pattern, every unimplemented major opcode, and words with bits[1:0] != 11.
  - Pass 2 `build_non_plan_legal_mix_stream` covers the rest of the legal instructions outside the plan (LUI, AUIPC, JAL, JALR, branches, M-extension, CSR ops, FENCE, SYSTEM).
  - Even so, after 3 seeds x 100k stimuli, the SUBI bins are at zero. That fits the bins having no matching encoding.

- **Any other decoder output can't be read as SUBI.** Loads, stores, JALR and AUIPC add an immediate. Branches compare registers. No legal or illegal word should make the decoder subtract an immediate.

- **More streams would only cost coverage.** A new builder would re-emit encodings that are already fully covered, while taking a share of the uniform builder selection away from streams that do work. Pass 6 showed this effect, where extra seeds diluted results.

I conclude the SUBI operation bin and its 64 port-cross bins (65 bins in total) are unreachable for this decoder configuration. The real ceiling for this plan is 2042/2107, which passes 1 and 2 already reach.

No files were written or changed.