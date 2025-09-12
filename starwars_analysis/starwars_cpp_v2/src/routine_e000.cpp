#include "cpu_6809.h"

namespace StarWars {

void routine_e000_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_e000.md
    // Address: 0xE000

    // E004: BRA $004C
    cpu.state_.pc = 0xE052;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

    // E010: BRA $0060
    cpu.state_.pc = 0xE072;

    // E015: BRA $006B
    cpu.state_.pc = 0xE082;

    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54

    // E020: ADDD <$43
    cpu.state_.d += 0x43;

    // E028: BRA $006B
    cpu.state_.pc = 0xE095;

    // E02C: BRA $007A
    cpu.state_.pc = 0xE0A8;

    // E032: BRA $0088
    cpu.state_.pc = 0xE0BC;

    // E038: ADDD <$35
    cpu.state_.d += 0x35;

    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E043: BRA $0098
    cpu.state_.pc = 0xE0DD;

    // E04C: BRA $008F
    cpu.state_.pc = 0xE0DD;

    // E050: BRA $00A6
    cpu.state_.pc = 0xE0F8;

    // E056: ADDD <$45
    cpu.state_.d += 0x45;

    // E05E: BRA $00B0
    cpu.state_.pc = 0xE110;

    // E063: BRA $00A6
    cpu.state_.pc = 0xE10B;

    // E068: ANDB #$44
    cpu.state_.b &= 0x44;

    // E06E: BRA $00C3
    cpu.state_.pc = 0xE133;

    // E073: BRA $00B9
    cpu.state_.pc = 0xE12E;

    // E07C: ANDB #$45
    cpu.state_.b &= 0x45;

    // E084: BRA $00D6
    cpu.state_.pc = 0xE15C;

    // E089: BRA $00D8
    cpu.state_.pc = 0xE163;

    // E08F: ANDB #$42
    cpu.state_.b &= 0x42;

    // E095: BRA $00DD
    cpu.state_.pc = 0xE174;

    // E099: BRA $00ED
    cpu.state_.pc = 0xE188;

    // E0A3: BRA $00EA
    cpu.state_.pc = 0xE18F;

    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35

    // E0AB: BGE $00DD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xE18A;

    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E0AF: BRA $00D1
    cpu.state_.pc = 0xE182;

    // E0B1: EORB <$41
    cpu.state_.b ^= 0x41;

    // E0B7: BRA $010D
    cpu.state_.pc = 0xE1C6;

    // E0BA: BRA $0100
    cpu.state_.pc = 0xE1BC;

    // E0C4: BRA $0119
    cpu.state_.pc = 0xE1DF;

    // E0CA: ANDB #$53
    cpu.state_.b &= 0x53;

    // E0D1: BRA $0114
    cpu.state_.pc = 0xE1E7;

    // E0D4: BRA $011C
    cpu.state_.pc = 0xE1F2;

    // E0D9: BRA $012E
    cpu.state_.pc = 0xE209;

    // E0E1: EORB #$53
    cpu.state_.b ^= 0x53;

    // E0EA: BRA $0143
    cpu.state_.pc = 0xE22F;

    // E0EF: BRA $0133
    cpu.state_.pc = 0xE224;

    // E0F4: ADDD <$53
    cpu.state_.d += 0x53;

    // E0FA: BRA $0142
    cpu.state_.pc = 0xE23E;

    // E103: ADDD <$53
    cpu.state_.d += 0x53;

    // E109: BRA $015F
    cpu.state_.pc = 0xE26A;

    // E10D: BRA $0155
    cpu.state_.pc = 0xE264;

    // E115: ADDD <$41
    cpu.state_.d += 0x41;

    // E11B: BRA $0160
    cpu.state_.pc = 0xE27D;

    // E123: ADDD <$55
    cpu.state_.d += 0x55;

    // E127: BRA $017D
    cpu.state_.pc = 0xE2A6;

    // E12B: BRA $0173
    cpu.state_.pc = 0xE2A0;

    // E130: BITB #$20
    // TODO: Convert BITB #$20

    // E135: BRA $018C
    cpu.state_.pc = 0xE2C3;

    // E13B: BRA $0191
    cpu.state_.pc = 0xE2CE;

    // E13F: BRA $0187
    cpu.state_.pc = 0xE2C8;

    // E144: BITB #$4F
    // TODO: Convert BITB #$4F

    // E148: BLT $01A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xE2EB;

    // E14C: BRA $0199
    cpu.state_.pc = 0xE2E7;

    // E153: BRA $019E
    cpu.state_.pc = 0xE2F3;

    // E156: BRA $019F
    cpu.state_.pc = 0xE2F7;

    // E15B: BRA $019F
    cpu.state_.pc = 0xE2FC;

    // E15F: BRA $01A9
    cpu.state_.pc = 0xE30A;

    // E162: ADDD <$50
    cpu.state_.d += 0x50;

    // E16B: BRA $01B6
    cpu.state_.pc = 0xE323;

    // E16E: BRA $01B6
    cpu.state_.pc = 0xE326;

    // E173: BRA $01CC
    cpu.state_.pc = 0xE341;

    // E17A: BRA $01D0
    cpu.state_.pc = 0xE34C;

    // E17E: BRA $01C6
    cpu.state_.pc = 0xE346;

    // E184: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U

    // E188: BRA $01CF
    cpu.state_.pc = 0xE359;

    // E18F: BEQ $01E4
    if (cpu.zero_flag()) cpu.state_.pc = 0xE375;

    // E191: BRA $01D7
    cpu.state_.pc = 0xE36A;

    // E197: BRA $01EC
    cpu.state_.pc = 0xE385;

    // E19C: BGE $01BE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xE35C;

    // E1A3: BRA $01F9
    cpu.state_.pc = 0xE39E;

    // E1A6: BITB #$43
    // TODO: Convert BITB #$43

    // E1AE: BRA $01FF
    cpu.state_.pc = 0xE3AF;

    // E1B1: BRA $01F7
    cpu.state_.pc = 0xE3AA;

    // E1B7: BRA $020F
    cpu.state_.pc = 0xE3C8;

    // E1BD: BGE $01DF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xE39E;

    // E1C4: BRA $021A
    cpu.state_.pc = 0xE3E0;

    // E1C7: BITB #$52
    // TODO: Convert BITB #$52

    // E1CD: BRA $021F
    cpu.state_.pc = 0xE3EE;

    // E1D4: BGT $01F6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xE3CC;

    // E1D6: BRA $0231
    cpu.state_.pc = 0xE409;

    // E1DA: BRA $0229
    cpu.state_.pc = 0xE405;

    // E1DF: BRA $022B
    cpu.state_.pc = 0xE40C;

    // E1E4: BRA $023A
    cpu.state_.pc = 0xE420;

    // E1E7: BITB #$52
    // TODO: Convert BITB #$52

    // E1F1: BRA $0247
    cpu.state_.pc = 0xE43A;

    // E1F4: BRA $0249
    cpu.state_.pc = 0xE43F;

    // E1F9: BRA $024F
    cpu.state_.pc = 0xE44A;

    // E1FD: BRA $0244
    cpu.state_.pc = 0xE443;

}

} // namespace StarWars