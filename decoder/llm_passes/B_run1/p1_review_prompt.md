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

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run1 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
# ---------------------------------------------------------------------------
# private helpers
# ---------------------------------------------------------------------------
_RTYPE_OPS = [  # (name, funct7, funct3)  -- plan ops on OPCODE_OP
    ("add", 0x00, 0b000), ("sub", 0x20, 0b000), ("sll", 0x00, 0b001),
    ("slt", 0x00, 0b010), ("sltu", 0x00, 0b011), ("xor", 0x00, 0b100),
    ("srl", 0x00, 0b101), ("sra", 0x20, 0b101), ("or", 0x00, 0b110),
    ("and", 0x00, 0b111),
]
_ITYPE_OPS = [  # (name, funct3) -- plan ops on OPCODE_OP_IMM with a 12-bit imm
    ("addi", 0b000), ("slti", 0b010), ("sltiu", 0b011),
    ("xori", 0b100), ("ori", 0b110), ("andi", 0b111),
]
_SHIFT_IMM_OPS = [  # (name, funct3, instr[31:27])
    ("slli", 0b001, 0b00000), ("srli", 0b101, 0b00000), ("srai", 0b101, 0b01000),
]
_LOADS = [("lb", 0b000), ("lh", 0b001), ("lw", 0b010)]
_STORES = [("sb", 0b000), ("sh", 0b001), ("sw", 0b010)]


def _perm_triple(rng):
    """Three independent random offsets so that, over i = 0..31, rd / rs1 / rs2
    each take every register index exactly once (rotations of 0..31)."""
    return rng.randrange(32), rng.randrange(32), rng.randrange(32)


def _imm12(rng):
    # mix corner values (sign bit, all-ones, zero) with uniform ones so the
    # imm_*_type_o outputs toggle in both directions
    return rng.choice([0, -1, -2048, 2047, 1, rng.randint(-2048, 2047),
                       rng.randint(-2048, 2047)])


# ---------------------------------------------------------------------------
# builders
# ---------------------------------------------------------------------------
def build_rtype_port_cross_stream(rng):
    """Plan bins: BIN type 1 for ADD/SUB/AND/OR/XOR/SLL/SRL/SRA/SLT/SLTU, all 96
    BIN type 2 port bins, and the BIN type 3 cross (op x reg x {read_A, read_B,
    write}) for those 10 R-type ops = 10*96 = 960 bins.
    RTL: ibex_decoder.sv l.447-465 (OPCODE_OP legal RV32I case -> rf_ren_a_o,
    rf_ren_b_o, rf_we_o), l.164-172 (rf_raddr_a_o = instr[19:15],
    rf_raddr_b_o = instr[24:20], rf_waddr_o = instr[11:7]), l.991-1002
    (alu_operator_o ADD/SUB/SLT/SLTU/XOR/OR/AND/SLL/SRL/SRA).
    Why directed: a random word is a legal RV32I R-type op only when opcode
    (1/128) AND funct7/funct3 (10/1024) match, ~1e-4; hitting every one of the
    960 (op, reg, port) cells by chance would need tens of millions of words.
    Here each op gets 32 words in which rd, rs1 and rs2 are three independent
    random rotations of 0..31, so every (op, reg, port) cell is hit once."""
    stream = []
    for _name, f7, f3 in _RTYPE_OPS:
        a, b, c = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, (i + a) % 32, (i + b) % 32, (i + c) % 32))
    rng.shuffle(stream)
    return stream                                                    # 320 words


