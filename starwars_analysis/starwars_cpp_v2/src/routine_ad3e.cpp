#include "cpu_6809.h"

namespace StarWars {

void routine_ad3e_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_ad3e.md
    // Address: 0xAD3E

    // AD3E: LDA #$01
    cpu.state_.a = 0x01;

    // AD40: STA <$45
    cpu.write_memory(0x45, cpu.state_.a);

    // AD42: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // AD45: ADDD #$0100
    cpu.state_.d += 0x0100;

    // AD48: STD <$46
    cpu.write_memory(0x46, cpu.state_.d);

    // AD4A: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // AD4D: STD <$48
    cpu.write_memory(0x48, cpu.state_.d);

    // AD4F: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // AD52: STD <$4A
    cpu.write_memory(0x4A, cpu.state_.d);

    // AD54: LDX #$494B
    cpu.state_.x = 0x494B;

    // AD57: STX <$CA
    cpu.write_memory(0xCA, cpu.state_.x);

    // AD59: JSR $AD20
    cpu.call_function(0xAD20);

    // AD5C: LDX <$CA
    cpu.state_.x = cpu.read_memory_word(0xCA);

    // AD5E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AD60: CMPX #$496F
    cpu.compare_x(0x496F);

    // AD63: BCS $0019
    if (cpu.carry_flag()) cpu.state_.pc += 0x0019;

    // AD65: JSR $BDA3
    cpu.call_function(0xBDA3);

    // AD68: JSR $BDD5
    cpu.call_function(0xBDD5);

    // AD6C: LDA <$45
    cpu.state_.a = cpu.read_memory(0x45);

    // AD6E: BEQ $0070
    if (cpu.zero_flag()) cpu.state_.pc += 0x0070;

    // AD70: LDD <$46
    cpu.state_.d = cpu.read_memory_word(0x46);

    // AD72: ADDD #$0300
    cpu.state_.d += 0x0300;

    // AD75: ADDD $5086
    cpu.state_.d += 0x5086;

    // AD78: CMPD <$96
    // TODO: Convert CMPD <$96

    // AD7B: BMI $0041
    if (cpu.negative_flag()) cpu.state_.pc += 0x0041;

    // AD7D: LDD <$96
    cpu.state_.d = cpu.read_memory_word(0x96);

    // AD7F: STD <$46
    cpu.write_memory(0x46, cpu.state_.d);

    // AD81: LDD <$96
    cpu.state_.d = cpu.read_memory_word(0x96);

    // AD83: SUBD <$46
    cpu.state_.d -= 0x46;

    // AD85: SUBD #$1000
    cpu.state_.d -= 0x1000;

    // AD88: CMPD <$4A
    // TODO: Convert CMPD <$4A

    // AD8B: BGE $0051
    // TODO: Convert BGE $0051

    // AD8D: STD <$4A
    cpu.write_memory(0x4A, cpu.state_.d);

    // AD8F: LDD <$96
    cpu.state_.d = cpu.read_memory_word(0x96);

    // AD91: SUBD <$46
    cpu.state_.d -= 0x46;

    // AD93: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AD96: TST <$48
    // TODO: Convert TST <$48

    // AD98: BMI $0065
    if (cpu.negative_flag()) cpu.state_.pc += 0x0065;

    // AD9A: CMPD <$48
    // TODO: Convert CMPD <$48

    // AD9D: BGE $0063
    // TODO: Convert BGE $0063

    // AD9F: STD <$48
    cpu.write_memory(0x48, cpu.state_.d);

    // ADA1: BRA $0070
    cpu.state_.pc += 0x0070;

    // ADA5: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // ADA7: CMPD <$48
    // TODO: Convert CMPD <$48

    // ADAA: BLE $0070
    // TODO: Convert BLE $0070

    // ADAC: STD <$48
    cpu.write_memory(0x48, cpu.state_.d);

    // ADAF: LDA <$45
    cpu.state_.a = cpu.read_memory(0x45);

    // ADB1: BEQ $0095
    if (cpu.zero_flag()) cpu.state_.pc += 0x0095;

    // ADB3: LDD <$46
    cpu.state_.d = cpu.read_memory_word(0x46);

    // ADB5: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // ADB8: LDD <$48
    cpu.state_.d = cpu.read_memory_word(0x48);

    // ADBA: ADDD #$0080
    cpu.state_.d += 0x0080;

    // ADBD: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // ADC0: LDD <$4A
    cpu.state_.d = cpu.read_memory_word(0x4A);

