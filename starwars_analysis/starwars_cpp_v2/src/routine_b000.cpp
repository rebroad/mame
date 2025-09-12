#include "cpu_6809.h"

namespace StarWars {

void routine_b000_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b000.md
    // Address: 0xB000

    // B000: SUBA -$F,X
    // TODO: Fix comma operator: SUBA -$F,X

    // B002: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B004: BRA $0044
    cpu.state_.pc += 0x0044;

    // B006: BGE $0044
    // TODO: Convert BGE $0044

    // B008: LDB $4B22
    cpu.state_.b = cpu.read_memory(0x4B22);

    // B00B: LDA #$71
    cpu.state_.a = 0x71;

    // B00D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B00F: LDD $4B20
    cpu.state_.d = cpu.read_memory_word(0x4B20);

    // B012: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B014: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B017: ANDA #$01
    cpu.state_.a &= 0x01;

    // B019: BEQ $0020
    if (cpu.zero_flag()) cpu.state_.pc += 0x0020;

    // B01B: LDD #$A01C
    cpu.state_.d = 0xA01C;

    // B01E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B020: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B023: ANDA #$02
    cpu.state_.a &= 0x02;

    // B025: BEQ $002C
    if (cpu.zero_flag()) cpu.state_.pc += 0x002C;

    // B027: LDD #$A023
    cpu.state_.d = 0xA023;

    // B02A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B02C: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B02F: ANDA #$04
    cpu.state_.a &= 0x04;

    // B031: BEQ $0038
    if (cpu.zero_flag()) cpu.state_.pc += 0x0038;

    // B033: LDD #$A02A
    cpu.state_.d = 0xA02A;

    // B036: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B038: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B03B: ANDA #$08
    cpu.state_.a &= 0x08;

    // B03D: BEQ $0044
    if (cpu.zero_flag()) cpu.state_.pc += 0x0044;

    // B03F: LDD #$A031
    cpu.state_.d = 0xA031;

    // B042: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B044: LDD #$7200
    cpu.state_.d = 0x7200;

    // B047: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B049: LDD #$8040
    cpu.state_.d = 0x8040;

    // B04C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B04F: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // B051: SUBA $2,X
    // TODO: Fix comma operator: SUBA $2,X

    // B053: SUBA $3,X
    // TODO: Fix comma operator: SUBA $3,X

    // B055: SUBA $4,X
    // TODO: Fix comma operator: SUBA $4,X

    // B057: SUBA $5,X
    // TODO: Fix comma operator: SUBA $5,X

    // B059: SUBA $6,X
    // TODO: Fix comma operator: SUBA $6,X

    // B05B: SUBA $7,X
    // TODO: Fix comma operator: SUBA $7,X

    // B05D: SUBA $8,X
    // TODO: Fix comma operator: SUBA $8,X

    // B05F: SUBA $9,X
    // TODO: Fix comma operator: SUBA $9,X

    // B061: SUBA $A,X
    // TODO: Fix comma operator: SUBA $A,X

    // B063: SUBA $B,X
    // TODO: Fix comma operator: SUBA $B,X

    // B065: SUBA $C,X
    // TODO: Fix comma operator: SUBA $C,X

    // B067: SUBA $D,X
    // TODO: Fix comma operator: SUBA $D,X

    // B069: SUBA $E,X
    // TODO: Fix comma operator: SUBA $E,X

    // B06B: SUBA $F,X
    // TODO: Fix comma operator: SUBA $F,X

    // B06D: SUBA -$10,X
    // TODO: Fix comma operator: SUBA -$10,X

    // B06F: SUBA $1,X
    // TODO: Fix comma operator: SUBA $1,X

    // B071: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // B073: BEQ $0094
    if (cpu.zero_flag()) cpu.state_.pc += 0x0094;

    // B075: JSR $B095
    cpu.call_function(0xB095);

    // B078: LDD #$0200
    cpu.state_.d = 0x0200;

    // B07B: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // B07E: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // B080: BMI $0089
    if (cpu.negative_flag()) cpu.state_.pc += 0x0089;

    // B082: LDA #$04
    cpu.state_.a = 0x04;

    // B084: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B086: JSR $AD20
    cpu.call_function(0xAD20);

    // B089: LDA <$44
    cpu.state_.a = cpu.read_memory(0x44);

