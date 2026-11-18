"""Direct port of ml4dv's ConstrainedRandomAgent4IC (paper's hand-crafted CPU
CRT) as a single builder for our test_llm_crt harness.

Source: ~/verilator/ml4dv/agents/agent_random.py, class
ConstrainedRandomAgent4IC. We translate the per-cycle instruction stream it
would emit (over N cycles, running against a linear PC) into a linear program
block that the harness loads at 0x100080.

Semantic fidelity:
- Same R-type / S-type / JAL encoders, same funct7/funct3 tables.
- Same bias ratios: rd=x0 with 8% prob, same_src 12%, zero_src 12%, hazard
  pair 32%.
- Same `pending_instr` chaining: the hazard consumer immediately follows the
  hazard producer in the returned list, which — under our harness's linear
  execution — gives back-to-back retirement and so lights the RAW_HAZARD
  cross-coverage bin, same as in the paper's per-cycle PC-rewrite model.
- Same instruction class weights: ALU 62%, Store 26%, JAL 12%.
- JAL offsets kept within ±256 (as in paper) so they can't escape the mapped
  region. In practice some end up unmapped under our linear-program load; the
  harness returns NOP for those addresses, so the CPU keeps retiring.
"""
from __future__ import annotations

import random


# ─── Encoding tables (verbatim from ml4dv) ────────────────────────────────────

_R_ALU_OPS = {
    "add":  (0b0000000, 0b000),
    "sub":  (0b0100000, 0b000),
    "sll":  (0b0000000, 0b001),
    "slt":  (0b0000000, 0b010),
    "sltu": (0b0000000, 0b011),
    "xor":  (0b0000000, 0b100),
    "srl":  (0b0000000, 0b101),
    "sra":  (0b0100000, 0b101),
    "or":   (0b0000000, 0b110),
    "and":  (0b0000000, 0b111),
}
_STORE_OPS = {"sb": 0b000, "sh": 0b001, "sw": 0b010}
_R_ALU_NAMES = list(_R_ALU_OPS.keys())
_STORE_NAMES = list(_STORE_OPS.keys())
_IC_INSTR_NAMES = _R_ALU_NAMES + _STORE_NAMES + ["jal"]


def _rand_reg(rng, allow_x0=True):
    return rng.randint(0, 31) if allow_x0 else rng.randint(1, 31)


def _pick_reg_not(rng, *forbidden, allow_x0=True):
    lo = 0 if allow_x0 else 1
    return rng.choice([r for r in range(lo, 32) if r not in forbidden])


def _biased_rd(rng):
    # 8% chance of rd = x0 (ZERO_DST)
    if rng.random() < 0.08:
        return 0
    return _rand_reg(rng, allow_x0=False)


def _biased_src_pair(rng):
    # 12% same_src, 12% zero_src, 76% independent random
    mode = rng.random()
    if mode < 0.12:
        r = _rand_reg(rng, allow_x0=True)
        return r, r
    if mode < 0.24:
        if rng.choice([True, False]):
            return 0, _rand_reg(rng, allow_x0=True)
        return _rand_reg(rng, allow_x0=True), 0
    return _rand_reg(rng, allow_x0=True), _rand_reg(rng, allow_x0=True)


