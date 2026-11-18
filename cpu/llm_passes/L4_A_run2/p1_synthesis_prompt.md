You are writing a constrained-random test (CRT) generator for a hardware design-verification task. This is a research experiment: can an LLM, given only the inputs a verification engineer gets at the start of the job, write a CRT generator as good as an expert's? Work from the information listed here and your general knowledge of the RISC-V ISA.

IMPORTANT: Do NOT use or reference any existing verification IP or test generator for this design (lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or stimuli).

## The design under test

The DUT is an Ibex RISC-V core running RV32IM configuration (no bit-manipulation, no compressed, no PMP, no ICache). Each stimulus is a PROGRAM FRAGMENT — a list of 32-bit instruction words loaded into instruction memory. The CPU boots, executes the program, and retires instructions in order. Coverage is sampled at EVERY retirement via a Python monitor on the RVFI (RISC-V Formal Interface) signals. You do NOT have the RTL or testbench source.

## Harness mechanics (fixed, you cannot change)

1. There is a fixed prelude that initializes x1..x15 = {1..15} via ADDI.
2. Each builder's output is appended to the program in a stable order. The instructions inside a single builder are placed into memory in the order you return them (the harness does NOT shuffle them). Two consecutive instructions in the returned list retire back-to-back.
3. Between consecutive builders, 2 NOP instructions are inserted.
4. The program ends with WFI, which halts the CPU cleanly.
5. The CPU runs for ~20 × program_words clock cycles — enough for every instruction to retire.

Register state is NOT reset between builders. Every builder's writes to x1..x31 persist into subsequent builders. If your builder reads a specific value from a register (e.g., using x1 as the operand "1" to construct a larger value), re-initialize that register locally with ADDI before the use — otherwise an earlier builder may have overwritten it.

## Coverage metric (5,615 bins)

Described fully in the bins description below. Summary:
  - SEEN (30)        — each of 30 ops retired at least once.
  - ZERO_DST (27)    — writers with rd=x0.
  - ZERO_SRC (30)    — readers with rs1 or rs2 = x0.
  - SAME_SRC (13)    — two-source readers with rs1==rs2.
  - IMM_BUCKETS (85) — 17 imm-ops × 5 corner imm buckets {very-neg, small-neg, zero, small-pos, very-pos}.
  - RAW_DIST (2430)  — 27 writers × 30 readers × 3 distances. Producer N retirements before consumer that reads the written register.
  - K3_CHAIN (3000)  — 10 R_outer × 10 R_mid × 30 R_tail. Three consecutive retirements with register data-flow chaining.

30 instructions in the plan:
  R-type ALU (10): ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND
  I-type ALU (9):  ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI
  Loads      (5):  LB, LH, LW, LBU, LHU
  Stores     (3):  SB, SH, SW
  CSR        (3):  CSRRW, CSRRS, CSRRC

## Operand coverage

Each instruction operates on a 32-bit datapath; its behavior can depend qualitatively on where its operands sit in that 32-bit space (sign bit, zero, all-ones, powers of two, signed/unsigned boundaries). A thorough CRT does not just permute register indices — it varies the architectural values those registers hold. Standard verification practice covers corner values of the datapath (zero, ±1, max/min signed, max unsigned, boundary bit patterns), operand pairs that trigger sign-sensitive paths, and shift amounts across the full 0..31 range.

## Action space (encoder library)

You MUST build instructions using only the functions in the encoder library below. Do NOT use raw integer literals for instructions.

```python
# R-type ALU (10): signature (rd, rs1, rs2)
ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND

# I-type ALU (9): signature (rd, rs1, imm)   [imm is 12-bit signed for ADDI/SLTI/SLTIU/XORI/ORI/ANDI]
ADDI, SLTI, SLTIU, XORI, ORI, ANDI
# Shift-immediate (3): signature (rd, rs1, shamt)  [shamt is 5-bit unsigned 0..31]
SLLI, SRLI, SRAI

# Loads (5): signature (rd, rs1, imm)  [imm is 12-bit signed byte offset from rs1]
LB, LH, LW, LBU, LHU

# Stores (3): signature (rs2, rs1, imm)  [imm is 12-bit signed, rs2=data, rs1=base addr]
SB, SH, SW

# CSR (3): signature (rd, rs1)   [CSR hardcoded to mscratch 0x340 by the encoder]
CSRRW, CSRRS, CSRRC

# Helpers (not in plan):
ADDI(rd, rs1, imm)   # same encoder as above; use for local register init
NOP()                # = ADDI(0, 0, 0)
```

