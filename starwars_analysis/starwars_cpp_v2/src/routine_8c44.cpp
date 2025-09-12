#include "cpu_6809.h"

namespace StarWars {

void routine_8c44_impl(StarWarsCPU& cpu) {
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

    // 8C4E: LBNE $0122
    // TODO: Convert LBNE $0122

    // 8C52: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 8C54: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 8C57: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8C59: CLR $A,X
    // TODO: Fix comma operator: CLR $A,X

    // 8C5C: LDB #$13
    cpu.state_.b = 0x13;

    // 8C5E: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8C61: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8C64: BITA #$40
    // TODO: Convert BITA #$40

    // 8C66: BEQ $003D
    if (cpu.zero_flag()) cpu.state_.pc = 0x8CA5;

    // 8C68: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8C6B: ADDD #$1000
    cpu.state_.d += 0x1000;

    // 8C6E: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 8C71: LDA #$67
    cpu.state_.a = 0x67;

    // 8C73: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C76: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8C79: SUBD #$1000
    cpu.state_.d -= 0x1000;

    // 8C7C: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 8C7F: BRA $0042
    cpu.state_.pc = 0x8CC3;

    // 8C81: LDA #$67
    cpu.state_.a = 0x67;

    // 8C83: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8C86: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8C89: BMI $006A
    if (cpu.negative_flag()) cpu.state_.pc = 0x8CF5;

    // 8C8B: INC $A,X
    // TODO: Convert INC $A,X

    // 8C8D: SUBD #$4000
    cpu.state_.d -= 0x4000;

    // 8C90: BGE $006A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8CFC;

    // 8C92: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8C95: ORB #$08
    cpu.state_.b |= 0x08;

    // 8C97: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8C9A: LDD $5072
    cpu.state_.d = cpu.read_memory_word(0x5072);

    // 8C9D: ADDD $5074
    cpu.state_.d += 0x5074;

    // 8CA0: CMPD #$0020
    // TODO: Convert CMPD #$0020

    // 8CA4: BHI $006A
    // TODO: Convert BHI $006A

    // 8CA6: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CA9: ORB #$04
    cpu.state_.b |= 0x04;

    // 8CAB: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CAE: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CB1: BITA #$10
    // TODO: Convert BITA #$10

    // 8CB3: BEQ $00C1
    if (cpu.zero_flag()) cpu.state_.pc = 0x8C76;

    // 8CB5: LDD $11,X
    // TODO: Fix comma operator: LDD $11,X

    // 8CB8: BITA #$40
    // TODO: Convert BITA #$40

    // 8CBA: BNE $00C1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C7D;

    // 8CBC: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8CBF: SUBD #$0800
    cpu.state_.d -= 0x0800;

    // 8CC2: BLE $00C1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8C85;

    // 8CC4: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8CC6: BNE $00C1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8C89;

    // 8CC8: LDB $4B19
    cpu.state_.b = cpu.read_memory(0x4B19);

    // 8CCB: CMPB #$0B
    cpu.compare_b(0x0B);

    // 8CCD: BCS $0090
    if (cpu.carry_flag()) cpu.state_.pc = 0x8C5F;

    // 8CCF: LDU #$8D99
    cpu.state_.u = 0x8D99;

    // 8CD2: BRA $0097
    cpu.state_.pc = 0x8C6B;

    // 8CD6: LDU #$8D71
    cpu.state_.u = 0x8D71;

    // 8CD9: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // 8CDB: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 8CDD: ANDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8CDF: BNE $00C1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8CA2;

    // 8CE1: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 8CE4: CMPA $1,U
    // TODO: Fix comma operator: CMPA $1,U

    // 8CE6: BLS $00C1
    // TODO: Convert BLS $00C1

    // 8CE8: LDU $2,U
    // TODO: Fix comma operator: LDU $2,U

    // 8CEA: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U

    // 8CEC: BNE $00B9
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8CA7;

    // 8CEE: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8CF0: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8CF3: ORB #$40
    cpu.state_.b |= 0x40;

    // 8CF5: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8CF8: JSR $A68B
    cpu.call_function(0xA68B);

    // 8CFB: BRA $00C1
    cpu.state_.pc = 0x8CBE;

    // 8CFD: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8CFF: CMPU #$496F
    // TODO: Convert CMPU #$496F

    // 8D03: BCS $00A6
    if (cpu.carry_flag()) cpu.state_.pc = 0x8CAB;

    // 8D05: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D07: LDA $11,X
    // TODO: Fix comma operator: LDA $11,X

    // 8D0A: BITA #$80
    // TODO: Convert BITA #$80

    // 8D0C: BEQ $0122
    if (cpu.zero_flag()) cpu.state_.pc = 0x8D30;

    // 8D0E: LDA <$4F
    cpu.state_.a = cpu.read_memory(0x4F);

    // 8D10: BNE $00F6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D08;

    // 8D12: LDA $5002
    cpu.state_.a = cpu.read_memory(0x5002);

    // 8D15: BMI $00D8
    if (cpu.negative_flag()) cpu.state_.pc = 0x8CEF;

    // 8D17: JSR $8979
    cpu.call_function(0x8979);

    // 8D1A: BRA $00DB
    cpu.state_.pc = 0x8CF7;

    // 8D1C: JSR $8971
    cpu.call_function(0x8971);

    // 8D1F: LDA <$4E
    cpu.state_.a = cpu.read_memory(0x4E);

    // 8D21: BNE $00F6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D19;

    // 8D23: LDB $5004
    cpu.state_.b = cpu.read_memory(0x5004);

    // 8D27: ADDB #$01
    cpu.state_.b += 0x01;

    // 8D29: CMPB #$01
    cpu.compare_b(0x01);

    // 8D2B: BLS $00F6
    // TODO: Convert BLS $00F6

    // 8D2D: EORA $5002
    cpu.state_.a ^= 0x5002;

    // 8D30: BMI $00F3
    if (cpu.negative_flag()) cpu.state_.pc = 0x8D25;

    // 8D32: JSR $8961
    cpu.call_function(0x8961);

    // 8D35: BRA $00F6
    cpu.state_.pc = 0x8D2D;

    // 8D37: JSR $8969
    cpu.call_function(0x8969);

    // 8D3A: LDA <$4D
    cpu.state_.a = cpu.read_memory(0x4D);

    // 8D3C: BNE $0122
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D60;

    // 8D3E: LDA $5004
    cpu.state_.a = cpu.read_memory(0x5004);

    // 8D41: BMI $0104
    if (cpu.negative_flag()) cpu.state_.pc = 0x8D47;

    // 8D43: JSR $8951
    cpu.call_function(0x8951);

    // 8D46: BRA $0107
    cpu.state_.pc = 0x8D4F;

    // 8D48: JSR $8959
    cpu.call_function(0x8959);

    // 8D4B: LDA <$4E
    cpu.state_.a = cpu.read_memory(0x4E);

    // 8D4D: BNE $0122
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D71;

    // 8D4F: LDB $5002
    cpu.state_.b = cpu.read_memory(0x5002);

    // 8D53: ADDB #$01
    cpu.state_.b += 0x01;

    // 8D55: CMPB #$01
    cpu.compare_b(0x01);

    // 8D57: BLS $0122
    // TODO: Convert BLS $0122

    // 8D59: EORA $5004
    cpu.state_.a ^= 0x5004;

    // 8D5C: BMI $011F
    if (cpu.negative_flag()) cpu.state_.pc = 0x8D7D;

    // 8D5E: JSR $8969
    cpu.call_function(0x8969);

    // 8D61: BRA $0122
    cpu.state_.pc = 0x8D85;

    // 8D63: JSR $8961
    cpu.call_function(0x8961);

    // 8D66: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D68: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8D6B: ANDA #$EF
    cpu.state_.a &= 0xEF;

    // 8D6D: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 8D71: CLR <$80
    cpu.write_memory(0x80, 0);

    // 8D74: ROL $F,X
    // TODO: Convert ROL $F,X

    // 8D76: SUBA #$49
    cpu.state_.a -= 0x49;

    // 8D78: ROL $F,X
    // TODO: Convert ROL $F,X

    // 8D7A: SUBA #$49
    cpu.state_.a -= 0x49;

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
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D9F: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DA1: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8DA3: BNE $019B
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8D40;

    // 8DA5: LDB $12,X
    // TODO: Fix comma operator: LDB $12,X

    // 8DA8: STB <$50
    cpu.write_memory(0x50, cpu.state_.b);

    // 8DAA: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DAC: LDD #$0000
    cpu.state_.d = 0x0000;

    // 8DAF: STD -$A,U
    // TODO: Handle indexed addressing: STD -$A,U

    // 8DB1: STD -$2,U
    // TODO: Handle indexed addressing: STD -$2,U

    // 8DB3: STD $6,U
    // TODO: Handle indexed addressing: STD $6,U

    // 8DB5: LSR <$50
    // TODO: Convert LSR <$50

    // 8DB7: BCC $0178
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8E31;

    // 8DB9: JSR $8A59
    cpu.call_function(0x8A59);

    // 8DBC: LSR <$50
    // TODO: Convert LSR <$50

    // 8DBE: BCC $017F
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8E3F;

    // 8DC0: JSR $8A7E
    cpu.call_function(0x8A7E);

    // 8DC3: LSR <$50
    // TODO: Convert LSR <$50

    // 8DC5: BCC $0186
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8D4D;

    // 8DC7: JSR $8A21
    cpu.call_function(0x8A21);

    // 8DCA: LSR <$50
    // TODO: Convert LSR <$50

    // 8DCC: BCC $018D
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8D5B;

    // 8DCE: JSR $8A3D
    cpu.call_function(0x8A3D);

    // 8DD1: LSR <$50
    // TODO: Convert LSR <$50

    // 8DD3: BCC $0194
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8D69;

    // 8DD5: JSR $8A05
    cpu.call_function(0x8A05);

    // 8DD8: LSR <$50
    // TODO: Convert LSR <$50

    // 8DDA: BCC $019B
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8D77;

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

    // 8DE9: BLT $01AA
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8D95;

    // 8DEB: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8DEE: CMPA #$82
    cpu.compare_a(0x82);

    // 8DF0: BGT $01B1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8DA3;

    // 8DF2: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8DF5: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8DF7: LDD $A,U
    // TODO: Fix comma operator: LDD $A,U

    // 8DF9: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8DFB: BLT $01BC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8DB9;

    // 8DFD: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8E00: CMPA #$82
    cpu.compare_a(0x82);

    // 8E02: BGT $01C3
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8DC7;

    // 8E04: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8E07: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8E09: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8E0B: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8E0D: BLT $01CE
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8DDD;

    // 8E0F: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8E12: CMPA #$82
    cpu.compare_a(0x82);

    // 8E14: BGT $01D5
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8DEB;

    // 8E16: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8E19: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8E1C: DEC <$E6
    // TODO: Convert DEC <$E6

    // 8E1E: BGT $01DE
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8DFE;

    // 8E20: CLR <$E6
    cpu.write_memory(0xE6, 0);

    // 8E23: LDD #$0000
    cpu.state_.d = 0x0000;

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

    // 8E38: BEQ $020D
    if (cpu.zero_flag()) cpu.state_.pc = 0x8E47;

    // 8E3A: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8E3D: ANDA $13,X
    // TODO: Fix comma operator: ANDA $13,X

    // 8E40: BNE $0218
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8E5A;

    // 8E42: ANDB $00,X
    // TODO: Fix comma operator: ANDB $00,X

}

} // namespace StarWars