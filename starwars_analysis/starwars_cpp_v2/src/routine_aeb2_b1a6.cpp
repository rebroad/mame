#include "cpu_6809.h"

namespace StarWars {

void routine_aeb2_b1a6_impl(CPU6809& cpu) {
    // Converted from rom_disasm_aeb2_b1a6.md
    // Address: 0xAEB2_B1A6

    label_AEB2:
    // AEB2: LDA #$FF
    cpu.m_a = 0xFF;

    // AEB4: STA <$C4
    cpu.write_memory(0xC4, cpu.m_a);

    // AEB6: STA <$C8
    cpu.write_memory(0xC8, cpu.m_a);

    // AEB8: STA <$CC
    cpu.write_memory(0xCC, cpu.m_a);

    // AEBA: STA <$D0
    cpu.write_memory(0xD0, cpu.m_a);

    // AEBD: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // AEBF: ORA <$BD
    cpu.m_a |= 0xBD;

    // AEC1: BNE $AEC4
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEC4;

    // AEC4: LDA $4B1B
    cpu.m_a = cpu.read_memory(0x4B1B);

    // AEC7: ANDA #$01
    cpu.m_a &= 0x01;

    // AEC9: BEQ $AF25
    if (cpu.zero_flag()) cpu.m_pc = 0xAF25;

    // AECB: LDD #$FF98
    cpu.m_d = 0xFF98;

    // AECE: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AED1: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AED3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AED5: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AED7: SUBD #$0000
    cpu.m_d -= 0x0000;

    // AEDA: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AEDD: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AEDF: LDD #$FE7A
    cpu.m_d = 0xFE7A;

    // AEE2: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AEE5: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AEE7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AEE9: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AEEB: SUBD #$FE7A
    cpu.m_d -= 0xFE7A;

    // AEEE: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AEF1: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AEF3: LDB #$00
    cpu.m_b = 0x00;

    // AEF5: JSR $AF87
    cpu.call_function(0xAF87);

    // AEF8: LDD #$FDFB
    cpu.m_d = 0xFDFB;

    // AEFB: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AEFE: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF00: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF02: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF04: SUBD #$FE63
    cpu.m_d -= 0xFE63;

    // AF07: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF0A: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF0C: LDD #$FE75
    cpu.m_d = 0xFE75;

    // AF0F: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF12: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF14: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF16: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF18: SUBD #$FE75
    cpu.m_d -= 0xFE75;

    // AF1B: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF1E: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF20: LDB #$08
    cpu.m_b = 0x08;

    // AF22: JSR $AF87
    cpu.call_function(0xAF87);

    // AF25: LDA $4B1B
    cpu.m_a = cpu.read_memory(0x4B1B);

    // AF28: ANDA #$01
    cpu.m_a &= 0x01;

    // AF2A: BNE $AF86
    if (!cpu.zero_flag()) cpu.m_pc = 0xAF86;

    // AF2C: LDD #$FDFB
    cpu.m_d = 0xFDFB;

    // AF2F: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AF32: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF34: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF36: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF38: SUBD #$FE63
    cpu.m_d -= 0xFE63;

    // AF3B: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF3E: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF40: LDD #$018B
    cpu.m_d = 0x018B;

    // AF43: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF46: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF48: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF4A: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF4C: SUBD #$018B
    cpu.m_d -= 0x018B;

    // AF4F: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF52: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF54: LDB #$00
    cpu.m_b = 0x00;

    // AF56: JSR $AF87
    cpu.call_function(0xAF87);

    // AF59: LDD #$FF98
    cpu.m_d = 0xFF98;

    // AF5C: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AF5F: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF61: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF63: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF65: SUBD #$0000
    cpu.m_d -= 0x0000;

    // AF68: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF6B: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF6D: LDD #$0186
    cpu.m_d = 0x0186;

    // AF70: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF73: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF75: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF77: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF79: SUBD #$0186
    cpu.m_d -= 0x0186;

    // AF7C: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF7F: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF81: LDB #$08
    cpu.m_b = 0x08;

    // AF83: JSR $AF87
    cpu.call_function(0xAF87);

    // AF87: LDU #$B04F
    cpu.m_u = 0xB04F;

    // AF8A: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // AF8C: LDA <$BD
    cpu.m_a = cpu.read_memory(0xBD);

    // AF8E: BLE $AF9A
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAF9A;

    // AF90: LDB #$3F
    cpu.m_b = 0x3F;

    // AF93: LDA #$63
    cpu.m_a = 0x63;

    // AF95: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF97: JMP $AFEF
    goto label_AFEF;

    // AF9A: LDX #$4C00
    cpu.m_x = 0x4C00;

    // AF9D: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // AF9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFA1: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFA3: BMI $AFA8
    if (cpu.negative_flag()) cpu.m_pc = 0xAFA8;

    // AFA5: ADDD #$0001
    cpu.m_d += 0x0001;

    // AFAA: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFAE: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFB0: ADDD <$03
    cpu.m_d += 0x03;

    // AFB2: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AFB4: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFB6: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AFB8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFBA: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // AFBC: BMI $AFC1
    if (cpu.negative_flag()) cpu.m_pc = 0xAFC1;

    // AFBE: ADDD #$0001
    cpu.m_d += 0x0001;

    // AFC3: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFC7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFC9: ADDD <$01
    cpu.m_d += 0x01;

    // AFCB: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AFCD: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFCF: ORA #$E0
    cpu.m_a |= 0xE0;

    // AFD1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFD3: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // AFD5: ADDD #$0008
    cpu.m_d += 0x0008;

    // AFD8: BLT $AF9D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAF9D;

    // AFDA: SUBD #$0010
    cpu.m_d -= 0x0010;

    // AFDD: BGT $AF9D
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAF9D;

    // AFDF: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFE1: ADDD #$0008
    cpu.m_d += 0x0008;

    // AFE4: BLT $AF9D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAF9D;

    // AFE6: SUBD #$0010
    cpu.m_d -= 0x0010;

    // AFE9: BGT $AF9D
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAF9D;

    // AFEB: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // AFED: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    label_AFEF:
    // AFEF: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFF1: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AFF3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFF5: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // AFF7: ORA #$E0
    cpu.m_a |= 0xE0;

    // AFF9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFFB: LDA <$BD
    cpu.m_a = cpu.read_memory(0xBD);

    // AFFD: BLE $B006
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB006;

    // AFFF: LDD #$A011
    cpu.m_d = 0xA011;

    // B002: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B004: BRA $B044
    goto label_B044;

    // B006: BGE $B044
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB044;

    // B008: LDB $4B22
    cpu.m_b = cpu.read_memory(0x4B22);

    // B00B: LDA #$71
    cpu.m_a = 0x71;

    // B00D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B00F: LDD $4B20
    cpu.m_d = cpu.read_memory16(0x4B20);

    // B012: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B014: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B017: ANDA #$01
    cpu.m_a &= 0x01;

    // B019: BEQ $B020
    if (cpu.zero_flag()) cpu.m_pc = 0xB020;

    // B01B: LDD #$A01C
    cpu.m_d = 0xA01C;

    // B01E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B020: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B023: ANDA #$02
    cpu.m_a &= 0x02;

    // B025: BEQ $B02C
    if (cpu.zero_flag()) cpu.m_pc = 0xB02C;

    // B027: LDD #$A023
    cpu.m_d = 0xA023;

    // B02A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B02C: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B02F: ANDA #$04
    cpu.m_a &= 0x04;

    // B031: BEQ $B038
    if (cpu.zero_flag()) cpu.m_pc = 0xB038;

    // B033: LDD #$A02A
    cpu.m_d = 0xA02A;

    // B036: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B038: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B03B: ANDA #$08
    cpu.m_a &= 0x08;

    // B03D: BEQ $B044
    if (cpu.zero_flag()) cpu.m_pc = 0xB044;

    // B03F: LDD #$A031
    cpu.m_d = 0xA031;

    // B042: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    label_B044:
    // B044: LDD #$7200
    cpu.m_d = 0x7200;

    // B047: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B049: LDD #$8040
    cpu.m_d = 0x8040;

    // B04C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

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
    cpu.m_a = cpu.read_memory(0xBC);

    // B073: BEQ $B094
    if (cpu.zero_flag()) cpu.m_pc = 0xB094;

    // B075: JSR $B095
    cpu.call_function(0xB095);

    // B078: LDD #$0200
    cpu.m_d = 0x0200;

    // B07B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B07E: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B080: BMI $B089
    if (cpu.negative_flag()) cpu.m_pc = 0xB089;

    // B082: LDA #$04
    cpu.m_a = 0x04;

    // B084: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B086: JSR $AD20
    cpu.call_function(0xAD20);

    // B089: LDA <$44
    cpu.m_a = cpu.read_memory(0x44);

    // B08B: BLE $B094
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB094;

    // B08D: LDA #$FF
    cpu.m_a = 0xFF;

    // B08F: STA <$44
    cpu.write_memory(0x44, cpu.m_a);

    // B091: JSR $AD3E
    cpu.call_function(0xAD3E);

    // B095: LDD #$7000
    cpu.m_d = 0x7000;

    // B098: ADDD $5040
    cpu.m_d += 0x5040;

    // B09B: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B09D: LDD #$0000
    cpu.m_d = 0x0000;

    // B0A0: SUBD <$B8
    cpu.m_d -= 0xB8;

    // B0A2: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0A5: ADDD <$B8
    cpu.m_d += 0xB8;

    // B0A7: ADDD $5042
    cpu.m_d += 0x5042;

    // B0AA: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B0AC: LDD #$0000
    cpu.m_d = 0x0000;

    // B0AF: SUBD <$BA
    cpu.m_d -= 0xBA;

    // B0B1: JSR $CDA2
    cpu.call_function(0xCDA2);

    // B0B4: ADDD <$BA
    cpu.m_d += 0xBA;

    // B0B6: ADDD $5044
    cpu.m_d += 0x5044;

    // B0B9: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B0BB: LDD #$F000
    cpu.m_d = 0xF000;

    // B0BE: SUBD <$05
    cpu.m_d -= 0x05;

    // B0C0: LBLT $B158
    // TODO: Convert LBLT $B158

    // B0C4: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B0C7: LDD $5044
    cpu.m_d = cpu.read_memory16(0x5044);

    // B0CA: SUBD <$05
    cpu.m_d -= 0x05;

    // B0CC: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // B0CF: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B0D1: SUBD $5042
    cpu.m_d -= 0x5042;

    // B0D4: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // B0D7: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B0D9: SUBD $5040
    cpu.m_d -= 0x5040;

    // B0DC: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // B0DF: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // B0E2: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // B0E5: LDA #$86
    cpu.m_a = 0x86;

    // B0E7: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B0EA: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B0EC: SUBD $5002
    cpu.m_d -= 0x5002;

    // B0EF: BMI $B0F9
    if (cpu.negative_flag()) cpu.m_pc = 0xB0F9;

    // B0F1: CMPD #$0400
    // TODO: Convert CMPD #$0400

    // B0F5: BGT $B158
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB158;

    // B0F7: BRA $B0FF
    goto label_B0FF;

    // B0F9: CMPD #$FC00
    // TODO: Convert CMPD #$FC00

    // B0FD: BLT $B158
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB158;

    label_B0FF:
    // B0FF: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B101: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B103: SUBD $5004
    cpu.m_d -= 0x5004;

    // B106: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B108: STD <$C0
    cpu.write_memory16(0xC0, cpu.m_d);

    // B10A: LDD #$F000
    cpu.m_d = 0xF000;

    // B10D: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);

    // B10F: LDA #$FF
    cpu.m_a = 0xFF;

    // B111: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B113: LDA #$03
    cpu.m_a = 0x03;

    // B115: STA $4B23
    cpu.write_memory(0x4B23, cpu.m_a);

    // B118: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B11A: SUBA $5040
    cpu.m_a -= 0x5040;

    // B11D: LDB #$03
    cpu.m_b = 0x03;

    // B120: CMPD #$00E0
    // TODO: Convert CMPD #$00E0

    // B124: BCS $B128
    if (cpu.carry_flag()) cpu.m_pc = 0xB128;

    // B126: LDB #$E0
    cpu.m_b = 0xE0;

    // B128: STB $4B22
    cpu.write_memory(0x4B22, cpu.m_b);

    // B12B: LDD #$6280
    cpu.m_d = 0x6280;

    // B12E: STD $4B20
    cpu.write_memory16(0x4B20, cpu.m_d);

    // B131: LDA <$95
    cpu.m_a = cpu.read_memory(0x95);

    // B133: BEQ $B157
    if (cpu.zero_flag()) cpu.m_pc = 0xB157;

    // B135: LDA <$44
    cpu.m_a = cpu.read_memory(0x44);

    // B137: BNE $B157
    if (!cpu.zero_flag()) cpu.m_pc = 0xB157;

    // B139: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B13B: ADDD #$0200
    cpu.m_d += 0x0200;

    // B13E: BLT $B157
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB157;

    // B140: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B143: BGT $B157
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB157;

    // B145: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B147: SUBD <$96
    cpu.m_d -= 0x96;

    // B149: ADDD #$0200
    cpu.m_d += 0x0200;

    // B14C: BLT $B157
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB157;

    // B14E: SUBD #$0400
    cpu.m_d -= 0x0400;

    // B151: BGT $B157
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB157;

    // B153: LDA #$01
    cpu.m_a = 0x01;

    // B155: STA <$44
    cpu.write_memory(0x44, cpu.m_a);

    // B158: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // B15A: LBPL $B1E3
    // TODO: Convert LBPL $B1E3

    // B15E: LDD #$FC00
    cpu.m_d = 0xFC00;

    // B161: SUBD <$03
    cpu.m_d -= 0x03;

    // B163: LBLT $B260
    // TODO: Convert LBLT $B260

    // B167: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B16A: LDD $5042
    cpu.m_d = cpu.read_memory16(0x5042);

    // B16D: SUBD <$03
    cpu.m_d -= 0x03;

    // B16F: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // B172: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B174: SUBD $5044
    cpu.m_d -= 0x5044;

    // B177: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);

    // B17A: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // B17C: SUBD $5040
    cpu.m_d -= 0x5040;

    // B17F: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);

    // B182: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // B185: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // B188: LDA #$86
    cpu.m_a = 0x86;

    // B18A: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B18D: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);

    // B18F: SUBD $5004
    cpu.m_d -= 0x5004;

    // B192: BMI $B19E
    if (cpu.negative_flag()) cpu.m_pc = 0xB19E;

    // B194: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // B198: LBGT $B260
    // TODO: Convert LBGT $B260

    // B19C: BRA $B1A6
    goto label_B1A6;

    // B19E: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // B1A2: LBLT $B260
    // TODO: Convert LBLT $B260

    label_B1A6:
    // B1A6: JMP $b1a6
    goto label_B1A6;

}

} // namespace StarWars