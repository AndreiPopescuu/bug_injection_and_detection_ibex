"""Random instruction sequence generator for the ml4dv ibex_cpu coverage plan.

Produces a stream of 32-bit RISC-V encodings drawn from the 14 instructions in
the plan (10 R-type + 3 S-type + JAL). This is the `pure_random` baseline;
LLM-CRT generators will replace this with coverage-driven sampling.

The generator is deterministic given a `random.Random` instance so campaigns
can be reproduced seed-by-seed.
"""

from __future__ import annotations

import random
from dataclasses import dataclass
from typing import Callable


# ─── Encoders (identical to companion `test_cpu_coverage.py`) ─────────────────

def r_type(funct7: int, rs2: int, rs1: int, funct3: int, rd: int) -> int:
    return (funct7 << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (rd << 7) | 0b0110011


def s_type(imm12: int, rs2: int, rs1: int, funct3: int) -> int:
    imm_hi = (imm12 >> 5) & 0x7F
    imm_lo = imm12 & 0x1F
    return (imm_hi << 25) | (rs2 << 20) | (rs1 << 15) | (funct3 << 12) | (imm_lo << 7) | 0b0100011


def jal_enc(rd: int, offset: int) -> int:
    o = offset & 0x1FFFFF  # 21-bit signed
    imm20 = (o >> 20) & 0x1
    imm10_1 = (o >> 1) & 0x3FF
    imm11 = (o >> 11) & 0x1
    imm19_12 = (o >> 12) & 0xFF
    return (imm20 << 31) | (imm10_1 << 21) | (imm11 << 20) | (imm19_12 << 12) | (rd << 7) | 0b1101111


def addi(rd: int, rs1: int, imm: int) -> int:
    return ((imm & 0xFFF) << 20) | (rs1 << 15) | (0b000 << 12) | (rd << 7) | 0b0010011


def nop() -> int:
    return addi(0, 0, 0)


# Operation table — identical to the ml4dv plan.
R_OPS: dict[str, Callable[[int, int, int], int]] = {
    "ADD":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b000, rd),
    "SUB":  lambda rd, rs1, rs2: r_type(0b0100000, rs2, rs1, 0b000, rd),
    "AND":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b111, rd),
    "OR":   lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b110, rd),
    "XOR":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b100, rd),
    "SLL":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b001, rd),
    "SRL":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b101, rd),
    "SRA":  lambda rd, rs1, rs2: r_type(0b0100000, rs2, rs1, 0b101, rd),
    "SLT":  lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b010, rd),
    "SLTU": lambda rd, rs1, rs2: r_type(0b0000000, rs2, rs1, 0b011, rd),
}

S_OPS: dict[str, Callable[[int, int, int], int]] = {
    "SW": lambda rs2, rs1, imm: s_type(imm, rs2, rs1, 0b010),
    "SH": lambda rs2, rs1, imm: s_type(imm, rs2, rs1, 0b001),
    "SB": lambda rs2, rs1, imm: s_type(imm, rs2, rs1, 0b000),
}

R_NAMES = list(R_OPS.keys())
S_NAMES = list(S_OPS.keys())
ALL_NAMES = R_NAMES + S_NAMES + ["JAL"]


# ─── Config ───────────────────────────────────────────────────────────────────

@dataclass(frozen=True)
class RandomConfig:
    # Register pool for operands. [0, 31] = full. Keeping full = SAME_SRC prob = 1/32.
    reg_min: int = 0
    reg_max: int = 31

    # S-type store immediate range (signed 12-bit, but we keep it small to point
    # at memory the CPU can respond to).
    store_imm_min: int = -16
    store_imm_max: int = 16

    # JAL offsets. Encoding allows any even value, but we restrict to multiples
    # of 4 so the target lands on an instruction boundary (no half-instruction
    # fetches). Range is small so BR_FORWARDS / BR_BACKWARDS fire without
    # launching PC into unmapped memory.
    jal_offset_min: int = -16
    jal_offset_max: int = 16

    # If > 0, sprinkle NOPs between every N randomly chosen instructions so the
    # CPU keeps retiring even when faulting ops stall the pipeline. 0 = disabled.
    nop_every: int = 0

    # Whether to include JAL in the pool. OFF by default because random JAL in
    # a linear program either loops (small offset) or escapes to unmapped
    # memory (large offset). Covered by LLM-CRT streams instead.
    include_jal: bool = False


