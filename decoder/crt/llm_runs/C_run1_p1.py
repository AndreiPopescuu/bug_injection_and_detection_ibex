"""
LLM-derived CRT stream builders for the Ibex decoder (same methodology as
rl-coverage/level11_maxconfig/constrained_llm_l11.py, applied to one module).

Each builder is `build_<name>_stream(rng) -> list[int]`: a list of 32-bit
instruction words, consumed IN ORDER by CRTGenerator.gen_llm_stream (class
"llm_stream" in a profile). Every builder's docstring must cite the
ibex_decoder.sv line(s) it targets.

Pipeline per pass (prompts: llm_crt_prompts.py, fixed templates):
  1. isolated synthesis agent  -- RTL + coverage plan / uncovered bins only
  2. isolated review agent     -- re-derives every RTL/encoding claim
  3. merge confirmed builders into ALL_STREAM_BUILDERS below

Pass log:
  Pass 1 (from zero, no coverage data; 1 synthesis + 1 review agent call):
    8 builders. Review: 5 CONFIRMED, 3 NEEDS FIX (docstrings / LEGAL_OPCODES
    import only, code unchanged). Unreachable findings confirmed: SUBI
    (65 plan bins -> max 2042/2107), first_cycle/BranchTargetALU/branch_taken/
    illegal_c/RV32E/RV32BNone-gated RTL. Drafts: llm_passes/pass1_*.
"""

from ..isa import (OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j,  # noqa: F401
                  enc_ish, enc_r4)



# ---------------------------------------------------------------------------
# Pass 1 builders (reviewed). Shared helpers; rng drives every free field.
# Uses only OPC / enc_* already imported at the top of llm_streams.py.
# ---------------------------------------------------------------------------
def _perm(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


# RV32I R-type (funct7, funct3) -- ibex_decoder.sv:456-465 / 993-1002
_R_ALU = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b010), (0x00, 0b011), (0x00, 0b100),
          (0x00, 0b110), (0x00, 0b111), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101)]

# RV32B R-type (funct7, funct3), all illegal with RV32B=None -- ibex_decoder.sv:468-509 / 1005-1093
_R_B = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4), (0x30, 1), (0x30, 5),
        (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7), (0x04, 4), (0x24, 4), (0x04, 7),
        (0x24, 1), (0x14, 1), (0x34, 1), (0x24, 5), (0x24, 7),
        (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5), (0x14, 2), (0x14, 4), (0x14, 6),
        (0x10, 1), (0x10, 5), (0x05, 1), (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]

# RV32M (funct7=0000001, all funct3) -- ibex_decoder.sv:512-551 / 1096-1126
_R_M = [(0x01, f3) for f3 in range(8)]


def build_rtype_alu_port_sweep_stream(rng):
    """Target ibex_decoder.sv:447-465 (OPCODE_OP legal RV32I arm: rf_ren_a_o=1,
    rf_ren_b_o=1, rf_we=1, illegal_insn=0) and :944-946 + :991-1002
    (alu_op_a_mux_sel_o=OP_A_REG_A, alu_op_b_mux_sel_o=OP_B_REG_B,
    alu_operator_o = ADD/SUB/SLT/SLTU/XOR/OR/AND/SLL/SRL/SRA).

    Plan bins: the 10 register-register ops x {read_A, read_B, write} x 32 registers
    (960 cross bins). Each op gets 32 words where rd, rs1 and rs2 are three independent
    random permutations of 0..31, so every (op, port, reg) cross bin is hit once per op.
    A uniformly random word needs opcode 0110011 (1/128) AND one of 10 of 1024
    (funct7,funct3) pairs -- about 1 in 13000 words per op.
    """
    stream = []
    for f7, f3 in _R_ALU:
        rd, rs1, rs2 = _perm(rng), _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rd[i], rs1[i], rs2[i]))
    return stream


