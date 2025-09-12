#include "cpu_6809.h"

namespace StarWars {

void routine_8d9d_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8d9d.md
    // Address: 0x8D9D

    // 8D9D: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8D9F: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8DA1: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // 8DA3: BNE $0042
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8DE7;

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

    // 8DB7: BCC $001F
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8DD8;

    // 8DB9: JSR $8A59
    cpu.call_function(0x8A59);

    // 8DBC: LSR <$50
    // TODO: Convert LSR <$50

    // 8DBE: BCC $0026
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8DE6;

    // 8DC0: JSR $8A7E
    cpu.call_function(0x8A7E);

    // 8DC3: LSR <$50
    // TODO: Convert LSR <$50

    // 8DC5: BCC $002D
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8DF4;

    // 8DC7: JSR $8A21
    cpu.call_function(0x8A21);

    // 8DCA: LSR <$50
    // TODO: Convert LSR <$50

    // 8DCC: BCC $0034
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8E02;

    // 8DCE: JSR $8A3D
    cpu.call_function(0x8A3D);

    // 8DD1: LSR <$50
    // TODO: Convert LSR <$50

    // 8DD3: BCC $003B
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8E10;

    // 8DD5: JSR $8A05
    cpu.call_function(0x8A05);

    // 8DD8: LSR <$50
    // TODO: Convert LSR <$50

    // 8DDA: BCC $0042
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8E1E;

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

    // 8DE9: BLT $0051
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8E3C;

    // 8DEB: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8DEE: CMPA #$82
    cpu.compare_a(0x82);

    // 8DF0: BGT $0058
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8E4A;

    // 8DF2: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8DF5: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8DF7: LDD $A,U
    // TODO: Fix comma operator: LDD $A,U

    // 8DF9: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8DFB: BLT $0063
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8E60;

    // 8DFD: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8E00: CMPA #$82
    cpu.compare_a(0x82);

    // 8E02: BGT $006A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8E6E;

    // 8E04: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8E07: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8E09: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // 8E0B: CMPA #$7D
    cpu.compare_a(0x7D);

    // 8E0D: BLT $0075
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8E84;

    // 8E0F: LDD #$7CFF
    cpu.state_.d = 0x7CFF;

    // 8E12: CMPA #$82
    cpu.compare_a(0x82);

    // 8E14: BGT $007C
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8E92;

    // 8E16: LDD #$8300
    cpu.state_.d = 0x8300;

    // 8E19: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8E1C: DEC <$E6
    // TODO: Convert DEC <$E6

    // 8E1E: BGT $0085
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x8EA5;

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

    // 8E38: BEQ $00B4
    if (cpu.zero_flag()) cpu.state_.pc = 0x8EEE;

    // 8E3A: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8E3D: ANDA $13,X
    // TODO: Fix comma operator: ANDA $13,X

    // 8E40: BNE $00BF
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8F01;

    // 8E42: ANDB $14,X
    // TODO: Fix comma operator: ANDB $14,X

    // 8E45: BNE $00BF
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8F06;

    // 8E47: LDA $F,X
    // TODO: Fix comma operator: LDA $F,X

    // 8E49: ANDA #$07
    cpu.state_.a &= 0x07;

    // 8E4C: LDU #$8E68
    cpu.state_.u = 0x8E68;

    // 8E4F: JMP [A,U]
    // TODO: Complex indexed addressing: [A,U]

    // 8E51: LDD $1,U
    // TODO: Fix comma operator: LDD $1,U

    // 8E53: STD $13,X
    // TODO: Handle indexed addressing: STD $13,X

    // 8E56: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E58: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E5A: BRA $0095
    cpu.state_.pc = 0x8EF1;

    // 8E5C: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E5E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E60: BEQ $0095
    if (cpu.zero_flag()) cpu.state_.pc = 0x8EF7;

    // 8E62: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E64: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E66: BRA $00C1
    cpu.state_.pc = 0x8F29;

