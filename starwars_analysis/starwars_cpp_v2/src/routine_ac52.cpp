#include "cpu_6809.h"

namespace StarWars {

void routine_ac52_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_ac52.md
    // Address: 0xAC52

    // AC52: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // AC54: LDA #$08
    cpu.state_.a = 0x08;

    // AC56: STA <$01
    cpu.write_memory(0x01, cpu.state_.a);

    // AC58: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // AC5B: DEC <$01
    // TODO: Convert DEC <$01

    // AC5D: BEQ $0013
    if (cpu.zero_flag()) cpu.state_.pc = 0xAC72;

    // AC61: BPL $0009
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAC6C;

    // AC63: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.state_.a);

    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC69: ANDA #$20
    cpu.state_.a &= 0x20;

    // AC6B: BNE $002A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xAC97;

    // AC6D: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // AC6F: ORA #$70
    cpu.state_.a |= 0x70;

    // AC71: LDB <$02
    cpu.state_.b = cpu.read_memory(0x02);

    // AC73: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC75: LDD #$A015
    cpu.state_.d = 0xA015;

    // AC78: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC7A: BRA $0054
    cpu.state_.pc = 0xACD0;

    // AC7C: LDB <$02
    cpu.state_.b = cpu.read_memory(0x02);

    // AC7E: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // AC81: CMPA #$03
    cpu.compare_a(0x03);

    // AC83: BCC $0038
    if (!cpu.carry_flag()) cpu.state_.pc = 0xACBD;

    // AC85: LDA #$03
    cpu.state_.a = 0x03;

    // AC88: BRA $003F
    cpu.state_.pc = 0xACC9;

    // AC8A: CMPA #$06
    cpu.compare_a(0x06);

    // AC8C: BCS $003F
    if (cpu.carry_flag()) cpu.state_.pc = 0xACCD;

    // AC8E: LDA #$06
    cpu.state_.a = 0x06;

    // AC91: ORA #$70
    cpu.state_.a |= 0x70;

    // AC93: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // AC95: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // AC9B: ORB #$0F
    cpu.state_.b |= 0x0F;

    // AC9D: LDA #$65
    cpu.state_.a = 0x65;

    // AC9F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACA1: LDD #$A017
    cpu.state_.d = 0xA017;

    // ACA4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACA6: LDD #$7200
    cpu.state_.d = 0x7200;

    // ACA9: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACAB: LDD #$8040
    cpu.state_.d = 0x8040;

    // ACAE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACB1: LDX <$A8
    cpu.state_.x = cpu.read_memory_word(0xA8);

    // ACB3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACB5: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // ACB7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACB9: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // ACBB: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACBD: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X

    // ACBF: LDB #$10
    cpu.state_.b = 0x10;

    // ACC2: LDA #$70
    cpu.state_.a = 0x70;

    // ACC4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACC6: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // ACCC: LDA #$67
    cpu.state_.a = 0x67;

    // ACCE: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACD0: LDD #$A017
    cpu.state_.d = 0xA017;

    // ACD3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACD5: LDD #$7200
    cpu.state_.d = 0x7200;

    // ACD8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACDA: LDD #$8040
    cpu.state_.d = 0x8040;

    // ACDD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // ACE0: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACE2: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y

    // ACE4: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // ACE6: LDD -$2,Y
    // TODO: Fix comma operator: LDD -$2,Y

    // ACE8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U

    // ACEA: LDA #$10
    cpu.state_.a = 0x10;

    // ACEC: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // ACEE: LDA #$0F
    cpu.state_.a = 0x0F;

    // ACF0: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // ACF2: LDA #$00
    cpu.state_.a = 0x00;

    // ACF4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // ACF6: JSR $9874
    cpu.call_function(0x9874);

    // ACF9: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // ACFB: BNE $00AE
    if (!cpu.zero_flag()) cpu.state_.pc = 0xADAB;

    // ACFD: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // AD00: LDB #$20
    cpu.state_.b = 0x20;

    // AD03: BPL $00B4
    if (!cpu.negative_flag()) cpu.state_.pc = 0xADB9;

    // AD06: STB <$63
    cpu.write_memory(0x63, cpu.state_.b);

    // AD08: JSR $BDF3
    cpu.call_function(0xBDF3);

    // AD0B: LDA $4B37
    cpu.state_.a = cpu.read_memory(0x4B37);

