// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__102(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__102\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::QData/*63:0*/ __Vdfg_Regularize_20683;
    ::QData/*63:0*/ __Vdfg_Regularize_20684;
    ::QData/*63:0*/ __Vdfg_Regularize_20685;
    ::QData/*63:0*/ __Vdfg_Regularize_20686;
    ::QData/*63:0*/ __Vdfg_Regularize_20687;
    ::QData/*63:0*/ __Vdfg_Regularize_20688;
    ::QData/*63:0*/ __Vdfg_Regularize_20689;
    ::QData/*63:0*/ __Vdfg_Regularize_20690;
    ::QData/*63:0*/ __Vdfg_Regularize_20691;
    ::QData/*63:0*/ __Vdfg_Regularize_20692;
    ::QData/*63:0*/ __Vdfg_Regularize_20693;
    ::QData/*63:0*/ __Vdfg_Regularize_20694;
    // Body
    __Vdfg_Regularize_20683 = 0;
    __Vdfg_Regularize_20684 = 0;
    __Vdfg_Regularize_20685 = 0;
    __Vdfg_Regularize_20686 = 0;
    __Vdfg_Regularize_20687 = 0;
    __Vdfg_Regularize_20688 = 0;
    __Vdfg_Regularize_20689 = 0;
    __Vdfg_Regularize_20690 = 0;
    __Vdfg_Regularize_20691 = 0;
    __Vdfg_Regularize_20692 = 0;
    __Vdfg_Regularize_20693 = 0;
    __Vdfg_Regularize_20694 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___45_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___46_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_id_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01190_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01188_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01189_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01199_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01200_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01024_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01023_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01022_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01112_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01111_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01110_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01127_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01125_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01126_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01153_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01151_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01152_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01002_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01000_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01001_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01057_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01055_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01056_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01179_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01177_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01178_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___06_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___05_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___04_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___03_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00477_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00476_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00475_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00474_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___17_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___18_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i
            : (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                         >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___20_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___17_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___18_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i
            : (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                         >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___20_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___17_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___18_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___20_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08860_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08859_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08858_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08857_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___45_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09501_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01190_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09505_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09439_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01024_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09471_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09477_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09487_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09431_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01002_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09451_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01057_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09497_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___08_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00477_;
    __Vdfg_Regularize_20694 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___19_)));
    __Vdfg_Regularize_20693 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___19_)));
    __Vdfg_Regularize_20692 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20691 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20690 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20689 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20688 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20687 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20686 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20685 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20684 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    __Vdfg_Regularize_20683 = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___17_)) 
                                << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___19_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10387_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08860_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00212_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09501_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00213_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09505_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00214_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09487_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00223_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09497_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___08_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = __Vdfg_Regularize_20694;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_ 
        = __Vdfg_Regularize_20694;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = __Vdfg_Regularize_20693;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_ 
        = __Vdfg_Regularize_20693;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20692;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20692;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20691;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20691;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20690;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20690;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20689;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20689;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20688;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20688;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20687;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20687;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20686;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20686;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20685;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20685;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20684;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20684;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
        = __Vdfg_Regularize_20683;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_ 
        = __Vdfg_Regularize_20683;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10387_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10387_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01781_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00212_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01777_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00213_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00214_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00223_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00166_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__g_counter_narrow__02eunused_counter_load 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_load 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___01_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01783_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01781_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01782_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01779_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01777_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01778_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01061_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01060_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01059_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01058_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01006_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01005_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01004_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01003_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_data_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09589_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01783_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09587_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01779_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09453_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09433_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01006_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___3_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__wr_data_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09589_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00182_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09453_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09433_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___0_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00181_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00182_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01066_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01067_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01013_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01011_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01012_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09455_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09435_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00189_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09427_) 
             << 0x0000001cU) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09447_) 
                                << 0x00000010U)) | 
           ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09439_) 
                << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09443_) 
                           << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09477_) 
                                     << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09481_) 
                                                  << 2U) 
                                                 | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09557_) 
                                                     << 1U) 
                                                    | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09491_)))) 
             << 9U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09473_) 
                         << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09459_) 
                                    << 5U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09463_) 
                                              << 4U))) 
                       | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09467_) 
                           << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09471_) 
                                      << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09455_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00207_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09431_) 
            << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09435_) 
                       << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09451_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01817_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01849_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00207_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01819_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01818_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01817_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01816_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01851_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01850_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01849_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01848_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09607_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01819_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09623_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01851_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09607_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09623_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_ 
        = ((0x000001ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_) 
           | (0xfffffe00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_ 
        = ((0xffffffc3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_) 
           | (0x0000003cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00877_ 
        = (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_ 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00881_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00757_ 
        = (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_ 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00765_ 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00156_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00498_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00590_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00493_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00585_ 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00838_ 
        = (0x0000000fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                          >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00954_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00674_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00686_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_) 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00768_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00767_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00766_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00765_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00496_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00495_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00494_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00493_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00956_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00955_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00954_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00676_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00675_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00674_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00673_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00688_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00687_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00686_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00685_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09317_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00768_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00496_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09411_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00956_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09271_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00676_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09277_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00688_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00770_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09317_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00497_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09181_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00957_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09411_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00677_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09271_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00689_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09277_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00772_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00770_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00771_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00500_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00499_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00498_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00497_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00960_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00959_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00957_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00680_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00677_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00679_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00692_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00691_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00689_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09319_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00772_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09183_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00500_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09413_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00960_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09273_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00680_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09279_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00692_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00243_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09319_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00501_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09183_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00962_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09413_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00682_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09273_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09279_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00882_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00243_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00964_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00963_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00962_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00684_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00682_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00683_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00696_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00695_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00694_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00884_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00883_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00882_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00881_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09415_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00964_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09275_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00684_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09281_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00696_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09375_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00884_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00246_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09415_) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09281_) 
                       << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09275_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00227_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09375_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00837_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00246_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_ 
        = ((0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00227_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00840_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00839_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00838_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00837_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09353_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00840_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00842_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09353_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00844_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00842_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00843_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09355_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00844_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00240_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09355_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00502_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00240_) 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00594_ 
        = (7U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00240_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00504_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00503_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00502_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00501_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09185_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00504_;
}

void Vtop___024root___nba_comb__TOP__111(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__111\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___165_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___163_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___164_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___286_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___286_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___047_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___045_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___046_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___010_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___050_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___048_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___050_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___011_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_new_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___071_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___069_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___062_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___060_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___061_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___066_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___168_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___166_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___167_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___071_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___062_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___287_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___037_ 
        = (::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___018_) 
                     << 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___015_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___065_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___063_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___064_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___180_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___178_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___179_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___096_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___065_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___291_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___056_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___054_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___055_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___072_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___073_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___086_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___084_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___085_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___092_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___090_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___091_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___076_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___110_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___108_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___109_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___098_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___097_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___016_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___291_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___143_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___153_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___151_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___152_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___092_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___098_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___303_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___301_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___019_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___282_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___023_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___093_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___025_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___020_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___099_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___211_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___303_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___207_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___183_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___181_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___182_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___04_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_out;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___282_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___089_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___087_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___088_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___093_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___094_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___113_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___111_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___112_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___101_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___099_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___100_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___292_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___183_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___04_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___134_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___089_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___095_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___113_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___101_;
    vlSelfRef.encarsia_tb__DOT__instr_req_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__prefetch_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___134_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___190_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___024_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___026_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___114_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___028_;
    vlSelfRef.__VprimaryPorts.instr_req_o = vlSelfRef.encarsia_tb__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__prefetch_busy;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___192_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___190_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___191_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___195_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___193_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___194_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___186_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___184_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___185_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___116_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___114_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___115_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___102_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___103_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___295_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___296_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___293_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___186_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___09_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ctrl_busy) 
         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_busy));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___296_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___292_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___187_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___293_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___202_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___10_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT___09_) 
         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_busy));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___238_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n) 
           >> 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___237_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_n;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___189_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___187_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___188_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___204_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___202_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___203_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___198_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___196_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___197_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__core_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___10_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___239_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___238_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___237_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___294_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___299_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___297_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___198_;
    vlSelfRef.encarsia_tb__DOT__core_busy_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__core_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___311_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___299_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___295_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___297_;
    vlSelfRef.__VprimaryPorts.core_busy_o = vlSelfRef.encarsia_tb__DOT__core_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___311_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___311_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n) 
           >> 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___245_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_n;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___199_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___200_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___248_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___247_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___246_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___245_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___298_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___313_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___298_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___294_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___313_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___313_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___242_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n) 
           >> 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___241_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_n;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___243_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___242_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___241_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___312_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___244_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_s 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___312_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___312_;
}

