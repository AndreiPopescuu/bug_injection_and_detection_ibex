"""
CRT coverage test for the Ibex decoder (cocotb + Verilator).

Loop: CRTGenerator -> drive DUT -> sample outputs -> functional coverage.
Code coverage (line / toggle / branch) is collected by Verilator itself
(--coverage) and written to coverage.dat when the simulation ends.

Knobs (environment variables, set by the Makefile / scripts/run_seeds.sh):
  CRT_SEED     random seed                         (default 0)
  CRT_N        number of stimuli                    (default 2000)
  CRT_PROFILE  profile name in profiles/ or a path  (default "default")
  CRT_OUT      output dir for functional coverage   (default results/single)
  RV32B/RV32M  must match the -G parameters the RTL was built with
  PAPER_MODE=1 tie side inputs like ml4dv (first_cycle=1, branch_taken=1,
               illegal_c=0) for an apples-to-apples LLM4DV comparison
"""

import json
import os
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import Timer, RisingEdge, FallingEdge

from crt.generator import CRTGenerator, load_profile
from crt.func_coverage import DecoderCoverage
from crt.ml4dv_coverage import ML4DVCoverage

HERE = Path(__file__).resolve().parent

OUTPUTS = [
    "illegal_insn", "ebrk_insn", "mret_insn", "dret_insn", "ecall_insn", "wfi_insn",
    "jump_set", "icache_inval", "imm_a_mux_sel", "imm_b_mux_sel", "rf_wdata_sel",
    "rf_we", "rf_raddr_a", "rf_raddr_b", "rf_waddr", "rf_ren_a", "rf_ren_b",
    "alu_operator", "alu_op_a_mux_sel", "alu_op_b_mux_sel", "alu_multicycle",
    "mult_en", "div_en", "mult_sel", "div_sel", "multdiv_operator", "multdiv_signed_mode",
    "csr_access", "csr_op", "data_req", "data_we", "data_type", "data_sign_extension",
    "jump_in_dec", "branch_in_dec",
]


def read_outputs(dec):
    return {n: int(getattr(dec, f"{n}_o").value) for n in OUTPUTS}


async def apply(dut, stim, first_cycle=None):
    dut.insn_i.value = stim.insn
    dut.instr_first_cycle_i.value = stim.first_cycle if first_cycle is None else first_cycle
    dut.branch_taken_i.value = stim.branch_taken
    dut.illegal_c_insn_i.value = stim.illegal_c
    await Timer(1, units="ns")                 # combinational settle
    out = read_outputs(dut.u_decoder)
    await RisingEdge(dut.clk_i)                 # clocks the use_rs3 flop (RV32B != None)
    await FallingEdge(dut.clk_i)
    return out


@cocotb.test()
async def crt_decoder(dut):
    seed = int(os.environ.get("CRT_SEED", 0))
    n = int(os.environ.get("CRT_N", 2000))
    profile = os.environ.get("CRT_PROFILE", "default")
    out_dir = Path(os.environ.get("CRT_OUT", HERE / "results" / "single"))
    rv32b = int(os.environ.get("RV32B", 0))
    rv32m = int(os.environ.get("RV32M", 2))
    paper_mode = os.environ.get("PAPER_MODE", "0") == "1"

    gen = CRTGenerator(seed=seed, profile=load_profile(profile), rv32b=rv32b, rv32m=rv32m)
    cov = DecoderCoverage(HERE / "rtl" / "ibex_pkg.sv", rv32b=rv32b, rv32m=rv32m)
    ml4dv = ML4DVCoverage(HERE / "rtl" / "ibex_pkg.sv")   # LLM4DV paper metric
    dump_path = os.environ.get("DUMP_SIGNALS")             # mutation harness side-channel
    dump_trace = [] if dump_path else None

    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    dut.rst_ni.value = 0
    dut.insn_i.value = 0x00000013                # nop
    dut.instr_first_cycle_i.value = 1
    dut.branch_taken_i.value = 0
    dut.illegal_c_insn_i.value = 0
    for _ in range(2):
        await FallingEdge(dut.clk_i)
    dut.rst_ni.value = 1

    dut._log.info(f"CRT seed={seed} n={n} profile={profile} RV32B={rv32b} RV32M={rv32m}")
    for _ in range(n):
        stim = gen.next()
        if paper_mode:
            # side inputs tied exactly like ml4dv's ibex_decoder_wrap.sv
            stim.first_cycle, stim.branch_taken, stim.illegal_c = 1, 1, 0
        out = await apply(dut, stim)
        cov.sample(stim, out)
        ml4dv.sample(out)
        if dump_trace is not None:
            # Record (stimulus, outputs) for mutation-score comparison.
            dump_trace.append({"insn": int(stim.insn), **{k: int(v) for k, v in out.items()}})
        # Multi-cycle (ternary bitmanip) insns: replay the 2nd cycle like the
        # ID stage would, so the rs3 read-port path is exercised.
        if out["alu_multicycle"] and stim.first_cycle and not out["illegal_insn"]:
            await apply(dut, stim, first_cycle=0)

    cov.report(dut._log.info)
    cov.dump(out_dir / f"func_cov_seed{seed}.json")
    ml4dv.report(dut._log.info)
    ml4dv.dump(out_dir / f"ml4dv_cov_seed{seed}.json")
    if dump_trace is not None:
        Path(dump_path).parent.mkdir(parents=True, exist_ok=True)
        Path(dump_path).write_text(json.dumps(dump_trace))
        dut._log.info(f"dumped {len(dump_trace)} stimulus traces to {dump_path}")
