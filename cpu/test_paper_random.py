"""Paper-mode random baseline — exact port of ml4dv `RandomAgent4IC`.

Mechanism (identical to ~/verilator/ml4dv/ibex_cpu/generate_stimulus.py +
agents/agent_random.py::RandomAgent4IC):

1. Instruction memory is pre-loaded at 0x100080 with a 4-instruction tight
   infinite loop (ADDI/ADDI/ADD/JAL -4). The CPU boots and spins in it.
2. On every clock cycle, right after the previous instruction retires, the
   test overwrites that instruction's memory word with a freshly drawn
   `random.getrandbits(32)` word.
3. The CPU keeps fetching; when the JAL loops it back to an earlier PC, that
   slot now holds a random word, which decodes to whatever opcode randomly
   happened to land there. Over ~1M cycles the CPU retires ~1M random words
   and the monitor accumulates coverage over the 196-bin ml4dv plan.

This is *not* a linear program. There is no reachability guarantee — JAL
with any offset is "safe" because wherever PC lands, the next fetch returns
a random word (initially WFI for unmapped addresses, which halts the CPU; in
practice the backward JAL in the seed loop keeps PC inside 0x100080..0x10008C
most of the time).

Environment variables:
  CRT_SEED   seed for the Python RNG (default 0)
  CRT_CYCLES clock cycles to run (default 100000 — paper uses 1_000_000)
  CRT_OUT    optional JSON path for the final coverage snapshot
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

from instruction_monitor import InstructionMonitor  # noqa: E402


BOOT_ADDR = 0x100080

# Note: unlike the linear-program harness, this one does NOT use a fixed
# unmapped-load value. Any fetch outside the seed region returns a fresh
# random word drawn from the test's RNG. This matches the paper intent (feed
# random 32-bit words to the CPU) and avoids the "PC marches through NOPs
# forever after the first exception" pitfall seen with a constant default.

# Seed program: ADDI x5, x0, 0 / ADDI x6, x0, 20 / ADD x5, x5, x6 / JAL x0, -4
# Identical to ml4dv's test_prog.bin.
SEED_PROGRAM = [0x00000293, 0x01400313, 0x006282B3, 0xFFDFF06F]


class ImemAgent:
    """Instruction memory agent with injectable per-cycle overwrites.

    External code calls `write_mem(addr, word)` between cycles; subsequent
    fetches of that address return the new word. Writes to unmapped addresses
    create new entries.
    """

    def __init__(self, dut, rng: random.Random):
        self.mem: dict[int, int] = {}
        self.rng = rng
        self.clk = dut.clk_i
        self.gnt = dut.instr_gnt_i
        self.req = dut.instr_req_o
        self.addr = dut.instr_addr_o
        self.rvalid = dut.instr_rvalid_i
        self.rdata = dut.instr_rdata_i

    def write_mem(self, addr: int, word: int) -> None:
        self.mem[addr] = word

    def load_program(self, prog: list[int], start_addr: int) -> None:
        for i, w in enumerate(prog):
            self.mem[start_addr + i * 4] = w

    async def run(self) -> None:
        self.gnt.value = 0
        self.rvalid.value = 0
        while True:
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                access_addr = int(self.addr.value)
                await ClockCycles(self.clk, 1)
                await ReadWrite()
                self.gnt.value = 0
                self.rvalid.value = 1
                # Deterministic seed region; everything else is a fresh random
                # word per fetch. Ibex has no ICache in this build, so re-fetch
                # of the same PC genuinely issues a new bus request, which we
                # answer with new randomness. This is the simplest match for
                # "feed random words" and avoids the cache-vs-prefetch race
                # that stalls the CPU in a trap loop when a cached random
                # happens to decode to a self-trapping sequence.
                if access_addr in self.mem:
                    self.rdata.value = self.mem[access_addr]
                else:
                    self.rdata.value = self.rng.getrandbits(32)


class DmemAgent:
    """Trivial data-memory agent that grants every request and discards writes."""

    def __init__(self, dut):
        self.clk = dut.clk_i
        self.gnt = dut.data_gnt_i
        self.req = dut.data_req_o
        self.addr = dut.data_addr_o
        self.rvalid = dut.data_rvalid_i
        self.rdata = dut.data_rdata_i
        self.we = dut.data_we_o
        self.wdata = dut.data_wdata_o
        self.mem: dict[int, int] = {}

    async def run(self) -> None:
        self.gnt.value = 0
        self.rvalid.value = 0
        while True:
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                access_addr = int(self.addr.value)
                is_write = bool(int(self.we.value))
                wdata = int(self.wdata.value) if is_write else None
                await ClockCycles(self.clk, 1)
                await ReadWrite()
                self.gnt.value = 0
                self.rvalid.value = 1
                if is_write:
                    self.rdata.value = 0
                    self.mem[access_addr] = wdata
                else:
                    self.rdata.value = self.mem.get(access_addr, 0)


def _env_int(name: str, default: int) -> int:
    raw = os.environ.get(name)
    return int(raw) if raw is not None else default


@cocotb.test()
async def paper_random(dut) -> None:
    seed = _env_int("CRT_SEED", 0)
    n_cycles = _env_int("CRT_CYCLES", 100_000)
    out_path = os.environ.get("CRT_OUT")

    rng = random.Random(seed)
    print(f"[paper_random] seed={seed} cycles={n_cycles}")

    dut.data_gnt_i.value = 0
    dut.data_rvalid_i.value = 0

    imem = ImemAgent(dut, rng)
    dmem = DmemAgent(dut)
    monitor = InstructionMonitor(dut)
    imem.load_program(SEED_PROGRAM, BOOT_ADDR)

    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    dut.rst_ni.value = 1
    await Timer(15, units="ns")
    dut.rst_ni.value = 0
    await ClockCycles(dut.clk_i, 3)
    await Timer(5, units="ns")
    dut.rst_ni.value = 1

    cocotb.start_soon(imem.run())
    cocotb.start_soon(dmem.run())

    # Main loop (matches ml4dv RandomAgent4IC): after each retirement,
    # overwrite that PC's imem slot with a fresh random word. Over a few
    # iterations the seed loop at 0x100080..0x10008c self-destructs (the JAL
    # gets overwritten), PC starts jumping to new addresses, each of which is
    # lazily populated by ImemAgent with a random word. The result is a long
    # chain of random 32-bit stimuli flowing through the CPU.
    last_pc_seen: int | None = None
    retirements = 0
    for cycle in range(n_cycles):
        await ClockCycles(dut.clk_i, 1)
        await ReadWrite()
        monitor.sample_insn_coverage()
        if monitor.last_pc is not None and monitor.last_pc != last_pc_seen:
            # On first retirement of a seed slot, evict it from the cache so
            # subsequent fetches of the same PC see fresh random words. Non-
            # seed addresses are never cached, so the only thing to do here is
            # kill the seed entries once the CPU has run through them. This
            # avoids both the "seed bounces forever" and the "trap loop on a
            # cached invalid encoding" failure modes.
            if monitor.last_pc in imem.mem:
                del imem.mem[monitor.last_pc]
            last_pc_seen = monitor.last_pc
            retirements += 1
        if (cycle + 1) % 10_000 == 0:
            cov = monitor.coverage_db.get_coverage_dict()
            hit = sum(1 for v in cov.values() if v > 0)
            print(f"[paper_random] cycle={cycle + 1} retirements={retirements} cov={hit}/{len(cov)}")

    cov_dict = monitor.coverage_db.get_coverage_dict()
    total = len(cov_dict)
    hit = sum(1 for v in cov_dict.values() if v > 0)
    print("=" * 70)
    print(f"[paper_random] seed={seed} cycles={n_cycles} retirements={retirements}: {hit}/{total} = {hit / total * 100:.2f}%")
    print("=" * 70)

    if out_path:
        Path(out_path).write_text(json.dumps({
            "mode": "paper_random",
            "seed": seed,
            "cycles": n_cycles,
            "retirements": retirements,
            "total_bins": total,
            "hit_bins": hit,
            "coverage_pct": hit / total * 100,
            "bins": cov_dict,
        }, indent=2))
        print(f"[paper_random] wrote {out_path}")