void Vtop___024root___nba_comb__TOP__116(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__116\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347;
    ::IData/*31:0*/ __Vdfg_Regularize_20705;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347 = 0;
    __Vdfg_Regularize_20705 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0933_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0931_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0934_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0935_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0933_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0936_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0188_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0935_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0945_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0946_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0188_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0947_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0945_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0948_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0949_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0947_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0950_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0949_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0957_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0958_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0181_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0959_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0957_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0960_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0959_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1085_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1084_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1083_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1082_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1081_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346 
        = (0x00000019U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0136_) 
                           << 2U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0171_) 
                                     << 1U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___b_346))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_526.v:42011: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1966_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___s_347));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_526.v", 42011, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1966___Vfuncout_344;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__halt_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0262_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__halt_if)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0218_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0261_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0262_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0219_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0218_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0263_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0219_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1015_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1016_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_in_ready_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1166_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1017_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1015_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1018_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_in_ready_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0129_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___03_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready) 
         & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT___06_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_in_ready;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1011_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1012_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0129_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_iside_wait 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___03_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1013_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1011_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1014_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__iside_wait_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_iside_wait;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_ready 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___022_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0149_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1013_;
    __Vdfg_Regularize_20705 = (::IData)((1U | (((((
                                                   ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__div_wait_i) 
                                                    << 3U) 
                                                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mul_wait_i) 
                                                      << 2U)) 
                                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_compressed_i) 
                                                      << 1U) 
                                                     | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_taken_i))) 
                                                 << 9U) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__branch_i) 
                                                    << 8U) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__jump_i) 
                                                       << 7U) 
                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_store_i) 
                                                         << 6U)))) 
                                               | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mem_load_i) 
                                                    << 5U) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__iside_wait_i) 
                                                       << 4U) 
                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dside_wait_i) 
                                                         << 3U))) 
                                                  | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_i) 
                                                     << 2U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1003_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1004_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0149_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00062_ 
        = __Vdfg_Regularize_20705;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = __Vdfg_Regularize_20705;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___147_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1005_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1003_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1006_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_mhpmcounter_incr_1 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__g_mcountinhibit_reduced__02eunused_mhphcounter_incr 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
           >> 0x0000000dU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00292_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00295_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00298_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00301_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00304_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00307_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00310_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00313_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00316_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00319_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00322_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___265_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__ready_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1005_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00294_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00292_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00293_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00297_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00295_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00296_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00300_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00298_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00299_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00303_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00301_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00302_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00306_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00304_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00305_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00309_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00307_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00308_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00312_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00310_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00311_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00315_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00313_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00314_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00318_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00316_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00317_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00321_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00319_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00320_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00324_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00322_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00323_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_ready_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___265_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00257_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00294_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00258_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00259_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00260_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00303_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00261_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00306_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00262_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00263_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00312_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00264_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00315_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00265_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00266_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00321_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00267_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00257_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00258_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09079_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00260_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00261_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00262_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09082_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00263_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09083_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00264_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00265_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00266_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00267_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08965_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08870_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08877_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08884_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08891_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08898_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08905_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08912_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09083_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08919_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08926_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08933_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08965_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08870_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08877_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08884_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08891_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08898_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08905_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08912_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08919_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08926_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08933_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___12_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_inc_i;
}

