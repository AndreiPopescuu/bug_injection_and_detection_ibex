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

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run3 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
def _port_perms(rng):
    """Three independent shuffles of 0..31 so that, over 32 words, every
    register appears exactly once as rd, once as rs1 and once as rs2."""
    out = []
    for _ in range(3):
        p = list(range(32))
        rng.shuffle(p)
        out.append(p)
    return out


def build_rtype_op_x_port_sweep_stream(rng):
    """Targets plan BIN types 1/2/3 for the 10 register-register ops
    (ADD SUB AND OR XOR SLL SRL SRA SLT SLTU) x {read_A, read_B, write} x 32
    registers = 960 cross bins.

    RTL: ibex_decoder.sv lines 447-450 (OPCODE_OP: rf_ren_a_o, rf_ren_b_o,
    rf_we=1), 454-465 (legal RV32I funct7/funct3 pairs), 164/168/171-172
    (rf_raddr_a_o=instr[19:15], rf_raddr_b_o=instr[24:20], rf_waddr_o=
    instr[11:7]), 991-1002 (alu_operator_o ADD/SUB/SLT/SLTU/XOR/OR/AND/SLL/
    SRL/SRA).

    Why directed: a random word is an OP-opcode word with probability 2^-7,
    and only 10 of 1024 funct7/funct3 combos are legal RV32I ALU ops, so a
    specific (op, port, register) cross bin is hit at roughly 1 in 2^7*1024*32
    random words. Here each op gets 32 words where rd, rs1 and rs2 are each a
    full permutation of x0..x31, closing all 96 cross bins of that op."""
    ops = [(0x00, 0b000), (0x20, 0b000), (0x00, 0b111), (0x00, 0b110),
           (0x00, 0b100), (0x00, 0b001), (0x00, 0b101), (0x20, 0b101),
           (0x00, 0b010), (0x00, 0b011)]   # add sub and or xor sll srl sra slt sltu
    rng.shuffle(ops)
    stream = []
    for f7, f3 in ops:
        rd_p, rs1_p, rs2_p = _port_perms(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rd_p[i], rs1_p[i], rs2_p[i]))
    return stream


def build_itype_op_x_port_sweep_stream(rng):
    """Targets plan bins for the register-immediate ops ADDI, SUBI (addi with
    a negative immediate), ANDI, ORI, XORI, SLTI, SLTUI(sltiu), SLLI, SRLI,
    SRAI x {read_A, write} x 32 registers (~640 cross bins).

    RTL: ibex_decoder.sv lines 348-358 (OPCODE_OP_IMM: rf_ren_a_o=1, rf_we=1,
    legal funct3 000/010/011/100/110/111), 360-362 (slli: instr[31:25]==0),
    398-404 (srli/srai: instr[31:27] in {00000,01000}, instr[26:25]==0),
    816-828 / 892 / 932-936 (alu_operator_o ADD/SLT/SLTU/XOR/OR/AND/SLL/SRL/
    SRA, alu_op_b_mux_sel_o=OP_B_IMM, imm_b_mux_sel_o=IMM_B_I).

    Why directed: random OP_IMM words are 1/128 of the space; shift-immediates
    additionally need instr[31:25] to be exactly 0000000/0100000 (1/64), and
    covering each register on each port per op needs dozens of hits. ADDI is
    emitted twice -- once with imm >= 0 and once with imm < 0 -- because the
    plan lists SUBI separately and the only RV32 encoding that can represent it
    is addi with a negative immediate."""
    groups = [
        ("addi_pos", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b000, rd, rs1, rng.randint(0, 2047))),
        ("addi_neg", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b000, rd, rs1, rng.randint(-2048, -1))),
        ("slti",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b010, rd, rs1, rng.randint(-2048, 2047))),
        ("sltiu", lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b011, rd, rs1, rng.randint(-2048, 2047))),
        ("xori",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b100, rd, rs1, rng.randint(-2048, 2047))),
        ("ori",   lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b110, rd, rs1, rng.randint(-2048, 2047))),
        ("andi",  lambda rd, rs1: enc_i(OPC["OP_IMM"], 0b111, rd, rs1, rng.randint(-2048, 2047))),
        ("slli",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b001, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))),
        ("srli",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b101, 0b00000, 0, 0, rd, rs1, rng.randint(0, 31))),
        ("srai",  lambda rd, rs1: enc_ish(OPC["OP_IMM"], 0b101, 0b01000, 0, 0, rd, rs1, rng.randint(0, 31))),
    ]
    rng.shuffle(groups)
    stream = []
    for _name, mk in groups:
        rd_p, rs1_p, _ = _port_perms(rng)
        for i in range(32):
            stream.append(mk(rd_p[i], rs1_p[i]))
    return stream


