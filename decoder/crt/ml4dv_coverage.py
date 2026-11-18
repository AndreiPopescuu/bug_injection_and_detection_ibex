"""
Exact port of the LLM4DV / ml4dv Ibex-decoder coverage plan, so results are
directly comparable with Table III of the paper (Zhang et al., "LLM4DV: Using
Large Language Models for Hardware Test Stimuli Generation").

Source of truth (ml4dv repo):
  ibex_decoder/ibex_decoder_cocotb.py  CoverageMonitor.sample_*  (sampling rules)
  ibex_decoder/shared_types.py         CoverageDatabase          (bins)
  global_shared_types.py               _get_coverage_plan_ID     (bin names, rate)

Plan = 2107 bins:
  27   op bins       10 ALU reg ops + 10 ALU imm ops + illegal + 3 loads + 3 stores
  96   reg bins      read_A / read_B / write x 32
  1984 cross bins    ALU x {A,B,W}, ALU-imm x {A,W}, load x {A,W}, store x {A,B}
Paper: formal = 2106 (99.95%), Claude 3.5 Sonnet = 2006 (95.21%),
       CRT (100k unconstrained random words) = 1154 (54.77%).
"""

import json
from pathlib import Path

from .func_coverage import parse_enums

ALU_OPS = ["add", "sub", "or", "xor", "and", "sll", "srl", "sra", "slt", "sltu"]
MEM_SIZES = ["word", "half-word", "byte"]


def plan_keys():
    """Bin names in the same order / spelling as ml4dv's _get_coverage_plan_ID."""
    k = [op.upper() for op in ALU_OPS]
    k += [f"{op.upper()}I" for op in ALU_OPS]
    k += ["illegal_instruction"]
    k += [f"L{s[0].upper()}" for s in MEM_SIZES]
    k += [f"S{s[0].upper()}" for s in MEM_SIZES]
    for p in ("read_A_reg", "read_B_reg", "write_reg"):
        k += [f"{p}_{i}" for i in range(32)]
    for op in ALU_OPS:
        O = op.upper()
        k += [f"{O}_x_read_A_reg_{i}" for i in range(32)]
    for op in ALU_OPS:
        O = op.upper()
        k += [f"{O}_x_read_B_reg_{i}" for i in range(32)]
    for op in ALU_OPS:
        O = op.upper()
        k += [f"{O}_x_write_reg_{i}" for i in range(32)]
    for op in ALU_OPS:
        O = op.upper()
        k += [f"{O}I_x_read_A_reg_{i}" for i in range(32)]
    for op in ALU_OPS:
        O = op.upper()
        k += [f"{O}I_x_write_reg_{i}" for i in range(32)]
    for s in MEM_SIZES:
        k += [f"L{s[0].upper()}_x_read_A_reg_{i}" for i in range(32)]
    for s in MEM_SIZES:
        k += [f"L{s[0].upper()}_x_write_reg_{i}" for i in range(32)]
    for s in MEM_SIZES:
        k += [f"S{s[0].upper()}_x_read_A_reg_{i}" for i in range(32)]
    for s in MEM_SIZES:
        k += [f"S{s[0].upper()}_x_read_B_reg_{i}" for i in range(32)]
    return k


class ML4DVCoverage:
    CHECKPOINTS = [100, 300, 1000, 3000, 10000, 30000, 100000, 300000, 1000000]

    def __init__(self, pkg_path):
        e = parse_enums(pkg_path)
        alu = {n: i for i, n in enumerate(e["alu_op_e"])}
        self.alu_name = {alu[f"ALU_{op.upper()}"]: op for op in ALU_OPS}
        self.OP_A_REG_A = e["op_a_sel_e"].index("OP_A_REG_A")
        self.OP_B_IMM = e["op_b_sel_e"].index("OP_B_IMM")
        self.RF_WD_EX = e["rf_wd_sel_e"].index("RF_WD_EX")
        self.bins = dict.fromkeys(plan_keys(), 0)
        assert len(self.bins) == 2107, len(self.bins)
        self.n = 0
        self.curve = {}           # stimuli -> bins hit
        self.nhit = 0
        self.last_new = 0         # stimulus index at which the latest new bin was hit

    def _inc(self, k):
        if self.bins[k] == 0:
            self.nhit += 1
            self.last_new = self.n
        self.bins[k] += 1

    def sample(self, o):
        """o: dict of decoder outputs (same keys as test_crt_decoder.OUTPUTS)."""
        self.n += 1
        if o["illegal_insn"]:
            self._inc("illegal_instruction")
        else:
            alu_op = alu_imm = load = store = None
            # CoverageMonitor.sample_alu_ops
            if (o["rf_we"] and not o["mult_sel"] and not o["div_sel"] and o["rf_ren_a"]
                    and o["alu_op_a_mux_sel"] == self.OP_A_REG_A
                    and o["rf_wdata_sel"] == self.RF_WD_EX):
                op = self.alu_name.get(o["alu_operator"])
                if op:
                    if o["alu_op_b_mux_sel"] == self.OP_B_IMM:
                        alu_imm = op
                    else:
                        alu_op = op
            # sample_mem_ops
            if o["data_req"]:
                size = MEM_SIZES[o["data_type"]] if o["data_type"] < 3 else None
                if o["data_we"]:
                    store = size
                else:
                    load = size
            # sample_rf_accesses
            wr = o["rf_waddr"] if (o["rf_we"] or load is not None) else None
            ra = o["rf_raddr_a"] if o["rf_ren_a"] else None
            rb = o["rf_raddr_b"] if o["rf_ren_b"] else None
            # CoverageDatabase.update
            if ra is not None:
                self._inc(f"read_A_reg_{ra}")
            if rb is not None:
                self._inc(f"read_B_reg_{rb}")
            if wr is not None:
                self._inc(f"write_reg_{wr}")
            if alu_op:
                O = alu_op.upper()
                self._inc(O)
                self._inc(f"{O}_x_read_A_reg_{ra}")
                self._inc(f"{O}_x_read_B_reg_{rb}")
                self._inc(f"{O}_x_write_reg_{wr}")
            if alu_imm:
                O = alu_imm.upper()
                self._inc(f"{O}I")
                self._inc(f"{O}I_x_read_A_reg_{ra}")
                self._inc(f"{O}I_x_write_reg_{wr}")
            if load is not None:
                L = f"L{load[0].upper()}"
                self._inc(L)
                self._inc(f"{L}_x_read_A_reg_{ra}")
                self._inc(f"{L}_x_write_reg_{wr}")
            if store is not None:
                S = f"S{store[0].upper()}"
                self._inc(S)
                self._inc(f"{S}_x_read_A_reg_{ra}")
                self._inc(f"{S}_x_read_B_reg_{rb}")
        if self.n in self.CHECKPOINTS:
            self.curve[self.n] = self.hit()

    def hit(self):
        return sum(1 for v in self.bins.values() if v)

    def report(self, log=print):
        h, t = self.hit(), len(self.bins)
        log(f"ML4DV PLAN COVERAGE: {h}/{t} = {100.0 * h / t:.2f}%  (stimuli={self.n})")
        log("  curve: " + ", ".join(f"{k}:{v}" for k, v in self.curve.items()))

    def dump(self, path):
        self.curve[self.n] = self.hit()
        Path(path).parent.mkdir(parents=True, exist_ok=True)
        Path(path).write_text(json.dumps(
            {"n": self.n, "hit": self.hit(), "total": len(self.bins), "last_new": self.last_new,
             "curve": self.curve, "bins": self.bins}, indent=0))
