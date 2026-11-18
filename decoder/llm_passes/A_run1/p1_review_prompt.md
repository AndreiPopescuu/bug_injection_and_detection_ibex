You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim -- do not rubber-stamp.

Do NOT open: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, rtl/ (no RTL in this condition), any other Ibex source.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Files you may read

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims: check argument order and field widths in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py yourself (e.g. enc_i(op, f3, rd, rs1, imm), enc_s(op, f3, rs1, rs2, imm), enc_r(op, f3, f7, rd, rs1, rs2)). Argument-order mistakes are the most likely bug.
2. The words are legal (or illegal, when intended) for this configuration and plausibly hit the claimed coverage goal.
3. Every "cannot be hit" claim: CONFIRMED or DISPUTE, with your reasoning.
4. Python: returns list[int] of 32-bit values, 16..512 words, uses rng for free fields, defines any helper it uses, no imports (OPC and the enc_* functions are provided).

You may run Python under WSL for checks: write scratch files under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run1 and run `MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 <the /mnt/c/... path of that file>`; to import the encoders, add /home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt to sys.path and `from isa import *`.

## Draft to review

```python
def _perm32(rng):
    p = list(range(32))
    rng.shuffle(p)
    return p

_R_OPS = [  # (name, funct3, funct7)
    ("add", 0b000, 0x00), ("sub", 0b000, 0x20), ("sll", 0b001, 0x00),
    ("slt", 0b010, 0x00), ("sltu", 0b011, 0x00), ("xor", 0b100, 0x00),
    ("srl", 0b101, 0x00), ("sra", 0b101, 0x20), ("or", 0b110, 0x00),
    ("and", 0b111, 0x00),
]
_I_ALU_OPS = [  # (name, funct3)
    ("addi", 0b000), ("slti", 0b010), ("sltiu", 0b011),
    ("xori", 0b100), ("ori", 0b110), ("andi", 0b111),
]
_SH_OPS = [  # (name, funct3, instr[31:27])
    ("slli", 0b001, 0b00000), ("srli", 0b101, 0b00000), ("srai", 0b101, 0b01000),
]
_LOADS = [("lb", 0b000), ("lh", 0b001), ("lw", 0b010)]
_STORES = [("sb", 0b000), ("sh", 0b001), ("sw", 0b010)]


def _rand_imm12(rng):
    # mix corner values and uniform values
    if rng.random() < 0.25:
        return rng.choice([0, 1, -1, 2047, -2048])
    return rng.randint(-2048, 2047)


def build_rtype_port_cross_stream(rng):
    """Targets BIN types 1/2/3 for the 10 register-register ops
    (ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT, SLTU) x {read_A, read_B, write}
    x 32 registers (960 cross bins). Uses OP opcode 0x33 with funct7 0x00/0x20.
    For each op, rd, rs1, rs2 each walk an independent random permutation of
    0..31, so 32 words cover all 96 op x port bins for that op. Random 32-bit
    words almost never land on opcode 0x33 with a legal funct7/funct3 pair, and
    even a random legal R-type needs ~32*ln32 hits per port to fill all regs."""
    stream = []
    ops = list(_R_OPS)
    rng.shuffle(ops)
    for _name, f3, f7 in ops:
        rds, rs1s, rs2s = _perm32(rng), _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_r(OPC["OP"], f3, f7, rds[i], rs1s[i], rs2s[i]))
    return stream   # 320 words


def build_itype_alu_port_cross_stream(rng):
    """Targets BIN types 1/2/3 for ADDI, SLTI, SLTUI (sltiu), XORI, ORI, ANDI
    x {read_A, write} x 32 registers (384 cross bins). OP_IMM opcode 0x13 with
    the six arithmetic funct3 values; rs1 and rd each walk a random permutation
    of 0..31, immediates are random incl. corner values. Random words rarely hit
    a given opcode/funct3 and would need many hits to sweep every register."""
    stream = []
    ops = list(_I_ALU_OPS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["OP_IMM"], f3, rds[i], rs1s[i], _rand_imm12(rng)))
    return stream   # 192 words


def build_shift_imm_port_cross_stream(rng):
    """Targets BIN types 1/2/3 for SLLI, SRLI, SRAI x {read_A, write} x 32
    registers (192 cross bins). OP_IMM funct3 001/101 with instr[31:27] =
    00000 (slli/srli) or 01000 (srai) and instr[26:25] = 00 -- on RV32 a set
    bit 25 (shamt[5]) or any other top bits makes the word illegal (or a
    bitmanip op this core does not decode), which is why random OP_IMM words
    with f3=001/101 mostly miss these ops. shamt is random in 0..31."""
    stream = []
    ops = list(_SH_OPS)
    rng.shuffle(ops)
    for _name, f3, top5 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_ish(OPC["OP_IMM"], f3, top5, 0, 0, rds[i], rs1s[i],
                                  rng.randint(0, 31)))
    return stream   # 96 words


def build_load_port_cross_stream(rng):
    """Targets BIN types 1/2/3 for LB, LH, LW x {read_A (base), write (rd)}
    x 32 registers (192 cross bins). LOAD opcode 0x03 with funct3 000/001/010;
    rs1/rd walk random permutations, offset random. Random words hit LOAD with a
    specific funct3 only ~1/1024 of the time."""
    stream = []
    ops = list(_LOADS)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rds, rs1s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_i(OPC["LOAD"], f3, rds[i], rs1s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_store_port_cross_stream(rng):
    """Targets BIN types 1/2/3 for SB, SH, SW x {read_A (base rs1), read_B
    (data rs2)} x 32 registers (192 cross bins). STORE opcode 0x23 with funct3
    000/001/010 (S-type, no rd). rs1/rs2 walk independent random permutations,
    offset random. Stores have no write port, so no write bins are expected."""
    stream = []
    ops = list(_STORES)
    rng.shuffle(ops)
    for _name, f3 in ops:
        rs1s, rs2s = _perm32(rng), _perm32(rng)
        for i in range(32):
            stream.append(enc_s(OPC["STORE"], f3, rs1s[i], rs2s[i], _rand_imm12(rng)))
    return stream   # 96 words


def build_addi_negative_imm_subi_probe_stream(rng):
    """Probe for the SUBI bins (op bin + SUBI x {read_A, write} x 32). RV32I has
    no SUBI encoding; the only plausible way a monitor could classify one is
    ADDI with a negative immediate (what assemblers emit for 'subi'). Uses
    OP_IMM funct3 000 with imm in [-2048, -1], rs1/rd sweeping all 32 regs.
    If the plan really keys SUBI on a non-existent encoding these bins are
    unreachable and this stream just adds ADDI coverage."""
    stream = []
    rds, rs1s = _perm32(rng), _perm32(rng)
    for i in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rds[i], rs1s[i], rng.randint(-2048, -1)))
    return stream   # 32 words


NEW_BUILDERS = [
    build_rtype_port_cross_stream,
    build_itype_alu_port_cross_stream,
    build_shift_imm_port_cross_stream,
    build_load_port_cross_stream,
    build_store_port_cross_stream,
    build_addi_negative_imm_subi_probe_stream,
]
```

