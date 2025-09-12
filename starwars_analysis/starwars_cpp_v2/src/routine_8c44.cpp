#include "cpu_6809.h"

namespace StarWars {

void routine_8c44_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8c44.md
    // Address: 0x8C44

    // 8C44: JSR $8D9D
    cpu.call_function(0x8D9D);

    // 8C47: JSR $8DE3
    cpu.call_function(0x8DE3);

    // 8C4A: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8C4C: CMPA #$01
    cpu.compare_a(0x01);

    // 8C4E: LBNE $8D66
    // TODO: Convert LBNE $8D66

    // 8C52: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 8C54: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 8C57: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8C59: CLR $A,X
    // TODO: Fix comma operator: CLR $A,X

    // 8C5C: LDB #$13
    cpu.m_b = 0x13;

    // 8C5E: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8C61: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8C64: BITA #$40
    // TODO: Convert BITA #$40

    // 8C66: BEQ $8C81
    if (cpu.zero_flag()) cpu.m_pc = 0x8C81;

    // 8C68: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // 8C6B: ADDD #$1000
    cpu.m_d += 0x1000;

    // 8C6E: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 8C71: LDA #$67
    cpu.m_a = 0x67;

    // 8C73: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C76: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // 8C79: SUBD #$1000
    cpu.m_d -= 0x1000;

    // 8C7C: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 8C7F: BRA $8C86
    cpu.m_pc = 0x8C86;

    // 8C81: LDA #$67
    cpu.m_a = 0x67;

    // 8C83: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C86: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 8C89: BMI $8CAE
    if (cpu.negative_flag()) cpu.m_pc = 0x8CAE;

    // 8C8B: INC $A,X
    // TODO: Convert INC $A,X

    // 8C8D: SUBD #$4000
    cpu.m_d -= 0x4000;

    // 8C90: BGE $8CAE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8CAE;

    // 8C92: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8C95: ORB #$08
    cpu.m_b |= 0x08;

    // 8C97: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8C9A: LDD $5072
    cpu.m_d = cpu.read_memory16(0x5072);

    // 8C9D: ADDD $5074
    cpu.m_d += 0x5074;

    // 8CA0: CMPD #$0020
    // TODO: Convert CMPD #$0020

    // 8CA4: BHI $8CAE
    // TODO: Convert BHI $8CAE

    // 8CA6: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CA9: ORB #$04
    cpu.m_b |= 0x04;

    // 8CAB: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CAE: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CB1: BITA #$10
    // TODO: Convert BITA #$10

    // 8CB3: BEQ $8D05
    if (cpu.zero_flag()) cpu.m_pc = 0x8D05;

    // 8CB5: LDD $11,X
    // TODO: Fix comma operator: LDD $11,X

    // 8CB8: BITA #$40
    // TODO: Convert BITA #$40

    // 8CBA: BNE $8D05
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D05;

    // 8CBC: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 8CBF: SUBD #$0800
    cpu.m_d -= 0x0800;

    // 8CC2: BLE $8D05
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8D05;

    // 8CC4: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8CC6: BNE $8D05
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D05;

    // 8CC8: LDB $4B19
    cpu.m_b = cpu.read_memory(0x4B19);

    // 8CCB: CMPB #$0B
    cpu.compare_b(0x0B);

    // 8CCD: BCS $8CD4
    if (cpu.carry_flag()) cpu.m_pc = 0x8CD4;

    // 8CCF: LDU #$8D99
    cpu.m_u = 0x8D99;

    // 8CD2: BRA $8CDB
    cpu.m_pc = 0x8CDB;

    // 8CD6: LDU #$8D71
    cpu.m_u = 0x8D71;

    // 8CD9: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 8CDB: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 8CDD: ANDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8CDF: BNE $8D05
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D05;

    // 8CE1: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 8CE4: CMPA $1,U
    // TODO: Fix comma operator: CMPA $1,U

    // 8CE6: BLS $8D05
    // TODO: Convert BLS $8D05

    // 8CE8: LDU $2,U
    // TODO: Fix comma operator: LDU $2,U

    // 8CEA: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U

    // 8CEC: BNE $8CFD
    if (!cpu.zero_flag()) cpu.m_pc = 0x8CFD;

    // 8CEE: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8CF0: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CF3: ORB #$40
    cpu.m_b |= 0x40;

    // 8CF5: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CF8: JSR $A68B
    cpu.call_function(0xA68B);

    // 8CFB: BRA $8D05
    cpu.m_pc = 0x8D05;

