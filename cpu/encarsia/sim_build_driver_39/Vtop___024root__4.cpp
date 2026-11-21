// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((::QData)((::IData)(
                                                          ((((((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni)) 
                                                                   & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni__0)) 
                                                                  << 3U) 
                                                                 | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__clk_i) 
                                                                     & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__clk_i__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni__0)) 
                                                                    << 1U) 
                                                                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__clk_i) 
                                                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__clk_i__0))))) 
                                                               << 0x0000000cU) 
                                                              | ((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni__0)) 
                                                                    << 3U) 
                                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__clk_i) 
                                                                       & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__clk_i__0))) 
                                                                      << 2U)) 
                                                                  | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni__0)) 
                                                                      << 1U) 
                                                                     | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__clk_i__0))))) 
                                                                 << 8U)) 
                                                             | (((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni__0)) 
                                                                    << 3U) 
                                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__clk_i) 
                                                                       & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__clk_i__0))) 
                                                                      << 2U)) 
                                                                  | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni__0)) 
                                                                      << 1U) 
                                                                     | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__clk_i__0))))) 
                                                                 << 4U) 
                                                                | (((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni__0)) 
                                                                     << 3U) 
                                                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__clk_i__0))) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__clk_i__0))))))) 
                                                            << 0x00000010U) 
                                                           | ((((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni)) 
                                                                    & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni__0)) 
                                                                   << 3U) 
                                                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__clk_i) 
                                                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__clk_i__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni__0)) 
                                                                     << 1U) 
                                                                    | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__clk_i) 
                                                                       & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__clk_i__0))))) 
                                                                << 0x0000000cU) 
                                                               | ((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni__0)) 
                                                                     << 3U) 
                                                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__clk_i__0))) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__clk_i__0))))) 
                                                                  << 8U)) 
                                                              | (((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni__0)) 
                                                                     << 3U) 
                                                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__clk_i__0))) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__clk_i__0))))) 
                                                                  << 4U) 
                                                                 | (((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni__0)) 
                                                                      << 3U) 
                                                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__clk_i__0))) 
                                                                        << 2U)) 
                                                                    | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni)) 
                                                                         & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni__0)) 
                                                                        << 1U) 
                                                                       | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__clk_i) 
                                                                          & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__clk_i__0)))))))))) 
                                      << 0x00000020U) 
                                     | (::QData)((::IData)(
                                                           ((((((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni)) 
                                                                    & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni__0)) 
                                                                   << 3U) 
                                                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__clk_i) 
                                                                      & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__clk_i__0))) 
                                                                     << 2U)) 
                                                                 | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni__0)) 
                                                                     << 1U) 
                                                                    | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__clk_i) 
                                                                       & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__clk_i__0))))) 
                                                                << 0x0000000cU) 
                                                               | ((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni__0)) 
                                                                     << 3U) 
                                                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__clk_i__0))) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__clk_i__0))))) 
                                                                  << 8U)) 
                                                              | (((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                      & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                     << 3U) 
                                                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))) 
                                                                       << 2U)) 
                                                                   | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                       << 1U) 
                                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))))) 
                                                                  << 4U) 
                                                                 | (((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                      << 3U) 
                                                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))) 
                                                                        << 2U)) 
                                                                    | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                         & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                        << 1U) 
                                                                       | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                          & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))))))) 
                                                             << 0x00000010U) 
                                                            | ((((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                     & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                    << 3U) 
                                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                       & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))) 
                                                                      << 2U)) 
                                                                  | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                      << 1U) 
                                                                     | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                        & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))))) 
                                                                 << 0x0000000cU) 
                                                                | ((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                      << 3U) 
                                                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))) 
                                                                        << 2U)) 
                                                                    | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                         & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                        << 1U) 
                                                                       | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                          & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))))) 
                                                                   << 8U)) 
                                                               | (((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                       & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                      << 3U) 
                                                                     | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                         & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))) 
                                                                        << 2U)) 
                                                                    | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni)) 
                                                                         & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0)) 
                                                                        << 1U) 
                                                                       | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i) 
                                                                          & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0))))) 
                                                                   << 4U) 
                                                                  | (((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni)) 
                                                                        & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni__0)) 
                                                                       << 3U) 
                                                                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__clk_i) 
                                                                          & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__clk_i__0))) 
                                                                         << 2U)) 
                                                                     | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__rst_ni)) 
                                                                          & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__rst_ni__0)) 
                                                                         << 1U) 
                                                                        | ((::IData)(vlSelfRef.encarsia_tb__DOT__clk_i) 
                                                                           & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__clk_i__0)))))))))));
    vlSelfRef.__VactTriggered[1U] = (::QData)((::IData)(
                                                        ((((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni)) 
                                                               & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni__0)) 
                                                              << 3U) 
                                                             | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__clk_i) 
                                                                 & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__clk_i__0))) 
                                                                << 2U)) 
                                                            | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni)) 
                                                                 & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni__0)) 
                                                                << 1U) 
                                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__clk_i) 
                                                                  & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__clk_i__0))))) 
                                                           << 0x0000000cU) 
                                                          | ((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni)) 
                                                                 & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni__0)) 
                                                                << 3U) 
                                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__clk_i) 
                                                                   & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__clk_i__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni)) 
                                                                   & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni__0)) 
                                                                  << 1U) 
                                                                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__clk_i) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__clk_i__0))))) 
                                                             << 8U)) 
                                                         | (((((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)) 
                                                                 & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni__0)) 
                                                                << 3U) 
                                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__clk_i) 
                                                                   & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__clk_i__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni)) 
                                                                   & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0)) 
                                                                  << 1U) 
                                                                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clk_i) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0))))) 
                                                             << 4U) 
                                                            | (((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni)) 
                                                                  & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni__0)) 
                                                                 << 3U) 
                                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__clk_i) 
                                                                    & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__clk_i__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni)) 
                                                                    & (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni__0)) 
                                                                   << 1U) 
                                                                  | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__clk_i) 
                                                                     & (~ (::IData)(vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__clk_i__0)))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__clk_i__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni__0 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni;
}

