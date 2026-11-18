You are writing a constrained-random test (CRT) generator for a hardware design-verification task. This is a research experiment: can an LLM, given only the inputs a verification engineer gets at the start of the job, write a CRT generator as good as an expert's?

IMPORTANT: Do NOT use or look for any existing verification IP or test generator for this design (lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or stimuli). Do NOT open these paths: test_random_cpu.py, test_paper_random.py, test_llm_crt.py, crt/random_generator.py, results/, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), instructions.py, instruction_monitor.py, shared_types.py, llm_pipeline.py, scripts/, mutants/, run_mutation.py, mutation_results/, ibex-coverage-experiments/cpu/ (companion repo, except RTL path listed in your brief), ../decoder/, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, //wsl.localhost/Ubuntu/home/andre/ibex-coverage-experiments/cpu/src/lowrisc_ibex_ibex_core_0.1/rtl (no RTL in condition A), any Ibex RTL file.

## The design under test

The DUT is a small RISC-V CPU (Ibex) running RV32IM configuration (no bit-manipulation, no compressed, no PMP, no ICache). Each stimulus is a PROGRAM FRAGMENT — a list of 32-bit instruction words loaded into instruction memory. The CPU boots, executes the program, and retires instructions in order. Coverage is sampled at EVERY retirement via a monitor on the RVFI (RISC-V Formal Interface) signals. You do NOT have the RTL or testbench source.

## Harness mechanics (fixed, you cannot change)

1. There is a fixed prelude that initializes x1..x15 = {1..15} via ADDI.
2. Each builder's output is appended to the program in a stable order.
3. Between consecutive builders, 2 NOP instructions are inserted. The instructions inside a single builder are placed into memory in the order you return them (the harness does NOT shuffle them).
4. The program ends with WFI, which halts the CPU cleanly.
5. The CPU runs for ~20 * program_words clock cycles — enough for every instruction to retire.

## Files you may read (Read / Grep tools)

  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/docs/ml4dv_bins_description.txt  -- the coverage plan description

## Coverage metric

Functional coverage plan of 196 bins on ibex_cpu, described in prose in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## Coverage feedback (run A_run3, pass 1)

(none yet — this is pass 1, nothing has been simulated. Work from the information above alone; do not invent coverage numbers.)

## Action space

A builder returns a list of 32-bit instruction words. Build them using the functions in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/isa.py (ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL, plus ADDI and NOP for glue). ADDI/NOP are NOT in the plan — they only exist to initialize registers or pad. Raw integer literals are not allowed; use the encoders.

Important constraints on sequences:
  - LINEAR by default: no backward JAL unless the same builder emits the landing pad and ensures execution escapes (otherwise you create an infinite loop that the CPU can only exit by running out of simulation time).
  - Forward JAL is safe. Backward JAL is only safe if the TARGET is a previously-emitted instruction INSIDE the same builder AND the target sequence eventually ends with another forward JAL that skips past the backward JAL.
  - Keep each builder between 1 and 512 words.

## Operand coverage

Each instruction operates on a 32-bit datapath; its behavior can depend qualitatively on where its operands sit in that 32-bit space (sign bit, zero, all-ones, powers of two, signed/unsigned boundaries). A thorough CRT does not just permute register indices — it varies the architectural *values* those registers hold. Standard verification practice covers corner values of the datapath (zero, ±1, max/min signed, max unsigned, boundary bit patterns), operand pairs that trigger sign-sensitive paths, and shift amounts across the full 0..31 range. Store addresses span both aligned and unaligned low 2 bits (offsets 00, 01, 10, 11 from the base).

The prelude initializes x1..x15 with the small positive values 1..15 as a starting point. Any other operand value is your responsibility to construct in-stream (chain ADDI/SLL/SUB/XOR etc. to materialize the value in a register before the instruction that needs it). A builder that only consumes the prelude values exercises one slice of the datapath and may miss behaviors visible only on other operand corners.

## Register state is mutable across builders

Register state is NOT reset between builders. Every builder's writes to x1..x31 persist into subsequent builders. If your builder *reads* a specific value from a register (e.g., using x1 as the operand "1" to construct a larger value), re-initialize that register locally with ADDI before the use — otherwise an earlier builder may have overwritten it, and your constructed value will be wrong at runtime (your encoder sees the right instruction but the CPU retires it with corrupt operands).

Equivalently: do not assume prelude values survive. Treat x1..x31 as scratch and reconstruct whatever you need. The checker only validates encoder correctness, not runtime state assumptions.

## Operand variety is also useful within OTHER builders

Interesting behaviors in sign-sensitive, overflow, and shift operations can emerge when operands with those patterns are consumed by ANY instruction, not just by a dedicated "corner value" builder. If your builder uses an instruction class (R-type, S-type, JAL) that has operand-dependent behavior, consider rotating through operand corners within that same builder rather than relying on a single downstream builder to cover everything.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage goal (a bin or a small related group). Each docstring must state which plan bins it targets and which instruction encodings / registers / sequencing constraints it relies on, and why random stimuli would rarely hit this goal. `rng` is a `random.Random` — use it for every free field so different seeds explore different values. Builders MUST be deterministic for a given seed.

Style reference (formatting only):

```python
def build_example_add_zero_dst_stream(rng):
    """Target `ADD.ZERO_DST` + `ADD.SEEN`.

    ADD with rd=x0 is retired as a NOP by the writeback stage but the decoder
    still reports ADD, so the monitor samples ZERO_DST. Repeat 32x with random
    sources to also light up SAME_SRC and ZERO_SRC in a side-effect-free way.
    """
    stream = []
    for _ in range(32):
        rs1 = rng.randint(0, 15)
        rs2 = rng.randint(0, 15)
        stream.append(ADD(rd=0, rs1=rs1, rs2=rs2))
    return stream
```

## Writing and merging your generator (you do this yourself)

1. Write your builders YOURSELF (Write tool) into this file:

     //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/llm_runs/A_run3_p1.py

   The file MUST start with exactly these lines:

```python
"""LLM-CRT run A_run3, pass 1 (condition A): written by the synthesis agent, reviewed and fixed in place by the review agent."""
from ..isa import ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, SB, SH, SW, JAL, ADDI, NOP, R_PLAN, S_PLAN  # noqa: F401
```

   followed by any private helpers, your `build_*_stream` functions, and a final line `NEW_BUILDERS = [<your new functions>]` (an empty list is allowed if you conclude nothing new is worth adding). No other imports.

2. Run the checker until it prints `CHECK OK` (validates every builder):

     MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 /home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_pipeline.py check --run A_run3 --pass 1 --stage synth

3. Write your reasoning per stream (what it targets, why, every "cannot be hit" conclusion with justification) to:

     //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_passes/A_run3/p1_synthesis_report.md

Do not create or edit any other repository file. Scratch files only under C:/Users/Andre/AppData/Local/Temp/claude/cpu-A_run3. Your final message: a short summary (builders written, checker result).
