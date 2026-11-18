# Review of B_run3 draft (8 builders)

**Bottom line:** 7 of the 8 builders are correct. `build_illegal_encodings_stream` needs a one-line fix. It uses `LEGAL_OPCODES`, which the builder namespace does not provide (only `OPC` and `enc_*` are). It raises `NameError` at runtime. All 8 cannot-be-hit claims hold, but one (RV32B=None, lines 948-989) overstates the dead range.

**How I checked.** I read `ibex_decoder.sv`, `isa.py` and the bins description. I pulled the draft from the brief and ran it in a namespace that holds only `OPC` and `enc_*`. With the fix applied, I ran it over 20 seeds: every stream has 16..512 words and every word fits in 32 bits. Over 50 seeds I checked legality with a Python model of the decoder's `illegal_insn` logic (RV32BNone, RV32MFast):
- The rtype, itype, ld/st, control-flow, mul/div and field-toggle streams are 100% legal.
- The illegal stream is 100% illegal.
- The system stream has exactly 20 illegal words out of 71, as designed: 10 with rd/rs1 nonzero, 6 unknown funct12, and 4 with funct3=100.

Scripts are in `C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run3_review/` (`check.py`, `legal.py`).

## Per function

**`_port_perms`: CONFIRMED.** It returns three independent shuffles of 0..31.

**`build_rtype_op_x_port_sweep_stream`: CONFIRMED.**
- The argument order `enc_r(op, f3, f7, rd, rs1, rs2)` is correct.
- All 10 (f7, f3) pairs match RTL 456-465 (decode) and 993-1002 (ALU).
- The cited lines 447-450, 164/168/171-172 and 991-1002 are accurate.
- One seed gives exactly 960 distinct (op, port, reg) tuples, which I measured.

**`build_itype_op_x_port_sweep_stream`: CONFIRMED.**
- The argument orders `enc_i(op, f3, rd, rs1, imm)` and `enc_ish(op, f3, top5, b26, b25, rd, rs1, shamt)` are correct.
- slli/srli use top5=00000 and srai uses 01000, with b26=b25=0. These are legal per RTL 362 and 404 and reach ALU 892 and 932-936.
- I measured 640 distinct tuples: 10 groups x {A, W} x 32.
- The SUBI = addi-with-negative-immediate mapping cannot be checked from the plan prose. It costs nothing: addi_pos still covers ADDI.
- All cited lines check out.

**`build_load_store_op_x_port_sweep_stream`: CONFIRMED.**
- The `enc_i` (load) and `enc_s(op, f3, rs1, rs2, imm)` orders are correct.
- The 5/8 legal funct3 values for loads and 3/8 for stores are correct (RTL 304-309 and 321-333).
- I measured 384 distinct tuples. Both store ports get full permutations, so the result holds whichever of rs1/rs2 the plan calls read_A.
- lbu/lhu drive `data_sign_extension_o=0` (line 318).

**`build_control_flow_and_upper_imm_stream`: CONFIRMED.**
- The `enc_u(op, rd, imm20)`, `enc_j(op, rd, imm)` and `enc_b(op, f3, rs1, rs2, imm)` calls are correct, and the `&~1` masking is fine.
- All words are legal (70 in total).
- ALU_EQ..GEU (741-746) and `icache_inval_o` (580) are reachable only here, which is confirmed.
- Minor wording issue: the 15%/15% extreme bias does not guarantee that every immediate bit toggles. `build_field_toggle_stream` provides that guarantee.

**`build_system_csr_stream`: CONFIRMED (docstring nit only).**
- The `enc_i` field placement for rd != 0 and rs1 != 0 is correct (line 615).
- The unknown-funct12 XOR with 0x800 never lands on a known value.
- The rs1=0 words for funct3 010/011/110/111 hit the override at 193-196.
- funct3=100 hits the `csr_illegal` default (632).
- The "2^-25" probability figure is loose: it is 2^-32 from a fully random word.

