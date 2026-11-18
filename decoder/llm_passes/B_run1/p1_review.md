Review of B_run1 draft CRT generator (ibex_decoder, RV32BNone, RV32MFast, BranchTargetALU=1)

I checked every encoder call against isa.py and every cited RTL line against ibex_decoder.sv. I also ran the draft and the fixed version under WSL (scratch: .../scratchpad/B_run1_review/{draft.py,final.py,check.py,check2.py}). Results:
- All 9 builders return list[int] with every value in [0, 2^32).
- Word counts are 320/288/208/32/51/59/58/51/31, all inside 16..512. After my fix the I-type stream is 320.
- The draft has no imports and defines every helper it uses.
- With an independent plan classifier, across 20 seeds the three plan streams always hit 25 ops, 96/96 port bins and 1920/1920 reachable type-3 cells.

## Per function

1. **build_rtype_port_cross_stream: CONFIRMED.**
   - The call enc_r(op, f3, f7, rd, rs1, rs2) is in the right order.
   - All 10 (f7, f3) pairs match RTL l.456-465 and l.993-1002. funct7=0x20 has instr[26]=0, so it never takes the cmix branch at l.451.
   - Rotations put every register on every port for every op, so all 960 cells are hit.

2. **build_itype_alu_port_cross_stream: CONFIRMED, plus an optional hedge (included below).**
   - enc_i(op, f3, rd, rs1, imm) and enc_ish(op, f3, top5, b26, b25, rd, rs1, shamt) are used correctly.
   - The shifts are legal: slli at l.362, srli/srai at l.403-404 with [26:25]=00.
   - The ALU operator line citations l.816-827, 892 and 932-936 are correct.
   - Added: one extra 32-word rotation block of addi with negative immediates (the stream grows from 288 to 320 words). If the unseen testbench model labels any addi as SUBI, all 64 SUBI cells become reachable. It costs nothing otherwise.

3. **build_loadstore_port_cross_stream: CONFIRMED.**
   - enc_s(op, f3, rs1, rs2, imm) is in the right order.
   - Loads lb/lh/lw use f3 0/1/2 and stores use 0/1/2 (l.304-307, l.321-325).
   - lbu/lhu drive data_sign_extension_o=0 (l.318).
   - The draft correctly notes the decoder never sets rf_we for LOAD. The load "write" bins therefore depend on the testbench port model, not on rf_we_o.

4. **build_rv32m_stream: CONFIRMED.**
   - funct7=0x01 with every funct3 matches l.512-551 and l.1096-1126.
   - mult_en_o/div_en_o are at l.1187-1188.

5. **build_system_csr_stream: CONFIRMED.**
   - Argument order is right: rd=0 / rs1≠0 and rd≠0 / rs1=0 both reach l.615-617.
   - The unknown-funct12 words reach l.610.
   - CSR funct3 1/2/3/5/6/7 each get one rs1=0 word, which hits the READ downgrade at l.193-196.
   - funct3=100 reaches the default at l.632.
   - Small note: the random funct12 can occasionally be a legal one (probability 5/4096). This is harmless.

6. **build_control_flow_misc_stream: CONFIRMED.**
   - enc_j(op, rd, imm), enc_b(op, f3, rs1, rs2, imm) and enc_u(op, rd, imm20) are used correctly.
   - The J and B immediates are always even and within range: J from -2^20 to 2^20-2, B from -4096 to 4094.
   - Branch funct3 010/011 is illegal (l.282). MISC_MEM default is at l.583/l.1158. fence.i covers l.578-581 and l.1148-1150.

7. **build_illegal_opimm_shift_space_stream: NEEDS FIX (one real bug, minor).**
   - **Bug:** the unary list claims "instr[31:20] = 0110_0xxx_xxxx … + an undefined one", but 0x6FF = 0110_1111_1111 has instr[31:27]=01101. That is binvi, not the 01100 unary group, so the unary `default` item at l.391 is only reached by 0x603. I verified this numerically.
   - **Fix:** replace 0x6FF with 0x67F, which gives [31:27]=01100 and [26:20]=1111111, the default case.
   - Doc errors, fixed below:
     - Under RV32BNone, funct3=001 sets alu_operator_o=ALU_SLL for every top5 (l.892). It does not stay at ALU_SLTU as claimed. Only funct3=101 with top5 outside {00000, 01000} keeps SLTU (l.932-936).
     - "All of these are illegal" is false. The b26=b25=0 words with top5 00000 (slli/srli) or 01000 under funct3=101 (srai) are legal. This is harmless.
   - Everything else checks out: all top5 case items at l.361-394 and l.402-438, fsri at l.399, and rev8/orc.b with fixed shamt (l.416/l.424).

