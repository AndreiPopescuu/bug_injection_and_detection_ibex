You are the independent adversarial reviewer of a draft constrained-random test (CRT) generator written by another agent for a design-verification experiment. You have NO context from whoever wrote it; treat it as an unverified submission. Re-derive every claim — do not rubber-stamp.

Do NOT open: test_random_cpu.py, test_paper_random.py, test_llm_crt.py, crt/random_generator.py, results/, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), instructions.py, instruction_monitor.py, shared_types.py, llm_pipeline.py, scripts/, mutants/, run_mutation.py, mutation_results/, ibex-coverage-experiments/cpu/ (companion repo, except RTL path listed in your brief), ../decoder/, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, //wsl.localhost/Ubuntu/home/andre/ibex-coverage-experiments/cpu/src/lowrisc_ibex_ibex_core_0.1/rtl (no RTL in condition A), any Ibex RTL file.

## The design under test

The DUT is a small RISC-V CPU (Ibex) running RV32IM configuration (no bit-manipulation, no compressed, no PMP, no ICache). Each stimulus is a PROGRAM FRAGMENT — a list of 32-bit instruction words loaded into instruction memory. The CPU boots, executes the program, and retires instructions in order. Coverage is sampled at EVERY retirement via a monitor on the RVFI (RISC-V Formal Interface) signals. You do NOT have the RTL or testbench source.

## Harness mechanics (fixed)

1. Prelude initializes x1..x15 = {1..15}.
2. Builder outputs are concatenated in order with a 2-NOP SEPARATOR between consecutive builders. Inside one builder, two adjacent instructions in the returned list retire back-to-back.
3. Program ends with WFI.

## Files you may read

  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/docs/ml4dv_bins_description.txt  -- the coverage plan description

## Coverage metric

Functional coverage plan of 196 bins on ibex_cpu, described in prose in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## What to check, for EVERY function

1. Every encoder call builds the instruction its comment claims. Verify argument order and widths in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/isa.py yourself (R-type: f(rd, rs1, rs2); S-type: SB/SH/SW(rs2, rs1, imm); JAL: JAL(rd, offset)). Argument-order mistakes are the most common bug.
2. The emitted sequence is LINEAR or correctly handles backward JAL (if any) with its own landing + escape — a backward JAL into previously-executed code without an escape forward JAL creates an infinite loop.
3. For every RAW_HAZARD(producer, consumer) claim: are the producer and consumer ADJACENT inside the builder's returned list? Any instruction (even NOP) between them breaks the hazard.
4. For every "cannot be hit" claim: CONFIRMED or DISPUTE, with reasoning.
5. Python: returns `list[int]` of 32-bit values, 1..512 words, uses `rng` for free fields, deterministic (same seed = same output), no imports beyond the header.

## What you review

The draft generator, already written and merged by the synthesis agent:

  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/llm_runs/A_run1_p1.py

The synthesis agent's report:

  //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_passes/A_run1/p1_synthesis_report.md

## Output (you edit the generator yourself)

1. Fix every problem DIRECTLY in //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/crt/llm_runs/A_run1_p1.py (Edit tool). Keep header lines unchanged. Remove a fundamentally broken builder (REJECT) rather than leaving it in. Do not add new coverage goals of your own — you review, you do not author.

2. Run the checker until it prints `CHECK OK` (also snapshots the reviewed version):

     MSYS_NO_PATHCONV=1 wsl -d Ubuntu -- python3 /home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_pipeline.py check --run A_run1 --pass 1 --stage review

3. Write your review to //wsl.localhost/Ubuntu/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/llm_passes/A_run1/p1_review_report.md: per function CONFIRMED, NEEDS FIX (what was wrong, what you changed) or REJECT; per "cannot be hit" claim CONFIRMED or DISPUTE with reasoning.

Do not create or edit any other repository file. Your final message: a short summary (verdict counts, what you changed, checker result).