Constraints on sequences:
- Build each builder as a LINEAR sequence of instructions (no backward JAL is possible — JAL is not in the plan). The CPU executes top-to-bottom.
- Keep each builder between 1 and 512 words.
- Use `rng` for every free field so different seeds give different streams.
- Each builder must be DETERMINISTIC for a given seed (same seed → same output).

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage goal (a bin or a small related group). Each docstring must state which plan bins it targets and which instruction encodings / register / imm / sequencing constraints it relies on, and why random stimuli would rarely hit this goal.

Your output should be ONE python code block containing:
  1. Any private helpers.
  2. All `build_*_stream` functions.
  3. A final line: `NEW_BUILDERS = [<your functions>]`

Do NOT include the `from ..isa_l4 import ...` header — the harness will add it.

Example output shape:

```python
def build_r_type_seen_stream(rng):
    """SEEN for 10 R-type ops."""
    stream = []
    for op in [ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND]:
        stream.append(op(rd=1 + (rng.randint(0, 14)),
                         rs1=1 + rng.randint(0, 14),
                         rs2=1 + rng.randint(0, 14)))
    return stream

def build_iamu_imm_corners_stream(rng):
    """IMM_BUCKETS for I-type ALU ops — hit each of the 5 imm buckets per op."""
    stream = []
    IMM_CORNERS = [-2048, -100, 0, 100, 2047]
    for op in [ADDI, SLTI, SLTIU, XORI, ORI, ANDI]:
        for imm in IMM_CORNERS:
            stream.append(op(rd=5, rs1=1, imm=imm))
    return stream

# ... etc for every bin category

NEW_BUILDERS = [build_r_type_seen_stream, build_iamu_imm_corners_stream, ...]
```

## Helper semantics: verify what you compose

