"""mutator.py -- generates small test set of structural mutants on ibex_decoder.sv.

Each mutant = one single-point edit on the original RTL that introduces a plausible
design bug (opcode flip, swapped funct3 arm, inverted comparison, deleted
illegal_insn flag, off-by-one bit slice, etc.).

Output: mutants/m<NNN>_<name>/ibex_decoder.sv -- a drop-in replacement RTL dir
that the harness points Verilator at via RTL_DIR.

Run:  python3 mutator.py
"""
import re
import shutil
from pathlib import Path

HERE = Path(__file__).resolve().parent
SRC_RTL = HERE / "rtl"
SRC_DEC = SRC_RTL / "ibex_decoder.sv"
OUT = HERE / "mutants"

# Each mutation: (operator_kind, old_text, new_text, name, rationale)
# `old_text` must occur EXACTLY ONCE in ibex_decoder.sv (we assert this below)
# so each mutant is a single-point change.
MUTATIONS = [
    # --- 1. Opcode constant bit-flip ---
    # Changes which opcode is recognized as OP_IMM in the main decoder arm.
    ("opcode_const",
     "OPCODE_OP_IMM: begin // Register-Immediate ALU Operations\n        rf_ren_a_o       = 1'b1;",
     "OPCODE_LOAD: begin // Register-Immediate ALU Operations\n        rf_ren_a_o       = 1'b1;",
     "opimm_opcode_relabel",
     "The 'OPCODE_OP_IMM' case label is swapped to 'OPCODE_LOAD' in the main "
     "arm. OP-IMM instructions (addi/slti/...) will fall through to default."),

    # --- 2. Swap BRANCH funct3 arms ---
    # BEQ (3'b000) and BNE (3'b001) swapped -> condition inverted silently.
    ("case_arm_swap",
     "3'b000:  alu_operator_o = ALU_EQ;\n          3'b001:  alu_operator_o = ALU_NE;",
     "3'b000:  alu_operator_o = ALU_NE;\n          3'b001:  alu_operator_o = ALU_EQ;",
     "branch_swap_beq_bne",
     "Swap BEQ and BNE in the BRANCH funct3 case. Classic developer mistake; "
     "visible on alu_operator_o output for 3'b000 / 3'b001 stimuli."),

    # --- 3. Invert LT / GE arms ---
    ("case_arm_swap",
     "3'b100:  alu_operator_o = ALU_LT;\n          3'b101:  alu_operator_o = ALU_GE;",
     "3'b100:  alu_operator_o = ALU_GE;\n          3'b101:  alu_operator_o = ALU_LT;",
     "branch_swap_blt_bge",
     "Swap BLT and BGE in the BRANCH funct3 case. Would cause silent "
     "data-dependent faults in real CPU."),

    # --- 4. Drop illegal_insn flag inside LOAD size default arm ---
    # Here the structure is `default: begin\n illegal_insn = 1'b1; \nend`
    # scoped to the LOAD data_type case at ~line 330.
    ("delete_illegal",
     "          default: begin\n            illegal_insn = 1'b1;\n          end\n        endcase\n      end",
     "          default: begin\n            illegal_insn = 1'b0;  // BUG: should be 1'b1\n          end\n        endcase\n      end",
     "load_default_not_illegal",
     "LOAD's default data_type case: illegal=1 -> illegal=0. "
     "Reserved funct3 LOAD size values no longer flagged illegal."),

    # --- 5. Bit-slice off-by-one on branch funct3 selector ---
    ("bit_slice",
     "unique case (instr_alu[14:12])\n          3'b000:  alu_operator_o = ALU_EQ;",
     "unique case (instr_alu[13:11])\n          3'b000:  alu_operator_o = ALU_EQ;",
     "branch_funct3_slice_off_by_one",
     "Shift the branch funct3 slice from [14:12] to [13:11]. Decode now reads "
     "wrong bits -> wrong alu_operator for all branches."),

    # --- 6. Invert the compressed-illegal check ---
    # Original is: if (illegal_c_insn_i) begin\n  illegal_insn = 1'b1;\n end
    ("invert_cond",
     "if (illegal_c_insn_i) begin\n      illegal_insn = 1'b1;",
     "if (!illegal_c_insn_i) begin\n      illegal_insn = 1'b1;",
     "invert_illegal_c_check",
     "Invert the illegal_c_insn_i gate so illegal compressed insn no longer "
     "forces illegal_insn. Side-input handling inverted."),

    # --- 7. ALU op constant replace: ADD -> SUB on JAL target calc ---
    ("alu_op_replace",
     "// Calculate jump target\n          alu_op_a_mux_sel_o  = OP_A_CURRPC;\n          alu_op_b_mux_sel_o  = OP_B_IMM;\n          imm_b_mux_sel_o     = IMM_B_J;\n          alu_operator_o      = ALU_ADD;",
     "// Calculate jump target\n          alu_op_a_mux_sel_o  = OP_A_CURRPC;\n          alu_op_b_mux_sel_o  = OP_B_IMM;\n          imm_b_mux_sel_o     = IMM_B_J;\n          alu_operator_o      = ALU_SUB;",
     "jal_target_sub_instead_add",
     "JAL jump target computed with SUB instead of ADD. Branches jump wrong."),

    # --- 8. rf_we drop (force write-enable low on OP_IMM) ---
    ("signal_force",
     "OPCODE_OP_IMM: begin // Register-Immediate ALU Operations\n        rf_ren_a_o       = 1'b1;\n        rf_we            = 1'b1;",
     "OPCODE_OP_IMM: begin // Register-Immediate ALU Operations\n        rf_ren_a_o       = 1'b1;\n        rf_we            = 1'b0;",
     "opimm_no_writeback",
     "OP_IMM instructions no longer write back (rf_we forced low). All "
     "ADDI/SLTI/XORI results silently discarded."),

    # --- 9. Flip lwu-guard polarity ---
    # Original guard: if (instr[14]) begin\n illegal_insn = 1'b1; // lwu does not exist
    ("invert_cond",
     "if (instr[14]) begin\n              illegal_insn = 1'b1;    // lwu does not exist",
     "if (!instr[14]) begin\n              illegal_insn = 1'b1;    // lwu does not exist",
     "load_lwu_guard_inverted",
     "The 'lwu does not exist' guard inverted: lwu (bit14=1) is no longer "
     "flagged illegal; legal lw (bit14=0) IS flagged illegal."),

    # --- 10. CSR access funct3 swap ---
    # Branches share funct3=3'b010 as unused (no instruction), test illegal path.
    ("case_arm_swap",
     "3'b110:  alu_operator_o = ALU_LTU;\n          3'b111:  alu_operator_o = ALU_GEU;",
     "3'b110:  alu_operator_o = ALU_GEU;\n          3'b111:  alu_operator_o = ALU_LTU;",
     "branch_swap_bltu_bgeu",
     "Swap BLTU and BGEU arms. Unsigned-vs-signed-comparison error."),
]


