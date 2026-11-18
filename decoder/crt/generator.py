"""
Constrained Random (CRT) stimulus generator for the Ibex decoder.

One stimulus = one 32-bit instruction word + the decoder's side inputs
(instr_first_cycle_i, branch_taken_i, illegal_c_insn_i).

Three stimulus classes, mixed by weight (see profiles/*.json):
  legal       - pick an instruction from the ISA table (weighted by extension),
                fill free fields under constraints (register / immediate
                corner-case biasing, CSR address list, ...)
  mutated     - take a legal instruction and flip 1..3 bits in the decode-
                relevant fields (opcode, funct3, funct7, funct12) -> hits the
                illegal-instruction branches near legal encodings
  random_word - fully random 32-bit word; optionally with a legal major opcode
                (the "pure random" baseline is profiles/pure_random.json)
"""

import json
import random
from dataclasses import dataclass
from pathlib import Path

from .isa import SPECS, B_EXTS, B_EXT_NAMES, LEGAL_OPCODES, encode

# Machine-mode / debug CSRs Ibex implements (plus a few that it does not).
CSR_ADDRS = [
    0x300, 0x301, 0x304, 0x305, 0x310, 0x320, 0x340, 0x341, 0x342, 0x343, 0x344,
    0x3A0, 0x3A1, 0x3A2, 0x3A3, 0x3B0, 0x3B1, 0x3B2, 0x3B3, 0x747, 0x757,
    0x7A0, 0x7A1, 0x7A2, 0x7A3, 0x7A8, 0x7AA, 0x7B0, 0x7B1, 0x7B2, 0x7B3,
    0x7C0, 0x7C1, 0xB00, 0xB02, 0xB03, 0xB80, 0xB82, 0xB83,
    0xC00, 0xC01, 0xC02, 0xC80, 0xC82, 0xF11, 0xF12, 0xF13, 0xF14,
]

DEFAULT_PROFILE = {
    "class_weights":   {"legal": 80, "mutated": 15, "random_word": 5},
    "ext_weights":     {"I": 40, "M": 10, "Zicsr": 10, "Priv": 6, "Zifencei": 2, "B": 30},
    "only_enabled_b":  False,   # True: B instructions only from exts the RTL config decodes
    "reg_x0_prob":     0.15,
    "reg_x31_prob":    0.05,
    "imm_corner_prob": 0.25,
    "csr_known_prob":  0.8,
    "sys_dirty_prob":  0.1,     # SYSTEM insns with rd/rs1 != 0 (illegal)
    "random_word_legal_opcode_prob": 0.5,
    "first_cycle_prob":   0.9,
    "branch_taken_prob":  0.5,
    "illegal_c_prob":     0.01,
}


@dataclass
class Stimulus:
    insn: int
    name: str            # instruction name, "mut:<name>" or "rand"
    ext: str
    first_cycle: int = 1
    branch_taken: int = 1
    illegal_c: int = 0


def load_llm_builders():
    """Builders of one LLM run: LLM_MODULE is a comma-separated list of pass
    modules (e.g. crt.llm_runs.A_run1_p1,crt.llm_runs.A_run1_p2); their
    NEW_BUILDERS lists are concatenated. Each pass lives in its own module so a
    later pass can never shadow an earlier pass's helpers."""
    import importlib
    import os
    mods = os.environ.get("LLM_MODULE", "crt.llm_runs.C_run1_p1")
    builders = []
    for m in [x.strip() for x in mods.split(",") if x.strip()]:
        builders += list(importlib.import_module(m).NEW_BUILDERS)
    return builders


def load_profile(path_or_name):
    prof = dict(DEFAULT_PROFILE)
    if path_or_name:
        p = Path(path_or_name)
        if not p.exists():
            p = Path(__file__).resolve().parent.parent / "profiles" / f"{path_or_name}.json"
        user = json.loads(p.read_text())
        user.pop("_comment", None)
        prof.update(user)
    return prof


