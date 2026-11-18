You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do not rubber-stamp.

Do NOT open: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own.

## The design under test

The DUT is ibex_decoder.sv, simulated stand-alone (cocotb + Verilator).
  - Each stimulus is one 32-bit instruction word driven on instr_rdata_i AND instr_rdata_alu_i.
  - Configuration: RV32E=0, RV32M=RV32MFast, RV32B=RV32BNone, BranchTargetALU=1.
  - Side inputs are tied: instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0.
  - Outputs are sampled once per stimulus. You do NOT have the testbench source.

## Files you may read

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_decoder.sv   -- the DUT
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_pkg.sv       -- its enums / constants
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

## Coverage metric(s)

  1. Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt.
  2. Verilator line / branch / toggle coverage of ibex_decoder.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the claimed coverage goal. Check every cited ibex_decoder.sv line / signal against the actual file.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run2 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
def _perm(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


def _rand_imm12(rng):
    # mix of small, extreme and fully random 12-bit signed immediates
    c = rng.random()
    if c < 0.15:
        return rng.choice([-2048, -1, 0, 1, 2047])
    if c < 0.35:
        return rng.randint(-16, 16)
    return rng.randint(-2048, 2047)


def build_rtype_reg_port_sweep_stream(rng):
    """Functional bins: op-coverage + port-coverage + op x port cross for the 10
    R-type ops ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU (10 x 96 cross bins).

    Relies on ibex_decoder.sv lines 447-450 (OPCODE_OP sets rf_ren_a_o, rf_ren_b_o,
    rf_we -> rf_we_o), lines 456-465 (legal RV32I funct7/funct3 pairs keep
    illegal_insn_o=0) and lines 993-1002 (alu_operator_o = ALU_ADD/SUB/SLT/SLTU/XOR/
    OR/AND/SLL/SRL/SRA). Ports come from rf_raddr_a_o (line 167, rs1), rf_raddr_b_o
    (line 168, rs2) and rf_waddr_o (line 172, rd).

    For each op, rd/rs1/rs2 each walk an independent random permutation of 0..31,
    so 32 words cover all 96 (op, port, reg) cross bins of that op. A random
    32-bit word is a legal RV32I R-type ALU op only with p = 1/128 * 10/1024, and
    hitting each of 960 specific (op, port, reg) combos that way would need
    millions of words.
    """
    ops = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b111), (0x00, 0b110),
           (0x00, 0b100), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101),
           (0x00, 0b010), (0x00, 0b011)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f7, f3 in ops:
        rd, rs1, rs2 = _perm(rng), _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rd[i], rs1[i], rs2[i]))
    return stream


def build_itype_alu_reg_port_sweep_stream(rng):
    """Functional bins: op + read_A/write port cross bins for ADDI, SLTI, SLTUI
    (sltiu), XORI, ORI, ANDI, SLLI, SRLI, SRAI (9 x 64 cross bins). ADDI is
    emitted with both positive and negative immediates (in case the plan's
    "SUBI" is modelled as addi with a negative immediate -- RV32I has no subi).

    Relies on ibex_decoder.sv lines 348-358 (OPCODE_OP_IMM: rf_ren_a_o=1, rf_we=1,
    legal funct3), line 362 (slli legal only if instr[31:25]==0), line 404
    (srli/srai legal only if instr[26:25]==0), lines 822-827 (alu_operator_o
    ADD/SLT/SLTU/XOR/OR/AND), line 892 (ALU_SLL) and lines 932-936 (ALU_SRL/SRA,
    RV32BNone branch). Ports: rf_raddr_a_o (rs1), rf_waddr_o (rd); rf_ren_b_o=0.

    rd and rs1 walk independent permutations of 0..31 per op. Random words
    rarely produce legal shift-immediates (top 7 bits must be exactly 0000000 or
    0100000) and never sweep all registers per op.
    """
    stream = []
    ops = ["addi", "slti", "sltiu", "xori", "ori", "andi", "slli", "srli", "srai"]
    rng.shuffle(ops)
    f3_of = {"addi": 0, "slti": 2, "sltiu": 3, "xori": 4, "ori": 6, "andi": 7}
    for op in ops:
        rd, rs1 = _perm(rng), _perm(rng)
        for i in range(32):
            if op in f3_of:
                imm = _rand_imm12(rng)
                if op == "addi":
                    # half the sweep uses negative immediates (subtract-immediate idiom)
                    imm = -rng.randint(1, 2048) if (i % 2) else rng.randint(0, 2047)
                stream.append(enc_i(OPC["OP_IMM"], f3_of[op], rd[i], rs1[i], imm))
            else:
                shamt = rng.randint(0, 31)
                if op == "slli":
                    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 0, 0, rd[i], rs1[i], shamt))
                elif op == "srli":
                    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00000, 0, 0, rd[i], rs1[i], shamt))
                else:
                    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01000, 0, 0, rd[i], rs1[i], shamt))
    return stream