void Vtop___024root___nba_comb__TOP__119(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__119\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vdfg_Regularize_20696;
    ::CData/*0:0*/ __Vdfg_Regularize_20706;
    // Body
    __Vdfg_Regularize_20696 = 0;
    __Vdfg_Regularize_20706 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___032_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___033_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_));
    __Vdfg_Regularize_20706 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_ready_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___027_ 
        = __Vdfg_Regularize_20706;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___028_ 
        = __Vdfg_Regularize_20706;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___069_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___027_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___029_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___028_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___070_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___036_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___164_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_en;
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 1U));
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 2U));
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_ 
            = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed));
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_ 
            = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
                     >> 1U));
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___116_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___038_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___061_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___062_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___164_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___166_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___170_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___176_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___178_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___116_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___111_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___110_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___037_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___036_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___061_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___040_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___039_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___062_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___058_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___057_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___062_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___061_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___060_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___059_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___066_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___065_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___064_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___063_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___070_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___069_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___068_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___073_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___072_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___071_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___077_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___076_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___075_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___082_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___081_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___080_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___079_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___086_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___085_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___084_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___083_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___090_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___089_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___088_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___087_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___059_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___060_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___064_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_popped) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___073_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___035_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___037_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___074_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___038_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___040_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___058_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___062_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___173_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___090_;
    __Vdfg_Regularize_20696 = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_) 
                                << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_) 
                                           << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___044_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___074_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___073_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___162_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___162_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___163_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___167_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___171_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___173_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___175_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___177_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = __Vdfg_Regularize_20696;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___011_ 
        = __Vdfg_Regularize_20696;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___077_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___079_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___081_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___083_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___085_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___087_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___076_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___077_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___079_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___080_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___081_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___115_)
                  : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___083_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___113_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___084_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___085_)
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___114_)
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___086_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___087_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___112_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___086_;
}

