"""LLM-CRT run B_run2, pass 1 (condition B). Reviewed builders,
merged verbatim from llm_passes/B_run2/p1_final_block.py by llm_pipeline.py."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def _perm(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def _rand_imm12(rng):
    # mix of small, extreme and fully random 12-bit signed immediates
    c = rng.random()
    if c < 0.15:
        return rng.choice([-2048, -1, 0, 1, 2047])
    if c < 0.35:
        return rng.randint(-16, 16)
    return rng.randint(-2048, 2047)


def build_rtype_reg_port_sweep_stream(rng):
    """Functional bins: op-coverage + port-coverage + op x port cross for the 10
    R-type ops ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU (10 x 96 cross bins).

    Relies on ibex_decoder.sv lines 447-450 (OPCODE_OP sets rf_ren_a_o, rf_ren_b_o,
    rf_we -> rf_we_o), lines 456-465 (legal RV32I funct7/funct3 pairs keep
    illegal_insn_o=0) and lines 993-1002 (alu_operator_o = ALU_ADD/SUB/SLT/SLTU/XOR/
    OR/AND/SLL/SRL/SRA). Ports come from rf_raddr_a_o (line 167, rs1), rf_raddr_b_o
    (line 168, rs2) and rf_waddr_o (line 172, rd).

    For each op, rd/rs1/rs2 each walk an independent random permutation of 0..31,
    so 32 words cover all 96 (op, port, reg) cross bins of that op.
    """
    ops = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b111), (0x00, 0b110),
           (0x00, 0b100), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101),
           (0x00, 0b010), (0x00, 0b011)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f7, f3 in ops:
        rd, rs1, rs2 = _perm(rng), _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rd[i], rs1[i], rs2[i]))
    return stream


def build_itype_alu_reg_port_sweep_stream(rng):
    """Functional bins: op + read_A/write port cross bins for ADDI, SLTI, SLTUI
    (sltiu), XORI, ORI, ANDI, SLLI, SRLI, SRAI (9 x 64 cross bins). ADDI is
    emitted with both positive and negative immediates (in case the plan's
    "SUBI" is modelled as addi with a negative immediate -- RV32I has no subi).

    Relies on ibex_decoder.sv lines 348-358 (OPCODE_OP_IMM: rf_ren_a_o=1, rf_we=1,
    legal funct3), line 362 (slli legal only if instr[26:25]==0), line 404
    (srli/srai legal only if instr[26:25]==0), lines 822-827 (alu_operator_o
    ADD/SLT/SLTU/XOR/OR/AND), line 892 (ALU_SLL) and lines 932-936 (ALU_SRL/SRA,
    RV32BNone branch). Ports: rf_raddr_a_o (rs1), rf_waddr_o (rd); rf_ren_b_o=0.
    """
    stream = []
    ops = ["addi", "slti", "sltiu", "xori", "ori", "andi", "slli", "srli", "srai"]
    rng.shuffle(ops)
    f3_of = {"addi": 0, "slti": 2, "sltiu": 3, "xori": 4, "ori": 6, "andi": 7}
    for op in ops:
        rd, rs1 = _perm(rng), _perm(rng)
        for i in range(32):
            if op in f3_of:
                imm = _rand_imm12(rng)
                if op == "addi":
                    # half the sweep uses negative immediates (subtract-immediate idiom)
                    imm = -rng.randint(1, 2048) if (i % 2) else rng.randint(0, 2047)
                stream.append(enc_i(OPC["OP_IMM"], f3_of[op], rd[i], rs1[i], imm))
            else:
                shamt = rng.randint(0, 31)
                if op == "slli":
                    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 0, 0, rd[i], rs1[i], shamt))
                elif op == "srli":
                    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00000, 0, 0, rd[i], rs1[i], shamt))
                else:
                    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01000, 0, 0, rd[i], rs1[i], shamt))
    return stream


def build_load_store_reg_port_sweep_stream(rng):
    """Functional bins: LB/LH/LW x (read_A, write) and SB/SH/SW x (read_A, read_B)
    cross bins (6 x 64), plus the op bins for all six memory ops.

    Relies on ibex_decoder.sv lines 293-310 (OPCODE_STORE) and 312-334
    (OPCODE_LOAD: data_sign_extension_o=~instr[14]). NB: the LOAD arm never sets
    rf_we (line-213 default 0), so a LOAD "write" bin is only creditable if the
    model reads rf_waddr_o (line 172, rd) -- rd is swept over all 32 values.
    ALU side: lines 776-795. A few lbu/lhu make data_sign_extension_o toggle.
    """
    stream = []
    plan = [("load", 0b000), ("load", 0b001), ("load", 0b010),
            ("store", 0b000), ("store", 0b001), ("store", 0b010)]
    rng.shuffle(plan)
    for kind, f3 in plan:
        a, b = _perm(rng), _perm(rng)
        for i in range(32):
            imm = _rand_imm12(rng)
            if kind == "load":
                stream.append(enc_i(OPC["LOAD"], f3, a[i], b[i], imm))        # l{b,h,w} rd=a rs1=b
            else:
                stream.append(enc_s(OPC["STORE"], f3, a[i], b[i], imm))       # s{b,h,w} rs1=a rs2=b
    for _ in range(16):
        f3 = rng.choice([0b100, 0b101])                                       # lbu / lhu
        stream.append(enc_i(OPC["LOAD"], f3, rng.randint(0, 31), rng.randint(0, 31), _rand_imm12(rng)))
    return stream


def build_rv32m_muldiv_stream(rng):
    """Code coverage: all 8 RV32M encodings (mul, mulh, mulhsu, mulhu, div, divu,
    rem, remu). ibex_decoder.sv lines 512-551 (multdiv_operator_o /
    multdiv_signed_mode_o), 1096-1126 (mult_sel_o / div_sel_o), 1187-1188
    (mult_en_o / div_en_o). Not part of the functional plan.
    """
    stream = []
    for _ in range(4):
        f3s = list(range(8))
        rng.shuffle(f3s)
        for f3 in f3s:
            stream.append(enc_r(OPC["OP"], f3, 0x01, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(0, 31)))
    return stream


def build_control_flow_upper_imm_stream(rng):
    """Code coverage: JAL, JALR, all 6 legal branch conditions, LUI, AUIPC,
    FENCE, FENCE.I, with extreme and random immediates.

    Relies on ibex_decoder.sv lines 241-247, 254-270, 272-287, 340-346, 563-582
    and the ALU side 694-770, 801-814, 1138-1157. Immediates are drawn from a
    set including 0, all-ones and min/max values, so imm_b/j/u_type_o bits are
    likely (not guaranteed) to toggle; build_immediate_walking_bits_stream
    guarantees it.
    """
    stream = []
    for _ in range(4):
        stream.append(enc_j(OPC["JAL"], rng.randint(0, 31),
                            rng.choice([0, -2, 2, -(1 << 20), (1 << 20) - 2,
                                        rng.randint(-(1 << 19), (1 << 19) - 1) * 2])))
        stream.append(enc_i(OPC["JALR"], 0b000, rng.randint(0, 31), rng.randint(0, 31),
                            _rand_imm12(rng)))
        for f3 in (0b000, 0b001, 0b100, 0b101, 0b110, 0b111):     # beq bne blt bge bltu bgeu
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randint(0, 31), rng.randint(0, 31),
                                rng.choice([0, -2, 2, -4096, 4094,
                                            rng.randint(-2048, 2047) * 2])))
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31),
                            rng.choice([0, 0xFFFFF, 0x80000, rng.randint(0, 0xFFFFF)])))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31),
                            rng.choice([0, 0xFFFFF, 0x7FFFF, rng.randint(0, 0xFFFFF)])))
        stream.append(enc_i(OPC["MISC_MEM"], 0b000, rng.randint(0, 31), rng.randint(0, 31),
                            rng.randint(0, 0xFFF)))                  # fence (fields free)
        stream.append(enc_i(OPC["MISC_MEM"], 0b001, rng.randint(0, 31), rng.randint(0, 31),
                            rng.randint(0, 0xFFF)))                  # fence.i
    return stream


def build_system_csr_stream(rng):
    """Code coverage: ECALL/EBREAK/MRET/DRET/WFI (legal and with nonzero rs1/rd),
    unknown funct12 under funct3=000, all six CSR ops incl. the rs1==0 /
    uimm==0 read-only downgrade (lines 188-197), and the reserved CSR
    funct3=100 (csr_illegal at 632, which also exercises the csr_access_o
    squash at 661). ibex_decoder.sv lines 589-635, ALU side 1162-1179.
    """
    stream = []
    for _ in range(3):
        for f12 in (0x000, 0x001, 0x302, 0x7B2, 0x105):            # ecall ebreak mret dret wfi
            stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))
        f12 = rng.choice([0x000, 0x001, 0x302, 0x7B2, 0x105])
        stream.append(enc_i(OPC["SYSTEM"], 0b000, rng.randint(1, 31), 0, f12))   # rd != 0 -> illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, rng.randint(1, 31), f12))   # rs1 != 0 -> illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0,
                            rng.choice([0x002, 0x102, 0x202, 0x7FF, 0xFFF,
                                        rng.randint(0, 0xFFF)])))                # unknown funct12
        csr = rng.choice([0x300, 0x305, 0x341, 0x342, 0x343, 0x344, 0x7B0,
                          0xB00, 0xC00, 0xF14, rng.randint(0, 0xFFF)])
        for f3 in (0b001, 0b010, 0b011):                           # csrrw csrrs csrrc
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0, csr))          # rs1 == 0
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), rng.randint(1, 31), csr))
        for f3 in (0b101, 0b110, 0b111):                           # csrrwi csrrsi csrrci
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0, csr))          # uimm == 0
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), rng.randint(1, 31), csr))
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randint(0, 31), rng.randint(0, 31), csr))  # reserved
    return stream


def build_base_isa_illegal_encodings_stream(rng):
    """Code coverage: illegal_insn=1 arms inside the legal RV32IM opcodes, plus
    unknown major opcodes. ibex_decoder.sv lines 265-267, 282, 299-301 + 308,
    326-332, 362, 394, 404, 438, 552-554, 583-585, 639-641, and the squash block
    654-662 (rf_we_o, data_req_o, data_we_o, jump_in_dec_o, jump_set_o,
    branch_in_dec_o forced to 0; the csr_access_o squash comes from the CSR
    funct3=100 word in build_system_csr_stream).
    """
    stream = []
    legal = set(OPC.values())
    bad_ops = [o for o in range(128) if o not in legal]
    r = lambda: rng.randint(0, 31)
    for _ in range(2):
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), r(), r(), _rand_imm12(rng)))
        stream.append(enc_b(OPC["BRANCH"], rng.choice([0b010, 0b011]), r(), r(), rng.randint(-2048, 2047) * 2))
        stream.append(enc_s(OPC["STORE"], rng.choice([0b100, 0b101, 0b110, 0b111]), r(), r(), _rand_imm12(rng)))
        stream.append(enc_s(OPC["STORE"], 0b011, r(), r(), _rand_imm12(rng)))
        stream.append(enc_i(OPC["LOAD"], 0b110, r(), r(), _rand_imm12(rng)))          # lwu
        stream.append(enc_i(OPC["LOAD"], rng.choice([0b011, 0b111]), r(), r(), _rand_imm12(rng)))
        # slli with nonzero instr[26:25]
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, rng.randint(0, 1), 1, r(), r(), r()))
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 1, 0, r(), r(), r()))
        # OP_IMM f3=001 / 101 unknown top5 (not used by any B encoding)
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, rng.choice([0b00010, 0b00011, 0b10000, 0b11111]), 0, 0, r(), r(), r()))
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.choice([0b00010, 0b00011, 0b10000, 0b11111]), 0, 0, r(), r(), r()))
        # srli / srai with instr[25]=1 (instr[26]=0 so not fsri)
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.choice([0b00000, 0b01000]), 0, 1, r(), r(), r()))
        # OP with unknown funct7 (f7 bit1 = instr[26] clear so not the ternary path at 451)
        stream.append(enc_r(OPC["OP"], rng.randint(0, 7), rng.choice([0x08, 0x11, 0x40, 0x41, 0x79]), r(), r(), r()))
        stream.append(enc_r(OPC["OP"], rng.choice([1, 2, 3]), 0x20, r(), r(), r()))  # sub-funct7 w/ bad f3 (4/6/7 are xnor/orn/andn)
        stream.append(enc_i(OPC["MISC_MEM"], rng.randint(2, 7), r(), r(), rng.randint(0, 0xFFF)))
        for _k in range(4):
            stream.append(enc_i(rng.choice(bad_ops), rng.randint(0, 7), r(), r(), rng.randint(0, 0xFFF)))
    return stream


def build_rv32b_encodings_under_bnone_stream(rng):
    """Code coverage: every RV32B / Zbt encoding Ibex knows, sent to a decoder
    configured RV32B=RV32BNone, so each must decode as illegal.

    ibex_decoder.sv lines 363-393 (OP_IMM f3=001 incl. the instr[26]=1 shfli arm
    at 373 and the unary default at 391), 398-432 (OP_IMM f3=101: fsri at
    399-400, sroi, rori, bexti, grevi/rev8, gorci/orc.b, unshfli; the
    instr[26]=1 arm at 433-434 is dead code because instr[26]=1 is caught at
    399), 451-452 (ternary cmix/cmov/fsl/fsr), 467-509 (B R-type arms). ALU
    side: 892, 932-936, 948, and the case items at 1005-1093 (reached; only
    their inner RV32B if-bodies are constant-false). The RV32B-gated blocks at
    830-890, 897-929 and 949-989 are unreachable under RV32BNone.
    """
    stream = []
    r = lambda: rng.randint(0, 31)
    b_rr = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4),
            (0x30, 1), (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7),
            (0x04, 4), (0x24, 4), (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1),
            (0x24, 5), (0x24, 7), (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5),
            (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1), (0x10, 5), (0x05, 1),
            (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]
    for f7, f3 in b_rr:
        stream.append(enc_r(OPC["OP"], f3, f7, r(), r(), r()))
    for f3, b in ((1, 0b11), (5, 0b11), (1, 0b10), (5, 0b10)):        # cmix cmov fsl fsr
        stream.append(enc_r4(OPC["OP"], f3, r(), b, r(), r(), r()))
    stream.append(enc_r4(OPC["OP"], rng.choice([0, 2, 3, 4, 6, 7]), r(), rng.choice([0b10, 0b11]), r(), r(), r()))
    # shift-immediate style B ops (f3=001 and f3=101)
    for top5 in (0b00100, 0b01001, 0b00101, 0b01101, 0b00001):
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, top5, 0, 0, r(), r(), r()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00001, 1, 0, r(), r(), r()))      # shfli w/ bit26 -> 373
    for top5 in (0b00100, 0b01100, 0b01001, 0b01101, 0b00101, 0b00001):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, 0, r(), r(), r()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, r(), r(), 0b11000))   # rev8
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, r(), r(), 0b00111))   # orc.b -> 424
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, r(), 1, rng.randint(0, 1), r(), r(), r()))  # fsri (bit26)
    # unary (instr[31:20] fixed) incl. an unknown low code for the default at 391
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612, 0x618, 0x619, 0x61A,
                rng.choice([0x603, 0x606, 0x613, 0x61F, 0x67F])):
        stream.append(enc_i(OPC["OP_IMM"], 0b001, r(), r(), f12))
    return stream


def build_immediate_walking_bits_stream(rng):
    """Toggle coverage: walking-one / walking-zero immediates so every bit of
    imm_i/s/b/u/j_type_o, zimm_rs1_type_o (lines 133-140) and the register
    address outputs (167-172) toggles both ways. Uses addi, sw, beq, lui, jal
    and csrrwi with register fields 0 or 31.
    """
    stream = []
    fmts = ["i", "s", "b", "u", "j", "z"]
    rng.shuffle(fmts)
    for fmt in fmts:
        width = {"i": 12, "s": 12, "b": 12, "u": 20, "j": 20, "z": 5}[fmt]
        for k in range(width):
            for invert in (False, True):
                v = 1 << k
                if invert:
                    v = ((1 << width) - 1) ^ v
                reg = rng.choice([0, 31])
                if fmt == "i":
                    stream.append(enc_i(OPC["OP_IMM"], 0b000, reg, 31 - reg, v))             # addi
                elif fmt == "s":
                    stream.append(enc_s(OPC["STORE"], 0b010, reg, 31 - reg, v))             # sw
                elif fmt == "b":
                    stream.append(enc_b(OPC["BRANCH"], 0b000, reg, 31 - reg, v << 1))        # beq
                elif fmt == "u":
                    stream.append(enc_u(OPC["LUI"], reg, v))                                 # lui
                elif fmt == "j":
                    stream.append(enc_j(OPC["JAL"], reg, v << 1))                            # jal
                else:
                    stream.append(enc_i(OPC["SYSTEM"], 0b101, reg, v, rng.randint(0, 0xFFF)))  # csrrwi
    return stream


NEW_BUILDERS = [
    build_rtype_reg_port_sweep_stream,
    build_itype_alu_reg_port_sweep_stream,
    build_load_store_reg_port_sweep_stream,
    build_rv32m_muldiv_stream,
    build_control_flow_upper_imm_stream,
    build_system_csr_stream,
    build_base_isa_illegal_encodings_stream,
    build_rv32b_encodings_under_bnone_stream,
    build_immediate_walking_bits_stream,
]