def build_load_store_reg_port_sweep_stream(rng):
    """Functional bins: LB/LH/LW x (read_A, write) and SB/SH/SW x (read_A, read_B)
    cross bins (6 x 64), plus the op bins for all six memory ops.

    Relies on ibex_decoder.sv lines 293-310 (OPCODE_STORE: rf_ren_a_o=1,
    rf_ren_b_o=1, data_req_o=1, data_we_o=1, data_type_o 10/01/00 for sb/sh/sw)
    and lines 312-334 (OPCODE_LOAD: rf_ren_a_o=1, data_req_o=1,
    data_sign_extension_o=~instr[14], data_type_o by size). NB: the LOAD arm
    never sets rf_we (it stays at its line-213 default of 0; Ibex writes load
    data back through the LSU path), so a LOAD "write" bin can only be credited
    if the coverage model reads rf_waddr_o (line 172, rd) for loads -- rd is
    swept over all 32 values anyway. ALU side: lines 776-795 (ALU_ADD,
    OP_B_IMM, IMM_B_S / IMM_B_I).

    Also emits a few lbu/lhu so data_sign_extension_o toggles. Random words hit
    a legal load/store with p ~ 2/128 * 3/8 and never sweep every register.
    """
    stream = []
    plan = [("load", 0b000), ("load", 0b001), ("load", 0b010),
            ("store", 0b000), ("store", 0b001), ("store", 0b010)]
    rng.shuffle(plan)
    for kind, f3 in plan:
        a, b = _perm(rng), _perm(rng)
        for i in range(32):
            imm = _rand_imm12(rng)
            if kind == "load":
                stream.append(enc_i(OPC["LOAD"], f3, a[i], b[i], imm))        # l{b,h,w} rd=a rs1=b
            else:
                stream.append(enc_s(OPC["STORE"], f3, a[i], b[i], imm))       # s{b,h,w} rs1=a rs2=b
    for _ in range(16):
        f3 = rng.choice([0b100, 0b101])                                       # lbu / lhu
        stream.append(enc_i(OPC["LOAD"], f3, rng.randint(0, 31), rng.randint(0, 31), _rand_imm12(rng)))
    return stream


def build_rv32m_muldiv_stream(rng):
    """Code coverage: all 8 RV32M encodings (mul, mulh, mulhsu, mulhu, div, divu,
    rem, remu).

    Relies on ibex_decoder.sv lines 512-551 (multdiv_operator_o MD_OP_MULL/MULH/
    DIV/REM and multdiv_signed_mode_o 00/01/11) and lines 1096-1126 (mult_sel_o /
    div_sel_o, alu_operator_o=ALU_ADD), lines 1187-1188 (mult_en_o / div_en_o).
    Not part of the functional plan, but these case arms and the toggle of
    mult_en_o/div_en_o/multdiv_* outputs are only reached by funct7=0000001 on
    OPCODE_OP (p = 1/128 * 1/128 per random word).
    """
    stream = []
    for _ in range(4):
        f3s = list(range(8))
        rng.shuffle(f3s)
        for f3 in f3s:
            stream.append(enc_r(OPC["OP"], f3, 0x01, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(0, 31)))
    return stream


