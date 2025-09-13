#include "cpu_6809.h"

namespace StarWars {

void routine_692d_70db_impl(CPU6809& cpu) {
    // Converted from rom_disasm_692d_70db.md
    // Address: 0x692D_70DB

    label_692D:
    // 692D: JSR $BDEE
    cpu.call_function(0xBDEE);

    // 6930: INC <$41
    // TODO: Convert INC <$41

    // 6933: JSR $733C
    cpu.call_function(0x733C);

    // 6936: JSR $B98B
    cpu.call_function(0xB98B);

    // 6939: JSR $9890
    cpu.call_function(0x9890);

    // 693C: JSR $9558
    cpu.call_function(0x9558);

    // 693F: JSR $6DD2
    cpu.call_function(0x6DD2);

    // 6942: JSR $6F67
    cpu.call_function(0x6F67);

    // 6945: LDD $5080
    cpu.m_d = cpu.read_memory16(0x5080);

    // 6948: CMPD #$3F00
    // TODO: Convert CMPD #$3F00

    // 694C: BLT $6952
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6952;

    // 694E: LDA #$25
    cpu.m_a = 0x25;

    // 6950: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6953: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 6956: BNE $6962
    if (!cpu.zero_flag()) cpu.m_pc = 0x6962;

    // 6958: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 695B: CMPA #$04
    cpu.compare_a(0x04);

    // 695D: BNE $6962
    if (!cpu.zero_flag()) cpu.m_pc = 0x6962;

    // 695F: JSR $BD53
    cpu.call_function(0xBD53);

    // 6962: JSR $BE0C
    cpu.call_function(0xBE0C);

    // 6965: INC <$41
    // TODO: Convert INC <$41

    // 6968: JSR $736F
    cpu.call_function(0x736F);

    // 696B: JSR $9898
    cpu.call_function(0x9898);

    // 696E: JSR $9890
    cpu.call_function(0x9890);

    // 6971: JSR $9558
    cpu.call_function(0x9558);

    // 6974: JSR $6DD2
    cpu.call_function(0x6DD2);

    // 6977: JSR $6F67
    cpu.call_function(0x6F67);

    // 697A: LDB <$58
    cpu.m_b = cpu.read_memory(0x58);

    // 697E: ADDD <$56
    cpu.m_d += 0x56;

    // 6980: ANDB #$7F
    cpu.m_b &= 0x7F;

    // 6982: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6984: CMPD #$7310
    // TODO: Convert CMPD #$7310

    // 6988: BHI $6997
    // TODO: Convert BHI $6997

    // 698A: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 698D: BNE $6993
    if (!cpu.zero_flag()) cpu.m_pc = 0x6993;

    // 698F: LDA #$27
    cpu.m_a = 0x27;

    // 6991: BRA $6995
    goto label_6995;

    // 6993: LDA #$29
    cpu.m_a = 0x29;

    label_6995:
    // 6995: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6997: LDD <$58
    cpu.m_d = cpu.read_memory16(0x58);

    // 6999: ADDD #$0060
    cpu.m_d += 0x0060;

    // 699C: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 699E: LDA <$83
    cpu.m_a = cpu.read_memory(0x83);

    // 69A0: SUBA #$02
    cpu.m_a -= 0x02;

    // 69A2: BHI $69A6
    // TODO: Convert BHI $69A6

    // 69A4: LDA #$00
    cpu.m_a = 0x00;

    // 69A6: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 69A9: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 69AD: CMPA #$1F
    cpu.compare_a(0x1F);

    // 69AF: BCS $69B3
    if (cpu.carry_flag()) cpu.m_pc = 0x69B3;

    // 69B1: LDA #$1F
    cpu.m_a = 0x1F;

    // 69B3: STA $4B13
    cpu.write_memory(0x4B13, cpu.m_a);

    // 69B6: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 69B9: CMPA #$0F
    cpu.compare_a(0x0F);

    // 69BB: BLS $69BF
    // TODO: Convert BLS $69BF

    // 69BD: LDA #$0F
    cpu.m_a = 0x0F;

    // 69BF: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);

    // 69C2: JSR $615A
    cpu.call_function(0x615A);

    // 69C5: JSR $620F
    cpu.call_function(0x620F);

    // 69C8: JSR $A1CE
    cpu.call_function(0xA1CE);

    // 69CB: JSR $B939
    cpu.call_function(0xB939);

    // 69CE: LDD #$0100
    cpu.m_d = 0x0100;

    // 69D1: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 69D6: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 69D9: LDD #$2000
    cpu.m_d = 0x2000;

    // 69DC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 69DF: LDA #$00
    cpu.m_a = 0x00;

    // 69E1: STA <$A7
    cpu.write_memory(0xA7, cpu.m_a);

    // 69E3: STA $4B35
    cpu.write_memory(0x4B35, cpu.m_a);

    // 69E6: STA $4B3D
    cpu.write_memory(0x4B3D, cpu.m_a);

    // 69E9: LDA #$00
    cpu.m_a = 0x00;

    // 69EB: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.m_a);

    // 69EE: JSR $BD94
    cpu.call_function(0xBD94);

    // 69F1: INC <$41
    // TODO: Convert INC <$41

    // 69F4: JSR $7390
    cpu.call_function(0x7390);

    // 69F7: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 69F9: LBMI $6CB6
    // TODO: Convert LBMI $6CB6

    // 69FD: JSR $A849
    cpu.call_function(0xA849);

    // 6A00: JSR $9890
    cpu.call_function(0x9890);

    // 6A03: JSR $9558
    cpu.call_function(0x9558);

    // 6A06: JSR $B98B
    cpu.call_function(0xB98B);

    // 6A09: JSR $70DB
    cpu.call_function(0x70DB);

    // 6A0C: JSR $6E22
    cpu.call_function(0x6E22);

    // 6A0F: LDA #$10
    cpu.m_a = 0x10;

    // 6A11: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6A14: JSR $6F6F
    cpu.call_function(0x6F6F);

    // 6A17: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6A1A: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6A1D: CMPD #$0400
    // TODO: Convert CMPD #$0400

    // 6A21: BHI $6A26
    // TODO: Convert BHI $6A26

    // 6A23: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 6A26: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 6A28: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 6A2A: BNE $6A39
    if (!cpu.zero_flag()) cpu.m_pc = 0x6A39;

    // 6A2C: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6A2F: CMPA #$0E
    cpu.compare_a(0x0E);

    // 6A31: BNE $6A36
    if (!cpu.zero_flag()) cpu.m_pc = 0x6A36;

    // 6A33: JSR $BD99
    cpu.call_function(0xBD99);

    // 6A36: INC $4B0E
    // TODO: Convert INC $4B0E

    // 6A39: LDA <$A7
    cpu.m_a = cpu.read_memory(0xA7);

    // 6A3B: CMPA #$05
    cpu.compare_a(0x05);

    // 6A3D: BCS $6A4F
    if (cpu.carry_flag()) cpu.m_pc = 0x6A4F;

    // 6A3F: LDA #$01
    cpu.m_a = 0x01;

    // 6A41: STA $4B3D
    cpu.write_memory(0x4B3D, cpu.m_a);

    // 6A44: LDA $5098
    cpu.m_a = cpu.read_memory(0x5098);

    // 6A47: CMPA #$80
    cpu.compare_a(0x80);

    // 6A49: BCC $6A4F
    if (!cpu.carry_flag()) cpu.m_pc = 0x6A4F;

    // 6A4B: LDA #$2B
    cpu.m_a = 0x2B;

    // 6A4D: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6A50: LDA #$00
    cpu.m_a = 0x00;

    // 6A52: STA <$98
    cpu.write_memory(0x98, cpu.m_a);

    // 6A54: STA $4B36
    cpu.write_memory(0x4B36, cpu.m_a);

    // 6A57: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6A5A: CMPA #$1F
    cpu.compare_a(0x1F);

    // 6A5C: BLS $6A60
    // TODO: Convert BLS $6A60

    // 6A5E: LDA #$1F
    cpu.m_a = 0x1F;

    // 6A60: STA $4B12
    cpu.write_memory(0x4B12, cpu.m_a);

    // 6A63: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 6A66: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6A68: BLS $6A6C
    // TODO: Convert BLS $6A6C

    // 6A6A: LDA #$0F
    cpu.m_a = 0x0F;

    // 6A6C: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);

    // 6A6F: JSR $83A4
    cpu.call_function(0x83A4);

    // 6A72: JSR $BD71
    cpu.call_function(0xBD71);

    // 6A75: LDD #$0000
    cpu.m_d = 0x0000;

    // 6A78: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6A7B: INC <$41
    // TODO: Convert INC <$41

    // 6A7E: JSR $615A
    cpu.call_function(0x615A);

    // 6A81: JSR $8341
    cpu.call_function(0x8341);

    // 6A84: LDA #$2F
    cpu.m_a = 0x2F;

    // 6A86: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6A89: JSR $73EA
    cpu.call_function(0x73EA);

    // 6A8C: JSR $9890
    cpu.call_function(0x9890);

    // 6A8F: JSR $9558
    cpu.call_function(0x9558);

    // 6A92: JSR $B98B
    cpu.call_function(0xB98B);

    // 6A95: JSR $6FE0
    cpu.call_function(0x6FE0);

    // 6A98: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6A9B: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6A9E: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6AA1: SUBD #$0011
    cpu.m_d -= 0x0011;

    // 6AA4: BCS $6AAA
    if (cpu.carry_flag()) cpu.m_pc = 0x6AAA;

    // 6AA6: LDA #$2D
    cpu.m_a = 0x2D;

    // 6AA8: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6AAB: LDD #$0000
    cpu.m_d = 0x0000;

    // 6AAE: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 6AB1: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 6AB4: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6AB7: JSR $6FF1
    cpu.call_function(0x6FF1);

    // 6ABA: JSR $8341
    cpu.call_function(0x8341);

    // 6ABD: INC <$41
    // TODO: Convert INC <$41

    // 6ABF: JSR $7413
    cpu.call_function(0x7413);

    // 6AC2: JSR $9890
    cpu.call_function(0x9890);

    // 6AC5: JSR $9558
    cpu.call_function(0x9558);

    // 6AC8: JSR $B98B
    cpu.call_function(0xB98B);

    // 6ACB: JSR $6FF1
    cpu.call_function(0x6FF1);

    // 6ACE: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6AD1: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6AD4: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6AD7: SUBD #$0011
    cpu.m_d -= 0x0011;

    // 6ADA: BCS $6AFE
    if (cpu.carry_flag()) cpu.m_pc = 0x6AFE;

    // 6ADC: LDX $5098
    cpu.m_x = cpu.read_memory16(0x5098);

    // 6ADF: LDU $509A
    cpu.m_u = cpu.read_memory16(0x509A);

    // 6AE2: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6AE5: PSHS U,X,D
    // TODO: Convert PSHS U,X,D

    // 6AE7: JSR $615A
    cpu.call_function(0x615A);

    // 6AEA: PULS D,X,U
    // TODO: Convert PULS D,X,U

    // 6AEC: STX $5098
    cpu.write_memory16(0x5098, cpu.m_x);

    // 6AEF: STU $509A
    cpu.write_memory16(0x509A, cpu.m_u);

    // 6AF2: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6AF5: LDA #$00
    cpu.m_a = 0x00;

    // 6AF7: STA $4B36
    cpu.write_memory(0x4B36, cpu.m_a);

    // 6AFA: LDA #$2F
    cpu.m_a = 0x2F;

    // 6AFC: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6AFF: LDA #$01
    cpu.m_a = 0x01;

    // 6B01: STA <$98
    cpu.write_memory(0x98, cpu.m_a);

    // 6B03: JSR $615A
    cpu.call_function(0x615A);

    // 6B06: JSR $8341
    cpu.call_function(0x8341);

    // 6B09: LDA #$FF
    cpu.m_a = 0xFF;

    // 6B0B: STA $4B36
    cpu.write_memory(0x4B36, cpu.m_a);

    // 6B0E: LDA $4B19
    cpu.m_a = cpu.read_memory(0x4B19);

    // 6B11: ADDA $4B17
    cpu.m_a += 0x4B17;

    // 6B14: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6B16: BLS $6B1A
    // TODO: Convert BLS $6B1A

    // 6B18: LDA #$0F
    cpu.m_a = 0x0F;

    // 6B1A: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);

    // 6B1D: LDA #$2F
    cpu.m_a = 0x2F;

    // 6B1F: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6B22: LDA #$00
    cpu.m_a = 0x00;

    // 6B24: STA $4B3E
    cpu.write_memory(0x4B3E, cpu.m_a);

    // 6B27: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.m_a);

    // 6B2A: LDD #$0300
    cpu.m_d = 0x0300;

    // 6B2D: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 6B30: INC <$41
    // TODO: Convert INC <$41

    // 6B32: JSR $743C
    cpu.call_function(0x743C);

    // 6B35: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 6B37: LBMI $6CE1
    // TODO: Convert LBMI $6CE1

    // 6B3B: JSR $A849
    cpu.call_function(0xA849);

    // 6B3E: JSR $AD6C
    cpu.call_function(0xAD6C);

    // 6B41: JSR $8495
    cpu.call_function(0x8495);

    // 6B44: JSR $9886
    cpu.call_function(0x9886);

    // 6B47: JSR $9558
    cpu.call_function(0x9558);

    // 6B4A: JSR $70DB
    cpu.call_function(0x70DB);

    // 6B4D: JSR $6EA1
    cpu.call_function(0x6EA1);

    // 6B50: LDA #$10
    cpu.m_a = 0x10;

    // 6B52: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6B55: JSR $703B
    cpu.call_function(0x703B);

    // 6B58: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 6B5A: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 6B5C: BNE $6B99
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B99;

    // 6B5E: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B61: CMPA #$02
    cpu.compare_a(0x02);

    // 6B63: BNE $6B68
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B68;

    // 6B65: JSR $BD9E
    cpu.call_function(0xBD9E);

    // 6B68: LDA $4B12
    cpu.m_a = cpu.read_memory(0x4B12);

    // 6B6C: BCS $6B83
    if (cpu.carry_flag()) cpu.m_pc = 0x6B83;

    // 6B6E: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B71: CMPA #$10
    cpu.compare_a(0x10);

    // 6B73: BNE $6B7A
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B7A;

    // 6B75: JSR $BD6C
    cpu.call_function(0xBD6C);

    // 6B78: BRA $6B81
    goto label_6B81;

    // 6B7A: CMPA #$18
    cpu.compare_a(0x18);

    // 6B7C: BNE $6B81
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B81;

    // 6B7E: JSR $BD76
    cpu.call_function(0xBD76);

    label_6B81:
    // 6B81: BRA $6B96
    goto label_6B96;

    // 6B83: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B86: CMPA #$10
    cpu.compare_a(0x10);

    // 6B88: BNE $6B8F
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B8F;

    // 6B8A: JSR $BD30
    cpu.call_function(0xBD30);

    // 6B8D: BRA $6B96
    goto label_6B96;

    // 6B8F: CMPA #$16
    cpu.compare_a(0x16);

    // 6B91: BNE $6B96
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B96;

    // 6B93: JSR $BD62
    cpu.call_function(0xBD62);

    label_6B96:
    // 6B96: INC $4B0E
    // TODO: Convert INC $4B0E

    // 6B99: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 6B9B: BEQ $6BDA
    if (cpu.zero_flag()) cpu.m_pc = 0x6BDA;

    // 6B9D: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 6B9F: SUBD $5098
    cpu.m_d -= 0x5098;

    // 6BA2: SUBD #$0800
    cpu.m_d -= 0x0800;

    // 6BA5: BHI $6BDA
    // TODO: Convert BHI $6BDA

    // 6BA7: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6BAA: BNE $6BC6
    if (!cpu.zero_flag()) cpu.m_pc = 0x6BC6;

    // 6BAC: LDA #$01
    cpu.m_a = 0x01;

    // 6BAE: STA $4B3E
    cpu.write_memory(0x4B3E, cpu.m_a);

    // 6BB1: JSR $BDB2
    cpu.call_function(0xBDB2);

    // 6BB4: JSR $9874
    cpu.call_function(0x9874);

    // 6BB7: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 6BB9: LBLE $6CE1
    // TODO: Convert LBLE $6CE1

    // 6BBD: LDA #$31
    cpu.m_a = 0x31;

    // 6BBF: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6BC1: JSR $BD3A
    cpu.call_function(0xBD3A);

    // 6BC4: BRA $6BDA
    goto label_6BDA;

    // 6BC6: LDA #$11
    cpu.m_a = 0x11;

    // 6BC8: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6BCA: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6BCD: CMPA #$03
    cpu.compare_a(0x03);

    // 6BCF: BLT $6BDA
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6BDA;

    // 6BD1: ANDA #$01
    cpu.m_a &= 0x01;

    // 6BD3: BEQ $6BDA
    if (cpu.zero_flag()) cpu.m_pc = 0x6BDA;

    // 6BD5: JSR $BD17
    cpu.call_function(0xBD17);

    // 6BD8: BRA $6BDA
    goto label_6BDA;

    // 6BDB: JSR $61B5
    cpu.call_function(0x61B5);

    // 6BDE: JSR $615A
    cpu.call_function(0x615A);

    // 6BE1: LDA #$C0
    cpu.m_a = 0xC0;

    // 6BE3: STA $5080
    cpu.write_memory(0x5080, cpu.m_a);

    // 6BE6: STA $508A
    cpu.write_memory(0x508A, cpu.m_a);

    // 6BE9: LDA #$04
    cpu.m_a = 0x04;

    // 6BEB: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.m_a);

    // 6BEE: INC <$41
    // TODO: Convert INC <$41

    // 6BF1: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 6BF3: ANDA #$0F
    cpu.m_a &= 0x0F;

    // 6BF5: BNE $6C2C
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C2C;

    // 6BF7: DEC $4B0E
    // TODO: Convert DEC $4B0E

    // 6BFA: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6BFD: CMPA #$03
    cpu.compare_a(0x03);

    // 6BFF: BNE $6C09
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C09;

    // 6C01: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6C04: BEQ $6C09
    if (cpu.zero_flag()) cpu.m_pc = 0x6C09;

    // 6C06: JSR $9806
    cpu.call_function(0x9806);

    // 6C09: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C0C: CMPA #$02
    cpu.compare_a(0x02);

    // 6C0E: BNE $6C13
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C13;

    // 6C10: JSR $9775
    cpu.call_function(0x9775);

    // 6C13: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C16: CMPA #$01
    cpu.compare_a(0x01);

    // 6C18: BNE $6C22
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C22;

    // 6C1A: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6C1D: BEQ $6C22
    if (cpu.zero_flag()) cpu.m_pc = 0x6C22;

    // 6C1F: JSR $953B
    cpu.call_function(0x953B);

    // 6C22: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C25: CMPA #$00
    cpu.compare_a(0x00);

    // 6C27: BNE $6C2C
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C2C;

    // 6C29: JSR $9722
    cpu.call_function(0x9722);

    // 6C2C: JSR $7519
    cpu.call_function(0x7519);

    // 6C2F: JSR $9558
    cpu.call_function(0x9558);

    // 6C32: JSR $6F5F
    cpu.call_function(0x6F5F);

    // 6C35: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C38: CMPA #$FE
    cpu.compare_a(0xFE);

    // 6C3A: BNE $6C75
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C75;

    // 6C3C: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6C40: CMPA #$62
    cpu.compare_a(0x62);

    // 6C42: BLS $6C46
    // TODO: Convert BLS $6C46

    // 6C44: LDA #$62
    cpu.m_a = 0x62;

    // 6C46: STA $4B15
    cpu.write_memory(0x4B15, cpu.m_a);

    // 6C49: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6C4C: CMPA #$05
    cpu.compare_a(0x05);

    // 6C4E: BCC $6C5D
    if (!cpu.carry_flag()) cpu.m_pc = 0x6C5D;

    // 6C50: LDA $4B17
    cpu.m_a = cpu.read_memory(0x4B17);

    // 6C54: CMPA #$04
    cpu.compare_a(0x04);

    // 6C56: BLS $6C5A
    // TODO: Convert BLS $6C5A

    // 6C58: LDA #$04
    cpu.m_a = 0x04;

    // 6C5A: STA $4B17
    cpu.write_memory(0x4B17, cpu.m_a);

    // 6C5D: LDA $4B18
    cpu.m_a = cpu.read_memory(0x4B18);

    // 6C60: ADDA $4B17
    cpu.m_a += 0x4B17;

    // 6C63: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6C65: BLS $6C69
    // TODO: Convert BLS $6C69

    // 6C67: LDA #$0F
    cpu.m_a = 0x0F;

    // 6C69: STA $4B18
    cpu.write_memory(0x4B18, cpu.m_a);

    // 6C6C: LDA #$FF
    cpu.m_a = 0xFF;

    // 6C6E: STA $4B2D
    cpu.write_memory(0x4B2D, cpu.m_a);

    // 6C71: LDA #$1D
    cpu.m_a = 0x1D;

    // 6C73: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6C76: JSR $BD58
    cpu.call_function(0xBD58);

    // 6C79: LDA #$36
    cpu.m_a = 0x36;

    // 6C7B: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6C7D: LDD #$0000
    cpu.m_d = 0x0000;

    // 6C80: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6C84: JSR $7315
    cpu.call_function(0x7315);

    // 6C87: JSR $A849
    cpu.call_function(0xA849);

    // 6C8A: JSR $987F
    cpu.call_function(0x987F);

    // 6C8D: JSR $9898
    cpu.call_function(0x9898);

    // 6C90: JSR $B98B
    cpu.call_function(0xB98B);

    // 6C93: LDD #$FB01
    cpu.m_d = 0xFB01;

    // 6C96: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 6C99: LDD #$3FCE
    cpu.m_d = 0x3FCE;

    // 6C9C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 6C9F: JSR $CE24
    cpu.call_function(0xCE24);

    // 6CA2: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6CA5: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6CA8: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6CAB: CMPD #$0028
    // TODO: Convert CMPD #$0028

    // 6CAF: BCS $6CB5
    if (cpu.carry_flag()) cpu.m_pc = 0x6CB5;

    // 6CB1: LDA #$3B
    cpu.m_a = 0x3B;

    // 6CB3: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6CB6: JSR $BD58
    cpu.call_function(0xBD58);

    // 6CB9: LDA #$38
    cpu.m_a = 0x38;

    // 6CBB: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6CBD: LDD #$0000
    cpu.m_d = 0x0000;

    // 6CC0: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6CC4: JSR $73C3
    cpu.call_function(0x73C3);

    // 6CC7: JSR $A849
    cpu.call_function(0xA849);

    // 6CCA: JSR $987F
    cpu.call_function(0x987F);

    // 6CCD: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6CD0: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6CD3: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6CD6: CMPD #$0028
    // TODO: Convert CMPD #$0028

    // 6CDA: BCS $6CE0
    if (cpu.carry_flag()) cpu.m_pc = 0x6CE0;

    // 6CDC: LDA #$3B
    cpu.m_a = 0x3B;

    // 6CDE: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6CE1: JSR $BD58
    cpu.call_function(0xBD58);

    // 6CE4: LDA #$3A
    cpu.m_a = 0x3A;

    // 6CE6: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6CE8: LDD #$0000
    cpu.m_d = 0x0000;

    // 6CEB: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6CEF: JSR $74D5
    cpu.call_function(0x74D5);

    // 6CF2: JSR $A849
    cpu.call_function(0xA849);

    // 6CF5: JSR $987F
    cpu.call_function(0x987F);

    // 6CF8: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6CFB: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6CFE: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6D01: CMPD #$0028
    // TODO: Convert CMPD #$0028

    // 6D05: BCS $6D0B
    if (cpu.carry_flag()) cpu.m_pc = 0x6D0B;

    // 6D07: LDA #$3B
    cpu.m_a = 0x3B;

    // 6D09: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6D0C: JSR $BD49
    cpu.call_function(0xBD49);

    // 6D0F: JSR $BD0D
    cpu.call_function(0xBD0D);

    // 6D12: INC <$41
    // TODO: Convert INC <$41

    // 6D15: JSR $61B5
    cpu.call_function(0x61B5);

    // 6D18: JSR $615A
    cpu.call_function(0x615A);

    // 6D1B: JSR $61EC
    cpu.call_function(0x61EC);

    // 6D1E: LDU #$5038
    cpu.m_u = 0x5038;

    // 6D21: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 6D24: JSR $C0FF
    cpu.call_function(0xC0FF);

    // 6D27: JSR $CA8C
    cpu.call_function(0xCA8C);

    // 6D2A: LDA $4AEC
    cpu.m_a = cpu.read_memory(0x4AEC);

    // 6D2D: BMI $6D33
    if (cpu.negative_flag()) cpu.m_pc = 0x6D33;

    // 6D2F: LDA #$0F
    cpu.m_a = 0x0F;

    // 6D31: BRA $6D38
    goto label_6D38;

    // 6D33: JSR $BD7B
    cpu.call_function(0xBD7B);

    // 6D36: LDA #$05
    cpu.m_a = 0x05;

    label_6D38:
    // 6D38: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6D3B: LDD #$7304
    cpu.m_d = 0x7304;

    // 6D3E: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6D40: LDD #$0AFF
    cpu.m_d = 0x0AFF;

    // 6D43: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 6D45: JSR $61EC
    cpu.call_function(0x61EC);

    // 6D48: LDU #$5038
    cpu.m_u = 0x5038;

    // 6D4B: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 6D4E: INC <$41
    // TODO: Convert INC <$41

    // 6D50: JSR $BD8F
    cpu.call_function(0xBD8F);

    // 6D54: JSR $75B9
    cpu.call_function(0x75B9);

    // 6D57: JSR $9558
    cpu.call_function(0x9558);

    // 6D5A: JSR $9890
    cpu.call_function(0x9890);

    // 6D5D: LDB <$58
    cpu.m_b = cpu.read_memory(0x58);

    // 6D60: ADDD <$56
    cpu.m_d += 0x56;

    // 6D62: ADDD #$0080
    cpu.m_d += 0x0080;

    // 6D65: ANDB #$7F
    cpu.m_b &= 0x7F;

    // 6D67: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6D69: CMPD #$7680
    // TODO: Convert CMPD #$7680

    // 6D6D: BCS $6D73
    if (cpu.carry_flag()) cpu.m_pc = 0x6D73;

    // 6D6F: LDA #$13
    cpu.m_a = 0x13;

    // 6D71: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6D73: LDD <$58
    cpu.m_d = cpu.read_memory16(0x58);

    // 6D75: SUBD #$0010
    cpu.m_d -= 0x0010;

    // 6D78: BPL $6D7D
    if (!cpu.negative_flag()) cpu.m_pc = 0x6D7D;

    // 6D7A: LDD #$0000
    cpu.m_d = 0x0000;

    // 6D7D: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 6D80: JSR $BB7B
    cpu.call_function(0xBB7B);

    // 6D83: INC <$41
    // TODO: Convert INC <$41

    // 6D86: JSR $75D9
    cpu.call_function(0x75D9);

    // 6D89: LDA $48A1
    cpu.m_a = cpu.read_memory(0x48A1);

    // 6D8C: CMPA #$01
    cpu.compare_a(0x01);

    // 6D8E: BCS $6D94
    if (cpu.carry_flag()) cpu.m_pc = 0x6D94;

    // 6D90: LDA #$15
    cpu.m_a = 0x15;

    // 6D92: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6D95: INC <$41
    // TODO: Convert INC <$41

    // 6D98: JSR $760A
    cpu.call_function(0x760A);

    // 6D9B: LDA $48A1
    cpu.m_a = cpu.read_memory(0x48A1);

    // 6D9E: BNE $6DA4
    if (!cpu.zero_flag()) cpu.m_pc = 0x6DA4;

    // 6DA0: LDA #$33
    cpu.m_a = 0x33;

    // 6DA2: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6DA5: LDD <$89
    cpu.m_d = cpu.read_memory16(0x89);

    // 6DA7: ADDD #$0080
    cpu.m_d += 0x0080;

    // 6DAA: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6DAC: LDD $4B26
    cpu.m_d = cpu.read_memory16(0x4B26);

    // 6DAF: ADDD #$0080
    cpu.m_d += 0x0080;

    // 6DB2: STD $4B26
    cpu.write_memory16(0x4B26, cpu.m_d);

    // 6DB6: LDD $4B24
    cpu.m_d = cpu.read_memory16(0x4B24);

    // 6DB9: ADDD #$FF80
    cpu.m_d += 0xFF80;

    // 6DBC: STD $4B24
    cpu.write_memory16(0x4B24, cpu.m_d);

    // 6DC0: LDD $4B26
    cpu.m_d = cpu.read_memory16(0x4B26);

    // 6DC3: ADDD #$0080
    cpu.m_d += 0x0080;

    // 6DC6: STD $4B26
    cpu.write_memory16(0x4B26, cpu.m_d);

    // 6DCA: LDD <$89
    cpu.m_d = cpu.read_memory16(0x89);

    // 6DCC: ADDD #$0080
    cpu.m_d += 0x0080;

    // 6DCF: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6DD2: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // 6DD4: BEQ $6DF0
    if (cpu.zero_flag()) cpu.m_pc = 0x6DF0;

    // 6DD6: BLE $6DDF
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6DDF;

    // 6DD8: DEC <$63
    // TODO: Convert DEC <$63

    // 6DDA: LDD #$04FF
    cpu.m_d = 0x04FF;

    // 6DDD: BRA $6DE4
    goto label_6DE4;

    // 6DDF: INC <$63
    // TODO: Convert INC <$63

    // 6DE1: LDD #$FB01
    cpu.m_d = 0xFB01;

    label_6DE4:
    // 6DE4: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 6DE7: LDD #$3FCE
    cpu.m_d = 0x3FCE;

    // 6DEA: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 6DED: JSR $CE24
    cpu.call_function(0xCE24);

    // 6DF0: JSR $6EA2
    cpu.call_function(0x6EA2);

    // 6DF3: JSR $70BD
    cpu.call_function(0x70BD);

    // 6DF6: JSR $70CC
    cpu.call_function(0x70CC);

    // 6DFA: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // 6DFC: BEQ $6E18
    if (cpu.zero_flag()) cpu.m_pc = 0x6E18;

    // 6DFE: BLE $6E07
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E07;

    // 6E00: DEC <$63
    // TODO: Convert DEC <$63

    // 6E02: LDD #$04FF
    cpu.m_d = 0x04FF;

    // 6E05: BRA $6E0C
    goto label_6E0C;

    // 6E07: INC <$63
    // TODO: Convert INC <$63

    // 6E09: LDD #$FB01
    cpu.m_d = 0xFB01;

    label_6E0C:
    // 6E0C: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 6E0F: LDD #$3FCE
    cpu.m_d = 0x3FCE;

    // 6E12: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 6E15: JSR $CE24
    cpu.call_function(0xCE24);

    // 6E18: JSR $6ECB
    cpu.call_function(0x6ECB);

    // 6E1B: JSR $70BD
    cpu.call_function(0x70BD);

    // 6E1E: JSR $70CC
    cpu.call_function(0x70CC);

    // 6E22: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // 6E24: BEQ $6E2E
    if (cpu.zero_flag()) cpu.m_pc = 0x6E2E;

    // 6E26: BLE $6E2B
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E2B;

    // 6E29: BRA $6E2C
    goto label_6E2C;

    label_6E2C:
    // 6E2C: STA <$63
    cpu.write_memory(0x63, cpu.m_a);

    // 6E2E: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);

    // 6E30: BPL $6E33
    if (!cpu.negative_flag()) cpu.m_pc = 0x6E33;

    // 6E33: LDB #$20
    cpu.m_b = 0x20;

    // 6E36: TST <$63
    // TODO: Convert TST <$63

    // 6E38: BPL $6E3E
    if (!cpu.negative_flag()) cpu.m_pc = 0x6E3E;

    // 6E3C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E3E: STD <$A5
    cpu.write_memory16(0xA5, cpu.m_d);

    // 6E40: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // 6E42: BPL $6E45
    if (!cpu.negative_flag()) cpu.m_pc = 0x6E45;

    // 6E45: LDB #$02
    cpu.m_b = 0x02;

    // 6E48: TST <$7D
    // TODO: Convert TST <$7D

    // 6E4A: BPL $6E50
    if (!cpu.negative_flag()) cpu.m_pc = 0x6E50;

    // 6E4E: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6E50: ADDD <$A5
    cpu.m_d += 0xA5;

    // 6E52: TST <$63
    // TODO: Convert TST <$63

    // 6E54: BNE $6E70
    if (!cpu.zero_flag()) cpu.m_pc = 0x6E70;

    // 6E56: SUBD <$A3
    cpu.m_d -= 0xA3;

    // 6E58: BLE $6E65
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E65;

    // 6E5A: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 6E5E: BLE $6E63
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E63;

    // 6E60: LDD #$0010
    cpu.m_d = 0x0010;

    // 6E63: BRA $6E6E
    goto label_6E6E;

    // 6E65: CMPD #$FFF0
    // TODO: Convert CMPD #$FFF0

    // 6E69: BGE $6E6E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6E6E;

    // 6E6B: LDD #$FFF0
    cpu.m_d = 0xFFF0;

    label_6E6E:
    // 6E6E: BRA $6E88
    goto label_6E88;

    // 6E70: SUBD <$A3
    cpu.m_d -= 0xA3;

    // 6E72: BLE $6E7F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E7F;

    // 6E74: CMPD #$0032
    // TODO: Convert CMPD #$0032

    // 6E78: BLE $6E7D
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6E7D;

    // 6E7A: LDD #$0032
    cpu.m_d = 0x0032;

    // 6E7D: BRA $6E88
    goto label_6E88;

    // 6E7F: CMPD #$FFCE
    // TODO: Convert CMPD #$FFCE

    // 6E83: BGE $6E88
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6E88;

    // 6E85: LDD #$FFCE
    cpu.m_d = 0xFFCE;

    label_6E88:
    // 6E88: TFR B,A
    cpu.m_a = cpu.m_b;

    // 6E8A: ADDA $4878
    cpu.m_a += 0x4878;

    // 6E8D: STA $4878
    cpu.write_memory(0x4878, cpu.m_a);

    // 6E91: ADDD <$A3
    cpu.m_d += 0xA3;

    // 6E93: STD <$A3
    cpu.write_memory16(0xA3, cpu.m_d);

    // 6E95: LDX #$4870
    cpu.m_x = 0x4870;

    // 6E98: JSR $7111
    cpu.call_function(0x7111);

    // 6E9B: BEQ $6EA0
    if (cpu.zero_flag()) cpu.m_pc = 0x6EA0;

    // 6E9D: JSR $CE24
    cpu.call_function(0xCE24);

    // 6EA2: LDX $4B32
    cpu.m_x = cpu.read_memory16(0x4B32);

    // 6EA5: BNE $6EAA
    if (!cpu.zero_flag()) cpu.m_pc = 0x6EAA;

    // 6EA7: LDX #$4900
    cpu.m_x = 0x4900;

    // 6EAA: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6EAC: CMPA #$01
    cpu.compare_a(0x01);

    // 6EAE: BNE $6EB9
    if (!cpu.zero_flag()) cpu.m_pc = 0x6EB9;

    // 6EB0: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 6EB2: BNE $6EB9
    if (!cpu.zero_flag()) cpu.m_pc = 0x6EB9;

    // 6EB4: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // 6EB6: JMP $6EF7
    goto label_6EF7;

    // 6EB9: LDA $4B3C
    cpu.m_a = cpu.read_memory(0x4B3C);

    // 6EBC: BLE $6EC3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6EC3;

    // 6EBE: LDA #$09
    cpu.m_a = 0x09;

    // 6EC0: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.m_a);

    // 6EC3: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6EC6: CMPX #$494B
    cpu.compare_x(0x494B);

    // 6EC9: BCS $6EAA
    if (cpu.carry_flag()) cpu.m_pc = 0x6EAA;

    // 6ECB: LDD #$0000
    cpu.m_d = 0x0000;

    // 6ECE: STD $4B32
    cpu.write_memory16(0x4B32, cpu.m_d);

    // 6ED1: LDA $5080
    cpu.m_a = cpu.read_memory(0x5080);

    // 6ED4: BMI $6EDB
    if (cpu.negative_flag()) cpu.m_pc = 0x6EDB;

    // 6ED6: LDB $5084
    cpu.m_b = cpu.read_memory(0x5084);

    // 6ED9: BRA $6EE0
    goto label_6EE0;

    // 6EDB: LDB #$7F
    cpu.m_b = 0x7F;

    // 6EDD: SUBB $5084
    cpu.m_b -= 0x5084;

    label_6EE0:
    // 6EE0: STB $486D
    cpu.write_memory(0x486D, cpu.m_b);

    // 6EE3: LDA $5080
    cpu.m_a = cpu.read_memory(0x5080);

    // 6EE6: BMI $6EED
    if (cpu.negative_flag()) cpu.m_pc = 0x6EED;

    // 6EE8: LDB $5082
    cpu.m_b = cpu.read_memory(0x5082);

    // 6EEB: BRA $6EF2
    goto label_6EF2;

    // 6EED: LDB #$7F
    cpu.m_b = 0x7F;

    // 6EEF: SUBB $5082
    cpu.m_b -= 0x5082;

    // 6EF3: STB $4876
    cpu.write_memory(0x4876, cpu.m_b);

    label_6EF7:
    // 6EF7: LDA #$10
    cpu.m_a = 0x10;

    // 6EF9: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6EFC: JSR $7160
    cpu.call_function(0x7160);

    // 6EFF: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // 6F01: STX $4B32
    cpu.write_memory16(0x4B32, cpu.m_x);

    // 6F05: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 6F07: ADDB #$03
    cpu.m_b += 0x03;

    // 6F09: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 6F0C: LDA #$67
    cpu.m_a = 0x67;

    // 6F0E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 6F11: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);

    // 6F14: BLE $6F39
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6F39;

    // 6F16: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F19: ASL $5001
    // TODO: Convert ASL $5001

    // 6F1C: ROL $5000
    // TODO: Convert ROL $5000

    // 6F1F: BVS $6F54
    // TODO: Convert BVS $6F54

    // 6F23: BVC $6F29
    // TODO: Convert BVC $6F29

    // 6F27: BRA $6F54
    goto label_6F54;

    // 6F29: ASL $5005
    // TODO: Convert ASL $5005

    // 6F2C: ROL $5004
    // TODO: Convert ROL $5004

    // 6F2F: BVC $6F19
    // TODO: Convert BVC $6F19

    // 6F31: ROR $5004
    // TODO: Convert ROR $5004

    // 6F34: ROR $5005
    // TODO: Convert ROR $5005

    // 6F37: BRA $6F54
    goto label_6F54;

    // 6F39: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // 6F3C: ORB #$01
    cpu.m_b |= 0x01;

    // 6F40: BVC $6F46
    // TODO: Convert BVC $6F46

    // 6F44: BRA $6F54
    goto label_6F54;

    // 6F46: ASL $5005
    // TODO: Convert ASL $5005

    // 6F49: ROL $5004
    // TODO: Convert ROL $5004

    // 6F4C: BVC $6F3E
    // TODO: Convert BVC $6F3E

    // 6F4E: ROR $5004
    // TODO: Convert ROR $5004

    // 6F51: ROR $5005
    // TODO: Convert ROR $5005

    // 6F55: STA $4876
    cpu.write_memory(0x4876, cpu.m_a);

    // 6F58: LDB $5004
    cpu.m_b = cpu.read_memory(0x5004);

    // 6F5B: STB $486D
    cpu.write_memory(0x486D, cpu.m_b);

    // 6F5F: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F61: JSR $CDAB
    cpu.call_function(0xCDAB);

    // 6F64: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F67: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F69: JSR $CDA9
    cpu.call_function(0xCDA9);

    // 6F6C: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F6F: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F72: ADDD $5098
    cpu.m_d += 0x5098;

    // 6F75: BVC $6F7D
    // TODO: Convert BVC $6F7D

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $6F7D
    // TODO: Convert BVC $6F7D

    // 6F7B: DEC <$A7
    // TODO: Convert DEC <$A7

    // 6F7D: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 6F80: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 6F83: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F86: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6F89: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 6F8B: BPL $6F8E
    if (!cpu.negative_flag()) cpu.m_pc = 0x6F8E;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $6F98
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6F98;

    // 6F96: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6F98: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6F9B: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 6F9E: ADDD $509A
    cpu.m_d += 0x509A;

    // 6FA1: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 6FA4: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 6FA7: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6FAA: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6FAD: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 6FAF: BPL $6FB2
    if (!cpu.negative_flag()) cpu.m_pc = 0x6FB2;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $6FBC
    if (!cpu.negative_flag()) cpu.m_pc = 0x6FBC;

    // 6FBA: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6FBC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6FBF: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 6FC2: ADDD $509C
    cpu.m_d += 0x509C;

    // 6FC5: CMPD #$1C00
    // TODO: Convert CMPD #$1C00

    // 6FC9: BLE $6FD0
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6FD0;

    // 6FCB: LDD #$1C00
    cpu.m_d = 0x1C00;

    // 6FCE: BRA $6FD9
    goto label_6FD9;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $6FD9
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6FD9;

    // 6FD6: LDD #$0200
    cpu.m_d = 0x0200;

    label_6FD9:
    // 6FD9: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FDC: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 6FE0: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FE3: CMPD #$0380
    // TODO: Convert CMPD #$0380

    // 6FE7: BLE $6FEF
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6FEF;

    // 6FE9: SUBD #$0180
    cpu.m_d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FEF: BRA $7000
    goto label_7000;

    // 6FF1: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $7000
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7000;

    // 6FFA: SUBD #$0100
    cpu.m_d -= 0x0100;

    // 6FFD: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    label_7000:
    // 7000: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7003: ADDD $5098
    cpu.m_d += 0x5098;

    // 7006: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7009: LDD #$0300
    cpu.m_d = 0x0300;

    // 700C: SUBD $5086
    cpu.m_d -= 0x5086;

    // 700F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // 7012: ADDD $5086
    cpu.m_d += 0x5086;

    // 7015: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 7018: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 701C: BCC $7023
    if (!cpu.carry_flag()) cpu.m_pc = 0x7023;

    // 701E: LDD #$0BB8
    cpu.m_d = 0x0BB8;

    // 7021: BRA $7026
    goto label_7026;

    // 7023: LDD #$F448
    cpu.m_d = 0xF448;

    label_7026:
    // 7026: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7029: LDD #$3EEB
    cpu.m_d = 0x3EEB;

    // 702C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 702F: JSR $CE24
    cpu.call_function(0xCE24);

    // 7032: LDD #$0000
    cpu.m_d = 0x0000;

    // 7035: SUBD <$A3
    cpu.m_d -= 0xA3;

    // 7037: JSR $6E70
    cpu.call_function(0x6E70);

    // 703B: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 703E: ADDD $5098
    cpu.m_d += 0x5098;

    // 7041: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7044: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 7047: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 704A: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 704D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 704F: BPL $7052
    if (!cpu.negative_flag()) cpu.m_pc = 0x7052;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $705B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x705B;

    // 7059: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 705B: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 705E: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 7061: ADDD $509A
    cpu.m_d += 0x509A;

    // 7064: CMPD #$01FF
    // TODO: Convert CMPD #$01FF

    // 7068: BLE $706D
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x706D;

    // 706A: LDD #$01FF
    cpu.m_d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $7076
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7076;

    // 7073: LDD #$FE01
    cpu.m_d = 0xFE01;

    // 7076: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 7079: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 707C: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7087: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 7089: BPL $708C
    if (!cpu.negative_flag()) cpu.m_pc = 0x708C;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $7096
    if (!cpu.negative_flag()) cpu.m_pc = 0x7096;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 70A1: ADDD $509C
    cpu.m_d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $70AD
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x70AD;

    // 70AA: LDD #$FEFF
    cpu.m_d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $70B6
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x70B6;

    // 70B3: LDD #$F201
    cpu.m_d = 0xF201;

    // 70B6: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 70B9: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 70BD: LDX #$4866
    cpu.m_x = 0x4866;

    // 70C0: JSR $70F0
    cpu.call_function(0x70F0);

    // 70C3: JSR $7111
    cpu.call_function(0x7111);

    // 70C6: BEQ $70CB
    if (cpu.zero_flag()) cpu.m_pc = 0x70CB;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.m_x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $70DA
    if (cpu.zero_flag()) cpu.m_pc = 0x70DA;

    // 70D7: JSR $CE3A
    cpu.call_function(0xCE3A);

    label_70DB:
    // 70DB: JMP $70db
    goto label_70DB;

}

} // namespace StarWars