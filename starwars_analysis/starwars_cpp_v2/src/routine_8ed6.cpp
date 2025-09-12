#include "cpu_6809.h"

namespace StarWars {

void routine_8ed6_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8ed6.md
    // Address: 0x8ED6

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

    // 901B: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);

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

    // 9039: NEG <$7C
    // TODO: Convert NEG <$7C

    // 903B: NEG <$00
    // TODO: Convert NEG <$00

    // 903D: NEG <$04
    // TODO: Convert NEG <$04

    // 903F: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9041: NEG <$FC
    // TODO: Convert NEG <$FC

    // 9043: NEG <$00
    // TODO: Convert NEG <$00

    // 9045: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9047: NEG <$04
    // TODO: Convert NEG <$04

    // 9049: NEG <$00
    // TODO: Convert NEG <$00

    // 904B: NEG <$7C
    // TODO: Convert NEG <$7C

    // 904D: NEG <$00
    // TODO: Convert NEG <$00

    // 904F: NEG <$04
    // TODO: Convert NEG <$04

    // 9051: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9053: NEG <$FC
    // TODO: Convert NEG <$FC

    // 9055: NEG <$00
    // TODO: Convert NEG <$00

    // 9057: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9059: NEG <$04
    // TODO: Convert NEG <$04

    // 905B: NEG <$00
    // TODO: Convert NEG <$00

    // 905D: NEG <$7C
    // TODO: Convert NEG <$7C

    // 905F: NEG <$F8
    // TODO: Convert NEG <$F8

    // 9061: NEG <$00
    // TODO: Convert NEG <$00

    // 9063: NEG <$7C
    // TODO: Convert NEG <$7C

    // 9065: NEG <$08
    // TODO: Convert NEG <$08

    // 9067: NEG <$00
    // TODO: Convert NEG <$00

    // 9069: NEG <$7C
    // TODO: Convert NEG <$7C

    // 906B: NEG <$00
    // TODO: Convert NEG <$00

    // 906D: NEG <$08
    // TODO: Convert NEG <$08

    // 906F: NEG <$90
    // TODO: Convert NEG <$90

    // 9071: INC $9085
    // TODO: Convert INC $9085

    // 9074: SUBA <$90
    cpu.m_a -= 0x90;

    // 9076: SUBA <$9F
    cpu.m_a -= 0x9F;

    // 9078: SUBA <$AC
    cpu.m_a -= 0xAC;

    // 907A: SUBA <$B9
    cpu.m_a -= 0xB9;

    // 907C: COM <$90
    // TODO: Convert COM <$90

    // 907E: LDB #$91
    cpu.m_b = 0x91;

    // 9080: XANDCC #$91
    // TODO: Convert XANDCC #$91

    // 9083: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 9085: LSR <$90
    // TODO: Convert LSR <$90

    // 9087: ADCB <$91
    // TODO: Convert ADCB <$91

    // 908A: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 908C: CMPA <$4B
    cpu.compare_a(cpu.read_memory(0x4B));

    // 908E: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 9090: ROR <$90
    // TODO: Convert ROR <$90

    // 9092: LDD [,X++]
    // TODO: Complex indexed addressing: [,X++]

    // 9095: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 9097: CMPA <$25
    cpu.compare_a(cpu.read_memory(0x25));

    // 9099: CMPA <$38
    cpu.compare_a(cpu.read_memory(0x38));

    // 909B: CMPA <$4B
    cpu.compare_a(cpu.read_memory(0x4B));

    // 909D: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 909F: LSR <$91
    // TODO: Convert LSR <$91

    // 90A2: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 90A4: CMPA <$25
    cpu.compare_a(cpu.read_memory(0x25));

    // 90A6: CMPA <$38
    cpu.compare_a(cpu.read_memory(0x38));

    // 90A8: CMPA <$4B
    cpu.compare_a(cpu.read_memory(0x4B));

    // 90AA: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 90AC: LSR <$90
    // TODO: Convert LSR <$90

    // 90AE: STU $9112
    cpu.write_memory16(0x9112, cpu.m_u);

    // 90B1: CMPA <$4B
    cpu.compare_a(cpu.read_memory(0x4B));

    // 90B3: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 90B5: CMPA <$38
    cpu.compare_a(cpu.read_memory(0x38));

    // 90B7: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 90B9: LSR <$91
    // TODO: Convert LSR <$91

    // 90BC: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 90BE: CMPA <$38
    cpu.compare_a(cpu.read_memory(0x38));

    // 90C0: CMPA <$5E
    cpu.compare_a(cpu.read_memory(0x5E));

    // 90C2: CMPA <$4B
    cpu.compare_a(cpu.read_memory(0x4B));

    // 90C4: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));

    // 90C6: SUBA <$24
    cpu.m_a -= 0x24;

    // 90C8: CMPA <$E1
    cpu.compare_a(cpu.read_memory(0xE1));

    // 90CA: SUBA <$28
    cpu.m_a -= 0x28;

    // 90CC: SUBA <$24
    cpu.m_a -= 0x24;

    // 90CE: SBCA <$05
    // TODO: Convert SBCA <$05

    // 90D0: SUBA <$2E
    cpu.m_a -= 0x2E;

    // 90D2: SUBA <$24
    cpu.m_a -= 0x24;

    // 90D4: SBCA <$32
    // TODO: Convert SBCA <$32

}

} // namespace StarWars