def build_control_flow_upper_imm_stream(rng):
    """Code coverage: JAL, JALR, all 6 legal branch conditions, LUI, AUIPC,
    FENCE, FENCE.I, with extreme and random immediates.

    Relies on ibex_decoder.sv lines 241-247 (JAL: jump_in_dec_o, jump_set_o,
    rf_we=BranchTargetALU=1), 254-270 (JALR, rf_ren_a_o), 272-287 (branch:
    branch_in_dec_o, rf_ren_a_o/b_o), 340-346 (LUI/AUIPC rf_we), 563-582
    (FENCE / FENCE.I: jump_set_o, icache_inval_o), and the ALU side 694-770
    (bt_a/bt_b_mux_sel_o IMM_B_J / IMM_B_I / IMM_B_B, alu_operator_o
    ALU_EQ/NE/LT/GE/LTU/GEU), 801-814 (IMM_B_U, OP_A_CURRPC), 1138-1157.
    Immediates include 0, all-ones and min/max values so imm_b_type_o,
    imm_j_type_o and imm_u_type_o toggle every bit. Each of these opcodes is
    1/128 of random words and the FENCE/FENCE.I legal funct3 is a further 1/8.
    """
    stream = []
    for _ in range(4):
        stream.append(enc_j(OPC["JAL"], rng.randint(0, 31),
                            rng.choice([0, -2, 2, -(1 << 20), (1 << 20) - 2,
                                        rng.randint(-(1 << 19), (1 << 19) - 1) * 2])))
        stream.append(enc_i(OPC["JALR"], 0b000, rng.randint(0, 31), rng.randint(0, 31),
                            _rand_imm12(rng)))
        for f3 in (0b000, 0b001, 0b100, 0b101, 0b110, 0b111):     # beq bne blt bge bltu bgeu
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randint(0, 31), rng.randint(0, 31),
                                rng.choice([0, -2, 2, -4096, 4094,
                                            rng.randint(-2048, 2047) * 2])))
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31),
                            rng.choice([0, 0xFFFFF, 0x80000, rng.randint(0, 0xFFFFF)])))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31),
                            rng.choice([0, 0xFFFFF, 0x7FFFF, rng.randint(0, 0xFFFFF)])))
        stream.append(enc_i(OPC["MISC_MEM"], 0b000, rng.randint(0, 31), rng.randint(0, 31),
                            rng.randint(0, 0xFFF)))                  # fence (fields free)
        stream.append(enc_i(OPC["MISC_MEM"], 0b001, rng.randint(0, 31), rng.randint(0, 31),
                            rng.randint(0, 0xFFF)))                  # fence.i
    return stream


def build_system_csr_stream(rng):
    """Code coverage: ECALL/EBREAK/MRET/DRET/WFI (legal and with nonzero rs1/rd),
    unknown funct12 under funct3=000, all six CSR ops incl. the rs1==0 /
    uimm==0 read-only downgrade, and the reserved CSR funct3=100.

    Relies on ibex_decoder.sv lines 589-617 (ecall_insn_o, ebrk_insn_o,
    mret_insn_o, dret_insn_o, wfi_insn_o; default -> illegal at 610-611;
    rs1/rd != 0 -> illegal at 615-616), lines 619-635 (csr_access_o,
    rf_wdata_sel_o=RF_WD_CSR, rf_ren_a_o for ~instr[14], csr_op WRITE/SET/CLEAR,
    csr_illegal default at 632), lines 188-197 (csr_op_o forced to CSR_OP_READ
    when SET/CLEAR has rs1==0), ALU side 1162-1179 (IMM_A_Z, OP_A_IMM vs
    OP_A_REG_A). Random words essentially never produce the exact 12-bit funct12
    values with rs1=rd=0 (p ~ 2^-29 each).
    """
    stream = []
    for _ in range(3):
        for f12 in (0x000, 0x001, 0x302, 0x7B2, 0x105):            # ecall ebreak mret dret wfi
            stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))
        f12 = rng.choice([0x000, 0x001, 0x302, 0x7B2, 0x105])
        stream.append(enc_i(OPC["SYSTEM"], 0b000, rng.randint(1, 31), 0, f12))   # rd != 0 -> illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, rng.randint(1, 31), f12))   # rs1 != 0 -> illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0,
                            rng.choice([0x002, 0x102, 0x202, 0x7FF, 0xFFF,
                                        rng.randint(0, 0xFFF)])))                # unknown funct12
        csr = rng.choice([0x300, 0x305, 0x341, 0x342, 0x343, 0x344, 0x7B0,
                          0xB00, 0xC00, 0xF14, rng.randint(0, 0xFFF)])
        for f3 in (0b001, 0b010, 0b011):                           # csrrw csrrs csrrc
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0, csr))          # rs1 == 0
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), rng.randint(1, 31), csr))
        for f3 in (0b101, 0b110, 0b111):                           # csrrwi csrrsi csrrci
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0, csr))          # uimm == 0
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), rng.randint(1, 31), csr))
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randint(0, 31), rng.randint(0, 31), csr))  # reserved
    return stream


