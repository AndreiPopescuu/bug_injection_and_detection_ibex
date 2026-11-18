You are writing a constrained-random test (CRT) generator for a hardware design-verification task. This is a research experiment: can an LLM, given only the inputs a verification engineer gets at the start of the job, write a CRT generator as good as an expert's? Work from the information listed here and your general knowledge of the RISC-V ISA.

IMPORTANT: Do NOT use or look for any existing verification IP or test generator for this design (lowRISC riscv-dv, UVM testbenches, testlist.yaml, LLM4DV / ml4dv code, prompts or stimuli). Do NOT open these paths: crt/generator.py, crt/func_coverage.py, crt/ml4dv_coverage.py, test_crt_decoder.py, profiles/, results/, PAPER_COMPARISON.md, README.md, llm_passes/ (except files named in this brief), crt/llm_runs/ (except your own run's files named in this brief), crt/llm_streams.py, llm_crt_prompts.py, llm_pipeline.py, ibex-coverage-experiments/decoder/ (repo-level ml4dv copy), rl-coverage/, cpu/, /tmp/ml4dv, any ml4dv / LLM4DV repository or paper text, any scratch folder other than your own, rtl/ (no RTL in this condition), any other Ibex source.

## The design under test

The DUT is the instruction decoder of a small RISC-V core configured for RV32IM + Zicsr (+ the privileged SYSTEM instructions); no compressed and no bit-manipulation extension. Each stimulus is ONE 32-bit instruction word applied to the decoder; its outputs are sampled once per word. You do NOT have the RTL or the testbench source.

## Files you may read (Read / Grep tools)

  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py   -- the encoder library (the ONLY way to build instruction words)
  //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt   -- the coverage plan description

## Coverage metric(s) used to score your generator

Functional coverage plan of 2107 bins, described (in prose) in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/docs/ml4dv_bins_description.txt. That description is all that is known about the plan.

## Coverage feedback (run A_run3, pass 1)

(none yet -- this is pass 1, nothing has been simulated. Work from the information above alone; do not invent coverage numbers.)

## Action space

A builder returns a list of 32-bit instruction words. Build them ONLY with the encoders in //wsl.localhost/Ubuntu/home/andrei/IBEX/ibex-coverage-experiments/crt-coverage/decoder/crt/isa.py (enc_r, enc_i, enc_s, enc_b, enc_u, enc_j, enc_ish, enc_r4 and the OPC opcode table); they will be imported for you. Raw integer literals are allowed only for deliberately malformed words, with a comment saying why.

## Output contract

One or more functions `build_<name>_stream(rng) -> list[int]`, each targeting ONE specific coverage goal. Each docstring must state which plan bins it targets and which instruction encodings / fields it relies on, and why random words would rarely achieve it. Each stream: 16..512 words; `rng` is a random.Random -- use it for every free field so different seeds explore different values. The generator repeatedly picks one of ALL builders (yours from earlier passes too) uniformly at random and emits its whole stream.

Style reference (formatting only):

```python
def build_example_addi_rd_sweep_stream(rng):
    """<what this targets and why, see the output contract>"""
    stream = []
    for rd in range(32):
        stream.append(enc_i(OPC["OP_IMM"], 0b000, rd, rng.randint(0, 31),
                            rng.randint(-2048, 2047)))   # addi rd, rs1, imm
    return stream
```

Output ONLY a single ```python fenced code block with your function(s) (plus any private helpers they need, no imports) ending with `NEW_BUILDERS = [<your new functions>]`, then a short prose section with your reasoning per stream. If you conclude some bins cannot be hit at all, say so with your reasoning instead of inventing a stream for them. Do not edit any repository file; you may write scratch files only under C:/Users/andre/AppData/Local/Temp/claude/--wsl-localhost-Ubuntu-home-andrei-IBEX-ibex-coverage-experiments/27131787-a013-45ac-bdf2-da457a863e97/scratchpad/A_run3.
