"""Cocotb testbench for Encarsia Ibex differential/Spike-oracle campaign.

Loads a program (hex file path in env var `PROGRAM_HEX`), drives instr/data
memory, captures the bus trace of the Ibex DUT (one variant), and dumps to
JSON. The campaign driver compares traces between runs (golden vs bug) or
against a Spike-generated expected trace.

Env vars:
  PROGRAM_HEX     path to program hex (format: `<addr_hex> <word_hex>` per line)
  TRACE_OUT       path to write JSON trace
  MAX_CYCLES      run cycles (default = 20 * program_words + 400)
  TRAP_HANDLER    "1" to install a minimal trap handler at 0x200000 with a
                  prologue setting mtvec. Default: "0" (no trap handler —
                  WFI/MRET/ECALL halt CPU).

Trap handler behavior (when enabled):
  * Prologue (2 instructions at BOOT_ADDR): sets mtvec = 0x200000.
  * Handler (4 instructions at 0x200000): reads mepc, +=4, writes back, MRET.
    → Any trap (ECALL, EBREAK, illegal, misaligned) advances PC by 4 and
      returns. WFI still sleeps (no interrupt source) but the policy can at
      least use the other trap-inducing ops.
"""
from __future__ import annotations

import json
import os
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, ReadWrite, Timer


BOOT_ADDR = 0x100080
TRAP_HANDLER_ADDR = 0x200000

# ── Trap handler + prologue encodings (hard-coded RISC-V machine code) ────
# Prologue (at BOOT_ADDR): set mtvec = 0x200000
#   LUI  x10, 0x00200     # x10 = 0x00200000
#   CSRRW x0, mtvec, x10  # mtvec = x10
_PROLOGUE = [
    0x00200537,  # LUI  x10, 0x200
    0x30551073,  # CSRRW x0, mtvec(0x305), x10
]

# Handler (at TRAP_HANDLER_ADDR):
#   CSRRS x11, mepc, x0   # x11 = mepc
#   ADDI  x11, x11, 4     # x11 += 4
#   CSRRW x0, mepc, x11   # mepc = x11
#   MRET
_TRAP_HANDLER = [
    0x341025F3,  # CSRRS x11, mepc(0x341), x0  -- read mepc into x11
    0x00458593,  # ADDI  x11, x11, 4
    0x34159073,  # CSRRW x0, mepc, x11         -- write mepc back
    0x30200073,  # MRET
]


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
    use_trap_handler = os.environ.get("TRAP_HANDLER", "0") == "1"
    max_cycles = int(os.environ.get("MAX_CYCLES", str(20 * len(program) + 400)))
    print(f"[encarsia] program_words={len(program)} start_addr=0x{start_addr:x} "
          f"cycles={max_cycles} trap_handler={use_trap_handler}")

    imem = MemAgent(dut, "instr", handle_writes=False, default_rdata=0x00000013)
    dmem = MemAgent(dut, "data",  handle_writes=True,  default_rdata=0x00000000)

    if use_trap_handler:
        # Install prologue at BOOT_ADDR (shifts user program by len(_PROLOGUE))
        imem.load_program(_PROLOGUE, BOOT_ADDR)
        user_start = BOOT_ADDR + len(_PROLOGUE) * 4
        imem.load_program(program, user_start)
        # Install trap handler at 0x200000
        imem.load_program(_TRAP_HANDLER, TRAP_HANDLER_ADDR)
        print(f"[encarsia] prologue at 0x{BOOT_ADDR:x} ({len(_PROLOGUE)} words), "
              f"user code at 0x{user_start:x}, trap handler at 0x{TRAP_HANDLER_ADDR:x}")
    else:
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