def build_base_isa_illegal_encodings_stream(rng):
    """Code coverage: every illegal_insn=1 arm reachable for base RV32IM under the
    tied inputs, plus unknown major opcodes.

    Relies on ibex_decoder.sv lines 265-267 (JALR funct3 != 0), 282 (branch
    funct3 010/011), 299-301 + 308 (store instr[14]=1 / size 11), 326-332 (lwu,
    load size 11), 362 (slli with instr[26:25] != 0), 394 (OP_IMM f3=001 unknown
    top5), 404 (srli/srai with instr[25]=1), 438 (OP_IMM f3=101 unknown top5),
    552-554 (OP default funct7), 583-585 (MISC_MEM funct3 >= 2), 639-641 (unknown
    opcode default), and the squash block 654-662 (rf_we_o, data_req_o,
    data_we_o, jump_in_dec_o, jump_set_o, branch_in_dec_o, csr_access_o forced
    to 0 while the per-opcode logic had set them). Output: illegal_insn_o.
    Random words do hit the unknown-opcode default often, but almost never the
    specific malformed-funct cases inside each legal opcode.
    """
    stream = []
    legal = set(OPC.values())
    bad_ops = [o for o in range(128) if o not in legal]
    r = lambda: rng.randint(0, 31)
    for _ in range(2):
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), r(), r(), _rand_imm12(rng)))
        stream.append(enc_b(OPC["BRANCH"], rng.choice([0b010, 0b011]), r(), r(), rng.randint(-2048, 2047) * 2))
        stream.append(enc_s(OPC["STORE"], rng.choice([0b100, 0b101, 0b110, 0b111]), r(), r(), _rand_imm12(rng)))
        stream.append(enc_s(OPC["STORE"], 0b011, r(), r(), _rand_imm12(rng)))
        stream.append(enc_i(OPC["LOAD"], 0b110, r(), r(), _rand_imm12(rng)))          # lwu
        stream.append(enc_i(OPC["LOAD"], rng.choice([0b011, 0b111]), r(), r(), _rand_imm12(rng)))
        # slli with nonzero instr[26:25]
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, rng.randint(0, 1), 1, r(), r(), r()))
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 1, 0, r(), r(), r()))
        # OP_IMM f3=001 / 101 unknown top5 (not used by any B encoding)
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, rng.choice([0b00010, 0b00011, 0b10000, 0b11111]), 0, 0, r(), r(), r()))
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.choice([0b00010, 0b00011, 0b10000, 0b11111]), 0, 0, r(), r(), r()))
        # srli / srai with instr[25]=1 (instr[26]=0 so not fsri)
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.choice([0b00000, 0b01000]), 0, 1, r(), r(), r()))
        # OP with unknown funct7 (bit 26 clear so not the ternary path)
        stream.append(enc_r(OPC["OP"], rng.randint(0, 7), rng.choice([0x02, 0x08, 0x40, 0x41, 0x7B]), r(), r(), r()))
        stream.append(enc_r(OPC["OP"], rng.choice([1, 2, 3, 4, 6, 7]), 0x20, r(), r(), r()))  # sub-funct7 w/ bad f3
        stream.append(enc_i(OPC["MISC_MEM"], rng.randint(2, 7), r(), r(), rng.randint(0, 0xFFF)))
        for _k in range(4):
            stream.append(enc_i(rng.choice(bad_ops), rng.randint(0, 7), r(), r(), rng.randint(0, 0xFFF)))
    return stream