def build_load_store_op_x_port_sweep_stream(rng):
    """Targets plan bins for LB/LH/LW x {read_A, write} and SB/SH/SW x
    {read_A, read_B} x 32 registers (~384 cross bins), plus lbu/lhu for the
    data_sign_extension_o=0 side.

    RTL: ibex_decoder.sv lines 293-309 (OPCODE_STORE: rf_ren_a_o, rf_ren_b_o,
    data_req_o, data_we_o, data_type_o 10/01/00), 312-329 (OPCODE_LOAD:
    rf_ren_a_o, data_req_o, data_sign_extension_o=~instr[14], data_type_o),
    776-795 (alu_operator_o=ALU_ADD, imm_b_mux_sel_o IMM_B_S / IMM_B_I).

    Why directed: LOAD and STORE are each 1/128 of random words and only 5/8
    resp. 3/8 of their funct3 values are legal; filling 32 registers on every
    port for 6 ops needs systematic register permutations. Stores have no
    write port in the plan; loads have no read_B (rf_ren_b_o stays 0)."""
    stream = []
    ld = [0b000, 0b001, 0b010]
    st = [0b000, 0b001, 0b010]
    for f3 in ld:
        rd_p, rs1_p, _ = _port_perms(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rd_p[i], rs1_p[i],
                                rng.randint(-2048, 2047)))   # lb/lh/lw
    for f3 in st:
        _, rs1_p, rs2_p = _port_perms(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1_p[i], rs2_p[i],
                                rng.randint(-2048, 2047)))   # sb/sh/sw
    for f3 in (0b100, 0b101):                                 # lbu/lhu
        for _ in range(8):
            stream.append(enc_i(OPC["LOAD"], f3, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(-2048, 2047)))
    return stream


def build_control_flow_and_upper_imm_stream(rng):
    """Code-coverage stream for the non-plan legal opcodes: LUI, AUIPC, JAL,
    JALR, all 6 branch conditions, FENCE and FENCE.I, with random immediates
    so the imm_*_type_o outputs toggle every bit.

    RTL: ibex_decoder.sv lines 241-252 (JAL: jump_in_dec_o, jump_set_o,
    rf_we=BranchTargetALU), 254-270 (JALR), 272-287 (BRANCH: branch_in_dec_o,
    rf_ren_a/b), 340-346 (LUI/AUIPC rf_we), 563-582 (MISC_MEM: FENCE nop,
    FENCE.I jump_set_o + icache_inval_o), 694-698 / 716-720 / 738-754
    (bt_a_mux_sel_o, bt_b_mux_sel_o IMM_B_J / IMM_B_I / IMM_B_B, alu_operator_o
    EQ/NE/LT/GE/LTU/GEU), 801-814 (IMM_B_U), 1138-1150 (FENCE ALU / FENCE.I
    IMM_B_INCR_PC), 133-137 (immediate outputs).

    Why directed: each of these opcodes is 1/128 of random words and the plan
    does not reward them, so a plan-driven generator would never emit them;
    icache_inval_o and the branch-condition ALU operators are only reachable
    here. Immediates alternate between rng values and all-ones/all-zeros
    extremes so every immediate output bit toggles both ways."""
    stream = []

    def imm_pick(bits, signed=True):
        r = rng.random()
        if r < 0.15:
            return 0
        if r < 0.30:
            return -1 if signed else (1 << bits) - 1
        if signed:
            return rng.randint(-(1 << (bits - 1)), (1 << (bits - 1)) - 1)
        return rng.randint(0, (1 << bits) - 1)

    for _ in range(8):
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31), imm_pick(20, False)))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31), imm_pick(20, False)))
        stream.append(enc_j(OPC["JAL"], rng.randint(0, 31), imm_pick(21) & ~1))
        stream.append(enc_i(OPC["JALR"], 0b000, rng.randint(0, 31),
                            rng.randint(0, 31), imm_pick(12)))
    for f3 in (0b000, 0b001, 0b100, 0b101, 0b110, 0b111):     # beq bne blt bge bltu bgeu
        for _ in range(5):
            stream.append(enc_b(OPC["BRANCH"], f3, rng.randint(0, 31),
                                rng.randint(0, 31), imm_pick(13) & ~1))
    for _ in range(4):
        stream.append(enc_i(OPC["MISC_MEM"], 0b000, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(-2048, 2047)))  # fence
        stream.append(enc_i(OPC["MISC_MEM"], 0b001, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(-2048, 2047)))  # fence.i
    rng.shuffle(stream)
    return stream