void Vtop___024root___nba_comb__TOP__131(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__131\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320;
    ::QData/*39:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322;
    ::SData/*9:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0939_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0937_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0940_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0941_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0939_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0942_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0943_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0941_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0944_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0943_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0951_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0952_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0044_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0953_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0951_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0954_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0955_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0953_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0956_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0197_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0955_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0961_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0962_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0197_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0963_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0961_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0964_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0963_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1037_) 
               << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1036_) 
                          << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1035_) 
                                    << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1034_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1033_))) 
            << 5U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1032_) 
                        << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1031_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1030_) 
                                             << 2U))) 
                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1029_) 
                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1028_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
        = (((::QData)((::IData)((0x00014300U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0100_) 
                                                 << 4U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0167_))))) 
            << 0x00000014U) | (::QData)((::IData)((0x00005550U 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0192_) 
                                                       << 0x00000010U) 
                                                      | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0057_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320 
        = (0x0000000fU & (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                 | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                                | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                               | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                              | (0x0010U == (0x0010U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                             | (0x0020U == (0x0020U 
                                            & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                            | (0x0040U == (0x0040U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))) 
                           | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))
                           ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                               ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322)
                               : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                >> 4U))
                                   : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                       ? (::IData)(
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                    >> 8U))
                                       : ((8U == (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                           ? (::IData)(
                                                       (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                        >> 0x0cU))
                                           : ((0x0010U 
                                               == (0x0010U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                               ? (::IData)(
                                                           (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                            >> 0x10U))
                                               : ((0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                >> 0x14U))
                                                   : 
                                                  ((0x0040U 
                                                    == 
                                                    (0x0040U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                 >> 0x18U))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                                 >> 0x1cU)))))))))
                           : ((0x0100U == (0x0100U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                               ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                            >> 0x20U))
                               : ((0x0200U == (0x0200U 
                                               & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___b_322 
                                                >> 0x24U))
                                   : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0200U 
                                                == 
                                                (0x0200U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                               << 4U) 
                                              | (((0x0100U 
                                                   == 
                                                   (0x0100U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                  << 3U) 
                                                 | ((0x0080U 
                                                     == 
                                                     (0x0080U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                    << 2U))) 
                                             | (((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                 << 1U) 
                                                | (0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))))))))))) {
        if ((0U != ((((((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                        << 4U) | (((0x0100U == (0x0100U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                   << 3U) | ((0x0080U 
                                              == (0x0080U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                             << 2U))) 
                      | (((0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                          << 1U) | (0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_526.v:41822: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1913_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_526.v", 41822, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___Vfuncout_320;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
}

void Vtop___024root___nba_comb__TOP__133(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__133\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___16_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___06_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___16_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___06_)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___07_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___05_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___00_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___05_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___02_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_d;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__20(Vtop___024root* vlSelf);
void Vtop___024root____VnbaClosureFunc_0(Vtop__Syms* __restrict vlSymsp, VlClosure<Vtop__Syms>* __Vclosurep);
void Vtop___024root____VnbaClosureFunc_1(Vtop__Syms* __restrict vlSymsp, VlClosure<Vtop__Syms>* __Vclosurep);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__26(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__29(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__35(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__43(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__45(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__46(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__49(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__51(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__55(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__57(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__59(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__60(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__68(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__70(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__72(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__73(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__74(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__75(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__76(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__77(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__78(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__79(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__80(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__81(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__82(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__83(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__84(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__85(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__88(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__89(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__90(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__95(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__96(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__99(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__100(Vtop___024root* vlSelf);

void Vtop___024root___eval_body__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_body__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((((4ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___302_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___300_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___209_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___234_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___205_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___217_ 
                = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___225_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___220_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___217_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___219_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___228_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___225_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___227_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___306_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___220_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___308_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___228_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___221_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___306_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___229_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___308_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___162_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_new_id 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_id 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_instr_new_id 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_new_id;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT___06_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_id)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_id;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0235_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0205_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0184_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0193_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1176_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0118_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0127_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0142_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0178_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1176_;
        }
    }
    if ((((0x000000000c000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09038_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09038_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00522_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_q;
        }
    }
    if ((((0x0000030000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__3
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___2_)
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09026_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09026_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00598_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_q;
        }
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__6
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_)
                    : 4U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09032_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09032_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00554_ 
                = (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00570_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q) 
                         >> 2U));
        }
    }
    if ((((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__7
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_pc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___39_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_compressed_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___37_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_count_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___35_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___45_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_we_wb_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___43_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_waddr_wb_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___41_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___33_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__pc_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_pc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___08_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux__05b0__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_fwd_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_wdata_wb_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_waddr_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_waddr_wb_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___21_ 
                = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___24_ 
                = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___23_ 
                = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___22_ 
                = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_instr_type_q))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__pc_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_fwd_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_fwd_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_waddr_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___32_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_we_wb_q) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___22_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_fwd_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_fwd_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00846_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1122_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_fwd_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1126_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_fwd_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0287_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0290_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_wb_i;
        }
    }
    if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__11
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___076_) 
                    << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___080_) 
                               << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___084_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___088_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___086_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_)) 
                              << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
                = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___078_)) 
                               << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___082_))) 
                             >> 0x00000020U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___051_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___052_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___021_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___051_) 
                   & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                      >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___097_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___099_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___095_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___093_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___261_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___101_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___261_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___130_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___130_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___060_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_if_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_if_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00854_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00377_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i;
        }
    }
    if ((((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((((0x3000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__13
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___08_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08952_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08952_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tselect_rdata 
                = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00372_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00367_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00373_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00372_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00368_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00367_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09071_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00373_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09069_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00368_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00340_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09071_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00331_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09069_;
        }
    }
    if ((((0xc000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__14
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___08_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08940_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08940_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_control 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00349_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tmatch_control_rdata 
                = (0x28001048U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_control) 
                                  << 2U));
        }
    }
    if ((((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__16
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_)
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09002_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09002_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00099_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09029_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09029_;
        }
    }
    if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((((0x0030000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__18
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___2_)
                    : 0x10U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09044_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09044_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00100_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_d 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08863_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08862_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00966_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00494_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 4U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00685_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 5U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01848_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00992_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 4U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01003_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01047_ 
                = (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_tw_o 
                = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_mie_o 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 5U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09035_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_tw 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_tw_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_mie 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_mie_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09035_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_tw_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_tw;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_mie_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_mie;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1143_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_tw_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1142_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_mie_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_tw_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1143_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_mie_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1142_;
        }
    }
    if ((((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__19
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT___2_)
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08972_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08972_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__icache_enable_o 
                = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dummy_instr_mask_o 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q) 
                         >> 3U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dummy_instr_en_o 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__data_ind_timing_o 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q) 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__icache_enable 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__icache_enable_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__dummy_instr_mask 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dummy_instr_mask_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__dummy_instr_en 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dummy_instr_en_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_ind_timing 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__data_ind_timing_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__icache_enable_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__icache_enable;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__dummy_instr_mask_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__dummy_instr_mask;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__dummy_instr_en_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__dummy_instr_en;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__data_ind_timing_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_ind_timing;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_ind_timing;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eunused_icen 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__icache_enable_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_no_dummy_instr__02eunused_dummy_mask 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__dummy_instr_mask_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_no_dummy_instr__02eunused_dummy_en 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__dummy_instr_en_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___51_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1278_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0399_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1315_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___51_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1115_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1278_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0737_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1315_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___485_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___476_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1116_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1115_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___484_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___485_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___475_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___476_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1633_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1116_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___564_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___484_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___565_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___475_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0645_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1633_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___483_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___564_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___474_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___565_;
        }
    }
    if ((((0x0300000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__21
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09050_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09050_;
        }
    }
    if ((((0x0000000030000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__22
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09020_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09020_;
        }
    }
    if ((((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__23
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08996_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08996_;
        }
    }
    if ((((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__24
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08990_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08990_;
        }
    }
    if ((((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__25
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08984_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08984_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_depc_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_depc 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_depc_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_depc_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_depc;
        }
    }
    if ((((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__26
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09008_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09008_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00102_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mepc_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09041_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mepc 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mepc_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09041_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mepc_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mepc;
        }
    }
    if ((((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__27
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_
                    : 1U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09056_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09056_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__unused_csr_mtvec 
                = (0x000000ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___023_ 
                = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i);
        }
    }
    if ((((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__28
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08946_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09123_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08946_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00021_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09123_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09123_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_value 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00378_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tmatch_value_rdata 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_value;
        }
    }
    if ((((0x0c00000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__29
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___2_
                    : 0x40000003U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08978_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08978_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00970_ 
                = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01816_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01114_ 
                = (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 6U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00981_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                   >> 0x0000001cU);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01025_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000eU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01036_ 
                = (0x00000fffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                                  >> 0x00000010U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01069_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 5U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01080_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 4U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01091_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 3U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01128_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000bU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01154_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 9U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01691_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000aU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01014_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000fU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01058_ 
                = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01102_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01117_ 
                = (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000cU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_single_step_o 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_ebreakm_o 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000fU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_ebreaku_o 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                         >> 0x0000000cU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_single_step 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_single_step_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_ebreakm 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_ebreakm_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_ebreaku 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_ebreaku_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_single_step_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_single_step;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreakm_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_ebreakm;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreaku_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_ebreaku;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1159_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_single_step_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1155_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreakm_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1156_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreaku_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1159_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1155_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1156_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0818_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0817_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0818_)
                    ? 4U : 3U);
        }
    }
    if ((((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__30
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08935_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09098_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08935_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00033_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09098_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09098_;
        }
    }
    if ((((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__31
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08928_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09097_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08928_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00032_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09097_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09097_;
        }
    }
    if ((((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__32
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08921_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09096_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08921_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00031_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09096_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09096_;
        }
    }
    if ((((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__33
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08914_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09095_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08914_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00061_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09095_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09095_;
        }
    }
    if ((((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__34
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08907_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09094_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08907_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00060_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09094_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09094_;
        }
    }
    if ((((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__35
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08900_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09093_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08900_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00059_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09093_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09093_;
        }
    }
    if ((((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__36
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08893_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09092_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08893_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00058_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09092_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09092_;
        }
    }
    if ((((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__37
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08886_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09091_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08886_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00057_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09091_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09091_;
        }
    }
    if ((((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__38
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08879_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09090_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08879_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00056_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09090_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09090_;
        }
    }
    if ((((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__39
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___15_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter 
                = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___08_ 
                = ((::IData)(1U) + (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08872_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09089_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08872_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00055_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09089_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09089_;
        }
    }
    if ((((0x0000c00000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__40
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___15_
                    : 0ULL);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___08_ 
                = (1ULL + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08967_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09088_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08967_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00052_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09088_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09088_;
        }
    }
    if ((((0x0003000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__41
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_
                    : 0ULL);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___08_ 
                = (1ULL + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___03_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08960_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09087_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08960_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00030_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09087_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09087_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__42
            if (vlSelfRef.encarsia_tb__DOT__rst_ni) {
                if (((::IData)(vlSelfRef.encarsia_tb__DOT__rf_we_wb) 
                     & (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__rf_waddr_wb)))) {
                    {
                        Vtop___VnbaClosureType_0& __Vclosure = vlSelfRef.__Vnontrivs.__VnbaClosurePool_0.allocate();
                        __Vclosure.m_funcp = &Vtop___024root____VnbaClosureFunc_0;
                        __Vclosure.val0 = vlSelfRef.encarsia_tb__DOT__rf_wdata_wb_ecc;
                        __Vclosure.val1 = (::IData)(vlSelfRef.encarsia_tb__DOT__rf_waddr_wb);
                        vlSelfRef.__Vnontrivs.__Vdly_NbaLocalQueue__encarsia_tb__DOT__rf_mem_0.enqueue(&__Vclosure);
                    }
                }
            } else {
                vlSelfRef.encarsia_tb__DOT__i = 0U;
                while (VL_GTS_III(32, 0x00000020U, vlSelfRef.encarsia_tb__DOT__i)) {
                    {
                        Vtop___VnbaClosureType_1& __Vclosure = vlSelfRef.__Vnontrivs.__VnbaClosurePool_1.allocate();
                        __Vclosure.m_funcp = &Vtop___024root____VnbaClosureFunc_1;
                        __Vclosure.val0 = (0x0000001fU 
                                           & vlSelfRef.encarsia_tb__DOT__i);
                        vlSelfRef.__Vnontrivs.__Vdly_NbaLocalQueue__encarsia_tb__DOT__rf_mem_0.enqueue(&__Vclosure);
                    }
                    vlSelfRef.encarsia_tb__DOT__i = 
                        ((::IData)(1U) + vlSelfRef.encarsia_tb__DOT__i);
                }
            }
            vlSelfRef.__Vnontrivs.__Vdly_NbaLocalQueue__encarsia_tb__DOT__rf_mem_0.commit(vlSymsp);
        }
    }
    if ((((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__43
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___29_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___12_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02erf_we_wb_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___27_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___15_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___24_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___14_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___23_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___13_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___32_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__outstanding_store_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___15_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__outstanding_load_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___14_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_write_wb_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___13_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__outstanding_store_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__outstanding_store_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__outstanding_load_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__outstanding_load_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_write_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_write_wb_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_store_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__outstanding_store_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_load_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__outstanding_load_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_write_wb_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_write_wb;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0417_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_store_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0416_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_load_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0226_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_load_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0221_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_write_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0224_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_write_wb_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0418_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0416_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0417_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1322_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0418_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0181_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1322_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((((0x000000000000d000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___30_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_valid_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___21_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___30_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___25_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done)));
        }
    }
    if ((((0x0000000000001001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0289_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0287_) 
                   == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0288_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0292_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0290_) 
                   == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0291_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1264_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0289_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1265_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0292_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0208_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1264_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0211_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1265_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0210_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0208_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0209_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0213_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0211_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0212_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0101_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0210_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0102_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0213_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0101_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0102_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_a_wb_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0220_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0214_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_b_wb_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0217_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0223_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_a_wb_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_b_wb_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_a_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_b_wb_match;
        }
    }
    if ((((0x0000000000000c01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1181_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1197_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0029_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0041_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0271_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0271_;
        }
    }
    if ((((0x000000000000c300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0631_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__lsu_addr_last_i 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0632_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0279_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0278_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0633_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0634_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__lsu_addr_last_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0631_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0280_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0279_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wb_exception_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0280_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1199_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wb_exception_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wb_exception 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1199_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0420_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wb_exception;
        }
    }
    if ((((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__6
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00556_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00554_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00555_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00572_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00571_)) 
                         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00570_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09211_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00556_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09219_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00572_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00558_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09211_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00574_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09219_;
        }
    }
    if ((((0x0000000000001301ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00848_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00847_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00846_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00845_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09357_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00848_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00849_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09357_;
        }
    }
    if ((((0x00000000000000c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0861_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0860_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0858_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0689_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0688_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0686_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___395_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___397_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___396_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1520_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0861_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1442_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0689_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___071_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___395_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0865_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1520_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0693_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1442_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esv2v_tmp_2094F 
                = (0x0000ffffU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___071_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___001_ 
                = (0x0000ffffU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___071_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__accum 
                = (((::QData)((::IData)((0x0000ffffU 
                                         & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___071_)))))) 
                    << 0x00000012U) | (::QData)((::IData)(
                                                          (0x0003ffffU 
                                                           & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                               << 0x0000000eU) 
                                                              | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                                 >> 0x00000012U))))));
        }
    }
    if ((((0x00000000000000c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((((0x0000000000000cc0ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((((0x000000000000003cULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((((0x003000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__12
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08864_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08863_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08862_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08861_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10388_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08864_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_lsu_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10388_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_lsu 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_lsu_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__g_no_pmp__02eunused_priv_lvl_ls 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_lsu;
        }
    }
    if ((((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__13
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0739_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0738_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0737_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0647_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0646_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0645_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0644_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1464_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0739_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1422_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0647_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0740_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1464_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0648_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1422_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0743_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0742_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0740_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1466_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0743_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0744_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1466_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0747_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0746_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0744_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1468_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0747_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0748_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1468_;
        }
    }
    if ((((0x0330000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__14
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0216_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_pending_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_mie_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0283_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_nm_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0216_));
        }
    }
    if ((((0x0300000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__15
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0833_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0831_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0834_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0241_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0240_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0859_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0857_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0860_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0867_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0865_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0868_))))));
        }
    }
    if ((((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000c011ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__16
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__crash_dump_o[0U] 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mepc;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__crash_dump_o[1U] 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_addr_last;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__crash_dump_o[2U] 
                = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id)) 
                              << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__crash_dump_o[3U] 
                = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id)) 
                               << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if))) 
                             >> 0x00000020U));
            vlSelfRef.encarsia_tb__DOT__crash_dump 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__crash_dump_o[0U];
        }
    }
    if ((((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__17
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00379_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00377_ 
                   == vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00378_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09073_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00379_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00350_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09073_;
        }
    }
    if ((((0x0c00000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__18
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0212_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0255_));
        }
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__19
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1345_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0222_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1346_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0221_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1345_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1346_;
        }
    }
    if ((((0x000300000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__20
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q);
        }
    }
    if ((((0x0003c00000fffff0ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__21(vlSelf);
    }
    if ((((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__22
            vlSelfRef.encarsia_tb__DOT__rf_waddr_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb_o;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__23
            vlSelfRef.encarsia_tb__DOT__rf_rdata_b_ecc 
                = ((0U == (::IData)(vlSelfRef.encarsia_tb__DOT__rf_raddr_b))
                    ? 0U : vlSelfRef.encarsia_tb__DOT__rf_mem
                   [vlSelfRef.encarsia_tb__DOT__rf_raddr_b]);
            vlSelfRef.encarsia_tb__DOT__rf_rdata_a_ecc 
                = ((0U == (::IData)(vlSelfRef.encarsia_tb__DOT__rf_raddr_a))
                    ? 0U : vlSelfRef.encarsia_tb__DOT__rf_mem
                   [vlSelfRef.encarsia_tb__DOT__rf_raddr_a]);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_b_ecc_i 
                = vlSelfRef.encarsia_tb__DOT__rf_rdata_b_ecc;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_a_ecc_i 
                = vlSelfRef.encarsia_tb__DOT__rf_rdata_a_ecc;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_b 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_b_ecc_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_a 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_a_ecc_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_b;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_a_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rdata_a;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1125_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1121_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_a_i;
        }
    }
    if ((((0x000000000000f000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((((0x0030000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__25
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0208_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_tw_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0265_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0208_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        }
    }
    if ((((0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((((0x0000000000003001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__27
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0222_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0220_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0221_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0225_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0223_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0224_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0105_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0222_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0106_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0225_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1123_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0105_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1127_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0106_;
        }
    }
    if ((((0x000000000000c301ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__28
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0421_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0419_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0420_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1323_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0421_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0422_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1323_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0424_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0422_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0423_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1324_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0424_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1324_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0374_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0362_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0375_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0374_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0363_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0362_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1305_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0375_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1299_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0363_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0236_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1305_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0194_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1299_;
        }
    }
    if ((((0x000000000000c0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x00000000000000c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__30
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0751_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0750_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0748_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1470_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0751_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0755_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1470_;
        }
    }
    if ((((0x0330000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__31(vlSelf);
    }
    if ((((0x0f00000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((((0xc00000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__33
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00351_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00349_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00350_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00276_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00351_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etrigger_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00276_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10382_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00276_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__trigger_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10382_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__trigger_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__trigger_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__trigger_match_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__trigger_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1198_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__trigger_match_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1198_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0824_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0820_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i;
        }
    }
    if ((((0x0c00000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__34
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1344_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0212_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0015_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1344_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1344_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0281_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0213_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0281_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0256_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0018_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0213_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0213_;
        }
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__35(vlSelf);
    }
    if ((((0x000000000000f300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__36
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0284_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wb_exception_o) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ready_wb_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0986_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0284_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0985_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0986_)
                    ? 6U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
        }
    }
    if ((((0x000000000000f003ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__37
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0277_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0254_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0277_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0234_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)));
        }
    }
    if ((((0x000000000000f001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__38
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0147_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0145_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0146_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___349_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___350_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___352_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0079_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0147_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___601_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___349_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1102_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0079_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___346_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___601_;
        }
    }
    if ((((0x000000000000fc00ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__39
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___130_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___131_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___132_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___687_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___130_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___037_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___687_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_hold 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___687_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___008_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___037_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___548_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_hold;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___547_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___548_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___572_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___547_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___545_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___572_;
        }
    }
    if ((((0x003000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__40
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0209_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0249_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0265_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_umode 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0209_;
        }
    }
    if ((((0x003000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__41
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00968_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00967_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00966_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00965_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09417_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00968_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00969_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09417_;
        }
    }
    if ((((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__42
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00576_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00575_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00574_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00560_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00558_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00559_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09221_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00576_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09213_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00560_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00577_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09221_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00561_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09213_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00580_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00579_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00577_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00564_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00561_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00563_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09223_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00580_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09215_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00564_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00581_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09223_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00565_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09215_;
        }
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__43(vlSelf);
    }
    if ((((0x000000000000c303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__44
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0635_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0633_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0636_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0237_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0235_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0236_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0195_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0193_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0194_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0635_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0638_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0110_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0237_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0096_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0195_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0639_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0640_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1349_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0238_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0110_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0196_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0096_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0641_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0642_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1348_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0639_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0643_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0641_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0644_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0645_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0643_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0646_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0123_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0645_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0751_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0123_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0752_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0753_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0751_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0754_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0092_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0753_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0092_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1098_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0059_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mtval_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1097_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0001_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0059_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1144_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mtval_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1144_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00709_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__45(vlSelf);
    }
    if ((((0x0330000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__46(vlSelf);
    }
    if ((((0xc00000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000310ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__47
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0214_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0257_));
        }
    }
    if ((((0xcc0000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__48
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0819_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0817_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0820_))))));
        }
    }
    if ((((0x000000000000fc01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__49(vlSelf);
    }
    if ((((0x0c3000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__50
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00972_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00971_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00970_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00969_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09419_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00972_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00973_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09419_;
        }
    }
    if ((((0x0f3000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__51(vlSelf);
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000001303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__52
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00852_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00851_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00850_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00849_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09359_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00852_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00853_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09359_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__53
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1051_[0U] 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1625_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1051_[1U] 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_id_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1051_[2U] 
                = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1635_)) 
                              << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1051_[3U] 
                = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1635_)) 
                               << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i))) 
                             >> 0x00000020U));
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__54(vlSelf);
        Vtop___024root___nba_comb__TOP__55(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003c01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__56(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x00000000000030c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__57(vlSelf);
    }
    if ((((0xcc0000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000313ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__58
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0282_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0214_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0282_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1004_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0952_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0940_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1000_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0946_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0932_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
        }
    }
    if ((((0xcc0000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000310ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__59(vlSelf);
    }
    if ((((0x0f3c00000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__60(vlSelf);
    }
    if ((((0x0ff000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__61
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00584_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00583_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00581_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00568_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00565_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00567_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09225_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00584_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09217_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00568_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00248_ 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09225_) 
                    << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09217_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00586_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00248_;
        }
    }
    if ((((0x0f300f000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__62
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___2_;
        }
    }
    if ((((0x0f300000cc00000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__63
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___2_;
        }
    }
    if ((((0x0f3000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000001313ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__64
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00856_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00855_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00854_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00853_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09361_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00856_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00858_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09361_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00860_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00858_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00859_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09363_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00860_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00195_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09363_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00978_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00195_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00742_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00195_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00637_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00195_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00980_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00979_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00978_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00977_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09423_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00980_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09423_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00162_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09423_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00017_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00162_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__65
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___418_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___417_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___416_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___415_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___504_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___418_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___504_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___044_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a;
        }
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__66
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00382_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00380_) 
                   > (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00381_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09074_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00382_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_priv 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09074_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00463_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_priv;
        }
    }
    if ((((0x0c00000000000003ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__67
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00984_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00983_)
                    ? 4U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00981_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01028_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01027_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01025_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01039_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01036_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01038_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01072_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01071_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01069_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01083_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01082_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01080_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01094_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01093_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01091_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01131_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01130_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01128_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01157_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01156_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01154_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01694_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01693_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01691_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09425_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00984_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09441_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01028_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09445_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01039_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09457_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01072_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09461_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01083_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09465_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01094_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09479_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01131_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09489_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01157_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09555_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01694_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00989_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09425_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01033_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09441_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01044_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09445_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01077_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09457_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01088_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09461_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01099_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09465_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01136_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09479_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01162_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09489_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___01699_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09555_;
        }
    }
    if ((((0x0003c00000fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__68(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__69(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003cc1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__70(vlSelf);
    }
    if ((((0xcf3000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000313ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__71
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0245_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0999_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1000_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0109_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1001_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0999_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1002_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0136_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1001_;
        }
    }
    if ((((0x0f3c0030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__72(vlSelf);
    }
    if ((((0x0c0fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__73(vlSelf);
    }
    if ((((0x0c0fccfff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__74(vlSelf);
    }
    if ((((0x0c0fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__75(vlSelf);
    }
    if ((((0x0f0fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__76(vlSelf);
    }
    if ((((0x0c3fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__77(vlSelf);
    }
    if ((((0x0c0ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__78(vlSelf);
    }
    if ((((0x0f3fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__79(vlSelf);
    }
    if ((((0x0f3fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__80(vlSelf);
    }
    if ((((0xfc0ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__81(vlSelf);
    }
    if ((((0x0f3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__82(vlSelf);
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__83(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__84(vlSelf);
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__85(vlSelf);
    }
    if ((((0x003000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__86
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0267_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0266_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_umode));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0267_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0250_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0025_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0269_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0268_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0270_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0269_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0270_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0251_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0021_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0274_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0273_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0275_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0274_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_pc_change 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0275_;
        }
    }
    if ((((0x000030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__87
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0757_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0756_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0755_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1472_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0757_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0056_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1472_;
        }
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__88(vlSelf);
    }
    if ((((0x0000300000000003ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__89(vlSelf);
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__90(vlSelf);
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3d3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__91
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00744_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00743_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00742_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00741_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00640_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00639_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00638_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00637_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09305_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00744_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09253_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00640_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00746_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09305_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00641_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09253_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00748_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00746_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00747_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00644_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00641_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00643_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09307_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00748_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09255_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00644_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00191_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09307_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00646_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09255_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00870_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00191_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00648_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00646_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00647_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00872_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00871_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00870_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00869_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09257_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00648_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09369_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00872_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00220_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09257_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00158_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09369_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09369_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00821_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00220_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00013_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00158_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08987_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00824_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00823_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00822_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00821_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08987_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09345_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00824_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00826_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09345_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00828_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00826_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00827_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09347_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00828_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00200_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09347_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00938_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00200_;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__92
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00712_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00711_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00710_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00709_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00616_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00615_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00614_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00613_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09289_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00712_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09241_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00616_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00713_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09289_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00617_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09241_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00716_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00713_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00715_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00620_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00617_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00619_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09291_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00716_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09243_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00620_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00718_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09291_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00622_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09243_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00720_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00718_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00719_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00624_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00622_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00623_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09293_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00720_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09245_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00624_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00225_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09293_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00218_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09245_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00789_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00225_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00805_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00218_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00792_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00791_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00790_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00789_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00808_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00807_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00806_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00805_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09329_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00792_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09337_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00808_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00794_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09329_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00810_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09337_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00796_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00794_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00795_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00812_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00810_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00811_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09331_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00796_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09339_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00812_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00209_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09331_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00197_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09339_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00890_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00209_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00914_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00197_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00892_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00891_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00890_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00889_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09379_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00892_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00177_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09379_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09379_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00105_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00177_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09053_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09053_;
        }
    }
    if ((((0xff3ffcffffffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__93
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00524_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00523_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00522_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00521_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09195_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00524_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00526_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09195_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00528_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00526_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00527_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09197_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00528_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00529_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09197_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00532_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00529_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00531_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09199_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00532_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00533_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09199_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00536_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00533_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00535_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09201_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00536_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00232_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09201_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00930_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00232_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00932_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00931_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00930_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00929_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09399_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00932_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00933_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09399_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00936_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00935_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00934_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00933_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09401_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00936_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00937_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09401_;
        }
    }
    if ((((0xff3ffffff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__94
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00600_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00599_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00598_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00597_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09233_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00600_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00602_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09233_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00604_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00602_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00603_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09235_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00604_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00605_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09235_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00608_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00605_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00607_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09237_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00608_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00609_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09237_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00612_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00609_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00611_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09239_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00612_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00230_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09239_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00906_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00230_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00908_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00907_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00906_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00905_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09387_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00908_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00909_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09387_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00912_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00911_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00910_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00909_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09389_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00912_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00913_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09389_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00916_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00915_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00914_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00913_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09391_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00916_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00164_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09391_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09391_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00023_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00164_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09005_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09005_;
        }
    }
    if ((((0x0f3000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__95(vlSelf);
    }
    if ((((0x000030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__96(vlSelf);
    }
    if ((((0xff3ffcffffffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3d3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__97
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00940_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00939_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00938_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00937_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09403_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00940_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00168_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09403_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09403_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00028_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00168_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09011_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09011_;
        }
    }
    if ((((0x0f3c0030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc7ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__98
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___232_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___231_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___230_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___229_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___309_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___232_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___233_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___309_;
        }
    }
    if ((((0x0c0030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__99(vlSelf);
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__100(vlSelf);
    }
    if ((((0x0f3c0030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffcfULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__101
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___236_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___235_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___234_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___233_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___310_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___236_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___210_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___310_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___310_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned 
                = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___138_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___138_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_addr_o;
            vlSelfRef.encarsia_tb__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_addr_o;
            vlSelfRef.__VprimaryPorts.instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__instr_addr_o;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__102(vlSelf);
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__103
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0224_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0245_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0246_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0966_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0224_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0965_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0966_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0967_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0965_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0968_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0967_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0929_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0930_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0156_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0931_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0932_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0929_));
        }
    }
    if ((((0x3c0030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__104
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00342_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00340_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00341_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00333_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00331_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00332_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00273_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00342_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00270_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00333_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00343_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00273_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00334_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00270_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00345_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00343_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00344_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00336_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00334_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00335_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00274_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00345_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00271_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00336_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00346_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00274_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00337_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00271_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00348_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00346_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00347_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00339_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00337_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00338_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00275_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00348_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00272_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00339_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00275_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00272_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09124_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08944_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08950_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09124_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08944_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08950_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___09_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___05_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___09_;
        }
    }
    if ((((0x0c0330000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__105
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___11_ 
                   & (- (::QData)((::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___14_)))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___13_;
        }
    }
    if ((((0x0c3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__106
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0276_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_pc_change) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req_flush_only));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0276_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0992_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0988_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0996_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0233_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__special_req)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0987_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0985_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0988_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0995_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0996_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0225_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0232_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0233_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0989_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0987_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0990_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0997_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0995_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0998_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0225_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0234_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0186_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0989_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0120_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0997_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0962_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0954_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0942_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0958_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0948_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0934_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0226_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0991_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0992_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0186_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1079_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0120_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0993_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0991_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0994_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0088_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1078_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0993_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0039_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0088_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0289_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0263_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__retain_id)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0264_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0289_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0290_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0264_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0290_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1175_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1175_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0334_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0335_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0334_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1285_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0335_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___054_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0155_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___1285_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___055_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___054_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0156_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0154_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0155_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___158_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___055_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0082_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0156_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___158_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0082_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0001_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___0082_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___057_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__107
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00760_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00759_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00758_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00757_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09313_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00760_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00762_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09313_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00764_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00762_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00763_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09315_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00764_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00247_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09315_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00878_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00247_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00880_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00879_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00878_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00877_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09373_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00880_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00237_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09373_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09607_) 
                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09373_) 
                       << 6U) | ((0x0000003cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09607_) 
                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09375_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_ 
                = ((0xfffffe3fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00011_) 
                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00237_) 
                      << 6U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08981_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___08981_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT___2_;
        }
    }
    if ((((0x0f3c3030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc7ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__108
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___224_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___223_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___222_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___221_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___307_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___224_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___036_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___307_;
        }
    }
    if ((((0x0f3c3030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__109
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___252_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___250_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___251_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___314_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___252_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___314_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___256_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___256_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unused_addr_in 
                = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i);
        }
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffcfULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__110
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___083_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___081_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___082_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___107_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___105_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___106_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___177_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___175_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___176_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___022_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___083_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___030_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___107_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___290_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___177_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___185_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___022_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___197_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___030_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___290_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___059_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___057_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___059_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___001_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___100_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d;
        }
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__111(vlSelf);
    }
    if ((((0xff3ffffff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__112
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_;
        }
    }
    if ((((0xff3ffcffffffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__113
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_;
        }
    }
    if ((((0xfffffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Locals
            ::CData/*3:0*/ __Vinline_0__nba_comb__TOP__114___Vdfg_Regularize_20682;
            // Body
            __Vinline_0__nba_comb__TOP__114___Vdfg_Regularize_20682 = 0;
            // Inlined CFunc: _nba_comb__TOP__114
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00588_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00587_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00586_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00585_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09227_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00588_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00589_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09227_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00592_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00591_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00590_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00589_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09229_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00592_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00593_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09229_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00596_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00595_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00594_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00593_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09231_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00596_;
            __Vinline_0__nba_comb__TOP__114___Vdfg_Regularize_20682 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09185_) 
                    << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09231_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00234_ 
                = __Vinline_0__nba_comb__TOP__114___Vdfg_Regularize_20682;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d 
                = (((::IData)(__Vinline_0__nba_comb__TOP__114___Vdfg_Regularize_20682) 
                    << 2U) | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09623_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00103_ 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00234_) 
                    << 2U) | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___00175_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09047_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___09047_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT___2_;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__115
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___06_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___05_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___04_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___03_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___16_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___07_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___08_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___06_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___00_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___08_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___00_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___02_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        }
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__116(vlSelf);
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__117
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0937_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0938_)
                    ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_));
        }
    }
    if ((((0x0f3c3030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__118
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_ 
                = (0x7fffffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)
                                   ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                                      >> 1U) : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___038_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___036_ 
                   + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___037_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___212_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___211_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___210_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___209_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___038_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___302_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___212_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___206_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___005_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___302_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___208_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___207_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___206_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___205_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___300_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___208_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___002_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___300_;
        }
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__119(vlSelf);
    }
    if ((((0xcf30f0c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__120
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___11_ 
                   & (- (::QData)((::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___14_)))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT___13_;
        }
    }
    if ((((0xcf3030c000c0000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__121
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00030000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__122
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c0000c000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__123
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00003000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__124
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00000c00fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__125
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00000300fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__126
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c000000c0fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__127
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00000030fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__128
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c0000000cfULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__129
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00000003fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__130
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___12_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___08_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___13_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___11_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___14_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___07_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT___13_;
        }
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__131(vlSelf);
    }
    if ((((0xcf3c30f0c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__132
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___088_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___089_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___003_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___088_;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__133(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(::VlUnpacked<::QData/*63:0*/, 2> &out, const ::VlUnpacked<::QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((::IData)(1U) + n);
    } while ((1U >= n));
}

void Vtop___024root___trigger_clear__act(::VlUnpacked<::QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((::IData)(1U) + n);
    } while ((2U > n));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.clk_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.rst_ni 
                      & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.instr_gnt_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("instr_gnt_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.instr_rvalid_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("instr_rvalid_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.data_gnt_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("data_gnt_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.__VprimaryPorts.data_rvalid_i 
                      & 0xfeU)))) {
        Verilated::overWidthError("data_rvalid_i");
    }
}
#endif  // VL_DEBUG
