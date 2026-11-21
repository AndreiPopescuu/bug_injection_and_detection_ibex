// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___ctor_var_reset_1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset_1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1183740193150896592ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15357891497657618495ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2759837889653404624ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2151693671862328926ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1562315608195050802ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3580788509048677321ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2844518945649190627ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9483581804780553272ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4285939895073180606ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17969509335153628048ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 317876883839845990ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11960401477078886885ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7690084625884952165ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6902797148761813349ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8676191676728350859ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15151216791684676244ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_b_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16335406174684202247ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_h_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8446100985568544169ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1669382533772783613ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16152743834462475313ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665786101841374461ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rdata_w_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 138775448777085147ull);
    vlSelf->encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1887863275483989962ull);
    vlSelf->__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10855___Vfuncout_4 = 0;
    vlSelf->__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___10855___s_7 = 0;
    vlSelf->__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___3453___Vfuncout_248 = 0;
    vlSelf->__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___Vfuncout_328 = 0;
    vlSelf->__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1932___s_331 = 0;
    vlSelf->__VstlTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VstlTriggered.data(), sizeof(vlSelf->__VstlTriggered[0]), 1);
    vlSelf->__VicoTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VicoTriggered.data(), sizeof(vlSelf->__VicoTriggered[0]), 1);
    vlSelf->__VactTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VactTriggered.data(), sizeof(vlSelf->__VactTriggered[0]), 2);
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__clk_i__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__rst_ni__0 = 0;
    vlSelf->__VnbaTriggered[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__VnbaTriggered.data(), sizeof(vlSelf->__VnbaTriggered[0]), 2);
    vlSelf->__Vactivity[0] = 0;
    VL_UNPACKED_FILL(vlSelf->__Vactivity.data(), sizeof(vlSelf->__Vactivity[0]), 2);
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset_0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___ctor_var_reset_0(vlSelf);
    Vtop___024root___ctor_var_reset_1(vlSelf);
}
