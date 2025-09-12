#include "cpu_6809.h"

namespace StarWars {

void routine_8e3a_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8e3a.md
    // Address: 0x8E3A

    // 8E3A: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 8E3D: ANDA $13,X
    // TODO: Fix comma operator: ANDA $13,X

    // 8E40: BNE $0022
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8E64;

    // 8E42: ANDB $14,X
    // TODO: Fix comma operator: ANDB $14,X

    // 8E45: BNE $0022
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8E69;

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

    // 8E5A: BRA $FFF8
    cpu.state_.pc = 0x8E54;

    // 8E5C: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E5E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E60: BEQ $FFF8
    if (cpu.zero_flag()) cpu.state_.pc = 0x8E5A;

    // 8E62: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E64: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E66: BRA $0024
    cpu.state_.pc = 0x8E8C;

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

    // 8E7D: BEQ $005A
    if (cpu.zero_flag()) cpu.state_.pc = 0x8ED9;

    // 8E7F: ANDA $15,X
    // TODO: Fix comma operator: ANDA $15,X

    // 8E82: BNE $005A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8EDE;

    // 8E84: ANDB $16,X
    // TODO: Fix comma operator: ANDB $16,X

    // 8E87: BNE $005A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8EE3;

    // 8E89: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E8B: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E8E: BNE $004F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8EDF;

    // 8E90: BCC $004F
    if (!cpu.carry_flag()) cpu.state_.pc = 0x8EE1;

    // 8E92: BRA $0041
    cpu.state_.pc = 0x8ED5;

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

    // 8ED1: LBMI $FFF8
    // TODO: Convert LBMI $FFF8

    // 8ED6: JSR $CCC0
    cpu.call_function(0xCCC0);

    // 8ED9: LDB $4B14
    cpu.state_.b = cpu.read_memory(0x4B14);

    // 8EDD: LDX #$9070
    cpu.state_.x = 0x9070;

    // 8EE1: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8EE4: BCS $00BA
    if (cpu.carry_flag()) cpu.state_.pc = 0x8EA0;

    // 8EE6: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 8EEA: BCS $00B7
    if (cpu.carry_flag()) cpu.state_.pc = 0x8EA3;

    // 8EEC: LDX #$9078
    cpu.state_.x = 0x9078;

    // 8EEF: BRA $00BA
    cpu.state_.pc = 0x8EAB;

    // 8EF1: LDX #$907A
    cpu.state_.x = 0x907A;

    // 8EF4: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8EF6: LDB <$DD
    cpu.state_.b = cpu.read_memory(0xDD);

    // 8EF8: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8EFA: BLS $00C4
    // TODO: Convert BLS $00C4

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

    // 8F0E: BEQ $00EF
    if (cpu.zero_flag()) cpu.state_.pc = 0x8EFF;

    // 8F10: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F12: BEQ $00EF
    if (cpu.zero_flag()) cpu.state_.pc = 0x8F03;

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

    // 8F31: BCS $00CE
    if (cpu.carry_flag()) cpu.state_.pc = 0x8F01;

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

    // 8F7D: BEQ $0149
    if (cpu.zero_flag()) cpu.state_.pc = 0x8FC8;

    // 8F7F: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F81: BNE $0177
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8FFA;

    // 8F83: INC <$DD
    // TODO: Convert INC <$DD

    // 8F85: LDB $4B14
    cpu.state_.b = cpu.read_memory(0x4B14);

    // 8F89: LDX #$9070
    cpu.state_.x = 0x9070;

    // 8F8D: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8F90: BCS $0166
    if (cpu.carry_flag()) cpu.state_.pc = 0x8FF8;

    // 8F92: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 8F96: BCS $0163
    if (cpu.carry_flag()) cpu.state_.pc = 0x8FFB;

    // 8F98: LDX #$9078
    cpu.state_.x = 0x9078;

    // 8F9B: BRA $0166
    cpu.state_.pc = 0x9003;

    // 8F9D: LDX #$907A
    cpu.state_.x = 0x907A;

    // 8FA0: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8FA2: LDB <$DD
    cpu.state_.b = cpu.read_memory(0xDD);