    // 8CFD: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8CFF: CMPU #$496F
    // TODO: Convert CMPU #$496F

    // 8D03: BCS $8CEA
    if (cpu.carry_flag()) cpu.m_pc = 0x8CEA;

    // 8D05: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8D07: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8D0A: BITA #$80
    // TODO: Convert BITA #$80

    // 8D0C: BEQ $8D66
    if (cpu.zero_flag()) cpu.m_pc = 0x8D66;

    // 8D0E: LDA <$4F
    cpu.m_a = cpu.read_memory(0x4F);

    // 8D10: BNE $8D3A
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D3A;

    // 8D12: LDA $5002
    cpu.m_a = cpu.read_memory(0x5002);

    // 8D15: BMI $8D1C
    if (cpu.negative_flag()) cpu.m_pc = 0x8D1C;

    // 8D17: JSR $8979
    cpu.call_function(0x8979);

    // 8D1A: BRA $8D1F
    cpu.m_pc = 0x8D1F;

    // 8D1C: JSR $8971
    cpu.call_function(0x8971);

    // 8D1F: LDA <$4E
    cpu.m_a = cpu.read_memory(0x4E);

    // 8D21: BNE $8D3A
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D3A;

    // 8D23: LDB $5004
    cpu.m_b = cpu.read_memory(0x5004);

    // 8D27: ADDB #$01
    cpu.m_b += 0x01;

    // 8D29: CMPB #$01
    cpu.compare_b(0x01);

    // 8D2B: BLS $8D3A
    // TODO: Convert BLS $8D3A

    // 8D2D: EORA $5002
    cpu.m_a ^= 0x5002;

    // 8D30: BMI $8D37
    if (cpu.negative_flag()) cpu.m_pc = 0x8D37;

    // 8D32: JSR $8961
    cpu.call_function(0x8961);

    // 8D35: BRA $8D3A
    cpu.m_pc = 0x8D3A;

    // 8D37: JSR $8969
    cpu.call_function(0x8969);

    // 8D3A: LDA <$4D
    cpu.m_a = cpu.read_memory(0x4D);

    // 8D3C: BNE $8D66
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D66;

    // 8D3E: LDA $5004
    cpu.m_a = cpu.read_memory(0x5004);

    // 8D41: BMI $8D48
    if (cpu.negative_flag()) cpu.m_pc = 0x8D48;

    // 8D43: JSR $8951
    cpu.call_function(0x8951);

    // 8D46: BRA $8D4B
    cpu.m_pc = 0x8D4B;

    // 8D48: JSR $8959
    cpu.call_function(0x8959);

    // 8D4B: LDA <$4E
    cpu.m_a = cpu.read_memory(0x4E);

    // 8D4D: BNE $8D66
    if (!cpu.zero_flag()) cpu.m_pc = 0x8D66;

    // 8D4F: LDB $5002
    cpu.m_b = cpu.read_memory(0x5002);

    // 8D53: ADDB #$01
    cpu.m_b += 0x01;

    // 8D55: CMPB #$01
    cpu.compare_b(0x01);

    // 8D57: BLS $8D66
    // TODO: Convert BLS $8D66

    // 8D59: EORA $5004
    cpu.m_a ^= 0x5004;

    // 8D5C: BMI $8D63
    if (cpu.negative_flag()) cpu.m_pc = 0x8D63;

    // 8D5E: JSR $8969
    cpu.call_function(0x8969);

    // 8D61: BRA $8D66
    cpu.m_pc = 0x8D66;

    // 8D63: JSR $8961
    cpu.call_function(0x8961);

    // 8D66: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8D68: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8D6B: ANDA #$EF
    cpu.m_a &= 0xEF;

    // 8D6D: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8D71: CLR <$80
    cpu.write_memory(0x80, 0);

    // 8D74: ROL $F,X
    // TODO: Convert ROL $F,X

    // 8D76: SUBA #$49
    cpu.m_a -= 0x49;

    // 8D78: ROL $F,X
    // TODO: Convert ROL $F,X

    // 8D7A: SUBA #$49
    cpu.m_a -= 0x49;

    // 8D7C: COM $F,X
    // TODO: Convert COM $F,X

    // 8D81: ASR <$80
    // TODO: Convert ASR <$80

    // 8D85: ASR <$20
    // TODO: Convert ASR <$20

    // 8D89: ASR <$20
    // TODO: Convert ASR <$20

    // 8D8D: COM <$80
    // TODO: Convert COM <$80

    // 8D91: COM <$60
    // TODO: Convert COM <$60

    // 8D95: COM <$40
    // TODO: Convert COM <$40

