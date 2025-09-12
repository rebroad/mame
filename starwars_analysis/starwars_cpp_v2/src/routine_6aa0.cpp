#include "cpu_6809.h"

namespace StarWars {

void routine_6aa0_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6aa0.md
    // Address: 0x6AA0

    // 6AA0: JMP <$83
    cpu.m_pc = 0x83;

    // 6AA2: NEG <$11
    // TODO: Convert NEG <$11

    // 6AA4: BCS $000A
    if (cpu.carry_flag()) cpu.m_pc = 0x6AB0;

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

    // 6ADA: BCS $005E
    if (cpu.carry_flag()) cpu.m_pc = 0x6B3A;

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

    // 6B16: BLS $007A
    // TODO: Convert BLS $007A

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

    // 6B37: LBMI $0241
    // TODO: Convert LBMI $0241

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

    // 6B5C: BNE $00F9
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B57;

    // 6B5E: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B61: CMPA #$02
    cpu.compare_a(0x02);

    // 6B63: BNE $00C8
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B2D;

    // 6B65: JSR $BD9E
    cpu.call_function(0xBD9E);

    // 6B68: LDA $4B12
    cpu.m_a = cpu.read_memory(0x4B12);

    // 6B6C: BCS $00E3
    if (cpu.carry_flag()) cpu.m_pc = 0x6B51;

    // 6B6E: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B71: CMPA #$10
    cpu.compare_a(0x10);

    // 6B73: BNE $00DA
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B4F;

    // 6B75: JSR $BD6C
    cpu.call_function(0xBD6C);

    // 6B78: BRA $00E1
    cpu.m_pc = 0x6B5B;

    // 6B7A: CMPA #$18
    cpu.compare_a(0x18);

    // 6B7C: BNE $00E1
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B5F;

    // 6B7E: JSR $BD76
    cpu.call_function(0xBD76);

    // 6B81: BRA $00F6
    cpu.m_pc = 0x6B79;

    // 6B83: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6B86: CMPA #$10
    cpu.compare_a(0x10);

    // 6B88: BNE $00EF
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B79;

    // 6B8A: JSR $BD30
    cpu.call_function(0xBD30);

    // 6B8D: BRA $00F6
    cpu.m_pc = 0x6B85;

    // 6B8F: CMPA #$16
    cpu.compare_a(0x16);

    // 6B91: BNE $00F6
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B89;

    // 6B93: JSR $BD62
    cpu.call_function(0xBD62);

    // 6B96: INC $4B0E
    // TODO: Convert INC $4B0E

    // 6B99: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 6B9B: BEQ $013A
    if (cpu.zero_flag()) cpu.m_pc = 0x6BD7;

    // 6B9D: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 6B9F: SUBD $5098
    cpu.m_d -= 0x5098;

    // 6BA2: SUBD #$0800
    cpu.m_d -= 0x0800;

    // 6BA5: BHI $013A
    // TODO: Convert BHI $013A

    // 6BA7: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6BAA: BNE $0126
    if (!cpu.zero_flag()) cpu.m_pc = 0x6BD2;

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

    // 6BB9: LBLE $0241
    // TODO: Convert LBLE $0241

    // 6BBD: LDA #$31
    cpu.m_a = 0x31;

    // 6BBF: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6BC1: JSR $BD3A
    cpu.call_function(0xBD3A);

    // 6BC4: BRA $013A
    cpu.m_pc = 0x6C00;

    // 6BC6: LDA #$11
    cpu.m_a = 0x11;

    // 6BC8: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6BCA: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6BCD: CMPA #$03
    cpu.compare_a(0x03);

    // 6BCF: BLT $013A
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6C0B;

    // 6BD1: ANDA #$01
    cpu.m_a &= 0x01;

    // 6BD3: BEQ $013A
    if (cpu.zero_flag()) cpu.m_pc = 0x6C0F;

    // 6BD5: JSR $BD17
    cpu.call_function(0xBD17);

    // 6BD8: BRA $013A
    cpu.m_pc = 0x6C14;

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

    // 6BF5: BNE $018C
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B83;

    // 6BF7: DEC $4B0E
    // TODO: Convert DEC $4B0E

    // 6BFA: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6BFD: CMPA #$03
    cpu.compare_a(0x03);

    // 6BFF: BNE $0169
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C6A;

    // 6C01: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6C04: BEQ $0169
    if (cpu.zero_flag()) cpu.m_pc = 0x6C6F;

    // 6C06: JSR $9806
    cpu.call_function(0x9806);

    // 6C09: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C0C: CMPA #$02
    cpu.compare_a(0x02);

    // 6C0E: BNE $0173
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C83;

    // 6C10: JSR $9775
    cpu.call_function(0x9775);

    // 6C13: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C16: CMPA #$01
    cpu.compare_a(0x01);

    // 6C18: BNE $0182
    if (!cpu.zero_flag()) cpu.m_pc = 0x6B9C;

    // 6C1A: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 6C1D: BEQ $0182
    if (cpu.zero_flag()) cpu.m_pc = 0x6BA1;

    // 6C1F: JSR $953B
    cpu.call_function(0x953B);

    // 6C22: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 6C25: CMPA #$00
    cpu.compare_a(0x00);

    // 6C27: BNE $018C
    if (!cpu.zero_flag()) cpu.m_pc = 0x6BB5;

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

    // 6C3A: BNE $01D5
    if (!cpu.zero_flag()) cpu.m_pc = 0x6C11;

    // 6C3C: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6C40: CMPA #$62
    cpu.compare_a(0x62);

    // 6C42: BLS $01A6
    // TODO: Convert BLS $01A6

    // 6C44: LDA #$62
    cpu.m_a = 0x62;

    // 6C46: STA $4B15
    cpu.write_memory(0x4B15, cpu.m_a);

    // 6C49: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6C4C: CMPA #$05
    cpu.compare_a(0x05);

    // 6C4E: BCC $01BD
    if (!cpu.carry_flag()) cpu.m_pc = 0x6C0D;

    // 6C50: LDA $4B17
    cpu.m_a = cpu.read_memory(0x4B17);

    // 6C54: CMPA #$04
    cpu.compare_a(0x04);

    // 6C56: BLS $01BA
    // TODO: Convert BLS $01BA

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

    // 6C65: BLS $01C9
    // TODO: Convert BLS $01C9

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

    // 6C9F: JSR >$0000
    cpu.call_function(0x0000);

}

} // namespace StarWars