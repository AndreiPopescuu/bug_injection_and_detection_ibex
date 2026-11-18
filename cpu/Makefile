# Derived from ../../../../ibex-coverage-experiments/cpu/Makefile by _gen_makefile.py.
# Changes:
#   - $(PWD) -> $(IBEX_CPU_ROOT): decouples RTL/cosim sources from this directory.
#   - MODULE defaults to our random stimulus test, not companion's cocotb_ibex.
#   - SIM_BUILD lives under this directory so builds don't collide with companion.
#
# Usage:
#   make                       # run default MODULE (test_random_cpu)
#   MODULE=test_xxx make       # run a different test module
#   IBEX_CPU_ROOT=... make     # override RTL root
#
# IBEX_CPU_ROOT points at the companion repo's cpu/ directory, which owns the
# vendored RTL tree + Spike cosim DPI + cocotb_ibex.sv harness. We don't
# duplicate those.
IBEX_CPU_ROOT ?= /home/andre/ibex-coverage-experiments/cpu

# Copyright lowRISC contributors.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

# CONFIG=minimal (default): cocotb_ibex.sv, all-optional-features-off Ibex,
#                            output in sim_build/.
# CONFIG=max:                cocotb_ibex_max.sv, all-optional-features-on Ibex
#                            (PMP, ICache, RV32B, lockstep, ...), output in
#                            sim_build_max/ — does not touch the minimal build.
CONFIG ?= minimal
ifeq ($(CONFIG),max)
COCOTB_TOP_SV := cocotb_ibex_max.sv
SIM_BUILD     := $(abspath ./sim_build_max)
# Max config is ~1.7x bigger (lockstep, ICache+scramble, PMP, RV32B) and
# FST waveform dumping on every cycle dominates runtime. We only need
# coverage.dat here, not waveforms, so skip tracing for max builds.
TRACE_ARGS    :=
else
COCOTB_TOP_SV := cocotb_ibex.sv
SIM_BUILD     := $(abspath ./sim_build)
TRACE_ARGS    := --trace-fst --trace-structs
endif

# MUTANT=<id>: swap one or more RTL files with versions from mutants/<id>/.
# Each mutant has its own SIM_BUILD so the golden build stays untouched.
ifdef MUTANT
MUTANT_DIR := $(abspath ./mutants/$(MUTANT))
SIM_BUILD  := $(abspath ./sim_build_mut_$(MUTANT))
# A file in $(MUTANT_DIR) with the same basename as an RTL file substitutes it
# in VERILOG_SOURCES below. The substitution is applied AFTER the full source
# list is assembled.
endif

