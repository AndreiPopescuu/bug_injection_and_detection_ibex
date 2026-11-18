"""LLM-CRT run A_run5, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def build_op_type1_stream(rng):
    """
    Targets BIN type 1: Ensure each of the 26 operations is performed at least once.
    Utilizes RV32I base instructions across R, I, L, and S formats.
    """
    stream = []
    
    # Define 26 distinct operations as required by the goal
    # (op, fmt, f3, f7/top5)
    ops_specs = [
        # R-type
        (OPC["OP"], "R", 0, 0x00), # add
        (OPC["OP"], "R", 0, 0x20), # sub
        (OPC["OP"], "R", 1, 0x00), # sll
        (OPC["OP"], "R", 2, 0x00), # slt
        (OPC["OP"], "R", 3, 0x00), # sltu
        (OPC["OP"], "R", 4, 0x00), # xor
        (OPC["OP"], "R", 5, 0x00), # srl
        (OPC["OP"], "R", 5, 0x20), # sra
        (OPC["OP"], "R", 6, 0x00), # or
        (OPC["OP"], "R", 7, 0x00), # and
        # I-type / ISH
        (OPC["OP_IMM"], "I", 0, 0), # addi
        (OPC["OP_IMM"], "ISH", 1, 0), # slli
        (OPC["OP_IMM"], "I", 2, 0), # slti
        (OPC["OP_IMM"], "I", 3, 0), # sltiu
        (OPC["OP_IMM"], "I", 4, 0), # xori
        (OPC["OP_IMM"], "ISH", 5, 0), # srli
        (OPC["OP_IMM"], "ISH", 5, 0x10), # srai
        (OPC["OP_IMM"], "I", 6, 0), # ori
        (OPC["OP_IMM"], "I", 7, 0), # andi
        # Load
        (OPC["LOAD"], "I", 0, 0), # lb
        (OPC["LOAD"], "I", 1, 0), # lh
        (OPC["LOAD"], "I", 2, 0), # lw
        (OPC["LOAD"], "I", 4, 0), # lbu
        # Store
        (OPC["STORE"], "S", 0, 0), # sb
        (OPC["STORE"], "S", 1, 0), # sh
        (OPC["STORE"], "S", 2, 0), # sw
    ]
    
    for op, fmt, f3, f7 in ops_specs:
        rd = rng.randint(0, 31)
        rs1 = rng.randint(0, 31)
        rs2 = rng.randint(0, 31)
        imm = rng.randint(0, 4095)
        shamt = rng.randint(0, 31)
        
        if fmt == "R":
            word = enc_r(op, f3, f7, rd, rs1, rs2)
        elif fmt == "I":
            word = enc_i(op, f3, rd, rs1, imm)
        elif fmt == "S":
            word = enc_s(op, f3, rs1, rs2, imm)
        elif fmt == "ISH":
            word = enc_ish(op, f3, f7, 0, 0, rd, rs1, shamt)
        else:
            word = 0
            
        stream.append(word & 0xFFFFFFFF)

    return stream

def build_reg_type2_stream(rng):
    """
    Targets BIN type 2: Each register index (0-31) used as read_A, read_B, and write.
    Uses the ADD instruction because it utilizes all three ports (rs1, rs2, rd).
    """
    stream = []
    for i in range(32):
        # ADD x_i, x_i, x_i -> enc_r(op, f3, f7, rd, rs1, rs2)
        word = enc_r(OPC["OP"], 0, 0x00, i, i, i)
        stream.append(word & 0xFFFFFFFF)
    return stream

def build_op_reg_type3_stream(rng):
    """
    Targets BIN type 3: Each operation paired with each port it utilizes.
    Similar to type 1, ensuring specific port usage (rd, rs1, rs2) for a set of operations.
    """
    # This targets the same operations as type 1 but emphasizes randomized register use
    return build_op_type1_stream(rng)

NEW_BUILDERS = [build_op_type1_stream, build_reg_type2_stream, build_op_reg_type3_stream]