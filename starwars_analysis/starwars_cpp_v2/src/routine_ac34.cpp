#include "cpu_6809.h"

namespace StarWars {

void routine_ac34_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ac34.md
    // Address: 0xAC34

    // AC34: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AC36: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AC38: CMPX #$496F
    cpu.compare_x(0x496F);

    // AC3B: LBCS $AAE7
    // TODO: Convert LBCS $AAE7

    // AC3F: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // AC42: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // AC45: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AC48: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // AC4B: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AC4E: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // AC52: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // AC54: LDA #$08
    cpu.m_a = 0x08;

    // AC56: STA <$01
    cpu.write_memory(0x01, cpu.m_a);

    // AC58: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // AC5B: DEC <$01
    // TODO: Convert DEC <$01

    // AC5D: BEQ $AC65
    if (cpu.zero_flag()) cpu.m_pc = 0xAC65;

    // AC61: BPL $AC5B
    if (!cpu.negative_flag()) cpu.m_pc = 0xAC5B;

    // AC63: ANDA #$7F
    cpu.m_a &= 0x7F;

    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.m_a);

    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // AC69: ANDA #$20
    cpu.m_a &= 0x20;

    // AC6B: BNE $AC7C
    if (!cpu.zero_flag()) cpu.m_pc = 0xAC7C;

    // AC6D: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // AC6F: ORA #$70
    cpu.m_a |= 0x70;

    // AC71: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);

    // AC73: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC75: LDD #$A015
    cpu.m_d = 0xA015;

    // AC78: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC7A: BRA $ACA6
    cpu.m_pc = 0xACA6;

    // AC7C: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);

    // AC7E: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // AC81: CMPA #$03
    cpu.compare_a(0x03);

    // AC83: BCC $AC8A
    if (!cpu.carry_flag()) cpu.m_pc = 0xAC8A;

    // AC85: LDA #$03
    cpu.m_a = 0x03;

    // AC88: BRA $AC91
    cpu.m_pc = 0xAC91;

    // AC8A: CMPA #$06
    cpu.compare_a(0x06);

    // AC8C: BCS $AC91
    if (cpu.carry_flag()) cpu.m_pc = 0xAC91;

    // AC8E: LDA #$06
    cpu.m_a = 0x06;

    // AC91: ORA #$70
    cpu.m_a |= 0x70;

    // AC93: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AC95: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // AC9B: ORB #$0F
    cpu.m_b |= 0x0F;

    // AC9D: LDA #$65
    cpu.m_a = 0x65;

    // AC9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACA1: LDD #$A017
    cpu.m_d = 0xA017;

    // ACA4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACA6: LDD #$7200
    cpu.m_d = 0x7200;

    // ACA9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACAB: LDD #$8040
    cpu.m_d = 0x8040;

    // ACAE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACB1: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);

    // ACB3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // ACB5: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // ACB7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACB9: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // ACBB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACBD: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X

    // ACBF: LDB #$10
    cpu.m_b = 0x10;

    // ACC2: LDA #$70
    cpu.m_a = 0x70;

    // ACC4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACC6: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X

    // ACCC: LDA #$67
    cpu.m_a = 0x67;

    // ACCE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACD0: LDD #$A017
    cpu.m_d = 0xA017;

    // ACD3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACD5: LDD #$7200
    cpu.m_d = 0x7200;

    // ACD8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // ACDA: LDD #$8040
    cpu.m_d = 0x8040;

    // ACDD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

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
    cpu.m_a = 0x10;

    // ACEC: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // ACEE: LDA #$0F
    cpu.m_a = 0x0F;

    // ACF0: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // ACF2: LDA #$00
    cpu.m_a = 0x00;

    // ACF4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X

    // ACF6: JSR $9874
    cpu.call_function(0x9874);

    // ACF9: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // ACFB: BNE $AD00
    if (!cpu.zero_flag()) cpu.m_pc = 0xAD00;

    // ACFD: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // AD00: LDB #$20
    cpu.m_b = 0x20;

    // AD03: BPL $AD06
    if (!cpu.negative_flag()) cpu.m_pc = 0xAD06;

    // AD06: STB <$63
    cpu.write_memory(0x63, cpu.m_b);

    // AD08: JSR $BDF3
    cpu.call_function(0xBDF3);

    // AD0B: LDA $4B37
    cpu.m_a = cpu.read_memory(0x4B37);

    // AD0E: BNE $AD1F
    if (!cpu.zero_flag()) cpu.m_pc = 0xAD1F;

    // AD10: INC $4B37
    // TODO: Convert INC $4B37

    // AD13: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // AD15: CMPA #$03
    cpu.compare_a(0x03);

    // AD17: BLS $AD1F
    // TODO: Convert BLS $AD1F

    // AD19: JSR $BD21
    cpu.call_function(0xBD21);

    // AD1C: JSR $BDE9
    cpu.call_function(0xBDE9);

    // AD20: LDU <$CA
    cpu.m_u = cpu.read_memory16(0xCA);

    // AD22: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U

    // AD24: BEQ $AD3D
    if (cpu.zero_flag()) cpu.m_pc = 0xAD3D;

    // AD26: ANDA #$04
    cpu.m_a &= 0x04;

    // AD28: ORA #$20
    cpu.m_a |= 0x20;

    // AD2A: STA $3,U
    // TODO: Handle indexed addressing: STA $3,U

    // AD2C: LDA #$0F
    cpu.m_a = 0x0F;

    // AD2E: STA $5,U
    // TODO: Handle indexed addressing: STA $5,U

    // AD30: LDA #$00
    cpu.m_a = 0x00;

    // AD32: STA $4,U
    // TODO: Handle indexed addressing: STA $4,U

    // AD34: JSR $BE07
    cpu.call_function(0xBE07);

    // AD37: JSR $9801
    cpu.call_function(0x9801);

    // AD3A: JSR $BDF8
    cpu.call_function(0xBDF8);

    // AD3E: LDA #$01
    cpu.m_a = 0x01;

    // AD40: STA <$45
    cpu.write_memory(0x45, cpu.m_a);

    // AD42: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // AD45: ADDD #$0100
    cpu.m_d += 0x0100;

    // AD48: STD <$46
    cpu.write_memory16(0x46, cpu.m_d);

    // AD4A: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // AD4D: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);

    // AD4F: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // AD52: STD <$4A
    cpu.write_memory16(0x4A, cpu.m_d);

    // AD54: LDX #$494B
    cpu.m_x = 0x494B;

    // AD57: STX <$CA
    cpu.write_memory16(0xCA, cpu.m_x);

    // AD59: JSR $AD20
    cpu.call_function(0xAD20);

    // AD5C: LDX <$CA
    cpu.m_x = cpu.read_memory16(0xCA);

    // AD5E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // AD60: CMPX #$496F
    cpu.compare_x(0x496F);

    // AD63: BCS $AD57
    if (cpu.carry_flag()) cpu.m_pc = 0xAD57;

    // AD65: JSR $BDA3
    cpu.call_function(0xBDA3);

    // AD68: JSR $BDD5
    cpu.call_function(0xBDD5);

    // AD6C: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);

    // AD6E: BEQ $ADAE
    if (cpu.zero_flag()) cpu.m_pc = 0xADAE;

    // AD70: LDD <$46
    cpu.m_d = cpu.read_memory16(0x46);

    // AD72: ADDD #$0300
    cpu.m_d += 0x0300;

    // AD75: ADDD $5086
    cpu.m_d += 0x5086;

    // AD78: CMPD <$96
    // TODO: Convert CMPD <$96

    // AD7B: BMI $AD7F
    if (cpu.negative_flag()) cpu.m_pc = 0xAD7F;

    // AD7D: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);

    // AD7F: STD <$46
    cpu.write_memory16(0x46, cpu.m_d);

    // AD81: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);

    // AD83: SUBD <$46
    cpu.m_d -= 0x46;

    // AD85: SUBD #$1000
    cpu.m_d -= 0x1000;

    // AD88: CMPD <$4A
    // TODO: Convert CMPD <$4A

    // AD8B: BGE $AD8F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAD8F;

    // AD8D: STD <$4A
    cpu.write_memory16(0x4A, cpu.m_d);

    // AD8F: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);

    // AD91: SUBD <$46
    cpu.m_d -= 0x46;

    // AD93: JSR $CDA0
    cpu.call_function(0xCDA0);

    // AD96: TST <$48
    // TODO: Convert TST <$48

    // AD98: BMI $ADA3
    if (cpu.negative_flag()) cpu.m_pc = 0xADA3;

    // AD9A: CMPD <$48
    // TODO: Convert CMPD <$48

    // AD9D: BGE $ADA1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADA1;

    // AD9F: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);

    // ADA1: BRA $ADAE
    cpu.m_pc = 0xADAE;

    // ADA5: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // ADA7: CMPD <$48
    // TODO: Convert CMPD <$48

    // ADAA: BLE $ADAE
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xADAE;

    // ADAC: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);

    // ADAF: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);

    // ADB1: BEQ $ADD3
    if (cpu.zero_flag()) cpu.m_pc = 0xADD3;

    // ADB3: LDD <$46
    cpu.m_d = cpu.read_memory16(0x46);

    // ADB5: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // ADB8: LDD <$48
    cpu.m_d = cpu.read_memory16(0x48);

    // ADBA: ADDD #$0080
    cpu.m_d += 0x0080;

    // ADBD: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // ADC0: LDD <$4A
    cpu.m_d = cpu.read_memory16(0x4A);

    // ADC2: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // ADC5: JSR $ADD4
    cpu.call_function(0xADD4);

    // ADC8: LDD <$48
    cpu.m_d = cpu.read_memory16(0x48);

    // ADCA: SUBD #$0080
    cpu.m_d -= 0x0080;

    // ADCD: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // ADD0: JSR $ADD4
    cpu.call_function(0xADD4);

    // ADD4: LDD #$000F
    cpu.m_d = 0x000F;

    // ADD7: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // ADDA: LDA #$67
    cpu.m_a = 0x67;

    // ADDC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // ADDF: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADE2: SUBD #$E000
    cpu.m_d -= 0xE000;

    // ADE5: BGT $ADEB
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADEB;

    // ADE7: LDA #$00
    cpu.m_a = 0x00;

    // ADE9: STA <$45
    cpu.write_memory(0x45, cpu.m_a);

    // ADEB: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADEE: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // ADF2: BLT $AE5F
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAE5F;

    // ADF4: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // ADF7: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // ADFA: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // ADFD: BPL $AE03
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE03;

    // AE01: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE03: SUBD $5000
    cpu.m_d -= 0x5000;

    // AE06: BGE $AE5F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAE5F;

    // AE08: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // AE0B: BPL $AE11
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE11;

    // AE0F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE11: SUBD $5000
    cpu.m_d -= 0x5000;

    // AE14: BGE $AE5F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAE5F;

    // AE16: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // AE19: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // AE1C: LDA #$86
    cpu.m_a = 0x86;

    // AE1E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AE21: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // AE24: ADDD #$FF98
    cpu.m_d += 0xFF98;

    // AE27: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AE29: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE2B: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // AE2E: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AE30: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE32: LDD #$6300
    cpu.m_d = 0x6300;

}

} // namespace StarWars