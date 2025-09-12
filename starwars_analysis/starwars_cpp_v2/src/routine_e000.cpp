#include "cpu_6809.h"

namespace StarWars {

void routine_e000_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_e000.md
    // Address: 0xE000

    // E004: BRA $004C
    cpu.state_.pc += 0x004C;

    // E009: BITB #$50
    // TODO: Convert BITB #$50

    // E010: BRA $0060
    cpu.state_.pc += 0x0060;

    // E015: BRA $006B
    cpu.state_.pc += 0x006B;

    // E01A: SBCB <$54
    // TODO: Convert SBCB <$54

    // E020: ADDD <$43
    cpu.state_.d += 0x43;

    // E028: BRA $006B
    cpu.state_.pc += 0x006B;

    // E02C: BRA $007A
    cpu.state_.pc += 0x007A;

    // E032: BRA $0088
    cpu.state_.pc += 0x0088;

    // E038: ADDD <$35
    cpu.state_.d += 0x35;

    // E03A: LEAX $C,Y
    // TODO: Fix comma operator: LEAX $C,Y

    // E03C: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E03E: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E043: BRA $0098
    cpu.state_.pc += 0x0098;

    // E04C: BRA $008F
    cpu.state_.pc += 0x008F;

    // E050: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // E056: ADDD <$45
    cpu.state_.d += 0x45;

    // E05E: BRA $00B0
    cpu.state_.pc += 0x00B0;

    // E063: BRA $00A6
    cpu.state_.pc += 0x00A6;

    // E068: ANDB #$44
    cpu.state_.b &= 0x44;

    // E06E: BRA $00C3
    cpu.state_.pc += 0x00C3;

    // E073: BRA $00B9
    cpu.state_.pc += 0x00B9;

    // E07C: ANDB #$45
    cpu.state_.b &= 0x45;

    // E084: BRA $00D6
    cpu.state_.pc += 0x00D6;

    // E089: BRA $00D8
    cpu.state_.pc += 0x00D8;

    // E08F: ANDB #$42
    cpu.state_.b &= 0x42;

    // E095: BRA $00DD
    cpu.state_.pc += 0x00DD;

    // E099: BRA $00ED
    cpu.state_.pc += 0x00ED;

    // E0A3: BRA $00EA
    cpu.state_.pc += 0x00EA;

    // E0A9: ADCB <$35
    // TODO: Convert ADCB <$35

    // E0AB: BGE $00DD
    // TODO: Convert BGE $00DD

    // E0AD: LEAX -$10,Y
    // TODO: Fix comma operator: LEAX -$10,Y

    // E0AF: BRA $00D1
    cpu.state_.pc += 0x00D1;

    // E0B1: EORB <$41
    cpu.state_.b ^= 0x41;

    // E0B7: BRA $010D
    cpu.state_.pc += 0x010D;

    // E0BA: BRA $0100
    cpu.state_.pc += 0x0100;

    // E0C4: BRA $0119
    cpu.state_.pc += 0x0119;

    // E0CA: ANDB #$53
    cpu.state_.b &= 0x53;

    // E0D1: BRA $0114
    cpu.state_.pc += 0x0114;

    // E0D4: BRA $011C
    cpu.state_.pc += 0x011C;

    // E0D9: BRA $012E
    cpu.state_.pc += 0x012E;

    // E0E1: EORB #$53
    cpu.state_.b ^= 0x53;

    // E0EA: BRA $0143
    cpu.state_.pc += 0x0143;

    // E0EF: BRA $0133
    cpu.state_.pc += 0x0133;

    // E0F4: ADDD <$53
    cpu.state_.d += 0x53;

    // E0FA: BRA $0142
    cpu.state_.pc += 0x0142;

    // E103: ADDD <$53
    cpu.state_.d += 0x53;

    // E109: BRA $015F
    cpu.state_.pc += 0x015F;

    // E10D: BRA $0155
    cpu.state_.pc += 0x0155;

    // E115: ADDD <$41
    cpu.state_.d += 0x41;

    // E11B: BRA $0160
    cpu.state_.pc += 0x0160;

    // E123: ADDD <$55
    cpu.state_.d += 0x55;

    // E127: BRA $017D
    cpu.state_.pc += 0x017D;

    // E12B: BRA $0173
    cpu.state_.pc += 0x0173;

    // E130: BITB #$20
    // TODO: Convert BITB #$20

    // E135: BRA $018C
    cpu.state_.pc += 0x018C;

    // E13B: BRA $0191
    cpu.state_.pc += 0x0191;

    // E13F: BRA $0187
    cpu.state_.pc += 0x0187;

    // E144: BITB #$4F
    // TODO: Convert BITB #$4F

    // E148: BLT $01A1
    // TODO: Convert BLT $01A1

    // E14C: BRA $0199
    cpu.state_.pc += 0x0199;

    // E153: BRA $019E
    cpu.state_.pc += 0x019E;

    // E156: BRA $019F
    cpu.state_.pc += 0x019F;

    // E15B: BRA $019F
    cpu.state_.pc += 0x019F;

    // E15F: BRA $01A9
    cpu.state_.pc += 0x01A9;

    // E162: ADDD <$50
    cpu.state_.d += 0x50;

    // E16B: BRA $01B6
    cpu.state_.pc += 0x01B6;

    // E16E: BRA $01B6
    cpu.state_.pc += 0x01B6;

    // E173: BRA $01CC
    cpu.state_.pc += 0x01CC;

    // E17A: BRA $01D0
    cpu.state_.pc += 0x01D0;

    // E17E: BRA $01C6
    cpu.state_.pc += 0x01C6;

    // E184: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U

    // E188: BRA $01CF
    cpu.state_.pc += 0x01CF;

    // E18F: BEQ $01E4
    if (cpu.zero_flag()) cpu.state_.pc += 0x01E4;

    // E191: BRA $01D7
    cpu.state_.pc += 0x01D7;

    // E197: BRA $01EC
    cpu.state_.pc += 0x01EC;

    // E19C: BGE $01BE
    // TODO: Convert BGE $01BE

    // E1A3: BRA $01F9
    cpu.state_.pc += 0x01F9;

    // E1A6: BITB #$43
    // TODO: Convert BITB #$43

    // E1AE: BRA $01FF
    cpu.state_.pc += 0x01FF;

    // E1B1: BRA $01F7
    cpu.state_.pc += 0x01F7;

    // E1B7: BRA $020F
    cpu.state_.pc += 0x020F;

    // E1BD: BGE $01DF
    // TODO: Convert BGE $01DF

    // E1C4: BRA $021A
    cpu.state_.pc += 0x021A;

    // E1C7: BITB #$52
    // TODO: Convert BITB #$52

    // E1CD: BRA $021F
    cpu.state_.pc += 0x021F;

    // E1D4: BGT $01F6
    // TODO: Convert BGT $01F6

    // E1D6: BRA $0231
    cpu.state_.pc += 0x0231;

    // E1DA: BRA $0229
    cpu.state_.pc += 0x0229;

    // E1DF: BRA $022B
    cpu.state_.pc += 0x022B;

    // E1E4: BRA $023A
    cpu.state_.pc += 0x023A;

    // E1E7: BITB #$52
    // TODO: Convert BITB #$52

    // E1F1: BRA $0247
    cpu.state_.pc += 0x0247;

    // E1F4: BRA $0249
    cpu.state_.pc += 0x0249;

    // E1F9: BRA $024F
    cpu.state_.pc += 0x024F;

    // E1FD: BRA $0244
    cpu.state_.pc += 0x0244;

}

} // namespace StarWars