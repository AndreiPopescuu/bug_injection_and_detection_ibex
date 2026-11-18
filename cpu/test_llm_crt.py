"""Cocotb test: run LLM-written builders and measure ml4dv coverage.

Mechanism (mirrors `decoder/test_crt_decoder.py` but adapted for CPU
sequence stimuli):

1. Env `LLM_MODULES` is a comma-separated list of `crt.llm_runs.*` modules.
   Each module exposes `NEW_BUILDERS` — a list of callables `build(rng) ->
   list[int]` returning a sequence of 32-bit instruction words.
2. Each builder is called with its own seeded Random. Its stream becomes a
   block in the final program. Blocks are concatenated in a stable order
   with a 2-NOP separator between them (so RAW_HAZARD doesn't leak between
   blocks).
3. The program is `prelude() + concat(blocks) + [WFI]`. It's loaded into
   instruction memory at BOOT_ADDR, the CPU runs for a cycle budget
   proportional to program size, coverage is sampled via RVFI.

The point of this test is to produce the same JSON summary as the random
baselines so a direct bin-count comparison is possible.

Environment variables:
  LLM_MODULES  comma-separated list of modules (default: crt.llm_runs.A_run1_p1)
  CRT_SEED     seed for the per-builder Random (default 0)
  CRT_CYCLES   clock cycles to run (default = 20 * program length)
  CRT_OUT      optional JSON output path
"""

from __future__ import annotations

import importlib
import json
import os
import random
import sys
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, ReadWrite, Timer

HERE = Path(__file__).parent
sys.path.insert(0, str(HERE))

from instruction_monitor import InstructionMonitor  # noqa: E402
from crt.isa import NOP, prelude  # noqa: E402


BOOT_ADDR = 0x100080
WFI = 0x10500073
BLOCK_SEPARATOR = [NOP(), NOP()]


class MemAgent:
    def __init__(self, dut, mem_name: str, handle_writes: bool = True):
        self.mem_dict: dict[int, int] = {}
        self.clk = dut.clk_i
        self.gnt = getattr(dut, f"{mem_name}_gnt_i")
        self.req = getattr(dut, f"{mem_name}_req_o")
        self.addr = getattr(dut, f"{mem_name}_addr_o")
        self.rvalid = getattr(dut, f"{mem_name}_rvalid_i")
        self.rdata = getattr(dut, f"{mem_name}_rdata_i")
        self.handle_writes = handle_writes
        if handle_writes:
            self.we = getattr(dut, f"{mem_name}_we_o")
            self.wdata = getattr(dut, f"{mem_name}_wdata_o")

    def load_program(self, instructions: list[int], start_addr: int) -> None:
        for i, insn in enumerate(instructions):
            self.mem_dict[start_addr + i * 4] = insn

    async def run_mem(self) -> None:
        self.gnt.value = 0
        self.rvalid.value = 0
        while True:
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                access_addr = int(self.addr.value)
                write_data = None
                if self.handle_writes and self.we.value:
                    write_data = int(self.wdata.value)
                await ClockCycles(self.clk, 1)
                await ReadWrite()
                self.gnt.value = 0
                self.rvalid.value = 1
                if self.handle_writes and write_data is not None:
                    self.rdata.value = 0
                    self.mem_dict[access_addr] = write_data
                else:
                    # Unmapped fetch returns NOP so CPU keeps retiring if PC
                    # overruns the program instead of crashing.
                    self.rdata.value = self.mem_dict.get(access_addr, 0x00000013)


def _env_int(name: str, default: int) -> int:
    raw = os.environ.get(name)
    return int(raw) if raw is not None else default


