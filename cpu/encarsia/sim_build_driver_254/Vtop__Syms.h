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
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___10469_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___10855_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___10982_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11109_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11238_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11367_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11431_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11563_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11694_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11823_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___11889_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12019_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12145_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12274_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12402_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12531_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12597_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___12728_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__cs_registers_i___13053_;
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
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__alu_i___527_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__ex_block_i__alu_i___591_;
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
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3139_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3160_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3168_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3204_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3237_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3270_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3278_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3289_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3300_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3308_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3313_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3332_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3339_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3359_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3436_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3453_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3476_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3484_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3539_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3568_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3576_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3593_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3598_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3604_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3609_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3641_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3650_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3654_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3660_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3676_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3695_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3699_;
    ::VerilatedScope* __Vscopep_encarsia_tb__u_dut__id_stage_i__decoder_i___3715_;
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