def build_itype_alu_port_sweep_stream(rng):
    """Target ibex_decoder.sv:348-358 + 360-362 + 398-404 (OPCODE_OP_IMM legal arms:
    rf_ren_a_o=1, rf_we=1) and :816-827, 892, 932-936 (alu_op_a_mux_sel_o=OP_A_REG_A,
    alu_op_b_mux_sel_o=OP_B_IMM, alu_operator_o=ADD/SLT/SLTU/XOR/OR/AND/SLL/SRL/SRA).

    Plan bins: ADDI/SLTI/SLTUI/XORI/ORI/ANDI/SLLI/SRLI/SRAI x {read_A, write} x 32 regs
    (SUBI has no encoding: ALU_SUB is only driven at :994, OPCODE_OP with OP_B_REG_B).
    rd and rs1 are independent permutations per op; the immediate / shamt is random so
    imm_i_type_o (:133) bits toggle. Shifts use instr[26:25]=00 and
    instr[31:27] in {00000, 01000} -- the only legal shift-imm encodings with RV32BNone
    (:362, :403-404).
    """
    stream = []
    for f3 in (0b000, 0b010, 0b011, 0b100, 0b110, 0b111):
        rd, rs1 = _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_i(OPC["OP_IMM"], f3, rd[i], rs1[i], rng.randint(-2048, 2047)))
    for f3, top5 in ((0b001, 0b00000), (0b101, 0b00000), (0b101, 0b01000)):  # slli/srli/srai
        rd, rs1 = _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rd[i], rs1[i],
                                  rng.randint(0, 31)))
    return stream


def build_load_store_port_sweep_stream(rng):
    """Target ibex_decoder.sv:293-310 (OPCODE_STORE: rf_ren_a_o=rf_ren_b_o=1, data_req_o=1,
    data_we_o=1, data_type_o 10/01/00 for sb/sh/sw) and :312-333 (OPCODE_LOAD: rf_ren_a_o=1,
    data_req_o=1, data_type_o 10/01/00, data_sign_extension_o=~instr[14] at :318);
    ALU side :776-795 (store: OP_B_IMM/IMM_B_S since instr[14]=0; load: OP_B_IMM/IMM_B_I).

    Plan bins: LB/LH/LW x {read_A, write} and SB/SH/SW x {read_A, read_B} x 32 regs.
    NOTE: the decoder never asserts rf_we for OPCODE_LOAD (:312-334 has no rf_we; Ibex
    writes load data back via the LSU path), and stores drive alu_op_b_mux_sel_o=OP_B_IMM
    although rf_ren_b_o=1 -- whether the load 'write' / store 'read_B' crosses are hit
    depends on which signals the coverage model samples for those ports.
    lbu/lhu (instr[14]=1) are included so data_sign_extension_o toggles. Each op sweeps
    rd/rs1 (or rs1/rs2) through permutations; random words hit a given (opcode, funct3)
    pair with p=1/1024.
    """
    stream = []
    for f3 in (0b000, 0b001, 0b010, 0b100, 0b101):          # lb lh lw lbu lhu
        rd, rs1 = _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rd[i], rs1[i], rng.randint(-2048, 2047)))
    for f3 in (0b000, 0b001, 0b010):                         # sb sh sw
        rs1, rs2 = _perm(rng), _perm(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1[i], rs2[i], rng.randint(-2048, 2047)))
    return stream