def build_rv32b_encodings_under_bnone_stream(rng):
    """Code coverage: every RV32B / Zbt encoding Ibex knows, sent to a decoder
    configured RV32B=RV32BNone, so each must decode as illegal.

    Relies on ibex_decoder.sv lines 363-393 (OP_IMM f3=001: sloi, bclri, bseti,
    binvi, shfli incl. instr[26]=1 arm at 373, clz..crc32c.w and the default at
    391), 398-437 (OP_IMM f3=101: fsri via instr[26] at 399-400, sroi, rori,
    bexti, grevi/rev8, gorci/orc.b incl. the instr[24:20]==00111 arm at 424,
    unshfli incl. instr[26]=1 arm at 433), 451-452 (OP ternary cmix/cmov/fsl/fsr
    -- instr[26]=1 & instr[13:12]=01), 467-509 (all B R-type arms). On the ALU
    side: line 892 (ALU_SLL for any OP_IMM f3=001 under BNone), 932-936 (neither
    SRL nor SRA top5 -> default), 948 (OP with instr_alu[26]=1). Outputs:
    illegal_insn_o, alu_operator_o, rf_we_o squashed to 0.
    The RV32B-gated arms on the ALU side (lines 830-890, 897-929, 949-989,
    1005-1093) are constant-false for RV32BNone and therefore unreachable.
    """
    stream = []
    r = lambda: rng.randint(0, 31)
    b_rr = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4),
            (0x30, 1), (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7),
            (0x04, 4), (0x24, 4), (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1),
            (0x24, 5), (0x24, 7), (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5),
            (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1), (0x10, 5), (0x05, 1),
            (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]
    for f7, f3 in b_rr:
        stream.append(enc_r(OPC["OP"], f3, f7, r(), r(), r()))
    for f3, b in ((1, 0b11), (5, 0b11), (1, 0b10), (5, 0b10)):        # cmix cmov fsl fsr
        stream.append(enc_r4(OPC["OP"], f3, r(), b, r(), r(), r()))
    stream.append(enc_r4(OPC["OP"], rng.choice([0, 2, 3, 4, 6, 7]), r(), rng.choice([0b10, 0b11]), r(), r(), r()))
    # shift-immediate style B ops (f3=001 and f3=101)
    for top5 in (0b00100, 0b01001, 0b00101, 0b01101, 0b00001):
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, top5, 0, 0, r(), r(), r()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00001, 1, 0, r(), r(), r()))      # shfli w/ bit26 -> 373
    for top5 in (0b00100, 0b01100, 0b01001, 0b01101, 0b00101, 0b00001):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, 0, r(), r(), r()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, r(), r(), 0b11000))   # rev8
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, r(), r(), 0b00111))   # orc.b -> 424
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, r(), 1, rng.randint(0, 1), r(), r(), r()))  # fsri (bit26)
    # unary (instr[31:20] fixed) incl. an unknown low code for the default at 391
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612, 0x618, 0x619, 0x61A,
                rng.choice([0x603, 0x606, 0x613, 0x61F, 0x67F])):
        stream.append(enc_i(OPC["OP_IMM"], 0b001, r(), r(), f12))
    return stream


def build_immediate_walking_bits_stream(rng):
    """Toggle coverage: walking-one / walking-zero immediates so every bit of
    imm_i_type_o, imm_s_type_o, imm_b_type_o, imm_u_type_o, imm_j_type_o,
    zimm_rs1_type_o (ibex_decoder.sv lines 133-140) and rf_raddr_a_o /
    rf_raddr_b_o / rf_waddr_o (lines 167-172) toggles 0->1 and 1->0.

    Uses addi (I), sw (S), beq (B), lui (U), jal (J) and csrrwi (zimm) with the
    register fields set to 0 or 31 alternately. Not a functional-plan target;
    random immediates leave some sign-extension bits toggling only in one
    direction in short runs, and this guarantees all edges deterministically.
    rng picks the order of formats and the register for each word.
    """
    stream = []
    fmts = ["i", "s", "b", "u", "j", "z"]
    rng.shuffle(fmts)
    for fmt in fmts:
        width = {"i": 12, "s": 12, "b": 12, "u": 20, "j": 20, "z": 5}[fmt]
        for k in range(width):
            for invert in (False, True):
                v = 1 << k
                if invert:
                    v = ((1 << width) - 1) ^ v
                reg = rng.choice([0, 31])
                if fmt == "i":
                    stream.append(enc_i(OPC["OP_IMM"], 0b000, reg, 31 - reg, v))             # addi
                elif fmt == "s":
                    stream.append(enc_s(OPC["STORE"], 0b010, reg, 31 - reg, v))             # sw
                elif fmt == "b":
                    stream.append(enc_b(OPC["BRANCH"], 0b000, reg, 31 - reg, v << 1))        # beq
                elif fmt == "u":
                    stream.append(enc_u(OPC["LUI"], reg, v))                                 # lui
                elif fmt == "j":
                    stream.append(enc_j(OPC["JAL"], reg, v << 1))                            # jal
                else:
                    stream.append(enc_i(OPC["SYSTEM"], 0b101, reg, v, rng.randint(0, 0xFFF)))  # csrrwi
    return stream


