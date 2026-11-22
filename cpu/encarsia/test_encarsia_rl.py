"""Cocotb driver for Encarsia DUT, consumed during PPO training.

Reads program from `RL_L9_JSON` env var (JSON: {machine_code: [int, ...]}),
loads into instr memory, drives the encarsia_tb wrapper, lets Vtop run long
enough to execute the full program, then finishes (Verilator writes
coverage.dat on $finish).

No trap handler installed — if the program hits WFI/MRET/exception, the CPU
stalls. This is intentional for training: the RL policy will learn to avoid
emitting those ops since they produce zero coverage improvement.
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

    def load_program(self, prog, start_addr):
        for i, w in enumerate(prog):
            self.mem_dict[start_addr + i * 4] = w

    async def run_mem(self, max_cycles):
        self.gnt.value = 0
        self.rvalid.value = 0
        for _ in range(max_cycles):
            await ClockCycles(self.clk, 1)
            await ReadWrite()
            self.rvalid.value = 0
            if self.req.value:
                self.gnt.value = 1
                addr = int(self.addr.value)
                is_write = bool(self.handle_writes and int(self.we.value))
                write_data = int(self.wdata.value) if is_write else None
                write_be = (int(self.be.value) if (is_write and self.be is not None) else 0xF) if is_write else 0
                await ClockCycles(self.clk, 1)
                await ReadWrite()
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
                else:
                    self.rdata.value = self.mem_dict.get(addr, self.default_rdata)


@cocotb.test()
async def encarsia_rl_run(dut):
    # Accept either RL_L9_JSON or RL_L8_JSON / RL_L7_JSON for compatibility
    json_path = None
    for var in ("RL_L9_JSON", "RL_L8_JSON", "RL_L7_JSON", "RL_L5_JSON"):
        if os.environ.get(var):
            json_path = Path(os.environ[var])
            break
    if json_path is None:
        raise RuntimeError("no RL_L{5,7,8,9}_JSON env var set")

    data = json.loads(json_path.read_text())
    program = list(data["machine_code"])

    # Append WFI terminator so Vtop finishes gracefully after program ends
    WFI = 0x10500073
    if not program or program[-1] != WFI:
        program.append(WFI)

    max_cycles = int(os.environ.get("MAX_CYCLES", str(20 * len(program) + 400)))
    print(f"[encarsia_rl] program_words={len(program)} cycles={max_cycles}", flush=True)

    imem = MemAgent(dut, "instr", handle_writes=False, default_rdata=0x00000013)
    dmem = MemAgent(dut, "data",  handle_writes=True,  default_rdata=0x00000000)
    imem.load_program(program, BOOT_ADDR)

    cocotb.start_soon(Clock(dut.clk_i, 10, unit="ns").start())
    dut.rst_ni.value = 1
    await Timer(15, unit="ns")
    dut.rst_ni.value = 0
    await ClockCycles(dut.clk_i, 3)
    await Timer(5, unit="ns")
    dut.rst_ni.value = 1

    cocotb.start_soon(imem.run_mem(max_cycles))
    cocotb.start_soon(dmem.run_mem(max_cycles))

    for _ in range(max_cycles):
        await ClockCycles(dut.clk_i, 1)