def build_system_csr_stream(rng):
    """Code-coverage stream for OPCODE_SYSTEM: ecall/ebreak/mret/dret/wfi
    (legal with rs1=rd=0, illegal otherwise), unknown funct12 (illegal), and
    all CSR funct3 values including the illegal funct3=100, plus
    CSRRS/CSRRC(I) with rs1/uimm == 0 to trigger the csr_op_o -> CSR_OP_READ
    override.

    RTL: ibex_decoder.sv lines 589-617 (ecall_insn_o, ebrk_insn_o,
    mret_insn_o, dret_insn_o, wfi_insn_o, default illegal, rs1/rd != 0
    illegal), 618-636 (csr_access_o, rf_wdata_sel_o=RF_WD_CSR, rf_ren_a_o
    for ~instr[14], csr_op WRITE/SET/CLEAR, csr_illegal for funct3=100),
    188-197 (csr_op_o override when rs1==0), 1162-1179 (imm_a_mux_sel_o=
    IMM_A_Z, alu_op_a_mux_sel_o OP_A_IMM vs OP_A_REG_A).

    Why directed: the 5 privileged words need a fixed 25-bit pattern (prob
    2^-25 each from random words); the csr_op_o override needs funct3 in
    {010,011,110,111} AND rs1 == 0 (1/32 of SYSTEM words)."""
    stream = []
    f12s = [0x000, 0x001, 0x302, 0x7B2, 0x105]
    for f12 in f12s:
        for _ in range(3):
            stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))      # legal priv
        stream.append(enc_i(OPC["SYSTEM"], 0b000, rng.randint(1, 31), 0, f12))   # rd!=0 -> illegal
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, rng.randint(1, 31), f12))   # rs1!=0 -> illegal
    for _ in range(6):
        f12 = rng.randint(0, 4095)
        if f12 in f12s:
            f12 ^= 0x800
        stream.append(enc_i(OPC["SYSTEM"], 0b000, 0, 0, f12))           # unknown funct12
    for f3 in (0b001, 0b010, 0b011, 0b101, 0b110, 0b111):
        for _ in range(4):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31),
                                rng.randint(1, 31), rng.randint(0, 4095)))
        for _ in range(2):
            stream.append(enc_i(OPC["SYSTEM"], f3, rng.randint(0, 31), 0,
                                rng.randint(0, 4095)))                   # rs1/uimm == 0
    for _ in range(4):
        stream.append(enc_i(OPC["SYSTEM"], 0b100, rng.randint(0, 31),
                            rng.randint(0, 31), rng.randint(0, 4095)))   # funct3=100 illegal CSR
    rng.shuffle(stream)
    return stream


def build_mul_div_stream(rng):
    """Code-coverage stream for RV32M (RV32MFast decodes all 8 ops).

    RTL: ibex_decoder.sv lines 512-551 (multdiv_operator_o MULL/MULH/DIV/REM,
    multdiv_signed_mode_o 00/01/11), 1096-1126 (mult_sel_o / div_sel_o,
    alu_operator_o=ALU_ADD), 1187-1188 (mult_en_o, div_en_o).

    Why directed: needs opcode OP and funct7 == 0000001 exactly (1/128 * 1/128
    of random words); the plan does not reward M ops so plan-driven streams
    never produce them, yet mult_en_o/div_en_o/multdiv_* are only driven here."""
    stream = []
    for f3 in range(8):   # mul mulh mulhsu mulhu div divu rem remu
        for _ in range(4):
            stream.append(enc_r(OPC["OP"], f3, 0b0000001, rng.randint(0, 31),
                                rng.randint(0, 31), rng.randint(0, 31)))
    rng.shuffle(stream)
    return stream


