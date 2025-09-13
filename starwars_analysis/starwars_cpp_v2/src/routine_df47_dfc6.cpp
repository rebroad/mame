#include "cpu_6809.h"

namespace StarWars {

void routine_df47_dfc6_impl(CPU6809& cpu) {
    // Converted from rom_disasm_df47_dfc6.md
    // Address: 0xDF47_DFC6

    // DF49: SBCB <$43
    // TODO: Convert SBCB <$43

    // DF52: LDU #$4541
    cpu.m_u = 0x4541;

    // DF56: ADCB <$4D
    // TODO: Convert ADCB <$4D

    // DF60: ANDB #$57
    cpu.m_b &= 0x57;

    // DF65: BRA $DF18
    goto label_DF18;

    // DF6B: BRA $DF20
    goto label_DF20;

    // DF71: BRA $DF28
    goto label_DF28;

    // DF77: ADDD <$4E
    cpu.m_d += 0x4E;

    // DF7A: BRA $DFBE
    goto label_DFBE;

    // DF7F: ADDD <$34
    cpu.m_d += 0x34;

    // DF81: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DF83: BGE $DFB5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xDFB5;

    // DF85: LEAX [$3830,W]
    // TODO: Complex indexed addressing: [$3830,W]

    // DF89: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // DF8B: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // DF8D: SUBA $4D45
    cpu.m_a -= 0x4D45;

    // DF95: BRA $DFDD
    goto label_DFDD;

    // DF9A: BRA $DFEE
    goto label_DFEE;

    // DFA0: BRA $DFE5
    goto label_DFE5;

    // DFA8: BRA $DFFA
    goto label_DFFA;

    // DFAC: ANDB <$59
    cpu.m_b &= 0x59;

    // DFB0: BRA $DFF3
    goto label_DFF3;

    // DFB4: BRA $DFF7
    goto label_DFF7;

    // DFB6: BRA $E00C
    goto label_E00C;

    // DFBB: BRA $E00F
    goto label_E00F;

    // DFC1: BRA $E013
    goto label_E013;

    // DFC6: ANDB <$54
    cpu.m_b &= 0x54;

    // DFCA: BRA $E012
    goto label_E012;

    // DFD0: BRA $E01B
    goto label_E01B;

    // DFD3: BRA $E02C
    goto label_E02C;

    // DFD8: BRA $E033
    goto label_E033;

    // DFDB: BITB <$53
    // TODO: Convert BITB <$53

    // DFE1: BRA $E03C
    goto label_E03C;

    // DFE6: BRA $E031
    goto label_E031;

    // DFEE: ADDD <$50
    cpu.m_d += 0x50;

    // DFF7: BRA $E045
    goto label_E045;

    // DFFC: BEQ $E051
    if (cpu.zero_flag()) cpu.m_pc = 0xE051;

    // DFFE: BRA $E052
    goto label_E052;

    // E004: BRA $E04C
    goto label_E04C;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

    // E010: BRA $E060
    goto label_E060;

    // E015: BRA $E06B
    goto label_E06B;

    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54

    // E020: ADDD <$43
    cpu.m_d += 0x43;

    // E028: BRA $E06B
    goto label_E06B;

    // E02C: BRA $E07A
    goto label_E07A;

    // E032: BRA $E088
    goto label_E088;

    // E038: ADDD <$35
    cpu.m_d += 0x35;

    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E043: BRA $E098
    goto label_E098;

    // E04C: BRA $E08F
    goto label_E08F;

    // E050: BRA $E0A6
    goto label_E0A6;

    // E056: ADDD <$45
    cpu.m_d += 0x45;

    // E05E: BRA $E0B0
    goto label_E0B0;

    // E063: BRA $E0A6
    goto label_E0A6;

    // E068: ANDB #$44
    cpu.m_b &= 0x44;

    // E06E: BRA $E0C3
    goto label_E0C3;

    // E073: BRA $E0B9
    goto label_E0B9;

    // E07C: ANDB #$45
    cpu.m_b &= 0x45;

    // E084: BRA $E0D6
    goto label_E0D6;

    // E089: BRA $E0D8
    goto label_E0D8;

    // E08F: ANDB #$42
    cpu.m_b &= 0x42;

    // E095: BRA $E0DD
    goto label_E0DD;

    // E099: BRA $E0ED
    goto label_E0ED;

    // E0A3: BRA $E0EA
    goto label_E0EA;

    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35

    // E0AB: BGE $E0DD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE0DD;

    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E0AF: BRA $E0D1
    goto label_E0D1;

    // E0B1: EORB <$41
    cpu.m_b ^= 0x41;

    // E0B7: BRA $E10D
    goto label_E10D;

    // E0BA: BRA $E100
    goto label_E100;

    // E0C4: BRA $E119
    goto label_E119;

    // E0CA: ANDB #$53
    cpu.m_b &= 0x53;

    // E0D1: BRA $E114
    goto label_E114;

    // E0D4: BRA $E11C
    goto label_E11C;

    // E0D9: BRA $E12E
    goto label_E12E;

    // E0E1: EORB #$53
    cpu.m_b ^= 0x53;

    // E0EA: BRA $E143
    goto label_E143;

    // E0EF: BRA $E133
    goto label_E133;

    // E0F4: ADDD <$53
    cpu.m_d += 0x53;

    // E0FA: BRA $E142
    goto label_E142;

    // E103: ADDD <$53
    cpu.m_d += 0x53;

    // E109: BRA $E15F
    goto label_E15F;

    // E10D: BRA $E155
    goto label_E155;

    // E115: ADDD <$41
    cpu.m_d += 0x41;

    // E11B: BRA $E160
    goto label_E160;

    // E123: ADDD <$55
    cpu.m_d += 0x55;

    // E127: BRA $E17D
    goto label_E17D;

    // E12B: BRA $E173
    goto label_E173;

    // E130: BITB #$20
    // TODO: Convert BITB #$20

    // E135: BRA $E18C
    goto label_E18C;

    // E13B: BRA $E191
    goto label_E191;

    // E13F: BRA $E187
    goto label_E187;

    // E144: BITB #$4F
    // TODO: Convert BITB #$4F

}

} // namespace StarWars