def build_op_imm_shift_space_stream(rng):
    """Target ibex_decoder.sv:360-396 (OP_IMM funct3=001 inner case on instr[31:27],
    incl. the 0_1100 sub-case on instr[26:20] at 376-392 and its default 391, the 0_0001
    instr[26] split 370-374, and default 394) and :398-441 (funct3=101: instr[26]=1 fsri
    arm 399-400, every instr[31:27] arm 402-438, incl. the runtime orc.b shamt check at
    :424 both ways). ALU side: :892 and :932-936 (incl. the 'neither SRL nor SRA' path).

    With RV32B=None every non-slli/srli/srai word here is illegal (only the
    illegal_instruction bin), but each walks a distinct case arm that a uniformly random
    word reaches with p ~ 1/1024 * 1/32 or less. Note :414-416 (Balanced/OTEarlGrey
    branches) and :433-434 (instr[26]=1 is impossible under the :399 else) are dead in
    this configuration; the rev8-shamt word below lands on :418.
    """
    op = OPC["OP_IMM"]
    stream = []
    r = lambda: rng.randint(0, 31)  # noqa: E731
    for top5 in range(32):                                   # funct3=001, every [31:27]
        stream.append(enc_ish(op, 0b001, top5, rng.randint(0, 1), rng.randint(0, 1), r(), r(), r()))
    for b26, b25 in ((0, 1), (1, 0), (1, 1)):                # slli with bad [26:25] (:362 -> 1)
        stream.append(enc_ish(op, 0b001, 0b00000, b26, b25, r(), r(), r()))
    stream.append(enc_ish(op, 0b001, 0b00001, 0, rng.randint(0, 1), r(), r(), r()))  # shfli, [26]=0 (:371)
    stream.append(enc_ish(op, 0b001, 0b00001, 1, rng.randint(0, 1), r(), r(), r()))  # [26]=1 (:373)
    subs = [0x00, 0x01, 0x02, 0x04, 0x05, 0x10, 0x11, 0x12, 0x18, 0x19, 0x1A]
    for sub in subs:                                         # clz..crc32c.w arms (:378-390)
        stream.append(enc_i(op, 0b001, r(), r(), (0b01100 << 7) | sub))
    others = [s for s in range(128) if s not in subs]
    for _ in range(4):                                       # 0_1100 default (:391)
        stream.append(enc_i(op, 0b001, r(), r(), (0b01100 << 7) | rng.choice(others)))
    for _ in range(8):                                       # funct3=101, instr[26]=1 (fsri, :399-400)
        stream.append(enc_ish(op, 0b101, r(), 1, rng.randint(0, 1), r(), r(), r()))
    for top5 in range(32):                                   # funct3=101, [26]=0, every [31:27]
        stream.append(enc_ish(op, 0b101, top5, 0, rng.randint(0, 1), r(), r(), r()))
    for top5 in (0b00000, 0b01000):                          # srli/srai with [25]=1 (:404 -> 1)
        stream.append(enc_ish(op, 0b101, top5, 0, 1, r(), r(), r()))
    stream.append(enc_ish(op, 0b101, 0b01101, 0, 0, r(), r(), 0b11000))   # rev8 shamt (-> :418)
    stream.append(enc_ish(op, 0b101, 0b00101, 0, 0, r(), r(), 0b00111))   # orc.b shamt (:424 true)
    stream.append(enc_ish(op, 0b101, 0b00101, 0, 0, r(), r(), 0b00110))   # gorci, :424 false (:427)
    stream.append(enc_ish(op, 0b101, 0b00001, 0, 0, r(), r(), r()))       # unshfli [26]=0 (:431-432)
    return stream