def build_itype_alu_port_cross_stream(rng):
    """Plan bins: BIN type 1 for ADDI/SLTI/SLTUI(sltiu)/XORI/ORI/ANDI/SLLI/SRLI/
    SRAI and the BIN type 3 cross op x reg x {read_A, write} (9*64 = 576 bins).
    RTL: ibex_decoder.sv l.348-358 (OP_IMM legal funct3 -> rf_ren_a_o, rf_we_o),
    l.362 (slli needs instr[31:25]==0), l.403-404 (srli/srai need
    instr[31:27] in {00000,01000} and instr[26:25]==0), l.816-827, 892,
    932-936 (alu_operator_o ADD/SLT/SLTU/XOR/OR/AND/SLL/SRL/SRA, op_b = IMM,
    imm_b_mux_sel_o = IMM_B_I).
    Why directed: random OP_IMM words are 1/128; of those, the shift-immediate
    forms need the top 7 bits exactly 0000000 / 0100000 (1/128 each), so
    SLLI/SRLI/SRAI x 32 regs x 2 ports essentially never appear at random."""
    stream = []
    for _name, f3 in _ITYPE_OPS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_i(OPC["OP_IMM"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for _name, f3, top5 in _SHIFT_IMM_OPS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, (i + a) % 32, (i + b) % 32,
                                  rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 288 words


def build_loadstore_port_cross_stream(rng):
    """Plan bins: BIN type 1 for LB/LH/LW/SB/SH/SW and the BIN type 3 crosses
    LB/LH/LW x reg x {read_A, write} and SB/SH/SW x reg x {read_A, read_B}
    (6*64 = 384 bins).
    RTL: ibex_decoder.sv l.293-310 (STORE: rf_ren_a_o, rf_ren_b_o, data_req_o,
    data_we_o, data_type_o 10/01/00), l.312-334 (LOAD: rf_ren_a_o,
    data_sign_extension_o = ~instr[14], data_type_o), rf_we_o for loads comes
    from the controller/testbench port model (no rf_we set in the decoder),
    l.776-795 (alu ADD, imm_b_mux_sel_o IMM_B_S / IMM_B_I).
    Why directed: a specific (load/store, size) pair is 1/1024 of random words,
    and covering all 32 registers on each port for each of 6 ops by chance
    needs ~10^5 words. Also includes lbu/lhu (sign-extension output = 0)."""
    stream = []
    for _name, f3 in _LOADS:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for _name, f3 in _STORES:
        a, b, _ = _perm_triple(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, (i + a) % 32, (i + b) % 32, _imm12(rng)))
    for f3 in (0b100, 0b101):                                        # lbu, lhu
        for _ in range(8):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randrange(32), rng.randrange(32), _imm12(rng)))
    rng.shuffle(stream)
    return stream                                                    # 208 words


def build_rv32m_stream(rng):
    """Code coverage: the 8 RV32M case items of ibex_decoder.sv l.512-551
    (multdiv_operator_o MULL/MULH/DIV/REM, multdiv_signed_mode_o 00/01/11) and
    l.1096-1126 (mult_sel_o / div_sel_o), l.1187-1188 (mult_en_o / div_en_o).
    No plan bins (MUL/DIV are not plan ops) -- this is purely line/branch/
    toggle coverage of the multdiv outputs.
    Why directed: funct7 must be exactly 0000001 with OP opcode (1/16384 of
    random words per funct3 value)."""
    stream = []
    for _ in range(4):
        for f3 in range(8):
            stream.append(enc_r(OPC["OP"], f3, 0x01, rng.randrange(32),
                                rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 32 words


def build_system_csr_stream(rng):
    """Code coverage of OPCODE_SYSTEM, ibex_decoder.sv l.589-638 and l.1162-1179:
      - ecall/ebreak/mret/dret/wfi (l.593-608: ecall_insn_o, ebrk_insn_o,
        mret_insn_o, dret_insn_o, wfi_insn_o) with rs1 = rd = 0 (legal),
      - the same with rs1 != 0 or rd != 0 (l.615-617 -> illegal_insn_o),
      - unknown funct12 (l.610-611 default -> illegal),
      - CSRRW/RS/RC/RWI/RSI/RCI (l.620-633: csr_access_o, rf_wdata_sel_o =
        RF_WD_CSR, csr_op WRITE/SET/CLEAR, rf_ren_a_o only when instr[14]=0,
        alu_op_a_mux_sel_o OP_A_IMM vs OP_A_REG_A, imm_a_mux_sel_o = IMM_A_Z),
      - CSRRS/CSRRC/CSRRSI/CSRRCI with rs1/uimm = 0 (l.193-196: csr_op_o
        forced to CSR_OP_READ),
      - funct3 = 100 (l.632 csr_illegal -> illegal_insn_o).
    No plan bins. Why directed: the five privileged words are single exact
    32-bit values (2^-32 each at random); CSR forms need SYSTEM opcode plus
    a funct3 value (1/1024)."""
    stream = []
    for f12 in (0x000, 0x001, 0x302, 0x7B2, 0x105):
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))           # legal
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))
        stream.append(enc_i(OPC["SYSTEM"], 0, rng.randint(1, 31), 0, f12))   # rd != 0
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, rng.randint(1, 31), f12))   # rs1 != 0
    for _ in range(4):                                               # unknown funct12
        f12 = rng.choice([0x002, 0x102, 0x202, 0x7B3, 0x104, rng.randrange(4096)])
        stream.append(enc_i(OPC["SYSTEM"], 0, 0, 0, f12))
    for f3 in (1, 2, 3, 5, 6, 7):
        for _ in range(3):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randrange(32), rng.randint(1, 31),
                                rng.randrange(4096)))
        stream.append(enc_i(OPC["SYSTEM"], f3, rng.randrange(32), 0, rng.randrange(4096)))
    for _ in range(3):                                               # funct3 = 100: illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))
    rng.shuffle(stream)
    return stream                                                    # 51 words


