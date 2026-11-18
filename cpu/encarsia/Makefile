# Encarsia Ibex Verilator build makefile.
#
# Usage:
#   make DUT_MODULE=ibex_golden_driver   DUT_VERILOG=converted/reference_driver.v  BUILD=golden sim
#   make DUT_MODULE=ibex_bug_driver_254  DUT_VERILOG=converted/driver_254.v        BUILD=bug_254 sim
#
# BUILD selects per-variant build dir so builds don't collide.

TOPLEVEL_LANG := verilog
TOPLEVEL      := encarsia_tb
MODULE        := test_encarsia
SIM           := verilator
EXTRA_ARGS    += --trace -Wno-fatal
# Code coverage: line + toggle. Produces coverage.dat under SIM_BUILD dir
# after simulation. Parse with `verilator_coverage` for report.
EXTRA_ARGS    += --coverage-line --coverage-toggle
EXTRA_ARGS    += -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-UNOPTFLAT -Wno-WIDTH -Wno-CASEOVERLAP -Wno-LATCH -Wno-CASEINCOMPLETE -Wno-UNUSED
EXTRA_ARGS    += -Wno-DECLFILENAME -Wno-PINCONNECTEMPTY -Wno-IMPLICIT -Wno-ASCRANGE
EXTRA_ARGS    += -Wno-PINMISSING -Wno-SELRANGE -Wno-STMTDLY

# Default DUT (override from command line)
DUT_MODULE   ?= ibex_golden_driver
DUT_VERILOG  ?= converted/reference_driver.v
BUILD        ?= golden

SIM_BUILD    := sim_build_$(BUILD)
COCOTB_RESULTS_FILE := results_$(BUILD).xml

# Pass Verilog `define macro to pick the right DUT module at compile time
COMPILE_ARGS += +define+DUT_MODULE=$(DUT_MODULE)

VERILOG_SOURCES := $(abspath encarsia_tb.sv) $(abspath $(DUT_VERILOG))

include $(shell cocotb-config --makefiles)/Makefile.sim

# Convenience: build without running
build:
	$(MAKE) -f $(firstword $(MAKEFILE_LIST)) SIM_BUILD=$(SIM_BUILD) \
	  DUT_MODULE=$(DUT_MODULE) DUT_VERILOG=$(DUT_VERILOG) BUILD=$(BUILD) \
	  sim

.PHONY: build
