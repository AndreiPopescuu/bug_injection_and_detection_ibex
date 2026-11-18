# Encarsia Ibex bug corpus integration

Integration of the **Encarsia** (USENIX Security 2025) RTL-bug corpus for Ibex
as additional mutation targets for LLM-CRT kill-rate evaluation.

## Source

* Paper — Bölcskei et al., "Encarsia: Benchmark for Hardware Fuzzers Using
  Automatically Injected Realistic Bugs", USENIX Security 2025
* Repo — https://github.com/comsec-group/encarsia
* Corpus — `EnCorpus_ibex.tar.gz` (30 bugs, split into 15 driver + 15 multiplexer)

## Bug taxonomy (from Encarsia survey of real Ibex PRs)

| Category     | Count | Description                                                        |
|--------------|-------|--------------------------------------------------------------------|
| Driver       | 15    | **Signal Mix-up** — one wire's driver is swapped for another same-width signal. |
| Multiplexer  | 15    | **Broken Conditional** — one row of a mux-table (FSM state table) is corrupted. |

Both categories are structural mutations applied **on the synthesized RTLIL
netlist**, not on source Verilog.

## Integration status in this repo

| Pipeline stage                                   | Status           |
|--------------------------------------------------|------------------|
| Clone Encarsia + extract `EnCorpus_ibex.tar.gz`  | ✅ /tmp/encarsia_ibex/ |
| RTLIL → Verilog conversion (yosys)               | ✅ 15 driver bugs |
| RTLIL → Verilog conversion for multiplexer bugs  | ❌ needs Encarsia yosys fork (custom `$amt` cell) |
| Verilator lint on converted Verilog              | ✅ (warnings only) |
| Differential test harness (dual-simulation)      | 🚧 planned       |
| LLM-CRT kill-rate campaign                       | 🚧 planned       |

The 15 driver bugs are the subset of the corpus that converts cleanly with
vanilla yosys. The multiplexer bugs rely on Encarsia's custom `$amt` ("approx
mux table") yosys cell, which requires their yosys fork
(`encarsia-yosys` with `passes/inject/inject_amt.cc`). We leave that
integration for future work.

## Files

```
convert.py              yosys-based RTLIL → Verilog converter
converted/
  reference_driver.v    golden (shared by all driver bugs)
  driver_<id>.v         one mutated Verilog per driver bug (15 files)
  manifest.json         per-bug metadata (top module name, category)
```

Each converted `.v` file has its top module renamed from the ugly Yosys
paramod name (`$paramod$<hash>\cellift_ibex_core`) to a clean identifier:

* Golden: `ibex_golden_driver`
* Bugs:   `ibex_bug_driver_<encarsia_id>`

so the testbench can instantiate them without escaped identifiers.

## Reproduction

```bash
# 1. Install yosys (not system-wide, no sudo needed):
cd ~
curl -L -O https://github.com/YosysHQ/oss-cad-suite-build/releases/latest/download/oss-cad-suite-linux-x64-<DATE>.tgz
tar xzf oss-cad-suite-linux-x64-*.tgz
export PATH=~/oss-cad-suite/bin:$PATH

# 2. Clone Encarsia + extract corpus:
git clone https://github.com/comsec-group/encarsia /tmp/encarsia
mkdir -p /tmp/encarsia_ibex
tar xzf /tmp/encarsia/EnCorpus_ibex.tar.gz -C /tmp/encarsia_ibex

# 3. Run converter:
python3 cpu/encarsia/convert.py
```

## Oracle design (planned)

Because Encarsia's `cellift_ibex_core` does **not** expose RVFI signals (only
the standard Ibex bus interface), our usual retirement-trace oracle does not
apply here. The planned oracle is **differential bus comparison**:

* Instantiate golden and bug Ibex cores in two separate Verilator simulations
* Feed both with the same instruction/data memory responses
* Compare the outputs (`instr_addr_o`, `data_addr_o`, `data_wdata_o`,
  `data_be_o`, `data_we_o`) cycle-by-cycle
* **Kill** = any output diverges before the program's WFI terminator.

Stimulus comes from the existing LLM-CRT program generators
(`cpu/crt/llm_runs/L4_A_run2_p1.py` etc.) — the same programs we already use
for the hand-crafted mutant campaign.
