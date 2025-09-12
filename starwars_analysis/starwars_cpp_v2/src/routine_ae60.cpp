#include "cpu_6809.h"

namespace StarWars {

void routine_ae60_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_ae60.md
    // Address: 0xAE60

    // AE60: LDA <$BD
    cpu.state_.a = cpu.read_memory(0xBD);

    // AE62: BLE $000E
    // TODO: Convert BLE $000E

    // AE64: DEC <$BD
    // TODO: Convert DEC <$BD

    // AE66: LDA #$00
    cpu.state_.a = 0x00;

    // AE68: STA <$B7
    cpu.write_memory(0xB7, cpu.state_.a);

    // AE6A: STA <$BC
    cpu.write_memory(0xBC, cpu.state_.a);

    // AE6C: BRA $0012
    cpu.state_.pc += 0x0012;

    // AE6E: LDA #$00
    cpu.state_.a = 0x00;

    // AE70: STA <$BD
    cpu.write_memory(0xBD, cpu.state_.a);

    // AE72: LDA #$00
    cpu.state_.a = 0x00;

    // AE74: STA <$BC
    cpu.write_memory(0xBC, cpu.state_.a);

    // AE76: ORCC #$10
    cpu.state_.cc |= 0x10;

    // AE78: LDA <$31
    cpu.state_.a = cpu.read_memory(0x31);

    // AE7A: BEQ $0027
    if (cpu.zero_flag()) cpu.state_.pc += 0x0027;

    // AE7C: INC $4B1B
    // TODO: Convert INC $4B1B

    // AE7F: CLR <$BD
    cpu.write_memory(0xBD, 0);

    // AE81: LDB #$08
    cpu.state_.b = 0x08;

    // AE83: STB <$B7
    cpu.write_memory(0xB7, cpu.state_.b);

    // AE85: CLR <$31
    cpu.write_memory(0x31, 0);

    // AE87: LDA <$B7
    cpu.state_.a = cpu.read_memory(0xB7);

    // AE89: BLE $003F
    // TODO: Convert BLE $003F

    // AE8B: DEC <$B7
    // TODO: Convert DEC <$B7

    // AE8D: STA <$BC
    cpu.write_memory(0xBC, cpu.state_.a);

    // AE8F: LDD <$74
    cpu.state_.d = cpu.read_memory_word(0x74);

    // AE91: STD <$B8
    cpu.write_memory(0xB8, cpu.state_.d);

    // AE93: LDD <$6B
    cpu.state_.d = cpu.read_memory_word(0x6B);

    // AE95: STD <$BA
    cpu.write_memory(0xBA, cpu.state_.d);

    // AE97: LDD <$2D
    cpu.state_.d = cpu.read_memory_word(0x2D);

    // AE99: STD <$B3
    cpu.write_memory(0xB3, cpu.state_.d);

    // AE9B: LDD <$2F
    cpu.state_.d = cpu.read_memory_word(0x2F);

    // AE9D: STD <$B5
    cpu.write_memory(0xB5, cpu.state_.d);

    // AE9F: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // AEA1: LDA <$B7
    cpu.state_.a = cpu.read_memory(0xB7);

    // AEA3: CMPA #$07
    cpu.compare_a(0x07);

    // AEA5: BNE $0052
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0052;

    // AEA7: LDA $4B36
    cpu.state_.a = cpu.read_memory(0x4B36);

    // AEAA: BNE $004F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x004F;

    // AEAC: DEC $4B36
    // TODO: Convert DEC $4B36

    // AEAF: JSR $BE16
    cpu.call_function(0xBE16);

    // AEB2: LDA #$FF
    cpu.state_.a = 0xFF;

    // AEB4: STA <$C4
    cpu.write_memory(0xC4, cpu.state_.a);

    // AEB6: STA <$C8
    cpu.write_memory(0xC8, cpu.state_.a);

    // AEB8: STA <$CC
    cpu.write_memory(0xCC, cpu.state_.a);

    // AEBA: STA <$D0
    cpu.write_memory(0xD0, cpu.state_.a);

    // AEBD: LDA <$BC
    cpu.state_.a = cpu.read_memory(0xBC);

    // AEBF: ORA <$BD
    cpu.state_.a |= 0xBD;

    // AEC1: BNE $0064
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0064;

    // AEC4: LDA $4B1B
    cpu.state_.a = cpu.read_memory(0x4B1B);

