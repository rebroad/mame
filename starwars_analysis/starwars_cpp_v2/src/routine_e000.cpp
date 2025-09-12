#include "cpu_6809.h"

namespace StarWars {

void routine_e000_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e000.md
    // Address: 0xE000

    // E004: BRA $E04C
    cpu.m_pc = 0xE04C;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

    // E010: BRA $E060
    cpu.m_pc = 0xE060;

    // E015: BRA $E06B
    cpu.m_pc = 0xE06B;

    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54

    // E020: ADDD <$43
    cpu.m_d += 0x43;

    // E028: BRA $E06B
    cpu.m_pc = 0xE06B;

    // E02C: BRA $E07A
    cpu.m_pc = 0xE07A;

    // E032: BRA $E088
    cpu.m_pc = 0xE088;

    // E038: ADDD <$35
    cpu.m_d += 0x35;

    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E043: BRA $E098
    cpu.m_pc = 0xE098;

    // E04C: BRA $E08F
    cpu.m_pc = 0xE08F;

    // E050: BRA $E0A6
    cpu.m_pc = 0xE0A6;

    // E056: ADDD <$45
    cpu.m_d += 0x45;

    // E05E: BRA $E0B0
    cpu.m_pc = 0xE0B0;

    // E063: BRA $E0A6
    cpu.m_pc = 0xE0A6;

    // E068: ANDB #$44
    cpu.m_b &= 0x44;

    // E06E: BRA $E0C3
    cpu.m_pc = 0xE0C3;

    // E073: BRA $E0B9
    cpu.m_pc = 0xE0B9;

    // E07C: ANDB #$45
    cpu.m_b &= 0x45;

    // E084: BRA $E0D6
    cpu.m_pc = 0xE0D6;

    // E089: BRA $E0D8
    cpu.m_pc = 0xE0D8;

    // E08F: ANDB #$42
    cpu.m_b &= 0x42;

    // E095: BRA $E0DD
    cpu.m_pc = 0xE0DD;

    // E099: BRA $E0ED
    cpu.m_pc = 0xE0ED;

    // E0A3: BRA $E0EA
    cpu.m_pc = 0xE0EA;

    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35

    // E0AB: BGE $E0DD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE0DD;

    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E0AF: BRA $E0D1
    cpu.m_pc = 0xE0D1;

    // E0B1: EORB <$41
    cpu.m_b ^= 0x41;

    // E0B7: BRA $E10D
    cpu.m_pc = 0xE10D;

    // E0BA: BRA $E100
    cpu.m_pc = 0xE100;

    // E0C4: BRA $E119
    cpu.m_pc = 0xE119;

    // E0CA: ANDB #$53
    cpu.m_b &= 0x53;

    // E0D1: BRA $E114
    cpu.m_pc = 0xE114;

    // E0D4: BRA $E11C
    cpu.m_pc = 0xE11C;

    // E0D9: BRA $E12E
    cpu.m_pc = 0xE12E;

    // E0E1: EORB #$53
    cpu.m_b ^= 0x53;

    // E0EA: BRA $E143
    cpu.m_pc = 0xE143;

    // E0EF: BRA $E133
    cpu.m_pc = 0xE133;

    // E0F4: ADDD <$53
    cpu.m_d += 0x53;

    // E0FA: BRA $E142
    cpu.m_pc = 0xE142;

    // E103: ADDD <$53
    cpu.m_d += 0x53;

    // E109: BRA $E15F
    cpu.m_pc = 0xE15F;

    // E10D: BRA $E155
    cpu.m_pc = 0xE155;

    // E115: ADDD <$41
    cpu.m_d += 0x41;

    // E11B: BRA $E160
    cpu.m_pc = 0xE160;

    // E123: ADDD <$55
    cpu.m_d += 0x55;

    // E127: BRA $E17D
    cpu.m_pc = 0xE17D;

    // E12B: BRA $E173
    cpu.m_pc = 0xE173;

    // E130: BITB #$20
    // TODO: Convert BITB #$20

    // E135: BRA $E18C
    cpu.m_pc = 0xE18C;

    // E13B: BRA $E191
    cpu.m_pc = 0xE191;

    // E13F: BRA $E187
    cpu.m_pc = 0xE187;

    // E144: BITB #$4F
    // TODO: Convert BITB #$4F

    // E148: BLT $E1A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE1A1;

    // E14C: BRA $E199
    cpu.m_pc = 0xE199;

    // E153: BRA $E19E
    cpu.m_pc = 0xE19E;

    // E156: BRA $E19F
    cpu.m_pc = 0xE19F;

    // E15B: BRA $E19F
    cpu.m_pc = 0xE19F;

    // E15F: BRA $E1A9
    cpu.m_pc = 0xE1A9;

    // E162: ADDD <$50
    cpu.m_d += 0x50;

    // E16B: BRA $E1B6
    cpu.m_pc = 0xE1B6;

    // E16E: BRA $E1B6
    cpu.m_pc = 0xE1B6;

    // E173: BRA $E1CC
    cpu.m_pc = 0xE1CC;

    // E17A: BRA $E1D0
    cpu.m_pc = 0xE1D0;

    // E17E: BRA $E1C6
    cpu.m_pc = 0xE1C6;

    // E184: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U

    // E188: BRA $E1CF
    cpu.m_pc = 0xE1CF;

    // E18F: BEQ $E1E4
    if (cpu.zero_flag()) cpu.m_pc = 0xE1E4;

    // E191: BRA $E1D7
    cpu.m_pc = 0xE1D7;

    // E197: BRA $E1EC
    cpu.m_pc = 0xE1EC;

    // E19C: BGE $E1BE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1BE;

    // E1A3: BRA $E1F9
    cpu.m_pc = 0xE1F9;

    // E1A6: BITB #$43
    // TODO: Convert BITB #$43

    // E1AE: BRA $E1FF
    cpu.m_pc = 0xE1FF;

    // E1B1: BRA $E1F7
    cpu.m_pc = 0xE1F7;

    // E1B7: BRA $E20F
    cpu.m_pc = 0xE20F;

    // E1BD: BGE $E1DF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1DF;

    // E1C4: BRA $E21A
    cpu.m_pc = 0xE21A;

    // E1C7: BITB #$52
    // TODO: Convert BITB #$52

    // E1CD: BRA $E21F
    cpu.m_pc = 0xE21F;

    // E1D4: BGT $E1F6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1F6;

    // E1D6: BRA $E231
    cpu.m_pc = 0xE231;

    // E1DA: BRA $E229
    cpu.m_pc = 0xE229;

    // E1DF: BRA $E22B
    cpu.m_pc = 0xE22B;

    // E1E4: BRA $E23A
    cpu.m_pc = 0xE23A;

    // E1E7: BITB #$52
    // TODO: Convert BITB #$52

    // E1F1: BRA $E247
    cpu.m_pc = 0xE247;

    // E1F4: BRA $E249
    cpu.m_pc = 0xE249;

    // E1F9: BRA $E24F
    cpu.m_pc = 0xE24F;

    // E1FD: BRA $E244
    cpu.m_pc = 0xE244;

}

} // namespace StarWars