def build_illegal_encodings_stream(rng):
    """Code-coverage stream for every illegal_insn branch reachable with
    RV32B=None and the side inputs tied as given.

    RTL: ibex_decoder.sv lines 265-267 (JALR funct3!=0), 282 (BRANCH funct3
    010/011), 299-301 + 308 (STORE instr[14] / size 11), 326-327 (LWU),
    330-332 (LOAD size 11), 362 (slli with instr[26:25]!=0), 363-394 (OP_IMM
    funct3=001 B-ext top5 values sloi/bclri/bseti/binvi/shfl/clz-group and
    default; all illegal under RV32BNone), 399-400 (fsri, instr[26]=1),
    402-438 (OP_IMM funct3=101 B-ext top5 values and default, srli/srai with
    instr[25]=1), 451-452 (OP cmix/cmov/fsl/fsr form), 467-509 (Zba/Zbb/Zbs/
    Zbf/Zbp/Zbc/Zbe funct7/funct3 pairs, illegal), 552-554 (OP default),
    583-585 (MISC_MEM funct3 other), 639-641 (unknown opcode), 654-662
    (illegal masking of rf_we/data_req/jump/branch/csr), 1187-1188.

    Why directed: each illegal sub-case requires a specific opcode plus a
    specific funct pattern; random words mostly land in the outer default
    (bad opcode, line 639-641) and almost never reach the inner default arms
    or the B-extension case items."""
    stream = []
    R = lambda: rng.randint(0, 31)
    I12 = lambda: rng.randint(-2048, 2047)
    # JALR funct3 != 0
    for _ in range(2):
        stream.append(enc_i(OPC["JALR"], rng.randint(1, 7), R(), R(), I12()))
    # BRANCH funct3 010 / 011
    for f3 in (0b010, 0b011):
        stream.append(enc_b(OPC["BRANCH"], f3, R(), R(), rng.randint(-4096, 4095) & ~1))
    # STORE instr[14]=1 and size 11
    for f3 in (0b011, 0b100, 0b101, 0b110, 0b111):
        stream.append(enc_s(OPC["STORE"], f3, R(), R(), I12()))
    # LOAD lwu (110) and size 11 (011, 111)
    for f3 in (0b110, 0b011, 0b111):
        stream.append(enc_i(OPC["LOAD"], f3, R(), R(), I12()))
    # OP_IMM funct3=001 variants
    for top5 in (0b00000, 0b00100, 0b01001, 0b00101, 0b01101, 0b00001, 0b01100,
                 rng.choice([0b00010, 0b00011, 0b10000, 0b11111, 0b01000])):
        b26, b25 = rng.randint(0, 1), rng.randint(0, 1)
        if top5 == 0b00000 and b26 == 0 and b25 == 0:
            b25 = 1                                     # make slli illegal
        stream.append(enc_ish(OPC["OP_IMM"], 0b001, top5, b26, b25, R(), R(), R()))
    for f12 in (0x600, 0x601, 0x602, 0x604, 0x605, 0x610, 0x611, 0x612,
                0x618, 0x619, 0x61A, 0x603):           # clz-group (+ default 0x603)
        stream.append(enc_i(OPC["OP_IMM"], 0b001, R(), R(), f12))
    stream.append(enc_ish(OPC["OP_IMM"], 0b001, 0b00001, 1, 0, R(), R(), R()))  # shfl-form, instr[26]=1
    # OP_IMM funct3=101 variants
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, R(), 1, rng.randint(0, 1), R(), R(), R()))  # fsri
    for top5 in (0b00100, 0b01100, 0b01001, 0b01101, 0b00101, 0b00001,
                 rng.choice([0b00010, 0b10000, 0b11111, 0b00110])):
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, rng.randint(0, 1), R(), R(), R()))
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b00101, 0, 0, R(), R(), 0b00111))  # orc.b shamt
    stream.append(enc_ish(OPC["OP_IMM"], 0b101, 0b01101, 0, 0, R(), R(), 0b11000))  # rev8 shamt
    for top5 in (0b00000, 0b01000):                      # srli/srai with instr[25]=1
        stream.append(enc_ish(OPC["OP_IMM"], 0b101, top5, 0, 1, R(), R(), R()))
    # OP: ternary form ({instr[26], instr[13:12]} == 1,01)
    for f3, b in ((0b001, 0b11), (0b101, 0b11), (0b001, 0b10), (0b101, 0b10)):
        stream.append(enc_r4(OPC["OP"], f3, R(), b, R(), R(), R()))
    # OP: all B-extension funct7/funct3 pairs (illegal under RV32BNone)
    b_pairs = [(0x10, 2), (0x10, 4), (0x10, 6), (0x20, 7), (0x20, 6), (0x20, 4),
               (0x30, 1), (0x30, 5), (0x05, 4), (0x05, 6), (0x05, 5), (0x05, 7),
               (0x04, 4), (0x24, 4), (0x04, 7), (0x24, 1), (0x14, 1), (0x34, 1),
               (0x24, 5), (0x24, 7), (0x34, 5), (0x14, 5), (0x04, 1), (0x04, 5),
               (0x14, 2), (0x14, 4), (0x14, 6), (0x10, 1), (0x10, 5), (0x05, 1),
               (0x05, 2), (0x05, 3), (0x24, 6), (0x04, 6)]
    for f7, f3 in b_pairs:
        stream.append(enc_r(OPC["OP"], f3, f7, R(), R(), R()))
    # OP default: funct7 not in any table (keep instr[26]=0)
    for _ in range(4):
        f7 = rng.choice([0x08, 0x11, 0x40, 0x41, 0x48, 0x60])
        stream.append(enc_r(OPC["OP"], rng.randint(0, 7), f7, R(), R(), R()))
    stream.append(enc_r(OPC["OP"], 0b001, 0x20, R(), R(), R()))  # sub-funct7 with sll funct3
    # MISC_MEM funct3 other
    for _ in range(3):
        stream.append(enc_i(OPC["MISC_MEM"], rng.randint(2, 7), R(), R(), I12()))
    # Unknown major opcodes (incl. 16-bit compressed quadrants and custom-*)
    bad = [op for op in range(128) if op not in LEGAL_OPCODES]
    for _ in range(10):
        op = rng.choice(bad)
        stream.append(enc_r(op, rng.randint(0, 7), rng.randint(0, 127), R(), R(), R()))
    rng.shuffle(stream)
    return stream


