"""Cocotb test: random-stimulus baseline for the ml4dv ibex_cpu coverage plan.

Loads a random instruction sequence into instruction memory and lets the CPU
run for a fixed cycle budget. Coverage is sampled through RVFI via
`InstructionMonitor`.

Environment variables:
  CRT_SEED   seed for the Python RNG (default 0)
  CRT_N      number of random instructions after the prelude (default 2000)
  CRT_CYCLES clock cycles to run (default 10 * CRT_N + 200)
  CRT_OUT    JSON path for the final coverage snapshot (optional)
"""

from __future__ import annotations

import json
import os
import random
import sys
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, ReadWrite, Timer

sys.path.insert(0, str(Path(__file__).parent))
sys.path.insert(0, str(Path(__file__).parent / "crt"))

from instruction_monitor import InstructionMonitor  # noqa: E402
from crt.random_generator import random_program, RandomConfig  # noqa: E402


# Boot address matches cocotb_ibex.sv (boot_addr_i = 0x00100000, first fetch
# at +0x80).
BOOT_ADDR = 0x100080

# Default memory load value for unmapped addresses. NOP (ADDI x0, x0, 0) so
# the CPU keeps retiring if the program runs off the end instead of halting.
UNMAPPED_IMEM_LOAD = 0x00000013  # NOP


class MemAgent:
    """Minimal memory agent — grants every request on the next cycle.

    Writes update an internal dict; reads return the stored word or
    UNMAPPED_IMEM_LOAD for unmapped addresses.
    """

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
                    self.rdata.value = self.mem_dict.get(access_addr, UNMAPPED_IMEM_LOAD)


def _env_int(name: str, default: int) -> int:
    raw = os.environ.get(name)
    return int(raw) if raw is not None else default


@cocotb.test()
async def random_coverage(dut) -> None:
    seed = _env_int("CRT_SEED", 0)
    n_insn = _env_int("CRT_N", 2000)
    n_cycles = _env_int("CRT_CYCLES", 10 * n_insn + 200)
    out_path = os.environ.get("CRT_OUT")

    rng = random.Random(seed)
    # Restrict register pool to x1..x15 (same as LLM-CRT prelude) so stores
    # don't dereference uninitialized x16..x31 (which = 0 at reset and produce
    # out-of-range addresses that trap in Spike but not in our permissive
    # DmemAgent). Fair baseline for Spike cosim comparison.
    cfg = RandomConfig(reg_min=1, reg_max=15, store_imm_min=0, store_imm_max=32)
    program = random_program(rng, n_insn, cfg)
    print(f"[random_coverage] seed={seed} n_insn={n_insn} program_words={len(program)} cycles={n_cycles}")

    # Mirror program into Spike cosim memory (if COSIM=1). The checker's
    # initial block reads cosim_program.hex on the first clock edge.
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
    print(f"[random_coverage] seed={seed}: {hit}/{total} bins = {hit / total * 100:.2f}%")
    print("=" * 70)

    if out_path:
        Path(out_path).write_text(json.dumps({
            "seed": seed,
            "n_insn": n_insn,
            "n_cycles": n_cycles,
            "total_bins": total,
            "hit_bins": hit,
            "coverage_pct": hit / total * 100,
            "bins": cov_dict,
            "retirement_trace": monitor.retirement_trace,
        }, indent=2))
        print(f"[random_coverage] wrote {out_path}")
