// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___nba_comb__TOP__116(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__116\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    ::CData/*2:0*/ __Vdfg_Regularize_11418;
    ::CData/*0:0*/ __Vdfg_Regularize_11431;
    ::CData/*0:0*/ __Vdfg_Regularize_11432;
    // Body
    __Vdfg_Regularize_11418 = 0;
    __Vdfg_Regularize_11431 = 0;
    __Vdfg_Regularize_11432 = 0;
    __Vdfg_Regularize_11432 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__id_in_ready_i) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_valid));
    __Vdfg_Regularize_11431 = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_valid_o) 
                               & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_ready_i));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_ 
        = __Vdfg_Regularize_11432;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___021_ 
        = __Vdfg_Regularize_11432;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___027_ 
        = __Vdfg_Regularize_11431;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___028_ 
        = __Vdfg_Regularize_11431;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___018_) 
           & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___029_));
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___019_) 
           | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_d;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_en 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___069_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___029_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_d 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___011_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___036_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___044_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___046_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___048_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_id_pipe_reg_we;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___050_ 
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___036_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_id_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___038_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__illegal_c_insn_id_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___040_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err_plus2)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_plus2_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___042_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_err)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_fetch_err_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___044_)
            ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed)
            : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_is_compressed_id_o));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___045_ 
        = (0x0000ffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___046_)
                           ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_rdata
                           : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_c_id_o)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___047_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___048_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_alu_id_o);
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___049_ 
        = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___050_)
            ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_decompressed
            : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_rdata_id_o);
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
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___012_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___035_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___003_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___037_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___005_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___039_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___004_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___041_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___006_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___043_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___009_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___045_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___008_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___047_;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___010_ 
        = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___049_;
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
    __Vdfg_Regularize_11418 = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___043_) 
                                << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___034_) 
                                           << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___033_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___044_) 
            << 2U) | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___074_) 
                       << 1U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___073_)));
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = __Vdfg_Regularize_11418;
    vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___011_ 
        = __Vdfg_Regularize_11418;
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