def build_op_m_and_bitmanip_space_stream(rng):
    """Target ibex_decoder.sv:512-551 (RV32M arms: multdiv_operator_o MULL/MULH/DIV/REM,
    multdiv_signed_mode_o 00/01/11) and :1096-1126 (mult_sel_o / div_sel_o = 1, hence
    mult_en_o / div_en_o at :1187-1188); plus every RV32B arm of the OP case
    (:468-509 -> illegal under RV32BNone; :1005-1093 arms entered, inner if false), the
    {instr[26], instr[13:12]}=={1,01} cmix/cmov/fsl/fsr branch (:451-452, :948-989),
    instr[26]=1 with other funct3 (:454 case -> default :552-554; ALU :948 true), and
    random unknown funct7 words for the defaults at :552-554 and :1129.

    M instructions are legal and write rd (ALU_ADD, OP_A_REG_A, OP_B_REG_B); whether
    they also land in the ADD op bin depends on whether the coverage model checks
    mult_sel_o/div_sel_o. Each arm needs an exact 10-bit (funct7,funct3) match.
    """
    op = OPC["OP"]
    r = lambda: rng.randint(0, 31)  # noqa: E731
    stream = []
    for f7, f3 in _R_M:
        for _ in range(4):
            stream.append(enc_r(op, f3, f7, r(), r(), r()))
    for f7, f3 in _R_B:
        stream.append(enc_r(op, f3, f7, r(), r(), r()))
    for f3, b in ((1, 0b11), (5, 0b11), (1, 0b10), (5, 0b10)):   # cmix cmov fsl fsr
        for _ in range(3):
            stream.append(enc_r4(op, f3, r(), b, r(), r(), r()))
    for f3 in (0, 2, 3, 4, 6, 7):                                # instr[26]=1, f3[1:0]!=01
        stream.append(enc_r4(op, f3, r(), rng.choice((0b10, 0b11)), r(), r(), r()))
    known = set(_R_ALU) | set(_R_B) | set(_R_M)
    n = 0
    while n < 16:                                                # unknown funct7 -> default
        f7, f3 = rng.randint(0, 127), rng.randint(0, 7)
        if (f7, f3) in known or ((f7 >> 1) & 1 and (f3 & 3) == 1):
            continue
        stream.append(enc_r(op, f3, f7, r(), r(), r()))
        n += 1
    return stream


def build_branch_jump_upper_stream(rng):
    """Target ibex_decoder.sv:241-287 (JAL / JALR / BRANCH in the main decoder, incl.
    JALR funct3!=0 illegal at 265-266 and BRANCH funct3 010/011 default at 282) and
    :694-760 (ALU side: bt_a/bt_b mux, alu_operator_o EQ/NE/LT/GE/LTU/GEU at 741-746 and
    the empty default 747), plus LUI/AUIPC (:340-346, :801-814, IMM_B_U / OP_A_CURRPC).

    JAL/JALR write rd (rf_we=BranchTargetALU=1 at :246/:259), LUI/AUIPC write rd, and
    branches read rs1/rs2, so they also feed the port bins. Random imm values toggle
    imm_b_type_o / imm_j_type_o / imm_u_type_o (:135-137).
    """
    r = lambda: rng.randint(0, 31)  # noqa: E731
    stream = []
    for f3 in (0, 1, 4, 5, 6, 7):
        for _ in range(4):
            stream.append(enc_b(OPC["BRANCH"], f3, r(), r(), rng.randint(-4096, 4095) & ~1))
    for f3 in (2, 3):                                            # illegal branch cond (:282)
        for _ in range(3):
            stream.append(enc_b(OPC["BRANCH"], f3, r(), r(), rng.randint(-4096, 4095) & ~1))
    for _ in range(16):
        stream.append(enc_j(OPC["JAL"], r(), rng.randint(-(1 << 20), (1 << 20) - 1) & ~1))
    for _ in range(16):
        stream.append(enc_i(OPC["JALR"], 0, r(), r(), rng.randint(-2048, 2047)))
    for f3 in range(1, 8):                                       # JALR funct3!=0 (:265-266)
        stream.append(enc_i(OPC["JALR"], f3, r(), r(), rng.randint(-2048, 2047)))
    for _ in range(16):
        stream.append(enc_u(OPC["LUI"], r(), rng.getrandbits(20)))
        stream.append(enc_u(OPC["AUIPC"], r(), rng.getrandbits(20)))
    return stream


