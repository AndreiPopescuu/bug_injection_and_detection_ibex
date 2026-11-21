// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    const bool __Vm_isRoot;
    std::string __Vm_topNames[2];
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    union {
        struct {
            Vtop___024root                 TOP;
        } vlInst;
    };

    // SCOPE NAMES
    ::VerilatedScope* __Vscopep_TOP;
    ::VerilatedScope* __Vscopep_encarsia_tb;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___1685_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2071_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2198_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2325_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2454_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2583_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2647_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2779_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___2910_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3039_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3105_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3235_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3361_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3490_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3618_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3747_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3813_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___3944_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___4269_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__gen_trigger_regs__02eu_tselect_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__mcycle_counter_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__minstret_counter_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_cpuctrl_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_dcsr_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_depc_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_dscratch0_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_dscratch1_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mcause_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mepc_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mie_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mscratch_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mstack_cause_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mstack_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mstack_epc_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mstatus_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mtval_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i__u_mtvec_csr;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__alu_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__alu_i___143_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__alu_i___207_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___788_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___790_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___792_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___794_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___796_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___798_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___800_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___802_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___804_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___806_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___808_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___825_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___829_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___836_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___839_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___848_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__genblk3__02egen_multdiv_fast__02emultdiv_i___858_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___630_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___635_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___747_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___750_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___753_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___756_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___759_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___762_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___765_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___768_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___771_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___774_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___796_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i___798_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1913_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1924_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1932_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1940_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1946_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1958_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1966_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1972_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1976_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1985_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1996_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___1999_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___2002_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___2005_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___2008_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___2011_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__controller_i___2017_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___0958_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___0979_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___0987_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1023_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1056_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1089_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1097_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1108_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1119_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1127_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1132_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1151_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1158_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1178_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1255_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1272_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1295_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1303_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1358_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1387_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1395_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1412_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1417_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1423_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1428_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1460_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1469_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1473_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1479_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1495_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1514_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1518_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___1534_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i___094_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i___099_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___308_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___320_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___332_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___348_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___373_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___383_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___403_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___416_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___434_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___446_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___458_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__compressed_decoder_i___463_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__gen_prefetch_buffer__02eprefetch_buffer_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__if_stage_i__gen_prefetch_buffer__02eprefetch_buffer_i__fifo_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___633_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___639_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___643_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___647_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___652_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___656_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___666_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___671_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___674_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___678_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___696_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___713_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___718_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___729_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___734_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___743_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___754_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___762_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__load_store_unit_i___773_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__wb_stage_i;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, Vtop* modelp, const char* namep, bool isRoot);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return vlInst.TOP.vlNamep; }
};

#endif  // guard
