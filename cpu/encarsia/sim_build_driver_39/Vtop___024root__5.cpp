// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___Vfuncout_336;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___Vfuncout_380;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383;
    ::CData/*0:0*/ __Vdfg_Regularize_11359;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___Vfuncout_336 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___Vfuncout_380 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383 = 0;
    __Vdfg_Regularize_11359 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0213_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1344_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1090_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0211_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0210_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1027_)
            : 0U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1086_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0235_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0259_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0324_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0340_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0306_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0332_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0316_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0296_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1069_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1071_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0900_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0904_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1087_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1088_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1089_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1091_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1092_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0890_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0896_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0790_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0794_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0908_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1028_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1029_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1030_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1031_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1032_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1033_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1034_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1035_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1036_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1037_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0406_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0964_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1006_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1022_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0864_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0872_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1132_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1133_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0490_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0520_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0878_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1026_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0750_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1014_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0956_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0444_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0484_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1018_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0526_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0686_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0944_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1120_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1121_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1098_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0804_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0826_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0476_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0754_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0822_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0560_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0646_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0428_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0418_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0994_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0990_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1114_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1115_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1109_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1111_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1112_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0920_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0778_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0762_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0812_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0738_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0710_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0588_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1123_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1124_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0766_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0912_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0662_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0884_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0856_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0630_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0848_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0838_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1061_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1062_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1063_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1064_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1065_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1066_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1067_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1039_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1040_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1041_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1042_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1043_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1044_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1045_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0770_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0924_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0972_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0502_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0722_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0452_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0602_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1094_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1096_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0976_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0980_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1105_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0798_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1126_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1127_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1128_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0532_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0782_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0436_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1055_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1056_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1057_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1058_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1059_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0786_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0514_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1107_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0468_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0802_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0496_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0742_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1047_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1048_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1049_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1050_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1051_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1052_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1053_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0774_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0928_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0984_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0508_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0734_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0460_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0616_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1081_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1082_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1083_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1084_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1085_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0960_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1002_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1010_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0950_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0936_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1079_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0998_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1117_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1118_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0808_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1100_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1101_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1102_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1103_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0758_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0816_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0916_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0698_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0574_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0968_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0251_ 
        = (6U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0250_ 
        = (6U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1073_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1074_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1075_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1076_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1077_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0746_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0674_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0546_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1130_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0372_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0388_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0350_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0384_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0368_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0328_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0380_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0362_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0344_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0310_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0376_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0356_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0336_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0320_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0300_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0394_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0374_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0352_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0400_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0386_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0370_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0330_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0364_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0346_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0312_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0396_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0378_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0358_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0338_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0322_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0302_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0247_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
    __Vdfg_Regularize_11359 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                               | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1347_ 
        = (3U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0236_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0253_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0257_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0256_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0255_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0258_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0477_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0478_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__nmi_mode_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_nm_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0235_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0323_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0324_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0803_ 
        = (1U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0804_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1067_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1066_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1065_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1064_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1063_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1062_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1061_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___Vfuncout_336 
        = ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                  >> 6U)) || ((1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                                     >> 5U)) || ((1U 
                                                  & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                                                     >> 4U)) 
                                                 || ((1U 
                                                      & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                                                         >> 3U)) 
                                                     || ((1U 
                                                          & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                                                             >> 2U)) 
                                                         || ((1U 
                                                              & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339) 
                                                                 >> 1U)) 
                                                             || (1U 
                                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16586: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1946_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___s_339));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16586, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1060_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1946___Vfuncout_336;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1129_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1130_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0371_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0372_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0391_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0392_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0247_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0286_ 
        = __Vdfg_Regularize_11359;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0285_ 
        = __Vdfg_Regularize_11359;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0278_ 
        = __Vdfg_Regularize_11359;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0215_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0258_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0259_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_mode_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__nmi_mode 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__nmi_mode_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0886_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0892_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0860_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0868_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0874_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0880_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0852_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0844_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0834_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0227_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0150_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0803_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0079_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1129_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__controller_run_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1129_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0373_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0374_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0371_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0650_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0788_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0792_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0488_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0518_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0748_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0442_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0482_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0684_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0752_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0644_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0416_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0776_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0760_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0736_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0708_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0764_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0660_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0628_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0768_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0500_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0720_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0450_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0600_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0796_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0530_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0780_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0434_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0784_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0512_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0466_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0800_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0494_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0740_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0772_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0506_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0732_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0458_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0756_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0696_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0572_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0744_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0672_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0544_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0248_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0260_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0285_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_mode 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__nmi_mode;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0873_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0874_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0027_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0079_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_req_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0058_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_run 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__controller_run_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0112_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0373_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0089_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0735_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0286_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0736_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0779_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0780_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1347_)
            : 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0739_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0260_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0740_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_mode;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0412_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0450_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0420_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0428_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0436_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__nmi_mode_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_int 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_req_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___163_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_run)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0393_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0394_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0112_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0737_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0735_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0738_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0781_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0779_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0782_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0741_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0739_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0742_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0481_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0364_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0365_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0366_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0367_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__req_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_req_int;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0080_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0632_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0648_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0393_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0128_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0737_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0781_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0741_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0458_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0464_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0470_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0476_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0482_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0488_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0494_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0500_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0506_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0512_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0628_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0344_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__req_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__req_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0080_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0647_ 
        = (5U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0648_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0775_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0776_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0128_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1128_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1127_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1126_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382 
        = (0x00000028U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0107_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___Vfuncout_380 
        = (3U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382) 
                         >> 2U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___b_382) 
                                       >> 4U) : 1U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16822: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2011_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___s_383));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16822, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1125_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2011___Vfuncout_380;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0649_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0650_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0647_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0777_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0775_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0778_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0074_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1125_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0098_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0777_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_pc_mux_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1108_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1109_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0098_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_pc_mux_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_pc_mux_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc_mux_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_pc_mux_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0065_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___057_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc_mux_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___058_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc_mux_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___059_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc_mux_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___060_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc_mux_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0574_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_wb_i;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[0U] 
        = (::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)
                      ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___195_
                      : 0ULL));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[1U] 
        = (((::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)
                        ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___197_
                        : 0ULL)) << 2U) | (::IData)(
                                                    (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)
                                                       ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___195_
                                                       : 0ULL) 
                                                     >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[2U] 
        = (((::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)
                        ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___197_
                        : 0ULL)) >> 0x0000001eU) | 
           ((::IData)((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni)
                         ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___197_
                         : 0ULL) >> 0x00000020U)) << 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rst_ni) 
           && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___461_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___155_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___154_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___153_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___248_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___258_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___268_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___276_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___282_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___296_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___310_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___324_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___328_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___338_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___346_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___358_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___368_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___378_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___388_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___393_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___214_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___403_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___238_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___432_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___433_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___437_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___438_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___427_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___428_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___422_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___423_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___397_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___398_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___412_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___413_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___407_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___408_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___226_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___220_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___417_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___418_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___232_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___130_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imd_val_q_ex_o[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__imd_val_q_ex[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_imd_val_q 
        = (((::QData)((::IData)(((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[2U] 
                                  << 0x0000001eU) | 
                                 (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[1U] 
                                  >> 2U)))) << 0x00000020U) 
           | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[0U])));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[1U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__imd_val_q_i[2U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_imd_val_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__unused_imd_val 
        = (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U]);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esv2v_tmp_915C6 
        = (0x0003ffffU & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                           << 0x0000000eU) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                              >> 0x00000012U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___000_ 
        = (0x0003ffffU & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                           << 0x0000000eU) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                              >> 0x00000012U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___531_ 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
            << 0x0000001eU) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                               >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___151_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U])) 
                                     << 0x0000001eU) 
                                    | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U])) 
                                       >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___433_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U])) 
                                     << 0x0000001eU) 
                                    | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U])) 
                                       >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___429_ 
        = (0x00000003ffffffffULL & (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U])) 
                                     << 0x0000001eU) 
                                    | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U])) 
                                       >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___528_ 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
            << 0x0000001eU) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                               >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___097_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___514_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___396_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[0U] 
        = (::IData)((1ULL | ((::QData)((::IData)(((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                   << 0x0000001eU) 
                                                  | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                     >> 2U)))) 
                             << 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[1U] 
        = (((::IData)((1ULL | ((::QData)((::IData)(
                                                   ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                     << 0x0000001eU) 
                                                    | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                       >> 2U)))) 
                               << 1U))) << 1U) | (::IData)(
                                                           ((1ULL 
                                                             | ((::QData)((::IData)(
                                                                                ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                                                << 0x0000001eU) 
                                                                                | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                                                >> 2U)))) 
                                                                << 1U)) 
                                                            >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[2U] 
        = (3U & (((::IData)((1ULL | ((::QData)((::IData)(
                                                         ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                           << 0x0000001eU) 
                                                          | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                             >> 2U)))) 
                                     << 1U))) >> 0x0000001fU) 
                 | ((::IData)(((1ULL | ((::QData)((::IData)(
                                                            ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
                                                              << 0x0000001eU) 
                                                             | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                                                                >> 2U)))) 
                                        << 1U)) >> 0x00000020U)) 
                    << 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___425_ 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[2U] 
            << 0x0000001eU) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[1U] 
                               >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_q 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__imd_val_q_i[0U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__02eunused_imd_val_q 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___424_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___425_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___513_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_q 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___443_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___438_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_denominator_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___424_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___512_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___514_) 
           ^ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___513_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___442_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___443_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___437_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___438_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___724_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___512_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___442_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___581_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___437_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___511_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___724_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___096_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___724_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___510_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___511_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___554_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___510_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___699_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___554_;
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___Vfuncout_84;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___Vfuncout_88;
    ::VlWide<5>/*159:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___Vfuncout_92;
    ::VlWide<5>/*159:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___Vfuncout_96;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___Vfuncout_100;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___Vfuncout_104;
    ::VlWide<3>/*95:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___Vfuncout_108;
    ::VlWide<6>/*191:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___Vfuncout_112;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___Vfuncout_116;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___Vfuncout_120;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___Vfuncout_124;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___Vfuncout_128;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131;
    ::CData/*2:0*/ __Vdfg_Regularize_11332;
    ::CData/*1:0*/ __Vdfg_Regularize_11366;
    ::CData/*0:0*/ __Vdfg_Regularize_11381;
    ::CData/*1:0*/ __Vdfg_Regularize_11419;
    ::CData/*3:0*/ __Vdfg_Regularize_11420;
    ::CData/*3:0*/ __Vdfg_Regularize_11421;
    ::CData/*1:0*/ __Vdfg_Regularize_11422;
    ::CData/*1:0*/ __Vdfg_Regularize_11423;
    ::CData/*4:0*/ __Vdfg_Regularize_11424;
    ::IData/*31:0*/ __Vdfg_Regularize_11433;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___Vfuncout_84 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___Vfuncout_88 = 0;
    VL_ZERO_W(160, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___Vfuncout_92 = 0;
    VL_ZERO_W(160, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___Vfuncout_96 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___Vfuncout_100 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___Vfuncout_104 = 0;
    VL_ZERO_W(96, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___Vfuncout_108 = 0;
    VL_ZERO_W(192, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___Vfuncout_112 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___Vfuncout_116 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___Vfuncout_120 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___Vfuncout_124 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___Vfuncout_128 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131 = 0;
    __Vdfg_Regularize_11332 = 0;
    __Vdfg_Regularize_11366 = 0;
    __Vdfg_Regularize_11381 = 0;
    __Vdfg_Regularize_11419 = 0;
    __Vdfg_Regularize_11420 = 0;
    __Vdfg_Regularize_11421 = 0;
    __Vdfg_Regularize_11422 = 0;
    __Vdfg_Regularize_11423 = 0;
    __Vdfg_Regularize_11424 = 0;
    __Vdfg_Regularize_11433 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rst_ni)
            ? (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_) 
                << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_) 
                           << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_)))
            : 0U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___019_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                 & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___049_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__busy_o 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___057_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___058_ 
        = (1U & (~ ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___063_ 
        = (1U & (~ ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___113_ 
        = ((4U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___112_ 
        = ((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___102_ 
        = ((1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___030_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___058_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___041_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___063_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___113_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___113_))) 
                     >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___102_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___041_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___030_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___057_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___047_ 
        = (3U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___046_ 
        = (3U != (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                        >> 0x00000010U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___104_ 
        = ((((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
              ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
              : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_rdata_i) 
            << 0x00000010U) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                               >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__rdata_unaligned 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___100_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___101_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___104_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___102_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___014_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_rdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_rdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_rdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___038_ 
        = (3U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                    >> 0x0000000cU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___236_ 
        = (3U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___237_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___238_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___239_ 
        = (1U & (~ (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___116_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___212_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___226_ 
        = (1U & (~ (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___241_ 
        = (3U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___242_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___243_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___244_ 
        = (1U & (~ (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___125_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___201_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___234_ 
        = (1U & (~ (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___222_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___223_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___224_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___111_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___112_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___113_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___114_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___205_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___206_ 
        = (3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___207_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___210_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___218_ 
        = (1U & (~ (0U != (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___230_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___231_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___232_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___089_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___101_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___107_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___169_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___184_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___120_ 
        = (6U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___121_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___122_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___123_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___216_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___039_ 
        = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                    >> 0x0000000fU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___087_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___099_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___105_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___167_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___182_ 
        = (3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___194_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___195_ 
        = (3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___196_ 
        = (2U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___199_ 
        = (1U & (~ (0U != (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000dU)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___027_ 
        = (1U & (~ (0U != (0x000000ffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 5U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___095_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___029_ 
        = (1U & (~ (::IData)((0U != (0x0000107cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___032_ 
        = (1U & (~ (0U != (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 7U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___031_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___178_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___190_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___093_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___083_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___176_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___188_ 
        = (3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___162_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___163_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___081_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___028_ 
        = (2U == (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 7U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___057_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___075_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___151_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___160_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___055_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___073_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___149_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___158_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___171_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___172_ 
        = (2U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___147_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___067_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___138_ 
        = (1U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___065_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___030_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___136_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___134_ 
        = (3U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___049_ 
        = (2U == (3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___047_ 
        = (4U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                        >> 0x0000000dU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___034_ 
        = (1U & (~ (0U != (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 7U)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___035_ 
        = (1U & (~ (0U != (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 7U)))));
    __Vdfg_Regularize_11422 = (((7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000dU))) 
                                << 1U) | (6U == (7U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0000000dU))));
    __Vdfg_Regularize_11423 = (((5U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000dU))) 
                                << 1U) | (1U == (7U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0000000dU))));
    __Vdfg_Regularize_11433 = (0x33U | (((::IData)(
                                                   (0x0000001fU 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 2U))) 
                                         << 0x00000014U) 
                                        | ((0x000f8000U 
                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 8U)) 
                                           | (0x00000f80U 
                                              & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___037_ 
        = (0U != (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 2U)));
    __Vdfg_Regularize_11381 = (1U & (~ (::IData)((0U 
                                                  != 
                                                  (0x00001060U 
                                                   & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
    __Vdfg_Regularize_11419 = (((3U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000dU))) 
                                << 1U) | (1U == (7U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0000000dU))));
    __Vdfg_Regularize_11366 = (((1U == (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000aU))) 
                                << 1U) | (1U & (~ (0U 
                                                   != 
                                                   (3U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 0x0000000aU))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___036_ 
        = (0U != (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 2U)));
    __Vdfg_Regularize_11332 = ((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      >> 0x0000000aU)) 
                               | (3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 5U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___079_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___085_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___214_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___027_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___032_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___103_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___186_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___028_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___030_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___059_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___203_ 
        = __Vdfg_Regularize_11422;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___192_ 
        = __Vdfg_Regularize_11422;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___208_ 
        = __Vdfg_Regularize_11423;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___197_ 
        = __Vdfg_Regularize_11423;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___145_ 
        = __Vdfg_Regularize_11381;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___132_ 
        = __Vdfg_Regularize_11381;
    __Vdfg_Regularize_11424 = (((7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000dU))) 
                                << 4U) | (((5U == (7U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 0x0000000dU))) 
                                           << 3U) | 
                                          (((4U == 
                                             (7U & 
                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 0x0000000dU))) 
                                            << 2U) 
                                           | (::IData)(__Vdfg_Regularize_11419))));
    __Vdfg_Regularize_11420 = (((7U == (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 0x0000000dU))) 
                                << 3U) | (((5U == (7U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 0x0000000dU))) 
                                           << 2U) | (::IData)(__Vdfg_Regularize_11419)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___164_ 
        = __Vdfg_Regularize_11366;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___173_ 
        = __Vdfg_Regularize_11366;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___155_ 
        = __Vdfg_Regularize_11366;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___142_ 
        = (3U == (::IData)(__Vdfg_Regularize_11332));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___143_ 
        = (2U == (::IData)(__Vdfg_Regularize_11332));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___144_ 
        = (1U == (::IData)(__Vdfg_Regularize_11332));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___129_ 
        = (3U == (::IData)(__Vdfg_Regularize_11332));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___130_ 
        = (2U == (::IData)(__Vdfg_Regularize_11332));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___131_ 
        = (1U == (::IData)(__Vdfg_Regularize_11332));
    __Vdfg_Regularize_11421 = ((((7U == (::IData)(__Vdfg_Regularize_11332)) 
                                 << 3U) | ((6U == (::IData)(__Vdfg_Regularize_11332)) 
                                           << 2U)) 
                               | (((5U == (::IData)(__Vdfg_Regularize_11332)) 
                                   << 1U) | (4U == (::IData)(__Vdfg_Regularize_11332))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___213_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___214_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___096_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___097_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___185_ 
        = (3U | ((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000aU)) | ((2U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000bU)) 
                                              | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0000000cU)))) 
                  << 0x0000001dU) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___186_)
                                       ? (0x00004044U 
                                          | ((((6U 
                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 5U))) 
                                              << 0x00000018U) 
                                             | ((0x00800000U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000015U)) 
                                                | (0x00400000U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 0x00000010U)))))
                                       : (0x0dU | (
                                                   ((((((4U 
                                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                            >> 0x0000000aU)) 
                                                        | ((2U 
                                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                               >> 0x0000000bU)) 
                                                           | (1U 
                                                              & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0000000cU)))) 
                                                       << 9U) 
                                                      | (((4U 
                                                           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                              >> 0x0000000aU)) 
                                                          | ((2U 
                                                              & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                   >> 0x0000000cU)))) 
                                                         << 6U)) 
                                                     | ((((4U 
                                                           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                              >> 0x0000000aU)) 
                                                          | ((2U 
                                                              & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0000000bU)) 
                                                             | (1U 
                                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                   >> 0x0000000cU)))) 
                                                         << 3U) 
                                                        | ((4U 
                                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                               >> 0x0000000aU)) 
                                                           | ((2U 
                                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                  >> 0x0000000bU)) 
                                                              | (1U 
                                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                    >> 0x0000000cU)))))) 
                                                    << 0x0000000fU) 
                                                   | ((0x00007c00U 
                                                       & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          << 8U)) 
                                                      | (0x000003e0U 
                                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                            >> 2U)))))) 
                                     << 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___153_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___040_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___041_)
            ? 0x00100073U : (0x00e7U | ((::IData)((0x0000001fU 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 7U))) 
                                        << 0x0000000fU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___204_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___203_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___193_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___192_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___209_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___208_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___198_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___197_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___220_ 
        = __Vdfg_Regularize_11424;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___228_ 
        = __Vdfg_Regularize_11424;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___109_ 
        = __Vdfg_Regularize_11420;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___118_ 
        = __Vdfg_Regularize_11420;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___165_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___164_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___174_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___173_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___156_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___155_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___068_ 
        = (::IData)((3U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___069_)
                             ? ((0x007c0000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x00000010U)) 
                                | (::IData)((0x000003ffU 
                                             & (__Vdfg_Regularize_11433 
                                                >> 2U))))
                             : (0x0019U | ((::IData)(
                                                     (0x0000001fU 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 7U))) 
                                           << 0x0000000dU))) 
                           << 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___140_ 
        = __Vdfg_Regularize_11421;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___127_ 
        = __Vdfg_Regularize_11421;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___215_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___213_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___216_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___181_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___179_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___182_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___098_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___096_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___099_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___102_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___105_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___187_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___185_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___188_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___060_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___061_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___058_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___042_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___040_ 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___043_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___221_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___220_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___229_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___228_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___110_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___109_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___119_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___118_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___154_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___152_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___156_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___070_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___068_ 
           & (- (::IData)((1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                    >> 0x0000000cU))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___141_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___140_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___128_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___127_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___217_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___215_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___218_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___183_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___181_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___184_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___100_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___098_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___101_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___106_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___104_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___107_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___189_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___187_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___190_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___062_ 
        = ((~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
               >> 0x0000000cU)) & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___060_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___044_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___042_ 
           & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000cU)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___232_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___231_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___230_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___229_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U] 
        = (0x00842023U | ((0xfe000000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U]) 
                          | ((((0x00000700U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 6U)) 
                               | (0x00000038U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 4U))) 
                              << 0x0000000cU) | ((0x00000c00U 
                                                  & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i) 
                                                 | (0x00000200U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       << 3U))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U] 
        = ((0x01ffffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U]) 
           | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                      >> 4U)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 0x0cU))) 
              << 0x00000019U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U] 
        = (3U | ((0xffffff80U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]) 
                 | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                            >> 4U)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             >> 0x0cU))) 
                    >> 7U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U] 
        = (0x00002400U | ((0xfffc007fU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]) 
                          | (((0x00000700U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 1U)) 
                              | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 2U))) << 7U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U] 
        = (0x00040000U | ((0xf803ffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]) 
                          | (((0x00000100U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 3U)) 
                              | ((0x000000e0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 5U)) 
                                 | (0x00000010U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 2U)))) 
                             << 0x00000012U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U] 
        = (0x07ffffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[3U] 
        = (0x00000013U | ((0xfffffc00U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[3U]) 
                          | (0x00000380U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 5U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[3U] 
        = (0x00010400U | ((0x000003ffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[3U]) 
                          | ((::IData)(((0x000000f0U 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 3U)) 
                                        | ((0x0000000cU 
                                            & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 9U)) 
                                           | ((2U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 4U)) 
                                              | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 6U)))))) 
                             << 0x00000016U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___Vfuncout_120 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___b_122[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21180: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._446_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___s_123));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21180, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___227_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___446___Vfuncout_120;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___157_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___154_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___072_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___070_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___073_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___145_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___144_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___143_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___142_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___141_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___Vfuncout_96 
        = (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:20974: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._348_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___s_99));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 20974, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___139_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___348___Vfuncout_96;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___132_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___131_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___130_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___129_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___128_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U] 
        = (0x00047433U | ((0xfff00000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U]) 
                          | ((0x00038000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                             | (0x00000380U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U] 
        = (0x00800000U | ((0x000fffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U]) 
                          | (0x00700000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 0x00000012U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U] 
        = (0x00000033U | (0xffffff80U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U] 
        = (0x00046400U | ((0xff80007fU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]) 
                          | ((((0x000000e0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                               | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 7U))) << 0x0000000fU) 
                             | (0x00000380U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U] 
        = (0x00800000U | (0x007fffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U] 
        = (0x00000033U | (0xffffff80U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U] 
        = (0x00044400U | ((0xff80007fU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U]) 
                          | ((((0x000000e0U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                               | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 7U))) << 0x0000000fU) 
                             | (0x00000380U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U] 
        = (0x00800000U | (0x007fffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[4U] 
        = (0x00000033U | (0xffffff80U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[4U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[4U] 
        = (0x40840400U | ((0x0000007fU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[4U]) 
                          | (((0x0000e000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x0000000bU)) 
                              | ((0x00000700U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 1U)) 
                                 | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 7U)))) 
                             << 7U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___Vfuncout_92 
        = ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
            ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U])))
                : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[4U]))))
            : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[3U])))
                : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___b_94[0U]
                            : 0U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:20939: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._332_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___s_95));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 20939, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___126_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___332___Vfuncout_92;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___217_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___183_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___100_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___189_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___064_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___062_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___065_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___046_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___044_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___047_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___233_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___227_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___234_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___159_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___157_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___160_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___074_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___072_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___075_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___146_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___139_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___147_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___133_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___126_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___134_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___224_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___223_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___222_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___221_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118 
        = (1U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___013_) 
                 << 3U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___Vfuncout_116 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___b_118)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21151: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._434_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___s_119));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21151, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___219_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___434___Vfuncout_116;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___066_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___064_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___048_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___046_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___049_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___233_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___159_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___148_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___146_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___149_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___135_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___133_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___136_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___225_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___219_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___226_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___048_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___150_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___148_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___151_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___137_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___135_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___138_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___225_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___076_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___077_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___008_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___050_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___051_)
            ? __Vdfg_Regularize_11433 : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___005_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___150_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___137_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___078_ 
        = ((~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
               >> 0x0000000cU)) & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___076_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___052_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___050_ 
           & (- (::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                 >> 0x0000000cU)))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___165_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___163_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___162_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___021_) 
            << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___023_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___Vfuncout_100 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___b_102) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21018: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._373_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___s_103));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21018, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___161_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___373___Vfuncout_100;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___174_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___172_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___171_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___020_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[1U] 
        = (0x00047413U | ((((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 0x0000000bU)) 
                                | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                         >> 0x0cU))) 
                               << 5U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                         << 3U)) | 
                             ((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                     >> 0x0000000aU)) 
                              | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 0x0000000bU)) 
                                 | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 0x0cU))))) 
                            << 0x00000019U) | (0x01f00000U 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 0x00000012U))) 
                          | ((0x00038000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                             | (0x00000380U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[2U] 
        = (0x00045413U | ((((::IData)((1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             >> 0x0aU))) 
                            << 0x0000001eU) | (0x01f00000U 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 0x00000012U))) 
                          | ((0x00038000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                             | (0x00000380U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___Vfuncout_104 
        = ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107)))
            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[0U]
            : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107)))
                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[1U]
                : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107)))
                    ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___b_106[2U]
                    : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21043: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._383_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___s_107));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21043, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___170_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___383___Vfuncout_104;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___080_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___078_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___081_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___054_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___052_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___055_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___166_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___161_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___167_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___175_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___170_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___176_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___082_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___080_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___083_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___056_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___054_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___057_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___168_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___166_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___169_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___177_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___175_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___178_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___168_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___177_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___084_ 
        = ((~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
               >> 0x0000000cU)) & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___007_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___090_ 
        = ((0x00001000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___003_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___026_);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___210_) 
             << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___209_) 
                        << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___207_) 
                                  << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___206_) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___205_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___204_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114 
        = (::IData)((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___017_) 
                      << 2U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___019_) 
                                << 1U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___Vfuncout_112 
        = (1U & ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                  ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                      ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 3U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 4U)))))
                      : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 3U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 5U))))))
                  : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                      ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 3U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 4U)))))
                      : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                          ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 3U))))
                          : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                              ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                  ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                      : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                         >> 1U)) : 
                                 ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                   ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                   : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                      >> 2U))) : ((2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                   ? 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))
                                                    ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)
                                                    : 
                                                   ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114) 
                                                    >> 1U))
                                                   : 
                                                  ((1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115)) 
                                                   && (1U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___b_114)))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                             << 5U) 
                                            | (((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                                << 4U) 
                                               | ((8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                                  << 3U))) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115)))))))))))) {
        if ((0U != ((((0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                      << 5U) | (((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                 << 4U) | ((8U == (8U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                           << 3U))) 
                    | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                        << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21112: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._416_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___s_115));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21112, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___202_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___416___Vfuncout_112;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___199_) 
             << 5U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___198_) 
                        << 4U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___196_) 
                                  << 3U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___195_) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___194_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___193_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U] 
        = (0x00040063U | (((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      >> 0x0000000bU)) 
                               | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 0x0cU))) 
                              << 0x0000000cU) | (((2U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 0x0cU))) 
                                                 << 0x0000000aU)) 
                            | ((0x00000300U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                               | (0x00000080U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))) 
                           << 0x00000012U) | ((((0x000000e0U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 2U)) 
                                                | (((::IData)(
                                                              (1U 
                                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                  >> 0x0dU))) 
                                                    << 2U) 
                                                   | (3U 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 0x0aU)))) 
                                               << 0x0000000aU) 
                                              | ((0x00000300U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     << 5U)) 
                                                 | (0x00000080U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 5U))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___016_)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___018_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___016_)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___018_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[3U] 
        = (((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                     >> 0x0000000aU)) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000bU)) 
                                         | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 0x0cU)))) 
             << 0x0000001dU) | (((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                        >> 0x0000000aU)) 
                                 | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             >> 0x0cU)))) 
                                << 0x0000001aU)) | 
           ((0x02000000U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                            << 0x0000000dU)) | ((0x01f00000U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | (::IData)(
                                                            (0x13U 
                                                             | (0x00000f80U 
                                                                & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[4U] 
        = (0x0000006fU | (((((((8U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      >> 9U)) | ((4U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 6U)) 
                                                 | (3U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 9U)))) 
                              << 0x0000000cU) | (((
                                                   (2U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 5U)) 
                                                   | (1U 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 7U))) 
                                                  << 0x0000000aU) 
                                                 | (((2U 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                           >> 0x0bU))) 
                                                    << 8U))) 
                            | ((((0x0000000eU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)) 
                                 | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 0x0cU))) 
                                << 4U) | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0cU))) 
                                           << 2U) | 
                                          ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 0x0000000bU)) 
                                           | (1U & 
                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 0x0cU)))))) 
                           << 0x00000010U) | (((((2U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0000000bU)) 
                                                 | (1U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 0x0cU))) 
                                                << 0x0000000eU) 
                                               | (((0x00000020U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 7U)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 8U))) 
                                                  << 8U)) 
                                              | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___039_) 
                                                 << 7U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[5U] 
        = (0x00000013U | (((((((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                      >> 0x0000000aU)) 
                               | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                         >> 0x0000000bU)) 
                                  | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 0x0cU)))) 
                              << 9U) | (((4U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000aU)) 
                                         | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0cU)))) 
                                        << 6U)) | (
                                                   (0x00000020U 
                                                    & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 2U)))) 
                           << 0x00000014U) | ((0x000f8000U 
                                               & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___Vfuncout_108 
        = ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
            ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[3U])))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[4U]))))
                : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[3U])))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[5U])))))
            : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[3U])))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[4U]))))
                : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                    ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[3U])))
                    : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                        ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[2U]))
                        : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                            ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[1U])
                            : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))
                                ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___b_110[0U]
                                : 0U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                             << 5U) 
                                            | (((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                                << 4U) 
                                               | ((8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                                  << 3U))) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111)))))))))))) {
        if ((0U != ((((0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                      << 5U) | (((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                 << 4U) | ((8U == (8U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                           << 3U))) 
                    | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                        << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21078: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._403_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___s_111));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21078, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___191_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___403___Vfuncout_108;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___086_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___084_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___087_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___092_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___090_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___093_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___211_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___202_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___212_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___200_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___191_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___201_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___088_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___086_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___089_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___094_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___092_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___095_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___211_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___200_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___088_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___094_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___114_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___113_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___112_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___111_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___110_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86 
        = (1U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___002_) 
                  << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___004_) 
                             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___006_) 
                                       << 2U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___Vfuncout_84 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___b_86))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:20877: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._308_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___s_87));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 20877, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___108_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___308___Vfuncout_84;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___123_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___122_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___121_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___120_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___119_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U] 
        = (0x00012023U | ((((::IData)((3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             >> 7U))) 
                            << 0x0000001aU) | (((0x00000020U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 7U)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 2U))) 
                                               << 0x00000014U)) 
                          | (0x00000e00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___024_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U] 
        = (0x00012003U | ((0xffc00000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U]) 
                          | (0x00000f80U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U] 
        = ((0xf03fffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U]) 
           | (((0x00000030U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                               << 2U)) | ((8U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 9U)) 
                                          | (7U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 4U)))) 
              << 0x00000016U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U] 
        = (0x0fffffffU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U]);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[4U] 
        = (0x00000013U | (0xffffff80U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[4U]));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[4U] 
        = (0x00001000U | ((0x0000007fU & __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[4U]) 
                          | (((::IData)((0x0000001fU 
                                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 2U))) 
                              << 0x00000014U) | (((0x00001f00U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 1U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U))) 
                                                 << 7U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___Vfuncout_88 
        = ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
            ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U])))
                : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[4U]))))
            : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[3U])))
                : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                    ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[2U]))
                    : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                        ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[1U])
                        : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))
                            ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___b_90[0U]
                            : 0U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:20908: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._320_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___s_91));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 20908, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___117_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___320___Vfuncout_88;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___115_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___108_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___116_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___124_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___117_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___125_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___025_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___115_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___124_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___239_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___238_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___237_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___236_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___011_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___015_) 
                       << 2U)) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___025_) 
                                  << 1U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___Vfuncout_124 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___b_126)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21209: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._458_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___s_127));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21209, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___235_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___458___Vfuncout_124;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___244_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___243_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___242_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___241_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___022_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___012_)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___014_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___012_)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___014_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___Vfuncout_128 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___b_130[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:21231: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i.compressed_decoder_i._463_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___s_131));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 21231, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___240_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___463___Vfuncout_128;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___235_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___235_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___240_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___009_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT___010_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_instr_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed;
}

