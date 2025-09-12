#include "cpu_6809.h"

namespace StarWars {

void routine_aebd_impl(CPU6809& cpu) {
    // Converted from rom_disasm_aebd.md
    // Address: 0xAEBD

    // AEBD: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // AEBF: ORA <$BD
    cpu.m_a |= 0xBD;

    // AEC1: BNE $0007
    if (!cpu.zero_flag()) cpu.m_pc = 0xAECA;

    // AEC4: LDA $4B1B
    cpu.m_a = cpu.read_memory(0x4B1B);

    // AEC7: ANDA #$01
    cpu.m_a &= 0x01;

    // AEC9: BEQ $0068
    if (cpu.zero_flag()) cpu.m_pc = 0xAF33;

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

    // AF2A: BNE $00C9
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEF5;

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

    // AF8E: BLE $00DD
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAF6D;

    // AF90: LDB #$3F
    cpu.m_b = 0x3F;

    // AF93: LDA #$63
    cpu.m_a = 0x63;

    // AF95: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF97: JMP $AFEF
    cpu.m_pc = 0xAFEF;

    // AF9A: LDX #$4C00
    cpu.m_x = 0x4C00;

    // AF9D: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // AF9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFA1: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFA3: BMI $00EB
    if (cpu.negative_flag()) cpu.m_pc = 0xAF90;

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

    // AFBC: BMI $0104
    if (cpu.negative_flag()) cpu.m_pc = 0xAFC2;

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

    // AFD8: BLT $00E0
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAFBA;

    // AFDA: SUBD #$0010
    cpu.m_d -= 0x0010;

    // AFDD: BGT $00E0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAFBF;

    // AFDF: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFE1: ADDD #$0008
    cpu.m_d += 0x0008;

    // AFE4: BLT $00E0
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAFC6;

    // AFE6: SUBD #$0010
    cpu.m_d -= 0x0010;

    // AFE9: BGT $00E0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAFCB;

    // AFEB: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // AFED: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

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

    // AFFD: BLE $0149
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB048;

    // AFFF: LDD #$A011
    cpu.m_d = 0xA011;

    // B002: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B004: BRA $0187
    cpu.m_pc = 0xAF8D;

    // B006: BGE $0187
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAF8F;

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

    // B019: BEQ $0163
    if (cpu.zero_flag()) cpu.m_pc = 0xB07E;

    // B01B: LDD #$A01C
    cpu.m_d = 0xA01C;

    // B01E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B020: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B023: ANDA #$02
    cpu.m_a &= 0x02;

    // B025: BEQ $016F
    if (cpu.zero_flag()) cpu.m_pc = 0xB096;

    // B027: LDD #$A023
    cpu.m_d = 0xA023;

    // B02A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B02C: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B02F: ANDA #$04
    cpu.m_a &= 0x04;

    // B031: BEQ $017B
    if (cpu.zero_flag()) cpu.m_pc = 0xB0AE;

    // B033: LDD #$A02A
    cpu.m_d = 0xA02A;

    // B036: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B038: LDA $4B23
    cpu.m_a = cpu.read_memory(0x4B23);

    // B03B: ANDA #$08
    cpu.m_a &= 0x08;

    // B03D: BEQ $0187
    if (cpu.zero_flag()) cpu.m_pc = 0xAFC6;

    // B03F: LDD #$A031
    cpu.m_d = 0xA031;

    // B042: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

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

    // B073: BEQ $01D7
    if (cpu.zero_flag()) cpu.m_pc = 0xB04C;

    // B075: JSR $B095
    cpu.call_function(0xB095);

    // B078: LDD #$0200
    cpu.m_d = 0x0200;

    // B07B: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // B07E: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);

    // B080: BMI $01CC
    if (cpu.negative_flag()) cpu.m_pc = 0xB04E;

    // B082: LDA #$04
    cpu.m_a = 0x04;

    // B084: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // B086: JSR $AD20
    cpu.call_function(0xAD20);

    // B089: LDA <$44
    cpu.m_a = cpu.read_memory(0x44);

    // B08B: BLE $01D7
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xB064;

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

}

} // namespace StarWars