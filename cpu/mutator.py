"""Generate mutant RTL files from manifest.json.

Each mutant is a one-liner edit on a single RTL file. The golden file lives
in the companion repo (read-only). The mutator reads the golden, applies the
edit, writes the result to `mutants/<id>/<target>.sv`. The build system then
substitutes that file for the golden one via the Makefile's VERILOG_SOURCES.
"""
from __future__ import annotations

import json
import re
from pathlib import Path

HERE = Path(__file__).resolve().parent
IBEX_RTL = Path("/home/andre/ibex-coverage-experiments/cpu/src/lowrisc_ibex_ibex_core_0.1/rtl")


def mutate_m000_alu_add_as_sub(src: str) -> str:
    """Add ALU_ADD to the adder_op_b_negate case list so ADD computes a-b.

    Golden `ibex_alu.sv` has (around line 62):
        ALU_SUB,
        ALU_EQ,   ALU_NE,
        ...: adder_op_b_negate = 1'b1;

    We prepend `ALU_ADD, ` to the ALU_SUB line.
    """
    pat = re.compile(r"^(\s*)ALU_SUB,\s*$", re.M)
    m = pat.search(src)
    assert m, "could not locate `ALU_SUB,` line in ibex_alu.sv"
    return pat.sub(f"{m.group(1)}ALU_ADD, ALU_SUB,", src, count=1)


def mutate_m001_alu_slt_inverted(src: str) -> str:
    """Flip the SLT/SLTU comparator result (drop the ~).

    Golden has:
        ALU_SLT,  ALU_SLTU: cmp_result = ~is_greater_equal;
    Mutant:
        ALU_SLT,  ALU_SLTU: cmp_result =  is_greater_equal;
    """
    pat = re.compile(r"(ALU_SLT,\s*ALU_SLTU:\s*cmp_result\s*=\s*)~(is_greater_equal\s*;)")
    out, n = pat.subn(r"\1 \2", src, count=1)
    assert n == 1, "could not locate SLT cmp_result assignment"
    return out


def mutate_m002_alu_and_as_or(src: str) -> str:
    """Swap bwlogic_and and bwlogic_or triggers.

    Golden:
        assign bwlogic_or  = (operator_i == ALU_OR)  | (operator_i == ALU_ORN);
        assign bwlogic_and = (operator_i == ALU_AND) | (operator_i == ALU_ANDN);
    Mutant: swap ALU_OR <-> ALU_AND, ALU_ORN <-> ALU_ANDN.
    """
    pat_or = re.compile(r"(assign bwlogic_or\s*=\s*)\(operator_i == ALU_OR\)\s*\|\s*\(operator_i == ALU_ORN\)(;)")
    pat_and = re.compile(r"(assign bwlogic_and\s*=\s*)\(operator_i == ALU_AND\)\s*\|\s*\(operator_i == ALU_ANDN\)(;)")
    out, n1 = pat_or.subn(r"\1(operator_i == ALU_AND) | (operator_i == ALU_ANDN)\2", src, count=1)
    out, n2 = pat_and.subn(r"\1(operator_i == ALU_OR)  | (operator_i == ALU_ORN)\2", out, count=1)
    assert n1 == 1 and n2 == 1, "could not locate bwlogic trigger assignments"
    return out


def mutate_m003_lsu_sw_be_corrupt(src: str) -> str:
    """Drop byte-enable bit 0 for aligned 32-bit SW.

    Golden (in `ibex_load_store_unit.sv`, aligned SW case):
        2'b00:   data_be = 4'b1111;
    (the first case arm under `2'b00: // Writing a word` / `!handle_misaligned_q`)
    Mutant:
        2'b00:   data_be = 4'b1110;
    """
    # Target the FIRST occurrence of `2'b00:   data_be = 4'b1111;` which is in
    # the aligned-word first-part branch.
    pat = re.compile(r"(2'b00:\s*data_be\s*=\s*)4'b1111(\s*;)")
    out, n = pat.subn(r"\g<1>4'b1110\g<2>", src, count=1)
    assert n == 1, "could not locate aligned-word SW byte-enable"
    return out