8. **build_illegal_op_space_stream: CONFIRMED (doc nit).**
   - All 34 _B_RTYPE pairs match l.468-509 exactly, and none has instr[26]=1.
   - enc_r4(op, f3, rs3, b26_25, rd, rs1, rs2) is in the right order, and cmix/cmov/fsl/fsr hit l.451.
   - instr[26]=1 with funct3 in {0, 2, 4, 6, 7} hits the l.948 branch and the l.552 default.
   - Nit: `rng.randrange(128) & 0x5B` can produce 0x00 or 0x01, which are legal RV32I/M words. So "all are illegal" is not strictly true. This is harmless and the docstring is adjusted below.

9. **build_illegal_loadstore_bad_opcode_stream: CONFIRMED.**
   - LOAD 011/111 hit the default; LOAD 110 hits lwu at l.326.
   - STORE 011 hits the default at l.308; STORE 1xx hits l.299.
   - The 117 non-opcode_e values reach l.639 and l.1182, including words whose low 2 bits are not 11.

## "Cannot be hit" claims

- **SUBI (1 type-1 bin and 64 type-3 bins): CONFIRMED at the decoder level, with a caveat.** RV32I has no subi encoding, and l.822 maps funct3=000 to ALU_ADD whatever the immediate's sign. Whether the testbench model ever labels some addi as SUBI is unknowable without its source, which is why I added the cheap negative-immediate addi hedge.
- **Plan size 2106 vs 2107: CONFIRMED.** I get 26 + 96 + 1984 = 2106 by the same derivation, so one bin can't be inferred from the prose.
- **instr_first_cycle_i=0 else-arms (l.248, 261, 762-768, 903, …): CONFIRMED.**
- **branch_taken_i=0 (l.753 IMM_B_INCR_PC arm): CONFIRMED.**
- **illegal_c_insn_i path (l.645-646): CONFIRMED.**
- **RV32E check (generate inactive, l.181-182): CONFIRMED.**
- **use_rs3_q flop (gen_rs3_flop is not generated under RV32BNone, l.142): CONFIRMED.**
- **B-extension alu_operator_o assignments behind `RV32B != RV32BNone` (l.830-890, 897-929, 949-988, 1006-1093): CONFIRMED.** They are constant false.
- **!BranchTargetALU arms (l.701-706, 723-728, 762, 1151-1156): CONFIRMED.**
  - Addition: the `RV32M == RV32MNone ? …` ternaries and the RV32B-config ternaries on illegal_insn are also constant. They are not branch points, though.