    // B08B: BLE $0094
    // TODO: Convert BLE $0094

    // B08D: LDA #$FF
    cpu.state_.a = 0xFF;

    // B08F: STA <$44
    cpu.write_memory(0x44, cpu.state_.a);

    // B091: JSR $AD3E
    cpu.call_function(0xAD3E);

    // B095: LDD #$7000
    cpu.state_.d = 0x7000;

    // B098: ADDD $5040
    cpu.state_.d += 0x5040;

    // B09B: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B09D: LDD #$0000
    cpu.state_.d = 0x0000;

    // B0A0: SUBD <$B8
    cpu.state_.d -= 0xB8;

    // B0A2: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0A5: ADDD <$B8
    cpu.state_.d += 0xB8;

    // B0A7: ADDD $5042
    cpu.state_.d += 0x5042;

    // B0AA: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B0AC: LDD #$0000
    cpu.state_.d = 0x0000;

    // B0AF: SUBD <$BA
    cpu.state_.d -= 0xBA;

    // B0B1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0B4: ADDD <$BA
    cpu.state_.d += 0xBA;

    // B0B6: ADDD $5044
    cpu.state_.d += 0x5044;

    // B0B9: STD <$05
    cpu.write_memory(0x05, cpu.state_.d);

    // B0BB: LDD #$F000
    cpu.state_.d = 0xF000;

    // B0BE: SUBD <$05
    cpu.state_.d -= 0x05;

    // B0C0: LBLT $0158
    // TODO: Convert LBLT $0158

    // B0C4: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // B0C7: LDD $5044
    cpu.state_.d = cpu.read_memory_word(0x5044);

    // B0CA: SUBD <$05
    cpu.state_.d -= 0x05;

    // B0CC: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // B0CF: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // B0D1: SUBD $5042
    cpu.state_.d -= 0x5042;

    // B0D4: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // B0D7: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B0D9: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B0DC: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // B0DF: LDD $4700
    cpu.state_.d = cpu.read_memory_word(0x4700);

    // B0E2: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // B0E5: LDA #$86
    cpu.state_.a = 0x86;

    // B0E7: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B0EA: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // B0EC: SUBD $5002
    cpu.state_.d -= 0x5002;

    // B0EF: BMI $00F9
    if (cpu.negative_flag()) cpu.state_.pc += 0x00F9;

    // B0F1: CMPD #$0400
    // TODO: Convert CMPD #$0400

    // B0F5: BGT $0158
    // TODO: Convert BGT $0158

    // B0F7: BRA $00FF
    cpu.state_.pc += 0x00FF;

    // B0F9: CMPD #$FC00
    // TODO: Convert CMPD #$FC00

    // B0FD: BLT $0158
    // TODO: Convert BLT $0158

    // B0FF: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B101: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B103: SUBD $5004
    cpu.state_.d -= 0x5004;

    // B106: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B108: STD <$C0
    cpu.write_memory(0xC0, cpu.state_.d);

    // B10A: LDD #$F000
    cpu.state_.d = 0xF000;

    // B10D: STD <$05
    cpu.write_memory(0x05, cpu.state_.d);

    // B10F: LDA #$FF
    cpu.state_.a = 0xFF;

    // B111: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B113: LDA #$03
    cpu.state_.a = 0x03;

    // B115: STA $4B23
    cpu.write_memory(0x4B23, cpu.state_.a);

    // B118: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // B11A: SUBA $5040
    cpu.state_.a -= 0x5040;

    // B11D: LDB #$03
    cpu.state_.b = 0x03;

    // B120: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B124: BCS $0128
    if (cpu.carry_flag()) cpu.state_.pc += 0x0128;

    // B126: LDB #$E0
    cpu.state_.b = 0xE0;

    // B128: STB $4B22
    cpu.write_memory(0x4B22, cpu.state_.b);

    // B12B: LDD #$6280
    cpu.state_.d = 0x6280;

    // B12E: STD $4B20
    cpu.write_memory(0x4B20, cpu.state_.d);

    // B131: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // B133: BEQ $0157
    if (cpu.zero_flag()) cpu.state_.pc += 0x0157;

    // B135: LDA <$44
    cpu.state_.a = cpu.read_memory(0x44);