def _load_builders(modules: str) -> list[tuple[str, callable]]:
    builders: list[tuple[str, callable]] = []
    for mod_name in modules.split(","):
        mod_name = mod_name.strip()
        if not mod_name:
            continue
        mod = importlib.import_module(mod_name)
        nb = getattr(mod, "NEW_BUILDERS", None)
        if not isinstance(nb, list):
            raise RuntimeError(f"{mod_name} has no NEW_BUILDERS list")
        for b in nb:
            builders.append((f"{mod_name}:{b.__name__}", b))
    return builders


@cocotb.test()
async def llm_crt_coverage(dut) -> None:
    modules = os.environ.get("LLM_MODULES", "crt.llm_runs.A_run1_p1")
    seed = _env_int("CRT_SEED", 0)
    out_path = os.environ.get("CRT_OUT")

    builders = _load_builders(modules)
    print(f"[llm_crt] modules={modules} builders={len(builders)} seed={seed}")

    program: list[int] = list(prelude())
    rng_base = random.Random(seed)
    for name, b in builders:
        # Each builder gets its own RNG derived from (seed, builder_name).
        sub_rng = random.Random(f"{seed}:{name}")
        stream = b(sub_rng)
        if not isinstance(stream, list) or not all(isinstance(w, int) and 0 <= w < 2**32 for w in stream):
            raise RuntimeError(f"builder {name}: must return list of 32-bit ints")
        if not 1 <= len(stream) <= 512:
            raise RuntimeError(f"builder {name}: {len(stream)} words (allowed 1..512)")
        program.extend(stream)
        program.extend(BLOCK_SEPARATOR)
    program.append(WFI)

    n_cycles = _env_int("CRT_CYCLES", 20 * len(program) + 400)
    print(f"[llm_crt] program_words={len(program)} cycles={n_cycles}")

    # Mirror program into Spike cosim memory (if cosim is active). The checker
    # initial block will fopen() this at the first posedge of clk_i.
    cosim_hex_path = Path(os.environ.get("COSIM_PROGRAM_HEX", "cosim_program.hex"))
    with open(cosim_hex_path, "w") as f:
        for i, w in enumerate(program):
            f.write(f"{BOOT_ADDR + i*4:08x} {w:08x}\n")

    dut.data_gnt_i.value = 0
    dut.data_rvalid_i.value = 0
    imem = MemAgent(dut, "instr", handle_writes=False)
    dmem = MemAgent(dut, "data", handle_writes=True)
    monitor = InstructionMonitor(dut)
    imem.load_program(program, BOOT_ADDR)

    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    dut.rst_ni.value = 1
    await Timer(15, units="ns")
    dut.rst_ni.value = 0
    await ClockCycles(dut.clk_i, 3)
    await Timer(5, units="ns")
    dut.rst_ni.value = 1

    cocotb.start_soon(imem.run_mem())
    cocotb.start_soon(dmem.run_mem())

    for _ in range(n_cycles):
        await ClockCycles(dut.clk_i, 1)
        await ReadWrite()
        monitor.sample_insn_coverage()

    cov_dict = monitor.coverage_db.get_coverage_dict()
    total = len(cov_dict)
    hit = sum(1 for v in cov_dict.values() if v > 0)
    print("=" * 70)
    print(f"[llm_crt] seed={seed} builders={len(builders)}: {hit}/{total} = {hit / total * 100:.2f}%")
    print("=" * 70)

    if out_path:
        Path(out_path).write_text(json.dumps({
            "mode": "llm_crt",
            "modules": modules,
            "seed": seed,
            "n_builders": len(builders),
            "program_words": len(program),
            "n_cycles": n_cycles,
            "total_bins": total,
            "hit_bins": hit,
            "coverage_pct": hit / total * 100,
            "bins": cov_dict,
            # Value-level retirement trace: used by mutation testing to detect
            # bugs that corrupt rd_wdata without changing which instruction
            # retires (most ALU/LSU mutants).
            "retirement_trace": monitor.retirement_trace,
        }, indent=2))
        print(f"[llm_crt] wrote {out_path} (retirements={len(monitor.retirement_trace)})")
