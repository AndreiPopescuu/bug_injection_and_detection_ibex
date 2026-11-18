"""Cocotb testbench for Encarsia Ibex differential/Spike-oracle campaign.

Loads a program (hex file path in env var `PROGRAM_HEX`), drives instr/data
memory, captures the bus trace of the Ibex DUT (one variant), and dumps to
JSON. The campaign driver compares traces between runs (golden vs bug) or
against a Spike-generated expected trace.

Env vars:
  PROGRAM_HEX     path to program hex (format: `<addr_hex> <word_hex>` per line)
  TRACE_OUT       path to write JSON trace
  MAX_CYCLES      run cycles (default = 20 * program_words + 400)
"""
from __future__ import annotations

import json
import os
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, ReadWrite, Timer


BOOT_ADDR = 0x100080


class MemAgent:
    """Instr or data memory bus driver (reused from test_llm_crt_l4.py)."""

    def __init__(self, dut, mem_name, handle_writes, default_rdata):
        self.mem_dict = {}
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
        self.trace = []  # list of dicts: {cycle, op, addr, data, be, we}
        self._cycle = 0

    def load_program(self, prog, start_addr):
        for i, w in enumerate(prog):
            self.mem_dict[start_addr + i * 4] = w

    async def run_mem(self, max_cycles):
        self.gnt.value = 0
        self.rvalid.value = 0
        for _ in range(max_cycles):
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self._cycle += 1
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                addr = int(self.addr.value)
                is_write = bool(self.handle_writes and int(self.we.value))
                write_data = int(self.wdata.value) if is_write else None
                write_be = (int(self.be.value) if (is_write and self.be is not None) else 0xF) if is_write else 0
                await ClockCycles(self.clk, 1)
                await ReadWrite()
                self._cycle += 1
                self.gnt.value = 0
                self.rvalid.value = 1
                if is_write:
                    self.rdata.value = 0
                    old = self.mem_dict.get(addr, 0)
                    new = old
                    for i in range(4):
                        if (write_be >> i) & 1:
                            mask = 0xFF << (i * 8)
                            new = (new & ~mask) | (write_data & mask)
                    self.mem_dict[addr] = new
                    self.trace.append({
                        "cycle": self._cycle,
                        "op": "STORE",
                        "addr": addr, "data": write_data, "be": write_be, "we": 1,
                    })
                else:
                    rd = self.mem_dict.get(addr, self.default_rdata)
                    self.rdata.value = rd
                    self.trace.append({
                        "cycle": self._cycle,
                        "op": "LOAD",
                        "addr": addr, "data": rd, "be": 0xF, "we": 0,
                    })


def _load_program_hex(path: Path) -> tuple[list[int], int]:
    """Read program hex file, return (words_list, start_addr).
    Format per line: `<addr_hex_8> <word_hex_8>`."""
    words = []
    start_addr = None
    for line in path.read_text().splitlines():
        line = line.strip()
        if not line or line.startswith("#"):
            continue
        parts = line.split()
        addr = int(parts[0], 16)
        word = int(parts[1], 16)
        if start_addr is None:
            start_addr = addr
        words.append(word)
    return words, start_addr or BOOT_ADDR


@cocotb.test()
async def encarsia_coverage(dut):
    prog_hex = Path(os.environ.get("PROGRAM_HEX", "cosim_program.hex"))
    out_path = Path(os.environ.get("TRACE_OUT", "encarsia_trace.json"))

    program, start_addr = _load_program_hex(prog_hex)
    max_cycles = int(os.environ.get("MAX_CYCLES", str(20 * len(program) + 400)))
    print(f"[encarsia] program_words={len(program)} start_addr=0x{start_addr:x} cycles={max_cycles}")

    imem = MemAgent(dut, "instr", handle_writes=False, default_rdata=0x00000013)
    dmem = MemAgent(dut, "data",  handle_writes=True,  default_rdata=0x00000000)
    imem.load_program(program, start_addr)

    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    dut.rst_ni.value = 1
    await Timer(15, units="ns")
    dut.rst_ni.value = 0
    await ClockCycles(dut.clk_i, 3)
    await Timer(5, units="ns")
    dut.rst_ni.value = 1

    cocotb.start_soon(imem.run_mem(max_cycles))
    cocotb.start_soon(dmem.run_mem(max_cycles))

    for _ in range(max_cycles):
        await ClockCycles(dut.clk_i, 1)

    print(f"[encarsia] instr_trace_len={len(imem.trace)}  data_trace_len={len(dmem.trace)}")

    out_path.write_text(json.dumps({
        "program_words": len(program),
        "start_addr": start_addr,
        "max_cycles": max_cycles,
        "instr_trace": imem.trace,
        "data_trace": dmem.trace,
    }, indent=2))
    print(f"[encarsia] wrote {out_path}")