class CRTGenerator:
    def __init__(self, seed=0, profile=None, rv32b=0, rv32m=2):
        self.rng = random.Random(seed)
        self.p = profile if isinstance(profile, dict) else load_profile(profile)
        self.rv32b = rv32b
        self.rv32m = rv32m
        self._stream_q = []

        enabled_b = B_EXTS[rv32b]
        groups = {}
        for s in SPECS:
            grp = "B" if s.ext in B_EXT_NAMES else s.ext
            if grp == "B" and self.p["only_enabled_b"] and s.ext not in enabled_b:
                continue
            groups.setdefault(grp, []).append(s)
        self.groups = {g: v for g, v in groups.items()
                       if self.p["ext_weights"].get(g, 0) > 0}
        self.group_names = list(self.groups)
        self.group_w = [self.p["ext_weights"][g] for g in self.group_names]

    # --- constrained field generators --------------------------------------
    def reg(self):
        r = self.rng.random()
        if r < self.p["reg_x0_prob"]:
            return 0
        if r < self.p["reg_x0_prob"] + self.p["reg_x31_prob"]:
            return 31
        return self.rng.randint(1, 31)

    def simm(self, bits):
        lo, hi = -(1 << (bits - 1)), (1 << (bits - 1)) - 1
        if self.rng.random() < self.p["imm_corner_prob"]:
            return self.rng.choice([0, 1, -1, lo, hi, 2, -2])
        return self.rng.randint(lo, hi)

    def csr(self):
        if self.rng.random() < self.p["csr_known_prob"]:
            return self.rng.choice(CSR_ADDRS)
        return self.rng.randint(0, 0xFFF)

    def fields(self, spec):
        f = {"rd": self.reg(), "rs1": self.reg(), "rs2": self.reg(), "rs3": self.reg(),
             "shamt": self.rng.randint(0, 31), "b26": 0, "b25": 0,
             "csr": self.csr(), "uimm": self.rng.randint(0, 31)}
        fmt = spec.fmt
        if fmt == "B":
            f["imm"] = self.simm(13) & ~1
        elif fmt == "J":
            f["imm"] = self.simm(21) & ~1
        elif fmt == "U":
            f["imm"] = self.simm(20)
        elif fmt == "FENCE":
            f["imm"] = self.rng.randint(0, 0xFFF)
        else:
            f["imm"] = self.simm(12)
        if fmt == "SYS" and self.rng.random() >= self.p["sys_dirty_prob"]:
            f["rd"] = f["rs1"] = 0
        return f

    # --- stimulus classes ---------------------------------------------------
    def gen_legal(self):
        grp = self.rng.choices(self.group_names, self.group_w)[0]
        spec = self.rng.choice(self.groups[grp])
        return encode(spec, self.fields(spec)), spec.name, spec.ext

    def gen_mutated(self):
        insn, name, ext = self.gen_legal()
        # decode-relevant bit positions: opcode, funct3, funct7, rs2/funct12 low bits
        positions = list(range(0, 7)) + list(range(12, 15)) + list(range(20, 32))
        for b in self.rng.sample(positions, self.rng.randint(1, 3)):
            insn ^= 1 << b
        return insn, f"mut:{name}", ext

    def gen_random_word(self):
        w = self.rng.getrandbits(32)
        if self.rng.random() < self.p["random_word_legal_opcode_prob"]:
            w = (w & ~0x7F) | self.rng.choice(sorted(LEGAL_OPCODES))
        return w, "rand", "-"

    def gen_llm_stream(self):
        # Streams are consumed in order (never shuffled across streams: the L11
        # lesson -- a global shuffle destroys any adjacency a stream relies on).
        if not self._stream_q:
            builders = load_llm_builders()
            if not builders:
                raise RuntimeError("profile uses llm_stream but LLM_MODULE has no builders")
            b = self.rng.choice(builders)
            self._stream_q = [(w, b.__name__) for w in b(self.rng)]
        w, bname = self._stream_q.pop(0)
        return w, f"llm:{bname}", "llm"

    def next(self):
        cw = self.p["class_weights"]
        cls = self.rng.choices(list(cw), list(cw.values()))[0]
        insn, name, ext = {"legal": self.gen_legal,
                           "mutated": self.gen_mutated,
                           "random_word": self.gen_random_word,
                           "llm_stream": self.gen_llm_stream}[cls]()
        return Stimulus(
            insn=insn & 0xFFFFFFFF, name=name, ext=ext,
            first_cycle=int(self.rng.random() < self.p["first_cycle_prob"]),
            branch_taken=int(self.rng.random() < self.p["branch_taken_prob"]),
            illegal_c=int(self.rng.random() < self.p["illegal_c_prob"]),
        )

    def __iter__(self):
        while True:
            yield self.next()


if __name__ == "__main__":
    # Quick offline sanity check: python3 -m crt.generator
    g = CRTGenerator(seed=1)
    for _ in range(20):
        s = g.next()
        print(f"0x{s.insn:08x}  {s.name:<14} {s.ext:<8} fc={s.first_cycle}")
