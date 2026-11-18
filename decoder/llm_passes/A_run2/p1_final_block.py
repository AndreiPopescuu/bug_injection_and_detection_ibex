def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def build_r_alu_port_sweep_stream(rng):
    """Targets BIN type 1 for ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU,
    BIN type 2 (read_A/read_B/write on every register) and BIN type 3 for these
    10 ops x {read_A, read_B, write} x 32 registers (960 bins).

    Encoding: R-type, opcode OP (0x33), funct3 per op, funct7 0x00 (0x20 for
    SUB/SRA); rd -> write, rs1 -> read_A, rs2 -> read_B.  For each op, rd, rs1
    and rs2 are three independent random permutations of 0..31, so 32 words
    hit all 96 (port, register) bins of that op.
    """
    ops = [(0b000, 0x00), (0b000, 0x20), (0b111, 0x00), (0b110, 0x00),
           (0b100, 0x00), (0b001, 0x00), (0b101, 0x00), (0b101, 0x20),
           (0b010, 0x00), (0b011, 0x00)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream


def build_imm_alu_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for ADDI, ANDI, ORI, XORI, SLTI,
    SLTUI(=SLTIU), SLLI, SRLI, SRAI x {read_A, write} x 32 registers, plus the
    SUBI bins under the only plausible reading (ADDI with a negative
    immediate -- RV32I has no SUBI encoding).
    """
    OI = OPC["OP_IMM"]
    kinds = ["addi", "subi", "andi", "ori", "xori", "slti", "sltiu",
             "slli", "srli", "srai"]
    rng.shuffle(kinds)
    f3_of = {"addi": 0, "subi": 0, "slti": 2, "sltiu": 3, "xori": 4,
             "ori": 6, "andi": 7}
    stream = []
    for k in kinds:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            rd, rs1 = rds[i], rs1s[i]
            if k == "slli":
                w = enc_ish(OI, 0b001, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "srli":
                w = enc_ish(OI, 0b101, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "srai":
                w = enc_ish(OI, 0b101, 0b01000, 0, 0, rd, rs1, rng.randint(0, 31))
            elif k == "subi":
                w = enc_i(OI, 0b000, rd, rs1, rng.randint(-2048, -1))  # addi, negative imm
            elif k == "addi":
                w = enc_i(OI, 0b000, rd, rs1, rng.randint(0, 2047))
            else:
                w = enc_i(OI, f3_of[k], rd, rs1, rng.randint(-2048, 2047))
            stream.append(w)
    return stream


def build_load_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for LW, LH, LB x {read_A (base rs1),
    write (rd)} x 32 registers (192 bins)."""
    ops = [0b010, 0b001, 0b000]   # lw lh lb
    rng.shuffle(ops)
    stream = []
    for f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i],
                                rng.randint(-2048, 2047)))
    return stream


def build_store_port_sweep_stream(rng):
    """Targets BIN type 1 and BIN type 3 for SW, SH, SB x {read_A (base rs1),
    read_B (data rs2)} x 32 registers (192 bins)."""
    ops = [0b010, 0b001, 0b000]   # sw sh sb
    rng.shuffle(ops)
    stream = []
    for f3 in ops:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i],
                                rng.randint(-2048, 2047)))
    return stream


NEW_BUILDERS = [build_r_alu_port_sweep_stream, build_imm_alu_port_sweep_stream,
                build_load_port_sweep_stream, build_store_port_sweep_stream]