    // ADC2: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // ADC5: JSR $ADD4
    cpu.call_function(0xADD4);

    // ADC8: LDD <$48
    cpu.state_.d = cpu.read_memory_word(0x48);

    // ADCA: SUBD #$0080
    cpu.state_.d -= 0x0080;

    // ADCD: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // ADD0: JSR $ADD4
    cpu.call_function(0xADD4);

    // ADD4: LDD #$000F
    cpu.state_.d = 0x000F;

    // ADD7: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // ADDA: LDA #$67
    cpu.state_.a = 0x67;

    // ADDC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // ADDF: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // ADE2: SUBD #$E000
    cpu.state_.d -= 0xE000;

    // ADE5: BGT $00AD
    // TODO: Convert BGT $00AD

    // ADE7: LDA #$00
    cpu.state_.a = 0x00;

    // ADE9: STA <$45
    cpu.write_memory(0x45, cpu.state_.a);

    // ADEB: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // ADEE: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // ADF2: BLT $0121
    // TODO: Convert BLT $0121

    // ADF4: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // ADF7: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // ADFA: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // ADFD: BPL $00C5
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00C5;

    // AE01: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE03: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AE06: BGE $0121
    // TODO: Convert BGE $0121

    // AE08: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // AE0B: BPL $00D3
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00D3;

    // AE0F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE11: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AE14: BGE $0121
    // TODO: Convert BGE $0121

    // AE16: LDD $4700
    cpu.state_.d = cpu.read_memory_word(0x4700);

    // AE19: STD $5000
    cpu.write_memory(0x5000, cpu.state_.d);

    // AE1C: LDA #$86
    cpu.state_.a = 0x86;

    // AE1E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AE21: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // AE24: ADDD #$FF98
    cpu.state_.d += 0xFF98;

    // AE27: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AE29: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE2B: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // AE2E: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // AE30: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE32: LDD #$63FF
    cpu.state_.d = 0x63FF;

    // AE35: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE37: LDA #$06
    cpu.state_.a = 0x06;

    // AE39: STA <$01
    cpu.write_memory(0x01, cpu.state_.a);

    // AE3B: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // AE3E: DEC <$01
    // TODO: Convert DEC <$01

    // AE40: BEQ $010A
    if (cpu.zero_flag()) cpu.state_.pc += 0x010A;

    // AE44: BPL $0100
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0100;

    // AE46: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // AE48: LDB <$01
    cpu.state_.b = cpu.read_memory(0x01);

    // AE4A: ORB #$70
    cpu.state_.b |= 0x70;

    // AE4C: STB ,Y+
    // TODO: Handle indexed addressing: STB ,Y+

    // AE4E: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // AE50: LDD #$A016
    cpu.state_.d = 0xA016;

    // AE53: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE55: LDD #$7200
    cpu.state_.d = 0x7200;

    // AE58: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE5A: LDD #$8040
    cpu.state_.d = 0x8040;

    // AE5D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AE60: LDA <$BD
    cpu.state_.a = cpu.read_memory(0xBD);

    // AE62: BLE $0130
    // TODO: Convert BLE $0130

    // AE64: DEC <$BD
    // TODO: Convert DEC <$BD

    // AE66: LDA #$00
    cpu.state_.a = 0x00;

    // AE68: STA <$B7
    cpu.write_memory(0xB7, cpu.state_.a);

    // AE6A: STA <$BC
    cpu.write_memory(0xBC, cpu.state_.a);

    // AE6C: BRA $0134
    cpu.state_.pc += 0x0134;

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

    // AE7A: BEQ $0149
    if (cpu.zero_flag()) cpu.state_.pc += 0x0149;

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

    // AE89: BLE $0161
    // TODO: Convert BLE $0161

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

    // AEA5: BNE $0174
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0174;

    // AEA7: LDA $4B36
    cpu.state_.a = cpu.read_memory(0x4B36);

    // AEAA: BNE $0171
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0171;

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

    // AEC1: BNE $0186
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0186;

    // AEC4: LDA $4B1B
    cpu.state_.a = cpu.read_memory(0x4B1B);

    // AEC7: ANDA #$01
    cpu.state_.a &= 0x01;

    // AEC9: BEQ $01E7
    if (cpu.zero_flag()) cpu.state_.pc += 0x01E7;

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

    // AF2A: BNE $0248
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0248;

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

}

} // namespace StarWars