def build_system_csr_miscmem_stream(rng):
    """Target ibex_decoder.sv:589-638 (SYSTEM: ECALL/EBREAK/MRET/DRET/WFI arms 593-608,
    default 610-611, rs1/rd!=0 check 615-616, CSR path 619-635 incl. rf_ren_a_o only for
    ~instr[14] at 624-626 and csr_illegal for funct3=100 at 632), the CSR operand fix-up
    :188-197 (CSRRS/CSRRC/CSRRSI/CSRRCI with rs1==0 -> csr_op_o=CSR_OP_READ), the
    SYSTEM ALU arm :1162-1179 (OP_A_IMM vs OP_A_REG_A), and MISC_MEM :563-587 /
    :1138-1150 (FENCE, FENCE.I with jump_set_o/icache_inval_o, default illegal).

    The SYSTEM priv arms need an exact 12-bit funct12 plus rs1=rd=0 (25 constrained bits),
    and the CSR fix-up needs rs1==0 together with funct3 in {2,3,6,7}.
    """
    sysop = OPC["SYSTEM"]
    r = lambda: rng.randint(0, 31)  # noqa: E731
    nz = lambda: rng.randint(1, 31)  # noqa: E731
    stream = []
    f12s = (0x000, 0x001, 0x302, 0x7B2, 0x105)
    for f12 in f12s:
        stream.append(enc_i(sysop, 0, 0, 0, f12))                 # clean priv instr
        stream.append(enc_i(sysop, 0, 0, nz(), f12))              # rs1 != 0 (:615)
        stream.append(enc_i(sysop, 0, nz(), 0, f12))              # rd  != 0 (:615)
    n = 0
    while n < 8:                                                  # unknown funct12 (:610)
        f12 = rng.getrandbits(12)
        if f12 in f12s:
            continue
        stream.append(enc_i(sysop, 0, 0, 0, f12))
        n += 1
    for f3 in range(1, 8):                                        # all CSR funct3 incl 100
        stream.append(enc_i(sysop, f3, r(), 0, rng.getrandbits(12)))      # rs1/uimm == 0
        for _ in range(3):
            stream.append(enc_i(sysop, f3, r(), nz(), rng.getrandbits(12)))
    for _ in range(3):
        stream.append(enc_i(OPC["MISC_MEM"], 0, r(), r(), rng.getrandbits(12)))  # fence
        stream.append(enc_i(OPC["MISC_MEM"], 1, r(), r(), rng.getrandbits(12)))  # fence.i
    for f3 in range(2, 8):                                        # MISC_MEM default (:583-584)
        stream.append(enc_i(OPC["MISC_MEM"], f3, r(), r(), rng.getrandbits(12)))
    return stream


def build_illegal_opcode_and_ls_size_stream(rng):
    """Target ibex_decoder.sv:639-641 (main opcode default -> illegal_insn), :1182 (ALU
    opcode default), :299-301 + :308 (STORE instr[14]=1 and size 2'b11 illegal; also the
    only way to take the false side of :781, OP_B_REG_B for a store) and :326-327 +
    :330-331 (LOAD lwu, f3=011 and f3=111 illegal).

    Only the 'illegal_instruction' bin, but this walks every one of the 117 undefined
    opcode[6:0] values once (random upper bits) and the malformed load/store sizes.
    """
    legal = set(OPC.values())
    r = lambda: rng.randint(0, 31)  # noqa: E731
    stream = []
    for opc in range(128):
        if opc in legal:
            continue
        # deliberately malformed: undefined major opcode -> ibex_decoder.sv:639 default arm
        stream.append((rng.getrandbits(25) << 7) | opc)
    for f3 in (3, 4, 5, 6, 7):                                    # store illegal sizes
        for _ in range(2):
            stream.append(enc_s(OPC["STORE"], f3, r(), r(), rng.randint(-2048, 2047)))
    for f3 in (3, 6, 7):                                          # ld f3=011, lwu, f3=111
        for _ in range(2):
            stream.append(enc_i(OPC["LOAD"], f3, r(), r(), rng.randint(-2048, 2047)))
    return stream


NEW_BUILDERS = [
    build_rtype_alu_port_sweep_stream,
    build_itype_alu_port_sweep_stream,
    build_load_store_port_sweep_stream,
    build_op_imm_shift_space_stream,
    build_op_m_and_bitmanip_space_stream,
    build_branch_jump_upper_stream,
    build_system_csr_miscmem_stream,
    build_illegal_opcode_and_ls_size_stream,
]