void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rst_ni)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT___2_
            : 0U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rd_data_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_q 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rd_data_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0255_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mip 
           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irqs_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0255_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1597_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irqs_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__irqs = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irqs_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irq_pending_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1597_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__irqs_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__irqs;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__irq_pending_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__irq_pending_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__irqs_i;
    vlSelfRef.encarsia_tb__DOT__irq_pending = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__irq_pending_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__irq_pending_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__irq_pending_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__unused_irq_timer 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0840_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0830_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0828_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x00000011U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1343_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1341_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1339_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1337_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1335_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1333_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1331_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1329_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1327_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1325_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1323_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1321_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1319_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1317_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1315_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1313_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1311_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1309_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1307_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1305_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1303_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1301_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1299_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1297_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1295_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1293_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1291_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1289_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1287_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1285_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1283_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1281_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1279_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1277_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1275_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1273_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1271_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1269_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1267_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1265_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1263_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1261_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1259_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1257_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1255_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1253_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1251_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1249_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1247_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1245_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1243_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1241_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1239_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1237_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1235_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1233_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1231_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1229_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1227_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1225_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1223_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1221_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1219_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1217_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1215_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1213_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1211_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1209_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1207_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1205_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1203_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1201_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1199_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1197_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1195_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1193_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1191_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1189_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1187_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1185_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1183_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1181_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1179_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1177_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1175_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1173_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1171_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1169_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1167_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1165_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1163_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1161_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1159_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000dU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1157_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000cU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1155_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000bU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1153_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 0x0000000aU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1151_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 9U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1149_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 8U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1147_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 7U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1145_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 6U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1143_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1141_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1139_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 3U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1137_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1135_ 
        = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i 
                 >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_ 
        = (0U != (0x00007fffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irqs_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_pending_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__irq_pending_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0827_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0828_)
            ? 0x23U : 0x27U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1134_ 
        = (1U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1135_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0858_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0866_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0850_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0842_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0832_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0239_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_pending_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__irq_nm_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0829_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0827_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0830_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1136_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1134_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1137_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0239_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0831_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0829_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0832_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1138_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1136_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1139_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1140_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1138_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1141_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1142_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1140_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1143_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1144_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1142_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1145_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1146_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1144_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1147_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1148_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1146_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1149_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1150_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1148_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1151_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1152_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1150_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1153_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1154_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1152_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1155_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1156_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1154_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1157_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1158_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1156_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1159_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1160_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1158_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1161_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1160_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1162_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1163_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0053_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1164_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1162_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1165_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1166_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1164_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1167_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1168_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1166_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1169_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1170_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1168_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1171_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1172_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1170_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1173_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1174_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1172_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1175_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1176_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1174_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1177_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1178_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1176_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1179_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1180_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1178_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1181_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1182_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1180_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1183_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1184_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1182_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1185_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1186_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1184_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1187_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0051_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1186_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1188_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1189_)
            ? 3U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0051_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1190_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1188_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1191_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1192_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1190_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1193_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1194_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1192_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1195_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1196_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1194_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1197_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1198_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1196_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1199_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1200_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1198_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1201_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1202_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1200_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1203_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1204_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1202_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1205_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1206_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1204_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1207_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1208_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1206_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1209_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1210_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1208_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1211_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0049_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1210_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1212_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1213_)
            ? 4U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1214_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1212_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1215_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1216_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1214_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1217_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1218_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1216_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1219_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1220_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1218_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1221_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1222_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1220_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1223_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1224_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1222_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1225_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1226_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1224_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1227_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1228_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1226_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1229_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1230_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1228_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1231_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1232_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1230_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1233_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0047_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1232_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1234_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1235_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1236_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1234_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1237_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1238_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1236_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1239_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1240_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1238_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1241_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1242_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1240_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1243_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1244_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1242_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1245_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1246_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1244_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1247_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1248_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1246_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1249_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1250_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1248_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1251_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1252_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1250_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1253_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1252_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1254_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1255_)
            ? 6U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0045_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1256_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1254_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1257_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1258_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1256_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1259_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1260_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1258_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1261_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1262_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1260_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1263_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1264_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1262_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1265_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1266_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1264_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1267_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1268_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1266_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1269_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1270_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1268_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1271_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0199_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1270_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1272_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1273_)
            ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0199_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1274_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1272_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1275_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1276_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1274_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1277_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1278_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1276_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1279_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1280_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1278_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1281_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1282_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1280_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1283_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1284_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1282_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1285_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1286_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1284_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1287_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0194_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1286_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1288_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1289_)
            ? 8U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0194_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1290_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1288_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1291_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1292_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1290_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1293_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1294_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1292_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1295_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1296_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1294_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1297_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1298_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1296_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1299_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1300_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1298_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1301_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0189_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1300_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1302_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1303_)
            ? 9U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0189_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1304_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1302_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1305_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1306_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1304_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1307_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1308_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1306_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1309_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1310_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1308_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1311_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1312_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1310_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1313_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0182_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1312_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1314_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1315_)
            ? 0x0aU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0182_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1316_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1314_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1317_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1318_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1316_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1319_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1320_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1318_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1321_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1322_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1320_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1323_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0172_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1322_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1324_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1325_)
            ? 0x0bU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0172_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1326_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1324_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1327_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1328_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1326_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1329_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1330_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1328_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1331_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0158_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1330_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1332_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1333_)
            ? 0x0cU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0158_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1334_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1332_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1335_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1336_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1334_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1337_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0139_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1336_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1338_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1339_)
            ? 0x0dU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0139_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1340_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1338_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1341_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0113_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1340_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1343_)
            ? 0x0eU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0113_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0081_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1342_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0030_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0081_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0857_ 
        = ((0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id)) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0858_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0865_ 
        = ((0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id)) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0866_))));
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___093_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___164_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0206_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___070_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___147_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___073_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___149_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0203_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0202_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0201_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0204_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0220_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0206_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0203_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0202_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0201_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0204_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0220_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0348_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0366_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0326_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0342_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0308_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0354_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0334_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0318_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0298_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0420_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0438_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0470_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0422_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0412_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0446_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0430_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0462_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0454_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0486_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0516_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0522_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0472_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0424_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0414_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0528_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0432_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0464_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0273_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0292_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0268_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0304_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0314_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0294_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0347_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0348_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0445_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0446_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0429_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0430_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0461_ 
        = (4U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0462_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0453_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0491_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0492_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0291_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0292_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0303_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0304_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0447_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0448_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0445_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0431_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0432_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0429_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0463_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0461_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0464_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0455_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0456_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0453_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0293_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0294_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0291_));
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___Vfuncout_208;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___Vfuncout_212;
    ::IData/*19:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214;
    ::SData/*9:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___Vfuncout_216;
    ::QData/*59:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218;
    ::SData/*9:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___Vfuncout_220;
    ::IData/*20:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222;
    ::CData/*6:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___Vfuncout_292;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295;
    ::CData/*7:0*/ __Vdfg_Regularize_11425;
    ::CData/*1:0*/ __Vdfg_Regularize_11426;
    ::CData/*1:0*/ __Vdfg_Regularize_11427;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___Vfuncout_208 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___Vfuncout_212 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___Vfuncout_216 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___Vfuncout_220 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___Vfuncout_292 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295 = 0;
    __Vdfg_Regularize_11425 = 0;
    __Vdfg_Regularize_11426 = 0;
    __Vdfg_Regularize_11427 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___091_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___130_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_first_cycle 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_first_cycle_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_first_cycle;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_first_cycle;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_first_cycle_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_first_cycle_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0205_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0593_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0798_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0804_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0599_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0356_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0352_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0348_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0360_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_instr_first_cycle_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_first_cycle_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0593_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0797_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0798_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0803_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0804_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0599_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0355_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0148_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0356_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0351_ 
        = (2U & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0352_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0347_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0348_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0359_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0892_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0360_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_instr_first_cycle_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0594_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0592_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0595_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0799_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0797_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0800_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0805_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0803_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0806_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0600_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0598_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0601_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0357_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0355_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0358_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0353_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0351_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0354_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0349_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0347_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0350_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0361_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0359_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0362_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0596_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0594_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0597_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0799_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0112_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0805_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0602_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0600_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0603_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0357_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0146_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0353_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0349_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0361_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0134_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0596_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0602_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0435_) 
               << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0434_) 
                          << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0433_) 
                                    << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0432_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0431_))) 
            << 5U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0430_) 
                        << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0429_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0428_) 
                                             << 2U))) 
                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0427_) 
                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0426_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
        = (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0157_)) 
            << 0x0000002aU) | (::QData)((::IData)((
                                                   ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0166_) 
                                                    << 0x0000000cU) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0040_) 
                                                       << 6U) 
                                                      | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0044_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___Vfuncout_216 
        = (0x0000003fU & (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                 | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                                | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                               | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                              | (0x0010U == (0x0010U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                             | (0x0020U == (0x0020U 
                                            & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                            | (0x0040U == (0x0040U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))) 
                           | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))))
                           ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                               ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218)
                               : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                >> 6U))
                                   : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                       ? (::IData)(
                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                    >> 0x0cU))
                                       : ((8U == (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                           ? (::IData)(
                                                       (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                        >> 0x12U))
                                           : ((0x0010U 
                                               == (0x0010U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                               ? (::IData)(
                                                           (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                            >> 0x18U))
                                               : ((0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                                >> 0x1eU))
                                                   : 
                                                  ((0x0040U 
                                                    == 
                                                    (0x0040U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                                 >> 0x24U))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                                 >> 0x2aU)))))))))
                           : ((0x0100U == (0x0100U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                               ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                            >> 0x30U))
                               : ((0x0200U == (0x0200U 
                                               & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))
                                   ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___b_218 
                                                >> 0x36U))
                                   : 0x26U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0200U 
                                                == 
                                                (0x0200U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                               << 4U) 
                                              | (((0x0100U 
                                                   == 
                                                   (0x0100U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                  << 3U) 
                                                 | ((0x0080U 
                                                     == 
                                                     (0x0080U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                    << 2U))) 
                                             | (((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                 << 1U) 
                                                | (0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))))))))))) {
        if ((0U != ((((((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                        << 4U) | (((0x0100U == (0x0100U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                   << 3U) | ((0x0080U 
                                              == (0x0080U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                             << 2U))) 
                      | (((0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                          << 1U) | (0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10525: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1108_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___s_219));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10525, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0425_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1108___Vfuncout_216;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0424_) 
               << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0423_) 
                          << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0422_) 
                                    << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0421_) 
                                                 << 1U) 
                                                | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0420_))) 
            << 5U) | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0419_) 
                        << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0418_) 
                                   << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0417_) 
                                             << 2U))) 
                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0416_) 
                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0415_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
        = (0x00000200U | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0091_) 
                            << 0x00000012U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0121_) 
                                                << 0x00000010U) 
                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0146_) 
                                                  << 0x0000000eU))) 
                          | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0155_) 
                              << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0164_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___Vfuncout_212 
        = (3U & (((((((((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                        | (2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                       | (4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                      | (8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                     | (0x0010U == (0x0010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                    | (0x0020U == (0x0020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                   | (0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))) 
                  | (0x0080U == (0x0080U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))))
                  ? ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                      ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214
                      : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                          ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                             >> 2U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                        ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                           >> 4U) : 
                                       ((8U == (8U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                         ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                            >> 6U) : 
                                        ((0x0010U == 
                                          (0x0010U 
                                           & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                          ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                             >> 8U)
                                          : ((0x0020U 
                                              == (0x0020U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                              ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                                 >> 0x0aU)
                                              : ((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                                  ? 
                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                                  >> 0x0cU)
                                                  : 
                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                                  >> 0x0eU))))))))
                  : ((0x0100U == (0x0100U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                      ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                         >> 0x10U) : ((0x0200U == (0x0200U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))
                                       ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___b_214 
                                          >> 0x12U)
                                       : 3U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x0200U 
                                                == 
                                                (0x0200U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                               << 4U) 
                                              | (((0x0100U 
                                                   == 
                                                   (0x0100U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                  << 3U) 
                                                 | ((0x0080U 
                                                     == 
                                                     (0x0080U 
                                                      & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                    << 2U))) 
                                             | (((0x0040U 
                                                  == 
                                                  (0x0040U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                 << 1U) 
                                                | (0x0020U 
                                                   == 
                                                   (0x0020U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))))) 
                                            << 5U) 
                                           | ((((0x0010U 
                                                 == 
                                                 (0x0010U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                << 4U) 
                                               | (((8U 
                                                    == 
                                                    (8U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                   << 3U) 
                                                  | ((4U 
                                                      == 
                                                      (4U 
                                                       & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                     << 2U))) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))))))))))) {
        if ((0U != ((((((0x0200U == (0x0200U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                        << 4U) | (((0x0100U == (0x0100U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                   << 3U) | ((0x0080U 
                                              == (0x0080U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                             << 2U))) 
                      | (((0x0040U == (0x0040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                          << 1U) | (0x0020U == (0x0020U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))))) 
                     << 5U) | ((((0x0010U == (0x0010U 
                                              & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                 << 4U) | (((8U == 
                                             (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                            << 3U) 
                                           | ((4U == 
                                               (4U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                              << 2U))) 
                               | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10485: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1097_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___s_215));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10485, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0414_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1097___Vfuncout_212;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0413_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0412_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0411_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0410_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0409_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0408_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0407_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0092_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0122_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0147_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0156_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0165_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0174_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___Vfuncout_208 
        = (1U & ((0x00000040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                  ? ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 6U)))))))
                  : ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 5U))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 4U)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 3U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 2U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))
                                          ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210)
                                          : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210) 
                                             >> 1U))
                                      : ((1U & (~ (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                         || (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___b_210))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10454: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1089_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___s_211));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10454, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0406_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1089___Vfuncout_208;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223 
        = ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0443_) 
               << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0442_) 
                         << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0441_) 
                                     << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0440_))) 
            << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0439_) 
                       << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0438_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0437_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
        = (0x00d8U | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0110_) 
                        << 0x00000012U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0136_) 
                                            << 0x0000000fU) 
                                           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0152_) 
                                              << 0x0000000cU))) 
                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0161_) 
                         << 9U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___Vfuncout_220 
        = (7U & ((0x00000040U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                  ? ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0cU)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0fU))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0cU)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x12U)))))))
                  : ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                      ? ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0cU)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0fU))))))
                      : ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                          ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 0x0cU)))))
                          : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                              ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 9U))))
                              : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                  ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 6U)))
                                  : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                      ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : (__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222 
                                             >> 3U))
                                      : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))
                                          ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___b_222
                                          : 0U))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((((0x40U 
                                                == 
                                                (0x40U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                               << 3U) 
                                              | ((0x20U 
                                                  == 
                                                  (0x20U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                                 << 2U)) 
                                             | (((0x10U 
                                                  == 
                                                  (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                                 << 1U) 
                                                | (8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))))) 
                                            << 3U) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223)))))))))))) {
        if ((0U != ((((((0x40U == (0x40U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                        << 3U) | ((0x20U == (0x20U 
                                             & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                  << 2U)) | (((0x10U 
                                               == (0x10U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                              << 1U) 
                                             | (8U 
                                                == 
                                                (8U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))))) 
                     << 3U) | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                << 2U) | (((2U == (2U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223))) 
                                           << 1U) | 
                                          (1U == (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:10565: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '7'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1119_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',7,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___s_223));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 10565, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0436_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1119___Vfuncout_220;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0619_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0620_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0134_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0615_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0616_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0162_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0054_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0425_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0425_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0052_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0414_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0414_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0053_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0406_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0406_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0436_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0436_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0621_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0619_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0622_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0617_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0615_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0618_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0054_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operator 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0052_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0053_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0073_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0107_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0621_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0617_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operator_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0877_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0878_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0107_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0821_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0820_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0819_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0112_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0138_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0153_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___Vfuncout_292 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))) 
                                   && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___b_294) 
                                             >> 2U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:11229: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.decoder_i._1469_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___s_295));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 11229, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0818_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___1469___Vfuncout_292;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operator_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operator_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0070_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0877_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0877_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0818_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operator_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operator_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__icache_inval_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__icache_inval_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0464_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0465_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0075_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operator_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__icache_inval 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__icache_inval_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0171_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0464_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0464_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___063_ 
        = (((0x34U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 2U) | (((0x33U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                       << 1U) | (0x32U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___065_ 
        = (((0x10U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 1U) | (0x0fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___067_ 
        = ((((0x2eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
             << 3U) | ((0x2dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                       << 2U)) | (((0x2cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                   << 1U) | (0x2bU 
                                             == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___069_ 
        = (((((((0x30U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                << 3U) | ((0x2fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                          << 2U)) | (((0x36U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                      << 1U) | (0x35U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))) 
             << 0x0000000aU) | (((0x38U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                 << 9U) | (((0x37U 
                                             == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                            << 8U) 
                                           | ((0x3aU 
                                               == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                              << 7U)))) 
           | ((((((0x39U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                  << 3U) | ((0x0dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                            << 2U)) | (((0x0eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                        << 1U) | (0x2aU 
                                                  == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))) 
               << 3U) | (((0x29U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                          << 2U) | (((0x27U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                     << 1U) | (0x28U 
                                               == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___071_ 
        = (((0x1eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 2U) | (((0x1fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                       << 1U) | (0x1dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___075_ 
        = (((0x12U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 1U) | (0x11U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___077_ 
        = ((((0x0bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
             << 4U) | (((0x0cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                        << 3U) | ((8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                  << 2U))) | (((9U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                               << 1U) 
                                              | (0x0aU 
                                                 == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___079_ 
        = (((1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 1U) | (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___081_ 
        = ((((7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
             << 5U) | (((4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                        << 4U) | ((6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                  << 3U))) | (((3U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                               << 2U) 
                                              | (((5U 
                                                   == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                                  << 1U) 
                                                 | (2U 
                                                    == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___046_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___047_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___048_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___049_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___045_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___090_ 
        = (0x0aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___098_ 
        = (0x18U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___102_ 
        = ((((0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
             << 4U) | (((0x19U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                        << 3U) | ((0x25U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                  << 2U))) | (((0x13U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                               << 1U) 
                                              | (0x15U 
                                                 == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    __Vdfg_Regularize_11426 = (((0x14U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                << 1U) | (0x13U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)));
    __Vdfg_Regularize_11427 = (((0x16U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                << 1U) | (0x15U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__icache_inval_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__icache_inval;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT___0171_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_dec 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__decoder_i__DOT__jump_set_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___064_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___063_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___066_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___065_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___068_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___070_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___069_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___072_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___071_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___076_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___075_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___078_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___077_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___080_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___079_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___082_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___081_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___060_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___046_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___047_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___061_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___048_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_arith 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___089_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___103_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___102_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___094_ 
        = ((((0x26U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
             << 5U) | (((0x25U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                        << 4U) | ((0x1aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                  << 3U))) | (((0x19U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                               << 2U) 
                                              | (::IData)(__Vdfg_Regularize_11426)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___096_ 
        = (((0x1cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
            << 3U) | (((0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                       << 2U) | (::IData)(__Vdfg_Regularize_11427)));
    __Vdfg_Regularize_11425 = ((((0x26U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                 << 7U) | (((0x25U 
                                             == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                            << 6U) 
                                           | ((::IData)(__Vdfg_Regularize_11426) 
                                              << 4U))) 
                               | (((::IData)(__Vdfg_Regularize_11427) 
                                   << 2U) | (((0x18U 
                                               == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                              << 1U) 
                                             | (0x17U 
                                                == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eunused_icinv 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__icache_inval_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___349_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___350_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__jump_set_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___086_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___084_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___037_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___089_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___095_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___094_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___097_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___096_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___073_ 
        = __Vdfg_Regularize_11425;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___109_ 
        = ((((((0x1cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
               << 3U) | ((0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                         << 2U)) | (((0x1aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)) 
                                     << 1U) | (0x19U 
                                               == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i)))) 
            << 9U) | (((::IData)(__Vdfg_Regularize_11425) 
                       << 1U) | (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operator_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___351_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___352_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___349_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___087_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___101_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___074_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___073_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___110_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___109_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___353_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___354_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___351_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___087_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___355_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___356_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___353_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___029_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___357_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___355_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___029_;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::QData/*32:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___Vfuncout_440;
    ::VlWide<3>/*65:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___Vfuncout_440 = 0;
    VL_ZERO_W(66, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___186_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___187_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___Vfuncout_440 
        = (0x00000001ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[2U])) 
                                             << 0x0000003fU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[2U])) 
                                                << 0x0000001fU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___b_442[1U])) 
                                                  >> 1U)))
                                         : 1ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19264: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._836_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___s_443));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19264, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___185_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___836___Vfuncout_440;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___669_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___185_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___033_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___669_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_operand_a_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___669_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___033_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_operand_a_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_operand_a_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vdfg_Regularize_11373;
    ::CData/*0:0*/ __Vdfg_Regularize_11374;
    ::CData/*0:0*/ __Vdfg_Regularize_11375;
    // Body
    __Vdfg_Regularize_11373 = 0;
    __Vdfg_Regularize_11374 = 0;
    __Vdfg_Regularize_11375 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___115_ 
        = (1U & ((4U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___022_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___103_ 
        = (1U & ((1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)
                  : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___024_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___065_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___053_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_busy) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_rev));
    __Vdfg_Regularize_11375 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
                               & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry) 
                                  >> 2U));
    __Vdfg_Regularize_11373 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry));
    __Vdfg_Regularize_11374 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i) 
                               & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry) 
                                  >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___114_ 
        = (1U & ((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                  ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                     >> 1U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___115_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___114_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___023_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___022_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___052_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___103_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___107_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___024_) 
                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___065_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___072_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___053_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___044_ 
        = __Vdfg_Regularize_11375;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___042_ 
        = __Vdfg_Regularize_11375;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___036_ 
        = __Vdfg_Regularize_11373;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___031_ 
        = __Vdfg_Regularize_11373;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___039_ 
        = __Vdfg_Regularize_11374;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___032_ 
        = __Vdfg_Regularize_11374;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___054_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___053_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_unaligned 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___107_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___036_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___072_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___075_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___042_) 
           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
              >> 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___071_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___031_) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___072_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___032_) 
                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___106_ 
        = ((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___021_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___023_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_plus2 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___096_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___097_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___106_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___026_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___047_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___054_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___025_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___046_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___053_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_ready 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___075_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___072_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___071_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___096_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___096_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___026_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___025_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___013_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__err_plus2_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_err_plus2_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___056_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___048_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___050_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___108_ 
        = ((1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err_plus2 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__err_plus2_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___070_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___056_) 
                 | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                    >> 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___018_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___048_) 
           & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
              >> 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___067_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___049_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___050_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___108_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___090_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___091_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___065_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___107_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___066_ 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___018_) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___020_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___067_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___055_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___092_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___090_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___093_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___019_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___020_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___105_ 
        = ((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___066_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___068_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___017_ 
        = (0x7fffffffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                          + (::IData)((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___055_) 
                                        << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___092_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___094_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___095_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___016_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___065_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__err_unaligned 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___105_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___098_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___099_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___105_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___103_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_next_o 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next 
           << 1U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___015_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___094_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___094_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___098_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_err_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___098_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_next 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_next_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___015_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_raw 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___012_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__err_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_err_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__g_no_branch_predictor__02eunused_addr_next 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_next;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_raw) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___049_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__err_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_err 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___028_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_err_out 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_err;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___017_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_valid) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___028_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__valid_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___017_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__unused_valid 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__valid_i;
}

void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__23\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_lsu_i) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___12_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___092_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___189_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___161_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___16_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___31_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___27_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___11_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_valid_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___25_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___47_ 
        = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___48_ 
        = ((1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux__05b0__05d
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_mux__05b1__05d);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02eoutstanding_memory_access 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___092_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_done_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___16_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__ready_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___31_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___47_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___48_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___162_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02eoutstanding_memory_access)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___168_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02eoutstanding_memory_access)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_done_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_done_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___17_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__instr_done_wb_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_count_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ready_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__ready_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_we_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__rf_wdata_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_req_allowed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___162_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__unused_instr_done_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_done_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___19_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___17_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___28_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ready_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_wb_ecc_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__perf_instr_ret_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___19_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_ready_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ready_wb_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___171_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ready_wb_i)));
    vlSelfRef.encarsia_tb__DOT__rf_we_wb = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_we_wb_o;
    vlSelfRef.encarsia_tb__DOT__rf_wdata_wb_ecc = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_wdata_wb_ecc_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_instr_ret_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__perf_instr_ret_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___20_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__perf_instr_ret_wb_o) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_compressed_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_ready_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_ready_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0254_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ready_wb_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_instr_ret_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__perf_instr_ret_compressed_wb_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___20_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_ready_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_ready_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_instr_ret_compressed_wb 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__perf_instr_ret_compressed_wb_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_ready_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_ready_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__instr_ret_compressed_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__perf_instr_ret_compressed_wb;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___390_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_ready_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___392_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_ready_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___423_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_ready_id_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___389_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___390_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___391_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___392_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___422_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___423_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___574_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___389_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___573_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___391_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___583_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___422_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___352_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___573_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___132_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___583_;
}

void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__24\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___Vfuncout_332;
    ::SData/*14:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___Vfuncout_348;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___a_349;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350;
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___Vfuncout_332 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___Vfuncout_348 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___a_349 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___094_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___093_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_run));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0207_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0253_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0325_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0326_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0323_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0437_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0438_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0479_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0477_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0480_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0349_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0350_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0347_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0493_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0494_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0491_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0305_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0306_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0303_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0449_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0450_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0447_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0433_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0434_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0431_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0465_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0463_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0466_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0457_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0458_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0455_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0295_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0296_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0293_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_dret 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0207_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0327_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0328_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0325_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0439_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0440_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0437_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0481_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0482_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0479_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0351_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0352_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0349_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0495_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0493_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0496_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0307_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0308_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0305_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0451_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0449_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0452_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0435_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0433_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0436_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0467_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0465_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0468_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0459_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0457_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0460_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0297_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0298_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0295_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0329_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0330_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0327_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0441_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0442_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0439_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0483_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0481_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0484_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0138_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0351_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0125_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0495_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0309_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0310_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0307_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0451_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0146_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0435_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0160_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0467_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0195_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0459_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0299_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0300_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0297_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0157_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0329_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0443_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0441_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0444_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0183_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0483_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0387_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0388_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0138_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0799_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0800_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0125_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0311_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0312_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0309_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0497_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0498_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0196_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0527_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0528_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0146_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0509_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0510_)
            ? 3U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0160_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0503_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0504_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0195_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0301_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0302_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0299_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0365_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0366_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0157_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0151_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0443_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0485_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0486_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0183_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0389_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0390_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0387_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0801_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0799_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0802_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0169_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0311_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0499_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0500_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0497_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0529_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0530_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0527_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0511_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0509_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0512_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0505_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0506_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0503_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0179_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0301_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0367_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0368_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0365_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0515_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0516_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0151_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0487_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0488_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0485_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0111_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0389_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0094_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0801_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0339_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0340_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0169_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0501_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0499_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0502_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0531_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0529_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0532_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0513_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0511_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0514_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0507_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0505_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0508_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0313_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0314_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0179_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0369_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0370_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0367_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0517_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0518_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0515_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0489_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0487_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0490_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0402_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0111_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1106_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1107_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0094_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0341_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0342_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0339_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0191_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0501_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0124_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0531_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0513_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0190_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0507_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0315_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0316_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0313_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0137_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0369_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0519_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0517_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0520_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0173_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0489_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0078_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0682_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0556_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0642_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0706_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0658_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0718_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0730_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0694_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0570_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0670_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1106_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0343_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0344_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0341_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0795_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0796_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0124_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0783_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0784_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0141_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0317_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0318_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0315_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0383_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0384_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0137_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0131_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0519_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0791_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0792_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0173_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0026_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0078_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_restore_mret_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0345_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0346_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0343_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0797_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0795_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0798_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0785_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0783_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0786_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0319_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0320_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0317_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0385_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0386_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0383_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0787_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0788_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0131_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0793_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0791_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0794_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_restore_mret_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0153_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0345_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0093_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0797_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0115_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0785_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0321_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0322_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0319_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0110_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0385_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0789_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0787_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0790_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0159_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0793_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_restore_mret_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0359_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0360_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0153_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1105_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0093_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1059_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1058_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1057_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1056_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1055_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334 
        = (0x00001490U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0115_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___Vfuncout_332 
        = (7U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 0x0cU)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 9U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                                 >> 6U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334) 
                                     >> 3U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___b_334)
                                                 : 0U))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16561: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1940_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___s_335));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16561, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1054_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1940___Vfuncout_332;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0168_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0321_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0400_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0110_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0103_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0789_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0604_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0616_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0634_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0622_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0598_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0610_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0398_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0444_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0414_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0452_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0406_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0422_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0430_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0438_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_mret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0361_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0362_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0359_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1104_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0083_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1054_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1054_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0331_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0332_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0168_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0077_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0680_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0554_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0640_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0704_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0624_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0716_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0728_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0610_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0692_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0668_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0540_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0399_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1089_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1088_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1087_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350 
        = (6U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0103_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___a_349 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___Vfuncout_348 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350) 
                         >> 1U) : ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351)))
                                    ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___b_350) 
                                       >> 2U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___a_349)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((4U == 
                                             (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))) 
                                            << 2U) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))))))))))) {
        if ((0U != (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))) 
                     << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))) 
                                << 1U) | (1U == (1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16673: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1972_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',3,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___s_351));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16673, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1086_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1972___Vfuncout_348;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0363_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0364_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0361_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0060_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_restore_dret_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0083_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_mux_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0333_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0334_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0331_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0077_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0070_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1086_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0133_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0363_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_restore_dret_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_mux_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_mux_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0335_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0336_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0333_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0379_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0380_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0133_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_restore_dret_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_mux_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0337_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0338_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0335_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0381_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0382_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0379_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0606_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0618_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0636_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0600_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0612_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0624_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0400_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0446_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0416_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0454_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0408_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0424_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0432_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0440_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_restore_dret_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___023_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___061_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0337_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0105_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0381_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_internal 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___061_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0353_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0354_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0152_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0398_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0105_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___052_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_internal));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___053_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_internal));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___054_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_internal));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___055_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_mux_internal));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0355_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0356_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0353_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0678_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0552_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0638_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0702_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0654_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0622_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0714_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0726_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0690_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0566_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0666_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0397_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0357_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0358_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0355_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0132_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0357_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0375_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0376_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0132_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0377_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0378_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0375_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0104_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0377_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0396_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0104_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0071_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0676_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0550_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0636_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0700_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0578_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0652_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0712_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0724_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0606_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0688_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0564_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0664_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0395_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0071_;
}
