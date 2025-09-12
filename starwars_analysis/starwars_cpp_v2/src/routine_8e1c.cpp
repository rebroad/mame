#include "cpu_6809.h"

namespace StarWars {

void routine_8e1c_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8e1c.md
    // Address: 0x8E1C

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

    // 8E42: ANDB $14,X
    // TODO: Fix comma operator: ANDB $14,X

    // 8E45: BNE $8E5C
    if (!cpu.zero_flag()) cpu.m_pc = 0x8E5C;

    // 8E47: LDA $F,X
    // TODO: Fix comma operator: LDA $F,X

    // 8E49: ANDA #$07
    cpu.m_a &= 0x07;

    // 8E4C: LDU #$8E68
    cpu.m_u = 0x8E68;

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

    // 8E5A: BRA $8E32
    cpu.m_pc = 0x8E32;

    // 8E5C: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E5E: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E60: BEQ $8E32
    if (cpu.zero_flag()) cpu.m_pc = 0x8E32;

    // 8E62: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E64: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E66: BRA $8E5E
    cpu.m_pc = 0x8E5E;

    // 8E68: LDX #$798E
    cpu.m_x = 0x798E;

    // 8E6B: ADDA <$8E
    cpu.m_a += 0x8E;

    // 8E6D: ANDA W,X
    // TODO: Complex indexed addressing: W,X

    // 8E6F: SBCA $8EBA
    // TODO: Convert SBCA $8EBA

    // 8E72: LDX #$CE8E
    cpu.m_x = 0xCE8E;

    // 8E75: ASL $8E78
    // TODO: Convert ASL $8E78

    // 8E79: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E7B: LDD $1,U
    // TODO: Fix comma operator: LDD $1,U

    // 8E7D: BEQ $8E94
    if (cpu.zero_flag()) cpu.m_pc = 0x8E94;

    // 8E7F: ANDA $15,X
    // TODO: Fix comma operator: ANDA $15,X

    // 8E82: BNE $8E94
    if (!cpu.zero_flag()) cpu.m_pc = 0x8E94;

    // 8E84: ANDB $16,X
    // TODO: Fix comma operator: ANDB $16,X

    // 8E87: BNE $8E94
    if (!cpu.zero_flag()) cpu.m_pc = 0x8E94;

    // 8E89: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E8B: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8E8E: BNE $8E89
    if (!cpu.zero_flag()) cpu.m_pc = 0x8E89;

    // 8E90: BCC $8E89
    if (!cpu.carry_flag()) cpu.m_pc = 0x8E89;

    // 8E92: BRA $8E7B
    cpu.m_pc = 0x8E7B;

    // 8E94: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8E96: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8E98: JMP $8E32
    cpu.m_pc = 0x8E32;

    // 8E9B: LDU $D,X
    // TODO: Fix comma operator: LDU $D,X

    // 8E9D: LDU $1,U
    // TODO: Fix comma operator: LDU $1,U

    // 8E9F: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8EA1: JMP $8E32
    cpu.m_pc = 0x8E32;

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
    cpu.m_pc = 0x8E32;

    // 8EB2: LDU $17,X
    // TODO: Fix comma operator: LDU $17,X

    // 8EB5: STU $D,X
    // TODO: Handle indexed addressing: STU $D,X

    // 8EB7: JMP $8E32
    cpu.m_pc = 0x8E32;

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

    // 8ED1: LBMI $8E32
    // TODO: Convert LBMI $8E32

    // 8ED6: JSR $CCC0
    cpu.call_function(0xCCC0);

    // 8ED9: LDB $4B14
    cpu.m_b = cpu.read_memory(0x4B14);

    // 8EDD: LDX #$9070
    cpu.m_x = 0x9070;

    // 8EE1: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8EE4: BCS $8EF4
    if (cpu.carry_flag()) cpu.m_pc = 0x8EF4;

    // 8EE6: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 8EEA: BCS $8EF1
    if (cpu.carry_flag()) cpu.m_pc = 0x8EF1;

    // 8EEC: LDX #$9078
    cpu.m_x = 0x9078;

    // 8EEF: BRA $8EF4
    cpu.m_pc = 0x8EF4;

    // 8EF1: LDX #$907A
    cpu.m_x = 0x907A;

    // 8EF4: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8EF6: LDB <$DD
    cpu.m_b = cpu.read_memory(0xDD);

    // 8EF8: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8EFA: BLS $8EFE
    // TODO: Convert BLS $8EFE

    // 8EFC: LDB -$1,X
    // TODO: Fix comma operator: LDB -$1,X

    // 8EFF: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 8F01: STD <$E4
    cpu.write_memory16(0xE4, cpu.m_d);

    // 8F03: CLR <$E6
    cpu.write_memory(0xE6, 0);

    // 8F05: LDX #$4900
    cpu.m_x = 0x4900;

    // 8F08: STX <$5A
    cpu.write_memory16(0x5A, cpu.m_x);

    // 8F0A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 8F0C: LDU <$E4
    cpu.m_u = cpu.read_memory16(0xE4);

    // 8F0E: BEQ $8F29
    if (cpu.zero_flag()) cpu.m_pc = 0x8F29;

    // 8F10: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F12: BEQ $8F29
    if (cpu.zero_flag()) cpu.m_pc = 0x8F29;

    // 8F14: INC <$E6
    // TODO: Convert INC <$E6

    // 8F16: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8F18: STD <$E0
    cpu.write_memory16(0xE0, cpu.m_d);