NEW_BUILDERS = [
    build_rtype_reg_port_sweep_stream,
    build_itype_alu_reg_port_sweep_stream,
    build_load_store_reg_port_sweep_stream,
    build_rv32m_muldiv_stream,
    build_control_flow_upper_imm_stream,
    build_system_csr_stream,
    build_base_isa_illegal_encodings_stream,
    build_rv32b_encodings_under_bnone_stream,
    build_immediate_walking_bits_stream,
]
```

## Reasoning per stream

I checked the code offline against a copy of isa.py in the scratch folder. Over 20 seeds every builder returned 16 to 512 words, and every word was a valid 32-bit int. Stream lengths were 320, 288, 208, 32, 48, 63, 36, 66 and 162. I also confirmed that one R-type stream covers all 960 (op, port, reg) combinations. Nothing has been simulated, so I have no coverage numbers.

**The plan's size.** It has 26 op bins and 96 port bins (32 registers x read_A/read_B/write). The cross is per op, limited to the ports each op actually uses:
- R-type ops: 10 x 96.
- I-type ALU ops and loads: 64 each (read_A + write).
- Stores: 64 each (read_A + read_B).

That adds up to roughly 2106, close to the stated 2107. So the plan is almost entirely op x port x register crosses. Random words land on a legal op only rarely (the opcode must match, about 1/128, before funct3/funct7), and would take a very long time to sweep each register in each port.

1. **rtype_reg_port_sweep**: For each of the 10 R ops, rd, rs1 and rs2 each step through their own shuffled 0..31. One run of this stream covers all 960 R-type cross bins plus their op and port bins.
2. **itype_alu_reg_port_sweep**: The same idea for ADDI, SLTI, SLTIU (the plan's SLTUI), XORI, ORI, ANDI, SLLI, SRLI and SRAI, over rd and rs1. Shift-immediates use exact funct7 values so they stay legal. Half the ADDIs use negative immediates.
3. **load_store_reg_port_sweep**: LB/LH/LW sweep (rd, rs1) and SB/SH/SW sweep (rs1, rs2). A few LBU/LHU are added so data_sign_extension_o toggles.
4. **rv32m_muldiv**: Covers the 8 RV32M case arms (lines 512-551 and 1096-1126), the multdiv_operator/signed_mode values and mult_en/div_en. These are line, branch and toggle targets only.
5. **control_flow_upper_imm**: JAL, JALR, all 6 branch conditions, LUI, AUIPC, FENCE and FENCE.I, with extreme immediates. This covers the jump/branch/fence arms and the outputs jump_set_o, icache_inval_o and the bt_* mux selects.
6. **system_csr**: The legal ECALL/EBREAK/MRET/DRET/WFI encodings, plus the illegal variants: rs1 or rd nonzero, and an unknown funct12. It also includes:
   - all six CSR ops with rs1/uimm both zero and nonzero, which exercises the csr_op_o downgrade to READ at lines 193-196;
   - the reserved CSR funct3=100.
7. **base_isa_illegal_encodings**: Every malformed-funct illegal arm inside the legal opcodes, plus unknown opcodes. This covers the squash block at lines 654-662 while the per-opcode logic had enabled outputs.
8. **rv32b_encodings_under_bnone**: Every bitmanip and ternary encoding. Under RV32BNone the decoder must flag them illegal, which reaches the illegal arms at lines 363-437 and 451-509. It also reaches the BNone ALU paths at line 892, lines 932-936 and line 948.
9. **immediate_walking_bits**: Walking-one and walking-zero patterns on the I/S/B/U/J immediates and zimm, with register fields at 0 and 31. This makes every bit of the imm_* outputs and the register-address outputs toggle in both directions.

## Bins and code that cannot be hit

- **SUBI**: RV32I has no subtract-immediate encoding, and ibex_decoder has no decode path for one. Unless the coverage model maps it to something such as ADDI with a negative immediate (stream 2 emits these just in case), its op bin and 64 cross bins cannot be hit.
- **LOAD "write" port**: The LOAD arm never sets rf_we (it stays at its line-213 default of 0). If the model credits the write port only when rf_we_o=1, the 3 x 32 load-write cross bins cannot be hit. If it reads rf_waddr_o, stream 3 covers them.

Some code coverage is also out of reach because of the tied inputs and configuration:
- **instr_first_cycle_i=1**: the else branches at lines 248-251, 261-263, 762-769 and 904/957/966/975/984 never run.
- **branch_taken_i=1**: the IMM_B_INCR_PC side of line 753 never runs.
- **illegal_c_insn_i=0**: line 646 never runs.
- **RV32E=0**: line 178 never runs.
- **BranchTargetALU=1**: the !BranchTargetALU paths at lines 701-706, 723-728 and 1151-1155 never run.
- **RV32B=RV32BNone**: all RV32B-gated ALU-decoder arms (lines 830-890, 897-929, 949-989 and the B-ext bodies at 1005-1093) never run.

No stream was written for any of these.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