```python
_RTYPE_OPS = [  # (name, funct7, funct3)  -- plan ops on OPCODE_OP
    ("add", 0x00, 0b000), ("sub", 0x20, 0b000), ("sll", 0x00, 0b001),
    ("slt", 0x00, 0b010), ("sltu", 0x00, 0b011), ("xor", 0x00, 0b100),
    ("srl", 0x00, 0b101), ("sra", 0x20, 0b101), ("or", 0x00, 0b110),
    ("and", 0x00, 0b111),
]
_ITYPE_OPS = [  # (name, funct3) -- plan ops on OPCODE_OP_IMM with a 12-bit imm
    ("addi", 0b000), ("slti", 0b010), ("sltiu", 0b011),
    ("xori", 0b100), ("ori", 0b110), ("andi", 0b111),
]
_SHIFT_IMM_OPS = [  # (name, funct3, instr[31:27])
    ("slli", 0b001, 0b00000), ("srli", 0b101, 0b00000), ("srai", 0b101, 0b01000),
]
_LOADS = [("lb", 0b000), ("lh", 0b001), ("lw", 0b010)]
_STORES = [("sb", 0b000), ("sh", 0b001), ("sw", 0b010)]


def _perm_triple(rng):
    """Three independent random offsets so that, over i = 0..31, rd / rs1 / rs2
    each take every register index exactly once (rotations of 0..31)."""
    return rng.randrange(32), rng.randrange(32), rng.randrange(32)


def _imm12(rng):
    # mix corner values (sign bit, all-ones, zero) with uniform ones so the
    # imm_*_type_o outputs toggle in both directions
    return rng.choice([0, -1, -2048, 2047, 1, rng.randint(-2048, 2047),
                       rng.randint(-2048, 2047)])


def build_rtype_port_cross_stream(rng):
    """Plan bins: BIN type 1 for ADD/SUB/AND/OR/XOR/SLL/SRL/SRA/SLT/SLTU, all 96
    BIN type 2 port bins, and the BIN type 3 cross (op x reg x {read_A, read_B,
    write}) for those 10 R-type ops = 10*96 = 960 bins.
    RTL: ibex_decoder.sv l.447-465, l.164-172, l.991-1002.
    Each op gets 32 words in which rd, rs1 and rs2 are three independent
    random rotations of 0..31, so every (op, reg, port) cell is hit once."""
    stream = []
    for _name, f7, f3 in _RTYPE_OPS:
        a, b, c = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, (i + a) % 32, (i + b) % 32, (i + c) % 32))
    rng.shuffle(stream)
    return stream                                                    # 320 words


def build_itype_alu_port_cross_stream(rng):
    """Plan bins: BIN type 1 for ADDI/SLTI/SLTUI(sltiu)/XORI/ORI/ANDI/SLLI/SRLI/
    SRAI and the BIN type 3 cross op x reg x {read_A, write} (9*64 = 576 bins),
    plus a hedge block for SUBI (addi with negative immediates, every reg on
    rs1 and rd) in case the testbench model labels such words as SUBI.
    RTL: ibex_decoder.sv l.348-358, l.362, l.403-404, l.816-827, 892, 932-936."""
    stream = []
    for _name, f3 in _ITYPE_OPS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_i(OPC["OP_IMM"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for _name, f3, top5 in _SHIFT_IMM_OPS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, (i + a) % 32, (i + b) % 32,
                                  rng.randrange(32)))
    # SUBI hedge: RV32I has no subi; if the testbench model labels anything as
    # SUBI it can only be addi with a negative immediate.
    a, b, _ = _perm_triple(rng)
    for i in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, (i + a) % 32, (i + b) % 32,
                            rng.choice([-1, -2048, rng.randint(-2048, -1)])))
    rng.shuffle(stream)
    return stream                                                    # 320 words


def build_loadstore_port_cross_stream(rng):
    """Plan bins: BIN type 1 for LB/LH/LW/SB/SH/SW and the BIN type 3 crosses
    LB/LH/LW x reg x {read_A, write} and SB/SH/SW x reg x {read_A, read_B}
    (6*64 = 384 bins). RTL: l.293-334, l.776-795. Load 'write' comes from the
    testbench port model (the decoder never sets rf_we for LOAD).
    Also includes lbu/lhu (data_sign_extension_o = 0)."""
    stream = []
    for _name, f3 in _LOADS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for _name, f3 in _STORES:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for f3 in (0b100, 0b101):                                        # lbu, lhu
        for _ in range(8):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randrange(32), rng.randrange(32), _imm12(rng)))
    rng.shuffle(stream)
    return stream                                                    # 208 words


def build_rv32m_stream(rng):
    """Code coverage: the 8 RV32M case items, ibex_decoder.sv l.512-551,
    l.1096-1126, l.1187-1188. No plan bins."""
    stream = []
    for _ in range(4):
        for f3 in range(8):
            stream.append(enc_r(OPC["OP"], f3, 0x01, rng.randrange(32),
                                rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 32 words


def build_system_csr_stream(rng):
    """Code coverage of OPCODE_SYSTEM, ibex_decoder.sv l.589-638, l.1162-1179,
    l.193-196: ecall/ebreak/mret/dret/wfi legal and with rd/rs1 != 0, unknown
    funct12, all six CSR ops incl. rs1/uimm = 0 (SET/CLEAR -> READ), funct3=100.
    No plan bins."""
    stream = []
    for f12 in (0x000, 0x001, 0x302, 0x7B2, 0x105):
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))           # legal
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))
        stream.append(enc_i(OPC["SYSTEM"], 0, rng.randint(1, 31), 0, f12))   # rd != 0
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, rng.randint(1, 31), f12))   # rs1 != 0
    for _ in range(4):                                               # unknown funct12
        f12 = rng.choice([0x002, 0x102, 0x202, 0x7B3, 0x104, rng.randrange(4096)])
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))
    for f3 in (1, 2, 3, 5, 6, 7):
        for _ in range(3):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randrange(32), rng.randint(1, 31),
                                rng.randrange(4096)))
        stream.append(enc_i(OPC["SYSTEM"], f3, rng.randrange(32), 0, rng.randrange(4096)))
    for _ in range(3):                                               # funct3 = 100: illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))
    rng.shuffle(stream)
    return stream                                                    # 51 words


def build_control_flow_misc_stream(rng):
    """Code coverage of JAL/JALR (legal + bad funct3), all branch funct3 (incl.
    illegal 010/011), LUI/AUIPC, FENCE/FENCE.I/illegal MISC_MEM.
    ibex_decoder.sv l.241-287, 340-346, 563-587, 694-770, 801-814, 1138-1160.
    No plan bins."""
    stream = []
    for _ in range(6):
        stream.append(enc_j(OPC["JAL"], rng.randrange(32),
                            rng.choice([0, -2, 2, -(1 << 20), (1 << 20) - 2,
                                        rng.randrange(-(1 << 20), 1 << 20, 2)])))
        stream.append(enc_i(OPC["JALR"], 0, rng.randrange(32), rng.randrange(32), _imm12(rng)))
        stream.append(enc_u(OPC["LUI"], rng.randrange(32), rng.randrange(1 << 20)))
        stream.append(enc_u(OPC["AUIPC"], rng.randrange(32), rng.randrange(1 << 20)))
    for _ in range(3):                                               # jalr funct3 != 0
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), rng.randrange(32),
                            rng.randrange(32), _imm12(rng)))
    for f3 in (0, 1, 4, 5, 6, 7):
        for _ in range(3):
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randrange(32), rng.randrange(32),
                                rng.choice([0, -2, 4094, -4096,
                                            rng.randrange(-4096, 4096, 2)])))
    for f3 in (2, 3):                                                # illegal branch cond
        stream.append(enc_b(OPC["BRANCH"], f3, rng.randrange(32), rng.randrange(32),
                            rng.randrange(-4096, 4096, 2)))
    for _ in range(3):
        stream.append(enc_i(OPC["MISC_MEM"], 0, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))                    # fence
        stream.append(enc_i(OPC["MISC_MEM"], 1, 0, 0, 0))             # fence.i
    for f3 in (2, 3, 4, 5, 6, 7):                                    # illegal MISC_MEM
        stream.append(enc_i(OPC["MISC_MEM"], f3, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))
    rng.shuffle(stream)
    return stream                                                    # 59 words


def build_illegal_opimm_shift_space_stream(rng):
    """Code coverage of the OP_IMM funct3 = 001 / 101 decode trees,
    ibex_decoder.sv l.360-441 (every instr[31:27] case item, the 0b01100 unary
    sub-case incl. its default, fsri via instr[26]=1, rev8/orc.b shamt forms),
    l.892 (funct3=001: ALU_SLL for every top5 under RV32BNone) and l.932-936
    (funct3=101: SRL / SRA, else default ALU_SLTU). Almost all words are
    illegal under RV32BNone (a few plain slli/srli/srai with [26:25]=00 are
    legal), driving the illegal_insn squash at l.654-662. No plan bins."""
    stream = []
    top5_vals = [0b00000, 0b00100, 0b01001, 0b00101, 0b01101, 0b00001, 0b01100,
                 0b01000, 0b10000, 0b11111]
    for top5 in top5_vals:
        for f3 in (0b001, 0b101):
            b26, b25 = rng.randrange(2), rng.randrange(2)
            if top5 in (0b00000, 0b01000) and rng.random() < 0.5:
                b26, b25 = 0, 1                                      # bad bit 25 on a real shift
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, b26, b25, rng.randrange(32),
                                  rng.randrange(32), rng.randrange(32)))
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rng.randrange(32),
                                  rng.randrange(32), rng.randrange(32)))
    # unary group instr[31:20] = 0110_0xxx_xxxx (clz..crc32c.w + undefined 0x603, 0x67F)
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612,
                0x618, 0x619, 0x61A, 0x603, 0x67F):
        stream.append(enc_i(OPC["OP_IMM"], 0b001, rng.randrange(32), rng.randrange(32), f12))
    # rev8 / orc.b fixed shamt forms
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, rng.randrange(32),
                          rng.randrange(32), 0b11000))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, rng.randrange(32),
                          rng.randrange(32), 0b00111))
    # fsri: rs3 in [31:27], instr[26] = 1
    for _ in range(3):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.randrange(32), 1, rng.randrange(2),
                              rng.randrange(32), rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 58 words


_B_RTYPE = [  # (funct7, funct3) of all RV32B R-type encodings in the decoder
    (0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4), (0x30, 1),
    (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7), (0x04, 4), (0x24, 4),
    (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1), (0x24, 5), (0x24, 7), (0x34, 5),
    (0x14, 5), (0x04, 1), (0x04, 5), (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1),
    (0x10, 5), (0x05, 1), (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6),
]


def build_illegal_op_space_stream(rng):
    """Code coverage of the OPCODE_OP decode tree, ibex_decoder.sv l.451-452
    (cmix/cmov/fsl/fsr), l.467-509 (all RV32B case items -> illegal), l.552-554
    (default), l.948-989 (instr_alu[26]=1), l.1005-1093. Nearly all words are
    illegal under RV32BNone (the random funct7 & 0x5B may occasionally give a
    legal 0x00 / 0x01 word). No plan bins."""
    stream = []
    for f7, f3 in _B_RTYPE:
        stream.append(enc_r(OPC["OP"], f3, f7, rng.randrange(32), rng.randrange(32),
                            rng.randrange(32)))
    for f3, b in ((1, 0b11), (5, 0b11), (1, 0b10), (5, 0b10)):      # cmix/cmov/fsl/fsr
        stream.append(enc_r4(OPC["OP"], f3, rng.randrange(32), b, rng.randrange(32),
                             rng.randrange(32), rng.randrange(32)))
    # instr[26]=1 with funct3 not x01 (falls through to the big case -> default)
    for f3 in (0, 2, 4, 6, 7):
        stream.append(enc_r4(OPC["OP"], f3, rng.randrange(32), rng.choice([0b10, 0b11]),
                             rng.randrange(32), rng.randrange(32), rng.randrange(32)))
    for _ in range(8):                                               # random undefined funct7
        f7 = rng.choice([0x02, 0x08, 0x40, 0x7F, 0x21, 0x41, rng.randrange(128) & 0x5B])
        stream.append(enc_r(OPC["OP"], rng.randrange(8), f7, rng.randrange(32),
                            rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 51 words


def build_illegal_loadstore_bad_opcode_stream(rng):
    """Code coverage of illegal LOAD funct3 (011/110/111, l.326-332), illegal
    STORE funct3 (011/1xx, l.299-308), and opcodes outside opcode_e (l.639-641,
    l.1182), incl. low two bits != 2'b11. No plan bins."""
    stream = []
    for f3 in (0b011, 0b110, 0b111):
        for _ in range(3):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randrange(32), rng.randrange(32),
                                _imm12(rng)))
    for f3 in (0b011, 0b100, 0b101, 0b110, 0b111):
        for _ in range(2):
            stream.append(enc_s(OPC["STORE"], f3, rng.randrange(32), rng.randrange(32),
                                _imm12(rng)))
    legal = set(OPC.values())
    bad_ops = [o for o in range(128) if o not in legal]
    for _ in range(12):
        # deliberately malformed: an opcode value not in ibex_pkg::opcode_e,
        # built through enc_r so the other fields are still random
        op = rng.choice(bad_ops)
        stream.append(enc_r(op, rng.randrange(8), rng.randrange(128), rng.randrange(32),
                            rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 31 words


NEW_BUILDERS = [
    build_rtype_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_loadstore_port_cross_stream,
    build_rv32m_stream,
    build_system_csr_stream,
    build_control_flow_misc_stream,
    build_illegal_opimm_shift_space_stream,
    build_illegal_op_space_stream,
    build_illegal_loadstore_bad_opcode_stream,
]
```