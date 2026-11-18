You are writing a constrained-random test (CRT) generator for a hardware design-verification task.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Coverage metric(s)

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## Coverage feedback (run A_run5, pass 1)

(none yet -- this is pass 1, nothing has been simulated. Work from the information above alone; do not invent coverage numbers.)

## ml4dv_bins_description.txt -- coverage plan

```
- The list contains 32-bit hexadecimal integers, each represents a RISC-V instruction.
- There are 32 register files available, with index from 0 to 31.
- There are 26 available types of operations:
---
OPERATIONS
    - ADD: addition between two register files
    - ADDI: addition between a register file and an immediate (i.e. a constant number)
    - SUB: subtraction between two register files
    - SUBI: subtraction between a register file and an immediate
    - AND: logical operation AND between two register files
    - ANDI: logical operation AND between a register file and an immediate
    - OR: logical operation OR between two register files
    - ORI: logical operation OR between a register file and an immediate
    - XOR: logical operation XOR between two register files
    - XORI: logical operation XOR between a register file and an immediate
    - SLL: logical shift left a register file by number of bits equal to another register file
    - SLLI: logical shift left a register file by number of bits equal to an immediate
    - SRL: logical shift right a register file by number of bits equal to another register file
    - SRLI: logical shift right a register file by number of bits equal to an immediate
    - SRA: arithmetic shift right a register file by number of bits equal to another register file
    - SRAI: arithmetic shift right a register file by number of bits equal to an immediate
    - SLT: make comparison between two register files; if the first one is smaller, write 1 to a register file, otherwise write 0
    - SLTI: make comparison between a register file and an immediate; if the register file is smaller, write 1 to a register file, otherwise write 0
    - SLTU: make comparison between two unsigned register files; if the first one is smaller, write 1 to a register file, otherwise write 0
    - SLTUI: make comparison between an unsigned register file and an unsigned immediate; if the register file is smaller, write 1 to a register file, otherwise write 0
    - LW: load a word (a 32-bit value) from memory at the address equal to a register file into a register file
    - LH: load a half-word (a 16-bit value) from memory at the address equal to a register file into a register file
    - LB: load a byte (an 8-bit value) from memory at the address equal to a register file into a register file
    - SW: store a word (a 32-bit value) from a register file to memory at the address equal to a register file
    - SH: store a half-word (a 16-bit value) from a register file to memory at the address equal to a register file
    - SB: load a byte (an 8-bit value) from a register file to memory at the address equal to a register file
---
- BIN type 1: For each operation, the list contains at least one instruction that performs it.

- Each of the 32 register files has two read ports ("read_A" and "read_B") and a write port ("write")
    - "read_A" is used when the register file is taken as the first argument of an operation.
    - "read_B" is used when the register file is taken as the second argument of an operation.
    - "write" is used when the result of an operation is written to the register file.
- BIN type 2: For each register file port, the list contains at least one instruction that uses it.

- BIN type 3: For each operation and each register file port, the list contains at least one instruction that performs the operation and uses the port as the same time.

```

## Action space

Build 32-bit instruction words directly as Python integers, using your knowledge of the RISC-V ISA encoding (opcodes, funct3, funct7, field positions). Use Python bitwise operations to assemble words. Use `rng.randint()` for every free field (rd, rs1, rs2, imm, etc.).

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage goal. Each docstring must state which plan bins it targets and which instruction encodings / fields it relies on, and why random words would rarely achieve it. Each stream: 16..512 words; `rng` is a random.Random.

Style reference (format only -- build words with bit ops, NOT with encoders):

```python
def build_addi_rd_sweep_stream(rng):
    """addi rd, rs1, imm -- sweeps all rd values to hit write_reg bins."""
    stream = []
    for rd in range(32):
        rs1 = rng.randint(0, 31)
        imm12 = rng.randint(-2048, 2047) & 0xFFF
        # addi: opcode=0x13, funct3=0b000, format I
        word = ((imm12 & 0xFFF) << 20) | (rs1 << 15) | (0b000 << 12) | (rd << 7) | 0x13
        stream.append(word & 0xFFFFFFFF)
    return stream
```

## Required output format

Output ONLY a single fenced Python code block -- no prose before or after it. The block must start with EXACTLY these two lines (copy them verbatim):

```python
"""LLM-CRT run A_run5, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import OPC, enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4  # noqa: F401
```

Then your helpers (if any), your `build_*_stream` functions, and a final line:

    NEW_BUILDERS = [<list of your new functions>]

No other imports. No explanations outside the code block.
