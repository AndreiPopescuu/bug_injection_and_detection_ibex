```python
"""LLM-CRT run A_run6, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401

def build_rtype_sweep_stream(rng):
    """
    Targets BIN 1, 2, 3 for R-type operations.
    Operations: ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND.
    Encodings: Opcode 0x33, varies by funct3 and funct7.
    Sweeps rd, rs1, rs2 from 0-31 to hit all register file port bins.
    """
    stream = []
    # (funct3, funct7, name)
    ops = [
        (0x0, 0x00, "ADD"), (0x0, 0x20, "SUB"),
        (0x1, 0x00, "SLL"), (0x2, 0x00, "SLT"), (0x3, 0x00, "SLTU"),
        (0x4, 0x00, "XOR"), (0x5, 0x00, "SRL"), (0x5, 0x20, "SRA"),
        (0x6, 0x00, "OR"),  (0x7, 0x00, "AND"),
    ]
    for f3, f7, name in ops:
        for i in range(32):
            # Using i for rd, rs1, and rs2 simultaneously to hit all ports for each reg for each op
            rd, rs1, rs2 = i, i, i
            word = (f7 << 25) | (rs2 << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x33
            stream.append(word & 0xFFFFFFFF)
    return stream

def build_itype_sweep_stream(rng):
    """
    Targets BIN 1, 2, 3 for I-type ALU operations.
    Operations: ADDI, SUBI (via ADDI negative), ANDI, ORI, XORI, SLLI, SRLI, SRAI, SLTI, SLTUI.
    Encodings: Opcode 0x13.
    Sweeps rd and rs1 from 0-31.
    """
    stream = []
    # (funct3, is_shift, name)
    # is_shift: 0=standard imm, 1=shamt in [24:20]
    ops = [
        (0x0, 0, "ADDI"), (0x0, 0, "SUBI"), # SUBI implemented as ADDI with negative imm
        (0x7, 0, "ANDI"), (0x6, 0, "ORI"), (0x4, 0, "XORI"),
        (0x1, 1, "SLLI"), (0x5, 1, "SRLI"), (0x5, 1, "SRAI"),
        (0x2, 0, "SLTI"), (0x3, 0, "SLTUI"),
    ]
    for f3, is_shift, name in ops:
        for i in range(32):
            rd, rs1 = i, i
            if name == "SUBI":
                imm = -1 & 0xFFF
            elif is_shift:
                # shamt is in bits 24:20
                shamt = 5 & 0x1F
                # SRAI has bit 30 set
                prefix = (1 << 30) if name == "SRAI" else 0
                word = prefix | (shamt << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x13
                stream.append(word & 0xFFFFFFFF)
                continue
            else:
                imm = 1 & 0xFFF
            
            word = (imm << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x13
            stream.append(word & 0xFFFFFFFF)
    return stream

def build_load_sweep_stream(rng):
    """
    Targets BIN 1, 2, 3 for Load operations.
    Operations: LW, LH, LB.
    Encodings: Opcode 0x03, varies by funct3.
    Sweeps rd and rs1 from 0-31.
    """
    stream = []
    ops = [(0x2, "LW"), (0x1, "LH"), (0x0, "LB")]
    for f3, name in ops:
        for i in range(32):
            rd, rs1 = i, i
            imm = 0 & 0xFFF
            word = (imm << 20) | (rs1 << 15) | (f3 << 12) | (rd << 7) | 0x03
            stream.append(word & 0xFFFFFFFF)
    return stream

def build_store_sweep_stream(rng):
    """
    Targets BIN 1, 2, 3 for Store operations.
    Operations: SW, SH, SB.
    Encodings: Opcode 0x23, varies by funct3.
    Sweeps rs1 and rs2 from 0-31.
    """
    stream = []
    ops = [(0x2, "SW"), (0x1, "SH"), (0x0, "SB")]
    for f3, name in ops:
        for i in range(32):
            rs1, rs2 = i, i
            imm = 0
            # S-type: imm[11:5] << 20 | rs2 << 15 | funct3 << 12 | rs1 << 7 | opcode | imm[4:0]
            word = ((imm >> 5) << 20) | (rs2 << 15) | (f3 << 12) | (rs1 << 7) | 0x23 | (imm & 0x1F)
            stream.append(word & 0xFFFFFFFF)
    return stream

NEW_BUILDERS = [
    build_rtype_sweep_stream,
    build_itype_sweep_stream,
    build_load_sweep_stream,
    build_store_sweep_stream,
]
```