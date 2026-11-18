# bug_injection_and_detection_ibex

Bug injection + functional-coverage-driven detection experiments on the lowRISC
**Ibex** RISC-V core. Two workstreams:

| Subtree    | Scope                                 | DUT granularity        | Oracle                       |
|------------|---------------------------------------|------------------------|------------------------------|
| `decoder/` | Instruction decoder isolated          | `ibex_decoder` module  | decode-signal reference model |
| `cpu/`     | Full Ibex core executing programs     | `ibex_core` + memory   | RVFI retirement trace + Spike cosim (DPI) |

Both subtrees share the same methodology:

1. **Bug injection** — hand-crafted RTL mutants plus an automatic mutation-
   operator generator (`cpu/mutator_auto.py`) covering AOR / BOR / ROR / LOR /
   SRP / COR / UOI / CRP operators (Singh & Hsiao 2003 taxonomy, extended with
   Encarsia-style signal mix-ups).
2. **Stimulus** — constrained-random testing (CRT) with multiple backends:
   baseline pure-random, LLM-driven CRT (prompt-engineered), and the ml4dv
   paper-parity reproduction.
3. **Functional coverage** — binned coverage plans sampled per retirement:
   * decoder: decode-signal x opcode coverage
   * CPU 196-bin ml4dv plan
   * CPU 5,615-bin extended L4 plan (SEEN / ZERO_DST / ZERO_SRC / SAME_SRC /
     IMM_BUCKETS / RAW_DIST / K3_CHAIN)
4. **Detection metric** — **mutation kill rate** under the CRT. A kill = at
   least one retirement (or decode) where mutated DUT disagrees with the
   oracle under the generated stimulus.

## Layout

```
decoder/                  decoder-level experiments
  mutator.py              hand-crafted mutants + generator
  mutants/                generated mutant RTL files
  run_mutation.py         mutation campaign runner
  rtl/                    golden decoder RTL (reference)
  crt/                    CRT definitions (random + LLM-driven)
  llm_passes/             LLM run artifacts (prompts + responses)
  docs/                   coverage plan description
  PAPER_COMPARISON.md     comparison against ml4dv paper baseline

cpu/                      full-core experiments
  mutator.py              20 hand-crafted mutants (manifest.json)
  mutator_auto.py         automatic mutation-operator generator
  mutants/                mutant RTL overlays
  cosim/                  Spike co-simulation DPI harness
  crt/                    CRT definitions, incl. isa_l4 encoder library
  l4_coverage.py          5,615-bin extended coverage plan
  docs/                   bin descriptions
  MUTATION_RESULTS.md     mutation kill-rate campaign results
```

## Running

Both subtrees are cocotb + Verilator based. See per-subtree `README.md` and
`Makefile` for exact invocation. Typical flow:

```bash
# Build golden DUT and run baseline random
make -C decoder sim-random

# Run mutation campaign (iterates all mutants, measures kill rate)
make -C decoder mut-campaign

# CPU side with Spike cosim oracle
make -C cpu sim-cosim
make -C cpu mut-campaign-cosim
```

## References

* **Singh & Hsiao, 2003** — "Mutation-based Test Generation for Verilog." Classical
  HDL mutation operator taxonomy underlying `mutator_auto.py`.
* **Encarsia (USENIX Security 2025)** — automatic Signal Mix-up + Broken
  Conditional bug injection on Ibex via Yosys/RTLIL. Taxonomy derived from a
  survey of real Ibex PRs. Inspiration for the SMU operator.
* **ml4dv / LLM4DV** — functional-coverage plan for the Ibex decoder and the
  196-bin CPU plan. Reproduced here for parity comparison.
* **lowRISC Ibex** — github.com/lowRISC/ibex (DUT).
* **lowRISC Ibex cosim branch** — Spike DPI co-simulation harness.