    // AEC7: ANDA #$01
    cpu.state_.a &= 0x01;

    // AEC9: BEQ $00C5
    if (cpu.zero_flag()) cpu.state_.pc += 0x00C5;

    // AECB: LDD #$FF98
    cpu.state_.d = 0xFF98;

    // AECE: ADDD $4B1E
    cpu.state_.d += 0x4B1E;

    // AED1: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AED3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AED5: LDD <$B5
    cpu.state_.d = cpu.read_memory_word(0xB5);

    // AED7: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // AEDA: SUBD $4B1E
    cpu.state_.d -= 0x4B1E;

    // AEDD: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AEDF: LDD #$FE7A
    cpu.state_.d = 0xFE7A;

    // AEE2: ADDD $4B1C
    cpu.state_.d += 0x4B1C;

    // AEE5: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AEE7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AEE9: LDD <$B3
    cpu.state_.d = cpu.read_memory_word(0xB3);

    // AEEB: SUBD #$FE7A
    cpu.state_.d -= 0xFE7A;

    // AEEE: SUBD $4B1C
    cpu.state_.d -= 0x4B1C;

    // AEF1: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AEF3: LDB #$00
    cpu.state_.b = 0x00;

    // AEF5: JSR $AF87
    cpu.call_function(0xAF87);

    // AEF8: LDD #$FDFB
    cpu.state_.d = 0xFDFB;

    // AEFB: ADDD $4B1E
    cpu.state_.d += 0x4B1E;

    // AEFE: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF00: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF02: LDD <$B5
    cpu.state_.d = cpu.read_memory_word(0xB5);

    // AF04: SUBD #$FE63
    cpu.state_.d -= 0xFE63;

    // AF07: SUBD $4B1E
    cpu.state_.d -= 0x4B1E;

    // AF0A: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AF0C: LDD #$FE75
    cpu.state_.d = 0xFE75;

    // AF0F: ADDD $4B1C
    cpu.state_.d += 0x4B1C;

    // AF12: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF14: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF16: LDD <$B3
    cpu.state_.d = cpu.read_memory_word(0xB3);

    // AF18: SUBD #$FE75
    cpu.state_.d -= 0xFE75;

    // AF1B: SUBD $4B1C
    cpu.state_.d -= 0x4B1C;

    // AF1E: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AF20: LDB #$08
    cpu.state_.b = 0x08;

    // AF22: JSR $AF87
    cpu.call_function(0xAF87);

    // AF25: LDA $4B1B
    cpu.state_.a = cpu.read_memory(0x4B1B);

    // AF28: ANDA #$01
    cpu.state_.a &= 0x01;

    // AF2A: BNE $0126
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0126;

    // AF2C: LDD #$FDFB
    cpu.state_.d = 0xFDFB;

    // AF2F: ADDD $4B1E
    cpu.state_.d += 0x4B1E;

    // AF32: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF34: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF36: LDD <$B5
    cpu.state_.d = cpu.read_memory_word(0xB5);

    // AF38: SUBD #$FE63
    cpu.state_.d -= 0xFE63;

    // AF3B: SUBD $4B1E
    cpu.state_.d -= 0x4B1E;

    // AF3E: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AF40: LDD #$018B
    cpu.state_.d = 0x018B;

    // AF43: ADDD $4B1C
    cpu.state_.d += 0x4B1C;

    // AF46: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF48: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF4A: LDD <$B3
    cpu.state_.d = cpu.read_memory_word(0xB3);

    // AF4C: SUBD #$018B
    cpu.state_.d -= 0x018B;

    // AF4F: SUBD $4B1C
    cpu.state_.d -= 0x4B1C;

    // AF52: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AF54: LDB #$00
    cpu.state_.b = 0x00;

    // AF56: JSR $AF87
    cpu.call_function(0xAF87);

    // AF59: LDD #$FF98
    cpu.state_.d = 0xFF98;

    // AF5C: ADDD $4B1E
    cpu.state_.d += 0x4B1E;

    // AF5F: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF61: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF63: LDD <$B5
    cpu.state_.d = cpu.read_memory_word(0xB5);

    // AF65: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // AF68: SUBD $4B1E
    cpu.state_.d -= 0x4B1E;

    // AF6B: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AF6D: LDD #$0186
    cpu.state_.d = 0x0186;

    // AF70: ADDD $4B1C
    cpu.state_.d += 0x4B1C;