def build_field_toggle_stream(rng):
    """Toggle-coverage stream: legal ALU / load / store words whose rd, rs1,
    rs2 fields and immediate bits walk single-one and single-zero patterns,
    so every bit of rf_raddr_a_o, rf_raddr_b_o, rf_waddr_o, zimm_rs1_type_o
    and imm_{i,s,b,u,j}_type_o goes 0->1->0.

    RTL: ibex_decoder.sv lines 133-140 (immediate / zimm outputs, all
    combinational on instr bits), 164-172 (register address outputs).

    Why directed: Verilator toggle coverage needs each output bit to see both
    transitions between consecutive samples; a walking-ones / walking-zeros
    pattern guarantees it in a few dozen words, whereas plan-driven sweeps
    keep immediates in narrow ranges and never alternate them."""
    stream = []
    for b in range(5):
        one = 1 << b
        zero = 31 ^ one
        stream.append(enc_r(OPC["OP"], 0b000, 0x00, one, one, one))
        stream.append(enc_r(OPC["OP"], 0b000, 0x00, zero, zero, zero))
    for b in range(12):
        imm = 1 << b
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rng.randint(0, 31), rng.randint(0, 31), imm))
        stream.append(enc_s(OPC["STORE"], 0b010, rng.randint(0, 31), rng.randint(0, 31), imm ^ 0xFFF))
    for b in range(20):
        stream.append(enc_u(OPC["LUI"], rng.randint(0, 31), 1 << b))
        stream.append(enc_u(OPC["AUIPC"], rng.randint(0, 31), ((1 << 20) - 1) ^ (1 << b)))
    return stream


