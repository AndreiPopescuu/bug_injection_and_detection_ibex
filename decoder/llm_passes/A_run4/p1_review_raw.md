```python
"""LLM-CRT run A_run4, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def build_ops_type1_stream(rng):
    """
    Targets BIN type 1: Ensure at least one instruction for each of the 26 specified operations.
    Relies on various encodings: enc_r (R-type), enc_i (I-type), enc_s (S-type), and enc_ish (Shift-immediate).
    Random words would rarely hit all 26 specific opcode/funct3/funct7 combinations systematically.
    """
    stream = []
    # Helper to get random regs
    def r(): return rng.randint(0, 31)
    def imm(): return rng.randint(-2048, 2047)
    def sh(): return rng.randint(0, 31)

    # R-type
    r_ops = [
        (0, 0x00), # ADD
        (0, 0x20), # SUB
        (7, 0x00), # AND
        (6, 0x00), # OR
        (4, 0x00), # XOR
        (1, 0x00), # SLL
        (5, 0x00), # SRL
        (5, 0x20), # SRA
        (2, 0x00), # SLT
        (3, 0x00), # SLTU
    ]
    for f3, f7 in r_ops:
        stream.append(enc_r(OPC["OP"], f3, f7, r(), r(), r()))

    # I-type
    i_ops = [
        (0, True),  # ADDI
        (0, False), # SUBI (represented as ADDI with negative imm)
        (7, True),  # ANDI
        (6, True),  # ORI
        (4, True),  # XORI
        (2, True),  # SLTI
        (3, True),  # SLTUI
    ]
    for f3, pos in i_ops:
        val = imm() if pos else -abs(imm() or 1)
        stream.append(enc_i(OPC["OP_IMM"], f3, r(), r(), val))

    # ISH-type
    stream.append(enc_ish(OPC["OP_IMM"], 1, 0, 0, 0, r(), r(), sh()))       # SLLI
    stream.append(enc_ish(OPC["OP_IMM"], 5, 0, 0, 0, r(), r(), sh()))       # SRLI
    stream.append(enc_ish(OPC["OP_IMM"], 5, 0b01000, 0, 0, r(), r(), sh())) # SRAI

    # Loads (I-type)
    for f3 in [2, 1, 0]: # LW, LH, LB
        stream.append(enc_i(OPC["LOAD"], f3, r(), r(), imm()))

    # Stores (S-type)
    for f3 in [2, 1, 0]: # SW, SH, SB
        stream.append(enc_s(OPC["STORE"], f3, r(), r(), imm()))

    return stream

def build_ports_type2_stream(rng):
    """
    Targets BIN type 2: Ensure every register file port (read_A, read_B, write) for all 32 registers is used.
    Relies on enc_r (ADD) which utilizes all three ports: rs1 (read_A), rs2 (read_B), and rd (write).
    Random words might miss specific register indices (e.g., reg 0 or 31) across all port types.
    """
    stream = []
    for i in range(32):
        # ADD rd, rs1, rs2 where all are the same register i
        # This hits write port i, read_A port i, and read_B port i.
        stream.append(enc_r(OPC["OP"], 0, 0x00, i, i, i))
    return stream

def build_op_port_type3_stream(rng):
    """
    Targets BIN type 3: For each operation and each available register file port, provide an instruction.
    Combines the operation set from BIN type 1 with explicit register usage.
    Since the decoder typically flags the port usage based on the instruction format, 
    using any valid register for rd, rs1, or rs2 satisfies the 'port' requirement for that op.
    """
    stream = []
    def r(): return rng.randint(0, 31)
    def imm(): return rng.randint(-2048, 2047)
    def sh(): return rng.randint(0, 31)

    # R-type: hits (op, read_A), (op, read_B), (op, write)
    r_ops = [(0, 0x00), (0, 0x20), (7, 0x00), (6, 0x00), (4, 0x00), (1, 0x00), (5, 0x00), (5, 0x20), (2, 0x00), (3, 0x00)]
    for f3, f7 in r_ops:
        stream.append(enc_r(OPC["OP"], f3, f7, r(), r(), r()))

    # I-type: hits (op, read_A), (op, write)
    i_ops = [0, 7, 6, 4, 2, 3] # ADDI, ANDI, ORI, XORI, SLTI, SLTUI
    for f3 in i_ops:
        stream.append(enc_i(OPC["OP_IMM"], f3, r(), r(), imm()))

    # ISH-type: hits (op, read_A), (op, write)
    stream.append(enc_ish(OPC["OP_IMM"], 1, 0, 0, 0, r(), r(), sh())) # SLLI
    stream.append(enc_ish(OPC["OP_IMM"], 5, 0, 0, 0, r(), r(), sh())) # SRLI
    stream.append(enc_ish(OPC["OP_IMM"], 5, 0b01000, 0, 0, r(), r(), sh())) # SRAI

    # Loads: hits (op, read_A), (op, write)
    for f3 in [2, 1, 0]: # LW, LH, LB
        stream.append(enc_i(OPC["LOAD"], f3, r(), r(), imm()))

    # Stores: hits (op, read_A), (op, read_B)
    for f3 in [2, 1, 0]: # SW, SH, SB
        stream.append(enc_s(OPC["STORE"], f3, r(), r(), imm()))

    return stream

NEW_BUILDERS = [build_ops_type1_stream, build_ports_type2_stream, build_op_port_type3_stream]
```