VERILOG_SOURCES += $(IBEX_CPU_ROOT)/src/lowrisc_lint_common_0.1/tools/verilator/common.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_assert_0.1/lint/prim_assert.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_clock_gating_0/lint/prim_generic_clock_gating.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_clock_gating_0/lint/prim_xilinx_clock_gating.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_clock_mux2_0/lint/prim_xilinx_clock_mux2.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_cipher_0/lint/prim_cipher.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_clock_mux2_0/lint/prim_generic_clock_mux2.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_ram_1p_0/lint/prim_generic_ram_1p.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_onehot_check_0/lint/prim_onehot_check.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/lint/verilator_waiver.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_ram_1p_scr_0.1/lint/prim_ram_1p_scr.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/lint/verilator_waiver.vlt \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_pkg_0.1/rtl/ibex_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_prim_pkg_0.1/prim_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_ram_1p_pkg_0/rtl/prim_ram_1p_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_cipher_pkg_0.1/rtl/prim_cipher_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_buf_0/rtl/prim_generic_buf.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_clock_gating_0/rtl/prim_generic_clock_gating.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_flop_0/rtl/prim_generic_flop.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_22_16_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_22_16_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_28_22_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_28_22_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_39_32_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_39_32_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_64_57_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_64_57_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_72_64_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_72_64_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_22_16_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_22_16_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_39_32_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_39_32_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_72_64_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_72_64_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_76_68_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_hamming_76_68_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_22_16_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_22_16_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_28_22_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_28_22_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_39_32_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_39_32_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_64_57_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_64_57_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_72_64_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_72_64_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_22_16_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_22_16_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_39_32_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_39_32_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_72_64_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_72_64_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_76_68_dec.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_secded_0.1/rtl/prim_secded_inv_hamming_76_68_enc.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_buf_0/rtl/prim_xilinx_buf.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_clock_gating_0/rtl/prim_xilinx_clock_gating.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_clock_mux2_0/rtl/prim_xilinx_clock_mux2.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_xilinx_flop_0/rtl/prim_xilinx_flop.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_icache_0.1/rtl/ibex_icache.sv \
  $(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_tracer_0.1/rtl/ibex_tracer_pkg.sv \
  $(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_tracer_0.1/rtl/ibex_tracer.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_buf_0/prim_buf.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_clock_gating_0/prim_clock_gating.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_flop_0/prim_flop.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_cipher_0/rtl/prim_subst_perm.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_cipher_0/rtl/prim_present.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_cipher_0/rtl/prim_prince.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_clock_mux2_0/rtl/prim_generic_clock_mux2.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_generic_ram_1p_0/rtl/prim_generic_ram_1p.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_lfsr_0.1/rtl/prim_lfsr.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_util_0.1/rtl/prim_util_pkg.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_clock_mux2_0/prim_clock_mux2.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_badbit_ram_1p_0/prim_badbit_ram_1p.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_onehot_check_0/rtl/prim_onehot_check.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_alu.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_branch_predict.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_compressed_decoder.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_controller.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_cs_registers.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_csr.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_counter.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_decoder.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_ex_block.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_fetch_fifo.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_id_stage.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_load_store_unit.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_multdiv_fast.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_multdiv_slow.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_prefetch_buffer.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_pmp.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_wb_stage.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_dummy_instr.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_core.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_abstract_ram_1p_0/prim_ram_1p.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_ram_1p_adv_0.1/rtl/prim_ram_1p_adv.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_prim_ram_1p_scr_0.1/rtl/prim_ram_1p_scr.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/rtl/ibex_register_file_ff.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/rtl/ibex_register_file_fpga.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/rtl/ibex_register_file_latch.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/rtl/ibex_lockstep.sv \
	$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_0.1/rtl/ibex_top.sv \
  $(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_top_tracing_0.1/rtl/ibex_top_tracing.sv \
	$(IBEX_CPU_ROOT)/$(COCOTB_TOP_SV)

# COSIM=1: swap in the cosim-enabled top (binds Spike checker on u_top),
# compile cosim_dpi.cc + spike_cosim.cc + our shim, link against user-prefix
# Spike at $(SPIKE_ROOT). Separate SIM_BUILD so cosim builds don't collide.
ifdef COSIM
# Spike with Ibex-specific patches (set_ibex_flags, CSR_CPUCTRLSTS,
# state_t::last_inst_pc, ...). Built from the lowRISC Spike fork, ibex_cosim
# branch — see Ibex docs/03_reference/cosim.rst.
SPIKE_ROOT     ?= /home/andre/spike-ibex-install
IBEX_UPSTREAM  ?= /home/andre/ibex-upstream
SIM_BUILD      := $(abspath ./sim_build_cosim)
ifdef MUTANT
SIM_BUILD      := $(abspath ./sim_build_cosim_mut_$(MUTANT))
endif
# Replace the base cocotb_ibex.sv with our cosim variant. Pull cosim C++
# sources from Ibex upstream HEAD so they match the ibex_cosim-branch Spike
# API (the companion repo copy is 2026-07 snapshot and may lag).
VERILOG_SOURCES := $(filter-out $(IBEX_CPU_ROOT)/$(COCOTB_TOP_SV),$(VERILOG_SOURCES)) \
	$(abspath ./cosim/ibex_simple_system_cosim_checker.sv) \
	$(abspath ./cosim/cocotb_ibex_cosim.sv) \
	$(abspath ./cosim/cocotb_cosim_shim.cc) \
	$(IBEX_UPSTREAM)/dv/cosim/cosim_dpi.cc \
	$(IBEX_UPSTREAM)/dv/cosim/spike_cosim.cc
endif
# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = cocotb_ibex

# MODULE is the basename of the Python test file
MODULE ?= test_random_cpu
#--trace-fst --trace-structs \

EXTRA_ARGS +=  \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_crypto_prince_ref_0.1 \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_crypto_prince_ref_0.1 \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_dv_fcov_macros_0 \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_dv_fcov_macros_0 \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_secded_enc_0 \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_secded_enc_0 \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_prim_util_get_scramble_params_0/rtl \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_prim_util_get_scramble_params_0/rtl \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_prim_util_memload_0/rtl \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_prim_util_memload_0/rtl \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_scramble_model_0 \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_scramble_model_0 \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_verilator_memutil_dpi_0/cpp \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_verilator_memutil_dpi_0/cpp \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_dv_verilator_memutil_dpi_scrambled_0/cpp \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_dv_verilator_memutil_dpi_scrambled_0/cpp \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_prim_assert_0.1/rtl \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_prim_assert_0.1/rtl \
	+incdir+$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl \
	-CFLAGS -I$(IBEX_CPU_ROOT)/src/lowrisc_ibex_ibex_core_0.1/rtl \
  -DSYNTHESIS=1 \
  -DRVFI=1 \
	$(TRACE_ARGS) \
  --coverage \
	-Wno-fatal \
  -CFLAGS "-std=c++14 -Wall -O3"

ifdef COSIM
EXTRA_ARGS += \
	+incdir+$(IBEX_UPSTREAM)/dv/cosim \
	-CFLAGS -I$(IBEX_UPSTREAM)/dv/cosim \
	-CFLAGS -I$(SPIKE_ROOT)/include \
	-CFLAGS -I$(SPIKE_ROOT)/include/softfloat \
	-CFLAGS -I$(SPIKE_ROOT)/include/fesvr \
	-CFLAGS -std=c++17 \
	-LDFLAGS -L$(SPIKE_ROOT)/lib \
	-LDFLAGS -Wl,-rpath,$(SPIKE_ROOT)/lib \
	-LDFLAGS -lriscv -LDFLAGS -lsoftfloat -LDFLAGS -lfesvr -LDFLAGS -ldisasm
endif


# include cocotb's make rules to take care of the simulator setup
# Mutant substitution: for every file in $(MUTANT_DIR)/, replace any entry in
# VERILOG_SOURCES whose basename matches with the mutant path. This must happen
# before cocotb's rules are included.
ifdef MUTANT
MUTANT_FILES := $(wildcard $(MUTANT_DIR)/*.sv)
define __apply_mut
VERILOG_SOURCES := $$(foreach s,$$(VERILOG_SOURCES),$$(if $$(filter $(notdir $(1)),$$(notdir $$(s))),$(1),$$(s)))
endef
$(foreach f,$(MUTANT_FILES),$(eval $(call __apply_mut,$(f))))
$(info [mutant $(MUTANT)] substituted: $(notdir $(MUTANT_FILES)))
endif

include $(shell cocotb-config --makefiles)/Makefile.sim