    // 8D99: COM <$30
    // TODO: Convert COM <$30

    // 8D9D: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8D9F: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DA1: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8DA3: BNE $8DDF
    if (!cpu.zero_flag()) cpu.m_pc = 0x8DDF;

    // 8DA5: LDB $12,X
    // TODO: Fix comma operator: LDB $12,X

    // 8DA8: STB <$50
    cpu.write_memory(0x50, cpu.m_b);

    // 8DAA: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DAC: LDD #$0000
    cpu.m_d = 0x0000;

    // 8DAF: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8DB1: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8DB3: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8DB5: LSR <$50
    // TODO: Convert LSR <$50

    // 8DB7: BCC $8DBC
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DBC;

    // 8DB9: JSR $8A59
    cpu.call_function(0x8A59);

    // 8DBC: LSR <$50
    // TODO: Convert LSR <$50

    // 8DBE: BCC $8DC3
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DC3;

    // 8DC0: JSR $8A7E
    cpu.call_function(0x8A7E);

    // 8DC3: LSR <$50
    // TODO: Convert LSR <$50

    // 8DC5: BCC $8DCA
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DCA;

    // 8DC7: JSR $8A21
    cpu.call_function(0x8A21);

    // 8DCA: LSR <$50
    // TODO: Convert LSR <$50

    // 8DCC: BCC $8DD1
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DD1;

    // 8DCE: JSR $8A3D
    cpu.call_function(0x8A3D);

    // 8DD1: LSR <$50
    // TODO: Convert LSR <$50

    // 8DD3: BCC $8DD8
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DD8;

    // 8DD5: JSR $8A05
    cpu.call_function(0x8A05);

    // 8DD8: LSR <$50
    // TODO: Convert LSR <$50

    // 8DDA: BCC $8DDF
    if (!cpu.carry_flag()) cpu.m_pc = 0x8DDF;

    // 8DDC: JSR $89E9
    cpu.call_function(0x89E9);

    // 8DDF: JSR $8AB6
    cpu.call_function(0x8AB6);

    // 8DE3: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DE5: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // 8DE7: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8DE9: BLT $8DEE
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8DEE;

    // 8DEB: LDD #$7CFF
    cpu.m_d = 0x7CFF;

    // 8DEE: CMPA #$82
    cpu.compare_a(0x82);

    // 8DF0: BGT $8DF5
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8DF5;

    // 8DF2: LDD #$8300
    cpu.m_d = 0x8300;

    // 8DF5: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8DF7: LDD $A,U
    // TODO: Fix comma operator: LDD $A,U

    // 8DF9: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8DFB: BLT $8E00
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8E00;

    // 8DFD: LDD #$7CFF
    cpu.m_d = 0x7CFF;

    // 8E00: CMPA #$82
    cpu.compare_a(0x82);

    // 8E02: BGT $8E07
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8E07;

    // 8E04: LDD #$8300
    cpu.m_d = 0x8300;

    // 8E07: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8E09: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8E0B: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8E0D: BLT $8E12
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8E12;

    // 8E0F: LDD #$7CFF
    cpu.m_d = 0x7CFF;

    // 8E12: CMPA #$82
    cpu.compare_a(0x82);

    // 8E14: BGT $8E19
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8E19;

    // 8E16: LDD #$8300
    cpu.m_d = 0x8300;

    // 8E19: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8E1C: DEC <$E6
    // TODO: Convert DEC <$E6

    // 8E1E: BGT $8E22
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x8E22;

    // 8E20: CLR <$E6
    cpu.write_memory(0xE6, 0);

    // 8E23: LDD #$0000
    cpu.m_d = 0x0000;

    // 8E26: STD $11,X
    // TODO: Handle indexed addressing: STD $11,X

    // 8E29: STA $10,X
    // TODO: Handle indexed addressing: STA $10,X

    // 8E2C: STD $13,X
    // TODO: Handle indexed addressing: STD $13,X

    // 8E2F: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8E32: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E34: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E36: STA $F,X
    // TODO: Handle indexed addressing: STA $F,X

    // 8E38: BEQ $8E51
    if (cpu.zero_flag()) cpu.m_pc = 0x8E51;

    // 8E3A: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8E3D: ANDA $13,X
    // TODO: Fix comma operator: ANDA $13,X

    // 8E40: BNE $8E5C
    if (!cpu.zero_flag()) cpu.m_pc = 0x8E5C;

    // 8E42: ANDB $00,X
    // TODO: Fix comma operator: ANDB $00,X

}

} // namespace StarWars