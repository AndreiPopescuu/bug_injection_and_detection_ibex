"""
Functional coverage model for the Ibex decoder (sampled from DUT outputs).

Coverpoints with a known domain (enum types are parsed from ibex_pkg.sv, so the
bins follow the RTL you simulate). Every coverpoint has a fixed set of bins ->
the report gives hit/total per coverpoint and overall.

The model is plain Python (no pyuvm / cocotb-coverage dependency) and dumps
JSON so several seeds can be merged with scripts/merge_func_cov.py.
"""

import json
import re
from collections import defaultdict
from pathlib import Path

from .isa import SPECS, B_EXTS, B_EXT_NAMES, OPC


# ALU operations reachable without bitmanip, and the minimum RV32B config
# (1 Balanced, 2 OTEarlGrey, 3 Full) that decodes each bitmanip one.
# Bitmanip ops not listed in ALU_MIN_B need Balanced.
ALU_RV32I = {"ALU_ADD", "ALU_SUB", "ALU_XOR", "ALU_OR", "ALU_AND", "ALU_SRA", "ALU_SRL",
             "ALU_SLL", "ALU_LT", "ALU_LTU", "ALU_GE", "ALU_GEU", "ALU_EQ", "ALU_NE",
             "ALU_SLT", "ALU_SLTU"}
ALU_MIN_B = {
    **{a: 2 for a in ["ALU_SRO", "ALU_SLO", "ALU_SHFL", "ALU_UNSHFL", "ALU_XPERM_N",
                      "ALU_XPERM_B", "ALU_XPERM_H", "ALU_CLMUL", "ALU_CLMULR", "ALU_CLMULH",
                      "ALU_CRC32_B", "ALU_CRC32C_B", "ALU_CRC32_H", "ALU_CRC32C_H",
                      "ALU_CRC32_W", "ALU_CRC32C_W"]},
    "ALU_BCOMPRESS": 3, "ALU_BDECOMPRESS": 3,
}

# Legal (multdiv_operator, signed_mode) pairs: mul, mulh, mulhsu, mulhu, div(u), rem(u)
MULTDIV_BINS = ["MD_OP_MULL:0", "MD_OP_MULH:3", "MD_OP_MULH:1", "MD_OP_MULH:0",
                "MD_OP_DIV:3", "MD_OP_DIV:0", "MD_OP_REM:3", "MD_OP_REM:0"]

# Legal (data_type, we, sign_ext): data_type 0=word 1=half 2=byte
# loads: lw (sext only, lwu illegal), lh/lhu, lb/lbu ; stores: sw, sh, sb
LSU_BINS = ["0:0:1", "1:0:1", "1:0:0", "2:0:1", "2:0:0", "0:1:0", "1:1:0", "2:1:0"]


def parse_enums(pkg_path):
    """Return {enum_type_name: [member names in value order]} from ibex_pkg.sv."""
    txt = Path(pkg_path).read_text()
    txt = re.sub(r"//.*", "", txt)
    enums = {}
    for body, name in re.findall(r"typedef\s+enum[^{]*\{(.*?)\}\s*(\w+)\s*;", txt, re.S):
        members, val = [], 0
        for item in [x.strip() for x in body.split(",") if x.strip()]:
            if "=" in item:
                n, v = [x.strip() for x in item.split("=", 1)]
                val = _sv_int(v)
            else:
                n = item
            members.append((val, n))
            val += 1
        enums[name] = [n for _, n in sorted(members)]
    return enums


def _sv_int(v):
    v = v.replace("_", "")
    m = re.match(r"\d*'([bdhoBDHO])(\w+)", v)
    if m:
        return int(m.group(2), {"b": 2, "d": 10, "h": 16, "o": 8}[m.group(1).lower()])
    return int(v, 0)