    // 8FA4: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8FA6: BLS $0170
    // TODO: Convert BLS $0170

    // 8FA8: LDB -$1,X
    // TODO: Fix comma operator: LDB -$1,X

    // 8FAA: STB <$DD
    cpu.write_memory(0xDD, cpu.state_.b);

    // 8FAD: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 8FAF: STD <$E4
    cpu.write_memory(0xE4, cpu.state_.d);

    // 8FB1: LDX #$4900
    cpu.state_.x = 0x4900;

    // 8FB4: STX <$5A
    cpu.write_memory(0x5A, cpu.state_.x);

    // 8FB6: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8FB8: BEQ $018C
    if (cpu.zero_flag()) cpu.state_.pc = 0x8F46;

    // 8FBA: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8FBC: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8FBF: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8FC2: BCS $017A
    if (cpu.carry_flag()) cpu.state_.pc = 0x903E;

    // 8FC4: BRA $01E9
    cpu.state_.pc = 0x8FAF;

    // 8FC6: LDU <$E4
    cpu.state_.u = cpu.read_memory_word(0xE4);

    // 8FC8: BEQ $01E9
    if (cpu.zero_flag()) cpu.state_.pc = 0x8FB3;

    // 8FCA: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8FCC: BEQ $01E9
    if (cpu.zero_flag()) cpu.state_.pc = 0x8FB7;

    // 8FCE: INC <$E6
    // TODO: Convert INC <$E6

    // 8FD0: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8FD2: STD <$E0
    cpu.write_memory(0xE0, cpu.state_.d);

    // 8FD4: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8FD6: STD <$DE
    cpu.write_memory(0xDE, cpu.state_.d);

    // 8FD8: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8FDA: STD <$E2
    cpu.write_memory(0xE2, cpu.state_.d);

    // 8FDC: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8FDE: STU <$E4
    cpu.write_memory(0xE4, cpu.state_.u);

    // 8FE0: LDA #$01
    cpu.state_.a = 0x01;

    // 8FE2: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8FE4: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8FE6: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 8FE9: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8FEB: LDA #$C0
    cpu.state_.a = 0xC0;

    // 8FED: STA -$10,U
    // TODO: Handle indexed addressing: STA -$10,U

    // 8FEF: STA -$6,U
    // TODO: Handle indexed addressing: STA -$6,U

    // 8FF2: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X

    // 8FF4: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 8FF6: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X

    // 8FF8: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X

    // 8FFA: STA $B,X
    // TODO: Handle indexed addressing: STA $B,X

    // 8FFC: LDU <$E0
    cpu.state_.u = cpu.read_memory_word(0xE0);

    // 8FFE: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 9000: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 9002: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 9004: LDX <$E2
    cpu.state_.x = cpu.read_memory_word(0xE2);

    // 9006: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // 9008: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U

    // 900A: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // 900C: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U

    // 900E: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // 9010: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U

    // 9012: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 9014: LDD <$DE
    cpu.state_.d = cpu.read_memory_word(0xDE);

    // 9016: STD $D,X
    // TODO: Handle indexed addressing: STD $D,X

    // 9018: JSR $8E23
    cpu.call_function(0x8E23);

    // 901B: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 901D: LDB [$48E0]
    // TODO: Unrecognized operand: [$48E0]

    // 9021: STB $4,X
    // TODO: Handle indexed addressing: STB $4,X

    // 9024: NEG <$01
    // TODO: Convert NEG <$01

    // 9026: LSR <$04
    // TODO: Convert LSR <$04

    // 9028: INC >$0000
    // TODO: Convert INC >$0000

    // 902B: NEG <$04
    // TODO: Convert NEG <$04

    // 902D: NEG <$7C
    // TODO: Convert NEG <$7C

    // 902F: NEG <$FC
    // TODO: Convert NEG <$FC

    // 9031: NEG <$00
    // TODO: Convert NEG <$00

    // 9033: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9035: NEG <$04
    // TODO: Convert NEG <$04

    // 9037: NEG <$00
    // TODO: Convert NEG <$00

    // 9039: NEG <$00
    // TODO: Convert NEG <$00

}

} // namespace StarWars