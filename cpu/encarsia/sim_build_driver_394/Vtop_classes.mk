# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# DPI enabled?  0/1
VM_DPI = 1
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1
# VPI enabled?  0/1 (from --vpi)
VM_VPI = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vtop \
  Vtop___024root__0 \
  Vtop___024root__1 \
  Vtop___024root__2 \
  Vtop___024root__3 \
  Vtop___024root__4 \
  Vtop___024root__5 \
  Vtop___024root__6 \
  Vtop___024root__7 \
  Vtop___024root__8 \
  Vtop___024root__9 \
  Vtop___024root__10 \
  Vtop___024root__11 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vtop__ConstPool__0__Slow \
  Vtop___024root__Slow \
  Vtop___024root__0__Slow \
  Vtop___024root__1__Slow \
  Vtop___024root__2__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vtop__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vtop__Syms__Slow \
  Vtop__RtmdActSetTable__Slow \
  Vtop__RtmdDataTypeTable__0__Slow \
  Vtop__RtmdDataTypeTable__Slow \
  Vtop__RtmdGlobalTable__0__Slow \
  Vtop__RtmdGlobalTable__Slow \
  Vtop__RtmdVarTypeTable__0__Slow \
  Vtop__RtmdVarTypeTable__Slow \
  Vtop__RtmdHierTable__0__Slow \
  Vtop__RtmdHierTable__1__Slow \
  Vtop__RtmdHierTable__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_vpi \
  verilated_rtmd \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
