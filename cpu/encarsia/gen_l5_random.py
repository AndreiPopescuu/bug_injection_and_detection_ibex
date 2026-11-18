"""Generate a random L5-action-space program (RV32IM + branches + JAL + CSR).

Reuses codec from the user's RL repo at level5_real_rtl/codec_l5.py.
Emits Encarsia hex format (addr word per line, starting at BOOT_ADDR).

Usage:
    python3 gen_l5_random.py [--actions 500] [--seed 0] [--out l5_random_s0.hex]
"""
from __future__ import annotations

import argparse
import random
import sys
from pathlib import Path

L5_DIR = Path("/home/andre/ibex-coverage-experiments/rl-coverage/level5_real_rtl")
sys.path.insert(0, str(L5_DIR))

from codec_l5 import N_OPS, IMM_BUCKETS, emit_program  # noqa: E402

BOOT_ADDR = 0x100080
WFI = 0x10500073


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--actions", type=int, default=500)
    ap.add_argument("--seed", type=int, default=0)
    ap.add_argument("--out", type=Path, required=True)
    args = ap.parse_args()

    rng = random.Random(args.seed)
    actions = [
        (rng.randrange(N_OPS),
         rng.randint(0, 31),
         rng.randint(0, 31),
         rng.randint(0, 31),
         rng.randint(0, IMM_BUCKETS - 1))
        for _ in range(args.actions)
    ]
    machine = emit_program(actions)

    # Append WFI terminator if not already present
    if machine[-1] != WFI:
        machine = list(machine) + [WFI]

    lines = []
    for i, w in enumerate(machine):
        addr = BOOT_ADDR + i * 4
        lines.append(f"{addr:08x} {w:08x}")
    args.out.write_text("\n".join(lines) + "\n")
    print(f"wrote {len(machine)} words -> {args.out}")


if __name__ == "__main__":
    main()