**`build_mul_div_stream`: CONFIRMED.**
- The `enc_r` order and f7=0000001 are correct for all 8 funct3 values (RTL 512-551 and 1096-1126).
- RV32MFast makes them legal, so `mult_en_o` and `div_en_o` assert.

**`build_illegal_encodings_stream`: NEEDS FIX.**
- **Bug:** `bad = [op for op in range(128) if op not in LEGAL_OPCODES]` raises NameError, because the builder namespace does not provide `LEGAL_OPCODES`. **Fix:** replace it with `set(OPC.values())`.
- **Everything else checks out against the RTL:**
  - The B-extension pairs (34 of them) match RTL 468-509 one for one. All have f7 bit1 (instr[26]) = 0, so they reach the case statement instead of the ternary check at line 451.
  - `enc_r4(op, f3, rs3, b26_25, rd, rs1, rs2)` is called correctly, and {instr[26], instr[13:12]} = {1, 01} for f3 001 and 101.
  - The clz-group f12 values map to the right instr[26:20] values, and 0x603 hits the default (391).
  - The orc.b shamt 00111 word reaches the true branch at line 424. The top5=00101 words with random shamt reach 427.
  - The OP-default f7 list avoids all table entries and keeps instr[26]=0.
  - STORE, LOAD, JALR, BRANCH and MISC_MEM all hit their illegal arms.
- **Uncovered dead code:** the stream claims to reach "every illegal_insn branch reachable", and that does not conflict with lines 433-434. Those lines (the `unshfl` else branch in f3=101) are structurally unreachable: the outer `if (instr[26])` at line 399 has already taken instr[26]=1.

**`build_field_toggle_stream`: CONFIRMED (docstring overclaim only).**
- The encoder orders are correct and the walking-one/zero pairs alternate in consecutive words. All words are legal.
- The claim that "every bit" of the immediate outputs toggles is too strong. Constant-0 bits can never toggle: `imm_u_type_o[11:0]`, `imm_b_type_o[0]`, `imm_j_type_o[0]` and `zimm_rs1_type_o[31:5]`. This is not a code issue.

## Cannot-be-hit claims

- **Lines 248-251 and 261-264 (JAL/JALR else branch): CONFIRMED.** `instr_first_cycle_i` is tied to 1.
- **Lines 701-706, 723-728 and 762-768: CONFIRMED,** with a nuance. Lines 701 and 723 (the `if` itself) are evaluated; only the bodies 702-706 and 724-728 are dead. Lines 762-768 are dead because the `if (instr_first_cycle_i)` at line 758 is always taken.
- **Lines 1151-1156: CONFIRMED** (BranchTargetALU=1).
- **Line 753, IMM_B_INCR_PC arm: CONFIRMED** (`branch_taken_i`=1). The IMM_B_INCR_PC value of `bt_b_mux_sel_o` is still reached through FENCE.I at line 1150.
- **Lines 645-646: CONFIRMED.**
- **RV32B=None, lines 830-890 and 897-930: CONFIRMED** for 831-890 and 898-929. The guard `if`s at lines 830 and 897 are executed, and their else arms (892, 932-936) are live.
- **RV32B=None, lines 948-989: partial DISPUTE.** Line 948, `if (instr_alu[26])`, is live and true for the ternary-form words; line 949 is evaluated too. Only lines 950-988 are dead.
- **`alu_multicycle_o`, `use_rs3`, `rf_raddr_a_o` = rs3: CONFIRMED** constant.
- **Lines 178-180 (RV32E=0): CONFIRMED.**
- **Not listed by the draft but also dead:**
  - Lines 433-434.
  - The RV32B-gated bodies in the OP ALU case, lines 1005-1093. The case items are reached but their assignments are not.
  - The `gen_rs3_flop` block, lines 144-150.

