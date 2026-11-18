You are the independent adversarial review pass for the draft report(s) below, produced by another agent that derived constrained-random stream builders for the Ibex instruction decoder (cocotb + Verilator coverage project). Re-derive and cross-check every claim -- do NOT rubber-stamp. You have NO context from whatever produced these drafts; treat them as unverified external submissions.

## Files to read yourself

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_decoder.sv, //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/rtl/ibex_pkg.sv   -- the DUT (verify every line citation)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py                                         -- the encoders (verify every encoding)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt                                        -- coverage plan description
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_streams.py                                     -- where the functions will be merged

Do NOT open: crt/generator.py, crt/func_coverage.py, profiles/, results/, llm_passes/, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy incl. test_max_coverage.py), rl-coverage/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text.

Harness facts: RV32B=RV32BNone, RV32M=RV32MFast, BranchTargetALU=1, instr_first_cycle_i=1, branch_taken_i=1, illegal_c_insn_i=0; one 32-bit word per stimulus, outputs sampled each time.

## What to check, for EVERY function

1. Does every cited ibex_decoder.sv line / signal exist and say what the draft claims?
2. Does every encoder call produce the instruction the comment says? Check field order and widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)) -- argument-order mistakes are the most likely bug.
3. Would the decoder actually decode the word as legal (or illegal, if intended) in THIS configuration (RV32BNone!) and drive the outputs the coverage plan samples?
4. Every "unreachable" claim: verify independently, CONFIRMED UNREACHABLE or DISPUTE.
5. Python correctness: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, no imports beyond what crt/llm_streams.py already provides.

## Draft(s) to review

# Pass 1 synthesis draft (isolated agent, from zero)

Bin structure inferred by the agent: 26 op bins + 96 port bins + 1 illegal + 1984 cross bins
(62 op/port pairs x 32 regs) = 2107.

## Finding: SUBI unreachable (65 bins)
SUBI needs alu_operator_o=ALU_SUB with alu_op_b_mux_sel_o=OP_B_IMM. ALU_SUB is only set at
ibex_decoder.sv:994 inside OPCODE_OP, where operand B is OP_B_REG_B (:946). OP_IMM (:821-941)
never selects ALU_SUB. Max reachable = 2042/2107 (96.9%).

## Unreachable RTL in this configuration (agent's claims)
- instr_first_cycle_i=1: JAL/JALR second-cycle arms :250/:263; :762-769 (also BranchTargetALU=1);
  use_rs3_d=0 else-arms :904/957/966/975/984 (also RV32B-gated).
- BranchTargetALU=1: :703-706, :725-728, :1151-1155.
- branch_taken_i=1: IMM_B_INCR_PC side of :753/:767.
- illegal_c_insn_i=0: :646.
- RV32E=0: :178-180 not generated, illegal_reg_rv32e tied 0.
- RV32B=RV32BNone: all RV32B != None ALU-side arms (:830-890, :897-930, :949-988, :1005-1093).
- Toggle: use_rs3, alu_multicycle_o, RV32B alu_operator_o values never toggle.

## Streams (reasoning)
1. rtype_alu_port_sweep (:447-465, :944-1002): 10 RV32I R ops x 32 words, rd/rs1/rs2 are
   independent permutations of 0..31 -> all 960 R cross bins per seed.
2. itype_alu_port_sweep (:348-362, :398-404, :816-936): 9 legal imm ops x 32, permuted rd/rs1
   -> 576 cross bins; shifts with [26:25]=00, top5 in {00000,01000}.
3. load_store_port_sweep (:293-329, :776-795): lb/lh/lw/lbu/lhu x permuted rd/rs1; sb/sh/sw x
   permuted rs1/rs2.
4. op_imm_shift_space: walks every funct3=001/101 shift-imm case arm (all illegal under
   RV32BNone except slli/srli/srai).
5. op_m_and_bitmanip_space: all 8 RV32M arms, all 34 RV32B R pairs, cmix/cmov/fsl/fsr,
   instr[26]=1 other funct3, 16 unknown funct7 values.