void Vtop___024root___nba_comb__TOP__128(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__128\n"); );
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
                VL_WRITEF_NX("[%0t] %%Error: driver_39.v:16459: Assertion failed in %m: synthesis parallel_case, but multiple matches found for '10'h%X'\n",4, 'M',vlSymsp->__Vm_topNames[1].c_str(),"u_dut.id_stage_i.controller_i._1913_", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',10,(::IData)(__Vfunc_encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1913___s_323));
                VL_STOP_MT("/home/andre/ibex-crt-llm-coverage/crt-coverage/cpu/encarsia/converted/driver_39.v", 16459, "");
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

void Vtop___024root___nba_comb__TOP__130(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__130\n"); );
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

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root____VnbaClosureFunc_0(Vtop__Syms* __restrict vlSymsp, VlClosure<Vtop__Syms>* __Vclosurep);
void Vtop___024root____VnbaClosureFunc_1(Vtop__Syms* __restrict vlSymsp, VlClosure<Vtop__Syms>* __Vclosurep);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__23(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__24(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__28(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__31(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__32(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__34(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__41(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__44(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__47(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__48(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__50(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__52(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__53(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__54(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__56(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__57(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__65(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__66(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__67(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__69(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__70(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__71(Vtop___024root* vlSelf);
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
void Vtop___024root___nba_comb__TOP__85(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__86(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__87(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__92(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__93(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__96(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__97(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__99(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__110(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__113(Vtop___024root* vlSelf);

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
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___074_ 
                = (0xfffffffcU & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q 
                                  & (- (::IData)((1U 
                                                  & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_mispredict_i)))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___076_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_mispredict_i))))));
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
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___034_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_new_id_q;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rd_data_o;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rd_data_o;
        }
    }
    if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__4
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___013_));
            if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rst_ni) {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_q 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___080_;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___079_;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___081_;
            } else {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_q = 0U;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q = 0U;
            }
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___045_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___042_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___044_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___048_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_discard_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___046_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___047_ 
                = (1U & (~ ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
                            >> 1U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___073_ 
                = (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___040_ 
                = (1U & (~ ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
                            >> 1U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_rev 
                = ((2U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
                          << 1U)) | (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
                                           >> 1U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___052_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_err_i) 
                         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___057_ 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_rvalid_i) 
                         | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_pmp_err_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_or_pmp_err 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___052_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___012_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___057_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_err_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_or_pmp_err;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rvalid_or_pmp_err 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___012_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___034_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rvalid_or_pmp_err) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___048_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_valid 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___034_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_valid_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_valid;
        }
    }
    if ((((1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rd_data_o;
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
        }
    }
    if ((((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___101_ 
                = (1U & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__out_addr_o 
                         >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__fetch_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_if_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__if_instr_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__pc_if_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__pc_if;
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
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT___2_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eu_tselect_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tselect_rdata 
                = (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0285_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0287_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etselect_q)));
        }
    }
    if ((((0xc000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__14
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rst_ni) 
                   && (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___2_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_control 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tmatch_control_rdata 
                = (0x28001048U | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_control) 
                                  << 2U));
        }
    }
    if ((((0x00000c0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__15
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rst_ni)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT___2_)
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0099_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_d;
        }
    }
    if ((((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((((0x000000000000000cULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__17
            if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__rst_ni) {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0390_;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0637_;
            } else {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
            }
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                = (0xffffe000U | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_id_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0370_ 
                = (1U & (~ vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0371_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 2U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0372_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 3U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0373_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 4U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0374_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 5U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0375_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 6U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0376_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 7U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0377_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 8U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0378_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 9U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0379_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 0x0000000aU)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0380_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 0x0000000bU)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0381_ 
                = (1U & (~ (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcountinhibit 
                            >> 0x0000000cU)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_id 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_id_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0256_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0370_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__priv_mode_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__priv_mode_id;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0291_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0256_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__priv_mode_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__priv_mode_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_inc_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0291_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0223_ 
                = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__priv_mode_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0249_ 
                = (3U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__priv_mode_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0221_ 
                = (3U == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__priv_mode_i));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0222_ 
                = (1U & (~ (0U != (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__priv_mode_i))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___12_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_inc_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1350_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0223_)
                    ? 0x0bU : 8U);
        }
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0100_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_d 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 2U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_tw_o 
                = (1U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_mie_o 
                = (1U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                         >> 5U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_tw 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_tw_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_mie 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mstatus_mie_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_tw_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_tw;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_mie_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mstatus_mie;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_tw_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_tw_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mstatus_mie_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mstatus_mie_i;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__cpuctrl_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rd_data_o;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___145_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___182_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___485_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___476_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT__data_ind_timing_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___500_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___145_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___484_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___485_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___475_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___476_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___564_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___484_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___565_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___475_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___483_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___564_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___474_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___565_;
        }
    }
    if ((((0x0000000003000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__20
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rd_data_o;
        }
    }
    if ((((0x0000000030000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__21
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mscratch_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rd_data_o;
        }
    }
    if ((((0x0000000300000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__22
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch1_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rd_data_o;
        }
    }
    if ((((0x0000000c00000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__23
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dscratch0_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rd_data_o;
        }
    }
    if ((((0x0000003000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__24
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rd_data_o;
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
            // Inlined CFunc: _nba_sequent__TOP__25
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0102_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mepc_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mepc 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mepc_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mepc_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mepc;
        }
    }
    if ((((0x000c000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__26
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT___2_
                    : 1U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtvec_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtvec_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtvec;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__unused_csr_mtvec 
                = (0x000000ffU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__csr_mtvec_i);
        }
    }
    if ((((0x000000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_sequent__TOP__27
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rst_ni)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_
                    : 0U);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rd_data_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0339_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rd_data_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0021_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0339_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0339_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_value 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__tmatch_value_rdata 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eselected_tmatch_value;
        }
    }
    if ((((0x0300000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        Vtop___024root___nba_sequent__TOP__28(vlSelf);
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rd_data_o;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_single_step_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreakm_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__debug_ebreaku_i;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0314_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b9__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0033_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0314_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b12__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0314_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0313_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b8__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0032_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0313_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b11__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0313_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0312_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b7__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0031_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0312_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b10__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0312_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0311_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b6__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0061_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0311_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b9__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0311_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0310_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b5__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0060_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0310_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b8__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0310_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0309_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b4__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0059_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0309_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b7__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0309_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0308_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b3__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0058_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0308_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b6__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0308_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0307_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b2__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0057_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0307_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b5__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0307_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0306_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b1__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0056_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0306_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b4__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0306_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0305_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_cntrs__05b0__05d__02egen_imp__02emcounters_variable_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0055_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0305_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b3__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0305_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0304_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0052_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0304_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b2__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0304_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0303_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_val_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0030_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0303_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mhpmcounter__05b0__05d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0303_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___189_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_store_wb_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__outstanding_load_wb_i));
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((((0x0000000000001001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__1
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___132_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_wb_i) 
                   == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_b_o));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___131_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_waddr_wb_i) 
                   == (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_raddr_a_o));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___102_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___132_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___488_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___101_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___131_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___487_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___102_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___101_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_b_wb_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_a_wb_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_b_wb_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_rd_a_wb_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_rd_b_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_b_wb_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__gen_no_regfile_ecc__02eunused_rf_rd_a_wb_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_rd_a_wb_match;
        }
    }
    if ((((0x000000000000d000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__2
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___30_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__lsu_resp_valid_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___21_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___30_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT___25_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__wb_stage_i__DOT__g_writeback_stage__02ewb_done)));
        }
    }
    if ((((0x0000000000000c01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__3
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___373_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___374_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___376_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___591_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___373_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___057_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___591_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___341_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___057_) 
                   << 1U);
        }
    }
    if ((((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__4
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__load_err_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_load_err_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__store_err_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_store_err_i;
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
    if ((((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__5
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0427_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q) 
                         & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0428_)))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0435_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0436_)) 
                         | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_q) 
                            >> 2U)));
        }
    }
    if ((((0x000000000000c300ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__6
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wb_exception 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__wb_exception_o;
        }
    }
    if ((((0x0000000000001301ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__7
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0573_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0574_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_wb_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i);
        }
    }
    if ((((0x00000000000000c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__8
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___387_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___385_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___309_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___307_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___395_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___397_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___396_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___071_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___395_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1604_ 
                = (3U & ((2U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q))
                          ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                             >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_mode_lsu_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1604_;
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___331_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___332_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___182_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___289_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___290_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___500_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___287_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___333_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___334_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___331_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___335_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___336_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___333_));
        }
    }
    if ((((0x00000000c0000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000c011ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__14
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
            // Inlined CFunc: _nba_comb__TOP__15
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0289_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i 
                   == vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_q__05b0__05d);
        }
    }
    if ((((0x0330000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__16
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
            // Inlined CFunc: _nba_comb__TOP__17
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0241_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0240_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0833_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0831_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0834_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0859_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0857_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0860_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0867_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0865_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0868_))))));
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
    if ((((0x0000000000001000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__21
            vlSelfRef.encarsia_tb__DOT__rf_waddr_wb 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__rf_waddr_wb_o;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__22
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
        }
    }
    if ((((0x000000000000f000ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__23(vlSelf);
    }
    if ((((0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
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
    if ((((0x0000000000003001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__26
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___106_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_write_wb_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_b_wb_match));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___105_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__rf_write_wb_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02erf_rd_a_wb_match));
        }
    }
    if ((((0x000000000000c301ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__27
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___190_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_fetch_err_i) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__wb_exception));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___191_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___163_) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___190_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___191_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___172_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___166_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__gen_stall_mem__02einstr_kill)));
        }
    }
    if ((((0x000000000000c0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__28(vlSelf);
    }
    if ((((0x0000300000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x00000000000000c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__29
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___337_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__id_fsm_q)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___335_));
        }
    }
    if ((((0xc00000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__30
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0276_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0289_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etrigger_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0276_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1598_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0276_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__trigger_match_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___1598_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__trigger_match 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__trigger_match_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__trigger_match_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__trigger_match;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__trigger_match_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0824_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0820_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i;
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
    if ((((0x0c00000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__33
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
        Vtop___024root___nba_comb__TOP__34(vlSelf);
    }
    if ((((0x000000000000f001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__35
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___079_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__data_req_allowed) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__lsu_req_dec));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___349_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___350_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___352_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___601_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___349_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___346_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__genblk3__02egen_multdiv_fast__02emultdiv_i__DOT___601_;
        }
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
    if ((((0x000000000000fc00ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__38
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
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__39
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0633_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0634_)
                          ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_q) 
                             >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q)));
        }
    }
    if ((((0x00c0000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__40
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0429_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0427_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0430_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0437_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0435_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0438_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0431_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0429_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0432_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0439_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0440_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0437_));
        }
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__41(vlSelf);
    }
    if ((((0x000000000000c303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__42
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0635_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0633_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0636_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___110_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___172_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___096_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___166_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0635_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0638_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0639_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0640_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___1349_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0637_);
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__csr_mtval_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__csr_mtval_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__csr_mtval;
        }
    }
    if ((((0x003000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__43
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0209_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0249_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0265_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__illegal_umode 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0209_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003001ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__44(vlSelf);
    }
    if ((((0xc00000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000310ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__45
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0214_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0257_));
        }
    }
    if ((((0xcc0000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__46
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0819_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0817_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0820_))))));
        }
    }
    if ((((0x0330000000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__47(vlSelf);
    }
    if ((((0x000000000000fc01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__48(vlSelf);
    }
    if ((((0x0c3000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__49
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0635_ 
                = (3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0636_)
                          ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q
                          : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0633_)));
        }
    }
    if ((((0x0f3000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__50(vlSelf);
    }
    if ((((0x0c0000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000001303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__51
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0575_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0576_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0573_);
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__52(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003c01ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__53(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x00000000000030c1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__54(vlSelf);
    }
    if ((((0xcc0000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000313ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__55
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
        Vtop___024root___nba_comb__TOP__56(vlSelf);
    }
    if ((((0x0f3c00000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__57(vlSelf);
    }
    if ((((0x0ff000000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__58
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0433_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0431_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0434_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0441_ 
                = ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0442_)) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0439_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0248_ 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0441_) 
                    << 2U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0433_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstack_csr__DOT___2_;
        }
    }
    if ((((0x0f300f000000000cULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000303ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__59
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
            // Inlined CFunc: _nba_comb__TOP__60
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
            // Inlined CFunc: _nba_comb__TOP__61
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0577_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0578_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_if_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0575_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0579_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0577_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0580_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0579_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0640_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__pc_id_i);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0162_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0639_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0017_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0162_;
        }
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__62
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___120_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__multdiv_operand_a_i
                    : (1ULL | ((::QData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_i)) 
                               << 1U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_a 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__ex_block_i__DOT__alu_i__DOT___120_;
        }
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__63
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0290_ 
                = ((3U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_addr) 
                          >> 8U)) > (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__illegal_csr_priv 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0290_;
        }
    }
    if ((((0x0c00000000000003ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__64
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0641_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0642_)
                    ? 4U : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 0x0000001cU));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0657_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0658_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 0x0000000eU)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0661_ 
                = (0x00000fffU & ((vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                                   >> 0x00000010U) 
                                  & (- (::IData)((1U 
                                                  & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0662_)))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0673_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0674_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 5U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0677_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0678_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 4U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0681_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0682_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 3U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0695_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0696_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 0x0000000bU)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0705_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0706_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 9U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0771_ 
                = (1U & ((~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0772_)) 
                         & (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 0x0000000aU)));
        }
    }
    if ((((0x0003c00000fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__65(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__66(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000003cc1ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__67(vlSelf);
    }
    if ((((0xcf3000c000000000ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x0000000000000313ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__68
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
        Vtop___024root___nba_comb__TOP__69(vlSelf);
    }
    if ((((0x0c0fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__70(vlSelf);
    }
    if ((((0x0c0fccfff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__71(vlSelf);
    }
    if ((((0x0c0fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__72(vlSelf);
    }
    if ((((0x0f0fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__73(vlSelf);
    }
    if ((((0x0c3fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__74(vlSelf);
    }
    if ((((0x0c0ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__75(vlSelf);
    }
    if ((((0x0f3fc0fff3fffff3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__76(vlSelf);
    }
    if ((((0x0f3fc0fff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__77(vlSelf);
    }
    if ((((0xfc0ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__78(vlSelf);
    }
    if ((((0x0f3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__79(vlSelf);
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__80(vlSelf);
    }
    if ((((3ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__81(vlSelf);
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f0c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__82(vlSelf);
    }
    if ((((0x003000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__83
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
            // Inlined CFunc: _nba_comb__TOP__84
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___339_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___337_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___340_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___056_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___339_;
        }
    }
    if ((((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__85(vlSelf);
    }
    if ((((0x0000300000000003ULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__86(vlSelf);
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000fcc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__87(vlSelf);
    }
    if ((((0xff3ffcffffffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__88
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0411_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0412_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_epc_q
                    : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0413_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0411_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0414_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0415_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0413_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0416_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0417_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0415_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0418_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0232_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0417_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0615_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0616_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0232_
                    : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0617_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0618_)
                    ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0615_);
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__89
            if (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0505_ 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0457_ 
                    = vlSelfRef.__Vdfg_Regularize_11334;
            } else {
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0505_ 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mtval_i;
                vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0457_ 
                    = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_mcause_i;
            }
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0507_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0505_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0508_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0459_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0457_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0460_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0509_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0507_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0510_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0461_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0459_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0462_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0225_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0509_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0218_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0461_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0545_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0546_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0225_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0553_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0554_)
                    ? (::IData)(vlSelfRef.__Vdfg_Regularize_11334)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0218_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0547_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0545_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0548_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0555_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0553_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0556_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0209_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0547_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0197_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0555_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0596_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0209_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0177_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0595_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0105_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0177_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mtval_d;
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3d3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__90
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0521_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0522_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_
                    : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0469_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i)
                    ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0195_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0523_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0521_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0524_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0471_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0469_ 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0472_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0191_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0523_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0473_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0471_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0474_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0586_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0191_
                    : (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0220_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0473_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0158_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0585_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0561_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0562_)
                    ? (0xfffffffeU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_wdata_int)
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0220_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0013_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0158_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__depc_d;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0563_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0561_ 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0564_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0200_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0563_;
        }
    }
    if ((((0xff3ffffff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3c3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__91
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0449_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0450_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstack_cause_q)
                    : (::IData)(vlSelfRef.__Vdfg_Regularize_11334));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0451_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0449_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0452_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0453_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0451_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0454_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0455_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0453_) 
                   & (- (::IData)((1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0456_))))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0230_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0455_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0603_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0604_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0230_)
                    : (::IData)(vlSelfRef.__Vdfg_Regularize_11334));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0605_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0606_)
                    ? (::IData)(vlSelfRef.__Vdfg_Regularize_11334)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0603_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0608_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0197_)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0605_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0164_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0607_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0023_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0164_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcause_d;
        }
    }
    if ((((0x0f3000000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__92(vlSelf);
    }
    if ((((0x000030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__93(vlSelf);
    }
    if ((((0xff3ffcffffffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000f3d3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__94
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0620_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0200_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0617_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0168_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0619_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0028_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0168_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mepc_d;
        }
    }
    if ((((0x0f3c0030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc7ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__95
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_spec_i)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___076_);
        }
    }
    if ((((0x0c0030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__96(vlSelf);
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__97(vlSelf);
    }
    if ((((0x0f3c0030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffcfULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__98
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___077_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned 
                = (0xfffffffcU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_w_aligned;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_addr_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__instr_addr_o;
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
        Vtop___024root___nba_comb__TOP__99(vlSelf);
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__100
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
            // Inlined CFunc: _nba_comb__TOP__101
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0270_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0285_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0273_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__csr_we_int) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0287_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0271_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0270_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0274_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_mode_i) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0273_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0272_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0271_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0286_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0275_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0274_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0288_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0272_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0275_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_control_we;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0340_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02etmatch_value_we;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___3_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_en_i;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0340_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_en_i;
        }
    }
    if ((((0x0c0330000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__102
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
            // Inlined CFunc: _nba_comb__TOP__103
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
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___152_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__instr_valid_clear_o;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___181_) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___152_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__instr_valid_clear;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__branch_jump_set_done_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___001_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT___082_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___030_ 
                = (1U & (~ (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_clear_i)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___020_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__instr_valid_id_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT___030_));
        }
    }
    if ((((0xff3ffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__104
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0529_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0530_)
                          ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__debug_cause_i)
                          : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_ 
                             >> 6U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_depc_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0531_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0529_) 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0532_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0247_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0531_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0590_)
                          ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0247_)
                          : (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0156_ 
                             >> 6U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0237_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe00U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_) 
                   | (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0589_) 
                       << 6U) | ((0x0000003cU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0823_) 
                                 | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0591_))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_ 
                = ((0xfffffe3fU & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0011_) 
                   | ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0237_) 
                      << 6U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__dcsr_d;
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
            // Inlined CFunc: _nba_comb__TOP__105
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___074_);
        }
    }
    if ((((0x0f3c3030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__106
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___082_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__addr_i 
                   & (- (::IData)((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_i))));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___082_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_addr;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__unused_addr_in 
                = (1U & vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i);
        }
    }
    if ((((0xff3ffffff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__107
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
            // Inlined CFunc: _nba_comb__TOP__108
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mepc_csr__DOT___2_;
        }
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffcfULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__109
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___022_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___030_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
                   & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__rdata_outstanding_q) 
                      >> 1U));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__branch_or_mispredict) 
                   | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__valid_req_q) 
                   & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___058_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___001_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__discard_req_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___014_;
        }
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__110(vlSelf);
    }
    if ((((0xfffffcfff3ffffffULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Locals
            ::CData/*3:0*/ __Vinline_0__nba_comb__TOP__111___Vdfg_Regularize_11405;
            // Body
            __Vinline_0__nba_comb__TOP__111___Vdfg_Regularize_11405 = 0;
            // Inlined CFunc: _nba_comb__TOP__111
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0443_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0444_)
                          ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0248_)
                          : ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                             >> 2U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0445_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0446_)
                          ? ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_) 
                             >> 2U) : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0443_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0447_ 
                = (7U & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0448_)
                          ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0240_)
                          : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0445_)));
            __Vinline_0__nba_comb__TOP__111___Vdfg_Regularize_11405 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0401_) 
                    << 3U) | (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0447_));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0234_ 
                = __Vinline_0__nba_comb__TOP__111___Vdfg_Regularize_11405;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d 
                = (((::IData)(__Vinline_0__nba_comb__TOP__111___Vdfg_Regularize_11405) 
                    << 2U) | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0839_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0103_ 
                = (((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0234_) 
                    << 2U) | (3U & (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT___0175_)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__wr_data_i 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mstatus_d;
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
            // Inlined CFunc: _nba_comb__TOP__112
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___3_)
                    ? (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__wr_data_i)
                    : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT__rdata_q));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___3_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__wr_data_i
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT__rdata_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___16_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___06_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___07_);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_control_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___0_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__gen_trigger_regs__02eg_dbg_tmatch_reg__05b0__05d__02eu_tmatch_value_csr__DOT___2_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___15_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___00_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___05_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT___02_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        }
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__113(vlSelf);
    }
    if ((((0x0f3030000000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffc3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__114
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0937_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0938_)
                    ? 7U : (::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__id_stage_i__DOT__controller_i__DOT___0178_));
        }
    }
    if ((((0x0f3c3030c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__115
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_ 
                = (0x7fffffffU & ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__clear_i)
                                   ? (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__in_addr_i 
                                      >> 1U) : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_next));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_ 
                = (vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___075_ 
                   + (::IData)(((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___018_) 
                                << 2U)));
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___071_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___078_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__stored_addr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fifo_i__DOT___109_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_d 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_ 
                = ((::IData)(vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___069_)
                    ? vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___007_
                    : vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT__fetch_addr_q);
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___005_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___070_;
            vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___002_ 
                = vlSelfRef.encarsia_tb__DOT__u_dut__DOT__if_stage_i__DOT__gen_prefetch_buffer__02eprefetch_buffer_i__DOT___068_;
        }
    }
    if ((((0xcf3030c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        Vtop___024root___nba_comb__TOP__116(vlSelf);
    }
    if ((((0xcf30f0c00000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffd3ULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__117
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
            // Inlined CFunc: _nba_comb__TOP__118
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
            // Inlined CFunc: _nba_comb__TOP__119
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
            // Inlined CFunc: _nba_comb__TOP__120
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
            // Inlined CFunc: _nba_comb__TOP__121
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
            // Inlined CFunc: _nba_comb__TOP__122
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
            // Inlined CFunc: _nba_comb__TOP__123
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
            // Inlined CFunc: _nba_comb__TOP__124
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
            // Inlined CFunc: _nba_comb__TOP__125
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
            // Inlined CFunc: _nba_comb__TOP__126
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
            // Inlined CFunc: _nba_comb__TOP__127
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
        Vtop___024root___nba_comb__TOP__128(vlSelf);
    }
    if ((((0xcf3c30f0c000000fULL & vlSelfRef.__VnbaTriggered[0U])
                | (0x000000000000ffffULL & vlSelfRef.__VnbaTriggered[1U])) != 0ULL)) {
        {
            // Body
            // Inlined CFunc: _nba_comb__TOP__129
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
        Vtop___024root___nba_comb__TOP__130(vlSelf);
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
