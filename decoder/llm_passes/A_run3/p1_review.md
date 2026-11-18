## Review of the A_run3 draft

I checked every encoder call against `crt/isa.py`: `enc_r(op,f3,f7,rd,rs1,rs2)`, `enc_i(op,f3,rd,rs1,imm)`, `enc_s(op,f3,rs1,rs2,imm)` and `enc_ish(op,f3,top5,b26,b25,rd,rs1,shamt)`. I also ran the generated words through a decoder built from the isa.py SPECS table in my scratch folder (`.../scratchpad/A_run3_review/chk.py`).

**Helpers `_perm32`, `_imm12` and the tables: CONFIRMED.**
- `_R_OPS` matches isa.py exactly: add/sub f3=0 with f7 0x00/0x20, sll 1, slt 2, sltu 3, xor 4, srl 5, sra 5 with 0x20, or 6, and 7.
- `_I_ARITH_F3` maps correctly to addi 0, andi 7, ori 6, xori 4, slti 2, sltiu 3.
- `_I_SHIFTS` has slli (1, 00000), srli (5, 00000) and srai (5, 01000); 01000 sets bit 30, which is right.
- `_LOAD_F3` is lw 2, lh 1, lb 0, and `_STORE_F3` is sw 2, sh 1, sb 0.
- `_imm12` produces a negative value about 46% of the time (0.40 + 0.15 × 2/5).

**`build_rtype_alu_port_cross_stream`: CONFIRMED.**
- The argument order is correct: (OP, f3, f7, rd, rs1, rs2).
- All 320 words decode to the intended RV32I op. With f7 at 0x00 or 0x20 and these funct3 values, none of them is an M or B instruction.
- Each op gets three independent permutations, so all 960 cross bins and all 96 register-port bins are hit in one emission. The word count of 320 is within 16..512.

**`build_itype_alu_port_cross_stream`: NEEDS FIX** (it is correct as written, but one claim in its reasoning is false).
- The encodings are correct. `enc_i` is called as (OP_IMM, f3, rd, rs1, imm). `enc_ish` is called as (OP_IMM, f3, top5, 0, 0, rd, rs1, shamt), so the top 7 bits are 0000000 or 0100000. All 288 words decode correctly.
- The problem is the SUBI hedge. The reasoning says that if the monitor labels an addi with a negative immediate as SUBI, then "the I-type stream already produces those words for every rd/rs1". That does not hold within one emission. Each register appears only once per port in the addi block, and its immediate's sign is random.
- I measured this over 200 seeds. One addi block reaches on average only about 30 of the 64 SUBI-like cross bins, and correspondingly only about 34 of the 64 ADDI cross bins if the monitor splits on sign.
- **Exact fix:** run addi as two permutation blocks. One block uses only non-negative immediates (including 0, 1 and 2047). The other uses only negative immediates (including -2048 and -1). This makes all 64 bins for each sign certain in one emission and costs 32 extra words, for 320 in total. The other five arithmetic ops keep `_imm12`.
- I verified the fixed version: 320 words, all decode legally, and each of the 10 labels (including the hypothetical subi) gets 64 of 64 read_A/write bins.

**`build_load_port_cross_stream`: CONFIRMED.**
- `enc_i(LOAD, f3, rd, rs1, imm)` has the right order, and lw/lh/lb decode correctly.
- It produces 96 words and covers 3 ops × 32 registers × {read_A, write} = 192 bins.

**`build_store_port_cross_stream`: CONFIRMED.**
- `enc_s(STORE, f3, rs1, rs2, imm)` has the right order. I checked that rs1 lands in [19:15] and rs2 in [24:20] (for example, `0xfe93ada3` has rs1=7 and rs2=9). The immediate is split correctly.
- It produces 96 words and covers 192 bins.

All four functions meet the Python requirements: no imports, every helper is defined, `rng` is used for every free field, and every word is a valid 32-bit value.

### "Cannot be hit" claims

- **SUBI has no RV32 encoding, so its bins are reachable only if the monitor maps some legal word to SUBI: CONFIRMED.** There is no subtract-immediate opcode or funct3 in RV32I, M or Zicsr. The only plausible mapping is an addi with a negative immediate, and the fix above covers that case completely.
- **The bin arithmetic: DISPUTE (minor, documentation only).** The reasoning says "65 = 1 SUBI per-op bin + 64 cross bins". But the SUBI per-op bin is already one of the 26 per-operation bins counted in the 2042.
  - The real count is 2107 − 26 − 96 = 1985 cross bins. Reachable bins are 960 + 576 + 192 + 192 = 1920, plus 64 if SUBI is reachable, giving 1984.
  - So, beyond SUBI, exactly one cross bin is unexplained. The reasoning reaches the same leftover of one, but the "1 + 64" explanation is wrong.
  - If SUBI is unreachable, the ceiling is 2107 − 1 (the SUBI per-op bin) − 64 = 2042, which is 96.9%, minus whatever the one unexplained bin is. The draft's 96.9% figure is therefore about right.
  - That last bin can't be determined from the plan text. It could be an artifact of how the monitor treats a store's data-register port, or of I-type words whose immediate occupies the rs2 field. No stream change is needed for it.
