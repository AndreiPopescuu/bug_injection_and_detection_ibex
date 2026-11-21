// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__28\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___Vfuncout_132;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___Vfuncout_132 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135 = 0;
    if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_incr_req_i) {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___489_ = 1U;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___491_ = 6U;
    } else {
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___489_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___491_ 
            = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___490_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_incr_req_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___489_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___490_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___491_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___483_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___484_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___485_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___486_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_a_mux_sel))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_op_b_mux_sel;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___200_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___201_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___202_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___203_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b_mux_sel))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___203_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___202_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___201_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___200_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___495_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_u_type;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_i_type)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_s_type))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_i_type)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_s_type))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___Vfuncout_132 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___b_134[0U]
                        : 4U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:12915: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._630_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___s_135));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 12915, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___199_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___630___Vfuncout_132;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___028_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___199_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___199_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___028_;
}

void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__31\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___Vfuncout_364;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___b_366;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___Vfuncout_364 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___b_366 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0217_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0215_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0283_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0217_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0898_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0902_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0888_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0894_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0906_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0862_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0870_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0876_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0938_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0918_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0910_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0882_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0854_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0846_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0836_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0922_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0926_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0930_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0914_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0861_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0859_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0862_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0869_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0867_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0870_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0875_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0873_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0876_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0917_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0918_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0835_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0833_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0836_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0921_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0922_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0925_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0926_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1008_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0913_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0914_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0863_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0861_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0864_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0871_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0869_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0872_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0877_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0875_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0878_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0919_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0917_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0920_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0837_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0835_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0838_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0923_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0921_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0924_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0927_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0925_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0928_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1009_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1007_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1010_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0915_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0913_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0916_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0863_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0164_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0871_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0140_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0877_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0097_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0919_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0837_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0143_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0923_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0142_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0927_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0109_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1009_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0095_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0915_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0891_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0163_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0892_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0885_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0164_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0886_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0905_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0906_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0140_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1115_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1114_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___b_366 
        = (1U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0097_) 
                 << 1U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___Vfuncout_364 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___b_366)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___b_366) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16758: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1999_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___s_367));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16758, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1113_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1999___Vfuncout_364;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0839_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0840_)
            ? 0x2bU : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0180_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0893_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0891_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0894_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0887_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0885_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0888_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0907_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0905_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0908_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0064_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1113_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1113_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0841_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0839_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0842_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0895_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0893_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0896_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0889_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0887_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0890_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0114_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0907_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0064_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_if_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0843_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0841_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0844_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0144_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0895_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0145_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0889_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_if_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0845_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0843_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0846_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0901_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0144_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0902_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0897_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0145_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0898_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_if_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_if;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0847_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0845_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0848_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0903_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0901_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0904_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0899_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0897_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0900_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0578_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_if_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0170_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0847_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0121_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0903_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0899_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0849_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0850_)
            ? (0x00000030U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0170_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1070_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0121_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1071_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1068_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0122_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1069_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0851_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0849_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0852_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0090_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0853_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0851_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0854_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0855_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0853_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0856_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0154_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0855_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0879_ 
        = (0x0000003fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0154_) 
                          | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0880_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0881_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0879_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0882_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0883_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0881_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0884_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0134_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0883_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0909_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0134_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0910_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0911_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0909_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0912_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0106_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0911_;
}

void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__32\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___Vfuncout_384;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___b_386;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___Vfuncout_384 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___b_386 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0242_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0241_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0242_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0242_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1019_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1020_)
            ? 4U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1024_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1021_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1019_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1022_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1025_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1023_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1026_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0099_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1025_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1133_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1132_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___b_386 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0099_);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___Vfuncout_384 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___b_386)
                  : ((2U != (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387))) 
                     || (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___b_386) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16843: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2017_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___s_387));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16843, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1131_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2017___Vfuncout_384;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1131_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1131_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ctrl_busy_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ctrl_busy 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__ctrl_busy_o;
}

void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__34\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___Vfuncout_368;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___b_370;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___Vfuncout_368 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___b_370 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0228_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0236_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0810_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0228_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0806_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0228_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0814_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0228_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0548_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0618_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0604_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0534_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0287_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0809_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0810_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0805_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0806_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0813_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0814_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0547_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0548_)
            ? 9U : 5U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0575_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0576_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0617_ 
        = (3U & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0618_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0589_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0590_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0603_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0604_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0561_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0562_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0533_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0534_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0811_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0809_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0812_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0807_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0805_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0808_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0815_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0813_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0816_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0096_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0811_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0102_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0807_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0126_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0815_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1118_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1117_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___b_370 
        = (2U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0102_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___Vfuncout_368 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___b_370)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___b_370) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16774: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2002_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___s_371));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16774, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1116_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2002___Vfuncout_368;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_csr_save_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_csr_save 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_csr_save_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_csr_save;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0522_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0546_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0554_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0562_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0518_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0526_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0542_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0550_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0558_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0566_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0530_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0534_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0460_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0472_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0508_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0466_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0478_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0502_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0514_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0570_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0484_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0490_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0496_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0630_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_csr_save_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0483_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0484_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0481_));
}

