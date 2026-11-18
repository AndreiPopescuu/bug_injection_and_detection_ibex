"""Cocotb test variant: runs LLM-written builders through the Level-4 monitor
(5,615 bins across 30 ops + RAW_DIST 1..3 + K3 chains + imm buckets).

Env vars identical to test_llm_crt.py; monitor replaced with L4Monitor.
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

from l4_coverage import L4Monitor  # noqa: E402
from crt.isa_l4 import NOP, prelude  # noqa: E402


BOOT_ADDR = 0x100080
WFI = 0x10500073
BLOCK_SEPARATOR = [NOP(), NOP()]


class MemAgent:
    def __init__(self, dut, mem_name, handle_writes=True, default_rdata=0x00000013):
        self.mem_dict = {}
        # default_rdata: 0x13 (NOP) for imem miss keeps CPU retiring; 0x0 for
        # dmem miss keeps Spike cosim happy (Spike models unmapped reads as 0).
        self.default_rdata = default_rdata
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
            self.be = getattr(dut, f"{mem_name}_be_o", None)

    def load_program(self, prog, start_addr):
        for i, w in enumerate(prog):
            self.mem_dict[start_addr + i * 4] = w

    async def run_mem(self):
        self.gnt.value = 0
        self.rvalid.value = 0
        while True:
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                addr = int(self.addr.value)
                write_data = None
                write_be = 0
                if self.handle_writes and self.we.value:
                    write_data = int(self.wdata.value)
                    write_be = int(self.be.value) if hasattr(self, "be") and self.be is not None else 0xF
                await ClockCycles(self.clk, 1)
                await ReadWrite()
                self.gnt.value = 0
                self.rvalid.value = 1
                if self.handle_writes and write_data is not None:
                    self.rdata.value = 0
                    # Respect byte-enable: only overwrite bytes whose BE bit
                    # is set. Previously we did a full-word write which
                    # clobbered untouched bytes — Spike updates byte-level
                    # correctly so our model diverged on partial stores.
                    old = self.mem_dict.get(addr, 0)
                    new = old
                    for i in range(4):
                        if (write_be >> i) & 1:
                            byte_mask = 0xFF << (i * 8)
                            new = (new & ~byte_mask) | (write_data & byte_mask)
                    self.mem_dict[addr] = new
                else:
                    self.rdata.value = self.mem_dict.get(addr, self.default_rdata)


def _env_int(name, default):
    raw = os.environ.get(name)
    return int(raw) if raw is not None else default


def _load_builders(modules):
    out = []
    for m in modules.split(","):
        m = m.strip()
        if not m: continue
        mod = importlib.import_module(m)
        nb = getattr(mod, "NEW_BUILDERS", None)
        if not isinstance(nb, list):
            raise RuntimeError(f"{m} has no NEW_BUILDERS list")
        for b in nb:
            out.append((f"{m}:{b.__name__}", b))
    return out


@cocotb.test()
async def llm_crt_l4_coverage(dut):
    modules = os.environ.get("LLM_MODULES", "crt.llm_runs.A_run3_p1")
    seed = _env_int("CRT_SEED", 0)
    out_path = os.environ.get("CRT_OUT")

    builders = _load_builders(modules)
    print(f"[l4] modules={modules} builders={len(builders)} seed={seed}")

    program = list(prelude())
    for name, b in builders:
        sub_rng = random.Random(f"{seed}:{name}")
        stream = b(sub_rng)
        if not isinstance(stream, list) or not all(isinstance(w, int) and 0 <= w < 2**32 for w in stream):
            raise RuntimeError(f"builder {name}: must return list of 32-bit ints")
        program.extend(stream)
        program.extend(BLOCK_SEPARATOR)
    program.append(WFI)

    n_cycles = _env_int("CRT_CYCLES", 20 * len(program) + 400)
    print(f"[l4] program_words={len(program)} cycles={n_cycles}")

    # Mirror program into Spike cosim memory (if COSIM=1). The checker's
    # initial block reads cosim_program.hex on the first clock edge.
    cosim_hex_path = Path(os.environ.get("COSIM_PROGRAM_HEX", "cosim_program.hex"))
    with open(cosim_hex_path, "w") as f:
        for i, w in enumerate(program):
            f.write(f"{BOOT_ADDR + i*4:08x} {w:08x}\n")

    dut.data_gnt_i.value = 0
    dut.data_rvalid_i.value = 0
    imem = MemAgent(dut, "instr", handle_writes=False, default_rdata=0x00000013)
    dmem = MemAgent(dut, "data", handle_writes=True, default_rdata=0x00000000)
    monitor = L4Monitor(dut)
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
        monitor.sample()

    s = monitor.summary()
    cats = monitor.summary_by_category()
    print("=" * 70)
    print(f"[l4] seed={seed} builders={len(builders)}: {s['hit_bins']}/{s['total_bins']} = {s['coverage_pct']:.2f}%")
    print("Per category:")
    for c, v in cats.items():
        pct = 100 * v['hit'] / max(1, v['total'])
        print(f"  {c:<12s} {v['hit']:>5d} / {v['total']:>5d} ({pct:5.1f}%)")
    print("=" * 70)

    if out_path:
        Path(out_path).write_text(json.dumps({
            "mode": "llm_crt_l4",
            "modules": modules, "seed": seed,
            "n_builders": len(builders),
            "program_words": len(program),
            "n_cycles": n_cycles,
            "total_bins": s["total_bins"],
            "hit_bins": s["hit_bins"],
            "coverage_pct": s["coverage_pct"],
            "by_category": cats,
            "bins": s["bins"],
        }, indent=2))
        print(f"[l4] wrote {out_path}")