    // 8F1A: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8F1C: STD <$DE
    cpu.write_memory16(0xDE, cpu.m_d);

    // 8F1E: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8F20: STD <$E2
    cpu.write_memory16(0xE2, cpu.m_d);

    // 8F22: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8F24: STU <$E4
    cpu.write_memory16(0xE4, cpu.m_u);

    // 8F26: JSR $8F34
    cpu.call_function(0x8F34);

    // 8F29: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8F2B: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8F2E: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8F31: BCS $8F08
    if (cpu.carry_flag()) cpu.m_pc = 0x8F08;

    // 8F34: LDA #$01
    cpu.m_a = 0x01;

    // 8F36: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8F38: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F3A: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 8F3D: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F3F: LDA #$C0
    cpu.m_a = 0xC0;

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
    cpu.m_u = cpu.read_memory16(0xE0);

    // 8F52: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 8F54: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 8F56: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8F58: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);

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
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8F68: LDD <$DE
    cpu.m_d = cpu.read_memory16(0xDE);

    // 8F6A: STD $D,X
    // TODO: Handle indexed addressing: STD $D,X

    // 8F6C: JSR $8E23
    cpu.call_function(0x8E23);

    // 8F6F: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8F71: LDB [$48E0]
    // TODO: Unrecognized operand: [$48E0]

    // 8F75: STB $4,X
    // TODO: Handle indexed addressing: STB $4,X

    // 8F77: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 8F7B: LDU <$E4
    cpu.m_u = cpu.read_memory16(0xE4);

    // 8F7D: BEQ $8F83
    if (cpu.zero_flag()) cpu.m_pc = 0x8F83;

    // 8F7F: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F81: BNE $8FB1
    if (!cpu.zero_flag()) cpu.m_pc = 0x8FB1;

    // 8F83: INC <$DD
    // TODO: Convert INC <$DD

    // 8F85: LDB $4B14
    cpu.m_b = cpu.read_memory(0x4B14);

    // 8F89: LDX #$9070
    cpu.m_x = 0x9070;

    // 8F8D: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8F90: BCS $8FA0
    if (cpu.carry_flag()) cpu.m_pc = 0x8FA0;

    // 8F92: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 8F96: BCS $8F9D
    if (cpu.carry_flag()) cpu.m_pc = 0x8F9D;

    // 8F98: LDX #$9078
    cpu.m_x = 0x9078;

    // 8F9B: BRA $8FA0
    cpu.m_pc = 0x8FA0;

    // 8F9D: LDX #$907A
    cpu.m_x = 0x907A;

    // 8FA0: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8FA2: LDB <$DD
    cpu.m_b = cpu.read_memory(0xDD);

    // 8FA4: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8FA6: BLS $8FAA
    // TODO: Convert BLS $8FAA

    // 8FA8: LDB -$1,X
    // TODO: Fix comma operator: LDB -$1,X

    // 8FAA: STB <$DD
    cpu.write_memory(0xDD, cpu.m_b);

    // 8FAD: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // 8FAF: STD <$E4
    cpu.write_memory16(0xE4, cpu.m_d);

    // 8FB1: LDX #$4900
    cpu.m_x = 0x4900;

    // 8FB4: STX <$5A
    cpu.write_memory16(0x5A, cpu.m_x);

    // 8FB6: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 8FB8: BEQ $8FC6
    if (cpu.zero_flag()) cpu.m_pc = 0x8FC6;

    // 8FBA: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

    // 8FBC: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8FBF: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8FC2: BCS $8FB4
    if (cpu.carry_flag()) cpu.m_pc = 0x8FB4;

    // 8FC4: BRA $9023
    cpu.m_pc = 0x9023;

    // 8FC6: LDU <$E4
    cpu.m_u = cpu.read_memory16(0xE4);

    // 8FC8: BEQ $9023
    if (cpu.zero_flag()) cpu.m_pc = 0x9023;

    // 8FCA: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8FCC: BEQ $9023
    if (cpu.zero_flag()) cpu.m_pc = 0x9023;

    // 8FCE: INC <$E6
    // TODO: Convert INC <$E6

    // 8FD0: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8FD2: STD <$E0
    cpu.write_memory16(0xE0, cpu.m_d);

    // 8FD4: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8FD6: STD <$DE
    cpu.write_memory16(0xDE, cpu.m_d);

    // 8FD8: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U

    // 8FDA: STD <$E2
    cpu.write_memory16(0xE2, cpu.m_d);

    // 8FDC: LEAU $6,U
    // TODO: Fix comma operator: LEAU $6,U

    // 8FDE: STU <$E4
    cpu.write_memory16(0xE4, cpu.m_u);

    // 8FE0: LDA #$01
    cpu.m_a = 0x01;

    // 8FE2: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // 8FE4: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8FE6: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 8FE9: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 8FEB: LDA #$C0
    cpu.m_a = 0xC0;

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
    cpu.m_u = cpu.read_memory16(0xE0);

    // 8FFE: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U

    // 9000: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X

    // 9002: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // 9004: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);

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
    cpu.m_x = cpu.read_memory16(0x5A);

    // 9014: LDD <$DE
    cpu.m_d = cpu.read_memory16(0xDE);

    // 9016: STD $D,X
    // TODO: Handle indexed addressing: STD $D,X

    // 9018: JSR $8E23
    cpu.call_function(0x8E23);

    // 901B: LDX <$00
    cpu.m_x = cpu.read_memory16(0x00);

}

} // namespace StarWars