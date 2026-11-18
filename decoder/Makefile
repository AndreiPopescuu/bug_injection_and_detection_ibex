# cocotb + Verilator build for the CRT decoder testbench.
#
#   make                         # 1 seed, default profile, RV32B=None
#   make RV32B=3 CRT_N=5000      # Full bitmanip, more stimuli
#   make CRT_SEED=7 CRT_PROFILE=pure_random
#
# Each RTL configuration gets its own build dir (parameters are baked in at
# Verilation time), so switching RV32B/RV32M does not reuse a stale model.

SIM           ?= verilator
TOPLEVEL_LANG ?= verilog

RV32E ?= 0
RV32M ?= 2
RV32B ?= 0
BTALU ?= 1

CRT_SEED    ?= 0
CRT_N       ?= 2000
CRT_PROFILE ?= default
CRT_OUT     ?= $(PWD)/results/single
PAPER_MODE  ?= 0
LLM_MODULE  ?= crt.llm_runs.C_run1_p1
export CRT_SEED CRT_N CRT_PROFILE CRT_OUT RV32B RV32M PAPER_MODE LLM_MODULE

RTL_DIR ?= $(PWD)/rtl

VERILOG_SOURCES += $(RTL_DIR)/ibex_pkg.sv \
                   $(RTL_DIR)/ibex_decoder.sv \
                   $(PWD)/tb/ibex_decoder_crt_wrap.sv

TOPLEVEL = ibex_decoder_crt_wrap
MODULE   = test_crt_decoder

SIM_BUILD ?= sim_build_e$(RV32E)_m$(RV32M)_b$(RV32B)_bt$(BTALU)

EXTRA_ARGS += -GRV32E=$(RV32E) -GRV32M=$(RV32M) -GRV32B=$(RV32B) -GBranchTargetALU=$(BTALU) \
              --coverage-line --coverage-toggle --coverage-user \
              -Wno-fatal -CFLAGS "-std=c++14 -O2"

# Set WAVES=1 to dump an FST waveform (slow for big runs).
ifeq ($(WAVES),1)
EXTRA_ARGS += --trace-fst --trace-structs
endif

include $(shell cocotb-config --makefiles)/Makefile.sim

clean::
	rm -rf sim_build_* results.xml coverage.dat __pycache__ crt/__pycache__