    // AF73: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AF75: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF77: LDD <$B3
    cpu.state_.d = cpu.read_memory_word(0xB3);

    // AF79: SUBD #$0186
    cpu.state_.d -= 0x0186;

    // AF7C: SUBD $4B1C
    cpu.state_.d -= 0x4B1C;

    // AF7F: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AF81: LDB #$08
    cpu.state_.b = 0x08;

    // AF83: JSR $AF87
    cpu.call_function(0xAF87);

    // AF87: LDU #$B04F
    cpu.state_.u = 0xB04F;

    // AF8A: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // AF8C: LDA <$BD
    cpu.state_.a = cpu.read_memory(0xBD);

    // AF8E: BLE $013A
    // TODO: Convert BLE $013A

    // AF90: LDB #$3F
    cpu.state_.b = 0x3F;

    // AF93: LDA #$63
    cpu.state_.a = 0x63;

    // AF95: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AF97: JMP $AFEF
    cpu.state_.pc = 0xAFEF;

    // AF9A: LDX #$4C00
    cpu.state_.x = 0x4C00;

    // AF9D: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // AF9F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFA1: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // AFA3: BMI $0148
    if (cpu.negative_flag()) cpu.state_.pc += 0x0148;

    // AFA5: ADDD #$0001
    cpu.state_.d += 0x0001;

    // AFAA: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFAE: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFB0: ADDD <$03
    cpu.state_.d += 0x03;

    // AFB2: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // AFB4: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFB6: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AFB8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFBA: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // AFBC: BMI $0161
    if (cpu.negative_flag()) cpu.state_.pc += 0x0161;

    // AFBE: ADDD #$0001
    cpu.state_.d += 0x0001;

    // AFC3: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFC7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFC9: ADDD <$01
    cpu.state_.d += 0x01;

    // AFCB: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // AFCD: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFCF: ORA #$E0
    cpu.state_.a |= 0xE0;

    // AFD1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFD3: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // AFD5: ADDD #$0008
    cpu.state_.d += 0x0008;

    // AFD8: BLT $013D
    // TODO: Convert BLT $013D

    // AFDA: SUBD #$0010
    cpu.state_.d -= 0x0010;

    // AFDD: BGT $013D
    // TODO: Convert BGT $013D

    // AFDF: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // AFE1: ADDD #$0008
    cpu.state_.d += 0x0008;

    // AFE4: BLT $013D
    // TODO: Convert BLT $013D

    // AFE6: SUBD #$0010
    cpu.state_.d -= 0x0010;

    // AFE9: BGT $013D
    // TODO: Convert BGT $013D

    // AFEB: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // AFED: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFEF: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // AFF1: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AFF3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFF5: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // AFF7: ORA #$E0
    cpu.state_.a |= 0xE0;

    // AFF9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AFFB: LDA <$BD
    cpu.state_.a = cpu.read_memory(0xBD);

    // AFFD: BLE $01A6
    // TODO: Convert BLE $01A6

    // AFFF: LDD #$A011
    cpu.state_.d = 0xA011;

    // B002: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B004: BRA $01E4
    cpu.state_.pc += 0x01E4;

    // B006: BGE $01E4
    // TODO: Convert BGE $01E4

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

    // B019: BEQ $01C0
    if (cpu.zero_flag()) cpu.state_.pc += 0x01C0;

    // B01B: LDD #$A01C
    cpu.state_.d = 0xA01C;

    // B01E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B020: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B023: ANDA #$02
    cpu.state_.a &= 0x02;

    // B025: BEQ $01CC
    if (cpu.zero_flag()) cpu.state_.pc += 0x01CC;

    // B027: LDD #$A023
    cpu.state_.d = 0xA023;

    // B02A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B02C: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B02F: ANDA #$04
    cpu.state_.a &= 0x04;

    // B031: BEQ $01D8
    if (cpu.zero_flag()) cpu.state_.pc += 0x01D8;

    // B033: LDD #$A02A
    cpu.state_.d = 0xA02A;

    // B036: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B038: LDA $4B23
    cpu.state_.a = cpu.read_memory(0x4B23);

    // B03B: ANDA #$08
    cpu.state_.a &= 0x08;

    // B03D: BEQ $01E4
    if (cpu.zero_flag()) cpu.state_.pc += 0x01E4;

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

    // B05F: SUBA $0,X
    // TODO: Fix comma operator: SUBA $0,X

}

} // namespace StarWars