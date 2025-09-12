#include "cpu_6809.h"

namespace StarWars {

void routine_6a0c_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6a0c.md
    // Address: 0x6A0C

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
    cpu.m_pc = 0x6B81;

    // 6B7A: CMPA #$18
    cpu.compare_a(0x18);

    // 6B7C: BNE $6B81
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B81;

    // 6B7E: JSR $BD76
    cpu.call_function(0xBD76);

    // 6B81: BRA $6B96
    cpu.m_pc = 0x6B96;

    // 6B83: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B86: CMPA #$10
    cpu.compare_a(0x10);

    // 6B88: BNE $6B8F
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B8F;

    // 6B8A: JSR $BD30
    cpu.call_function(0xBD30);

    // 6B8D: BRA $6B96
    cpu.m_pc = 0x6B96;

    // 6B8F: CMPA #$16
    cpu.compare_a(0x16);

    // 6B91: BNE $6B96
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B96;

    // 6B93: JSR $BD62
    cpu.call_function(0xBD62);

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
    cpu.m_pc = 0x6BDA;

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
    cpu.m_pc = 0x6BDA;

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

}

} // namespace StarWars