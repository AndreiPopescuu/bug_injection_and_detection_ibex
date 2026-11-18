"""LLM-CRT run A_run5, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def build_op_type1_stream(rng):
    """
    Targets BIN type 1: Ensure each of the 26 operations is performed at least once.
    Relies on standard RV32I opcodes and funct3/funct7 fields. 
    Random words rarely hit all 26 specific combinations of opcodes and funct fields.
    """
    stream = []
    # R-type: opcode 0x33
    # (funct3, funct7, name)
    r_ops = [
        (0, 0x00, "ADD"), (0, 0x20, "SUB"), (1, 0x00, "SLL"), (2, 0x00, "SLT"),
        (3, 0x00, "SLTU"), (4, 0x00, "XOR"), (5, 0x00, "SRL"), (5, 0x20, "SRA"),
        (6, 0x00, "OR"), (7, 0x00, "AND")
    ]
    for f3, f7, name in r_ops:
        rd, rs1, rs2 = rng.randint(0, 31), rng.randint(0, 31), rng.randint(0, 31)
        word = (f7 << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x33
        stream.append(word & 0xFFFFFFFF)

    # I-type: opcode 0x13 (OP-IMM)
    # (funct3, name, special_f7)
    i_ops = [
        (0, "ADDI", 0x00), (0, "SUBI", 0x00), (1, "SLLI", 0x00), (2, "SLTI", 0x00),
        (3, "SLTUI", 0x00), (4, "XORI", 0x00), (5, "SRLI", 0x00), (5, "SRAI", 0x20),
        (6, "ORI", 0x00), (7, "ANDI", 0x00)
    ]
    for f3, name, f7 in i_ops:
        rd, rs1 = rng.randint(0, 31), rng.randint(0, 31)
        imm = rng.randint(0, 2047)
        if name == "SUBI":
            imm = rng.randint(-2048, -1) & 0xFFF # Use negative ADDI for SUBI
        
        # Shift instructions (SLLI, SRLI, SRAI) use a 5-bit immediate in bits 24:20
        if name in ["SLLI", "SRLI", "SRAI"]:
            shamt = rng.randint(0, 31)
            word = (f7 << 25) | (shamt << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x13
        else:
            word = (imm << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x13
        stream.append(word & 0xFFFFFFFF)

    # Load (I-type): opcode 0x03
    for f3 in [0, 1, 2]: # LB, LH, LW
        rd, rs1, imm = rng.randint(0, 31), rng.randint(0, 31), rng.randint(0, 2047)
        word = (imm << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x03
        stream.append(word & 0xFFFFFFFF)

    # Store (S-type): opcode 0x23
    for f3 in [0, 1, 2]: # SB, SH, SW
        rs1, rs2, imm = rng.randint(0, 31), rng.randint(0, 31), rng.randint(0, 2047)
        imm_hi = (imm >> 5) & 0x7F
        imm_lo = imm & 0x1F
        word = (imm_hi << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (imm_lo << 7) | 0x23
        stream.append(word & 0xFFFFFFFF)

    return stream

def build_reg_type2_stream(rng):
    """
    Targets BIN type 2: Each register index (0-31) used as read_A, read_B, and write.
    Uses the ADD instruction because it utilizes all three ports (rs1, rs2, rd).
    Random words would require thousands of samples to hit all 96 register-port combinations.
    """
    stream = []
    for i in range(32):
        # ADD rd, rs1, rs2 -> ADD x_i, x_i, x_i
        # opcode=0x33, f3=0, f7=0
        word = (0x00 << 25) | (i << 20) | (i << 15) | (0 << 12) | (i << 7) | 0x33
        stream.append(word & 0xFFFFFFFF)
    return stream

def build_op_reg_type3_stream(rng):
    """
    Targets BIN type 3: Each operation paired with each port it utilizes.
    Similar to type 1, but ensures specific port usage for every operation.
    Random generation is unlikely to hit the cross-product of all ops and all ports.
    """
    stream = []
    # For R-type, one instruction hits read_A, read_B, and write.
    r_ops = [(0, 0x00), (0, 0x20), (1, 0x00), (2, 0x00), (3, 0x00), (4, 0x00), (5, 0x00), (5, 0x20), (6, 0x00), (7, 0x00)]
    for f3, f7 in r_ops:
        word = (f7 << 25) | (rng.randint(0, 31) << 20) | (rng.randint(0, 31) << 15) | (f3 << 12) | (rng.randint(0, 31) << 7) | 0x33
        stream.append(word & 0xFFFFFFFF)

    # For I-type, one instruction hits read_A and write.
    i_ops = [(0, 0x00), (1, 0x00), (2, 0x00), (3, 0x00), (4, 0x00), (5, 0x00), (5, 0x20), (6, 0x00), (7, 0x00)]
    for f3, f7 in i_ops:
        # Standard I-type
        word = (rng.randint(0, 0xFFF) << 20) | (rng.randint(0, 31) << 15) | (f3 << 12) | (rng.randint(0, 31) << 7) | 0x13
        stream.append(word & 0xFFFFFFFF)
        # Handle SRAI shift encoding specifically
        if f7 == 0x20:
            word = (0x20 << 25) | (rng.randint(0, 31) << 20) | (rng.randint(0, 31) << 15) | (f3 << 12) | (rng.randint(0, 31) << 7) | 0x13
            stream.append(word & 0xFFFFFFFF)

    # Loads hit read_A and write.
    for f3 in [0, 1, 2]:
        word = (rng.randint(0, 0xFFF) << 20) | (rng.randint(0, 31) << 15) | (f3 << 12) | (rng.randint(0, 31) << 7) | 0x03
        stream.append(word & 0xFFFFFFFF)

    # Stores hit read_A and read_B.
    for f3 in [0, 1, 2]:
        imm = rng.randint(0, 2047)
        word = ((imm >> 5) << 25) | (rng.randint(0, 31) << 20) | (rng.randint(0, 31) << 15) | (f3 << 12) | ((imm & 0x1F) << 7) | 0x23
        stream.append(word & 0xFFFFFFFF)

    return stream

NEW_BUILDERS = [build_op_type1_stream, build_reg_type2_stream, build_op_reg_type3_stream]