def build_control_flow_misc_stream(rng):
    """Code coverage of jumps/branches/upper-imm/fence, ibex_decoder.sv:
      - JAL l.241-252, 694-714 (jump_in_dec_o, jump_set_o, rf_we_o =
        BranchTargetALU, bt_b_mux_sel_o = IMM_B_J, imm_b = IMM_B_INCR_PC),
      - JALR l.254-270, 716-736 legal (funct3=0) and illegal (funct3!=0,
        l.265-267), bt_a_mux_sel_o = OP_A_REG_A,
      - BRANCH l.272-287, 738-770 for all 6 legal funct3 (alu_operator_o
        EQ/NE/LT/GE/LTU/GEU, branch_in_dec_o, bt_b_mux_sel_o = IMM_B_B) and
        illegal funct3 010/011 (l.282),
      - LUI/AUIPC l.340-346, 801-814 (imm_b_mux_sel_o = IMM_B_U, OP_A_CURRPC),
      - FENCE / FENCE.I / illegal MISC_MEM funct3 l.563-587, 1138-1160
        (icache_inval_o, jump_set_o, bt_b_mux_sel_o = IMM_B_INCR_PC).
    No plan bins. Why directed: each specific (opcode, funct3) is ~1/1024 of
    random words and rd/rs fields plus sign bits of every immediate format must
    be swept for imm_b/j/u_type_o toggle coverage."""
    stream = []
    for _ in range(6):
        stream.append(enc_j(OPC["JAL"], rng.randrange(32),
                            rng.choice([0, -2, 2, -(1 << 20), (1 << 20) - 2,
                                        rng.randrange(-(1 << 20), 1 << 20, 2)])))
        stream.append(enc_i(OPC["JALR"], 0, rng.randrange(32), rng.randrange(32), _imm12(rng)))
        stream.append(enc_u(OPC["LUI"], rng.randrange(32), rng.randrange(1 << 20)))
        stream.append(enc_u(OPC["AUIPC"], rng.randrange(32), rng.randrange(1 << 20)))
    for _ in range(3):                                               # jalr funct3 != 0
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), rng.randrange(32),
                            rng.randrange(32), _imm12(rng)))
    for f3 in (0, 1, 4, 5, 6, 7):
        for _ in range(3):
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randrange(32), rng.randrange(32),
                                rng.choice([0, -2, 4094, -4096,
                                            rng.randrange(-4096, 4096, 2)])))
    for f3 in (2, 3):                                                # illegal branch cond
        stream.append(enc_b(OPC["BRANCH"], f3, rng.randrange(32), rng.randrange(32),
                            rng.randrange(-4096, 4096, 2)))
    for _ in range(3):
        stream.append(enc_i(OPC["MISC_MEM"], 0, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))                    # fence
        stream.append(enc_i(OPC["MISC_MEM"], 1, 0, 0, 0))             # fence.i
    for f3 in (2, 3, 4, 5, 6, 7):                                    # illegal MISC_MEM
        stream.append(enc_i(OPC["MISC_MEM"], f3, rng.randrange(32), rng.randrange(32),
                            rng.randrange(4096)))
    rng.shuffle(stream)
    return stream                                                    # 59 words