    // 8E68: LDX #$798E
    cpu.state_.x = 0x798E;

    // 8E6B: ADDA <$8E
    cpu.state_.a += 0x8E;

    // 8E6D: ANDA W,X
    // TODO: Complex indexed addressing: W,X

    // 8E6F: SBCA $8EBA
    // TODO: Convert SBCA $8EBA

    // 8E72: LDX #$CE8E
    cpu.state_.x = 0xCE8E;

    // 8E75: ASL $8E78
    // TODO: Convert ASL $8E78

    // 8E79: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E7B: LDD $1,U
    // TODO: Fix comma operator: LDD $1,U

    // 8E7D: BEQ $00F7
    if (cpu.zero_flag()) cpu.state_.pc = 0x8F76;

    // 8E7F: ANDA $15,X
    // TODO: Fix comma operator: ANDA $15,X

    // 8E82: BNE $00F7
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8F7B;

    // 8E84: ANDB $16,X
    // TODO: Fix comma operator: ANDB $16,X

    // 8E87: BNE $00F7
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8F80;

    // 8E89: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E8B: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E8E: BNE $00EC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8F7C;

    // 8E90: BCC $00EC
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8F7E;

    // 8E92: BRA $00DE
    cpu.state_.pc = 0x8F72;

    // 8E94: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E96: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E98: JMP $8E32
    cpu.state_.pc = 0x8E32;

    // 8E9B: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E9D: LDU $1,U
    // TODO: Fix comma operator: LDU $1,U

    // 8E9F: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8EA1: JMP $8E32
    cpu.state_.pc = 0x8E32;

    // 8EA4: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8EA6: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8EA8: STU $17,X
    // TODO: Handle indexed addressing: STU $17,X

    // 8EAB: LDU -$2,U
    // TODO: Fix comma operator: LDU -$2,U

    // 8EAD: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8EAF: JMP $8E32
    cpu.state_.pc = 0x8E32;

    // 8EB2: LDU $17,X
    // TODO: Fix comma operator: LDU $17,X

    // 8EB5: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8EB7: JMP $8E32
    cpu.state_.pc = 0x8E32;

    // 8EBA: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8EBC: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8EBF: STB $10,X
    // TODO: Handle indexed addressing: STB $10,X

    // 8EC2: LDD $1,U
    // TODO: Fix comma operator: LDD $1,U

    // 8EC4: STD $11,X
    // TODO: Handle indexed addressing: STD $11,X

    // 8EC7: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8EC9: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8ECB: INC $F,X
    // TODO: Convert INC $F,X

    // 8ECE: DEC $10,X
    // TODO: Convert DEC $10,X

    // 8ED1: LBMI $0095
    // TODO: Convert LBMI $0095

    // 8ED6: JSR $CCC0
    cpu.call_function(0xCCC0);

    // 8ED9: LDB $4B14
    cpu.state_.b = cpu.read_memory(0x4B14);

    // 8EDD: LDX #$9070
    cpu.state_.x = 0x9070;

    // 8EE1: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8EE4: BCS $0157
    if (cpu.carry_flag()) cpu.state_.pc = 0x903D;

    // 8EE6: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 8EEA: BCS $0154
    if (cpu.carry_flag()) cpu.state_.pc = 0x9040;

    // 8EEC: LDX #$9078
    cpu.state_.x = 0x9078;

    // 8EEF: BRA $0157
    cpu.state_.pc = 0x9048;

    // 8EF1: LDX #$907A
    cpu.state_.x = 0x907A;

    // 8EF4: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8EF6: LDB <$DD
    cpu.state_.b = cpu.read_memory(0xDD);

    // 8EF8: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8EFA: BLS $0161
    // TODO: Convert BLS $0161

    // 8EFC: LDB -$1,X
    // TODO: Fix comma operator: LDB -$1,X

    // 8EFF: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 8F01: STD <$E4
    cpu.write_memory(0xE4, cpu.state_.d);