6. branch_jump_upper: 6 legal + 2 illegal branch conds, JAL, JALR f3=0 and !=0, LUI, AUIPC.
7. system_csr_miscmem: priv insns clean/dirty, unknown funct12, all CSR funct3 incl. 100,
   rs1=0 vs !=0 (CSR operand fix-up :188-197), fence/fence.i, MISC_MEM default.
8. illegal_opcode_and_ls_size: all 117 undefined opcodes, illegal store sizes, ld f3 011/110/111.

Integration notes from the agent: needs LEGAL_OPCODES imported from isa.py; helpers
_perm/_R_ALU/_R_B/_R_M must be pasted with the builders.

## Code
```python
import sys
sys.path.insert(0, "/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt")
from isa import enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4, OPC, LEGAL_OPCODES

# ---------------------------------------------------------------------------
# Shared helpers (rng drives every free field)
# ---------------------------------------------------------------------------
def _perm(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p


# RV32I R-type (funct7, funct3) -- ibex_decoder.sv:456-465 / 993-1002
_R_ALU = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b010), (0x00, 0b011), (0x00, 0b100),
          (0x00, 0b110), (0x00, 0b111), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101)]

# RV32B R-type pairs, all illegal with RV32B=None -- ibex_decoder.sv:468-509 / 1005-1093
_R_B = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4), (0x30, 1), (0x30, 5),
        (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7), (0x04, 4), (0x24, 4), (0x04, 7),
        (0x24, 1), (0x14, 1), (0x34, 1), (0x24, 5), (0x24, 7),
        (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5), (0x14, 2), (0x14, 4), (0x14, 6),
        (0x10, 1), (0x10, 5), (0x05, 1), (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]

_R_M = [(0x01, f3) for f3 in range(8)]   # ibex_decoder.sv:512-551 / 1096-1126


def build_rtype_alu_port_sweep_stream(rng):
    """Target ibex_decoder.sv:447-465 (OPCODE_OP legal RV32I arm: rf_ren_a_o=1,
    rf_ren_b_o=1, rf_we=1, illegal_insn=0) and :944-1002 (alu_op_a_mux_sel_o=OP_A_REG_A,
    alu_op_b_mux_sel_o=OP_B_REG_B, alu_operator_o = ADD/SUB/SLT/SLTU/XOR/OR/AND/SLL/SRL/SRA).

    Plan bins: the 10 register-register ops x {read_A, read_B, write} x 32 registers
    (960 cross bins). Each op gets 32 words where rd, rs1 and rs2 are three independent
    random permutations of 0..31, so every (op, port, reg) cross bin is hit exactly once
    per op. Unconstrained random needs opcode[6:0]=0110011 (1/128) AND one of 10 of the
    1024 (funct7,funct3) pairs -- about 1 in 13000 words per op -- so these crosses are
    essentially unreachable for it.
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

    Plan bins: ADDI/SLTI/SLTUI/XORI/ORI/ANDI/SLLI/SRLI/SRAI x {read_A, write} x 32 regs.
    rd and rs1 are independent permutations per op so each cross bin is hit; the
    immediate / shamt is random so imm_i_type_o (line 133) bits toggle both ways.
    Shifts are built with enc_ish and instr[26:25]=00 / top5 in {00000,01000} -- the only
    legal shift encodings in this config (lines 362, 403-404); random words almost never
    satisfy that 12-bit constraint.
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
    data_we_o=1, data_type_o 10/01/00 for sb/sh/sw) and :312-329 (OPCODE_LOAD: rf_ren_a_o=1,
    data_req_o=1, data_type_o 10/01/00, data_sign_extension_o=~instr[14]); ALU side
    :776-795 (store imm/reg b-mux, load IMM_B_I).

    Plan bins: LB/LH/LW x {read_A, write} and SB/SH/SW x {read_A, read_B} x 32 regs.
    Loads include lbu/lhu (instr[14]=1) so data_sign_extension_o toggles and line 318 is
    exercised both ways; each op sweeps rd/rs1 (or rs1/rs2) through permutations.
    Random words hit a given (opcode, funct3) pair with p=1/1024.
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
    arm 399-400, every instr[31:27] arm 402-438 incl. rev8/orc.b shamt checks 416/424).
    ALU side: :892 and :932-936 (incl. the implicit 'neither SRL nor SRA' path).

    With RV32B=None every non-slli/srli/srai word here is illegal (only the
    illegal_instruction bin), but each one walks a distinct case arm / ternary that a
    uniformly random word reaches with p ~ 1/1024 * 1/32 * ... -- this sweeps all 32
    top5 values for both funct3s and all bitmanip sub-codes deterministically.
    """
    op = OPC["OP_IMM"]
    stream = []
    r = lambda: rng.randint(0, 31)
    for top5 in range(32):                                   # funct3=001, every [31:27]
        stream.append(enc_ish(op, 0b001, top5, rng.randint(0, 1), rng.randint(0, 1), r(), r(), r()))
    for b26, b25 in ((0, 1), (1, 0), (1, 1)):                # slli with bad [26:25] (line 362 :1)
        stream.append(enc_ish(op, 0b001, 0b00000, b26, b25, r(), r(), r()))
    stream.append(enc_ish(op, 0b001, 0b00001, 0, rng.randint(0, 1), r(), r(), r()))  # shfl, 26=0 (371)
    stream.append(enc_ish(op, 0b001, 0b00001, 1, rng.randint(0, 1), r(), r(), r()))  # 26=1 (373)
    subs = [0x00, 0x01, 0x02, 0x04, 0x05, 0x10, 0x11, 0x12, 0x18, 0x19, 0x1A]
    for sub in subs:                                         # clz..crc32c.w arms (378-390)
        stream.append(enc_i(op, 0b001, r(), r(), (0b01100 << 7) | sub))
    for _ in range(4):                                       # 0_1100 default (391)
        sub = rng.choice([s for s in range(128) if s not in subs])
        stream.append(enc_i(op, 0b001, r(), r(), (0b01100 << 7) | sub))
    for _ in range(8):                                       # funct3=101, instr[26]=1 (fsri, 399)
        stream.append(enc_ish(op, 0b101, r(), 1, rng.randint(0, 1), r(), r(), r()))
    for top5 in range(32):                                   # funct3=101, [26]=0, every [31:27]
        stream.append(enc_ish(op, 0b101, top5, 0, rng.randint(0, 1), r(), r(), r()))
    for top5 in (0b00000, 0b01000):                          # srli/srai with [25]=1 (404 :1)
        stream.append(enc_ish(op, 0b101, top5, 0, 1, r(), r(), r()))
    stream.append(enc_ish(op, 0b101, 0b01101, 0, 0, r(), r(), 0b11000))   # rev8 shamt (416)
    stream.append(enc_ish(op, 0b101, 0b00101, 0, 0, r(), r(), 0b00111))   # orc.b shamt (424)
    stream.append(enc_ish(op, 0b101, 0b00101, 0, 0, r(), r(), 0b00110))   # gorci else (427)
    stream.append(enc_ish(op, 0b101, 0b00001, 0, 0, r(), r(), r()))       # unshfl 26=0 (432)
    return stream


def build_op_m_and_bitmanip_space_stream(rng):
    """Target ibex_decoder.sv:512-551 (RV32M arms: multdiv_operator_o MULL/MULH/DIV/REM,
    multdiv_signed_mode_o 00/01/11) and :1096-1126 (mult_sel_o / div_sel_o = 1, hence
    mult_en_o / div_en_o at 1187-1188); plus every RV32B arm of the OP case
    (:468-509 -> illegal under RV32BNone; :1005-1093 inner if false), the
    {instr[26], instr[13:12]}=={1,01} cmix/cmov/fsl/fsr branch (:451-452, :948-989),
    instr[26]=1 with other funct3 (falls to :454 default 553), and random unknown funct7
    words for the defaults at :552-554 and :1129.

    M instructions are legal, write rd, but have mult_sel_o/div_sel_o=1 so they do NOT
    count as ALU-op bins -- they exist for the multdiv output toggles and the M arms.
    Each arm needs an exact 10-bit (funct7,funct3) match that random words essentially
    never produce.
    """
    op = OPC["OP"]
    r = lambda: rng.randint(0, 31)
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
    :694-770 (ALU side: bt_a/bt_b mux, alu_operator_o EQ/NE/LT/GE/LTU/GEU at 741-746 and
    the empty default 747), plus LUI/AUIPC (:340-346, :801-814, IMM_B_U / OP_A_CURRPC).

    These words write rd (JAL/JALR rf_we=BranchTargetALU=1, LUI/AUIPC) and read rs1/rs2
    (branches) so they also feed the type-2 port bins, but none qualify as ALU-op bins
    (op_a is CURRPC/IMM, or rf_we=0). Random imm values toggle imm_b_type_o /
    imm_j_type_o / imm_u_type_o (lines 135-137).
    """
    r = lambda: rng.randint(0, 31)
    stream = []
    for f3 in (0, 1, 4, 5, 6, 7):
        for _ in range(4):
            stream.append(enc_b(OPC["BRANCH"], f3, r(), r(), rng.randint(-4096, 4095) & ~1))
    for f3 in (2, 3):                                            # illegal branch cond (282)
        for _ in range(3):
            stream.append(enc_b(OPC["BRANCH"], f3, r(), r(), rng.randint(-4096, 4095) & ~1))
    for _ in range(16):
        stream.append(enc_j(OPC["JAL"], r(), rng.randint(-(1 << 20), (1 << 20) - 1) & ~1))
    for _ in range(16):
        stream.append(enc_i(OPC["JALR"], 0, r(), r(), rng.randint(-2048, 2047)))
    for f3 in range(1, 8):                                       # JALR funct3!=0 (265-266)
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
    :1138-1159 (FENCE, FENCE.I with jump_set_o/icache_inval_o, default illegal).

    The SYSTEM priv arms need an exact 12-bit funct12 plus rs1=rd=0 (25 constrained bits),
    and the CSR fix-up needs rs1==0 together with funct3 in {2,3,6,7}; random words reach
    neither in practice.
    """
    sysop = OPC["SYSTEM"]
    r = lambda: rng.randint(0, 31)
    nz = lambda: rng.randint(1, 31)
    stream = []
    f12s = (0x000, 0x001, 0x302, 0x7B2, 0x105)
    for f12 in f12s:
        stream.append(enc_i(sysop, 0, 0, 0, f12))                 # clean priv instr
        stream.append(enc_i(sysop, 0, 0, nz(), f12))              # rs1 != 0 (615)
        stream.append(enc_i(sysop, 0, nz(), 0, f12))              # rd  != 0 (615)
    n = 0
    while n < 8:                                                  # unknown funct12 (610)
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
    for f3 in range(2, 8):                                        # MISC_MEM default (583-584)
        stream.append(enc_i(OPC["MISC_MEM"], f3, r(), r(), rng.getrandbits(12)))
    return stream


def build_illegal_opcode_and_ls_size_stream(rng):
    """Target ibex_decoder.sv:639-641 (main opcode default -> illegal_insn), :1182 (ALU
    opcode default), :299-301 + :308 (STORE instr[14]=1 and size 2'b11 illegal) and
    :326-327 + :330-331 (LOAD lwu, f3=011 and f3=111 illegal).

    Only the 'illegal_instruction' bin, but this walks every one of the 117 undefined
    opcode[6:0] values once (random upper bits), so opcode-related toggle/branch
    coverage of both unique-case defaults is complete, and the malformed load/store
    sizes that random words rarely combine with the right opcode.
    """
    r = lambda: rng.randint(0, 31)
    stream = []
    for opc in range(128):
        if opc in LEGAL_OPCODES:
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

if __name__ == "__main__":
    import random
    for b in NEW_BUILDERS:
        for s in range(3):
            w = b(random.Random(s))
            assert 16 <= len(w) <= 512, (b.__name__, len(w))
            assert all(0 <= x < (1 << 32) for x in w)
        print(b.__name__, len(w))
```


## Output

Per function: CONFIRMED, NEEDS FIX (exact fix + corrected code) or REJECT. Per unreachable claim: CONFIRMED UNREACHABLE or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and a final line `NEW_BUILDERS = [...]`, ready to append to //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/llm_streams.py as-is. Do not edit any file in the repository.

