"""codec_encarsia — L9's full action space minus trap-inducing ops.

Builds on `codec_l9` (83 ops) by removing 5 instructions that would halt
the CPU on our encarsia_tb harness (which has NO trap handler and NO
interrupts). The resulting 78-op action space exercises every RV32IMC
microarchitecture path that's reachable without exception infrastructure.

Removed ops (original L9 indices):
    62  ECALL        — trap, requires handler
    63  EBREAK       — trap, requires handler
    70  MRET         — trap return, undefined without preceding trap
    71  WFI          — halts CPU until interrupt
    82  C_EBREAK     — compressed EBREAK, same issue

Kept (78 ops total):
    L6 base (61):  RV32IM + branches + JAL + CSR + RVC
    L7 safe (1):   AUIPC
    L8 adds (6):   LUI, JALR, CSRRWI, CSRRSI, CSRRCI, FENCE
    L9 scalar (1): FENCE.I  (safe on Ibex without ICache, triggers refetch)
    L9 RVC (9):    C_JAL, C_J, C_BEQZ, C_BNEZ, C_ADDI16SP, C_LWSP, C_SWSP, C_JR, C_JALR

This is a thin remapping shim: emit_program() translates a 78-op action
to the equivalent L9 action and dispatches to codec_l9.emit_program.
"""
from __future__ import annotations

import sys
from pathlib import Path

_L9 = Path("/home/andre/ibex-coverage-experiments/rl-coverage/level9_ops")
sys.path.insert(0, str(_L9))

import codec_l9 as _l9  # noqa: E402
from codec_l9 import IMM_BUCKETS  # noqa: E402

# L9 indices that halt the CPU on our trap-less harness.
_UNSAFE_L9 = frozenset({
    62,  # ECALL
    63,  # EBREAK
    70,  # MRET
    71,  # WFI
    82,  # C_EBREAK
})

# Safe L9 ops, in their original order. Agent's op index 0..77 maps here.
_SAFE_L9: list[int] = [op for op in range(_l9.N_OPS) if op not in _UNSAFE_L9]
N_OPS: int = len(_SAFE_L9)  # 78

# Reverse map: L9 op idx -> encarsia op idx (or None if unsafe).
_L9_TO_ENC: dict[int, int] = {l9: enc for enc, l9 in enumerate(_SAFE_L9)}


def op_name(enc_idx: int) -> str:
    """Debug: return the L9 Op enum name for an encarsia op index."""
    return _l9.Op(_SAFE_L9[enc_idx]).name


def emit_program(actions: list[tuple[int, int, int, int, int]]) -> list[int]:
    """Translate encarsia 78-op actions to L9 ops and emit machine code.

    Each action is `(op, rd, rs1, rs2, imm_bucket)` where `op` is in 0..77.
    """
    remapped = [(_SAFE_L9[a[0]], a[1], a[2], a[3], a[4]) for a in actions]
    return _l9.emit_program(remapped)


if __name__ == "__main__":
    print(f"codec_encarsia: N_OPS={N_OPS}, IMM_BUCKETS={IMM_BUCKETS}")
    print("Removed from L9:")
    for l9_idx in sorted(_UNSAFE_L9):
        print(f"  L9[{l9_idx}] = {_l9.Op(l9_idx).name}")
    print(f"\nKept ({N_OPS} ops):")
    for i in range(N_OPS):
        print(f"  enc[{i:>3}] = L9[{_SAFE_L9[i]:>3}] = {op_name(i)}")