# ─── Generator ────────────────────────────────────────────────────────────────

PRELUDE_REG_INIT_COUNT = 15  # x1..x15 pre-initialized via ADDI


def prelude(cfg: RandomConfig | None = None) -> list[int]:
    """Deterministic setup block prepended to every program.

    Initializes x1..x15 with their own index so loads/stores land on in-range
    addresses and arithmetic has non-zero operands.
    """
    return [addi(i, 0, i) for i in range(1, PRELUDE_REG_INIT_COUNT + 1)]


def _rand_reg(rng: random.Random, cfg: RandomConfig) -> int:
    return rng.randint(cfg.reg_min, cfg.reg_max)


def _rand_r(rng: random.Random, cfg: RandomConfig) -> int:
    name = rng.choice(R_NAMES)
    return R_OPS[name](
        _rand_reg(rng, cfg),
        _rand_reg(rng, cfg),
        _rand_reg(rng, cfg),
    )


def _rand_s(rng: random.Random, cfg: RandomConfig) -> int:
    name = rng.choice(S_NAMES)
    rs2 = _rand_reg(rng, cfg)
    rs1 = _rand_reg(rng, cfg)
    imm = rng.randint(cfg.store_imm_min, cfg.store_imm_max)
    return S_OPS[name](rs2, rs1, imm)


def _rand_jal(rng: random.Random, cfg: RandomConfig) -> int:
    rd = _rand_reg(rng, cfg)
    # 4-aligned to stay on instruction boundaries.
    quart = rng.randint(cfg.jal_offset_min // 4, cfg.jal_offset_max // 4)
    return jal_enc(rd, quart * 4)


_GENERATORS = {
    "R": _rand_r,
    "S": _rand_s,
    "JAL": _rand_jal,
}

# JAL in a linear program creates loops (small offsets) or escapes memory
# (large offsets), so for the linear-program baseline we exclude it. BR_*
# bins are exercised only by LLM-CRT streams that pair JAL with proper
# landing pads. Set `include_jal=True` to re-enable random JAL at your own
# risk.
_CLASS_WEIGHTS_NO_JAL = [("R", 10), ("S", 3)]
_CLASS_WEIGHTS_WITH_JAL = [("R", 10), ("S", 3), ("JAL", 1)]


def _pick_class(rng: random.Random, cfg: RandomConfig) -> str:
    weights = _CLASS_WEIGHTS_WITH_JAL if cfg.include_jal else _CLASS_WEIGHTS_NO_JAL
    classes, w = zip(*weights)
    return rng.choices(classes, weights=w, k=1)[0]


def random_sequence(
    rng: random.Random,
    n: int,
    cfg: RandomConfig | None = None,
) -> list[int]:
    """Return a list of `n` random 32-bit encodings.

    Does NOT include the prelude — call `prelude()` + concatenate if you need
    pre-initialized registers.
    """
    cfg = cfg or RandomConfig()
    out: list[int] = []
    for i in range(n):
        klass = _pick_class(rng, cfg)
        out.append(_GENERATORS[klass](rng, cfg))
        if cfg.nop_every and (i + 1) % cfg.nop_every == 0:
            out.append(nop())
    return out


def random_program(
    rng: random.Random,
    n: int,
    cfg: RandomConfig | None = None,
) -> list[int]:
    """Prelude + `n` random instructions. Ready to drop into imem."""
    return prelude(cfg) + random_sequence(rng, n, cfg)
