def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p

_R_OPS = [  # (name, funct3, funct7)
    ("add", 0b000, 0x00), ("sub", 0b000, 0x20), ("sll", 0b001, 0x00),
    ("slt", 0b010, 0x00), ("sltu", 0b011, 0x00), ("xor", 0b100, 0x00),
    ("srl", 0b101, 0x00), ("sra", 0b101, 0x20), ("or", 0b110, 0x00),
    ("and", 0b111, 0x00),
]
_I_ALU_OPS = [  # (name, funct3)
    ("addi", 0b000), ("slti", 0b010), ("sltiu", 0b011),
    ("xori", 0b100), ("ori", 0b110), ("andi", 0b111),
]
_SH_OPS = [  # (name, funct3, instr[31:27])
    ("slli", 0b001, 0b00000), ("srli", 0b101, 0b00000), ("srai", 0b101, 0b01000),
]
_LOADS = [("lb", 0b000), ("lh", 0b001), ("lw", 0b010)]
_STORES = [("sb", 0b000), ("sh", 0b001), ("sw", 0b010)]


def _rand_imm12(rng):
    # mix corner values and uniform values
    if rng.random() < 0.25:
        return rng.choice([0, 1, -1, 2047, -2048])
    return rng.randint(-2048, 2047)


def _rand_imm12_nonneg(rng):
    # non-negative immediates for ADDI, so a monitor that maps negative-imm
    # ADDI to SUBI still credits every ADDI x port bin
    if rng.random() < 0.25:
        return rng.choice([0, 1, 2047])
    return rng.randint(0, 2047)


def build_rtype_port_cross_stream(rng):
    """ADD/SUB/AND/OR/XOR/SLL/SRL/SRA/SLT/SLTU x {read_A, read_B, write} x 32 regs."""
    stream = []
    ops = list(_R_OPS)
    rng.shuffle(ops)
    for _name, f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream   # 320 words


def build_itype_alu_port_cross_stream(rng):
    """ADDI/SLTI/SLTUI/XORI/ORI/ANDI x {read_A, write} x 32 regs.
    ADDI uses non-negative immediates only (negative ones are in the SUBI probe)."""
    stream = []
    ops = list(_I_ALU_OPS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            imm = _rand_imm12_nonneg(rng) if f3 == 0b000 else _rand_imm12(rng)
            stream.append(enc_i(OPC["OP_IMM"], f3, rds[i], rs1s[i], imm))
    return stream   # 192 words


def build_shift_imm_port_cross_stream(rng):
    """SLLI/SRLI/SRAI x {read_A, write} x 32 regs; instr[31:25] = 0000000 / 0100000."""
    stream = []
    ops = list(_SH_OPS)
    rng.shuffle(ops)
    for _name, f3, top5 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rds[i], rs1s[i],
                                  rng.randint(0, 31)))
    return stream   # 96 words


def build_load_port_cross_stream(rng):
    """LB/LH/LW x {read_A (base), write (rd)} x 32 regs."""
    stream = []
    ops = list(_LOADS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_store_port_cross_stream(rng):
    """SB/SH/SW x {read_A (base rs1), read_B (data rs2)} x 32 regs."""
    stream = []
    ops = list(_STORES)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_addi_negative_imm_subi_probe_stream(rng):
    """SUBI probe: ADDI with imm in [-2048, -1], rd/rs1 sweeping all 32 regs."""
    stream = []
    rds, rs1s = _perm32(rng), _perm32(rng)
    for i in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rds[i], rs1s[i], rng.randint(-2048, -1)))
    return stream   # 32 words


NEW_BUILDERS = [
    build_rtype_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_shift_imm_port_cross_stream,
    build_load_port_cross_stream,
    build_store_port_cross_stream,
    build_addi_negative_imm_subi_probe_stream,
]