bool Vtop___024root___trigger_anySet__act(const ::VlUnpacked<::QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    ::IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((::IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___Vfuncout_136;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___a_137;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___Vfuncout_188;
    ::IData/*16:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___Vfuncout_192;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___Vfuncout_196;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___Vfuncout_200;
    ::QData/*47:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202;
    ::CData/*7:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___Vfuncout_204;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___Vfuncout_224;
    ::SData/*11:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___Vfuncout_228;
    ::CData/*7:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___Vfuncout_232;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___Vfuncout_236;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___Vfuncout_240;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___Vfuncout_244;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___Vfuncout_248;
    ::SData/*8:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___Vfuncout_252;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___Vfuncout_256;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___Vfuncout_260;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___Vfuncout_264;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___Vfuncout_268;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___Vfuncout_272;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___Vfuncout_276;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___Vfuncout_280;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___Vfuncout_284;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___Vfuncout_288;
    ::CData/*7:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290;
    ::CData/*7:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___Vfuncout_296;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___Vfuncout_300;
    ::SData/*10:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302;
    ::SData/*10:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___Vfuncout_304;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___b_306;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___Vfuncout_308;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___Vfuncout_316;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319;
    ::SData/*9:0*/ __Vdfg_Regularize_11326;
    ::SData/*9:0*/ __Vdfg_Regularize_11327;
    ::CData/*1:0*/ __Vdfg_Regularize_11428;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___Vfuncout_136 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___a_137 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___Vfuncout_188 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___Vfuncout_192 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___Vfuncout_196 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___Vfuncout_200 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___Vfuncout_204 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___Vfuncout_224 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___Vfuncout_228 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___Vfuncout_232 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___Vfuncout_236 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___Vfuncout_240 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___Vfuncout_244 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___Vfuncout_248 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___Vfuncout_252 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___Vfuncout_256 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___Vfuncout_260 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___Vfuncout_264 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___Vfuncout_268 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___Vfuncout_272 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___Vfuncout_276 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___Vfuncout_280 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___Vfuncout_284 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___Vfuncout_288 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___Vfuncout_296 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___Vfuncout_300 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___Vfuncout_304 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___b_306 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___Vfuncout_308 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___Vfuncout_316 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319 = 0;
    __Vdfg_Regularize_11326 = 0;
    __Vdfg_Regularize_11327 = 0;
    __Vdfg_Regularize_11428 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_plus2_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_c_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_alu_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___049_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_fetch_err_plus2 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_plus2_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_c_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_c_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_fetch_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_is_compressed_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_c_insn_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_alu_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_alu_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_plus2_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_fetch_err_plus2;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_c_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_c_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__pc_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_is_compressed_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_is_compressed_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_is_compressed_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_is_compressed_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_c_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__illegal_c_insn_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_alu_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_alu_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_rdata_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_plus2_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_plus2_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_compressed_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_c_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___177_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___164_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___147_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___149_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i)));
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_is_compressed_i) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_is_compressed_i = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___493_ = 2U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___494_ = 2U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___495_ = 2U;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_is_compressed_i = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___493_ = 4U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___494_ = 4U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___495_ = 4U;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_c_insn_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_alu_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___123_ 
        = (0x0300U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___124_ 
        = (0x0304U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___129_ 
        = (0x07b3U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___128_ 
        = (0x07b2U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___126_ 
        = (0x07b0U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___127_ 
        = (0x07b1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_rdata_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0200_ 
        = ((::IData)(2U) + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0475_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0030_ 
        = (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0339_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i 
                    >> 0x0000000eU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0343_ 
        = (1U & (- (::IData)((1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i 
                                       >> 0x0000000eU))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_alu_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1349_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_is_compressed_i)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_compressed_i)
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___141_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___123_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___124_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___142_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___126_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___127_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0029_ 
        = (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0492_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                    >> 0x0000000eU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1348_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_plus2_i)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0200_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0223_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0377_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0389_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0391_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0393_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__unused_instr_alu 
        = ((0x000003e0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                           >> 0x0000000aU)) | (0x0000001fU 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                                  >> 7U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0199_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                    >> 0x0000000eU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0450_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0451_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0452_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0453_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0366_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0405_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0253_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0251_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0235_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0233_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0445_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0446_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0447_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0448_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0403_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0249_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0364_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0247_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0231_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0229_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0459_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0227_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0455_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0297_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0295_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0284_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0282_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0457_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0301_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0299_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0293_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0291_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0426_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0427_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0428_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0429_ 
        = (0x17U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0430_ 
        = (0x37U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0431_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0432_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0433_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0434_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0435_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0245_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0305_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0338_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0358_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0243_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0303_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0275_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0375_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0273_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0329_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0330_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0331_ 
        = (7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0332_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0333_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0334_ 
        = (3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0335_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0336_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0368_ 
        = (7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0369_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0370_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0371_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0372_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0373_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0323_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0327_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0325_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0321_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0319_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0271_ 
        = (1U & (~ (::IData)((0U != (0xfe007000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0317_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0313_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0311_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0194_ 
        = (8U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0415_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0416_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0417_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0418_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0419_ 
        = (0x17U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0420_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0421_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0422_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0423_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0424_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0387_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0401_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0221_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0241_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0354_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0239_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0215_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0211_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0193_ 
        = (1U & (~ (0U != (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                           >> 0x0000001bU))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0195_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                 >> 0x0000000cU)))));
    __Vdfg_Regularize_11327 = ((0x000003f8U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                               >> 0x00000016U)) 
                               | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu 
                                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0407_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0408_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0409_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0410_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0411_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0412_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0413_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0217_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0237_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0383_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0399_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0342_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0350_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0437_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0438_ 
        = (0x17U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0439_ 
        = (0x37U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0440_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0441_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0442_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0443_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0381_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0397_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0346_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0362_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_alu));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___141_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___143_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___128_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___142_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0187_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                    >> 0x0000001aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0189_ 
        = (7U == (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x00000014U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0190_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                    >> 0x0000001aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0605_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs3 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
           >> 0x0000001bU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0207_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                    >> 0x0000000eU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0827_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0575_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0878_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0622_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0206_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                    >> 0x0000000eU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0843_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0620_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0597_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0595_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0852_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0579_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_j_type_o 
        = (((((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x0000001dU)) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                  >> 0x0000001eU)) 
                                           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU))) 
               << 9U) | (((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000001dU)) | 
                          ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0x0000001eU)) 
                           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000001fU))) << 6U)) 
             | ((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                         >> 0x0000001dU)) | ((2U & 
                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                               >> 0x0000001eU)) 
                                             | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x0000001fU))) 
                 << 3U) | ((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0x0000001dU)) 
                           | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0x0000001eU)) 
                              | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000001fU))))) 
            << 0x00000014U) | ((((0x000001feU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                 >> 0x0000000bU)) 
                                 | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x00000014U))) 
                                << 0x0000000bU) | (0x000007feU 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                      >> 0x00000014U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_type_o 
        = ((((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0x0000001eU)) 
                           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000001fU)) << 4U)) 
              | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                   >> 0x0000001eU)) 
                            | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                               >> 0x0000001fU)))) << 0x00000018U) 
            | ((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                    >> 0x0000001eU)) 
                             | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000001fU)) << 4U)) 
                | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                            >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x0000001fU)) 
                    << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0x0000001eU)) 
                              | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000001fU)))) 
               << 0x00000010U)) | (((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                             >> 0x0000001dU)) 
                                      | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x0000001eU)) 
                                         | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x0000001fU))) 
                                     << 0x0000000dU) 
                                    | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                               >> 0x0000001eU)) 
                                        | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                 >> 7U))) 
                                       << 0x0000000bU)) 
                                   | ((0x000007e0U 
                                       & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x00000014U)) 
                                      | (0x0000001eU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 7U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0810_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0811_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0812_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0813_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0814_ 
        = (0x17U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0815_ 
        = (0x37U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0816_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0817_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0802_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0808_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0571_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0882_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0819_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0820_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0821_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0618_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0800_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0806_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0616_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0603_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0601_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0848_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0666_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0646_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0854_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0551_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0525_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0521_ 
        = (0x0105U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0858_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0559_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0531_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0527_ 
        = (0x07b2U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0860_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0563_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0537_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0533_ 
        = (0x0302U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0862_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0567_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0543_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0539_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0823_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0824_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0825_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0614_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0612_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0841_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0850_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0670_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0658_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0856_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0555_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0509_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0505_ 
        = (1U & (~ (0U != (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                           >> 0x00000014U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0845_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0846_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0766_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0777_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0763_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0764_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0774_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0775_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0884_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0885_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0864_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0865_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0866_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0868_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0869_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0870_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0871_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0872_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0873_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0874_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0583_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0497_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0880_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0591_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0483_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0477_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0478_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0479_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_u_type_o 
        = (0xfffff000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_s_type_o 
        = ((((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0x0000001eU)) 
                           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000001fU)) << 4U)) 
              | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                   >> 0x0000001eU)) 
                            | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                               >> 0x0000001fU)))) << 0x00000018U) 
            | ((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                    >> 0x0000001eU)) 
                             | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000001fU)) << 4U)) 
                | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                            >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x0000001fU)) 
                    << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0x0000001eU)) 
                              | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000001fU)))) 
               << 0x00000010U)) | (((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                             >> 0x0000001eU)) 
                                      | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                         >> 0x0000001fU)) 
                                     << 0x0000000eU) 
                                    | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                               >> 0x0000001eU)) 
                                        | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                           >> 0x0000001fU)) 
                                       << 0x0000000cU)) 
                                   | ((0x00000fe0U 
                                       & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x00000014U)) 
                                      | (0x0000001fU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 7U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o 
        = ((((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x0000001fU)) 
                << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                  >> 0x0000001eU)) 
                           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000001fU)) << 4U)) 
              | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                   >> 0x0000001eU)) 
                            | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                               >> 0x0000001fU)))) << 0x00000018U) 
            | ((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                              >> 0x0000001fU)) 
                  << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                    >> 0x0000001eU)) 
                             | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000001fU)) << 4U)) 
                | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                            >> 0x0000001eU)) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                >> 0x0000001fU)) 
                    << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                     >> 0x0000001eU)) 
                              | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000001fU)))) 
               << 0x00000010U)) | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x0000001eU)) 
                                     | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                        >> 0x0000001fU)) 
                                    << 0x0000000eU) 
                                   | ((0x00002000U 
                                       & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x00000012U)) 
                                      | ((0x00001000U 
                                          & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                             >> 0x00000013U)) 
                                         | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                            >> 0x00000014U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0876_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0587_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0829_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0830_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0831_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0832_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0833_ 
        = (0x17U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0834_ 
        = (0x37U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0835_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0836_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0837_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0838_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0839_ 
        = (0x6fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0547_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0610_ 
        = (0x0fU == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0662_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0755_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0772_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0783_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0792_ 
        = (0x63U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0796_ 
        = (0x67U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0202_ 
        = (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0789_ 
        = ((((7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                           >> 0x0000000cU))) << 5U) 
            | (((6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000000cU))) << 4U) 
               | ((5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000000cU))) << 3U))) 
           | (((4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                             >> 0x0000000cU))) << 2U) 
              | (((1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000000cU))) << 1U) 
                 | (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x0000000cU))))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0607_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0608_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0637_ 
        = (0x33U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0503_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0768_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0769_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0770_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0779_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0780_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0781_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0750_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0751_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0752_ 
        = ((((7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                           >> 0x0000000cU))) << 5U) 
            | (((6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                              >> 0x0000000cU))) << 4U) 
               | ((4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000000cU))) << 3U))) 
           | (((3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                             >> 0x0000000cU))) << 2U) 
              | (((2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                >> 0x0000000cU))) << 1U) 
                 | (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                          >> 0x0000000cU))))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0761_ 
        = (3U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0787_ 
        = (0x23U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0728_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0748_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0785_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0759_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0726_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0746_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0757_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0519_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0724_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0722_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0491_ 
        = (0x73U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0742_ 
        = (0x0cU == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                     >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0743_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0744_ 
        = (1U & (~ (0U != (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                           >> 0x0000001bU))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0720_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0186_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x00000019U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0511_ 
        = (0x0105U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0512_ 
        = (0x07b2U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0513_ 
        = (0x0302U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                       >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0514_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0515_ 
        = (1U & (~ (0U != (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                           >> 0x00000014U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0718_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0734_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0740_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0485_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0486_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0487_ 
        = (1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0732_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0738_ 
        = (1U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rd 
        = (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0730_ 
        = (0x0cU == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                     >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0736_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0712_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0713_ 
        = (5U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0714_ 
        = (0x0dU == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                     >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0188_ 
        = (1U & (~ (0U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x00000019U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0715_ 
        = (((8U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                    >> 0x0000001bU)) << 1U) | (1U & 
                                               (~ (0U 
                                                   != 
                                                   (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                                    >> 0x0000001bU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0678_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0694_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0710_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0676_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0692_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0708_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0674_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0690_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0706_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0672_ 
        = (1U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0688_ 
        = (5U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0704_ 
        = (0x0dU == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                     >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0686_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0702_ 
        = (0x13U == (0x0000007fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0684_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0700_ 
        = (5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0682_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0698_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                 >> 0x0000001aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0680_ 
        = (5U == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                  >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0696_ 
        = (0x0dU == (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                     >> 0x0000001bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1 
        = (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x0000000fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_ 
        = (::IData)((0x04001000U == (0x04003000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs2 
        = (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                          >> 0x00000014U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                 >> 0x0000000cU)))));
    __Vdfg_Regularize_11326 = ((0x000003f8U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                               >> 0x00000016U)) 
                               | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr 
                                        >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0340_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0199_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0344_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0199_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0365_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0366_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0404_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0405_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0232_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0233_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0402_ 
        = (4U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0403_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0363_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0891_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0364_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0228_ 
        = (5U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0229_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0242_ 
        = (0x26U & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0243_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0373_) 
             << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0372_) 
                        << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0371_) 
                                  << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0370_) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0369_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0368_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___Vfuncout_204 
        = ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
            ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x13U)))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x18U))))
                : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x13U)))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x17U)))))
            : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x13U)))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x18U))))
                : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x13U)))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                ? 0x16U : 0x14U) : 
                           ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                             ? 0x16U : 0x15U)) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))
                                                    ? 0x16U
                                                    : 0x26U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                             << 5U) 
                                            | (((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                                << 4U) 
                                               | ((8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                                  << 3U))) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207)))))))))))) {
        if ((0U != ((((0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                      << 5U) | (((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                 << 4U) | ((8U == (8U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                           << 3U))) 
                    | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                        << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10400: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1056_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___s_207));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10400, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0367_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1056___Vfuncout_204;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0324_ 
        = (0x0aU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0325_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0307_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0194_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0386_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0387_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0400_ 
        = (2U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0401_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0238_ 
        = (3U & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0239_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0210_ 
        = (3U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0211_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0315_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0193_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0309_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0193_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0225_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0219_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0213_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0195_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0277_ 
        = (0x000fU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0278_ 
        = (0x000eU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0279_ 
        = (0x000dU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0280_ 
        = (0x000cU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0286_ 
        = (0x000bU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0287_ 
        = (0x000aU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0288_ 
        = (9U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0289_ 
        = (8U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0255_ 
        = (0x000fU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0256_ 
        = (0x000eU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0257_ 
        = (0x000dU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0258_ 
        = (0x000cU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0259_ 
        = (0x000bU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0260_ 
        = (0x000aU == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0261_ 
        = (9U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0262_ 
        = (8U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0263_ 
        = (0x0105U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0264_ 
        = (5U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0265_ 
        = (1U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0266_ 
        = (7U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0267_ 
        = (6U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0268_ 
        = (4U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0269_ 
        = (2U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0270_ 
        = (0x0100U == (::IData)(__Vdfg_Regularize_11327));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0216_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0217_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0236_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0237_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0383_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0341_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0339_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0342_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0380_ 
        = (5U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0381_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0396_ 
        = (5U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0397_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0345_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0343_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0346_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___473_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___144_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___129_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___143_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0493_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0207_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0842_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0206_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0843_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_j_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_j_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0801_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0802_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0807_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0808_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0881_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0882_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0520_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0521_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0526_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0527_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0532_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0533_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0539_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0611_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0612_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0840_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0841_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0505_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0764_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0763_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___Vfuncout_272 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275)))
            ? 1U : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275)))
                     ? 2U : 0U));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11091: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1412_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___s_275));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11091, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0762_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1412___Vfuncout_272;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0775_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0774_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___Vfuncout_280 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283)))
            ? 1U : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283)))
                     ? 2U : 0U));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11130: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1423_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___s_283));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11130, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0773_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1423___Vfuncout_280;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0885_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0884_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___Vfuncout_316 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319))) 
           || (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11406: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1534_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___s_319));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11406, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0883_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1534___Vfuncout_316;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0866_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0865_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0864_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___Vfuncout_308 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
           || ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
               || (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11348: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1514_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___s_311));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11348, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0863_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1514___Vfuncout_308;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0479_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0478_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0477_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___Vfuncout_232 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235)))
            ? 3U : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235)))
                     ? 2U : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235)))
                              ? 1U : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10654: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1151_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___s_235));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10654, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0476_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1151___Vfuncout_232;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_u_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_u_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_s_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_s_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_i_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0794_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0202_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0790_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0789_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0608_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0607_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___Vfuncout_244 
        = ((1U != (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247))) 
           && (2U != (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10807: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1255_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___s_247));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10807, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0606_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1255___Vfuncout_244;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0753_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0752_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0784_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0785_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0756_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0757_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0889_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0186_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0515_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0514_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0513_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0512_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0511_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___Vfuncout_240 
        = ((1U & (~ ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243) 
                     >> 4U))) && ((1U & (~ ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243) 
                                            >> 3U))) 
                                  && ((1U & (~ ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243) 
                                                >> 2U))) 
                                      && ((1U & (~ 
                                                 ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243) 
                                                  >> 1U))) 
                                          && (1U & 
                                              (~ (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10711: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1178_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___s_243));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10711, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0510_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1178___Vfuncout_240;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0487_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0486_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0485_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___Vfuncout_236 
        = ((1U != (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
           && ((2U != (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
               && (4U != (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10676: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1158_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___s_239));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10676, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0484_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1158___Vfuncout_236;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_waddr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rd;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0204_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rd));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0729_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0730_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0735_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0736_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0890_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0188_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0716_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0715_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0671_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0672_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0679_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0680_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0695_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0696_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__zimm_rs1_type_o 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0888_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0185_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0203_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs1));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0664_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0644_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0668_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0660_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0635_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0191_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rs2;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0573_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0577_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0569_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0549_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0557_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0529_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0561_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0535_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0565_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0541_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0553_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0507_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0581_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0495_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0589_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0481_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0585_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0545_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0501_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0517_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0489_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0639_ 
        = (0x000eU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0640_ 
        = (0x000cU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0641_ 
        = (0x000aU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0642_ 
        = (9U == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0648_ 
        = (0x000fU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0649_ 
        = (0x000eU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0650_ 
        = (0x000dU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0651_ 
        = (0x000cU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0652_ 
        = (0x000bU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0653_ 
        = (0x000aU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0654_ 
        = (9U == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0624_ 
        = (0x000fU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0625_ 
        = (0x000eU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0626_ 
        = (0x000dU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0627_ 
        = (0x000cU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0628_ 
        = (0x000bU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0629_ 
        = (0x000aU == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0630_ 
        = (9U == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0631_ 
        = (8U == (::IData)(__Vdfg_Regularize_11326));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0632_ 
        = ((((((0x0105U == (::IData)(__Vdfg_Regularize_11326)) 
               << 4U) | (((5U == (::IData)(__Vdfg_Regularize_11326)) 
                          << 3U) | ((1U == (::IData)(__Vdfg_Regularize_11326)) 
                                    << 2U))) | (((7U 
                                                  == (::IData)(__Vdfg_Regularize_11326)) 
                                                 << 1U) 
                                                | (6U 
                                                   == (::IData)(__Vdfg_Regularize_11326)))) 
            << 5U) | ((((4U == (::IData)(__Vdfg_Regularize_11326)) 
                        << 4U) | (((3U == (::IData)(__Vdfg_Regularize_11326)) 
                                   << 3U) | ((2U == (::IData)(__Vdfg_Regularize_11326)) 
                                             << 2U))) 
                      | (((0x0100U == (::IData)(__Vdfg_Regularize_11326)) 
                          << 1U) | (1U & (~ (::IData)(
                                                      (0U 
                                                       != 
                                                       (0xfe007000U 
                                                        & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr))))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0149_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0365_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0095_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0234_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0232_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0235_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0096_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0402_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0150_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0363_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0230_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0228_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0231_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0242_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0245_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0374_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0367_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0375_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0326_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0324_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0327_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0306_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0307_)
            ? 8U : 0x26U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0121_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0386_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0400_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0238_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0241_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0225_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0212_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0210_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0213_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0280_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0279_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0278_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0277_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___Vfuncout_192 
        = ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195) 
                  >> 3U)) || ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195) 
                                     >> 2U)) || ((1U 
                                                  & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195) 
                                                     >> 1U)) 
                                                 || (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10264: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._0979_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___s_195));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10264, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0276_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0979___Vfuncout_192;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0289_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0288_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0287_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0286_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___Vfuncout_196 
        = ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199) 
                  >> 3U)) || ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199) 
                                     >> 2U)) || ((1U 
                                                  & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199) 
                                                     >> 1U)) 
                                                 || (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10289: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._0987_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___s_199));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10289, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0285_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0987___Vfuncout_196;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191 
        = (((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0271_) 
                << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0270_) 
                           << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0269_) 
                                     << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0268_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0267_))) 
             << 0x0000000cU) | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0266_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0265_) 
                                             << 2U)) 
                                 | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0264_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0263_))) 
                                << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0262_) 
                                               << 3U) 
                                              | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0261_) 
                                                 << 2U)) 
                                             | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0260_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0259_))) 
                                            << 4U) 
                                           | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0258_) 
                                                << 3U) 
                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0257_) 
                                                  << 2U)) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0256_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0255_)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___Vfuncout_188 
        = (((((((((1U == (1U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                  | (2U == (2U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                 | (4U == (4U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                | (8U == (8U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
               | (0x00000010U == (0x00000010U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
              | (0x00000020U == (0x00000020U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
             | (0x00000040U == (0x00000040U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
            | (0x00000080U == (0x00000080U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))
            ? 0U : (((((((((0x00000100U == (0x00000100U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                           | (0x00000200U == (0x00000200U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                          | (0x00000400U == (0x00000400U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                         | (0x00000800U == (0x00000800U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                        | (0x00001000U == (0x00001000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                       | (0x00002000U == (0x00002000U 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                      | (0x00004000U == (0x00004000U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))) 
                     | (0x00008000U == (0x00008000U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))
                     ? ((0x00000100U == (0x00000100U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                         ? 8U : ((0x00000200U == (0x00000200U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                  ? 9U : ((0x00000400U 
                                           == (0x00000400U 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                           ? 0x0aU : 
                                          ((0x00000800U 
                                            == (0x00000800U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                            ? 4U : 
                                           ((0x00001000U 
                                             == (0x00001000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                             ? 3U : 
                                            ((0x00002000U 
                                              == (0x00002000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                              ? 2U : 
                                             ((0x00004000U 
                                               == (0x00004000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                                               ? 0x25U
                                               : 1U)))))))
                     : ((0x00010000U == (0x00010000U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191))
                         ? 0U : 0x26U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((((((0x00010000U 
                                                 == 
                                                 (0x00010000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                << 4U) 
                                               | (((0x00008000U 
                                                    == 
                                                    (0x00008000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                   << 3U) 
                                                  | ((0x00004000U 
                                                      == 
                                                      (0x00004000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                     << 2U))) 
                                              | (((0x00002000U 
                                                   == 
                                                   (0x00002000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                  << 1U) 
                                                 | (0x00001000U 
                                                    == 
                                                    (0x00001000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                                             << 0x0000000cU) 
                                            | (((((0x00000800U 
                                                   == 
                                                   (0x00000800U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                  << 3U) 
                                                 | ((0x00000400U 
                                                     == 
                                                     (0x00000400U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                    << 2U)) 
                                                | (((0x00000200U 
                                                     == 
                                                     (0x00000200U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                    << 1U) 
                                                   | (0x00000100U 
                                                      == 
                                                      (0x00000100U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                                               << 8U)) 
                                           | ((((((0x00000080U 
                                                   == 
                                                   (0x00000080U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                  << 3U) 
                                                 | ((0x00000040U 
                                                     == 
                                                     (0x00000040U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                    << 2U)) 
                                                | (((0x00000020U 
                                                     == 
                                                     (0x00000020U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                    << 1U) 
                                                   | (0x00000010U 
                                                      == 
                                                      (0x00000010U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                                               << 4U) 
                                              | ((((8U 
                                                    == 
                                                    (8U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                     << 2U)) 
                                                 | (((2U 
                                                      == 
                                                      (2U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                                     << 1U) 
                                                    | (1U 
                                                       == 
                                                       (1U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))))))))))) {
        if ((0U != (((((((0x00010000U == (0x00010000U 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                         << 4U) | (((0x00008000U == 
                                     (0x00008000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                    << 3U) | ((0x00004000U 
                                               == (0x00004000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                              << 2U))) 
                       | (((0x00002000U == (0x00002000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                           << 1U) | (0x00001000U == 
                                     (0x00001000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                      << 0x0000000cU) | (((((0x00000800U 
                                             == (0x00000800U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                            << 3U) 
                                           | ((0x00000400U 
                                               == (0x00000400U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                              << 2U)) 
                                          | (((0x00000200U 
                                               == (0x00000200U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                              << 1U) 
                                             | (0x00000100U 
                                                == 
                                                (0x00000100U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                                         << 8U)) | 
                    ((((((0x00000080U == (0x00000080U 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                         << 3U) | ((0x00000040U == 
                                    (0x00000040U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                   << 2U)) | (((0x00000020U 
                                                == 
                                                (0x00000020U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                               << 1U) 
                                              | (0x00000010U 
                                                 == 
                                                 (0x00000010U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))) 
                      << 4U) | ((((8U == (8U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                  << 3U) | ((4U == 
                                             (4U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                            << 2U)) 
                                | (((2U == (2U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)) 
                                    << 1U) | (1U == 
                                              (1U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10200: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '17'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._0958_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',17,__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___s_191);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10200, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0254_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0958___Vfuncout_188;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0216_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0236_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0382_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0092_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0398_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0156_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0341_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0136_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0380_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0110_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0396_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0345_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___464_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___144_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0842_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0842_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0801_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0807_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0881_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0613_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0611_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0614_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0840_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0765_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0762_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0766_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0776_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0773_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0777_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0883_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0863_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0863_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0793_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0794_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0788_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0790_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0609_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0606_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0610_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0786_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0784_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0787_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0758_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0756_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0759_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_waddr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0731_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0729_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0732_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0737_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0735_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0738_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0673_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0674_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0671_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0681_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0682_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0679_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0697_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0698_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0695_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__zimm_rs1_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__zimm_rs1_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0888_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0203_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0204_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0576_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0577_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0568_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0569_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0522_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0520_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0523_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0528_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0526_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0529_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0534_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0532_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0535_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0540_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0538_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0541_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0506_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0504_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0507_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0494_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0495_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0492_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0480_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0476_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0481_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0584_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0585_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0516_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0510_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0517_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0488_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0489_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0484_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0642_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0641_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0640_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0639_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___Vfuncout_252 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                    ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                             ? 3U : 1U)) : 3U) : ((4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                                                   ? 
                                                  ((2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                                                     ? 3U
                                                     : 1U))
                                                   : 
                                                  ((2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))
                                                     ? 3U
                                                     : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10887: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1295_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___s_255));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10887, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0638_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1295___Vfuncout_252;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0654_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0653_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0652_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0651_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0650_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0649_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0648_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___Vfuncout_256 
        = ((0x00000040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
            ? ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                    ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                            ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                     ? 3U : 2U)) : 
                       ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                             ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                      ? 3U : 2U)) : 
                        ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                          ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                   ? 3U : 1U)))) : 
                   ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                     ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                  ? 3U : 2U)) : ((4U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                  ? 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 1U)))))
                : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                    ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                            ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                     ? 3U : 2U)) : 
                       ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                             ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                      ? 3U : 2U)) : 
                        ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                          ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                   ? 3U : 1U)))) : 
                   ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                     ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                  ? 3U : 2U)) : ((4U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                  ? 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 1U))))))
            : ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                    ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                            ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                     ? 3U : 2U)) : 
                       ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                             ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                      ? 3U : 2U)) : 
                        ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                          ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                   ? 3U : 1U)))) : 
                   ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                     ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                  ? 3U : 2U)) : ((4U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                  ? 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 1U)))))
                : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                    ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                            ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                     ? 3U : 2U)) : 
                       ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                             ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                      ? 3U : 2U)) : 
                        ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                          ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                   ? 3U : 1U)))) : 
                   ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                     ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                         ? 3U : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                  ? 3U : 2U)) : ((4U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                  ? 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 2U))
                                                  : 
                                                 ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                   ? 3U
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))
                                                    ? 3U
                                                    : 0U)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10912: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1303_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___s_259));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10912, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0647_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1303___Vfuncout_256;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0633_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0632_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0167_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0234_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0230_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0244_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0148_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0374_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0326_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0308_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0306_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0309_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0155_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0226_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0224_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0227_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0214_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0212_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0215_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0281_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0282_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0276_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0290_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0291_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0285_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0254_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0273_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___463_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___464_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0063_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_sign_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0613_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0129_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0765_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0776_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_b_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0795_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0793_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0796_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0791_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0788_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0792_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0609_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0151_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0786_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0760_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0758_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0761_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0733_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0731_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0734_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0739_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0737_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0740_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0675_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0673_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0676_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0683_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0681_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0684_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0699_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0697_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0700_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0499_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___488_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_b_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0578_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0576_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0579_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0570_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0568_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0571_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0524_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0522_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0525_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0530_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0528_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0531_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0536_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0534_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0537_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0542_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0540_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0543_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0508_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0506_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0509_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0496_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0494_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0497_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0482_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0480_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0483_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0586_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0584_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0587_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0518_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0516_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0519_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0490_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0488_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0491_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0643_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0638_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0644_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0655_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0647_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0656_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0633_) 
               << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0631_) 
                          << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0630_) 
                                    << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0629_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0628_))) 
            << 4U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0627_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0626_) 
                                  << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0625_) 
                                              << 1U) 
                                             | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0624_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___Vfuncout_248 
        = ((1U & (~ ((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                           | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                          | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                         | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                        | (0x0010U == (0x0010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                       | (0x0020U == (0x0020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                      | (0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))) 
                     | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))))) 
           && (0x0100U != (0x0100U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0100U 
                                                == 
                                                (0x0100U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                               << 4U) 
                                              | (((0x0080U 
                                                   == 
                                                   (0x0080U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                  << 3U) 
                                                 | ((0x0040U 
                                                     == 
                                                     (0x0040U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                    << 2U))) 
                                             | (((0x0020U 
                                                  == 
                                                  (0x0020U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                 << 1U) 
                                                | (0x0010U 
                                                   == 
                                                   (0x0010U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))))))))))) {
        if ((0U != ((((((0x0100U == (0x0100U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                        << 4U) | (((0x0080U == (0x0080U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                   << 3U) | ((0x0040U 
                                              == (0x0040U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                             << 2U))) 
                      | (((0x0020U == (0x0020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                          << 1U) | (0x0010U == (0x0010U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))))) 
                     << 4U) | ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                           << 2U)) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10837: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '9'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1272_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',9,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___s_251));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10837, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0623_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1272___Vfuncout_248;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0250_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0251_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0167_)
            : 2U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0168_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0247_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0310_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0308_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0311_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0109_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0226_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0173_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0214_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0283_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0281_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0284_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0292_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0290_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0293_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0274_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0272_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0275_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_sign_ext_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_sign_ext;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0825_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0824_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0823_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298 
        = (6U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0111_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___Vfuncout_296 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___b_298) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11248: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1473_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___s_299));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11248, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0822_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1473___Vfuncout_296;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0846_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0845_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___b_306 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0101_) 
            << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0129_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___Vfuncout_304 
        = (3U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___b_306)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___b_306) 
                         >> 2U) : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11316: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1495_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___s_307));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11316, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0844_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1495___Vfuncout_304;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0795_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0135_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0791_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0781_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0780_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0779_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286 
        = (7U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0151_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___Vfuncout_284 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286) 
                         >> 1U) : ((4U != (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))) 
                                   || (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___b_286) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11148: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1428_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___s_287));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11148, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0778_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1428___Vfuncout_284;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0760_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_waddr_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0733_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0739_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0677_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0675_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0678_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0685_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0683_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0686_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0701_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0699_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0702_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___487_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_a_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0118_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0578_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0570_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0524_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0530_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0536_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0132_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0542_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0133_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0508_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0496_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0128_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0482_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0586_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0088_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0518_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0127_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0490_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0645_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0643_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0646_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0657_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0655_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0658_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0634_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0635_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0623_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0252_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0250_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0253_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0248_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0246_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0249_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0312_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0310_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0313_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0458_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0459_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0109_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0218_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0173_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0219_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0130_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0292_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0274_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_sign_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_sign_ext_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0074_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0822_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0844_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0844_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0782_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0778_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0783_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0770_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0769_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0768_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0176_);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___Vfuncout_276 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278) 
                         >> 1U) : ((4U != (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))) 
                                   || (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___b_278) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11109: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1417_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___s_279));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11109, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0767_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1417___Vfuncout_276;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0744_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0743_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0742_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0889_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0039_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0041_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___Vfuncout_264 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266) 
                         >> 1U) : ((4U != (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))) 
                                   || (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___b_266) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11036: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1387_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___s_267));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11036, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0741_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1387___Vfuncout_264;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0677_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0685_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0701_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_a;
    vlSelfRef.encarsia_tb__DOT__rf_raddr_b = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0851_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0852_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0118_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0817_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0816_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0815_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0814_))) 
            << 4U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0813_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0812_) 
                                  << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0811_) 
                                              << 1U) 
                                             | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0810_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290 
        = (0x0000003cU | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0119_) 
                            << 7U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0144_) 
                                      << 6U)) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0163_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___Vfuncout_288 
        = (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                  | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
                 | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
                | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
               | (0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
              | (0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
             | (0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
            | (0x80U == (0x80U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))) 
           && (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290)
                      : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                          ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                             >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                                        ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                                         ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                            >> 3U) : 
                                        ((0x10U == 
                                          (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                                          ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                             >> 4U)
                                          : ((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                                              ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                                 >> 5U)
                                              : ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))
                                                  ? 
                                                 ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                                  >> 6U)
                                                  : 
                                                 ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___b_290) 
                                                  >> 7U))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x80U 
                                                == 
                                                (0x80U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                               << 3U) 
                                              | ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                                 << 2U)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                                 << 1U) 
                                                | (0x10U 
                                                   == 
                                                   (0x10U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))))))))))) {
        if ((0U != ((((((0x80U == (0x80U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                        << 3U) | ((0x40U == (0x40U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                  << 2U)) | (((0x20U 
                                               == (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                              << 1U) 
                                             | (0x10U 
                                                == 
                                                (0x10U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))))) 
                     << 4U) | ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                           << 2U)) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11195: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1460_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___s_291));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11195, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0809_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1460___Vfuncout_288;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0548_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0549_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0145_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0556_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0557_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0131_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0560_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0561_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0139_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0564_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0565_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0132_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0552_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0553_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0133_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0580_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0581_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0143_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0588_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0128_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0589_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0875_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0876_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0097_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0498_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0499_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0088_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0572_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0573_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0127_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0142_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0645_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0657_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0636_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0634_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0637_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0158_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0159_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0312_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0458_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0458_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0220_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0218_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0221_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0294_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0295_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0130_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0298_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0299_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0140_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0302_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0303_)
            ? 0x26U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0042_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_sign_ext_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_sign_ext;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0064_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0782_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0771_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0767_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0772_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0745_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0741_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0746_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0687_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0688_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0703_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0704_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0047_));
    vlSelfRef.encarsia_tb__DOT__rf_raddr_a = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_raddr_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0082_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0851_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_wdata_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0851_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0083_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0809_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0550_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0548_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0551_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0558_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0556_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0559_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0562_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0560_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0563_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0566_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0564_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0567_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0554_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0552_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0555_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0582_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0580_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0583_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0590_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0588_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0591_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0875_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0500_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0498_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0501_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0574_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0572_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0575_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0663_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0142_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0664_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0667_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0141_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0668_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0636_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0453_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0452_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0451_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0450_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0095_) 
            << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0149_) 
                       << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0158_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___Vfuncout_228 
        = (3U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                 >> 2U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                                >> 4U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                 >> 2U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                                >> 6U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                 >> 2U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                                >> 4U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230) 
                                 >> 2U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___b_230)
                                             : 2U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10618: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1132_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___s_231));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10618, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0449_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1132___Vfuncout_228;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0448_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0447_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0446_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0445_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0096_) 
            << 9U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0150_) 
                       << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0159_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___Vfuncout_224 
        = (7U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                 >> 3U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                                >> 6U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                 >> 3U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                                >> 9U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                 >> 3U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                                >> 6U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226) 
                                 >> 3U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___b_226)
                                             : 0U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10596: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1127_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___s_227));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10596, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0444_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1127___Vfuncout_224;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0314_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0315_)
            ? 9U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0038_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0164_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0220_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0296_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0294_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0297_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0300_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0298_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0301_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0304_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0302_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0305_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_type_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_type;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0771_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0747_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0745_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0748_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0689_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0690_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0687_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0705_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0706_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0703_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_wdata_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0120_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0550_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0104_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0558_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0113_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0562_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0566_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0554_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0117_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0582_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0099_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0590_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0502_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0500_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0503_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0574_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0665_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0663_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0666_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0669_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0667_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0670_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0659_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0660_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0085_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0449_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__bt_a_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0449_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0057_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__bt_b_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0316_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0314_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0317_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___118_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_a_mux_sel)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___492_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__zimm_rs1_type 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_a_mux_sel))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0103_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0296_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0114_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0304_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_type 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_type_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0747_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0691_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0689_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0692_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0707_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0705_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0708_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_sel;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___481_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_sel)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0853_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0854_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0120_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0857_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0858_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0104_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0859_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0860_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0113_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0861_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0862_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0105_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0855_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0856_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0106_));
    vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0874_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0873_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0872_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0871_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0870_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0869_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0868_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314 
        = (0x0000007eU | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0117_));
    vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___Vfuncout_312 
        = (1U & ((0x00000040U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                  ? ((0x00000020U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                      ? ((0x00000010U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                          ? ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 4U)))))
                          : ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                          ? ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 4U)))))
                          : ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 6U)))))))
                  : ((0x00000020U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                      ? ((0x00000010U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                          ? ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 4U)))))
                          : ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                          ? ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 4U)))))
                          : ((8U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                              ? ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 3U))))
                              : ((4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                  ? ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 2U)))
                                  : ((2U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                      ? ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314) 
                                             >> 1U))
                                      : ((1U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315)) 
                                         && (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___b_314))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))))) 
                     << 3U) | (((4U == (4U & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11367: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1518_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___s_315));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11367, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0867_ 
        = vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1518___Vfuncout_312;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0879_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0099_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0880_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0502_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0826_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0827_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0098_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0116_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0665_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0115_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0669_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0661_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0659_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0662_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_a_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__bt_a_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0057_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__bt_b_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0318_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0316_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0319_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___492_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0454_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0455_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0103_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0456_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0457_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0114_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_type;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0693_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0691_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0694_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0709_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0707_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0710_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0853_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0853_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0857_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0857_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0859_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0859_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0861_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0861_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0855_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0855_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0867_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0867_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0879_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0879_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0544_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0545_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0089_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0127_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0826_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0826_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0847_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0116_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0848_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0849_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0115_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0850_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0661_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___210_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_a_mux_sel))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___205_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___206_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___207_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___208_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_mux_sel))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0318_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0456_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0456_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___455_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___456_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___429_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___451_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___425_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___438_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___447_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i))));
    __Vdfg_Regularize_11428 = (((3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i)) 
                                << 1U) | (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___102_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___103_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_type_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0693_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0709_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0084_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wfi_insn_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0067_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__dret_insn_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0076_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mret_insn_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ebrk_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ecall_insn_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_ren_a_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_ren_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0183_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0184_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0546_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0544_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0547_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0079_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0847_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0847_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0849_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0849_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___208_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___207_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___206_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___205_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___493_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_j_type;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_i_type)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_type))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_i_type)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_type))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___a_137 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___494_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___Vfuncout_136 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___b_138[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___a_137))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:12937: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._635_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___s_139));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 12937, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___204_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___635___Vfuncout_136;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0320_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0179_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0321_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_sel_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_sel_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___453_ 
        = __Vdfg_Regularize_11428;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___415_ 
        = __Vdfg_Regularize_11428;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0716_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0714_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0713_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0712_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0890_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0046_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0048_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0050_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___Vfuncout_260 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262) 
                                 >> 1U)) : ((1U & (~ (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                            || (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___b_262)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10990: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1358_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___s_263));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10990, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0711_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1358___Vfuncout_260;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__dret_insn_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mret_insn_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___173_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ebrk_insn)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ebrk_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___174_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ecall_insn_dec)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ecall_insn_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0200_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0183_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0184_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0546_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_signed_mode 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_signed_mode_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operator 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__multdiv_operator_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_operand_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0322_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0320_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0323_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_sel_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_sel_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_sel_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_sel_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___454_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___453_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___416_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___415_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0717_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0718_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0711_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___112_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___173_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___174_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0196_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0185_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0200_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_signed_mode_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_signed_mode;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operator_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operator;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___025_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__bt_b_operand 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_b_operand_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0322_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__div_sel_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__mult_sel_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0719_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0717_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0720_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0887_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0196_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_signed_mode_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_signed_mode_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operator_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operator_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__bt_b_operand_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__bt_b_operand;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0336_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0335_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0334_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0333_))) 
            << 4U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0332_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0331_) 
                                  << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0330_) 
                                              << 1U) 
                                             | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0329_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
        = (0x00000259820c4000ULL | (::QData)((::IData)(
                                                       (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0175_) 
                                                         << 6U) 
                                                        | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0177_)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___Vfuncout_200 
        = (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                  | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
                 | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
                | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
               | (0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
              | (0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
             | (0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))) 
            | (0x80U == (0x80U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))))
            ? (0x0000003fU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                               ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202)
                               : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                >> 6U))
                                   : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                       ? (::IData)(
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                    >> 0x0cU))
                                       : ((8U == (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                           ? (::IData)(
                                                       (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                        >> 0x12U))
                                           : ((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                               ? (::IData)(
                                                           (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                            >> 0x18U))
                                               : ((0x20U 
                                                   == 
                                                   (0x20U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                                >> 0x1eU))
                                                   : 
                                                  ((0x40U 
                                                    == 
                                                    (0x40U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                                 >> 0x24U))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___b_202 
                                                                 >> 0x2aU))))))))))
            : 0U);
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x80U 
                                                == 
                                                (0x80U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                               << 3U) 
                                              | ((0x40U 
                                                  == 
                                                  (0x40U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                                 << 2U)) 
                                             | (((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                                 << 1U) 
                                                | (0x10U 
                                                   == 
                                                   (0x10U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))))))))))) {
        if ((0U != ((((((0x80U == (0x80U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                        << 3U) | ((0x40U == (0x40U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                  << 2U)) | (((0x20U 
                                               == (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                              << 1U) 
                                             | (0x10U 
                                                == 
                                                (0x10U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))))) 
                     << 4U) | ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                           << 2U)) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10342: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '8'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1023_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___s_203));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10342, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0328_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1023___Vfuncout_200;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___02_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__mult_sel_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__div_sel_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0721_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0719_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0722_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0886_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0887_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_signed_mode_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_signed_mode_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operator_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operator_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0337_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0328_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0338_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___530_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__unused_mult_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___02_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0721_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0886_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0886_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_signed_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__operator_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0337_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_sel;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0723_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0724_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___503_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___506_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___534_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___403_ 
        = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___400_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mode_i) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___441_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___488_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___394_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0725_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0723_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0726_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___146_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___121_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___122_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_op_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___533_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___534_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___439_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___441_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___434_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___436_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___486_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___488_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___393_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___394_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0727_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0725_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0728_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___140_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___121_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___122_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_op;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___569_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___533_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___439_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___559_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___434_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___556_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___486_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___570_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0727_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0393_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0394_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0395_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0396_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0280_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0281_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0282_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_op_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mult 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___569_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___643_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___558_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___639_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___647_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___556_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___651_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___556_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___655_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___556_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___570_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___570_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___570_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___570_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0753_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0751_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0750_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0180_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0043_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___Vfuncout_268 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___b_270) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11059: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1395_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___s_271));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11059, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0749_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1395___Vfuncout_268;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1596_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0282_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0280_) 
              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0281_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___397_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__signed_mult;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___263_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___643_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___274_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___639_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___252_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___647_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___242_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___651_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___232_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___655_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___380_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___590_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___602_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___598_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___370_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___594_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0754_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0749_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0755_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1596_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___379_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___380_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0178_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0754_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___589_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___379_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0839_) 
               << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0838_) 
                          << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0837_) 
                                    << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0836_) 
                                                 << 2U) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0835_) 
                                                    << 1U) 
                                                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0834_)))) 
            << 5U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0833_) 
                        << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0832_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0831_) 
                                             << 2U))) 
                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0830_) 
                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0829_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0108_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0135_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0160_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0169_))) 
            << 6U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0178_) 
                       << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0051_) 
                                  << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0086_) 
                                             << 1U) 
                                            | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0087_)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___Vfuncout_300 
        = (1U & (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                        | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                       | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                      | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                     | (0x0010U == (0x0010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                    | (0x0020U == (0x0020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                   | (0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))) 
                  | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))))
                  ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302)
                      : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                          ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                             >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                        ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                           >> 2U) : 
                                       ((8U == (8U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                         ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                            >> 3U) : 
                                        ((0x0010U == 
                                          (0x0010U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                          ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                             >> 4U)
                                          : ((0x0020U 
                                              == (0x0020U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                              ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                                 >> 5U)
                                              : ((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                                  ? 
                                                 ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                                  >> 6U)
                                                  : 
                                                 ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                                  >> 7U))))))))
                  : ((0x0100U == (0x0100U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                         >> 8U) : ((0x0200U == (0x0200U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                       >> 9U) : ((0x0400U 
                                                  != 
                                                  (0x0400U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                 || (1U 
                                                     & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___b_302) 
                                                        >> 0x0aU)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0400U 
                                                == 
                                                (0x0400U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                               << 5U) 
                                              | (((0x0200U 
                                                   == 
                                                   (0x0200U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                  << 4U) 
                                                 | ((0x0100U 
                                                     == 
                                                     (0x0100U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                    << 3U))) 
                                             | (((0x0080U 
                                                  == 
                                                  (0x0080U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                 << 2U) 
                                                | (((0x0040U 
                                                     == 
                                                     (0x0040U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                    << 1U) 
                                                   | (0x0020U 
                                                      == 
                                                      (0x0020U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))))))))))) {
        if ((0U != ((((((0x0400U == (0x0400U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                        << 5U) | (((0x0200U == (0x0200U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                   << 4U) | ((0x0100U 
                                              == (0x0100U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                             << 3U))) 
                      | (((0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                          << 2U) | (((0x0040U == (0x0040U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                     << 1U) | (0x0020U 
                                               == (0x0020U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11269: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '11'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1479_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',11,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___s_303));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11269, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0828_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1479___Vfuncout_300;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___376_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___589_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0828_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0474_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0475_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0071_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0209_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0474_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0894_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__div_sel_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0893_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0209_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0473_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0469_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0465_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0467_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0463_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0471_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0461_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0894_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0893_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0472_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0473_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0083_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0468_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0469_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0065_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0466_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0467_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0074_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0462_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0463_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0055_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0470_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0471_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0062_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0460_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0461_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0058_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__div_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__mult_en_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___175_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__illegal_insn_dec)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0472_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0472_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0182_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0472_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0468_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0468_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0466_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0466_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0094_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0462_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0462_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0470_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0470_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0126_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0460_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0460_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__mult_en_dec) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__div_en_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___113_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___112_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___175_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0182_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0102_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0137_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__jump_in_dec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0094_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__branch_in_dec_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_access_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___292_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_en_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___320_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___264_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___254_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___374_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___384_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___364_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___354_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___306_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___334_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___342_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___244_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___504_ 
        = (1U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_we))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___288_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___316_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___302_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___290_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___318_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___372_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___362_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___352_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___304_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___332_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_in_dec;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___170_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec)));
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___294_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___280_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___322_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___266_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___274_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___256_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___376_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___386_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___366_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___356_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___308_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___336_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___344_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___246_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_access 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_access_o;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___236_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_en_dec;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___313_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___505_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___504_;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___294_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___280_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___322_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___266_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___274_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___256_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___376_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___386_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___366_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___356_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___308_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___336_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___344_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___246_ = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_access 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_access_o;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___236_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_en_dec;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___313_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___505_ = 2U;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___287_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___288_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___285_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___301_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___302_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___299_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___381_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___382_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_access_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_access;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___315_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___316_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___313_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_type_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___505_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_we_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___303_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___304_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___301_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___383_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___384_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___381_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___317_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___318_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_we_dec)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___315_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_type_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_type_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_we_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___131_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_we_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___305_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___306_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___303_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___385_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___386_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___383_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_type_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_type_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_we_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___307_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___308_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___305_));
    vlSelfRef.encarsia_tb__DOT__data_we_o = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__data_we_o;
    vlSelfRef.__VprimaryPorts.data_we_o = vlSelfRef.encarsia_tb__DOT__data_we_o;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___Vfuncout_492;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___b_494;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___Vfuncout_496;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___Vfuncout_500;
    ::VlWide<3>/*95:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___Vfuncout_504;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___Vfuncout_508;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___Vfuncout_512;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515;
    ::CData/*0:0*/ __Vdfg_Regularize_11400;
    ::CData/*0:0*/ __Vdfg_Regularize_11401;
    ::CData/*0:0*/ __Vdfg_Regularize_11403;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___Vfuncout_492 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___b_494 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___Vfuncout_496 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___Vfuncout_500 = 0;
    VL_ZERO_W(96, __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___Vfuncout_504 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___Vfuncout_508 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___Vfuncout_512 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515 = 0;
    __Vdfg_Regularize_11400 = 0;
    __Vdfg_Regularize_11401 = 0;
    __Vdfg_Regularize_11403 = 0;
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___402_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___398_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___400_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___392_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___295_;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___396_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___394_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___301_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___305_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___309_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___343_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___344_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___341_ 
        = (((3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q)) 
            << 1U) | (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___115_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___116_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___117_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___118_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___119_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___120_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___121_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___122_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___345_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                             >> 0x0000001fU)))) << 8U) 
           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
              >> 0x00000018U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___349_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 0x00000017U))))) 
            << 8U) | (0x000000ffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                     >> 0x00000010U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___353_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 0x0000000fU))))) 
            << 8U) | (0x000000ffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                     >> 8U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___357_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 7U))))) << 8U) 
           | (0x000000ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___370_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                             >> 0x0000001fU)))) << 0x00000010U) 
           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
              >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___374_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 0x00000017U))))) 
            << 0x00000010U) | (0x0000ffffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                              >> 8U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___378_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 0x0000000fU))))) 
            << 0x00000010U) | (0x0000ffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___366_ 
        = ((((- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q))) 
             & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                   >> 7U))))) << 0x00000010U) 
           | ((0x0000ff00U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                              << 8U)) | (0x000000ffU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
                                            >> 0x00000010U))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___388_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___389_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___390_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___391_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___362_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___363_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___364_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___365_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___383_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___384_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___385_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___386_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___348_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___352_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___356_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___360_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___369_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___373_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___377_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___381_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___132_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___137_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___139_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___140_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___135_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___144_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_err_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___159_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___160_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_err_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q));
    __Vdfg_Regularize_11403 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_err_i) 
                               | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q));
    __Vdfg_Regularize_11400 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_gnt_i) 
                               | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q));
    __Vdfg_Regularize_11401 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rvalid_i) 
                               | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___163_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___164_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_pmp_err_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___111_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___110_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___183_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___184_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___130_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___302_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___303_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___304_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___306_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___307_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___308_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___310_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___311_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___312_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___313_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___334_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___335_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___162_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___166_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___214_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___218_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___286_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___290_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___329_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___330_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___331_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___332_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___170_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___198_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___226_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___266_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___319_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___320_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___321_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___322_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___323_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___154_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___210_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___294_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___158_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___178_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___202_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___234_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___274_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___188_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___246_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___252_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___107_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___315_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___316_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___317_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___182_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___230_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___270_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___258_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___325_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___327_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___278_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___282_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___129_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___296_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___297_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___298_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___299_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___300_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___150_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___174_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___206_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___222_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___262_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___194_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___240_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___106_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___337_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___338_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___339_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___147_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___148_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___189_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___190_)
            ? 4U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___342_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___341_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___379_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___115_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___375_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___371_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___367_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___118_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___358_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___119_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___354_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___121_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___346_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___122_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___391_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___390_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___389_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___388_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U] 
        = (::IData)((((::QData)((::IData)(((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                            << 0x00000010U) 
                                           | (0x0000ffffU 
                                              & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 8U))))) 
                      << 0x00000020U) | (::QData)((::IData)(
                                                            ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                                              << 8U) 
                                                             | (0x000000ffU 
                                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
                                                                   >> 0x10U)))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[1U] 
        = (::IData)(((((::QData)((::IData)(((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                             << 0x00000010U) 
                                            | (0x0000ffffU 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 8U))))) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                                               << 8U) 
                                                              | (0x000000ffU 
                                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q 
                                                                    >> 0x10U)))))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i)) 
                      << 0x00000020U) | (::QData)((::IData)(
                                                            ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                                              << 0x00000018U) 
                                                             | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i)) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                                                               << 0x00000018U) 
                                                              | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q)))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___Vfuncout_512 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___b_514[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22328: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._718_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___s_515));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22328, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___387_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___718___Vfuncout_512;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___347_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___345_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___348_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___351_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___349_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___352_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___355_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___353_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___356_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___359_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___357_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___360_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___368_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___366_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___369_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___372_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___370_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___373_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___376_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___374_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___377_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___380_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___378_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___381_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_addr_last 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_last_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___151_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___137_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___152_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___145_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___144_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___141_ 
        = __Vdfg_Regularize_11403;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___142_ 
        = __Vdfg_Regularize_11403;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___125_ 
        = __Vdfg_Regularize_11400;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___127_ 
        = __Vdfg_Regularize_11400;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_ 
        = __Vdfg_Regularize_11401;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___146_ 
        = __Vdfg_Regularize_11401;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___423_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___111_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___427_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___111_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___445_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___449_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___130_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___161_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___159_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___162_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___165_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___163_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___166_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___157_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___155_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___095_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rvalid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___107_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___339_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___338_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___337_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498 
        = (5U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                 << 1U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___Vfuncout_496 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___b_498) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22220: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._674_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___s_499));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22220, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___336_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___674___Vfuncout_496;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___149_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___147_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___150_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___387_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_w_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___387_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___347_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___074_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___351_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___355_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___359_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___082_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___368_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___372_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___376_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___055_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___380_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_addr_last;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___153_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___151_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___154_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___145_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___133_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___142_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___232_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___228_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___220_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___212_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___216_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___208_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___200_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___186_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___204_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___192_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___126_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___094_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___146_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___106_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___161_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___165_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___157_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___336_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_incr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___336_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___149_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___043_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___365_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___364_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___363_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___362_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___081_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___074_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___054_)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___064_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___054_)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___064_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___Vfuncout_504 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___b_506[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22272: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._696_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___s_507));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22272, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___361_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___696___Vfuncout_504;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___386_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___385_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___384_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___383_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___082_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___075_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___055_)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___065_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___055_)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___065_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___Vfuncout_508 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___b_510[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22306: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._713_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___s_511));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22306, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___382_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___713___Vfuncout_508;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__lsu_addr_last_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___138_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_or_pmp_err)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___100_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___098_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___140_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___092_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_gnt_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___133_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___223_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___224_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___231_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___232_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___227_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___228_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___219_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___220_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___167_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___168_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___175_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___135_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___176_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___171_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___172_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___211_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___212_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___141_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___215_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___216_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_pmp_err_i)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___207_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___132_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___208_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___185_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___186_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___183_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___191_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___189_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___192_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_resp_valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___094_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_addr_incr_req 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__addr_incr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___361_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_b_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___361_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___382_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_h_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___382_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___096_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___095_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___138_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___199_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___092_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___200_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___225_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___223_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___226_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___233_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___231_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___234_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___229_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___227_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___230_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___221_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___219_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___222_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___169_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___167_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___170_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___177_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___175_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___178_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___181_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___179_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___182_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___173_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___171_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___174_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___213_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___211_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___214_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___217_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___215_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___218_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___209_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___207_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___210_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___187_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___185_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___188_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___193_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___191_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___194_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___101_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_resp_valid_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___100_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___099_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_resp_valid_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___098_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_resp_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_resp_valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_incr_req_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_addr_incr_req;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___040_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___041_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___344_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___343_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___342_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_b_ext;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[1U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_w_ext)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_h_ext))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[2U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_w_ext)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_h_ext))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___Vfuncout_500 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503)))
            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[0U]
            : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503)))
                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[1U]
                : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503)))
                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___b_502[2U]
                    : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22239: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._678_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___s_503));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22239, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___340_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___678___Vfuncout_500;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___097_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___139_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___199_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___202_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___070_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___225_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___067_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___233_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___229_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___221_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___083_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___177_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___181_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___173_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___213_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___217_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___056_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___209_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___187_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___193_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__store_err_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__load_err_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_valid_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_resp_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_resp_valid_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_resp_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___340_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___340_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___097_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___076_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___201_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___335_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___334_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___b_494 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___056_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___066_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___Vfuncout_492 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___b_494)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___b_494) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:22204: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.load_store_unit_i._671_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___s_495));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 22204, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___333_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___671___Vfuncout_492;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___195_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___196_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___134_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___085_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___203_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___204_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___459_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___086_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_store_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__store_err_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_load_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__load_err_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___161_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_resp_valid_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_rdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_lsu 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_rdata_valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___333_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_update 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___333_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___197_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___195_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___198_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___205_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___203_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___206_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_store_err_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_store_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___11_ = 
        ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_load_err) 
         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_store_err));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_load_err_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_load_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_lsu 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_lsu_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_lsu;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___042_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___403_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_update;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___079_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___197_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___205_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_resp_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___11_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_lsu_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_lsu;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___402_ 
        = (0x00ffffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___403_)
                           ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_i 
                              >> 8U) : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_err_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_resp_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___09_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_lsu_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux__05b1__05d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_lsu_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT___402_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___18_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_err_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___28_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___18_)));
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___Vfuncout_432;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___a_433;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___Vfuncout_432 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___a_433 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___702_));
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___708_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___706_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___704_;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___700_;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q = 0U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q = 0U;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___587_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___158_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___254_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_by_zero_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___109_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___453_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_numerator_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___082_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___521_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___524_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_quotient_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___450_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___493_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___516_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___378_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___368_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___358_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___348_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___386_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___338_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___374_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___609_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___332_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___344_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___326_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___354_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___618_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___314_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___621_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___624_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___308_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___302_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___627_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___630_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___633_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___636_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___296_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___290_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___284_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___278_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___615_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___320_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___364_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___094_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___112_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___224_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___217_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___214_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___115_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___181_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___250_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___240_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___154_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___272_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___261_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___230_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___136_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___129_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___212_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___205_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___202_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__md_state_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___497_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___498_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___887_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___453_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___448_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___450_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___491_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___493_) 
                          - (::IData)(1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___515_ 
        = ((::IData)(1U) << (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___516_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___377_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___378_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___367_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___368_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___357_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___358_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___347_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___348_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___337_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___338_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___331_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___332_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___325_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___326_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___313_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___314_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___307_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___308_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___301_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___302_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___295_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___296_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___289_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___290_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___283_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___284_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___277_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___278_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___319_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___320_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___159_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___160_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___110_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___112_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___222_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___224_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___215_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___217_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___213_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___214_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___120_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___122_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___113_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___115_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___179_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___181_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___172_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___174_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___169_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___171_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___166_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___168_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___163_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___161_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___162_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___249_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___250_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___239_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___240_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___103_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___105_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___152_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___154_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___145_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___147_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___142_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___144_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___139_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___141_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___137_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___138_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___270_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___272_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___259_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___261_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___229_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___230_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___134_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___136_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___127_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___129_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___189_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___191_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___182_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___184_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___210_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___212_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___203_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___205_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___200_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___202_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___197_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___199_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___194_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___196_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___192_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___193_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___575_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___497_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___557_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___448_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___712_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___491_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___711_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___515_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___377_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___367_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___600_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___357_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___604_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___347_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___607_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___337_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___610_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___331_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___613_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___325_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___619_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___313_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___622_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___307_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___625_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___628_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___295_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___631_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___289_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___283_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___637_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___277_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___616_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___319_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___680_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___159_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___695_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___659_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___222_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___660_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___215_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___661_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___213_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___692_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___120_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___693_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___113_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___673_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___179_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___674_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___172_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___675_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___169_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___676_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___166_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___677_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___163_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___678_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___161_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___649_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___249_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___653_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___239_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___697_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___682_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___152_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___683_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___145_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___684_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___142_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___685_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___139_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___686_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___137_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___641_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___270_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___645_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___259_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___657_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___229_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___688_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___134_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___690_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___127_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___670_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___671_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___182_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___663_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___664_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___203_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___665_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___200_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___666_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___197_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___667_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___194_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___668_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___192_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___495_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___575_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___445_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___557_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___221_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___712_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___452_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___712_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__one_shift 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___711_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___334_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___610_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___609_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___328_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___613_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___612_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___316_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___619_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___618_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___310_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___622_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___621_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___304_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___625_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___624_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___298_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___628_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___627_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___292_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___631_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___630_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___286_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___634_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___633_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___280_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___637_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___636_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___322_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___616_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___615_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___156_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___680_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___695_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___219_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___661_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___660_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___659_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___117_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___693_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___692_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___176_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___678_) 
             << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___677_) 
                        << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___676_) 
                                  << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___675_) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___674_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___673_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___246_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___649_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___236_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___653_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___697_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___149_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___686_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___685_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___684_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___683_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___682_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___267_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___641_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___256_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___645_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___226_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___657_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___688_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___124_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___690_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___186_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___671_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___670_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___207_ 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___668_) 
             << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___667_) 
                        << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___666_) 
                                  << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___665_) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___664_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___663_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___444_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___445_)
            ? 4U : 3U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___451_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___887_ 
                 >> (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___452_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___523_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__one_shift));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___219_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___a_433 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___221_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___Vfuncout_432 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435)))
            ? 0x1fU : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435)))
                        ? 0x1fU : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435)))
                                    ? 0x1fU : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___a_433))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19217: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._825_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___s_435));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19217, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___218_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___825___Vfuncout_432;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___123_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___124_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___721_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___444_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___710_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___451_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___522_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___524_ 
           | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___523_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___658_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___218_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___689_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___123_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___585_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___522_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___658_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___658_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___689_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___689_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___520_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___585_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_counter_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___420_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_valid;
}