If a builder uses a private helper to materialize a value in a register (e.g., chaining ADDI/SLLI to build a constant that doesn't fit in a single 12-bit immediate), that helper is semantically correct only for the inputs on which you have verified it produces the intended register content. A helper that works for one class of inputs can silently produce the wrong result for another class — the encoder calls are syntactically valid but the register ends up holding a different value than the one encoded in the helper's intent.

Key traps to think through:
- ADDI sign-extends its 12-bit immediate. If your decomposition algorithm separates a target value into chunks, the sign of each ADDI's effective addend depends on the high bit of its 12-bit field. Your algorithm must compensate.
- Chains of (ADDI → SLLI → ADDI) that are correct for small positive constants may be incorrect for values with high bits set, for sign boundaries, or for values near all-ones; different input classes may need different composition logic.
- The simplest construction is often the most obviously correct. Prefer a direct path when it fits.

Each value-materializing helper's docstring must explicitly state the input range for which the helper is verified correct. If a builder calls the helper with an input outside that range, you have introduced a silent bug.

## Bins description (full detail)

[BINS_DESC_BEGIN]
Extended Level-4 coverage plan for ibex_cpu (5,615 bins)
=========================================================

Op categories used by bin definitions:
  WRITERS (27)     = R-type + I-ALU + Loads + CSR
  READERS (30)     = all 30 ops
  READERS_TWO (13) = R-type + Stores (ops that read BOTH rs1 and rs2)
  IMM_OPS (17)     = I-ALU + Loads + Stores (ops with an immediate field)
  CHAIN_R (10)     = R-type (ops eligible as chain middle/outer)

Bin categories:
  1. SEEN (30 bins). One bin per op. Fires when that op retires.
  2. ZERO_DST (27 bins). One bin per WRITER op. Fires when retirement has rd = x0.
  3. ZERO_SRC (30 bins). One bin per READER op. Fires when retirement has at least one source register = x0.
  4. SAME_SRC (13 bins). One bin per READER_TWO op. Fires when rs1 == rs2.
  5. IMM_BUCKETS (85 bins). 17 IMM_OPS × 5 buckets:
       bucket 0: very negative (imm <= -1024)
       bucket 1: small negative (-1024 < imm < 0)
       bucket 2: zero (imm == 0)
       bucket 3: small positive (0 < imm < 1024)
       bucket 4: very positive (imm >= 1024)
     Shifts (SLLI/SRLI/SRAI) bucket their 5-bit shamt: 0 → bucket 2, 1..7 → 1, 8..30 → 3, 31 → 4.
  6. RAW_DIST (2,430 bins). 27 WRITERS × 30 READERS × 3 distances.
     Fires when the current retirement reads a source register that was WRITTEN by `writer_op` EXACTLY N retirements ago (N ∈ {1,2,3}).
     Distance 1 = immediately previous retirement produced the value.
     Distance 2 = retirement before that (one filler in between).
     Distance 3 = three retirements ago (two fillers in between).
  7. K3_CHAIN (3,000 bins). 10 R_outer × 10 R_mid × 30 R_tail.
     Three CONSECUTIVE retirements:
       retire[t-2]: op_o (R-type), writes rd_o != x0
       retire[t-1]: op_m (R-type), reads rd_o (as rs1 or rs2), writes rd_m != x0
       retire[t]:   op   (any READER), reads rd_m (as rs1 or rs2)
     All three must be ADJACENT in retirement order.
[BINS_DESC_END]

## Final instructions

Write all your builders in one Python code block. Aim for high coverage of the 5,615-bin plan: SEEN for all 30 ops, ZERO_DST / ZERO_SRC / SAME_SRC for every eligible op, IMM_BUCKETS covering all 5 buckets per imm-op, RAW_DIST covering distances 1, 2, 3 across writer→reader pairs, and K3_CHAIN patterns for chain triples.

The dedicated encoder library (ADD, ADDI, SLLI, LW, SB, CSRRW etc.) is the ONLY way to build instructions — do not emit hex constants. Remember that register state is mutable across builders; re-initialize locally what you depend on.

Produce ONLY one python code block as output. No explanatory prose outside the block.

## Agent operational instructions

- Write your builders to:
    //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/llm_runs/L4_A_run1_p1.py

- The file MUST start with exactly these 2 lines (header):

```
"""LLM-CRT L4 run A_run1 pass 1 (Claude sub-agent, condition A)."""
from ..isa_l4 import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, ADDI, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, LB, LH, LW, LBU, LHU, SB, SH, SW, CSRRW, CSRRS, CSRRC, NOP  # noqa: F401
```

- Then your builders, then a final line `NEW_BUILDERS = [<your functions>]`.
- Do NOT read other files beyond what the brief authorizes. In particular, do NOT read:
  - any `A_run*_p*.py` / `B_run*_p*.py` / `C_run*_p*.py` under `crt/llm_runs/` (those are OTHER runs; this is a fresh experiment)
  - the `decoder/` directory
  - any ml4dv files
  - RTL files (condition A = no RTL)
- You MAY read:
  - crt/isa_l4.py (encoder definitions)
  - docs/bins_description_l4.txt (plan reference)
- After writing the file, sanity-check by running a smoke import under WSL:
    wsl.exe -d Ubuntu -- bash -c "cd /home/andre/ibex-crt-llm-coverage/crt-coverage/cpu && python3 -c 'import random; from crt.llm_runs.L4_A_run1_p1 import NEW_BUILDERS; [b(random.Random(0)) for b in NEW_BUILDERS]; print(f\"ok: {len(NEW_BUILDERS)} builders\")'"
- Write a short synthesis report at:
    //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_passes/L4_A_run1/p1_synthesis_report.md
- Final message: a short summary (builders written, smoke check result).

