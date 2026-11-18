# Spike cosim (OPERATIONAL as of 2026-10-28)

This directory holds the pieces for Spike co-simulation as a bug-detection
oracle in mutation testing. **Working end-to-end**: golden runs produce 0
mismatches; m003 (LSU byte-enable corruption, which trace oracle misses) is
killed at the first aligned SW. Full campaign shows 5/5 mutants killed by
Spike vs. 4/5 by trace oracle.

- `cocotb_ibex_cosim.sv` — top module that binds
  `ibex_simple_system_cosim_checker` onto `u_top` so every RVFI retirement is
  lockstep-checked against a Spike instance.
- `cocotb_cosim_shim.cc` — minimal DPI shim that creates a `SpikeCosim`
  instance, exposes `get_spike_cosim()`, and provides
  `cosim_backdoor_write_word` for loading program contents.
- `../Makefile` has a `COSIM=1` branch that pulls these in, compiles
  `spike_cosim.cc` from the companion repo, and links against the user-prefix
  Spike at `/home/andre/spike-install`.

## Why it doesn't build yet

Spike v1.1.1 (upstream HEAD at build time) removed or refactored several Ibex-
specific APIs that lowRISC's `spike_cosim.cc` (vendored in companion repo at
`src/lowrisc_dv_cosim_0/`) still uses:

- `DEFAULT_VARCH` macro
- `processor_t::set_ibex_flags`
- `processor_t::set_mhpm_counter_num`
- `processor_t::set_mmu_capability`
- `state_t::last_inst_pc`
- `state_t::nmi`, `state_t::nmi_int`
- `CSR_CPUCTRLSTS`
- `PC_INVALID`, `IMPL_MMU_SBARE`
- `triggers::module_t::tdata1_write` / `tdata2_write` signatures changed

These were previously maintained on an Ibex-specific branch of lowRISC's
Spike fork. That branch is no longer present at `origin/master`.

## Path to unblock

Either:

1. Find the lowRISC Spike commit that still had the Ibex patches (likely
   from the Ibex vendor pin, which lives in Ibex upstream at
   `vendor/riscv-isa-sim.lock.hjson`), build THAT commit, rerun `make
   COSIM=1`.
2. Rewrite the Ibex-specific calls in `spike_cosim.cc` against the modern
   Spike API: config factory, state accessors, trigger module new interface.
   ~1 person-day of work.

## What the trace oracle gives us meanwhile

Comparing (pc, insn, rd_addr, rd_wdata) retirement sequences between golden
and mutant RTL kills 4/5 of our seed mutants with either random or LLM-CRT
stimulus. The one mutant it misses is `m003_lsu_sw_be_corrupt` — an LSU
byte-enable corruption that stores wrong data but never surfaces at any
architectural register. Spike's `notify_dside_access` would catch it; our
trace cannot.