    // B137: BNE $0157
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0157;

    // B139: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // B13B: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B13E: BLT $0157
    // TODO: Convert BLT $0157

    // B140: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B143: BGT $0157
    // TODO: Convert BGT $0157

    // B145: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B147: SUBD <$96
    cpu.state_.d -= 0x96;

    // B149: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B14C: BLT $0157
    // TODO: Convert BLT $0157

    // B14E: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B151: BGT $0157
    // TODO: Convert BGT $0157

    // B153: LDA #$01
    cpu.state_.a = 0x01;

    // B155: STA <$44
    cpu.write_memory(0x44, cpu.state_.a);

    // B158: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // B15A: LBPL $01E3
    // TODO: Convert LBPL $01E3

    // B15E: LDD #$FC00
    cpu.state_.d = 0xFC00;

    // B161: SUBD <$03
    cpu.state_.d -= 0x03;

    // B163: LBLT $0260
    // TODO: Convert LBLT $0260

    // B167: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // B16A: LDD $5042
    cpu.state_.d = cpu.read_memory_word(0x5042);

    // B16D: SUBD <$03
    cpu.state_.d -= 0x03;

    // B16F: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // B172: LDD <$05
    cpu.state_.d = cpu.read_memory_word(0x05);

    // B174: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B177: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // B17A: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B17C: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B17F: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // B182: LDD $4700
    cpu.state_.d = cpu.read_memory_word(0x4700);

    // B185: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // B188: LDA #$86
    cpu.state_.a = 0x86;

    // B18A: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B18D: LDD <$05
    cpu.state_.d = cpu.read_memory_word(0x05);

    // B18F: SUBD $5004
    cpu.state_.d -= 0x5004;

    // B192: BMI $019E
    if (cpu.negative_flag()) cpu.state_.pc += 0x019E;

    // B194: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // B198: LBGT $0260
    // TODO: Convert LBGT $0260

    // B19C: BRA $01A6
    cpu.state_.pc += 0x01A6;

    // B19E: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // B1A2: LBLT $0260
    // TODO: Convert LBLT $0260

    // B1A6: STD <$05
    cpu.write_memory(0x05, cpu.state_.d);

    // B1A8: ADDD #$1000
    cpu.state_.d += 0x1000;

    // B1AB: STD <$BE
    cpu.write_memory(0xBE, cpu.state_.d);

    // B1AD: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B1AF: SUBD $5002
    cpu.state_.d -= 0x5002;

    // B1B2: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B1B4: STD <$C0
    cpu.write_memory(0xC0, cpu.state_.d);

    // B1B6: LDD #$FC00
    cpu.state_.d = 0xFC00;

    // B1B9: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B1BB: LDA #$FF
    cpu.state_.a = 0xFF;

    // B1BD: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // B1BF: LDA #$09
    cpu.state_.a = 0x09;

    // B1C1: STA $4B23
    cpu.write_memory(0x4B23, cpu.state_.a);

    // B1C4: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // B1C6: SUBA $5040
    cpu.state_.a -= 0x5040;

    // B1C9: LDB #$03
    cpu.state_.b = 0x03;

    // B1CC: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B1D0: BCS $01D4
    if (cpu.carry_flag()) cpu.state_.pc += 0x01D4;

    // B1D2: LDB #$E0
    cpu.state_.b = 0xE0;

    // B1D4: STB $4B22
    cpu.write_memory(0x4B22, cpu.state_.b);

    // B1D7: LDD #$6280
    cpu.state_.d = 0x6280;

    // B1DA: STD $4B20
    cpu.write_memory(0x4B20, cpu.state_.d);

    // B1DD: LDX #$4989
    cpu.state_.x = 0x4989;

    // B1E0: JMP $B261
    cpu.state_.pc = 0xB261;

    // B1E3: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B1E6: BLT $0260
    // TODO: Convert BLT $0260

    // B1E8: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

    // B1EB: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // B1ED: SUBD $5042
    cpu.state_.d -= 0x5042;

    // B1F0: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // B1F3: LDD <$05
    cpu.state_.d = cpu.read_memory_word(0x05);

    // B1F5: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B1F8: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // B1FB: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // B1FD: SUBD $5040
    cpu.state_.d -= 0x5040;

}

} // namespace StarWars