## Reasoning per stream

**How I read the plan.** I sized the plan from the prose description. It lists 26 operation bins and 96 port bins (32 registers × 3 ports). For the operation × port cross, I count only the ports each operation can actually use:
- 10 R-type ops × 3 ports × 32 = 960
- 10 reg-imm ops (including SUBI) × 2 ports (read_A, write) × 32 = 640
- 3 loads × 2 ports (read_A, write) × 32 = 192
- 3 stores × 2 ports (read_A, read_B) × 32 = 192

That gives 1984 cross bins, and 2106 bins in total with the first two types. The stated total is 2107, so one bin is not explained by the description. It may be a catch-all or illegal bin. I wrote no stream for it, because the description gives nothing to aim at.

Every builder uses the same method. For each operation, each register field (rd, rs1, rs2) walks its own random permutation of 0..31. So 32 words fill all 32 registers on every port that operation uses. A word or two of random data would rarely do this: it seldom hits a given opcode/funct3/funct7 combination, and a random legal instruction still needs about 32·ln32 ≈ 110 hits per port to touch all 32 registers. Every free field comes from `rng`: the order of operations, the permutations, immediates (including corner values 0, ±1, 2047, -2048), shift amounts and offsets.

- **build_rtype_port_cross_stream** (320 words): covers ADD, SUB, AND, OR, XOR, SLL, SRL, SRA, SLT and SLTU on read_A, read_B and write (960 cross bins). It uses only the legal funct7 values 0x00 and 0x20.
- **build_itype_alu_port_cross_stream** (192 words): covers ADDI, SLTI, SLTUI (`sltiu`), XORI, ORI and ANDI on read_A and write (384 cross bins).
- **build_shift_imm_port_cross_stream** (96 words): covers SLLI, SRLI and SRAI on read_A and write (192 bins). I kept this separate because the top bits must be exact: instr[31:25] is 0000000 or 0100000. On RV32, setting bit 25 or the other upper bits gives an illegal word, or a bitmanip encoding this core does not decode, so random shift-immediate words often miss.
- **build_load_port_cross_stream** (96 words): covers LB, LH and LW on read_A (base) and write. LBU and LHU are not in the plan, so I left them out.
- **build_store_port_cross_stream** (96 words): covers SB, SH and SW on read_A (base) and read_B (data). Stores have no rd, so the plan should contain no store write bins.
- **build_addi_negative_imm_subi_probe_stream** (32 words): a probe for SUBI.

**Likely unreachable: SUBI (65 bins).** RV32I has no SUBI encoding. Assemblers write "subi" as ADDI with a negative immediate, so the probe sends exactly that. If the monitor classifies SUBI some other way, its 65 bins (1 operation bin plus 64 port bins) cannot be hit with any legal encoding, and the probe just adds more ADDI coverage.

**Writes to x0.** x0 is included in every sweep, on purpose, to cover "write" on register 0. Whether the decoder flags a write enable for rd=x0 can only be confirmed by running a simulation.

I checked all six builders on several seeds in my scratch folder: each returns 32 to 320 valid 32-bit words, and the SRAI encoding is correct (`srai x1,x2,3` = 0x40315093). I made no changes to repository files.

## Output

Per function: CONFIRMED, NEEDS FIX (exact fix) or REJECT. Per "cannot be hit" claim: CONFIRMED or DISPUTE. End with ONE final ```python block containing only CONFIRMED / fixed functions and their helpers (no imports), ending with `NEW_BUILDERS = [...]`. Do not edit any repository file.
