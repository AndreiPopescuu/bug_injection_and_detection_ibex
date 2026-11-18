"""Encoder library for the ibex_cpu LLM-CRT experiment.

This is the ONLY encoder LLM builders may use. All 14 instructions in the
ml4dv coverage plan are here, plus ADDI (used to initialize registers in the
prelude and for NOP padding between builder blocks).

Builders write:
    stream = []
    stream.append(ADD(rd=10, rs1=1, rs2=2))
    stream.append(JAL(rd=1, offset=8))
    stream.append(NOP())
    return stream
"""

from __future__ import annotations


# ─── 32-bit encoding helpers ──────────────────────────────────────────────────

def _r(funct7: int, rs2: int, rs1: int, funct3: int, rd: int, opcode: int = 0b0110011) -> int:
    return (
        ((funct7 & 0x7F) << 25)
        | ((rs2 & 0x1F) << 20)
        | ((rs1 & 0x1F) << 15)
        | ((funct3 & 0x7) << 12)
        | ((rd & 0x1F) << 7)
        | (opcode & 0x7F)
    )


def _s(imm12: int, rs2: int, rs1: int, funct3: int, opcode: int = 0b0100011) -> int:
    imm = imm12 & 0xFFF
    return (
        ((imm >> 5) << 25)
        | ((rs2 & 0x1F) << 20)
        | ((rs1 & 0x1F) << 15)
        | ((funct3 & 0x7) << 12)
        | ((imm & 0x1F) << 7)
        | (opcode & 0x7F)
    )


def _j(rd: int, offset: int) -> int:
    """JAL encoding. `offset` is in bytes, must be even."""
    o = offset & 0x1FFFFF
    imm20 = (o >> 20) & 0x1
    imm10_1 = (o >> 1) & 0x3FF
    imm11 = (o >> 11) & 0x1
    imm19_12 = (o >> 12) & 0xFF
    return (imm20 << 31) | (imm10_1 << 21) | (imm11 << 20) | (imm19_12 << 12) | ((rd & 0x1F) << 7) | 0b1101111


def _i(imm: int, rs1: int, funct3: int, rd: int, opcode: int) -> int:
    return ((imm & 0xFFF) << 20) | ((rs1 & 0x1F) << 15) | ((funct3 & 0x7) << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


# ─── 14 plan instructions ─────────────────────────────────────────────────────
# R-type ALU ops. All take (rd, rs1, rs2).

def ADD(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b000, rd)


def SUB(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0100000, rs2, rs1, 0b000, rd)


def SLL(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b001, rd)


def SLT(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b010, rd)


def SLTU(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b011, rd)


def XOR(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b100, rd)


def SRL(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b101, rd)


def SRA(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0100000, rs2, rs1, 0b101, rd)


def OR(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b110, rd)


def AND(rd: int, rs1: int, rs2: int) -> int:
    return _r(0b0000000, rs2, rs1, 0b111, rd)


# S-type stores. (rs2, rs1, imm) — rs2 is the data register, rs1 is the base
# address register, imm is the 12-bit signed byte offset.

def SB(rs2: int, rs1: int, imm: int = 0) -> int:
    return _s(imm, rs2, rs1, 0b000)


def SH(rs2: int, rs1: int, imm: int = 0) -> int:
    return _s(imm, rs2, rs1, 0b001)


def SW(rs2: int, rs1: int, imm: int = 0) -> int:
    return _s(imm, rs2, rs1, 0b010)


# J-type.

def JAL(rd: int, offset: int) -> int:
    """JAL rd, offset. offset is a BYTE offset from the JAL instruction's PC,
    must be a multiple of 4 for safety (RISC-V allows multiples of 2 for
    compressed, but this project only emits 32-bit instructions)."""
    return _j(rd, offset)


# ─── Helpers (not in the 14-instruction plan but needed for safe programs) ────

def ADDI(rd: int, rs1: int, imm: int) -> int:
    """ADDI — used only in the prelude to initialize registers x1..x15. Not a
    plan instruction, does NOT count toward coverage."""
    return _i(imm, rs1, 0b000, rd, 0b0010011)


def NOP() -> int:
    """NOP = ADDI x0, x0, 0. Used as a landing pad or filler. Not in plan."""
    return ADDI(0, 0, 0)


# ─── Prelude ──────────────────────────────────────────────────────────────────
# Loaded before all builder blocks; initializes x1..x15 to their index so
# stores and arithmetic have non-zero operands.

def prelude() -> list[int]:
    return [ADDI(i, 0, i) for i in range(1, 16)]


# Export the 14 plan instructions as a convenience table so builders can
# iterate over them without re-listing names.
R_PLAN: dict[str, callable] = {
    "ADD": ADD, "SUB": SUB, "SLL": SLL, "SLT": SLT, "SLTU": SLTU,
    "XOR": XOR, "SRL": SRL, "SRA": SRA, "OR": OR, "AND": AND,
}
S_PLAN: dict[str, callable] = {"SB": SB, "SH": SH, "SW": SW}