- **Including x0 on every port as a hedge: CONFIRMED.** That is the right choice given the uncertainty about whether the monitor counts x0.

```python
def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def _imm12(rng):
    # bias toward sign/extreme corners and negatives, otherwise uniform
    r = rng.random()
    if r < 0.15:
        return rng.choice([-2048, -1, 0, 1, 2047])
    if r < 0.55:
        return rng.randint(-2048, -1)
    return rng.randint(0, 2047)


def _imm12_neg(rng):
    # strictly negative 12-bit immediate (addi used as "subtract immediate")
    if rng.random() < 0.2:
        return rng.choice([-2048, -1])
    return rng.randint(-2048, -1)


def _imm12_nonneg(rng):
    # non-negative 12-bit immediate (plain addi)
    if rng.random() < 0.2:
        return rng.choice([0, 1, 2047])
    return rng.randint(0, 2047)


_R_OPS = [  # (funct3, funct7) for the 10 RV32I register-register ALU ops
    (0b000, 0x00),  # add
    (0b000, 0x20),  # sub
    (0b111, 0x00),  # and
    (0b110, 0x00),  # or
    (0b100, 0x00),  # xor
    (0b001, 0x00),  # sll
    (0b101, 0x00),  # srl
    (0b101, 0x20),  # sra
    (0b010, 0x00),  # slt
    (0b011, 0x00),  # sltu
]

_I_ARITH_F3 = [0b111, 0b110, 0b100, 0b010, 0b011]   # andi ori xori slti sltiu (addi handled separately)
_I_SHIFTS = [(0b001, 0b00000), (0b101, 0b00000), (0b101, 0b01000)]  # slli srli srai (f3, instr[31:27])

_LOAD_F3 = [0b010, 0b001, 0b000]    # lw lh lb
_STORE_F3 = [0b010, 0b001, 0b000]   # sw sh sb


def build_rtype_alu_port_cross_stream(rng):
    """10 RV32I R-type ALU ops x 32 regs x {read_A, read_B, write}: 320 words."""
    stream = []
    ops = list(_R_OPS)
    rng.shuffle(ops)
    for f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream


def build_itype_alu_port_cross_stream(rng):
    """ADDI (non-negative imm) + ADDI (negative imm, the only plausible SUBI
    mapping), ANDI ORI XORI SLTI SLTIU, SLLI SRLI SRAI; each block sweeps all 32
    registers on read_A (rs1) and write (rd): 10 blocks = 320 words."""
    stream = []
    jobs = ([("addi_pos", 0b000), ("addi_neg", 0b000)]
            + [("i", f3) for f3 in _I_ARITH_F3]
            + [("sh", s) for s in _I_SHIFTS])
    rng.shuffle(jobs)
    for kind, arg in jobs:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            if kind == "addi_pos":
                stream.append(enc_i(OPC["OP_IMM"], 0b000, rds[i], rs1s[i], _imm12_nonneg(rng)))
            elif kind == "addi_neg":
                stream.append(enc_i(OPC["OP_IMM"], 0b000, rds[i], rs1s[i], _imm12_neg(rng)))
            elif kind == "i":
                stream.append(enc_i(OPC["OP_IMM"], arg, rds[i], rs1s[i], _imm12(rng)))
            else:
                f3, top5 = arg
                stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rds[i], rs1s[i],
                                      rng.randint(0, 31)))
    return stream


def build_load_port_cross_stream(rng):
    """LW LH LB x 32 regs x {read_A (rs1), write (rd)}: 96 words."""
    stream = []
    f3s = list(_LOAD_F3)
    rng.shuffle(f3s)
    for f3 in f3s:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i], _imm12(rng)))
    return stream


def build_store_port_cross_stream(rng):
    """SW SH SB x 32 regs x {read_A (rs1 base), read_B (rs2 data)}: 96 words."""
    stream = []
    f3s = list(_STORE_F3)
    rng.shuffle(f3s)
    for f3 in f3s:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i], _imm12(rng)))
    return stream


NEW_BUILDERS = [
    build_rtype_alu_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_load_port_cross_stream,
    build_store_port_cross_stream,
]
```