class DecoderCoverage:
    def __init__(self, pkg_path, rv32b=0, rv32m=2):
        self.enums = parse_enums(pkg_path)
        self.rv32b, self.rv32m = rv32b, rv32m
        self.cp = {}          # coverpoint -> {bin: hits}
        self.stats = defaultdict(int)

        def cp(name, bins):
            self.cp[name] = {str(b): 0 for b in bins}

        e = self.enums
        enabled_b = B_EXTS[rv32b]
        legal_names = [s.name for s in SPECS
                       if (s.ext not in B_EXT_NAMES or s.ext in enabled_b)
                       and not (s.ext == "M" and rv32m == 0)]
        self.legal_names = legal_names

        alu_ops = [a for a in e["alu_op_e"]
                   if a in ALU_RV32I or ALU_MIN_B.get(a, 1) <= rv32b]
        special = ["ecall", "ebrk", "mret", "dret", "wfi", "jump_set", "icache_inval",
                   "branch_in_dec", "jump_in_dec", "csr_access"]
        if rv32b:
            special.append("alu_multicycle")
        if rv32m:
            special += ["mult_en", "div_en"]

        cp("insn_legal",       legal_names)                       # each insn decoded legal
        cp("opcode_x_illegal", [f"{o}:{i}" for o in OPC for i in (0, 1)] + ["OTHER:1"])
        cp("alu_operator",     alu_ops)
        cp("alu_op_a_mux_sel", e["op_a_sel_e"])
        cp("alu_op_b_mux_sel", e["op_b_sel_e"])
        cp("imm_a_mux_sel",    e["imm_a_sel_e"])
        cp("imm_b_mux_sel",    e["imm_b_sel_e"])
        cp("rf_wdata_sel",     e["rf_wd_sel_e"])
        cp("csr_op",           e["csr_op_e"])
        if rv32m:
            cp("multdiv_op_x_sign", MULTDIV_BINS)
        cp("lsu_type_x_we_x_sext", LSU_BINS)
        cp("rf_raddr_a",       range(32))
        cp("rf_raddr_b",       range(32))
        cp("rf_waddr",         range(32))
        cp("special",          special)
        cp("illegal_reason",   ["legal", "illegal_from_decode", "illegal_c_insn_i"])
        cp("first_cycle_x_jump", [f"{fc}:{j}" for fc in (0, 1) for j in ("jal", "jalr", "fence.i")])

    # ------------------------------------------------------------------------
    def _hit(self, cp, b):
        b = str(b)
        if b in self.cp.get(cp, {}):
            self.cp[cp][b] += 1

    def _enum_name(self, ename, val):
        lst = self.enums[ename]
        return lst[val] if 0 <= val < len(lst) else f"?{val}"

    def sample(self, stim, o):
        """stim: generator.Stimulus, o: dict of DUT output ints (see test)."""
        self.stats["total"] += 1
        opc = stim.insn & 0x7F
        opc_name = next((k for k, v in OPC.items() if v == opc), "OTHER")
        ill = o["illegal_insn"]
        self._hit("opcode_x_illegal", f"{opc_name}:{ill}")

        if ill:
            self.stats["illegal"] += 1
            self._hit("illegal_reason", "illegal_c_insn_i" if stim.illegal_c else "illegal_from_decode")
            return
        self._hit("illegal_reason", "legal")
        if not stim.name.startswith(("mut:", "rand")):
            self._hit("insn_legal", stim.name)

        self._hit("alu_operator", self._enum_name("alu_op_e", o["alu_operator"]))
        self._hit("alu_op_a_mux_sel", self._enum_name("op_a_sel_e", o["alu_op_a_mux_sel"]))
        self._hit("alu_op_b_mux_sel", self._enum_name("op_b_sel_e", o["alu_op_b_mux_sel"]))
        self._hit("imm_a_mux_sel", self._enum_name("imm_a_sel_e", o["imm_a_mux_sel"]))
        self._hit("imm_b_mux_sel", self._enum_name("imm_b_sel_e", o["imm_b_mux_sel"]))
        self._hit("rf_wdata_sel", self._enum_name("rf_wd_sel_e", o["rf_wdata_sel"]))
        if o["csr_access"]:
            self._hit("csr_op", self._enum_name("csr_op_e", o["csr_op"]))
        if o["mult_sel"] or o["div_sel"]:
            self._hit("multdiv_op_x_sign",
                      f"{self._enum_name('md_op_e', o['multdiv_operator'])}:{o['multdiv_signed_mode']}")
        if o["data_req"]:
            self._hit("lsu_type_x_we_x_sext",
                      f"{o['data_type']}:{o['data_we']}:{o['data_sign_extension']}")
        if o["rf_ren_a"]:
            self._hit("rf_raddr_a", o["rf_raddr_a"])
        if o["rf_ren_b"]:
            self._hit("rf_raddr_b", o["rf_raddr_b"])
        if o["rf_we"]:
            self._hit("rf_waddr", o["rf_waddr"])
        for k, sig in [("ecall", "ecall_insn"), ("ebrk", "ebrk_insn"), ("mret", "mret_insn"),
                       ("dret", "dret_insn"), ("wfi", "wfi_insn"), ("jump_set", "jump_set"),
                       ("icache_inval", "icache_inval"), ("branch_in_dec", "branch_in_dec"),
                       ("jump_in_dec", "jump_in_dec"), ("csr_access", "csr_access"),
                       ("alu_multicycle", "alu_multicycle"), ("mult_en", "mult_en"),
                       ("div_en", "div_en")]:
            if o[sig]:
                self._hit("special", k)
        if stim.name in ("jal", "jalr", "fence.i"):
            self._hit("first_cycle_x_jump", f"{stim.first_cycle}:{stim.name}")

    # ------------------------------------------------------------------------
    def summary(self):
        rows, hit_all, tot_all = [], 0, 0
        for name, bins in self.cp.items():
            h = sum(1 for v in bins.values() if v)
            rows.append((name, h, len(bins)))
            hit_all += h
            tot_all += len(bins)
        return rows, hit_all, tot_all

    def report(self, log=print):
        rows, h, t = self.summary()
        log("=" * 64)
        log(f"FUNCTIONAL COVERAGE  (RV32B={self.rv32b}, RV32M={self.rv32m})")
        log(f"stimuli={self.stats['total']}  illegal={self.stats['illegal']}")
        log("-" * 64)
        for name, hh, tt in rows:
            log(f"  {name:<24} {hh:>5}/{tt:<5} {100.0 * hh / tt:6.2f}%")
        log("-" * 64)
        log(f"  {'TOTAL':<24} {h:>5}/{t:<5} {100.0 * h / t:6.2f}%")
        log("=" * 64)

    def dump(self, path):
        Path(path).parent.mkdir(parents=True, exist_ok=True)
        Path(path).write_text(json.dumps(
            {"rv32b": self.rv32b, "rv32m": self.rv32m,
             "stats": dict(self.stats), "coverpoints": self.cp}, indent=1))