def mutate_m004_alu_sll_as_srl(src: str) -> str:
    """Make ALU_SLL set shift_left = 1'b0 (so SLL becomes a right shift).

    Golden:
        ALU_SLL: shift_left = 1'b1;
    Mutant:
        ALU_SLL: shift_left = 1'b0;
    """
    pat = re.compile(r"(ALU_SLL:\s*shift_left\s*=\s*1'b)1(\s*;)")
    out, n = pat.subn(r"\g<1>0\g<2>", src, count=1)
    assert n == 1, "could not locate ALU_SLL shift_left assignment"
    return out


def mutate_m005_alu_xor_as_and(src: str) -> str:
    """Add ALU_XOR to the bwlogic_and trigger list. Then the result mux takes
    the AND path when operator is XOR. Easy: any XOR with differing bits dies.
    """
    pat = re.compile(r"(assign bwlogic_and\s*=\s*)\(operator_i == ALU_AND\) \| \(operator_i == ALU_ANDN\)(;)")
    out, n = pat.subn(r"\1(operator_i == ALU_AND) | (operator_i == ALU_ANDN) | (operator_i == ALU_XOR)\2", src, count=1)
    assert n == 1, "could not locate bwlogic_and assignment for m005"
    return out


def mutate_m006_alu_and_as_xor(src: str) -> str:
    """Remove ALU_AND from bwlogic_and triggers; AND falls through to default
    (XOR) in the bwlogic mux. Easy: any AND with set bits dies.
    """
    pat = re.compile(r"(assign bwlogic_and\s*=\s*)\(operator_i == ALU_AND\) \| \((operator_i == ALU_ANDN\)\s*;)")
    out, n = pat.subn(r"\g<1>(\g<2>", src, count=1)
    assert n == 1, "could not locate bwlogic_and for m006"
    return out


def mutate_m007_alu_sra_as_srl(src: str) -> str:
    """Force shift_arith to 0: SRA produces zero-filled shift (SRL semantics).
    Medium: only visible for SRA with NEGATIVE rs1 (sign bit set).
    """
    pat = re.compile(r"(assign shift_arith\s*=\s*)\(operator_i == ALU_SRA\)(;)")
    out, n = pat.subn(r"\g<1>1'b0\g<2>", src, count=1)
    assert n == 1, "could not locate shift_arith assignment"
    return out


def mutate_m008_alu_slt_as_sltu(src: str) -> str:
    """Remove ALU_SLT from the cmp_signed=1 case list. SLT falls into default
    (cmp_signed=0), so it uses unsigned comparator logic — matches SLTU.
    Medium: only visible when operands have DIFFERENT signs.
    """
    # Target the "ALU_SLT," line in the cmp_signed always_comb block.
    pat = re.compile(r"^(\s*ALU_LT,\s*\n)\s*ALU_SLT,\s*\n", re.M)
    out, n = pat.subn(r"\1", src, count=1)
    assert n == 1, "could not locate ALU_SLT in cmp_signed case"
    return out


def mutate_m009_alu_shift_amount_even(src: str) -> str:
    """Force shift_amt[0] to 0 by using operand_b_i[4:1] appended with 0 in
    the first-cycle shift_amt assignment. Medium: only visible on ODD shamt.
    """
    pat = re.compile(r"(shift_amt\[4:0\]\s*=\s*instr_first_cycle_i\s*\?\s*\n\s*\(operand_b_i\[5\] && shift_funnel \? shift_amt_compl\[4:0\] : )operand_b_i\[4:0\]")
    out, n = pat.subn(r"\1{operand_b_i[4:1], 1'b0}", src, count=1)
    assert n == 1, "could not locate shift_amt first-cycle assignment"
    return out