def build_illegal_opimm_shift_space_stream(rng):
    """Code coverage of the OP_IMM funct3 = 001 / 101 decode trees,
    ibex_decoder.sv l.360-441 (illegal_insn_o for every instr[31:27] case:
    slli with instr[26:25]!=0, sloi, bclri/bseti/binvi, shfl, the 0b01100
    unary sub-case with all clz..crc32c values and default, the default
    item; fsri via instr[26]=1 at l.399-400; srli/srai with instr[26:25]!=0,
    sroi, rori/bexti, grevi/rev8, gorci/orc.b, unshfl, default) and
    l.892 / 932-936 (alu_operator_o keeps default ALU_SLTU for non-shift
    funct7 under RV32BNone). With RV32B=None all of these are illegal, which
    drives the illegal_insn squash at l.654-662 from the OP_IMM arm.
    No plan bins. Why directed: each case item requires an exact 5-bit (and
    for unary ops, 12-bit) pattern on top of opcode+funct3 (~2^-15..2^-22)."""
    stream = []
    top5_vals = [0b00000, 0b00100, 0b01001, 0b00101, 0b01101, 0b00001, 0b01100,
                 0b01000, 0b10000, 0b11111]
    for top5 in top5_vals:
        for f3 in (0b001, 0b101):
            b26, b25 = rng.randrange(2), rng.randrange(2)
            if top5 in (0b00000, 0b01000) and rng.random() < 0.5:
                b26, b25 = 0, 1                                      # bad bit 25 on a real shift
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, b26, b25, rng.randrange(32),
                                  rng.randrange(32), rng.randrange(32)))
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rng.randrange(32),
                                  rng.randrange(32), rng.randrange(32)))
    # unary group instr[31:20] = 0110_0xxx_xxxx (clz..crc32c.w + an undefined one)
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612,
                0x618, 0x619, 0x61A, 0x603, 0x6FF):
        stream.append(enc_i(OPC["OP_IMM"], 0b001, rng.randrange(32), rng.randrange(32), f12))
    # rev8 / orc.b fixed shamt forms
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, rng.randrange(32),
                          rng.randrange(32), 0b11000))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, rng.randrange(32),
                          rng.randrange(32), 0b00111))
    # fsri: rs3 in [31:27], instr[26] = 1
    for _ in range(3):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, rng.randrange(32), 1, rng.randrange(2),
                              rng.randrange(32), rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 58 words


_B_RTYPE = [  # (funct7, funct3) of all RV32B R-type encodings in the decoder
    (0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4), (0x30, 1),
    (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7), (0x04, 4), (0x24, 4),
    (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1), (0x24, 5), (0x24, 7), (0x34, 5),
    (0x14, 5), (0x04, 1), (0x04, 5), (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1),
    (0x10, 5), (0x05, 1), (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6),
]


