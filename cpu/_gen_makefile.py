"""One-shot script: derive our Makefile from companion repo's by replacing $(PWD) with $(IBEX_CPU_ROOT) and switching MODULE."""
import re
from pathlib import Path

SRC = Path("/home/andre/ibex-coverage-experiments/cpu/Makefile")
DST = Path("Makefile")

txt = SRC.read_text()
# $(PWD)/... -> $(IBEX_CPU_ROOT)/...
txt = txt.replace("$(PWD)", "$(IBEX_CPU_ROOT)")

# Prepend our variable definition and MODULE override. Keep companion's SIM/CONFIG logic.
header = """# Derived from ../../../../ibex-coverage-experiments/cpu/Makefile by _gen_makefile.py.
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

"""

# Replace MODULE line (there's one `MODULE = cocotb_ibex` in companion)
txt = re.sub(r"^MODULE\s*=\s*cocotb_ibex\s*$",
             "MODULE ?= test_random_cpu",
             txt, flags=re.MULTILINE)

# Override SIM_BUILD so builds live in our tree, not companion's
txt = txt.replace("SIM_BUILD     := sim_build_max",
                  "SIM_BUILD     := $(abspath ./sim_build_max)")
txt = txt.replace("SIM_BUILD     := sim_build",
                  "SIM_BUILD     := $(abspath ./sim_build)")

DST.write_text(header + txt)
print(f"wrote {DST}")
print(f"  IBEX_CPU_ROOT refs: {txt.count('IBEX_CPU_ROOT')}")
print(f"  MODULE line: {[l for l in (header+txt).splitlines() if l.startswith('MODULE')]}")
