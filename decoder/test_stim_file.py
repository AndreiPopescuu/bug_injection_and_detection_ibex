"""
cocotb test: apply a FILE of instruction words to the decoder and dump the
LLM4DV-plan bin counts of that batch. Used by paper_parity_run.py for both arms,
so the stimulus arm and the CRT arm are measured by the exact same path.

  STIM_IN   text file, one hex instruction per line
  COV_OUT   JSON written here: {"n": ..., "bins": {bin: hits}}
Side inputs are tied like ml4dv's ibex_decoder_wrap.sv (PAPER_MODE).
"""
import json
import os
from pathlib import Path
from types import SimpleNamespace

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import FallingEdge

from crt.ml4dv_coverage import ML4DVCoverage
from test_crt_decoder import apply

HERE = Path(__file__).resolve().parent


@cocotb.test()
async def stim_file(dut):
    words = [int(l, 16) for l in Path(os.environ["STIM_IN"]).read_text().split() if l]
    cov = ML4DVCoverage(HERE / "rtl" / "ibex_pkg.sv")
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    dut.rst_ni.value = 0
    dut.insn_i.value = 0x13
    dut.instr_first_cycle_i.value = 1
    dut.branch_taken_i.value = 1
    dut.illegal_c_insn_i.value = 0
    for _ in range(2):
        await FallingEdge(dut.clk_i)
    dut.rst_ni.value = 1
    for w in words:
        stim = SimpleNamespace(insn=w & 0xFFFFFFFF, first_cycle=1, branch_taken=1, illegal_c=0)
        cov.sample(await apply(dut, stim))
    Path(os.environ["COV_OUT"]).write_text(json.dumps({"n": len(words), "bins": cov.bins}))