def check_pattern_unique(src: str, pattern: str, name: str) -> bool:
    """Each mutation anchor must appear EXACTLY once -- otherwise the single-point
    assumption is broken and the mutant is ambiguous."""
    count = src.count(pattern)
    if count == 1:
        return True
    print(f"[SKIP] {name}: pattern occurs {count} times (expected 1)")
    return False


def main():
    assert SRC_DEC.exists(), f"Original decoder not found at {SRC_DEC}"
    src = SRC_DEC.read_text()
    print(f"Loaded original: {SRC_DEC} ({len(src)} chars, {src.count(chr(10))} lines)\n")

    if OUT.exists():
        shutil.rmtree(OUT)
    OUT.mkdir(parents=True)

    manifest = []
    for idx, (kind, old, new, name, rationale) in enumerate(MUTATIONS):
        if not check_pattern_unique(src, old, name):
            continue
        mutated = src.replace(old, new, 1)
        assert mutated != src, f"{name}: replacement produced no change"
        assert mutated.count(new) >= 1, f"{name}: new pattern not present after replace"

        mdir = OUT / f"m{idx:03d}_{name}"
        mdir.mkdir()
        # Keep ibex_pkg.sv as-is: copy it next to the mutated decoder.
        (mdir / "ibex_decoder.sv").write_text(mutated)
        shutil.copy(SRC_RTL / "ibex_pkg.sv", mdir / "ibex_pkg.sv")
        manifest.append({"id": f"m{idx:03d}", "name": name, "kind": kind, "rationale": rationale})
        print(f"[OK]   m{idx:03d}_{name} ({kind})")

    (OUT / "manifest.txt").write_text(
        "\n".join(f"{m['id']}\t{m['kind']}\t{m['name']}\t{m['rationale']}" for m in manifest))
    print(f"\nGenerated {len(manifest)}/{len(MUTATIONS)} mutants in {OUT}")
    print(f"Manifest: {OUT/'manifest.txt'}")


if __name__ == "__main__":
    main()