def mutate_m010_lsu_sh_be_bit0(src: str) -> str:
    """Half-word store at offset 0: BE becomes 4'b0001 instead of 4'b0011
    (drops the upper byte of the halfword). Medium: visible only via Spike's
    dside notification — retirement trace misses this.
    """
    # Target the first `2'b00: data_be = 4'b0011;` which appears inside the
    # half-word (lsu_type_i==2'b01) first-part branch.
    pat = re.compile(r"(2'b00:\s*data_be\s*=\s*)4'b0011(\s*;)")
    out, n = pat.subn(r"\g<1>4'b0001\g<2>", src, count=1)
    assert n == 1, "could not locate half-word SW BE for m010"
    return out


def mutate_m011_lsu_sb_be_shift(src: str) -> str:
    """Byte store at offset 1: BE becomes 4'b0001 instead of 4'b0010
    (writes byte 0, not byte 1). Medium: Spike-only via dside notify.
    """
    # In the byte-store section (`2'b10, 2'b11: begin // Writing a byte`), the
    # first `2'b01: data_be = 4'b0010;` after that is our target.
    # To uniquely identify, we match on the byte section marker.
    pat = re.compile(
        r"(2'b10,\s*\n\s*2'b11: begin // Writing a byte\s*\n\s*unique case \(data_offset\)\s*\n\s*2'b00:\s*data_be\s*=\s*4'b0001;\s*\n\s*2'b01:\s*data_be\s*=\s*)4'b0010(\s*;)",
        re.M)
    out, n = pat.subn(r"\g<1>4'b0001\g<2>", src, count=1)
    assert n == 1, "could not locate byte-store BE for m011"
    return out


def mutate_m012_alu_sra_minusone_bug(src: str) -> str:
    """SRA when rs1 is all-ones (0xFFFFFFFF = -1): drop sign-extension. Hard:
    needs rs1 = -1 specifically. CRT_A_run1_p1 only sources from x1..x15 so
    never produces -1 in operand_a.
    """
    pat = re.compile(r"(assign shift_arith\s*=\s*)\(operator_i == ALU_SRA\)(;)")
    out, n = pat.subn(r"\g<1>(operator_i == ALU_SRA) & (operand_a_i != 32'hFFFFFFFF)\g<2>", src, count=1)
    assert n == 1, "could not locate shift_arith for m012"
    return out


def mutate_m013_alu_slt_overflow_bug(src: str) -> str:
    """SLT comparator correct unless rs1 is INT_MIN (0x80000000): cmp_signed
    becomes 0 for SLT on that corner, giving wrong sign-adjustment. Hard:
    needs 0x80000000 in a register.
    """
    # Remove ALU_SLT from the cmp_signed=1 group AND add a dedicated case
    # that conditionally sets cmp_signed based on operand_a.
    pat = re.compile(r"^(\s*ALU_LT,\s*\n)\s*ALU_SLT,\s*\n(\s*// RV32B only\s*\n\s*ALU_MIN,\s*\n\s*ALU_MAX:\s*cmp_signed\s*=\s*1'b1;)",
                     re.M)
    def _repl(m):
        return (m.group(1) + m.group(2) + "\n\n"
                "      ALU_SLT: cmp_signed = (operand_a_i != 32'h80000000);\n")
    out, n = pat.subn(_repl, src, count=1)
    assert n == 1, "could not locate SLT in cmp_signed for m013"
    return out


def mutate_m014_alu_sub_as_xor(src: str) -> str:
    """In the result_o mux, move ALU_SUB from the adder branch to the bwlogic
    (XOR default) branch. SUB produces XOR result on the writeback.
    """
    # Pattern: `ALU_ADD,  ALU_SUB,` → `ALU_ADD,` on the adder line, AND add
    # `ALU_SUB,` to the bwlogic (XOR) group.
    # Step 1: remove ALU_SUB from adder line
    out = re.sub(r"(ALU_ADD,)(\s+ALU_SUB,)", r"\1", src, count=1)
    # Step 2: add ALU_SUB to the bwlogic group (first line of result_o mux)
    out = re.sub(r"(      ALU_XOR,  ALU_XNOR,)", r"      ALU_SUB,\n\1", out, count=1)
    assert out != src, "could not apply m014"
    return out