    // AD0E: BNE $00CD
    if (!cpu.zero_flag()) cpu.state_.pc = 0xADDD;

    // AD10: INC $4B37
    // TODO: Convert INC $4B37

    // AD13: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // AD15: CMPA #$03
    cpu.compare_a(0x03);

    // AD17: BLS $00CD
    // TODO: Convert BLS $00CD

    // AD19: JSR $BD21
    cpu.call_function(0xBD21);

    // AD1C: JSR $BDE9
    cpu.call_function(0xBDE9);

    // AD20: LDU <$CA
    cpu.state_.u = cpu.read_memory_word(0xCA);

    // AD22: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U

    // AD24: BEQ $00EB
    if (cpu.zero_flag()) cpu.state_.pc = 0xAE11;

    // AD26: ANDA #$04
    cpu.state_.a &= 0x04;

    // AD28: ORA #$20
    cpu.state_.a |= 0x20;

    // AD2A: STA $3,U
    // TODO: Handle indexed addressing: STA $3,U

    // AD2C: LDA #$0F
    cpu.state_.a = 0x0F;

    // AD2E: STA $5,U
    // TODO: Handle indexed addressing: STA $5,U

    // AD30: LDA #$00
    cpu.state_.a = 0x00;

    // AD32: STA $4,U
    // TODO: Handle indexed addressing: STA $4,U

    // AD34: JSR $BE07
    cpu.call_function(0xBE07);

    // AD37: JSR $9801
    cpu.call_function(0x9801);

    // AD3A: JSR $BDF8
    cpu.call_function(0xBDF8);

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

    // AD63: BCS $0105
    if (cpu.carry_flag()) cpu.state_.pc = 0xAE6A;

    // AD65: JSR $BDA3
    cpu.call_function(0xBDA3);

    // AD68: JSR $BDD5
    cpu.call_function(0xBDD5);

    // AD6C: LDA <$45
    cpu.state_.a = cpu.read_memory(0x45);

    // AD6E: BEQ $015C
    if (cpu.zero_flag()) cpu.state_.pc = 0xAECC;

    // AD70: LDD <$46
    cpu.state_.d = cpu.read_memory_word(0x46);

    // AD72: ADDD #$0300
    cpu.state_.d += 0x0300;

    // AD75: ADDD $5086
    cpu.state_.d += 0x5086;

    // AD78: CMPD <$96
    // TODO: Convert CMPD <$96

    // AD7B: BMI $012D
    if (cpu.negative_flag()) cpu.state_.pc = 0xAEAA;

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

    // AD8B: BGE $013D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAECA;

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

    // AD98: BMI $0151
    if (cpu.negative_flag()) cpu.state_.pc = 0xAEEB;

    // AD9A: CMPD <$48
    // TODO: Convert CMPD <$48

    // AD9D: BGE $014F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAEEE;

    // AD9F: STD <$48
    cpu.write_memory(0x48, cpu.state_.d);

    // ADA1: BRA $015C
    cpu.state_.pc = 0xAEFF;

    // ADA5: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // ADA7: CMPD <$48
    // TODO: Convert CMPD <$48

    // ADAA: BLE $015C
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xAF08;

    // ADAC: STD <$48
    cpu.write_memory(0x48, cpu.state_.d);

    // ADAF: LDA <$45
    cpu.state_.a = cpu.read_memory(0x45);

    // ADB1: BEQ $0181
    if (cpu.zero_flag()) cpu.state_.pc = 0xAF34;

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

    // ADE5: BGT $0199
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xAF80;

    // ADE7: LDA #$00
    cpu.state_.a = 0x00;

    // ADE9: STA <$45
    cpu.write_memory(0x45, cpu.state_.a);

    // ADEB: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // ADEE: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // ADF2: BLT $020D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB001;

    // ADF4: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // ADF7: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // ADFA: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // ADFD: BPL $01B1
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAFB0;

    // AE01: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE03: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AE06: BGE $020D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB015;

    // AE08: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // AE0B: BPL $01BF
    if (!cpu.negative_flag()) cpu.state_.pc = 0xAFCC;

    // AE0F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE11: SUBD $5000
    cpu.state_.d -= 0x5000;

    // AE14: BGE $020D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB023;

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

    // AE40: BEQ $01F6
    if (cpu.zero_flag()) cpu.state_.pc = 0xB038;

    // AE44: BPL $01EC
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB032;

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

    // AE50: LDD #$A000
    cpu.state_.d = 0xA000;

}

} // namespace StarWars