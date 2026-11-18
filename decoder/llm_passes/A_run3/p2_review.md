## Review of A_run3 pass-2 draft

I checked the encoder signatures in crt/isa.py myself: enc_i(op,f3,rd,rs1,imm), enc_s(op,f3,rs1,rs2,imm), enc_b(op,f3,rs1,rs2,imm13), enc_r(op,f3,f7,rd,rs1,rs2), enc_ish(op,f3,top5,b26,b25,rd,rs1,shamt). I also ran the draft under WSL against my own legality checker for RV32IM + Zicsr + privileged, with no C and no B. The script is in scratchpad/A_run3_review_p2/chk.py.

### build_illegal_instruction_stream (and helpers _illegal_word, _r5, _ILLEGAL_OPCODES, _LEGAL_R_F7, _SYS_F12_LEGAL): CONFIRMED

**1. Encoder calls.** Every call passes its arguments in the right order.
- k=2 and k=3 call enc_r(OP, f3, f7, rd, rs1, rs2).
- k=4 and k=5 call enc_ish(OP_IMM, f3, top5, b26, b25, rd, rs1, shamt).
- k=7 calls enc_s(STORE, f3, rs1, rs2, imm).
- k=8 calls enc_b with an even immediate in [-4096, 4094], which fits in 13 bits.
- In k=1, `x & 0x7C | r` parses as `(x & 0x7C) | r`, because `&` binds tighter than `|`. That keeps instr[6:2] of a legal opcode and forces [1:0] into {00, 01, 10}, as intended.

**2. Legality.** The words are illegal as claimed.
- _ILLEGAL_OPCODES is exactly the 21 opcodes with [1:0]=11 left after removing the 11 legal majors (32 - 11 = 21). I checked each one: LOAD-FP, custom-0..3, OP-IMM-32, the 48/64/80-bit prefixes, STORE-FP, AMO, OP-32, the FMA group, OP-FP, OP-V and the reserved 0x6B/0x77.
- Each class matches RV32IM + Zicsr with B absent:
  - OP: funct7 outside {00, 01, 20}, or funct7=20 with funct3 outside {000, 101}.
  - slli: instr[31:25] != 0.
  - srli/srai: instr[31:25] outside {0000000, 0100000}.
  - LOAD funct3 011, 110 or 111.
  - STORE funct3 011 to 111.
  - BRANCH funct3 010 or 011.
  - JALR funct3 != 0.
  - MISC_MEM funct3 010 to 111.
  - SYSTEM funct3=100, whose [13:12]=00 means it is not a CSR op.
  - SYSTEM funct3=000 with rd=rs1=0 and a funct12 outside {ecall, ebreak, mret, dret, wfi}.
- **Empirical check:** 200 seeds x 128 words = 25,600 words, and 0 were legal. I also confirmed the checker accepts known-legal words (sub, srai, wfi).

**3. Python.** It returns a list of 128 ints, all in [0, 2^32). Every free field comes from rng, every helper is defined, there are no imports, and no names collide with the pass-1 module-level names.

**Caveat (not a defect):** the prose plan does not name an `illegal_instruction` bin. However, the count arithmetic supports exactly one extra bin beyond the plan:
- 26 operation bins
- 96 port bins (32 registers x 3 ports)
- 1,984 cross bins: 10 R-type ops x 3 ports x 32 = 960, 10 I-type ops x 2 x 32 = 640, 3 loads x 2 x 32 = 192, 3 stores x 2 x 32 = 192
- That totals 2,106, one short of 2,107.

So the target is plausible. Even if the decoder only implements a subset of these checks, mixing all 12 classes makes the stream robust.

### "Cannot be hit" claims

**SUBI (1 operation bin + SUBI x read_A + SUBI x write, 32 registers each = 65 bins): CONFIRMED.**
- RV32I has no subtract-immediate encoding. OP-IMM funct3=000 is always ADDI, and instr[31:20] there is pure immediate, so bit 30 is not an opcode modifier.
- Nothing else in this ISA uses an immediate operand B together with a subtract: loads, stores, JAL/JALR and AUIPC all add, branches compare on registers, and SYSTEM/CSR instructions do not use a SUB ALU op.
- Pass 1 (A_run3_p1.py) did emit both obvious aliases, with all 32 rd and rs1 values:
  - ADDI with strictly negative immediates (`addi_neg`).
  - ADDI with uniform non-negative immediates, which hit imm[11:5]=0100000 (imm 0x400 to 0x41F) with probability 32/2048 = 1/64, as the draft says.
- So no legal encoding is left for this condition to try. The only hole is a testbench that maps SUBI to some illegal encoding. That would be unprincipled, and the new illegal stream incidentally probes some of that space anyway (OP-IMM shifts with funct7=0x20-like bits, and OP funct7=0x20 variants).