def mutate_m015_alu_xor_same_src_corrupt(src: str) -> str:
    """XOR with rs1==rs2 returns 0xFFFFFFFF instead of 0.
    Golden: XOR(x,y,y) = 0 (xor of equal values).
    Mutant adds conditional: if operand_a_i == bwlogic_operand_b, return -1.
    Fires on SAME_SRC bin for XOR with non-zero register values.
    """
    pat = re.compile(r"(assign bwlogic_xor_result\s*=\s*)operand_a_i \^ bwlogic_operand_b(;)")
    out, n = pat.subn(
        r"\1(operand_a_i == bwlogic_operand_b) ? 32'hFFFFFFFF : (operand_a_i ^ bwlogic_operand_b)\2",
        src, count=1)
    assert n == 1, "could not locate bwlogic_xor_result for m015"
    return out


def mutate_m016_alu_and_zero_src_leak(src: str) -> str:
    """AND with one operand == 0 returns 0xFFFFFFFF instead of 0.
    Golden: AND(x, 0) = 0.
    Fires on ZERO_SRC bin for AND where one source register is x0.
    """
    pat = re.compile(r"(assign bwlogic_and_result\s*=\s*)operand_a_i & bwlogic_operand_b(;)")
    out, n = pat.subn(
        r"\1(operand_a_i == 32'b0 || bwlogic_operand_b == 32'b0) ? 32'hFFFFFFFF : (operand_a_i & bwlogic_operand_b)\2",
        src, count=1)
    assert n == 1, "could not locate bwlogic_and_result for m016"
    return out


def mutate_m017_alu_srl_arith_leak_neg(src: str) -> str:
    """SRL on negative rs1 sign-extends (like SRA). Hard: needs rs1 with bit 31 set.
    Golden: SRL(negative, N) zero-fills from left.
    Mutant: shift_arith activates for SRL when operand_a bit 31 is set.
    """
    pat = re.compile(r"(assign shift_arith\s*=\s*)\(operator_i == ALU_SRA\)(;)")
    out, n = pat.subn(
        r"\1(operator_i == ALU_SRA) | ((operator_i == ALU_SRL) & operand_a_i[31])\2",
        src, count=1)
    assert n == 1, "could not locate shift_arith for m017"
    return out


def mutate_m018_alu_or_same_src_identity(src: str) -> str:
    """OR with rs1==rs2 returns ~operand_a instead of operand_a.
    Golden: OR(x, x) = x (idempotent).
    Mutant adds conditional at bwlogic_or_result.
    Fires on SAME_SRC bin for OR.
    """
    pat = re.compile(r"(assign bwlogic_or_result\s*=\s*)operand_a_i \| bwlogic_operand_b(;)")
    out, n = pat.subn(
        r"\1(operand_a_i == bwlogic_operand_b) ? (~operand_a_i) : (operand_a_i | bwlogic_operand_b)\2",
        src, count=1)
    assert n == 1, "could not locate bwlogic_or_result for m018"
    return out