def build_illegal_op_space_stream(rng):
    """Code coverage of the OPCODE_OP decode tree, ibex_decoder.sv
    l.451-452 (cmix/cmov/fsl/fsr: {instr[26], instr[13:12]} == 1_01 ->
    illegal with RV32BNone), l.467-509 (all Zba/Zbb/Zbs/Zbf/Zbp/Zbc/Zbe case
    items -> illegal_insn_o = 1), l.552-554 (default: arbitrary funct7), and
    l.948-989 (instr_alu[26]=1 branch, alu_operator_o left at ALU_SLTU),
    l.1005-1093 (B-ext items whose alu_operator_o stays default).
    All are illegal with RV32B=None so rf_we_o is squashed (l.654-655).
    No plan bins. Why directed: each item is one exact funct7/funct3 pair on
    the OP opcode (2^-17 of random words)."""
    stream = []
    for f7, f3 in _B_RTYPE:
        stream.append(enc_r(OPC["OP"], f3, f7, rng.randrange(32), rng.randrange(32),
                            rng.randrange(32)))
    for f3, b in ((1, 0b11), (5, 0b11), (1, 0b10), (5, 0b10)):      # cmix/cmov/fsl/fsr
        stream.append(enc_r4(OPC["OP"], f3, rng.randrange(32), b, rng.randrange(32),
                             rng.randrange(32), rng.randrange(32)))
    # instr[26]=1 with funct3 not x01 (falls through to the big case -> default)
    for f3 in (0, 2, 4, 6, 7):
        stream.append(enc_r4(OPC["OP"], f3, rng.randrange(32), rng.choice([0b10, 0b11]),
                             rng.randrange(32), rng.randrange(32), rng.randrange(32)))
    for _ in range(8):                                               # random undefined funct7
        f7 = rng.choice([0x02, 0x08, 0x40, 0x7F, 0x21, 0x41, rng.randrange(128) & 0x5B])
        stream.append(enc_r(OPC["OP"], rng.randrange(8), f7, rng.randrange(32),
                            rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 51 words


def build_illegal_loadstore_bad_opcode_stream(rng):
    """Code coverage of:
      - LOAD funct3 = 011 (l.330-332 default), 110 (lwu, l.326-327),
        111 (default) -> illegal_insn_o, data_req_o squashed (l.656),
      - STORE funct3 = 011 (l.308 default), 100/101/110 (instr[14], l.299-300),
        111 -> illegal, data_req_o / data_we_o squashed,
      - opcodes not in opcode_e (l.639-641 and l.1182 defaults) including
        words whose low two bits are not 2'b11 (compressed-space words).
    No plan bins. Why directed: although random words often hit the default
    opcode arm, specific illegal funct3 on LOAD/STORE are 1/1024 each and we
    want them every time this stream is picked."""
    stream = []
    for f3 in (0b011, 0b110, 0b111):
        for _ in range(3):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randrange(32), rng.randrange(32),
                                _imm12(rng)))
    for f3 in (0b011, 0b100, 0b101, 0b110, 0b111):
        for _ in range(2):
            stream.append(enc_s(OPC["STORE"], f3, rng.randrange(32), rng.randrange(32),
                                _imm12(rng)))
    legal = set(OPC.values())
    bad_ops = [o for o in range(128) if o not in legal]
    for _ in range(12):
        # deliberately malformed: an opcode value not in ibex_pkg::opcode_e,
        # built through enc_r so the other fields are still random
        op = rng.choice(bad_ops)
        stream.append(enc_r(op, rng.randrange(8), rng.randrange(128), rng.randrange(32),
                            rng.randrange(32), rng.randrange(32)))
    rng.shuffle(stream)
    return stream                                                    # 31 words