### Final block

```python
_ILLEGAL_OPCODES = [  # 7-bit major opcodes with [1:0]=11 that RV32IM+Zicsr does not decode
    0x07, 0x0B, 0x1B, 0x1F, 0x27, 0x2B, 0x2F, 0x3B, 0x3F, 0x43, 0x47, 0x4B,
    0x4F, 0x53, 0x57, 0x5B, 0x5F, 0x6B, 0x77, 0x7B, 0x7F,
]
_LEGAL_R_F7 = {0x00, 0x20, 0x01}
_SYS_F12_LEGAL = {0x000, 0x001, 0x302, 0x7B2, 0x105}


def _r5(rng):
    return rng.randint(0, 31)


def _illegal_word(rng):
    k = rng.randrange(12)
    if k == 0:   # unknown major opcode (FP, AMO, custom-0..3, OP-32, ...)
        return enc_i(rng.choice(_ILLEGAL_OPCODES), rng.randint(0, 7), _r5(rng), _r5(rng),
                     rng.randint(-2048, 2047))
    if k == 1:   # legal major opcode but instr[1:0] != 11 (16-bit/compressed space; no C ext)
        op = rng.choice(list(OPC.values())) & 0x7C | rng.randint(0, 2)
        return enc_i(op, rng.randint(0, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 2:   # OP with funct7 outside {0x00, 0x20, 0x01} (incl. bitmanip funct7s, B absent)
        f7 = rng.choice([v for v in range(128) if v not in _LEGAL_R_F7])
        return enc_r(OPC["OP"], rng.randint(0, 7), f7, _r5(rng), _r5(rng), _r5(rng))
    if k == 3:   # OP funct7=0x20 with funct3 other than 000 (sub) / 101 (sra)
        return enc_r(OPC["OP"], rng.choice([1, 2, 3, 4, 6, 7]), 0x20, _r5(rng), _r5(rng), _r5(rng))
    if k == 4:   # slli with non-zero instr[31:25] (incl. shamt[5]=bit25 on RV32, bitmanip slots)
        while True:
            top5, b26, b25 = rng.randint(0, 31), rng.randint(0, 1), rng.randint(0, 1)
            if (top5, b26, b25) != (0, 0, 0):
                break
        return enc_ish(OPC["OP_IMM"], 0b001, top5, b26, b25, _r5(rng), _r5(rng), _r5(rng))
    if k == 5:   # srli/srai with instr[31:25] not in {0000000, 0100000}
        while True:
            top5, b26, b25 = rng.randint(0, 31), rng.randint(0, 1), rng.randint(0, 1)
            if (top5, b26, b25) not in ((0, 0, 0), (0b01000, 0, 0)):
                break
        return enc_ish(OPC["OP_IMM"], 0b101, top5, b26, b25, _r5(rng), _r5(rng), _r5(rng))
    if k == 6:   # LOAD funct3 011 (ld, RV64), 110 (lwu), 111
        return enc_i(OPC["LOAD"], rng.choice([3, 6, 7]), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 7:   # STORE funct3 011..111
        return enc_s(OPC["STORE"], rng.randint(3, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 8:   # BRANCH funct3 010 / 011 (reserved)
        return enc_b(OPC["BRANCH"], rng.choice([2, 3]), _r5(rng), _r5(rng),
                     rng.randint(-2048, 2047) * 2)
    if k == 9:   # JALR funct3 != 000
        return enc_i(OPC["JALR"], rng.randint(1, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    if k == 10:  # MISC_MEM funct3 010..111 (fence/fence.i are 000/001)
        return enc_i(OPC["MISC_MEM"], rng.randint(2, 7), _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    # k == 11: SYSTEM funct3=100 (reserved), or funct3=000 with unknown funct12
    if rng.random() < 0.5:
        return enc_i(OPC["SYSTEM"], 0b100, _r5(rng), _r5(rng), rng.randint(-2048, 2047))
    while True:
        f12 = rng.randint(0, 4095)
        if f12 not in _SYS_F12_LEGAL:
            break
    return enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12)


def build_illegal_instruction_stream(rng):
    """Targets the 'illegal_instruction' bin: 128 words drawn from 12 independent
    illegality classes for RV32IM+Zicsr (no C, no B): unknown major opcodes;
    instr[1:0]!=11; OP funct7 outside {00,20,01}; funct7=0x20 with funct3 other
    than sub/sra; slli/srli/srai with a bad instr[31:25]; reserved
    LOAD/STORE/BRANCH/JALR/MISC_MEM funct3; SYSTEM funct3=100; unknown SYSTEM
    funct12. Verified: 0 legal words over 200 seeds x 128."""
    return [_illegal_word(rng) for _ in range(128)]


NEW_BUILDERS = [build_illegal_instruction_stream]
```