def mutate_m019_lsu_sh_byte_swap(src: str) -> str:
    """LSU data_wdata rotation: swap the offset=01 and offset=10 cases.
    Golden: offset=01 rotates right 8, offset=10 rotates right 16.
    Mutant: swapped — offset=01 rotates by 16, offset=10 rotates by 8.
    Fires on any SW/SH/SB at addresses with low bits 01 or 10.
    Invisible to retirement trace (no rd write); Spike dside catches.
    """
    # Swap the right-hand sides of the two case arms
    pat = re.compile(
        r"(2'b01:\s*data_wdata = )\{lsu_wdata_i\[23:0\], lsu_wdata_i\[31:24\]\}(;\s*\n\s*2'b10:\s*data_wdata = )\{lsu_wdata_i\[15:0\], lsu_wdata_i\[31:16\]\}(;)")
    out, n = pat.subn(
        r"\1{lsu_wdata_i[15:0], lsu_wdata_i[31:16]}\2{lsu_wdata_i[23:0], lsu_wdata_i[31:24]}\3",
        src, count=1)
    assert n == 1, "could not locate data_wdata rotation cases for m019"
    return out


MUTATORS = {
    "m000_alu_add_as_sub": mutate_m000_alu_add_as_sub,
    "m001_alu_slt_inverted": mutate_m001_alu_slt_inverted,
    "m002_alu_and_as_or": mutate_m002_alu_and_as_or,
    "m003_lsu_sw_be_corrupt": mutate_m003_lsu_sw_be_corrupt,
    "m004_alu_sll_as_srl": mutate_m004_alu_sll_as_srl,
    "m005_alu_xor_as_and": mutate_m005_alu_xor_as_and,
    "m006_alu_and_as_xor": mutate_m006_alu_and_as_xor,
    "m007_alu_sra_as_srl": mutate_m007_alu_sra_as_srl,
    "m008_alu_slt_as_sltu": mutate_m008_alu_slt_as_sltu,
    "m009_alu_shift_amount_even": mutate_m009_alu_shift_amount_even,
    "m010_lsu_sh_be_bit0": mutate_m010_lsu_sh_be_bit0,
    "m011_lsu_sb_be_shift": mutate_m011_lsu_sb_be_shift,
    "m012_alu_sra_minus_one_bug": mutate_m012_alu_sra_minusone_bug,
    "m013_alu_slt_overflow_bug": mutate_m013_alu_slt_overflow_bug,
    "m014_alu_sub_as_xor": mutate_m014_alu_sub_as_xor,
    "m015_alu_xor_same_src_corrupt": mutate_m015_alu_xor_same_src_corrupt,
    "m016_alu_and_zero_src_leak": mutate_m016_alu_and_zero_src_leak,
    "m017_alu_srl_arith_leak_neg": mutate_m017_alu_srl_arith_leak_neg,
    "m018_alu_or_same_src_identity": mutate_m018_alu_or_same_src_identity,
    "m019_lsu_sh_byte_swap": mutate_m019_lsu_sh_byte_swap,
}


def apply_one(mut_id: str, target: str) -> Path:
    """Apply mutator for `mut_id` to the companion-repo golden `target` RTL
    file. Writes the mutated version to `mutants/<mut_id>/<target>`. Returns
    the output path."""
    golden = IBEX_RTL / target
    assert golden.exists(), f"golden RTL missing: {golden}"
    src = golden.read_text()
    try:
        mutated = MUTATORS[mut_id](src)
    except KeyError as e:
        raise SystemExit(f"no mutator defined for {mut_id}") from e
    out_dir = HERE / "mutants" / mut_id
    out_dir.mkdir(parents=True, exist_ok=True)
    out = out_dir / target
    out.write_text(mutated)
    import difflib
    diff_lines = sum(1 for l in difflib.unified_diff(src.splitlines(), mutated.splitlines(), n=0)
                     if l.startswith(("+", "-")) and not l.startswith(("+++", "---")))
    print(f"  {mut_id}: {target} ({diff_lines} edit line(s)) -> {out}")
    return out


def main() -> None:
    manifest = json.loads((HERE / "mutants" / "manifest.json").read_text())
    for m in manifest["mutants"]:
        apply_one(m["id"], m["target"])
    print(f"generated {len(manifest['mutants'])} mutants under mutants/")


if __name__ == "__main__":
    main()