NEW_BUILDERS = [
    build_rtype_op_x_port_sweep_stream,
    build_itype_op_x_port_sweep_stream,
    build_load_store_op_x_port_sweep_stream,
    build_control_flow_and_upper_imm_stream,
    build_system_csr_stream,
    build_mul_div_stream,
    build_illegal_encodings_stream,
    build_field_toggle_stream,
]
```

## Reasoning per stream

**How I read the plan:** There are 26 operations and 3 ports per register. Bin type 1 has 26 bins and bin type 2 has 96 (32 registers x 3 ports). Bin type 3 crosses each operation with the ports it can actually use: R-type uses A, B and write (10 x 3 x 32 = 960), the I-type ALU ops use A and write (10 x 2 x 32 = 640), loads use A and write (192), and stores use A and B (192). That adds up to 2106, so the 2107th bin is probably a catch-all or "other" bin. RV32 has no SUBI or SLTUI instruction. My guess is that the plan's model maps SUBI to addi with a negative immediate and SLTUI to sltiu. If it uses another mapping, SUBI may not be reachable at all. I have not simulated anything yet, so all of this is unverified.

1. **rtype_op_x_port_sweep (320 words):** For each of the 10 RV32I R-type ops, I draw rd, rs1 and rs2 from independent permutations of x0..x31. One call fills all 960 R-type cross bins, and also every type-1 and type-2 bin for these ops. I checked this offline: one seed gives exactly 960 distinct (op, port, register) tuples. Random words almost never land on these, because each bin needs opcode OP, one of 10/1024 funct7/funct3 pairs and a specific register.
2. **itype_op_x_port_sweep (320 words):** The same permutation trick for the 10 I-type operations. ADDI is split into a non-negative immediate group and a negative immediate group (the latter for SUBI). Shift-immediates set instr[31:25] exactly (lines 360-362 and 398-404).
3. **load_store_op_x_port_sweep (208 words):** LB/LH/LW get rd and rs1 permutations, and SB/SH/SW get rs1 and rs2 permutations. lbu/lhu are added so that `data_sign_extension_o` = 0 is exercised (line 318).
4. **control_flow_and_upper_imm (70 words):** The plan does not score LUI, AUIPC, JAL, JALR, the 6 branch types, FENCE or FENCE.I, but line and branch coverage needs them. This includes `icache_inval_o`, `jump_set_o`, the ALU_EQ..GEU operators and the bt_*_mux settings. Immediates are biased toward 0, all-ones and random values so the immediate outputs toggle.
5. **system_csr (71 words):** Covers the 5 privileged instructions, both legal and illegal (rd or rs1 nonzero), plus an unknown funct12. It covers all CSR funct3 values including the illegal 100, and CSRRS/CSRRC(I) with rs1 = 0 to hit the `csr_op_o` override at lines 193-196.
6. **mul_div (32 words):** All 8 RV32M ops. These are the only words that drive `mult_en_o`, `div_en_o`, `multdiv_operator_o` and `multdiv_signed_mode_o`.
7. **illegal_encodings (about 101 words):** One encoding per reachable illegal arm in the main decoder: bad JALR/BRANCH/LOAD/STORE funct3 values, every B-extension case item in OP_IMM and OP (all illegal under RV32BNone), the ternary-form check at line 451, the OP default, bad MISC_MEM funct3 values and unknown opcodes. This also exercises the illegal-masking block at lines 654-662.
8. **field_toggle (74 words):** Walking ones and zeros on the register fields, the I/S immediates and the U immediate, to toggle every bit of `rf_raddr_*`, `rf_waddr_o`, `zimm_rs1_type_o` and `imm_*_type_o`.

## Code that cannot be reached in this configuration (no stream written)
- **Tied side inputs (`instr_first_cycle_i`=1, `branch_taken_i`=1, `illegal_c_insn_i`=0):**
  - Lines 248-251 and 261-264 (JAL/JALR second cycle) cannot be reached.
  - With BranchTargetALU=1, lines 701-706, 723-728 and 762-768 (two-cycle ALU paths) cannot be reached either.
  - Line 1151-1156 (FENCE.I without the BTALU) cannot be reached.
  - `bt_b_mux_sel_o` = IMM_B_INCR_PC for branches (line 753) is unreachable.
  - Lines 645-646 (`illegal_c_insn_i`) are unreachable.
- **RV32B=None:** All the B-extension ALU-operator arms (lines 830-890, 897-930 and 948-989) and the `use_rs3`/`alu_multicycle_o` = 1 assignments are dead code. `alu_multicycle_o` and `use_rs3_d` stay 0, and so does `rf_raddr_a_o` = rs3.
- **RV32E=0:** The `illegal_reg_rv32e` logic (lines 178-180) is dead code.

These words still help: they reach the illegal arms of the main decoder.

Scratch copy of the code: `C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/B_run3/builders.py`. I checked it against isa.py over 5 seeds: every stream has 16-512 words, and every word is a valid 32-bit value.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