def _encode_r(funct7, rs2, rs1, funct3, rd, opcode=0b0110011):
    return ((funct7 & 0x7F) << 25) | ((rs2 & 0x1F) << 20) | ((rs1 & 0x1F) << 15) \
         | ((funct3 & 0x7) << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


def _encode_s(imm, rs2, rs1, funct3, opcode=0b0100011):
    imm &= 0xFFF
    return (((imm >> 5) & 0x7F) << 25) | ((rs2 & 0x1F) << 20) | ((rs1 & 0x1F) << 15) \
         | ((funct3 & 0x7) << 12) | ((imm & 0x1F) << 7) | (opcode & 0x7F)


def _encode_jal(rd, imm, opcode=0b1101111):
    imm &= 0x1FFFFF
    bit20 = (imm >> 20) & 0x1
    bit11 = (imm >> 11) & 0x1
    return (bit20 << 31) | (((imm >> 1) & 0x3FF) << 21) | (bit11 << 20) \
         | (((imm >> 12) & 0xFF) << 12) | ((rd & 0x1F) << 7) | (opcode & 0x7F)


# ─── Instruction generators ───────────────────────────────────────────────────

def _gen_alu(rng, op_name=None, rd=None, rs1=None, rs2=None):
    if op_name is None:
        op_name = rng.choice(_R_ALU_NAMES)
    funct7, funct3 = _R_ALU_OPS[op_name]
    if rd is None:
        rd = _biased_rd(rng)
    if rs1 is None or rs2 is None:
        g_rs1, g_rs2 = _biased_src_pair(rng)
        rs1 = g_rs1 if rs1 is None else rs1
        rs2 = g_rs2 if rs2 is None else rs2
    return _encode_r(funct7, rs2, rs1, funct3, rd)


def _gen_store(rng, op_name=None, rs1=None, rs2=None):
    if op_name is None:
        op_name = rng.choice(_STORE_NAMES)
    funct3 = _STORE_OPS[op_name]
    if rs1 is None or rs2 is None:
        g_rs1, g_rs2 = _biased_src_pair(rng)
        rs1 = g_rs1 if rs1 is None else rs1
        rs2 = g_rs2 if rs2 is None else rs2
    if funct3 == 0b000:
        imm = rng.choice(range(-16, 17, 1))
    elif funct3 == 0b001:
        imm = rng.choice(range(-16, 17, 2))
    else:
        imm = rng.choice(range(-16, 17, 4))
    return _encode_s(imm, rs2, rs1, funct3)


def _gen_jal(rng, rd=None, backward=None):
    if rd is None:
        rd = 0 if rng.random() < 0.08 else _rand_reg(rng, allow_x0=False)
    if backward is None:
        backward = rng.choice([True, False])
    if backward:
        imm = rng.choice(range(-256, 0, 2))
    else:
        imm = rng.choice(range(2, 258, 2))
    return _encode_jal(rd, imm)


def _generate_valid_insn(rng):
    kind = rng.choices(["alu", "store", "jal"], weights=[62, 26, 12], k=1)[0]
    if kind == "alu":
        return _gen_alu(rng)
    if kind == "store":
        return _gen_store(rng)
    return _gen_jal(rng)


def _make_hazard_consumer(rng, instr_name, hazard_reg):
    if instr_name in _R_ALU_OPS:
        rd = _biased_rd(rng)
        if rng.choice([True, False]):
            rs1, rs2 = hazard_reg, _pick_reg_not(rng, hazard_reg)
        else:
            rs1, rs2 = _pick_reg_not(rng, hazard_reg), hazard_reg
        return _gen_alu(rng, instr_name, rd=rd, rs1=rs1, rs2=rs2)
    if instr_name in _STORE_OPS:
        if rng.choice([True, False]):
            rs1, rs2 = hazard_reg, _pick_reg_not(rng, hazard_reg)
        else:
            rs1, rs2 = _pick_reg_not(rng, hazard_reg), hazard_reg
        return _gen_store(rng, instr_name, rs1=rs1, rs2=rs2)
    return _generate_valid_insn(rng)


def _schedule_hazard(rng, prev_name, curr_name):
    """Returns (producer, consumer) pair as two consecutive instructions."""
    hazard_reg = _rand_reg(rng, allow_x0=False)
    consumer = _make_hazard_consumer(rng, curr_name, hazard_reg)
    if prev_name in _R_ALU_OPS:
        producer = _gen_alu(rng, prev_name, rd=hazard_reg)
    elif prev_name == "jal":
        producer = _gen_jal(rng, rd=hazard_reg, backward=rng.choice([True, False]))
    else:
        return None, None
    return producer, consumer


# ─── Builder: single-stream linear translation of ml4dv's per-cycle agent ─────

# N_INSTR chosen to roughly match A_run3's 510 words for a fair kill-rate
# comparison. The builder emits exactly N_INSTR instructions (plus the
# hazard-pair expansions that already count as two consecutive emissions).
N_INSTR = 500


def build_ml4dv_cr_stream(rng):
    """Linear port of ml4dv ConstrainedRandomAgent4IC. Emits ~500 valid
    RV32I words with the same biasing as the paper: 8% rd=x0, 12% same_src,
    12% zero_src, 32% hazard pair, 62/26/12 alu/store/jal.
    """
    stream = []
    i = 0
    while i < N_INSTR:
        # pending_instr model: if last iteration scheduled a hazard pair, the
        # producer was already emitted; now emit the consumer.
        if stream and getattr(build_ml4dv_cr_stream, '_pending', None) is not None:
            stream.append(build_ml4dv_cr_stream._pending)
            build_ml4dv_cr_stream._pending = None
            i += 1
            continue
        # 32% chance to start a hazard pair this iteration.
        if rng.random() < 0.32:
            prev = rng.choice(_R_ALU_NAMES + ["jal"])
            curr = rng.choice(_IC_INSTR_NAMES[:-1])  # consumer not JAL
            producer, consumer = _schedule_hazard(rng, prev, curr)
            if producer is not None:
                stream.append(producer)
                build_ml4dv_cr_stream._pending = consumer
                i += 1
                continue
        # Fallback: emit a single valid instruction.
        stream.append(_generate_valid_insn(rng))
        i += 1
    build_ml4dv_cr_stream._pending = None  # reset for next seed
    return stream


NEW_BUILDERS = [build_ml4dv_cr_stream]
