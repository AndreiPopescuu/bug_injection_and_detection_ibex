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