NEW_BUILDERS = [
    build_rtype_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_loadstore_port_cross_stream,
    build_rv32m_stream,
    build_system_csr_stream,
    build_control_flow_misc_stream,
    build_illegal_opimm_shift_space_stream,
    build_illegal_op_space_stream,
    build_illegal_loadstore_bad_opcode_stream,
]
```

## Reasoning per stream

I checked the code offline with the real `isa.py` encoders: every stream has 31 to 320 words (all within 16..512) across 5 seeds, and the R-type stream hit all 960 of its (op, reg, port) cells in one call. Nothing has been simulated yet, so I have no coverage numbers.

**How I read the plan.** There are 26 type-1 bins (one per op), 96 type-2 bins (32 registers x 3 ports), and the type-3 bins cross each op with the ports it really uses:
- the 10 R-type ops use read_A, read_B and write;
- the 9 I-type ALU ops and the 3 loads use read_A and write;
- the 3 stores use read_A and read_B.

That gives 10x96 + 12x64 + 3x64 = 1920 type-3 bins. Adding SUBI's 64 makes 1984, and 26 + 96 + 1984 = 2106, one short of 2107. So the testbench probably has one bin I can't infer from the prose.

**Bins I believe cannot be hit.** SUBI does not exist in RV32I. With RV32B=None there is no encoding the decoder treats as subtract-immediate; in hardware, `addi` with a negative immediate drives `ALU_ADD`. So SUBI's type-1 bin and its 64 type-3 bins can only be hit if the testbench model labels some `addi` as SUBI. I wrote no stream for them.

**Plan-bin streams:**
- **`build_rtype_port_cross_stream`, `build_itype_alu_port_cross_stream`, `build_loadstore_port_cross_stream`** cover all reachable plan bins: every type-1 op except SUBI, all 96 port bins, and all 1920 reachable type-3 bins.
  - In each op's block of 32 words, rd, rs1 and rs2 are three independent rotations of 0..31 starting at random offsets. So one call hits every (op, register, port) cell exactly once, with random pairings between ports that change with the seed.
  - Random words almost never do this. A given legal R-type op is about 1e-4 of random words, and the shift-immediates also need exact top bits.
  - Immediates mix corner values (0, -1, -2048, 2047) with uniform ones, so the `imm_*_type_o` outputs toggle.
  - The loads also emit lbu/lhu, so `data_sign_extension_o` goes to 0.

**Line, branch and toggle streams** (these target no plan bins):
- **`build_rv32m_stream`**: the 8 M-extension case items, which drive `multdiv_operator_o`, `multdiv_signed_mode_o`, `mult_sel_o`/`div_sel_o` and `mult_en_o`/`div_en_o`.
- **`build_system_csr_stream`**:
  - each of ecall/ebreak/mret/dret/wfi, both legal and with rs1 or rd non-zero (which makes it illegal);
  - unknown funct12 values;
  - all six CSR ops, including the rs1=0 case that turns SET/CLEAR into READ (l.193-196) and the illegal funct3=100.
- **`build_control_flow_misc_stream`**:
  - JAL, JALR (legal and with bad funct3), LUI and AUIPC;
  - all 6 branch conditions plus the illegal funct3 values 010/011;
  - FENCE, FENCE.I (`icache_inval_o`) and the illegal MISC_MEM funct3 values.
- **`build_illegal_opimm_shift_space_stream`**: walks every instr[31:27] case item under funct3 001 and 101, plus the 0b01100 unary sub-case, rev8/orc.b and fsri (instr[26]=1). With RV32B=None all of these are illegal, which exercises each `illegal_insn = ...` line and the squash block at l.654-662.
- **`build_illegal_op_space_stream`**: every RV32B R-type funct7/funct3 pair, cmix/cmov/fsl/fsr, instr[26]=1 with other funct3 values, and random undefined funct7. Each one is a separate case item in both always_comb blocks.
- **`build_illegal_loadstore_bad_opcode_stream`**:
  - illegal load sizes (011/110/111) and store sizes (instr[14]=1 or size 11);
  - opcodes outside `opcode_e`, including words whose low two bits are not 11. These are built through `enc_r` with a non-table opcode value, as the comment in the code says.

**Code that no stream can reach.** These come from the tied inputs and parameters, not from missing stimulus:
- the `instr_first_cycle_i=0` else-branches;
- `branch_taken_i=0`;
- the `illegal_c_insn_i` path;
- the RV32E check;
- the `use_rs3_q` flop path;
- the B-extension `alu_operator_o` assignments behind `RV32B != RV32BNone`, which are constant-false;
- the `!BranchTargetALU` arms.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
