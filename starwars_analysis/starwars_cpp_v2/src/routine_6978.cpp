#include "cpu_6809.h"

namespace StarWars {

void routine_6978_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6978.md
    // Address: 0x6978

    // 6978: CLR $7,S
    // TODO: Fix comma operator: CLR $7,S

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
    cpu.m_pc = 0x6995;

    // 6993: LDA #$29
    cpu.m_a = 0x29;

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

}

} // namespace StarWars