    // 8F03: CLR <$E6
    cpu.write_memory(0xE6, 0);

    // 8F05: LDX #$4900
    cpu.state_.x = 0x4900;

    // 8F08: STX <$5A
    cpu.write_memory(0x5A, cpu.state_.x);

    // 8F0A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 8F0C: LDU <$E4
    cpu.state_.u = cpu.read_memory_word(0xE4);

    // 8F0E: BEQ $018C
    if (cpu.zero_flag()) cpu.state_.pc = 0x909C;

    // 8F10: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F12: BEQ $018C
    if (cpu.zero_flag()) cpu.state_.pc = 0x90A0;

    // 8F14: INC <$E6
    // TODO: Convert INC <$E6

    // 8F16: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8F18: STD <$E0
    cpu.write_memory(0xE0, cpu.state_.d);

    // 8F1A: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8F1C: STD <$DE
    cpu.write_memory(0xDE, cpu.state_.d);

    // 8F1E: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8F20: STD <$E2
    cpu.write_memory(0xE2, cpu.state_.d);

    // 8F22: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8F24: STU <$E4
    cpu.write_memory(0xE4, cpu.state_.u);

    // 8F26: JSR $8F34
    cpu.call_function(0x8F34);

    // 8F29: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8F2B: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8F2E: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8F31: BCS $016B
    if (cpu.carry_flag()) cpu.state_.pc = 0x909E;

    // 8F34: LDA #$01
    cpu.state_.a = 0x01;

    // 8F36: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8F38: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F3A: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 8F3D: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F3F: LDA #$C0
    cpu.state_.a = 0xC0;

    // 8F41: STA -$10,U
    // TODO: Handle indexed addressing: STA -$10,U

    // 8F43: STA -$6,U
    // TODO: Handle indexed addressing: STA -$6,U

    // 8F46: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8F48: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 8F4A: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // 8F4C: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // 8F4E: STA $B,X
    // TODO: Handle indexed addressing: STA $B,X

    // 8F50: LDU <$E0
    cpu.state_.u = cpu.read_memory_word(0xE0);

    // 8F52: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 8F54: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 8F56: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F58: LDX <$E2
    cpu.state_.x = cpu.read_memory_word(0xE2);

    // 8F5A: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // 8F5C: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 8F5E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // 8F60: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 8F62: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // 8F64: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 8F66: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8F68: LDD <$DE
    cpu.state_.d = cpu.read_memory_word(0xDE);

    // 8F6A: STD $D,X
    // TODO: Handle indexed addressing: STD $D,X

    // 8F6C: JSR $8E23
    cpu.call_function(0x8E23);

    // 8F6F: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8F71: LDB [$48E0]
    // TODO: Unrecognized operand: [$48E0]

    // 8F75: STB $4,X
    // TODO: Handle indexed addressing: STB $4,X

    // 8F77: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 8F7B: LDU <$E4
    cpu.state_.u = cpu.read_memory_word(0xE4);

    // 8F7D: BEQ $01E6
    if (cpu.zero_flag()) cpu.state_.pc = 0x9165;

    // 8F7F: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F81: BNE $0214
    if (!cpu.zero_flag()) cpu.state_.pc = 0x9197;

    // 8F83: INC <$DD
    // TODO: Convert INC <$DD

    // 8F85: LDB $4B14
    cpu.state_.b = cpu.read_memory(0x4B14);

    // 8F89: LDX #$9070
    cpu.state_.x = 0x9070;

    // 8F8D: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8F90: BCS $0203
    if (cpu.carry_flag()) cpu.state_.pc = 0x9195;

    // 8F92: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 8F96: BCS $0200
    if (cpu.carry_flag()) cpu.state_.pc = 0x9198;

    // 8F98: LDX #$9078
    cpu.state_.x = 0x9078;

    // 8F9B: BRA $0203
    cpu.state_.pc = 0x91A0;

}

} // namespace StarWars