void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__41\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342;
    ::CData/*4:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0230_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0549_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0547_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0550_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0577_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0575_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0578_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0619_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0617_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0620_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0591_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0589_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0592_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0605_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0603_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0606_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0563_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0561_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0564_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0535_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0533_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0536_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0237_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0230_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0551_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0549_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0552_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0579_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0580_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0577_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0621_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0619_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0622_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0593_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0594_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0591_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0607_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0608_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0605_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0565_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0566_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0563_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0537_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0538_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0535_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0231_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0237_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0553_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0551_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0554_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0581_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0582_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0579_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0623_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0621_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0624_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0595_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0596_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0593_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0609_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0610_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0607_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0567_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0568_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0565_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0539_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0540_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0537_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0404_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0231_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0555_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0553_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0556_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0583_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0584_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0581_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0625_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0623_) 
           & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0626_))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0597_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0598_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0595_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0611_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0612_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0609_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0569_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0570_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0567_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0541_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0542_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0539_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0557_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0555_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0558_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0585_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0583_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0586_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0627_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0625_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0628_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0599_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0597_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0600_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0613_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0611_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0614_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0571_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0569_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0572_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0543_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0541_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0544_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0559_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0557_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0560_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0587_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0585_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0588_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0629_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0627_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0630_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0601_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0599_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0602_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0615_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0613_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0616_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0573_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0571_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0574_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0545_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0543_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0546_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0559_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0177_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0587_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0198_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0629_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0185_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0601_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0184_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0615_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0176_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0573_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0155_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0545_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0675_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0676_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0050_)
            : 5U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0699_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0700_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0177_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0651_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0652_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0198_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0649_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0711_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0712_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0185_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0723_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0724_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0184_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0687_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0688_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0176_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0663_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0664_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0155_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0677_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0678_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0675_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0701_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0702_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0699_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0653_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0654_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1350_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0651_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0713_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0711_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0714_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0725_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0723_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0726_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0689_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0687_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0690_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0665_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0663_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0666_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0679_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0680_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0677_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0703_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0704_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0701_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0655_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0656_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0653_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0715_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0713_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0716_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0727_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0725_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0728_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0691_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0689_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0692_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0667_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0665_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0668_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0681_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0682_)
            ? 5U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0679_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0705_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0706_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0148_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0703_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0657_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0658_)
            ? 1U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0655_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0717_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0715_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0718_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0729_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0727_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0730_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0693_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0691_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0694_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0669_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0667_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0670_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0683_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0681_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0684_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0707_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0705_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0708_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0659_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0657_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0660_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0719_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0717_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0720_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0731_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0729_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0732_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0695_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0693_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0696_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0671_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0669_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0672_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0685_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0683_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0686_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0709_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0707_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0710_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0661_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0659_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0662_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0721_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0719_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0722_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0733_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0731_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0734_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0697_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0695_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0698_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0673_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0671_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0674_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0685_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0166_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0709_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0193_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0661_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0175_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0721_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0733_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0165_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0697_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0135_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0673_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0759_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0760_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0166_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0763_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0193_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0764_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0767_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0768_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0175_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0191_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0771_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0772_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0174_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0190_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0755_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0756_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0165_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0743_ 
        = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0744_)) 
                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0135_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0761_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0759_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0762_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0765_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0763_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0766_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0769_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0767_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0770_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0773_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0771_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0774_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0757_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0755_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0758_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0745_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0743_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0746_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0127_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0761_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0187_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0765_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0162_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0769_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0161_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0773_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0757_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0108_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0745_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1112_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1111_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0096_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0127_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___b_362) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16742: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1996_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___s_363));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16742, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1996___Vfuncout_360;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1077_) 
             << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1076_) 
                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1075_) 
                                  << 2U))) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1074_) 
                                               << 1U) 
                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1073_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342 
        = (0x0000001eU | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0108_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340 
        = (1U & ((0x00000010U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                  ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 4U)))))
                  : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                      ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 3U))))
                      : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                          ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                                 ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                                 : 
                                                ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                                 >> 2U)))
                          : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                              ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))
                                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342)
                                  : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342) 
                                     >> 1U)) : ((1U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343)) 
                                                && (1U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___b_342))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x10U 
                                              == (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                             << 4U) 
                                            | (((8U 
                                                 == 
                                                 (8U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                                  << 2U))) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))))))))))) {
        if ((0U != ((((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                      << 4U) | (((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                 << 3U) | ((4U == (4U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                                           << 2U))) 
                    | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))) 
                        << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16621: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '5'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1958_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',5,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___s_343));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16621, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1958___Vfuncout_340;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0063_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1110_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0075_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0063_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0075_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__flush_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__flush_id_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_id_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_id;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___159_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__flush_id)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_id_i;
}

void Vtop___024root___nba_comb__TOP__44(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__44\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___503_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___106_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_fwd_wb_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___502_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___105_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_wdata_fwd_wb_i
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_a_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___503_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___209_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___210_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___502_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_id_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_a_fwd 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___502_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_wdata_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operand_b_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___024_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___209_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_a_operand_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___209_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operand_a_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_wdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_wdata_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operand_b_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operand_b_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___024_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__bt_a_operand 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__bt_a_operand_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operand_a_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__multdiv_operand_a_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__load_store_unit_i__DOT__lsu_wdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__lsu_wdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operand_b_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operand_b_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__bt_a_operand_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__bt_a_operand;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operand_a_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__multdiv_operand_a_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operand_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___00_ 
        = (0x00000001ffffffffULL & ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__bt_b_operand_i)) 
                                    + (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__bt_a_operand_i))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_operand_a_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___606_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___459_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___504_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_op_b 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
           >> 0x00000010U);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___287_ 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
            << 0x00000010U) | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
                               >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_op_b 
        = (0x0000ffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___399_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___490_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___467_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___455_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__g_branch_target_alu__02ebt_alu_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT___00_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___465_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___234_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___507_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_op_a 
        = (0x0000ffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___281_ 
        = ((0xffff0000U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i) 
           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i 
              >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___402_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_op_a 
        = (0x0000ffffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___461_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__op_a_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___502_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___504_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___503_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___417_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_op_b));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___398_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___400_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___399_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___489_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___490_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___466_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___467_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___454_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___455_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__g_branch_target_alu__02eunused_bt_carry 
        = (1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__g_branch_target_alu__02ebt_alu_result 
                           >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_target_o 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__g_branch_target_alu__02ebt_alu_result);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___231_ 
        = (0x00000003ffffffffULL & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___234_ 
                                    | (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___232_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___505_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___507_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___506_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___415_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_op_a));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___401_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___403_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___402_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___418_ 
        = (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_op_a));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___460_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___461_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___502_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___070_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___398_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___576_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___489_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___577_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___466_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___579_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___454_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_target_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__branch_target_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___654_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___231_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___072_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___505_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___069_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___401_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___416_ 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___418_, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___417_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___578_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___460_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___073_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esv2v_tmp_4DE54 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__sign_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___070_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___209_ 
        = (1ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___576_)) 
                   << 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__branch_target_ex_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__branch_target_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___227_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___654_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___072_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esv2v_tmp_822BD 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__sign_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___566_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___416_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___457_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___500_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_sign_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__sign_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___299_ 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__sign_b);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___463_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rem_change_sign 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___501_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_sign_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___293_ 
        = (3U & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__sign_a))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_res 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___566_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[0U] 
        = (::IData)(((::QData)((::IData)((0x0000ffffU 
                                          & (::IData)(
                                                      (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___566_ 
                                                       >> 0x00000010U))))) 
                     << 0x00000022U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[1U] 
        = (::IData)((((::QData)((::IData)((0x0000ffffU 
                                           & (::IData)(
                                                       (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___566_ 
                                                        >> 0x00000010U))))) 
                      << 0x00000022U) >> 0x00000020U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[2U] = 0U;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___414_ 
        = (((::QData)((::IData)((0x0003ffffU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_sign_b)))))) 
            << 0x00000010U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_op_b)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___427_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__rem_change_sign;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___499_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___501_) 
           ^ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___500_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_res_uns 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_res;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___413_ 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___415_, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___414_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___725_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___499_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02eunused_mult1_res_uns 
        = (3U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult1_res_uns 
                           >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___567_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___413_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___496_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___725_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult2_res 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___567_;
}

void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__47\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___Vfuncout_352;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___a_353;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___b_354;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___Vfuncout_352 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___a_353 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___b_354 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1092_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1091_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___b_354 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0114_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0159_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___a_353 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___Vfuncout_352 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___b_354)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___b_354) 
                         >> 1U) : (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___a_353))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16692: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1976_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___s_355));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16692, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1090_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1976___Vfuncout_352;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0082_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1090_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0082_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0032_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
}

void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__48\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___Vfuncout_392;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___b_394;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___Vfuncout_392 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___b_394 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___343_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___344_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___346_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___603_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___343_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___060_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___603_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___335_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___060_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___574_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___334_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___b_394 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___335_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___Vfuncout_392 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___b_394)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___b_394) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19052: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._790_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___s_395));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19052, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___333_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___790___Vfuncout_392;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___333_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___050_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___608_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_hold 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___608_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___023_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___050_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___553_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mult_hold;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___552_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___553_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___571_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___552_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___550_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___571_;
}

void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__50\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376;
    ::SData/*11:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1124_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1123_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0106_) 
            << 6U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0187_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376 
        = (0x0000003fU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))
                           ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378)
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))
                               ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___b_378) 
                                  >> 6U) : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16806: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2008_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___s_379));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16806, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2008___Vfuncout_376;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1103_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1102_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1101_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1100_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358 
        = (4U | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0095_) 
                  << 3U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0126_) 
                             << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0147_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356 
        = (1U & ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                  ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 3U))))
                  : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                      ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                                             ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                                             : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                                >> 2U)))
                      : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                          ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))
                              ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)
                              : ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358) 
                                 >> 1U)) : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359)) 
                                            && (1U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___b_358)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16714: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1985_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___s_359));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16714, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1985___Vfuncout_356;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0073_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1099_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0073_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0062_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__exc_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_save_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mcause_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_save_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_cause;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0640_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0586_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0596_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0608_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0638_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0584_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0588_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0594_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0602_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0614_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0590_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0592_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0402_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0448_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0524_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0548_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0556_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0564_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0520_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0528_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0544_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0552_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0560_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0532_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0536_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0418_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0456_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0462_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0474_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0510_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0410_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0426_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0468_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0480_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0504_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0516_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0434_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0442_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0582_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0540_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0572_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0486_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0492_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0498_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0632_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0580_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_save_cause_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__unused_irq_bit 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_ 
        = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0635_) 
                 | (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0638_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0485_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0483_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0486_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0180_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0222_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0485_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0141_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0180_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0142_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_if_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0537_ 
        = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0538_)) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0222_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_if_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0539_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0537_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0540_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__g_no_pmp__02eunused_priv_lvl_if 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_if;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0206_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0539_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0582_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0206_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0174_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0581_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0174_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_en_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_en;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_en_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT___3_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_en_i;
}

void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__52\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___Vfuncout_20;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___Vfuncout_184;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187;
    ::IData/*30:0*/ __Vdfg_Regularize_11323;
    ::IData/*30:0*/ __Vdfg_Regularize_11324;
    ::IData/*28:0*/ __Vdfg_Regularize_11325;
    ::IData/*31:0*/ __Vdfg_Regularize_11364;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___Vfuncout_20 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___Vfuncout_184 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187 = 0;
    __Vdfg_Regularize_11323 = 0;
    __Vdfg_Regularize_11324 = 0;
    __Vdfg_Regularize_11325 = 0;
    __Vdfg_Regularize_11364 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___486_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___485_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___484_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___483_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___492_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__pc_id_i;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[2U] 
        = (::IData)((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___502_)) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[3U] 
        = (::IData)(((((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___502_)) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_addr_last_i))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___Vfuncout_184 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___b_186[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:13260: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i._798_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___s_187));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 13260, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___482_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___798___Vfuncout_184;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___496_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___119_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__imm_b
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rdata_b_fwd);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___482_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___482_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___496_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___000_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___021_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_a;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_b_ex_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_a_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_a_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_b_ex 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__alu_operand_b_ex_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_wdata 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_a_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operand_a_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_a_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operand_b_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_b_ex;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___14_ = 
        (0x00000fffU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__alu_operand_b_ex 
                        & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_access)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_wdata;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operand_a_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_operand_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___00_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___14_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___01_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___14_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT___02_ = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___14_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__sv2v_cast_12__024func__024____VhshN81HLAQB6WvVK410CDWZPleh 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT___14_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0368_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___124_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed) 
           ^ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
              >> 0x0000001fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bfp_off 
        = (0x0000001fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                          >> 0x00000010U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___111_ 
        = (0U != (0x0000000fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                 >> 0x00000018U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___114_ 
        = (0x0000001fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___113_ 
        = ((::IData)(0x00000020U) - (::IData)((0x0000001fU 
                                               & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___119_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___123_ 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
            ^ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i) 
           >> 0x0000001fU);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___044_ 
        = (0x00000001ffffffffULL & (~ ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
                                       << 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_addr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__sv2v_cast_12__024func__024____VhshN81HLAQB6WvVK410CDWZPleh;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___055_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___111_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl 
        = (0x0000003fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___113_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___119_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___051_ 
        = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___123_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___044_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_addr;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___117_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___117_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bfp_len 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___055_) 
            << 4U) | (0x0000000fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i 
                                     >> 0x00000018U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_amt_compl 
        = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___115_ 
        = (0x0000001fU & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt_compl));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___059_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
           | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___043_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___121_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i 
           ^ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___100_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___051_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_neg 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___104_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___105_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___122_
            : ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_b_i)) 
               << 1U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i;
    vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[vlSelfRef.__Vdfg_BinToOneHot_Pre_11146] = 0U;
    vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__Vdfg_BinToOneHot_Pre_11146 = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___019_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___038_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___042_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_arith) 
           & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___038_ 
              >> 0x0000001fU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___116_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___114_)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___115_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_or_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___059_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_xor_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___121_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___083_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___084_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___043_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___121_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__unused_csr_addr 
        = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr) 
                 >> 5U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0279_ 
        = (3U == (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr) 
                        >> 0x0000000aU)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx 
        = (0x0000001fU & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0284_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0286_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0716_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0720_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0288_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0738_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1984U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0756_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0760_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0792_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0796_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0776_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0752_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0764_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0768_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0780_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0724_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0642_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0658_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0662_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0674_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0678_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0682_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0696_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0706_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0772_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0654_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0670_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0686_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0692_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0702_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0784_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0788_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0646_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0650_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0666_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0712_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1244_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1251_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1252_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1253_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1254_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1255_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1256_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1257_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1258_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1259_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1260_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1261_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1262_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1263_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1264_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1265_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1266_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1267_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1268_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1269_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1270_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1271_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1272_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1273_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1274_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1275_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1276_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1277_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1278_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1279_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1280_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0842_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0849_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0850_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0851_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0852_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0853_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0854_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0855_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0856_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0857_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0858_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0859_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0860_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0861_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0862_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0863_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0864_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0865_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0866_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0867_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0868_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0869_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0870_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0871_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0872_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0873_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0874_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0875_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0876_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0877_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0878_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0879_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0881_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0888_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0889_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0890_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0891_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0892_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0893_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0894_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0895_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0896_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0897_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0898_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0899_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0900_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0901_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0902_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0903_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0904_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0905_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0906_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0907_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0908_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0909_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0910_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0911_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0912_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0913_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0914_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0915_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0916_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0917_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0918_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1323_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1330_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1331_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1332_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1333_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1334_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1335_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1336_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1337_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1338_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1339_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1340_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1341_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1342_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1343_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1344_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1345_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1346_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1347_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1348_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1349_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1350_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1351_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1352_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1353_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1354_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1355_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1356_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1357_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1358_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1359_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1360_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1361_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1282_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1289_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1290_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1291_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1292_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1293_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1294_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1295_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1296_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1297_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1298_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1299_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1300_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1301_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1302_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1303_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1304_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1305_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1306_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1307_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1308_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1309_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1310_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1311_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1312_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1313_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1314_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1315_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1316_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1317_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1318_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1319_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1320_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1321_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1483_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1484_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1491_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1492_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1493_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1494_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1495_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1496_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1497_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1498_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1499_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1500_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1501_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1502_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1503_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1504_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1505_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1506_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1507_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1508_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1509_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1510_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1511_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1512_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1513_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1514_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1515_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1516_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1517_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1518_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1519_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1520_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1521_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1522_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0961_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1984U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0962_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0963_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0970_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0971_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0972_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0973_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0974_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0975_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0976_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0977_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0978_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0979_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0980_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0981_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0982_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0983_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0984_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0985_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0986_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0987_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0988_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0989_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0990_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0991_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0992_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0993_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0994_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0995_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0996_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0997_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0998_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0999_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1000_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1125_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1132_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1133_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1134_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1135_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1136_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1137_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1138_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1139_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1140_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1141_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1142_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1143_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1144_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1145_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1146_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1147_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1148_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1149_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1150_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1151_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1152_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1153_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1154_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1155_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1156_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1157_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1158_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1159_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1160_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1161_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1162_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1163_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1164_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1202_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1203_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1210_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1211_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1212_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1213_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1214_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1215_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1216_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1217_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1218_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1219_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1220_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1221_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1222_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1223_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1224_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1225_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1226_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1227_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1228_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1229_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1230_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1231_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1232_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1233_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1234_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1235_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1236_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1237_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1238_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1239_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1240_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1241_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1242_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1363_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1370_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1371_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1372_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1373_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1374_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1375_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1376_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1377_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1378_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1379_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1380_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1381_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1382_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1383_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1384_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1385_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1386_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1387_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1388_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1389_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1390_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1391_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1392_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1393_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1394_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1395_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1396_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1397_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1398_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1399_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1400_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1401_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1402_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0920_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0927_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0928_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0929_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0930_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0931_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0932_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0933_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0934_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0935_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0936_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0937_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0938_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0939_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0940_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0941_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0942_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0943_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0944_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0945_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0946_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0947_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0948_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0949_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0950_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0951_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0952_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0953_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0954_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0955_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0956_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0957_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0958_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0959_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1082_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1089_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1090_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1091_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1092_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1093_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1094_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1095_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1096_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1097_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1098_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1099_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1100_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1101_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1102_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1103_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1104_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1105_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1106_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1107_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1108_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1109_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1110_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1111_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1112_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1113_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1114_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1115_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1116_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1117_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1118_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1119_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1120_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1121_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1440_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1984U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1441_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1442_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1443_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1450_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1451_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1452_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1453_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1454_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1455_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1456_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1457_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1458_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1459_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1460_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1461_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1462_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1463_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1464_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1465_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1466_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1467_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1468_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1469_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1470_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1471_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1472_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1473_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1474_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1475_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1476_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1477_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1478_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1479_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1480_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1481_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1038_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1984U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1039_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1040_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1047_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1048_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1049_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1050_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1051_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1052_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1053_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1054_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1055_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1056_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1057_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1058_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1059_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1060_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1061_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1062_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1063_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1064_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1065_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1066_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1067_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1068_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1069_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1070_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1071_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1072_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1073_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1074_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1075_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1076_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1077_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1078_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1079_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1080_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1544_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1985U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1545_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1984U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1546_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1962U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1547_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1960U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1548_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1549_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1550_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1551_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1558_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[800U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1559_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1971U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1560_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1970U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1561_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1969U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1562_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[1968U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1563_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[959U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1564_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[958U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1565_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[957U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1566_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[956U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1567_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[955U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1568_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[954U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1569_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[953U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1570_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[952U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1571_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[951U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1572_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[950U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1573_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[949U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1574_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[948U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1575_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[947U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1576_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[946U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1577_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[945U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1578_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[944U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1579_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[931U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1580_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[930U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1581_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[929U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1582_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[928U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1583_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[913U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1584_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[912U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1585_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[836U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1586_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[835U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1587_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[834U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1588_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[833U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1589_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[773U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1590_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[832U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1591_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[774U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1592_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[772U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1593_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[769U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1594_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[768U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1595_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[3860U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1123_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[912U];
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1524_ 
        = vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[913U];
    __Vdfg_Regularize_11325 = (((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[831U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[830U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[829U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[828U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[827U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[826U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[825U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[824U]))) 
                                 << 0x00000015U) | 
                                (((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[823U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[822U]) 
                                    << 5U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[821U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[820U]) 
                                              << 3U)) 
                                  | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[819U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[818U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[817U]))) 
                                 << 0x0000000eU)) | 
                               ((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[816U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[815U]) 
                                    << 5U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[814U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[813U]) 
                                              << 3U)) 
                                  | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[812U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[811U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[810U]))) 
                                 << 7U) | ((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[809U]) 
                                               << 1U) 
                                              | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[808U]) 
                                             << 5U) 
                                            | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[807U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[806U]) 
                                               << 3U)) 
                                           | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[805U]) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[804U]) 
                                                  << 1U) 
                                                 | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[803U])))));
    __Vdfg_Regularize_11324 = (((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2847U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2846U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2845U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2844U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2843U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2842U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2841U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2840U]))) 
                                 << 0x00000017U) | 
                                (((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2839U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2838U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2837U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2836U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2835U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2834U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2833U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2832U]))) 
                                 << 0x0000000fU)) | 
                               ((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2831U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2830U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2829U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2828U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2827U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2826U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2825U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2824U]))) 
                                 << 7U) | ((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2823U]) 
                                               << 1U) 
                                              | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2822U]) 
                                             << 5U) 
                                            | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2821U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2820U]) 
                                               << 3U)) 
                                           | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2819U]) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2818U]) 
                                                  << 1U) 
                                                 | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2816U])))));
    __Vdfg_Regularize_11323 = (((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2975U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2974U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2973U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2972U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2971U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2970U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2969U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2968U]))) 
                                 << 0x00000017U) | 
                                (((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2967U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2966U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2965U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2964U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2963U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2962U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2961U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2960U]))) 
                                 << 0x0000000fU)) | 
                               ((((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2959U]) 
                                      << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2958U]) 
                                    << 6U) | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2957U]) 
                                                << 1U) 
                                               | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2956U]) 
                                              << 4U)) 
                                  | (((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2955U]) 
                                        << 1U) | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2954U]) 
                                      << 2U) | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2953U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2952U]))) 
                                 << 7U) | ((((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2951U]) 
                                               << 1U) 
                                              | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2950U]) 
                                             << 5U) 
                                            | ((((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2949U]) 
                                                 << 1U) 
                                                | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2948U]) 
                                               << 3U)) 
                                           | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2947U]) 
                                               << 2U) 
                                              | (((::IData)(vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2946U]) 
                                                  << 1U) 
                                                 | vlSelfRef.__Vdfg_BinToOneHot_Tab_11147[2944U])))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___042_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___091_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___116_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___085_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___086_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___059_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___083_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0341_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wr) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0279_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0358_ 
        = (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0360_ 
        = (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0359_ 
        = (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0361_ 
        = (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1002_ 
        = (0x1fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1003_ 
        = (0x1eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1004_ 
        = (0x1dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1005_ 
        = (0x1cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1006_ 
        = (0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1007_ 
        = (0x1aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1008_ 
        = (0x19U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1009_ 
        = (0x18U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1010_ 
        = (0x17U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1011_ 
        = (0x16U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1012_ 
        = (0x15U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1013_ 
        = (0x14U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1014_ 
        = (0x13U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1015_ 
        = (0x12U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1016_ 
        = (0x11U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1017_ 
        = (0x10U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1018_ 
        = (0x0fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1019_ 
        = (0x0eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1020_ 
        = (0x0dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1021_ 
        = (0x0cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1022_ 
        = (0x0bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1023_ 
        = (0x0aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1024_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1025_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1026_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1027_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1028_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1029_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1030_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1031_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1032_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1033_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1166_ 
        = (0x1fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1167_ 
        = (0x1eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1168_ 
        = (0x1dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1169_ 
        = (0x1cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1170_ 
        = (0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1171_ 
        = (0x1aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1172_ 
        = (0x19U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1173_ 
        = (0x18U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1174_ 
        = (0x17U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1175_ 
        = (0x16U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1176_ 
        = (0x15U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1177_ 
        = (0x14U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1178_ 
        = (0x13U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1179_ 
        = (0x12U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1180_ 
        = (0x11U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1181_ 
        = (0x10U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1182_ 
        = (0x0fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1183_ 
        = (0x0eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1184_ 
        = (0x0dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1185_ 
        = (0x0cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1186_ 
        = (0x0bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1187_ 
        = (0x0aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1188_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1189_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1190_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1191_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1192_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1193_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1194_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1195_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1196_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1197_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1404_ 
        = (0x1fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1405_ 
        = (0x1eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1406_ 
        = (0x1dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1407_ 
        = (0x1cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1408_ 
        = (0x1bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1409_ 
        = (0x1aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1410_ 
        = (0x19U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1411_ 
        = (0x18U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1412_ 
        = (0x17U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1413_ 
        = (0x16U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1414_ 
        = (0x15U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1415_ 
        = (0x14U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1416_ 
        = (0x13U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1417_ 
        = (0x12U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1418_ 
        = (0x11U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1419_ 
        = (0x10U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1420_ 
        = (0x0fU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1421_ 
        = (0x0eU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1422_ 
        = (0x0dU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1423_ 
        = (0x0cU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1424_ 
        = (0x0bU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1425_ 
        = (0x0aU == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1426_ 
        = (9U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1427_ 
        = (8U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1428_ 
        = (7U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1429_ 
        = (6U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1430_ 
        = (5U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1431_ 
        = (4U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1432_ 
        = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1433_ 
        = (2U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1434_ 
        = (1U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1435_ 
        = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter_idx))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0737_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0738_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0755_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0756_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0759_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0760_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0791_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0792_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0795_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0796_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0751_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0752_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0763_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0764_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0767_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0768_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0779_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0780_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0723_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0724_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0783_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0784_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0787_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0788_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1122_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1123_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1523_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1524_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1538_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1541_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1249_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0847_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0886_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1328_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1287_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1489_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0968_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1130_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1208_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1368_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0925_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1087_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1448_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1045_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1035_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1556_ 
        = __Vdfg_Regularize_11325;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1532_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1535_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0733_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0747_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1247_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0845_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0884_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1326_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1285_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1487_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0966_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1128_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1206_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1366_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0923_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1085_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1446_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1043_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1199_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1554_ 
        = __Vdfg_Regularize_11324;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1526_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1529_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0728_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0742_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1245_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0843_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0882_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1324_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1283_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1485_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0964_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1126_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1204_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1364_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0921_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1083_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1444_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1041_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1437_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1552_ 
        = __Vdfg_Regularize_11323;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___091_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___091_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___031_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___085_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_write 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0341_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1599_ 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,6, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0358_)))
            ? VL_SHIFTL_III(32,32,6, (::IData)(1U), 
                            (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0358_))))
            : VL_SHIFTR_III(32,32,6, 1U, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0358_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1601_ 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,6, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0360_)))
            ? VL_SHIFTL_III(32,32,6, (::IData)(1U), 
                            (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0360_))))
            : VL_SHIFTR_III(32,32,6, 1U, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0360_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1600_ 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,6, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0359_)))
            ? VL_SHIFTL_III(32,32,6, (::IData)(1U), 
                            (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0359_))))
            : VL_SHIFTR_III(32,32,6, 1U, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0359_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1602_ 
        = (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,6, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0361_)))
            ? VL_SHIFTL_III(32,32,6, (::IData)(1U), 
                            (0x0000003fU & (- (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0361_))))
            : VL_SHIFTR_III(32,32,6, 1U, (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0361_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23 
        = (((((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1033_) 
                  << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1032_) 
                            << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1031_) 
                                        << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1030_))) 
               << 0x0000000cU) | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1029_) 
                                     << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1028_) 
                                               << 2U)) 
                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1027_) 
                                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1026_))) 
                                  << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1025_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1024_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1023_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1022_))) 
                                              << 4U) 
                                             | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1021_) 
                                                  << 3U) 
                                                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1020_) 
                                                    << 2U)) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1019_) 
                                                    << 1U) 
                                                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1018_))))) 
            << 0x00000010U) | (((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1017_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1016_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1015_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1014_))) 
                                 << 0x0000000cU) | 
                                (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1013_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1012_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1011_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1010_))) 
                                 << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1009_) 
                                                << 3U) 
                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1008_) 
                                                  << 2U)) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1007_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1006_))) 
                                             << 4U) 
                                            | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1005_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1004_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1003_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1002_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___Vfuncout_20 
        = (((((((((1U == (1U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                  | (2U == (2U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                 | (4U == (4U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                | (8U == (8U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
               | (0x00000010U == (0x00000010U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
              | (0x00000020U == (0x00000020U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
             | (0x00000040U == (0x00000040U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
            | (0x00000080U == (0x00000080U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))
            ? 0U : (((((((((0x00000100U == (0x00000100U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                           | (0x00000200U == (0x00000200U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                          | (0x00000400U == (0x00000400U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                         | (0x00000800U == (0x00000800U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                        | (0x00001000U == (0x00001000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                       | (0x00002000U == (0x00002000U 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                      | (0x00004000U == (0x00004000U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                     | (0x00008000U == (0x00008000U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))
                     ? 0U : (((((((((0x00010000U == 
                                     (0x00010000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                    | (0x00020000U 
                                       == (0x00020000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                   | (0x00040000U == 
                                      (0x00040000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                  | (0x00080000U == 
                                     (0x00080000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                 | (0x00100000U == 
                                    (0x00100000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                | (0x00200000U == (0x00200000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                               | (0x00400000U == (0x00400000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                              | (0x00800000U == (0x00800000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))
                              ? ((0x00010000U == (0x00010000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                  ? 0U : ((0x00020000U 
                                           == (0x00020000U 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                           ? 0U : (
                                                   (0x00040000U 
                                                    == 
                                                    (0x00040000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                    ? 0U
                                                    : 
                                                   ((0x00080000U 
                                                     == 
                                                     (0x00080000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                     ? 0x00001000U
                                                     : 
                                                    ((0x00100000U 
                                                      == 
                                                      (0x00100000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                      ? 0x00000800U
                                                      : 
                                                     ((0x00200000U 
                                                       == 
                                                       (0x00200000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                       ? 0x00000400U
                                                       : 
                                                      ((0x00400000U 
                                                        == 
                                                        (0x00400000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                        ? 0x00000200U
                                                        : 0x00000100U)))))))
                              : (((((((((0x01000000U 
                                         == (0x01000000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                        | (0x02000000U 
                                           == (0x02000000U 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                       | (0x04000000U 
                                          == (0x04000000U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                      | (0x08000000U 
                                         == (0x08000000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                     | (0x10000000U 
                                        == (0x10000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                    | (0x20000000U 
                                       == (0x20000000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                   | (0x40000000U == 
                                      (0x40000000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))) 
                                  | (0x80000000U == 
                                     (0x80000000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))
                                  ? ((0x01000000U == 
                                      (0x01000000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                      ? 0x00000080U
                                      : ((0x02000000U 
                                          == (0x02000000U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                          ? 0x00000040U
                                          : ((0x04000000U 
                                              == (0x04000000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                              ? 0x00000020U
                                              : ((0x08000000U 
                                                  == 
                                                  (0x08000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                  ? 0x00000010U
                                                  : 
                                                 ((0x10000000U 
                                                   == 
                                                   (0x10000000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                   ? 8U
                                                   : 
                                                  ((0x20000000U 
                                                    == 
                                                    (0x20000000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                    ? 4U
                                                    : 
                                                   ((0x40000000U 
                                                     == 
                                                     (0x40000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))
                                                     ? 0U
                                                     : 1U)))))))
                                  : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((((((((0x80000000U 
                                                   == 
                                                   (0x80000000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                  << 3U) 
                                                 | ((0x40000000U 
                                                     == 
                                                     (0x40000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                    << 2U)) 
                                                | (((0x20000000U 
                                                     == 
                                                     (0x20000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                    << 1U) 
                                                   | (0x10000000U 
                                                      == 
                                                      (0x10000000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                               << 0x0000000cU) 
                                              | (((((0x08000000U 
                                                     == 
                                                     (0x08000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                    << 3U) 
                                                   | ((0x04000000U 
                                                       == 
                                                       (0x04000000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                      << 2U)) 
                                                  | (((0x02000000U 
                                                       == 
                                                       (0x02000000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                      << 1U) 
                                                     | (0x01000000U 
                                                        == 
                                                        (0x01000000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                                 << 8U)) 
                                             | ((((((0x00800000U 
                                                     == 
                                                     (0x00800000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                    << 3U) 
                                                   | ((0x00400000U 
                                                       == 
                                                       (0x00400000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                      << 2U)) 
                                                  | (((0x00200000U 
                                                       == 
                                                       (0x00200000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                      << 1U) 
                                                     | (0x00100000U 
                                                        == 
                                                        (0x00100000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                                 << 4U) 
                                                | ((((0x00080000U 
                                                      == 
                                                      (0x00080000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                     << 3U) 
                                                    | ((0x00040000U 
                                                        == 
                                                        (0x00040000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 2U)) 
                                                   | (((0x00020000U 
                                                        == 
                                                        (0x00020000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 1U) 
                                                      | (0x00010000U 
                                                         == 
                                                         (0x00010000U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))))) 
                                            << 0x00000010U) 
                                           | (((((((0x00008000U 
                                                    == 
                                                    (0x00008000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                   << 3U) 
                                                  | ((0x00004000U 
                                                      == 
                                                      (0x00004000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                     << 2U)) 
                                                 | (((0x00002000U 
                                                      == 
                                                      (0x00002000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                     << 1U) 
                                                    | (0x00001000U 
                                                       == 
                                                       (0x00001000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                                << 0x0000000cU) 
                                               | (((((0x00000800U 
                                                      == 
                                                      (0x00000800U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                     << 3U) 
                                                    | ((0x00000400U 
                                                        == 
                                                        (0x00000400U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 2U)) 
                                                   | (((0x00000200U 
                                                        == 
                                                        (0x00000200U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 1U) 
                                                      | (0x00000100U 
                                                         == 
                                                         (0x00000100U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                                  << 8U)) 
                                              | ((((((0x00000080U 
                                                      == 
                                                      (0x00000080U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                     << 3U) 
                                                    | ((0x00000040U 
                                                        == 
                                                        (0x00000040U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 2U)) 
                                                   | (((0x00000020U 
                                                        == 
                                                        (0x00000020U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                       << 1U) 
                                                      | (0x00000010U 
                                                         == 
                                                         (0x00000010U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                                  << 4U) 
                                                 | ((((8U 
                                                       == 
                                                       (8U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                      << 3U) 
                                                     | ((4U 
                                                         == 
                                                         (4U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                        << 2U)) 
                                                    | (((2U 
                                                         == 
                                                         (2U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                        << 1U) 
                                                       | (1U 
                                                          == 
                                                          (1U 
                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))))))))))))) {
        if ((0U != (((((((((0x80000000U == (0x80000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                           << 3U) | ((0x40000000U == 
                                      (0x40000000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                     << 2U)) | (((0x20000000U 
                                                  == 
                                                  (0x20000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                 << 1U) 
                                                | (0x10000000U 
                                                   == 
                                                   (0x10000000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                        << 0x0000000cU) | (((((0x08000000U 
                                               == (0x08000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                              << 3U) 
                                             | ((0x04000000U 
                                                 == 
                                                 (0x04000000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                << 2U)) 
                                            | (((0x02000000U 
                                                 == 
                                                 (0x02000000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                << 1U) 
                                               | (0x01000000U 
                                                  == 
                                                  (0x01000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                           << 8U)) 
                      | ((((((0x00800000U == (0x00800000U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                             << 3U) | ((0x00400000U 
                                        == (0x00400000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                       << 2U)) | ((
                                                   (0x00200000U 
                                                    == 
                                                    (0x00200000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                   << 1U) 
                                                  | (0x00100000U 
                                                     == 
                                                     (0x00100000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                          << 4U) | ((((0x00080000U 
                                       == (0x00080000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                      << 3U) | ((0x00040000U 
                                                 == 
                                                 (0x00040000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                << 2U)) 
                                    | (((0x00020000U 
                                         == (0x00020000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                        << 1U) | (0x00010000U 
                                                  == 
                                                  (0x00010000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))))) 
                     << 0x00000010U) | (((((((0x00008000U 
                                              == (0x00008000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                             << 3U) 
                                            | ((0x00004000U 
                                                == 
                                                (0x00004000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                               << 2U)) 
                                           | (((0x00002000U 
                                                == 
                                                (0x00002000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                               << 1U) 
                                              | (0x00001000U 
                                                 == 
                                                 (0x00001000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                          << 0x0000000cU) 
                                         | (((((0x00000800U 
                                                == 
                                                (0x00000800U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                               << 3U) 
                                              | ((0x00000400U 
                                                  == 
                                                  (0x00000400U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                 << 2U)) 
                                             | (((0x00000200U 
                                                  == 
                                                  (0x00000200U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                 << 1U) 
                                                | (0x00000100U 
                                                   == 
                                                   (0x00000100U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                            << 8U)) 
                                        | ((((((0x00000080U 
                                                == 
                                                (0x00000080U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                               << 3U) 
                                              | ((0x00000040U 
                                                  == 
                                                  (0x00000040U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                 << 2U)) 
                                             | (((0x00000020U 
                                                  == 
                                                  (0x00000020U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                 << 1U) 
                                                | (0x00000010U 
                                                   == 
                                                   (0x00000010U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:5091: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._2583_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___s_23);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 5091, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1001_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___2583___Vfuncout_20;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0196_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1122_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0217_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1523_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1539_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1538_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1542_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1541_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1250_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1249_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0848_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0847_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0887_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0886_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1329_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1328_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1288_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1287_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1490_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1489_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0969_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0968_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1131_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1130_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1209_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1208_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1369_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1368_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0926_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0925_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1088_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1087_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1449_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1448_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1046_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1045_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1036_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1035_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1557_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1556_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1533_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1532_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1536_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1535_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0734_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0733_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0748_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0747_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1248_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1247_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0846_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0845_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0885_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0884_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1327_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1326_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1286_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1285_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1488_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1487_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0967_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0966_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1129_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1128_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1207_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1206_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1367_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1366_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0924_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0923_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1086_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1085_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1447_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1446_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1044_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1043_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1200_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1199_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1555_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1554_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1527_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1526_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1530_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1529_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0729_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0728_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0743_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0742_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1246_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1245_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0844_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0843_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0883_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0882_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1325_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1324_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1284_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1283_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1486_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1485_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0965_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0964_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1127_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1126_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1205_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1204_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1365_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1364_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0922_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0921_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1084_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1083_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1445_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1444_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1042_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1041_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1438_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1437_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1553_ 
        = (0U != vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1552_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___036_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
        = (0x00000001ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                  (((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___058_)) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___038_))), 
                                                  (0x0000001fU 
                                                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___031_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0362_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1599_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0363_ 
        = (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1601_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0382_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1600_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0383_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1602_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1540_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i) 
                          & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1542_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1034_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1001_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1036_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1534_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i) 
                          & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1536_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0732_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i) 
                          & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0734_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1528_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i) 
                          & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1530_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0727_ 
        = (0x0000001fU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr_i) 
                          & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0729_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___027_ 
        = (1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                           >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___021_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                           >> 0x00000020U)));
    __Vdfg_Regularize_11364 = ((((((((2U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_) 
                                            << 1U)) 
                                     | (1U & (::IData)(
                                                       (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                        >> 1U)))) 
                                    << 6U) | (((2U 
                                                & ((::IData)(
                                                             (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                              >> 2U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 3U)))) 
                                              << 4U)) 
                                  | ((((2U & ((::IData)(
                                                        (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                         >> 4U)) 
                                              << 1U)) 
                                       | (1U & (::IData)(
                                                         (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                          >> 5U)))) 
                                      << 2U) | ((2U 
                                                 & ((::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 6U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 7U)))))) 
                                 << 0x00000018U) | 
                                ((((((2U & ((::IData)(
                                                      (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                       >> 8U)) 
                                            << 1U)) 
                                     | (1U & (::IData)(
                                                       (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                        >> 9U)))) 
                                    << 6U) | (((2U 
                                                & ((::IData)(
                                                             (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                              >> 0x0000000aU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x0000000bU)))) 
                                              << 4U)) 
                                  | ((((2U & ((::IData)(
                                                        (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                         >> 0x0000000cU)) 
                                              << 1U)) 
                                       | (1U & (::IData)(
                                                         (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                          >> 0x0000000dU)))) 
                                      << 2U) | ((2U 
                                                 & ((::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x0000000eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 0x0000000fU)))))) 
                                 << 0x00000010U)) | 
                               (((((((2U & ((::IData)(
                                                      (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                       >> 0x00000010U)) 
                                            << 1U)) 
                                     | (1U & (::IData)(
                                                       (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                        >> 0x00000011U)))) 
                                    << 6U) | (((2U 
                                                & ((::IData)(
                                                             (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                              >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x00000013U)))) 
                                              << 4U)) 
                                  | ((((2U & ((::IData)(
                                                        (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                         >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (::IData)(
                                                         (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                          >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 0x00000017U)))))) 
                                 << 8U) | (((((2U & 
                                               ((::IData)(
                                                          (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                           >> 0x00000018U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (::IData)(
                                                             (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                              >> 0x00000019U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 0x0000001bU)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((::IData)(
                                                              (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                               >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((::IData)(
                                                               (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (::IData)(
                                                                (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_ 
                                                                 >> 0x0000001fU))))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___118_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? __Vdfg_Regularize_11364 : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___112_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0746_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0382_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0748_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0741_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0383_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0743_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0151_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1540_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0187_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0147_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1534_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0149_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1528_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___023_ 
        = __Vdfg_Regularize_11364;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = __Vdfg_Regularize_11364;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0151_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1537_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0187_ 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1539_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0002_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0147_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0149_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___118_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___118_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0152_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1537_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0007_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0152_;
}

void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__53\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___Vfuncout_388;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___b_390;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___Vfuncout_404;
    ::VlWide<3>/*67:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___Vfuncout_412;
    ::VlWide<3>/*67:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___Vfuncout_416;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___b_418;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419;
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___Vfuncout_420;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___b_422;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423;
    ::SData/*15:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___Vfuncout_424;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___b_426;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427;
    ::SData/*15:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___Vfuncout_428;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___b_430;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___Vfuncout_388 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___b_390 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___Vfuncout_404 = 0;
    VL_ZERO_W(68, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___Vfuncout_412 = 0;
    VL_ZERO_W(68, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___Vfuncout_416 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___b_418 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___Vfuncout_420 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___b_422 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___Vfuncout_424 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___b_426 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___Vfuncout_428 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___b_430 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___340_ 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___607_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___606_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___286_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___b_426 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___287_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___Vfuncout_424 
        = (0x0000ffffU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427)))
                           ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___b_426
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427)))
                               ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___b_426 
                                  >> 0x10U) : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19172: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._806_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___s_427));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19172, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___285_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___806___Vfuncout_424;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___280_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___b_430 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___281_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___Vfuncout_428 
        = (0x0000ffffU & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431)))
                           ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___b_430
                           : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431)))
                               ? (__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___b_430 
                                  >> 0x10U) : 0U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19187: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._808_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___s_431));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19187, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___279_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___808___Vfuncout_428;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___225_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___227_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___226_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___298_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___b_418 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___299_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___Vfuncout_416 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___b_418)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___b_418) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19142: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._802_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___s_419));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19142, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___297_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___802___Vfuncout_416;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___292_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___b_422 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___293_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___Vfuncout_420 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___b_422)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___b_422) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19157: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._804_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___s_423));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19157, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___291_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___804___Vfuncout_420;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___304_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___305_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___Vfuncout_412 
        = (0x00000003ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[2U])) 
                                             << 0x0000003eU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[2U])) 
                                                << 0x0000001eU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___b_414[1U])) 
                                                  >> 2U)))
                                         : 0ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19127: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._800_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___s_415));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19127, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___303_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___800___Vfuncout_412;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___494_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___496_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___495_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___340_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___b_390 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___341_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___Vfuncout_388 
        = (1U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___b_390)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391))) 
                     && (1U & ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___b_390) 
                               >> 1U)))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19037: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._788_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___s_391));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19037, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___339_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___788___Vfuncout_388;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___632_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___285_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___635_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___279_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___656_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___225_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___626_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___297_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___629_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___291_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___623_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___303_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___074_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___494_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___605_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___339_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___632_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_op_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___632_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___039_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___635_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_op_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___635_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___062_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___656_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___626_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_sign_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___626_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___041_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___629_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_sign_a 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___629_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___623_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand1 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___623_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_change_sign 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___074_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___043_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___605_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___605_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___040_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___042_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___411_ 
        = (((::QData)((::IData)((0x0003ffffU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_sign_b)))))) 
            << 0x00000010U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_op_b)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___041_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___412_ 
        = (((::QData)((::IData)((0x0003ffffU & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_sign_a)))))) 
            << 0x00000010U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_op_a)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___016_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___044_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___409_ 
        = (((::QData)((::IData)((1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand1 
                                                 >> 0x00000021U))))) 
            << 0x00000022U) | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand1);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___431_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__div_change_sign;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___014_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___385_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult_state_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___410_ 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___412_, vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___411_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___410_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02emult3_res 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[0U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_) 
            << 2U) | (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_ 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[2U] 
        = (0x0000000fU & (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_) 
                           >> 0x0000001eU) | ((::IData)(
                                                        (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___568_ 
                                                         >> 0x00000020U)) 
                                              << 2U)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___316_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___317_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___Vfuncout_404 
        = (0x00000003ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[2U])) 
                                             << 0x0000003eU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[2U])) 
                                                << 0x0000001eU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___b_406[1U])) 
                                                  >> 2U)))
                                         : 0ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19097: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._796_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___s_407));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19097, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___315_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___796___Vfuncout_404;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___617_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___315_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___617_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand3 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___617_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___018_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___046_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___405_ 
        = (((::QData)((::IData)((1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand3 
                                                 >> 0x00000021U))))) 
            << 0x00000022U) | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand3);
}

void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__54\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[0U] 
        = (::IData)((0x0000000200000001ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___582_)) 
                                              << 1U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[1U] 
        = ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___581_ 
            << 2U) | (::IData)(((0x0000000200000001ULL 
                                 | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___582_)) 
                                    << 1U)) >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[2U] 
        = ((0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[2U]) 
           | (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___581_ 
              >> 0x0000001eU));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[2U] 
        = ((3U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[2U]) 
           | ((::IData)((0x0000000200000001ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___580_)) 
                                                  << 1U))) 
              << 2U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[3U] 
        = (((::IData)((0x0000000200000001ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___580_)) 
                                                << 1U))) 
            >> 0x0000001eU) | ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___579_ 
                                << 4U) | ((::IData)(
                                                    ((0x0000000200000001ULL 
                                                      | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___580_)) 
                                                         << 1U)) 
                                                     >> 0x00000020U)) 
                                          << 2U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[4U] 
        = ((0xfffffff0U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[4U]) 
           | (((3U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___579_ 
                      >> 0x0000001cU)) | ((::IData)(
                                                    ((0x0000000200000001ULL 
                                                      | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___580_)) 
                                                         << 1U)) 
                                                     >> 0x00000020U)) 
                                          >> 0x0000001eU)) 
              | (0x0000000cU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___579_ 
                                >> 0x0000001cU))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[4U] 
        = ((0x0000000fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[4U]) 
           | ((::IData)((0x0000000200000001ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___578_)) 
                                                  << 1U))) 
              << 4U));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[5U] 
        = (((::IData)((0x0000000200000001ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___578_)) 
                                                << 1U))) 
            >> 0x0000001cU) | ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___577_ 
                                << 6U) | ((::IData)(
                                                    ((0x0000000200000001ULL 
                                                      | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___578_)) 
                                                         << 1U)) 
                                                     >> 0x00000020U)) 
                                          << 4U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[6U] 
        = (0x0000003fU & (((0x0000000fU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___577_ 
                                           >> 0x0000001aU)) 
                           | ((::IData)(((0x0000000200000001ULL 
                                          | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___578_)) 
                                             << 1U)) 
                                         >> 0x00000020U)) 
                              >> 0x0000001cU)) | (0x00000030U 
                                                  & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___577_ 
                                                     >> 0x0000001aU))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[0U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__accum);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___567_) 
            << 2U) | (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__accum 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[2U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___567_) 
            >> 0x0000001eU) | ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___567_ 
                                          >> 0x00000020U)) 
                               << 2U));
}

void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__56\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___Vfuncout_372;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___b_374;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___Vfuncout_372 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___b_374 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0821_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0819_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0822_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0130_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0821_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0823_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0824_)
            ? 2U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0130_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0825_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0823_) 
           & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0826_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0101_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0825_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1121_) 
            << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1120_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___b_374 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0101_) 
            << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0150_));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___Vfuncout_372 
        = (7U & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375)))
                  ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___b_374)
                  : ((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375)))
                      ? ((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___b_374) 
                         >> 3U) : 1U)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16790: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._2005_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___s_375));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16790, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1119_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___2005___Vfuncout_372;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0068_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1119_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1119_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0068_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_cause_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_cause 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_cause_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_cause_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__debug_cause;
}

void Vtop___024root___nba_comb__TOP__57(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__57\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80;
    ::VlWide<4>/*127:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82;
    ::CData/*3:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80 = 0;
    VL_ZERO_W(128, __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83 = 0;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_ 
        = ((0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i) 
           + (::IData)((0x0000007cU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__irq_id) 
                                       << 2U))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83 
        = ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___060_) 
             << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___059_) 
                       << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___058_) 
                                   << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___057_)));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U] = 0x1a110808U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U] = 0x1a110800U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U] 
        = (::IData)((((::QData)((::IData)((0xfffffffcU 
                                           & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i))) 
                      << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[3U] 
        = (::IData)(((((::QData)((::IData)((0xfffffffcU 
                                            & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i))) 
                       << 0x00000020U) | (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___015_))) 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80 
        = ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
            ? ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[3U])))
            : ((4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                ? ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[2U]))
                : ((2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                    ? ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[1U])
                    : ((1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))
                        ? __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___b_82[0U]
                        : 0U))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((8U == 
                                              (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                             << 3U) 
                                            | ((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                               << 2U)) 
                                           | (((2U 
                                                == 
                                                (2U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                               << 1U) 
                                              | (1U 
                                                 == 
                                                 (1U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))))))))))) {
        if ((0U != ((((8U == (8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                      << 3U) | ((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                << 2U)) | (((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:1505: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.if_stage_i._099_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___s_83));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 1505, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___099___Vfuncout_80;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___013_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__exc_pc 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___056_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___001_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___013_;
}

void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__65\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::VlWide<64>/*2047:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38;
    ::QData/*63:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___Vfuncout_60;
    ::VlWide<64>/*2047:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62;
    ::IData/*31:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63;
    // Body
    VL_ZERO_W(2048, __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___Vfuncout_60 = 0;
    VL_ZERO_W(2048, __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63 = 0;
    vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39 
        = (((((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1197_) 
                  << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1196_) 
                            << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1195_) 
                                        << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1194_))) 
               << 0x0000000cU) | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1193_) 
                                     << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1192_) 
                                               << 2U)) 
                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1191_) 
                                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1190_))) 
                                  << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1189_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1188_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1187_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1186_))) 
                                              << 4U) 
                                             | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1185_) 
                                                  << 3U) 
                                                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1184_) 
                                                    << 2U)) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1183_) 
                                                    << 1U) 
                                                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1182_))))) 
            << 0x00000010U) | (((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1181_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1180_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1179_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1178_))) 
                                 << 0x0000000cU) | 
                                (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1177_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1176_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1175_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1174_))) 
                                 << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1173_) 
                                                << 3U) 
                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1172_) 
                                                  << 2U)) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1171_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1170_))) 
                                             << 4U) 
                                            | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1169_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1168_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1167_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1166_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[0U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[1U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[2U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[3U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[4U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[5U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[6U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[7U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[8U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[9U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[10U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[11U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[12U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[13U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[14U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[15U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[16U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[17U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[18U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[19U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[20U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[21U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[22U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[23U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[24U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[25U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[26U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[27U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[28U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[29U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[30U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[31U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[32U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[33U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[34U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[35U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[36U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[37U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[38U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[39U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[40U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[41U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[42U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[43U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[44U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[45U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[46U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[47U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[48U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[49U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[50U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[51U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[52U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[53U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[54U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[55U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[56U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[57U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[58U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[59U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[60U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[61U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[62U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[63U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d 
                     >> 0x00000020U));
    vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___Vfuncout_36 
        = (((((((((1U == (1U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                  | (2U == (2U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                 | (4U == (4U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                | (8U == (8U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
               | (0x00000010U == (0x00000010U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
              | (0x00000020U == (0x00000020U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
             | (0x00000040U == (0x00000040U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
            | (0x00000080U == (0x00000080U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))
            ? ((1U == (1U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[1U])) 
                    << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[0U])))
                : ((2U == (2U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[3U])) 
                        << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[2U])))
                    : ((4U == (4U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[5U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[4U])))
                        : ((8U == (8U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[7U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[6U])))
                            : ((0x00000010U == (0x00000010U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[9U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[8U])))
                                : ((0x00000020U == 
                                    (0x00000020U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[11U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[10U])))
                                    : ((0x00000040U 
                                        == (0x00000040U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[13U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[12U])))
                                        : (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[15U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[14U]))))))))))
            : (((((((((0x00000100U == (0x00000100U 
                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                      | (0x00000200U == (0x00000200U 
                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                     | (0x00000400U == (0x00000400U 
                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                    | (0x00000800U == (0x00000800U 
                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                   | (0x00001000U == (0x00001000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                  | (0x00002000U == (0x00002000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                 | (0x00004000U == (0x00004000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                | (0x00008000U == (0x00008000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))
                ? ((0x00000100U == (0x00000100U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[17U])) 
                        << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[16U])))
                    : ((0x00000200U == (0x00000200U 
                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[19U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[18U])))
                        : ((0x00000400U == (0x00000400U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[21U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[20U])))
                            : ((0x00000800U == (0x00000800U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[23U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[22U])))
                                : ((0x00001000U == 
                                    (0x00001000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[25U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[24U])))
                                    : ((0x00002000U 
                                        == (0x00002000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[27U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[26U])))
                                        : ((0x00004000U 
                                            == (0x00004000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[29U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[28U])))
                                            : (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[31U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[30U]))))))))))
                : (((((((((0x00010000U == (0x00010000U 
                                           & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                          | (0x00020000U == (0x00020000U 
                                             & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                         | (0x00040000U == (0x00040000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                        | (0x00080000U == (0x00080000U 
                                           & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                       | (0x00100000U == (0x00100000U 
                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                      | (0x00200000U == (0x00200000U 
                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                     | (0x00400000U == (0x00400000U 
                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                    | (0x00800000U == (0x00800000U 
                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))
                    ? ((0x00010000U == (0x00010000U 
                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[33U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[32U])))
                        : ((0x00020000U == (0x00020000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[35U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[34U])))
                            : ((0x00040000U == (0x00040000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[37U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[36U])))
                                : ((0x00080000U == 
                                    (0x00080000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[39U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[38U])))
                                    : ((0x00100000U 
                                        == (0x00100000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[41U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[40U])))
                                        : ((0x00200000U 
                                            == (0x00200000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[43U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[42U])))
                                            : ((0x00400000U 
                                                == 
                                                (0x00400000U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                                ? (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[45U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[44U])))
                                                : (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[47U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[46U]))))))))))
                    : (((((((((0x01000000U == (0x01000000U 
                                               & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                              | (0x02000000U == (0x02000000U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                             | (0x04000000U == (0x04000000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                            | (0x08000000U == (0x08000000U 
                                               & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                           | (0x10000000U == (0x10000000U 
                                              & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                          | (0x20000000U == (0x20000000U 
                                             & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                         | (0x40000000U == (0x40000000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))) 
                        | (0x80000000U == (0x80000000U 
                                           & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))
                        ? ((0x01000000U == (0x01000000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[49U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[48U])))
                            : ((0x02000000U == (0x02000000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[51U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[50U])))
                                : ((0x04000000U == 
                                    (0x04000000U & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[53U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[52U])))
                                    : ((0x08000000U 
                                        == (0x08000000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[55U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[54U])))
                                        : ((0x10000000U 
                                            == (0x10000000U 
                                                & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[57U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[56U])))
                                            : ((0x20000000U 
                                                == 
                                                (0x20000000U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                                ? (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[59U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[58U])))
                                                : (
                                                   (0x40000000U 
                                                    == 
                                                    (0x40000000U 
                                                     & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))
                                                    ? 
                                                   (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[61U])) 
                                                     << 0x00000020U) 
                                                    | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[60U])))
                                                    : 
                                                   (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[63U])) 
                                                     << 0x00000020U) 
                                                    | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___b_38[62U]))))))))))
                        : 0ULL))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((((((((0x80000000U 
                                                   == 
                                                   (0x80000000U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                  << 3U) 
                                                 | ((0x40000000U 
                                                     == 
                                                     (0x40000000U 
                                                      & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                    << 2U)) 
                                                | (((0x20000000U 
                                                     == 
                                                     (0x20000000U 
                                                      & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                    << 1U) 
                                                   | (0x10000000U 
                                                      == 
                                                      (0x10000000U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                               << 0x0000000cU) 
                                              | (((((0x08000000U 
                                                     == 
                                                     (0x08000000U 
                                                      & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                    << 3U) 
                                                   | ((0x04000000U 
                                                       == 
                                                       (0x04000000U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                      << 2U)) 
                                                  | (((0x02000000U 
                                                       == 
                                                       (0x02000000U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                      << 1U) 
                                                     | (0x01000000U 
                                                        == 
                                                        (0x01000000U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                                 << 8U)) 
                                             | ((((((0x00800000U 
                                                     == 
                                                     (0x00800000U 
                                                      & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                    << 3U) 
                                                   | ((0x00400000U 
                                                       == 
                                                       (0x00400000U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                      << 2U)) 
                                                  | (((0x00200000U 
                                                       == 
                                                       (0x00200000U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                      << 1U) 
                                                     | (0x00100000U 
                                                        == 
                                                        (0x00100000U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                                 << 4U) 
                                                | ((((0x00080000U 
                                                      == 
                                                      (0x00080000U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                     << 3U) 
                                                    | ((0x00040000U 
                                                        == 
                                                        (0x00040000U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 2U)) 
                                                   | (((0x00020000U 
                                                        == 
                                                        (0x00020000U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 1U) 
                                                      | (0x00010000U 
                                                         == 
                                                         (0x00010000U 
                                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))))) 
                                            << 0x00000010U) 
                                           | (((((((0x00008000U 
                                                    == 
                                                    (0x00008000U 
                                                     & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                   << 3U) 
                                                  | ((0x00004000U 
                                                      == 
                                                      (0x00004000U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                     << 2U)) 
                                                 | (((0x00002000U 
                                                      == 
                                                      (0x00002000U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                     << 1U) 
                                                    | (0x00001000U 
                                                       == 
                                                       (0x00001000U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                                << 0x0000000cU) 
                                               | (((((0x00000800U 
                                                      == 
                                                      (0x00000800U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                     << 3U) 
                                                    | ((0x00000400U 
                                                        == 
                                                        (0x00000400U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 2U)) 
                                                   | (((0x00000200U 
                                                        == 
                                                        (0x00000200U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 1U) 
                                                      | (0x00000100U 
                                                         == 
                                                         (0x00000100U 
                                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                                  << 8U)) 
                                              | ((((((0x00000080U 
                                                      == 
                                                      (0x00000080U 
                                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                     << 3U) 
                                                    | ((0x00000040U 
                                                        == 
                                                        (0x00000040U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 2U)) 
                                                   | (((0x00000020U 
                                                        == 
                                                        (0x00000020U 
                                                         & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                       << 1U) 
                                                      | (0x00000010U 
                                                         == 
                                                         (0x00000010U 
                                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                                  << 4U) 
                                                 | ((((8U 
                                                       == 
                                                       (8U 
                                                        & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                      << 3U) 
                                                     | ((4U 
                                                         == 
                                                         (4U 
                                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                        << 2U)) 
                                                    | (((2U 
                                                         == 
                                                         (2U 
                                                          & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                        << 1U) 
                                                       | (1U 
                                                          == 
                                                          (1U 
                                                           & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))))))))))))) {
        if ((0U != (((((((((0x80000000U == (0x80000000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                           << 3U) | ((0x40000000U == 
                                      (0x40000000U 
                                       & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                     << 2U)) | (((0x20000000U 
                                                  == 
                                                  (0x20000000U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                 << 1U) 
                                                | (0x10000000U 
                                                   == 
                                                   (0x10000000U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                        << 0x0000000cU) | (((((0x08000000U 
                                               == (0x08000000U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                              << 3U) 
                                             | ((0x04000000U 
                                                 == 
                                                 (0x04000000U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                << 2U)) 
                                            | (((0x02000000U 
                                                 == 
                                                 (0x02000000U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                << 1U) 
                                               | (0x01000000U 
                                                  == 
                                                  (0x01000000U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                           << 8U)) 
                      | ((((((0x00800000U == (0x00800000U 
                                              & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                             << 3U) | ((0x00400000U 
                                        == (0x00400000U 
                                            & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                       << 2U)) | ((
                                                   (0x00200000U 
                                                    == 
                                                    (0x00200000U 
                                                     & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                   << 1U) 
                                                  | (0x00100000U 
                                                     == 
                                                     (0x00100000U 
                                                      & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                          << 4U) | ((((0x00080000U 
                                       == (0x00080000U 
                                           & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                      << 3U) | ((0x00040000U 
                                                 == 
                                                 (0x00040000U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                << 2U)) 
                                    | (((0x00020000U 
                                         == (0x00020000U 
                                             & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                        << 1U) | (0x00010000U 
                                                  == 
                                                  (0x00010000U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))))) 
                     << 0x00000010U) | (((((((0x00008000U 
                                              == (0x00008000U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                             << 3U) 
                                            | ((0x00004000U 
                                                == 
                                                (0x00004000U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                               << 2U)) 
                                           | (((0x00002000U 
                                                == 
                                                (0x00002000U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                               << 1U) 
                                              | (0x00001000U 
                                                 == 
                                                 (0x00001000U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                          << 0x0000000cU) 
                                         | (((((0x00000800U 
                                                == 
                                                (0x00000800U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                               << 3U) 
                                              | ((0x00000400U 
                                                  == 
                                                  (0x00000400U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                 << 2U)) 
                                             | (((0x00000200U 
                                                  == 
                                                  (0x00000200U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                 << 1U) 
                                                | (0x00000100U 
                                                   == 
                                                   (0x00000100U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                            << 8U)) 
                                        | ((((((0x00000080U 
                                                == 
                                                (0x00000080U 
                                                 & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                               << 3U) 
                                              | ((0x00000040U 
                                                  == 
                                                  (0x00000040U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                 << 2U)) 
                                             | (((0x00000020U 
                                                  == 
                                                  (0x00000020U 
                                                   & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                 << 1U) 
                                                | (0x00000010U 
                                                   == 
                                                   (0x00000010U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:5875: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._3039_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___s_39);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 5875, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1165_ 
        = vlSelfRef.__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3039___Vfuncout_36;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63 
        = (((((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1435_) 
                  << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1434_) 
                            << 2U)) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1433_) 
                                        << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1432_))) 
               << 0x0000000cU) | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1431_) 
                                     << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1430_) 
                                               << 2U)) 
                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1429_) 
                                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1428_))) 
                                  << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1427_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1426_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1425_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1424_))) 
                                              << 4U) 
                                             | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1423_) 
                                                  << 3U) 
                                                 | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1422_) 
                                                    << 2U)) 
                                                | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1421_) 
                                                    << 1U) 
                                                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1420_))))) 
            << 0x00000010U) | (((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1419_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1418_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1417_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1416_))) 
                                 << 0x0000000cU) | 
                                (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1415_) 
                                    << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1414_) 
                                              << 2U)) 
                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1413_) 
                                      << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1412_))) 
                                 << 8U)) | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1411_) 
                                                << 3U) 
                                               | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1410_) 
                                                  << 2U)) 
                                              | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1409_) 
                                                  << 1U) 
                                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1408_))) 
                                             << 4U) 
                                            | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1407_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1406_) 
                                                   << 2U)) 
                                               | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1405_) 
                                                   << 1U) 
                                                  | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1404_))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[0U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[1U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[2U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[3U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[4U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[5U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[6U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[7U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[8U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[9U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[10U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[11U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[12U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[13U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[14U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[15U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[16U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[17U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[18U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[19U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[20U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[21U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[22U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[23U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[24U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[25U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[26U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[27U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[28U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[29U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[30U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[31U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[32U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[33U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[34U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[35U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[36U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[37U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[38U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[39U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[40U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[41U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[42U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[43U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[44U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[45U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[46U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[47U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[48U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[49U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[50U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[51U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[52U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[53U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[54U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[55U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[56U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[57U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[58U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[59U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[60U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[61U] = 0U;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[62U] 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[63U] 
        = (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d 
                     >> 0x00000020U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___Vfuncout_60 
        = (((((((((1U == (1U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                  | (2U == (2U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                 | (4U == (4U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                | (8U == (8U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
               | (0x00000010U == (0x00000010U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
              | (0x00000020U == (0x00000020U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
             | (0x00000040U == (0x00000040U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
            | (0x00000080U == (0x00000080U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))
            ? ((1U == (1U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[1U])) 
                    << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[0U])))
                : ((2U == (2U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[3U])) 
                        << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[2U])))
                    : ((4U == (4U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[5U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[4U])))
                        : ((8U == (8U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[7U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[6U])))
                            : ((0x00000010U == (0x00000010U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[9U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[8U])))
                                : ((0x00000020U == 
                                    (0x00000020U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[11U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[10U])))
                                    : ((0x00000040U 
                                        == (0x00000040U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[13U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[12U])))
                                        : (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[15U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[14U]))))))))))
            : (((((((((0x00000100U == (0x00000100U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                      | (0x00000200U == (0x00000200U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                     | (0x00000400U == (0x00000400U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                    | (0x00000800U == (0x00000800U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                   | (0x00001000U == (0x00001000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                  | (0x00002000U == (0x00002000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                 | (0x00004000U == (0x00004000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                | (0x00008000U == (0x00008000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))
                ? ((0x00000100U == (0x00000100U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[17U])) 
                        << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[16U])))
                    : ((0x00000200U == (0x00000200U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[19U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[18U])))
                        : ((0x00000400U == (0x00000400U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[21U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[20U])))
                            : ((0x00000800U == (0x00000800U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[23U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[22U])))
                                : ((0x00001000U == 
                                    (0x00001000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[25U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[24U])))
                                    : ((0x00002000U 
                                        == (0x00002000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[27U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[26U])))
                                        : ((0x00004000U 
                                            == (0x00004000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[29U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[28U])))
                                            : (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[31U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[30U]))))))))))
                : (((((((((0x00010000U == (0x00010000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                          | (0x00020000U == (0x00020000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                         | (0x00040000U == (0x00040000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                        | (0x00080000U == (0x00080000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                       | (0x00100000U == (0x00100000U 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                      | (0x00200000U == (0x00200000U 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                     | (0x00400000U == (0x00400000U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                    | (0x00800000U == (0x00800000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))
                    ? ((0x00010000U == (0x00010000U 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[33U])) 
                            << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[32U])))
                        : ((0x00020000U == (0x00020000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[35U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[34U])))
                            : ((0x00040000U == (0x00040000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[37U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[36U])))
                                : ((0x00080000U == 
                                    (0x00080000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[39U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[38U])))
                                    : ((0x00100000U 
                                        == (0x00100000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[41U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[40U])))
                                        : ((0x00200000U 
                                            == (0x00200000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[43U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[42U])))
                                            : ((0x00400000U 
                                                == 
                                                (0x00400000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                                ? (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[45U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[44U])))
                                                : (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[47U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[46U]))))))))))
                    : (((((((((0x01000000U == (0x01000000U 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                              | (0x02000000U == (0x02000000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                             | (0x04000000U == (0x04000000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                            | (0x08000000U == (0x08000000U 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                           | (0x10000000U == (0x10000000U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                          | (0x20000000U == (0x20000000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                         | (0x40000000U == (0x40000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))) 
                        | (0x80000000U == (0x80000000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))
                        ? ((0x01000000U == (0x01000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[49U])) 
                                << 0x00000020U) | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[48U])))
                            : ((0x02000000U == (0x02000000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[51U])) 
                                    << 0x00000020U) 
                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[50U])))
                                : ((0x04000000U == 
                                    (0x04000000U & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                    ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[53U])) 
                                        << 0x00000020U) 
                                       | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[52U])))
                                    : ((0x08000000U 
                                        == (0x08000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                        ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[55U])) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[54U])))
                                        : ((0x10000000U 
                                            == (0x10000000U 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                            ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[57U])) 
                                                << 0x00000020U) 
                                               | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[56U])))
                                            : ((0x20000000U 
                                                == 
                                                (0x20000000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                                ? (
                                                   ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[59U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[58U])))
                                                : (
                                                   (0x40000000U 
                                                    == 
                                                    (0x40000000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))
                                                    ? 
                                                   (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[61U])) 
                                                     << 0x00000020U) 
                                                    | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[60U])))
                                                    : 
                                                   (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[63U])) 
                                                     << 0x00000020U) 
                                                    | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___b_62[62U]))))))))))
                        : 0ULL))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((((((((0x80000000U 
                                                   == 
                                                   (0x80000000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                  << 3U) 
                                                 | ((0x40000000U 
                                                     == 
                                                     (0x40000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                    << 2U)) 
                                                | (((0x20000000U 
                                                     == 
                                                     (0x20000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                    << 1U) 
                                                   | (0x10000000U 
                                                      == 
                                                      (0x10000000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                               << 0x0000000cU) 
                                              | (((((0x08000000U 
                                                     == 
                                                     (0x08000000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                    << 3U) 
                                                   | ((0x04000000U 
                                                       == 
                                                       (0x04000000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                      << 2U)) 
                                                  | (((0x02000000U 
                                                       == 
                                                       (0x02000000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                      << 1U) 
                                                     | (0x01000000U 
                                                        == 
                                                        (0x01000000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                                 << 8U)) 
                                             | ((((((0x00800000U 
                                                     == 
                                                     (0x00800000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                    << 3U) 
                                                   | ((0x00400000U 
                                                       == 
                                                       (0x00400000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                      << 2U)) 
                                                  | (((0x00200000U 
                                                       == 
                                                       (0x00200000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                      << 1U) 
                                                     | (0x00100000U 
                                                        == 
                                                        (0x00100000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                                 << 4U) 
                                                | ((((0x00080000U 
                                                      == 
                                                      (0x00080000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                     << 3U) 
                                                    | ((0x00040000U 
                                                        == 
                                                        (0x00040000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 2U)) 
                                                   | (((0x00020000U 
                                                        == 
                                                        (0x00020000U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 1U) 
                                                      | (0x00010000U 
                                                         == 
                                                         (0x00010000U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))))) 
                                            << 0x00000010U) 
                                           | (((((((0x00008000U 
                                                    == 
                                                    (0x00008000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                   << 3U) 
                                                  | ((0x00004000U 
                                                      == 
                                                      (0x00004000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                     << 2U)) 
                                                 | (((0x00002000U 
                                                      == 
                                                      (0x00002000U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                     << 1U) 
                                                    | (0x00001000U 
                                                       == 
                                                       (0x00001000U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                                << 0x0000000cU) 
                                               | (((((0x00000800U 
                                                      == 
                                                      (0x00000800U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                     << 3U) 
                                                    | ((0x00000400U 
                                                        == 
                                                        (0x00000400U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 2U)) 
                                                   | (((0x00000200U 
                                                        == 
                                                        (0x00000200U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 1U) 
                                                      | (0x00000100U 
                                                         == 
                                                         (0x00000100U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                                  << 8U)) 
                                              | ((((((0x00000080U 
                                                      == 
                                                      (0x00000080U 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                     << 3U) 
                                                    | ((0x00000040U 
                                                        == 
                                                        (0x00000040U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 2U)) 
                                                   | (((0x00000020U 
                                                        == 
                                                        (0x00000020U 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                       << 1U) 
                                                      | (0x00000010U 
                                                         == 
                                                         (0x00000010U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                                  << 4U) 
                                                 | ((((8U 
                                                       == 
                                                       (8U 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                      << 3U) 
                                                     | ((4U 
                                                         == 
                                                         (4U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                        << 2U)) 
                                                    | (((2U 
                                                         == 
                                                         (2U 
                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                        << 1U) 
                                                       | (1U 
                                                          == 
                                                          (1U 
                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))))))))))))) {
        if ((0U != (((((((((0x80000000U == (0x80000000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                           << 3U) | ((0x40000000U == 
                                      (0x40000000U 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                     << 2U)) | (((0x20000000U 
                                                  == 
                                                  (0x20000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                 << 1U) 
                                                | (0x10000000U 
                                                   == 
                                                   (0x10000000U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                        << 0x0000000cU) | (((((0x08000000U 
                                               == (0x08000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                              << 3U) 
                                             | ((0x04000000U 
                                                 == 
                                                 (0x04000000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                << 2U)) 
                                            | (((0x02000000U 
                                                 == 
                                                 (0x02000000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                << 1U) 
                                               | (0x01000000U 
                                                  == 
                                                  (0x01000000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                           << 8U)) 
                      | ((((((0x00800000U == (0x00800000U 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                             << 3U) | ((0x00400000U 
                                        == (0x00400000U 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                       << 2U)) | ((
                                                   (0x00200000U 
                                                    == 
                                                    (0x00200000U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                   << 1U) 
                                                  | (0x00100000U 
                                                     == 
                                                     (0x00100000U 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                          << 4U) | ((((0x00080000U 
                                       == (0x00080000U 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                      << 3U) | ((0x00040000U 
                                                 == 
                                                 (0x00040000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                << 2U)) 
                                    | (((0x00020000U 
                                         == (0x00020000U 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                        << 1U) | (0x00010000U 
                                                  == 
                                                  (0x00010000U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))))) 
                     << 0x00000010U) | (((((((0x00008000U 
                                              == (0x00008000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                             << 3U) 
                                            | ((0x00004000U 
                                                == 
                                                (0x00004000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                               << 2U)) 
                                           | (((0x00002000U 
                                                == 
                                                (0x00002000U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                               << 1U) 
                                              | (0x00001000U 
                                                 == 
                                                 (0x00001000U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                          << 0x0000000cU) 
                                         | (((((0x00000800U 
                                                == 
                                                (0x00000800U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                               << 3U) 
                                              | ((0x00000400U 
                                                  == 
                                                  (0x00000400U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                 << 2U)) 
                                             | (((0x00000200U 
                                                  == 
                                                  (0x00000200U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                 << 1U) 
                                                | (0x00000100U 
                                                   == 
                                                   (0x00000100U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                            << 8U)) 
                                        | ((((((0x00000080U 
                                                == 
                                                (0x00000080U 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                               << 3U) 
                                              | ((0x00000040U 
                                                  == 
                                                  (0x00000040U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                 << 2U)) 
                                             | (((0x00000020U 
                                                  == 
                                                  (0x00000020U 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                 << 1U) 
                                                | (0x00000010U 
                                                   == 
                                                   (0x00000010U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)))) 
                                            << 4U) 
                                           | ((((8U 
                                                 == 
                                                 (8U 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                << 3U) 
                                               | ((4U 
                                                   == 
                                                   (4U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                  << 2U)) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63)) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:7065: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '32'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._3747_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',32,__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___s_63);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 7065, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1403_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___3747___Vfuncout_60;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1198_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1165_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1200_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1436_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1403_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1438_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0185_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1198_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0186_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1436_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1531_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0185_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1533_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1525_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0186_ 
           & (- (::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1527_))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0148_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1531_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0150_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1525_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0148_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0150_;
}

void Vtop___024root___nba_comb__TOP__66(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__66\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*0:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___Vfuncout_72;
    ::QData/*48:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74;
    ::QData/*48:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___Vfuncout_72 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75 
        = (((::QData)((::IData)((((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1595_) 
                                      << 4U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1594_) 
                                                 << 3U) 
                                                | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1593_) 
                                                   << 2U))) 
                                    | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1592_) 
                                        << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1591_))) 
                                   << 0x0000000cU) 
                                  | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1590_) 
                                        << 3U) | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1589_) 
                                                  << 2U)) 
                                      | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1588_) 
                                          << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1587_))) 
                                     << 8U)) | ((((
                                                   ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1586_) 
                                                    << 3U) 
                                                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1585_) 
                                                      << 2U)) 
                                                  | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1584_) 
                                                      << 1U) 
                                                     | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1583_))) 
                                                 << 4U) 
                                                | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1582_) 
                                                     << 3U) 
                                                    | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1581_) 
                                                       << 2U)) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1580_) 
                                                       << 1U) 
                                                      | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1579_))))))) 
            << 0x00000020U) | (::QData)((::IData)((
                                                   ((((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1578_) 
                                                          << 3U) 
                                                         | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1577_) 
                                                            << 2U)) 
                                                        | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1576_) 
                                                            << 1U) 
                                                           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1575_))) 
                                                       << 0x0000000cU) 
                                                      | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1574_) 
                                                            << 3U) 
                                                           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1573_) 
                                                              << 2U)) 
                                                          | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1572_) 
                                                              << 1U) 
                                                             | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1571_))) 
                                                         << 8U)) 
                                                     | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1570_) 
                                                            << 3U) 
                                                           | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1569_) 
                                                              << 2U)) 
                                                          | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1568_) 
                                                              << 1U) 
                                                             | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1567_))) 
                                                         << 4U) 
                                                        | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1566_) 
                                                             << 3U) 
                                                            | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1565_) 
                                                               << 2U)) 
                                                           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1564_) 
                                                               << 1U) 
                                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1563_))))) 
                                                    << 0x00000010U) 
                                                   | (((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1562_) 
                                                           << 3U) 
                                                          | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1561_) 
                                                             << 2U)) 
                                                         | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1560_) 
                                                             << 1U) 
                                                            | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1559_))) 
                                                        << 0x0000000cU) 
                                                       | (((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1558_) 
                                                             << 3U) 
                                                            | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1557_) 
                                                               << 2U)) 
                                                           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1555_) 
                                                               << 1U) 
                                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1553_))) 
                                                          << 8U)) 
                                                      | ((((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1551_) 
                                                             << 3U) 
                                                            | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1550_) 
                                                               << 2U)) 
                                                           | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1549_) 
                                                               << 1U) 
                                                              | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1548_))) 
                                                          << 4U) 
                                                         | ((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1547_) 
                                                              << 3U) 
                                                             | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1546_) 
                                                                << 2U)) 
                                                            | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1545_) 
                                                                << 1U) 
                                                               | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1544_)))))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
        = (((::QData)((::IData)((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0196_) 
                                  << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0217_)))) 
            << 0x00000024U) | (::QData)((::IData)((
                                                   (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0364_) 
                                                     << 0x0000000fU) 
                                                    | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0365_) 
                                                       << 0x0000000eU)) 
                                                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0366_) 
                                                       << 0x0000000dU) 
                                                      | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0367_) 
                                                         << 0x0000000cU))))));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___Vfuncout_72 
        = (1U & (((((((((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                        | (2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                       | (4ULL == (4ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                      | (8ULL == (8ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                     | (0x0000000000000010ULL == (0x0000000000000010ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                    | (0x0000000000000020ULL == (0x0000000000000020ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                   | (0x0000000000000040ULL == (0x0000000000000040ULL 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                  | (0x0000000000000080ULL == (0x0000000000000080ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                  ? ((1ULL == (1ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                      ? (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74)
                      : ((2ULL == (2ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                          ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                       >> 1U)) : ((4ULL 
                                                   == 
                                                   (4ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 2U))
                                                   : 
                                                  ((8ULL 
                                                    == 
                                                    (8ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 3U))
                                                    : 
                                                   ((0x0000000000000010ULL 
                                                     == 
                                                     (0x0000000000000010ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                  >> 4U))
                                                     : 
                                                    ((0x0000000000000020ULL 
                                                      == 
                                                      (0x0000000000000020ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                   >> 5U))
                                                      : 
                                                     ((0x0000000000000040ULL 
                                                       == 
                                                       (0x0000000000000040ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                       ? (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                    >> 6U))
                                                       : (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                    >> 7U)))))))))
                  : (((((((((0x0000000000000100ULL 
                             == (0x0000000000000100ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                            | (0x0000000000000200ULL 
                               == (0x0000000000000200ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                           | (0x0000000000000400ULL 
                              == (0x0000000000000400ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                          | (0x0000000000000800ULL 
                             == (0x0000000000000800ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                         | (0x0000000000001000ULL == 
                            (0x0000000000001000ULL 
                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                        | (0x0000000000002000ULL == 
                           (0x0000000000002000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                       | (0x0000000000004000ULL == 
                          (0x0000000000004000ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                      | (0x0000000000008000ULL == (0x0000000000008000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                      ? ((0x0000000000000100ULL == 
                          (0x0000000000000100ULL & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                          ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                       >> 8U)) : ((0x0000000000000200ULL 
                                                   == 
                                                   (0x0000000000000200ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 9U))
                                                   : 
                                                  ((0x0000000000000400ULL 
                                                    == 
                                                    (0x0000000000000400ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 0x0aU))
                                                    : 
                                                   ((0x0000000000000800ULL 
                                                     == 
                                                     (0x0000000000000800ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                  >> 0x0bU))
                                                     : 
                                                    ((0x0000000000001000ULL 
                                                      == 
                                                      (0x0000000000001000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                   >> 0x0cU))
                                                      : 
                                                     ((0x0000000000002000ULL 
                                                       == 
                                                       (0x0000000000002000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                       ? (::IData)(
                                                                   (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                    >> 0x0dU))
                                                       : 
                                                      ((0x0000000000004000ULL 
                                                        == 
                                                        (0x0000000000004000ULL 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                        ? (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                     >> 0x0eU))
                                                        : (::IData)(
                                                                    (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                     >> 0x0fU)))))))))
                      : (((((((((0x0000000000010000ULL 
                                 == (0x0000000000010000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                | (0x0000000000020000ULL 
                                   == (0x0000000000020000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                               | (0x0000000000040000ULL 
                                  == (0x0000000000040000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                              | (0x0000000000080000ULL 
                                 == (0x0000000000080000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                             | (0x0000000000100000ULL 
                                == (0x0000000000100000ULL 
                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                            | (0x0000000000200000ULL 
                               == (0x0000000000200000ULL 
                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                           | (0x0000000000400000ULL 
                              == (0x0000000000400000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                          | (0x0000000000800000ULL 
                             == (0x0000000000800000ULL 
                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                          ? ((0x0000000000010000ULL 
                              == (0x0000000000010000ULL 
                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                              ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                           >> 0x10U))
                              : ((0x0000000000020000ULL 
                                  == (0x0000000000020000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                  ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                               >> 0x11U))
                                  : ((0x0000000000040000ULL 
                                      == (0x0000000000040000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                      ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                   >> 0x12U))
                                      : ((0x0000000000080000ULL 
                                          == (0x0000000000080000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                       >> 0x13U))
                                          : ((0x0000000000100000ULL 
                                              == (0x0000000000100000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                           >> 0x14U))
                                              : ((0x0000000000200000ULL 
                                                  == 
                                                  (0x0000000000200000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                               >> 0x15U))
                                                  : 
                                                 ((0x0000000000400000ULL 
                                                   == 
                                                   (0x0000000000400000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 0x16U))
                                                   : (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 0x17U)))))))))
                          : (((((((((0x0000000001000000ULL 
                                     == (0x0000000001000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                    | (0x0000000002000000ULL 
                                       == (0x0000000002000000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                   | (0x0000000004000000ULL 
                                      == (0x0000000004000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                  | (0x0000000008000000ULL 
                                     == (0x0000000008000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                 | (0x0000000010000000ULL 
                                    == (0x0000000010000000ULL 
                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                | (0x0000000020000000ULL 
                                   == (0x0000000020000000ULL 
                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                               | (0x0000000040000000ULL 
                                  == (0x0000000040000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                              | (0x0000000080000000ULL 
                                 == (0x0000000080000000ULL 
                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                              ? ((0x0000000001000000ULL 
                                  == (0x0000000001000000ULL 
                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                  ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                               >> 0x18U))
                                  : ((0x0000000002000000ULL 
                                      == (0x0000000002000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                      ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                   >> 0x19U))
                                      : ((0x0000000004000000ULL 
                                          == (0x0000000004000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                       >> 0x1aU))
                                          : ((0x0000000008000000ULL 
                                              == (0x0000000008000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                           >> 0x1bU))
                                              : ((0x0000000010000000ULL 
                                                  == 
                                                  (0x0000000010000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                               >> 0x1cU))
                                                  : 
                                                 ((0x0000000020000000ULL 
                                                   == 
                                                   (0x0000000020000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 0x1dU))
                                                   : 
                                                  ((0x0000000040000000ULL 
                                                    == 
                                                    (0x0000000040000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 0x1eU))
                                                    : (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 0x1fU)))))))))
                              : (((((((((0x0000000100000000ULL 
                                         == (0x0000000100000000ULL 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                        | (0x0000000200000000ULL 
                                           == (0x0000000200000000ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                       | (0x0000000400000000ULL 
                                          == (0x0000000400000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                      | (0x0000000800000000ULL 
                                         == (0x0000000800000000ULL 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                     | (0x0000001000000000ULL 
                                        == (0x0000001000000000ULL 
                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                    | (0x0000002000000000ULL 
                                       == (0x0000002000000000ULL 
                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                   | (0x0000004000000000ULL 
                                      == (0x0000004000000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                  | (0x0000008000000000ULL 
                                     == (0x0000008000000000ULL 
                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                                  ? ((0x0000000100000000ULL 
                                      == (0x0000000100000000ULL 
                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                      ? (::IData)((__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                   >> 0x20U))
                                      : ((0x0000000200000000ULL 
                                          == (0x0000000200000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                       >> 0x21U))
                                          : ((0x0000000400000000ULL 
                                              == (0x0000000400000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                           >> 0x22U))
                                              : ((0x0000000800000000ULL 
                                                  == 
                                                  (0x0000000800000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                               >> 0x23U))
                                                  : 
                                                 ((0x0000001000000000ULL 
                                                   == 
                                                   (0x0000001000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 0x24U))
                                                   : 
                                                  ((0x0000002000000000ULL 
                                                    == 
                                                    (0x0000002000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 0x25U))
                                                    : 
                                                   ((0x0000004000000000ULL 
                                                     == 
                                                     (0x0000004000000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                  >> 0x26U))
                                                     : (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                  >> 0x27U)))))))))
                                  : (((((((((0x0000010000000000ULL 
                                             == (0x0000010000000000ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                            | (0x0000020000000000ULL 
                                               == (0x0000020000000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                           | (0x0000040000000000ULL 
                                              == (0x0000040000000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                          | (0x0000080000000000ULL 
                                             == (0x0000080000000000ULL 
                                                 & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                         | (0x0000100000000000ULL 
                                            == (0x0000100000000000ULL 
                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                        | (0x0000200000000000ULL 
                                           == (0x0000200000000000ULL 
                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                       | (0x0000400000000000ULL 
                                          == (0x0000400000000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))) 
                                      | (0x0000800000000000ULL 
                                         == (0x0000800000000000ULL 
                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))
                                      ? ((0x0000010000000000ULL 
                                          == (0x0000010000000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                          ? (::IData)(
                                                      (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                       >> 0x28U))
                                          : ((0x0000020000000000ULL 
                                              == (0x0000020000000000ULL 
                                                  & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                              ? (::IData)(
                                                          (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                           >> 0x29U))
                                              : ((0x0000040000000000ULL 
                                                  == 
                                                  (0x0000040000000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                  ? (::IData)(
                                                              (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                               >> 0x2aU))
                                                  : 
                                                 ((0x0000080000000000ULL 
                                                   == 
                                                   (0x0000080000000000ULL 
                                                    & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                   ? (::IData)(
                                                               (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                >> 0x2bU))
                                                   : 
                                                  ((0x0000100000000000ULL 
                                                    == 
                                                    (0x0000100000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                    ? (::IData)(
                                                                (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                 >> 0x2cU))
                                                    : 
                                                   ((0x0000200000000000ULL 
                                                     == 
                                                     (0x0000200000000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                     ? (::IData)(
                                                                 (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                  >> 0x2dU))
                                                     : 
                                                    ((0x0000400000000000ULL 
                                                      == 
                                                      (0x0000400000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75))
                                                      ? (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                   >> 0x2eU))
                                                      : (::IData)(
                                                                  (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                                   >> 0x2fU)))))))))
                                      : ((0x0001000000000000ULL 
                                          != (0x0001000000000000ULL 
                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                         || (1U & (::IData)(
                                                            (__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___b_74 
                                                             >> 0x30U)))))))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_Q((((::QData)((::IData)(
                                                                (((((((0x0001000000000000ULL 
                                                                       == 
                                                                       (0x0001000000000000ULL 
                                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                      << 4U) 
                                                                     | (((0x0000800000000000ULL 
                                                                          == 
                                                                          (0x0000800000000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 3U) 
                                                                        | ((0x0000400000000000ULL 
                                                                            == 
                                                                            (0x0000400000000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 2U))) 
                                                                    | (((0x0000200000000000ULL 
                                                                         == 
                                                                         (0x0000200000000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 1U) 
                                                                       | (0x0000100000000000ULL 
                                                                          == 
                                                                          (0x0000100000000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((0x0000080000000000ULL 
                                                                         == 
                                                                         (0x0000080000000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 3U) 
                                                                       | ((0x0000040000000000ULL 
                                                                           == 
                                                                           (0x0000040000000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 2U)) 
                                                                      | (((0x0000020000000000ULL 
                                                                           == 
                                                                           (0x0000020000000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 1U) 
                                                                         | (0x0000010000000000ULL 
                                                                            == 
                                                                            (0x0000010000000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                     << 8U)) 
                                                                 | ((((((0x0000008000000000ULL 
                                                                         == 
                                                                         (0x0000008000000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 3U) 
                                                                       | ((0x0000004000000000ULL 
                                                                           == 
                                                                           (0x0000004000000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 2U)) 
                                                                      | (((0x0000002000000000ULL 
                                                                           == 
                                                                           (0x0000002000000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 1U) 
                                                                         | (0x0000001000000000ULL 
                                                                            == 
                                                                            (0x0000001000000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                     << 4U) 
                                                                    | ((((0x0000000800000000ULL 
                                                                          == 
                                                                          (0x0000000800000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 3U) 
                                                                        | ((0x0000000400000000ULL 
                                                                            == 
                                                                            (0x0000000400000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 2U)) 
                                                                       | (((0x0000000200000000ULL 
                                                                            == 
                                                                            (0x0000000200000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 1U) 
                                                                          | (0x0000000100000000ULL 
                                                                             == 
                                                                             (0x0000000100000000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))))) 
                                            << 0x00000020U) 
                                           | (::QData)((::IData)(
                                                                 (((((((((0x0000000080000000ULL 
                                                                          == 
                                                                          (0x0000000080000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 3U) 
                                                                        | ((0x0000000040000000ULL 
                                                                            == 
                                                                            (0x0000000040000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 2U)) 
                                                                       | (((0x0000000020000000ULL 
                                                                            == 
                                                                            (0x0000000020000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 1U) 
                                                                          | (0x0000000010000000ULL 
                                                                             == 
                                                                             (0x0000000010000000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                      << 0x0000000cU) 
                                                                     | (((((0x0000000008000000ULL 
                                                                            == 
                                                                            (0x0000000008000000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 3U) 
                                                                          | ((0x0000000004000000ULL 
                                                                              == 
                                                                              (0x0000000004000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000002000000ULL 
                                                                              == 
                                                                              (0x0000000002000000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                             << 1U) 
                                                                            | (0x0000000001000000ULL 
                                                                               == 
                                                                               (0x0000000001000000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                        << 8U)) 
                                                                    | ((((((0x0000000000800000ULL 
                                                                            == 
                                                                            (0x0000000000800000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 3U) 
                                                                          | ((0x0000000000400000ULL 
                                                                              == 
                                                                              (0x0000000000400000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                             << 2U)) 
                                                                         | (((0x0000000000200000ULL 
                                                                              == 
                                                                              (0x0000000000200000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                             << 1U) 
                                                                            | (0x0000000000100000ULL 
                                                                               == 
                                                                               (0x0000000000100000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                        << 4U) 
                                                                       | ((((0x0000000000080000ULL 
                                                                             == 
                                                                             (0x0000000000080000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000040000ULL 
                                                                               == 
                                                                               (0x0000000000040000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000020000ULL 
                                                                               == 
                                                                               (0x0000000000020000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 1U) 
                                                                             | (0x0000000000010000ULL 
                                                                                == 
                                                                                (0x0000000000010000ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((((0x0000000000008000ULL 
                                                                           == 
                                                                           (0x0000000000008000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 3U) 
                                                                         | ((0x0000000000004000ULL 
                                                                             == 
                                                                             (0x0000000000004000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                            << 2U)) 
                                                                        | (((0x0000000000002000ULL 
                                                                             == 
                                                                             (0x0000000000002000ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                            << 1U) 
                                                                           | (0x0000000000001000ULL 
                                                                              == 
                                                                              (0x0000000000001000ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                       << 0x0000000cU) 
                                                                      | (((((0x0000000000000800ULL 
                                                                             == 
                                                                             (0x0000000000000800ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000400ULL 
                                                                               == 
                                                                               (0x0000000000000400ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000200ULL 
                                                                               == 
                                                                               (0x0000000000000200ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000100ULL 
                                                                                == 
                                                                                (0x0000000000000100ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                         << 8U)) 
                                                                     | ((((((0x0000000000000080ULL 
                                                                             == 
                                                                             (0x0000000000000080ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                            << 3U) 
                                                                           | ((0x0000000000000040ULL 
                                                                               == 
                                                                               (0x0000000000000040ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 2U)) 
                                                                          | (((0x0000000000000020ULL 
                                                                               == 
                                                                               (0x0000000000000020ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                              << 1U) 
                                                                             | (0x0000000000000010ULL 
                                                                                == 
                                                                                (0x0000000000000010ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                         << 4U) 
                                                                        | ((((8ULL 
                                                                              == 
                                                                              (8ULL 
                                                                               & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                             << 3U) 
                                                                            | ((4ULL 
                                                                                == 
                                                                                (4ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                               << 2U)) 
                                                                           | (((2ULL 
                                                                                == 
                                                                                (2ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                               << 1U) 
                                                                              | (1ULL 
                                                                                == 
                                                                                (1ULL 
                                                                                & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))))))))))))) {
        if ((0ULL != (((::QData)((::IData)((((((((0x0001000000000000ULL 
                                                  == 
                                                  (0x0001000000000000ULL 
                                                   & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                 << 4U) 
                                                | (((0x0000800000000000ULL 
                                                     == 
                                                     (0x0000800000000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                    << 3U) 
                                                   | ((0x0000400000000000ULL 
                                                       == 
                                                       (0x0000400000000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                      << 2U))) 
                                               | (((0x0000200000000000ULL 
                                                    == 
                                                    (0x0000200000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                   << 1U) 
                                                  | (0x0000100000000000ULL 
                                                     == 
                                                     (0x0000100000000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                              << 0x0000000cU) 
                                             | (((((0x0000080000000000ULL 
                                                    == 
                                                    (0x0000080000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                   << 3U) 
                                                  | ((0x0000040000000000ULL 
                                                      == 
                                                      (0x0000040000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                     << 2U)) 
                                                 | (((0x0000020000000000ULL 
                                                      == 
                                                      (0x0000020000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                     << 1U) 
                                                    | (0x0000010000000000ULL 
                                                       == 
                                                       (0x0000010000000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                << 8U)) 
                                            | ((((((0x0000008000000000ULL 
                                                    == 
                                                    (0x0000008000000000ULL 
                                                     & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                   << 3U) 
                                                  | ((0x0000004000000000ULL 
                                                      == 
                                                      (0x0000004000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                     << 2U)) 
                                                 | (((0x0000002000000000ULL 
                                                      == 
                                                      (0x0000002000000000ULL 
                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                     << 1U) 
                                                    | (0x0000001000000000ULL 
                                                       == 
                                                       (0x0000001000000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                << 4U) 
                                               | ((((0x0000000800000000ULL 
                                                     == 
                                                     (0x0000000800000000ULL 
                                                      & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                    << 3U) 
                                                   | ((0x0000000400000000ULL 
                                                       == 
                                                       (0x0000000400000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                      << 2U)) 
                                                  | (((0x0000000200000000ULL 
                                                       == 
                                                       (0x0000000200000000ULL 
                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                      << 1U) 
                                                     | (0x0000000100000000ULL 
                                                        == 
                                                        (0x0000000100000000ULL 
                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))))) 
                       << 0x00000020U) | (::QData)((::IData)(
                                                             (((((((((0x0000000080000000ULL 
                                                                      == 
                                                                      (0x0000000080000000ULL 
                                                                       & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                     << 3U) 
                                                                    | ((0x0000000040000000ULL 
                                                                        == 
                                                                        (0x0000000040000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                       << 2U)) 
                                                                   | (((0x0000000020000000ULL 
                                                                        == 
                                                                        (0x0000000020000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                       << 1U) 
                                                                      | (0x0000000010000000ULL 
                                                                         == 
                                                                         (0x0000000010000000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                  << 0x0000000cU) 
                                                                 | (((((0x0000000008000000ULL 
                                                                        == 
                                                                        (0x0000000008000000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                       << 3U) 
                                                                      | ((0x0000000004000000ULL 
                                                                          == 
                                                                          (0x0000000004000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000002000000ULL 
                                                                          == 
                                                                          (0x0000000002000000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 1U) 
                                                                        | (0x0000000001000000ULL 
                                                                           == 
                                                                           (0x0000000001000000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                    << 8U)) 
                                                                | ((((((0x0000000000800000ULL 
                                                                        == 
                                                                        (0x0000000000800000ULL 
                                                                         & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                       << 3U) 
                                                                      | ((0x0000000000400000ULL 
                                                                          == 
                                                                          (0x0000000000400000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 2U)) 
                                                                     | (((0x0000000000200000ULL 
                                                                          == 
                                                                          (0x0000000000200000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 1U) 
                                                                        | (0x0000000000100000ULL 
                                                                           == 
                                                                           (0x0000000000100000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                    << 4U) 
                                                                   | ((((0x0000000000080000ULL 
                                                                         == 
                                                                         (0x0000000000080000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000040000ULL 
                                                                           == 
                                                                           (0x0000000000040000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000020000ULL 
                                                                           == 
                                                                           (0x0000000000020000ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 1U) 
                                                                         | (0x0000000000010000ULL 
                                                                            == 
                                                                            (0x0000000000010000ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))) 
                                                               << 0x00000010U) 
                                                              | (((((((0x0000000000008000ULL 
                                                                       == 
                                                                       (0x0000000000008000ULL 
                                                                        & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                      << 3U) 
                                                                     | ((0x0000000000004000ULL 
                                                                         == 
                                                                         (0x0000000000004000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 2U)) 
                                                                    | (((0x0000000000002000ULL 
                                                                         == 
                                                                         (0x0000000000002000ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 1U) 
                                                                       | (0x0000000000001000ULL 
                                                                          == 
                                                                          (0x0000000000001000ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                   << 0x0000000cU) 
                                                                  | (((((0x0000000000000800ULL 
                                                                         == 
                                                                         (0x0000000000000800ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000400ULL 
                                                                           == 
                                                                           (0x0000000000000400ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000200ULL 
                                                                           == 
                                                                           (0x0000000000000200ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000100ULL 
                                                                            == 
                                                                            (0x0000000000000100ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                     << 8U)) 
                                                                 | ((((((0x0000000000000080ULL 
                                                                         == 
                                                                         (0x0000000000000080ULL 
                                                                          & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                        << 3U) 
                                                                       | ((0x0000000000000040ULL 
                                                                           == 
                                                                           (0x0000000000000040ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 2U)) 
                                                                      | (((0x0000000000000020ULL 
                                                                           == 
                                                                           (0x0000000000000020ULL 
                                                                            & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                          << 1U) 
                                                                         | (0x0000000000000010ULL 
                                                                            == 
                                                                            (0x0000000000000010ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))) 
                                                                     << 4U) 
                                                                    | ((((8ULL 
                                                                          == 
                                                                          (8ULL 
                                                                           & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                         << 3U) 
                                                                        | ((4ULL 
                                                                            == 
                                                                            (4ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 2U)) 
                                                                       | (((2ULL 
                                                                            == 
                                                                            (2ULL 
                                                                             & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)) 
                                                                           << 1U) 
                                                                          | (1ULL 
                                                                             == 
                                                                             (1ULL 
                                                                              & __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75)))))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:7830: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '49'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.cs_registers_i._4269_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',49,__Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___s_75);
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 7830, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1543_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___4269___Vfuncout_72;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0163_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1543_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1543_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0022_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0163_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0384_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_write));
}

void Vtop___024root___nba_comb__TOP__67(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__67\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396;
    ::VlWide<3>/*67:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399;
    ::QData/*33:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___Vfuncout_408;
    ::VlWide<3>/*67:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410;
    ::CData/*1:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411;
    ::QData/*32:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___Vfuncout_436;
    ::QData/*32:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___a_437;
    ::VlWide<7>/*197:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438;
    ::CData/*5:0*/ __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439;
    // Body
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396 = 0;
    VL_ZERO_W(68, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___Vfuncout_408 = 0;
    VL_ZERO_W(68, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___Vfuncout_436 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___a_437 = 0;
    VL_ZERO_W(198, __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438);
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439 = 0;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___207_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[3U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[4U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[5U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[6U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___208_[6U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___a_437 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___209_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___Vfuncout_436 
        = (0x00000001ffffffffULL & ((0x00000020U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                     ? ((0x00000010U 
                                         & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                         ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                             ? ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                    << 0x0000003dU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                       << 0x0000001dU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                         >> 3U))))))
                                             : ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U])) 
                                                    << 0x0000003cU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U])) 
                                                       << 0x0000001cU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                         >> 4U)))))))
                                         : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                             ? ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                    << 0x0000003dU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                       << 0x0000001dU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                         >> 3U))))))
                                             : ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[6U])) 
                                                    << 0x0000003bU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[6U])) 
                                                       << 0x0000001bU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U])) 
                                                         >> 5U))))))))
                                     : ((0x00000010U 
                                         & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                         ? ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                             ? ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                    << 0x0000003dU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                       << 0x0000001dU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                         >> 3U))))))
                                             : ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U])) 
                                                    << 0x0000003cU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[5U])) 
                                                       << 0x0000001cU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                         >> 4U)))))))
                                         : ((8U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                             ? ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                    << 0x0000003dU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[4U])) 
                                                       << 0x0000001dU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                         >> 3U))))))
                                             : ((4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                 ? 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                    << 0x0000003eU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[3U])) 
                                                       << 0x0000001eU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                         >> 2U)))))
                                                 : 
                                                ((2U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                  ? 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                    << 0x0000003fU) 
                                                   | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[2U])) 
                                                       << 0x0000001fU) 
                                                      | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                         >> 1U))))
                                                  : 
                                                 ((1U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))
                                                   ? 
                                                  (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[1U])) 
                                                    << 0x00000020U) 
                                                   | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___b_438[0U])))
                                                   : __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___a_437)))))));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x20U 
                                              == (0x20U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                             << 5U) 
                                            | (((0x10U 
                                                 == 
                                                 (0x10U 
                                                  & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                                << 4U) 
                                               | ((8U 
                                                   == 
                                                   (8U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                                  << 3U))) 
                                           | (((4U 
                                                == 
                                                (4U 
                                                 & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                               << 2U) 
                                              | (((2U 
                                                   == 
                                                   (2U 
                                                    & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                                  << 1U) 
                                                 | (1U 
                                                    == 
                                                    (1U 
                                                     & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439)))))))))))) {
        if ((0U != ((((0x20U == (0x20U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                      << 5U) | (((0x10U == (0x10U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                 << 4U) | ((8U == (8U 
                                                   & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                           << 3U))) 
                    | (((4U == (4U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                        << 2U) | (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439))) 
                                   << 1U) | (1U == 
                                             (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439)))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19236: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '6'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._829_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',6,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___s_439));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19236, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___206_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___829___Vfuncout_436;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___310_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___311_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___Vfuncout_408 
        = (0x00000003ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[2U])) 
                                             << 0x0000003eU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[2U])) 
                                                << 0x0000001eU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___b_410[1U])) 
                                                  >> 2U)))
                                         : 0ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19112: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._798_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___s_411));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19112, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___309_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___798___Vfuncout_408;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___662_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___206_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___620_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___309_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___034_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___662_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_operand_b_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___662_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___045_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___620_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand2 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___620_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__alu_operand_b_o;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___017_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___408_ 
        = (((::QData)((::IData)((1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand2 
                                                 >> 0x00000021U))))) 
            << 0x00000022U) | vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__gen_mult_single_cycle__02esummand2);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_operand_b_i 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___407_ 
        = (0x00000007ffffffffULL & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___409_ 
                                    + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___408_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___065_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___407_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___406_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___065_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___404_ 
        = (0x00000007ffffffffULL & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___406_ 
                                    + vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___405_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___404_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_signed 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___361_ 
        = (0x00000003ffffffffULL & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___362_ 
        = (::QData)((::IData)((((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___566_)))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_ext 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_signed;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___359_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___360_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___361_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___362_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__unused_mac_res_ext 
        = (1U & (::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_ext 
                           >> 0x00000022U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res 
        = (0x00000003ffffffffULL & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_ext);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___597_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___359_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___356_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___597_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___353_ 
        = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___356_ 
           & (- (::QData)((::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___354_)))))));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___599_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___353_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___058_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___599_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[0U] 
        = (::IData)((0x00000003ffffffffULL & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[1U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___058_) 
            << 2U) | (::IData)(((0x00000003ffffffffULL 
                                 & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___066_) 
                                >> 0x00000020U)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[2U] 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___058_) 
            >> 0x0000001eU) | ((::IData)((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___058_ 
                                          >> 0x00000020U)) 
                               << 2U));
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___328_;
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[0U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[0U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[1U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U] 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___329_[2U];
    __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396 
        = (0x00000003ffffffffULL & ((1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))
                                     ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U])) 
                                         << 0x00000020U) 
                                        | (::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[0U])))
                                     : ((2U == (2U 
                                                & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))
                                         ? (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U])) 
                                             << 0x0000003eU) 
                                            | (((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[2U])) 
                                                << 0x0000001eU) 
                                               | ((::QData)((::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___b_398[1U])) 
                                                  >> 2U)))
                                         : 0ULL)));
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U == 
                                             (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399))) 
                                            << 1U) 
                                           | (1U == 
                                              (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))))))))) {
        if ((0U != (((2U == (2U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399))) 
                     << 1U) | (1U == (1U & (::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:19067: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.ex_block_i.genblk3.gen_multdiv_fast.multdiv_i._792_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___s_399));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 19067, "");
            }
        }
    }
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___327_ 
        = __Vfunc_encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___792___Vfuncout_396;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___327_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___611_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___020_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___048_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___532_ 
        = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___538_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__mac_res_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___529_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___530_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___531_
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___532_);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___714_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___529_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_result_o 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___714_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__multdiv_result 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__multdiv_result_o;
}