```python
def _port_perms(rng):
    """Three independent shuffles of 0..31 so that, over 32 words, every
    register appears exactly once as rd, once as rs1 and once as rs2."""
    out = []
    for _ in range(3):
        p = list(range(32))
        rng.shuffle(p)
        out.append(p)
    return out


def build_rtype_op_x_port_sweep_stream(rng):
    """10 RV32I R-type ops x {read_A, read_B, write} x 32 regs (960 cross bins).
    RTL ibex_decoder.sv 447-465, 164-172, 991-1002."""
    ops = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b111), (0x00, 0b110),
           (0x00, 0b100), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101),
           (0x00, 0b010), (0x00, 0b011)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f7, f3 in ops:
        rd_p, rs1_p, rs2_p = _port_perms(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rd_p[i], rs1_p[i], rs2_p[i]))
    return stream


def build_itype_op_x_port_sweep_stream(rng):
    """Register-immediate ops (ADDI, SUBI as addi-neg, SLTI, SLTIU, XORI, ORI,
    ANDI, SLLI, SRLI, SRAI) x {read_A, write} x 32 regs.
    RTL ibex_decoder.sv 348-362, 398-404, 816-828, 892, 932-936."""
    groups = [
        ("addi_pos", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b000, rd, rs1, rng.randint(0, 2047))),
        ("addi_neg", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b000, rd, rs1, rng.randint(-2048, -1))),
        ("slti",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b010, rd, rs1, rng.randint(-2048, 2047))),
        ("sltiu", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b011, rd, rs1, rng.randint(-2048, 2047))),
        ("xori",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b100, rd, rs1, rng.randint(-2048, 2047))),
        ("ori",   lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b110, rd, rs1, rng.randint(-2048, 2047))),
        ("andi",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b111, rd, rs1, rng.randint(-2048, 2047))),
        ("slli",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))),
        ("srli",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b101, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))),
        ("srai",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b101, 0b01000, 0, 0, rd, rs1, rng.randint(0, 31))),
    ]
    rng.shuffle(groups)
    stream = []
    for _name, mk in groups:
        rd_p, rs1_p, _ = _port_perms(rng)
        for i in range(32):
            stream.append(mk(rd_p[i], rs1_p[i]))
    return stream


def build_load_store_op_x_port_sweep_stream(rng):
    """LB/LH/LW x {read_A, write}, SB/SH/SW x {read_A, read_B} x 32 regs, plus
    lbu/lhu for data_sign_extension_o=0. RTL ibex_decoder.sv 293-333, 776-795."""
    stream = []
    for f3 in (0b000, 0b001, 0b010):
        rd_p, rs1_p, _ = _port_perms(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rd_p[i], rs1_p[i],
                                rng.randint(-2048, 2047)))   # lb/lh/lw
    for f3 in (0b000, 0b001, 0b010):
        _, rs1_p, rs2_p = _port_perms(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1_p[i], rs2_p[i],
                                rng.randint(-2048, 2047)))   # sb/sh/sw
    for f3 in (0b100, 0b101):                                 # lbu/lhu
        for _ in range(8):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(-2048, 2047)))
    return stream


def build_control_flow_and_upper_imm_stream(rng):
    """LUI, AUIPC, JAL, JALR, 6 branches, FENCE, FENCE.I with biased immediates.
    RTL ibex_decoder.sv 241-287, 340-346, 563-582, 694-754, 801-814, 1138-1150."""
    stream = []

    def imm_pick(bits, signed=True):
        r = rng.random()
        if r < 0.15:
            return 0
        if r < 0.30:
            return -1 if signed else (1 << bits) - 1
        if signed:
            return rng.randint(-(1 << (bits - 1)), (1 << (bits - 1)) - 1)
        return rng.randint(0, (1 << bits) - 1)

    for _ in range(8):
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31), imm_pick(20, False)))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31), imm_pick(20, False)))
        stream.append(enc_j(OPC["JAL"], rng.randint(0, 31), imm_pick(21) & ~1))
        stream.append(enc_i(OPC["JALR"], 0b000, rng.randint(0, 31),
                            rng.randint(0, 31), imm_pick(12)))
    for f3 in (0b000, 0b001, 0b100, 0b101, 0b110, 0b111):     # beq bne blt bge bltu bgeu
        for _ in range(5):
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randint(0, 31),
                                rng.randint(0, 31), imm_pick(13) & ~1))
    for _ in range(4):
        stream.append(enc_i(OPC["MISC_MEM"], 0b000, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(-2048, 2047)))  # fence
        stream.append(enc_i(OPC["MISC_MEM"], 0b001, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(-2048, 2047)))  # fence.i
    rng.shuffle(stream)
    return stream


def build_system_csr_stream(rng):
    """ecall/ebreak/mret/dret/wfi legal + rd/rs1!=0 illegal, unknown funct12,
    all CSR funct3 incl. illegal 100, CSRRS/C(I) with rs1/uimm==0 (csr_op_o
    -> READ override). RTL ibex_decoder.sv 188-197, 589-636, 1162-1179."""
    stream = []
    f12s = [0x000, 0x001, 0x302, 0x7B2, 0x105]
    for f12 in f12s:
        for _ in range(3):
            stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))
        stream.append(enc_i(OPC["SYSTEM"], 0b000, rng.randint(1, 31), 0, f12))   # rd!=0
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, rng.randint(1, 31), f12))   # rs1!=0
    for _ in range(6):
        f12 = rng.randint(0, 4095)
        if f12 in f12s:
            f12 ^= 0x800
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))           # unknown funct12
    for f3 in (0b001, 0b010, 0b011, 0b101, 0b110, 0b111):
        for _ in range(4):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31),
                                rng.randint(1, 31), rng.randint(0, 4095)))
        for _ in range(2):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0,
                                rng.randint(0, 4095)))                   # rs1/uimm == 0
    for _ in range(4):
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(0, 4095)))   # funct3=100 illegal
    rng.shuffle(stream)
    return stream


def build_mul_div_stream(rng):
    """All 8 RV32M ops (RV32MFast). RTL ibex_decoder.sv 512-551, 1096-1126, 1187-1188."""
    stream = []
    for f3 in range(8):   # mul mulh mulhsu mulhu div divu rem remu
        for _ in range(4):
            stream.append(enc_r(OPC["OP"], f3, 0b0000001, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(0, 31)))
    rng.shuffle(stream)
    return stream


def build_illegal_encodings_stream(rng):
    """One word per reachable illegal arm under RV32BNone (JALR/BRANCH/LOAD/
    STORE bad funct3, OP_IMM 001/101 B-ext + defaults, OP ternary form, OP
    B-ext pairs + default, MISC_MEM other, unknown opcodes).
    RTL ibex_decoder.sv 265-267, 282, 299-332, 360-444, 451-554, 583-585, 639-662.
    FIX vs draft: LEGAL_OPCODES is not provided -> use set(OPC.values())."""
    stream = []
    R = lambda: rng.randint(0, 31)
    I12 = lambda: rng.randint(-2048, 2047)
    for _ in range(2):
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), R(), R(), I12()))
    for f3 in (0b010, 0b011):
        stream.append(enc_b(OPC["BRANCH"], f3, R(), R(), rng.randint(-4096, 4095) & ~1))
    for f3 in (0b011, 0b100, 0b101, 0b110, 0b111):
        stream.append(enc_s(OPC["STORE"], f3, R(), R(), I12()))
    for f3 in (0b110, 0b011, 0b111):
        stream.append(enc_i(OPC["LOAD"], f3, R(), R(), I12()))
    for top5 in (0b00000, 0b00100, 0b01001, 0b00101, 0b01101, 0b00001, 0b01100,
                 rng.choice([0b00010, 0b00011, 0b10000, 0b11111, 0b01000])):
        b26, b25 = rng.randint(0, 1), rng.randint(0, 1)
        if top5 == 0b00000 and b26 == 0 and b25 == 0:
            b25 = 1                                     # make slli illegal
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, top5, b26, b25, R(), R(), R()))
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612,
                0x618, 0x619, 0x61A, 0x603):           # clz-group (+ default 0x603)
        stream.append(enc_i(OPC["OP_IMM"], 0b001, R(), R(), f12))
    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00001, 1, 0, R(), R(), R()))  # shfl-form, instr[26]=1
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, R(), 1, rng.randint(0, 1), R(), R(), R()))  # fsri
    for top5 in (0b00100, 0b01100, 0b01001, 0b01101, 0b00101, 0b00001,
                 rng.choice([0b00010, 0b10000, 0b11111, 0b00110])):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, rng.randint(0, 1), R(), R(), R()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, R(), R(), 0b00111))  # orc.b shamt
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, R(), R(), 0b11000))  # rev8 shamt
    for top5 in (0b00000, 0b01000):                      # srli/srai with instr[25]=1
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, 1, R(), R(), R()))
    for f3, b in ((0b001, 0b11), (0b101, 0b11), (0b001, 0b10), (0b101, 0b10)):
        stream.append(enc_r4(OPC["OP"], f3, R(), b, R(), R(), R()))
    b_pairs = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4),
               (0x30, 1), (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7),
               (0x04, 4), (0x24, 4), (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1),
               (0x24, 5), (0x24, 7), (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5),
               (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1), (0x10, 5), (0x05, 1),
               (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]
    for f7, f3 in b_pairs:
        stream.append(enc_r(OPC["OP"], f3, f7, R(), R(), R()))
    for _ in range(4):
        f7 = rng.choice([0x08, 0x11, 0x40, 0x41, 0x48, 0x60])
        stream.append(enc_r(OPC["OP"], rng.randint(0, 7), f7, R(), R(), R()))
    stream.append(enc_r(OPC["OP"], 0b001, 0x20, R(), R(), R()))  # sub-funct7 with sll funct3
    for _ in range(3):
        stream.append(enc_i(OPC["MISC_MEM"], rng.randint(2, 7), R(), R(), I12()))
    legal_ops = set(OPC.values())
    bad = [op for op in range(128) if op not in legal_ops]
    for _ in range(10):
        op = rng.choice(bad)
        stream.append(enc_r(op, rng.randint(0, 7), rng.randint(0, 127), R(), R(), R()))
    rng.shuffle(stream)
    return stream


def build_field_toggle_stream(rng):
    """Walking-one / walking-zero register and immediate fields so the
    rf_raddr_*/rf_waddr_o/zimm/imm_*_type_o outputs toggle (constant-0 bits
    excepted). RTL ibex_decoder.sv 133-140, 164-172."""
    stream = []
    for b in range(5):
        one = 1 << b
        zero = 31 ^ one
        stream.append(enc_r(OPC["OP"], 0b000, 0x00, one, one, one))
        stream.append(enc_r(OPC["OP"], 0b000, 0x00, zero, zero, zero))
    for b in range(12):
        imm = 1 << b
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rng.randint(0, 31), rng.randint(0, 31), imm))
        stream.append(enc_s(OPC["STORE"], 0b010, rng.randint(0, 31), rng.randint(0, 31), imm ^ 0xFFF))
    for b in range(20):
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31), 1 << b))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31), ((1 << 20) - 1) ^ (1 << b)))
    return stream


NEW_BUILDERS = [
    build_rtype_op_x_port_sweep_stream,
    build_itype_op_x_port_sweep_stream,
    build_load_store_op_x_port_sweep_stream,
    build_control_flow_and_upper_imm_stream,
    build_system_csr_stream,
    build_mul_div_stream,
    build_illegal_encodings_stream,
    build_field_toggle_stream,
]
```