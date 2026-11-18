# Copyright lowRISC contributors.
# Copyright Zixi Zhang
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0

from shared_types import CoverageDatabase
from instructions import Instr, Encoding


class InstructionMonitor:
    def __init__(self, dut):
        self.clk = dut.clk_i
        self.insn_valid = dut.u_top.rvfi_valid
        self.insn_pc = dut.u_top.rvfi_pc_rdata
        self.insn = dut.u_top.rvfi_insn
        # rd_addr / rd_wdata expose the architectural register write. Used as a
        # cheap value-level oracle for mutation testing: a mutant that corrupts
        # the ALU result produces a different wdata stream even when the plan
        # coverage dict is identical.
        self.rd_addr = dut.u_top.rvfi_rd_addr
        self.rd_wdata = dut.u_top.rvfi_rd_wdata
        self.coverage_db = CoverageDatabase(instructions={}, cross_coverage={})
        self.last_pc = None
        self.last_insn = None
        self.retirement_trace: list[tuple[int, int, int, int]] = []

        for instr in Instr:
            self.coverage_db.instructions[instr] = {
                cov: 0 for cov in instr.type().coverpoints()
            }
            self.coverage_db.cross_coverage[instr] = {
                (other_instr, cov): 0
                for (other_instr, cov) in instr.type().cross_coverpoints()
            }

    def sample_insn_coverage(self):
        # cocotb v2: .value is a LogicArray; cast through int for scalar
        # comparisons.
        if int(self.insn_valid.value) == 0:
            # Do NOT clear last_insn here - in a pipelined CPU, there are
            # always idle cycles between retirements. Clearing last_insn
            # would make RAW hazard detection impossible.
            return

        # Record every retirement into the value-level trace, regardless of
        # whether the instruction is in the plan. The trace is used as a
        # retirement-level oracle for mutation testing (compare golden vs
        # mutant). Encoded as (pc, insn_word, rd_addr, rd_wdata).
        self.retirement_trace.append((
            int(self.insn_pc.value),
            int(self.insn.value),
            int(self.rd_addr.value),
            int(self.rd_wdata.value),
        ))

        insn = Encoding(self.insn.value).typed()

        if insn is not None:
            try:
                mnemonic = insn.instruction()
            except AssertionError:  # Valid RISC-V instruction, but not in instruction.py
                # self.last_pc = None
                # self.insn = None
                print(
                    f">>>>> Valid RISC-V instruction {hex(insn.encoding)}, but not in instruction.py \n"
                )
                return

            for coverpoint in insn.sample_coverage():
                self.coverage_db.instructions[mnemonic][coverpoint] += 1

            if (
                self.last_insn is not None
                and (last_insn := Encoding(self.last_insn).typed()) is not None
            ):
                for insn_cov in insn.sample_cross_coverage(last_insn):
                    self.coverage_db.cross_coverage[mnemonic][insn_cov] += 1

        self.last_pc = int(self.insn_pc.value)
        self.last_insn = int(self.insn.value)
