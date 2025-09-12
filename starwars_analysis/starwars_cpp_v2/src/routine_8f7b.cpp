#include "cpu_6809.h"

namespace StarWars {

void routine_8f7b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_8f7b.md
    // Address: 0x8F7B

    // 8F7B: LDU <$E4
    cpu.state_.u = cpu.read_memory_word(0xE4);

    // 8F7D: BEQ $0008
    if (cpu.zero_flag()) cpu.state_.pc += 0x0008;

    // 8F7F: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8F81: BNE $0036
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0036;

    // 8F83: INC <$DD
    // TODO: Convert INC <$DD

    // 8F85: LDB $4B14
    cpu.state_.b = cpu.read_memory(0x4B14);

    // 8F89: LDX #$9070
    cpu.state_.x = 0x9070;

    // 8F8D: CMPX #$907C
    cpu.compare_x(0x907C);

    // 8F90: BCS $0025
    if (cpu.carry_flag()) cpu.state_.pc += 0x0025;

    // 8F92: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 8F96: BCS $0022
    if (cpu.carry_flag()) cpu.state_.pc += 0x0022;

    // 8F98: LDX #$9078
    cpu.state_.x = 0x9078;

    // 8F9B: BRA $0025
    cpu.state_.pc += 0x0025;

    // 8F9D: LDX #$907A
    cpu.state_.x = 0x907A;

    // 8FA0: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // 8FA2: LDB <$DD
    cpu.state_.b = cpu.read_memory(0xDD);

    // 8FA4: CMPB ,X+
    // TODO: Complex indexed addressing: ,X+

    // 8FA6: BLS $002F
    // TODO: Convert BLS $002F

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

    // 8FB8: BEQ $004B
    if (cpu.zero_flag()) cpu.state_.pc += 0x004B;

    // 8FBA: LDX <$5A
    cpu.state_.x = cpu.read_memory_word(0x5A);

    // 8FBC: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 8FBF: CMPX #$494B
    cpu.compare_x(0x494B);

    // 8FC2: BCS $0039
    if (cpu.carry_flag()) cpu.state_.pc += 0x0039;

    // 8FC4: BRA $00A8
    cpu.state_.pc += 0x00A8;

    // 8FC6: LDU <$E4
    cpu.state_.u = cpu.read_memory_word(0xE4);

    // 8FC8: BEQ $00A8
    if (cpu.zero_flag()) cpu.state_.pc += 0x00A8;

    // 8FCA: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // 8FCC: BEQ $00A8
    if (cpu.zero_flag()) cpu.state_.pc += 0x00A8;

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
    cpu.state_.a -= 0x90;

    // 9076: SUBA <$9F
    cpu.state_.a -= 0x9F;

    // 9078: SUBA <$AC
    cpu.state_.a -= 0xAC;

    // 907A: SUBA <$B9
    cpu.state_.a -= 0xB9;

    // 907C: COM <$90
    // TODO: Convert COM <$90

    // 907E: LDB #$91
    cpu.state_.b = 0x91;

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
    cpu.write_memory(0x9112, cpu.state_.u);

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
    cpu.state_.a -= 0x24;

    // 90C8: CMPA <$E1
    cpu.compare_a(cpu.read_memory(0xE1));

    // 90CA: SUBA <$28
    cpu.state_.a -= 0x28;

    // 90CC: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90CE: SBCA <$05
    // TODO: Convert SBCA <$05

    // 90D0: SUBA <$2E
    cpu.state_.a -= 0x2E;

    // 90D2: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90D4: SBCA <$32
    // TODO: Convert SBCA <$32

    // 90D6: SUBA <$34
    cpu.state_.a -= 0x34;

    // 90D8: NEG <$90
    // TODO: Convert NEG <$90

    // 90DA: BCC $00F3
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00F3;

    // 90DC: ASR $903A
    // TODO: Convert ASR $903A

    // 90DF: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90E1: SBCA <$AD
    // TODO: Convert SBCA <$AD

    // 90E3: SUBA <$40
    cpu.state_.a -= 0x40;

    // 90E5: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90E7: SBCA <$D1
    // TODO: Convert SBCA <$D1

    // 90E9: SUBA <$46
    cpu.state_.a -= 0x46;

    // 90EB: NEG <$90
    // TODO: Convert NEG <$90

    // 90ED: BCC $0107
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0107;

    // 90F0: SUBA <$4C
    cpu.state_.a -= 0x4C;

    // 90F2: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90F4: SUBD <$3D
    cpu.state_.d -= 0x3D;

    // 90F6: SUBA <$52
    cpu.state_.a -= 0x52;

    // 90F8: SUBA <$24
    cpu.state_.a -= 0x24;

    // 90FA: SUBD <$55
    cpu.state_.d -= 0x55;

    // 90FC: SUBA <$58
    cpu.state_.a -= 0x58;

    // 90FE: NEG <$90
    // TODO: Convert NEG <$90

    // 9100: BCC $011A
    if (!cpu.carry_flag()) cpu.state_.pc += 0x011A;

    // 9102: BITA #$90
    // TODO: Convert BITA #$90

    // 9105: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9107: SUBD <$A9
    cpu.state_.d -= 0xA9;

    // 9109: SUBA <$64
    cpu.state_.a -= 0x64;

    // 910B: SUBA <$24
    cpu.state_.a -= 0x24;

    // 910D: SUBD <$DC
    cpu.state_.d -= 0xDC;

    // 910F: SUBA <$6A
    cpu.state_.a -= 0x6A;

    // 9111: NEG <$90
    // TODO: Convert NEG <$90

    // 9113: BCC $012D
    if (!cpu.carry_flag()) cpu.state_.pc += 0x012D;

    // 9115: BITA #$90
    // TODO: Convert BITA #$90

    // 9118: SUBA <$24
    cpu.state_.a -= 0x24;

    // 911A: SUBD <$A9
    cpu.state_.d -= 0xA9;

    // 911C: SUBA <$64
    cpu.state_.a -= 0x64;

    // 911E: SUBA <$26
    cpu.state_.a -= 0x26;

    // 9120: SUBD <$DC
    cpu.state_.d -= 0xDC;

    // 9122: SUBA <$6A
    cpu.state_.a -= 0x6A;

    // 9124: NEG <$90
    // TODO: Convert NEG <$90

    // 9126: BCC $013E
    if (!cpu.carry_flag()) cpu.state_.pc += 0x013E;

    // 9128: LDU <$90
    cpu.state_.u = cpu.read_memory_word(0x90);

    // 912A: BVC $0141
    // TODO: Convert BVC $0141

    // 912C: BCC $0145
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0145;

    // 912E: XNC <$90
    // TODO: Convert XNC <$90

    // 9130: BGT $0147
    // TODO: Convert BGT $0147

    // 9132: BCC $014B
    if (!cpu.carry_flag()) cpu.state_.pc += 0x014B;

    // 9134: BLE $014B
    // TODO: Convert BLE $014B

    // 9136: 00 PSHS
    // TODO: Convert 00 PSHS

    // 9138: SUBA <$24
    cpu.state_.a -= 0x24;

    // 913A: SBCA <$74
    // TODO: Convert SBCA <$74

    // 913C: SUBA <$3A
    cpu.state_.a -= 0x3A;

    // 913E: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9140: SBCA <$AA
    // TODO: Convert SBCA <$AA

    // 9142: SUBA <$40
    cpu.state_.a -= 0x40;

    // 9144: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9146: SBCA <$CE
    // TODO: Convert SBCA <$CE

    // 9148: SUBA <$46
    cpu.state_.a -= 0x46;

    // 914A: NEG <$90
    // TODO: Convert NEG <$90

    // 914C: BCC $0166
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0166;

    // 914E: LBRA $9222
    // TODO: Convert LBRA $9222

    // 9151: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9153: SUBD <$3A
    cpu.state_.d -= 0x3A;

    // 9155: SUBA <$52
    cpu.state_.a -= 0x52;

    // 9157: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9159: SUBD <$52
    cpu.state_.d -= 0x52;

    // 915B: SUBA <$58
    cpu.state_.a -= 0x58;

    // 915D: NEG <$90
    // TODO: Convert NEG <$90

    // 915F: BCC $0179
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0179;

    // 9161: SBCA #$90
    // TODO: Convert SBCA #$90

    // 9164: SUBA <$24
    cpu.state_.a -= 0x24;

    // 9166: SUBD <$A6
    cpu.state_.d -= 0xA6;

    // 9168: SUBA <$64
    cpu.state_.a -= 0x64;

    // 916A: SUBA <$24
    cpu.state_.a -= 0x24;

    // 916C: SUBD <$D9
    cpu.state_.d -= 0xD9;

    // 916E: SUBA <$6A
    cpu.state_.a -= 0x6A;

    // 9170: NEG <$90
    // TODO: Convert NEG <$90

    // 9172: BCC $018A
    if (!cpu.carry_flag()) cpu.state_.pc += 0x018A;

    // 9174: LDU <$90
    cpu.state_.u = cpu.read_memory_word(0x90);

    // 9176: BVC $018D
    // TODO: Convert BVC $018D

    // 9178: BCC $0191
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0191;

    // 917A: XNC <$00
    // TODO: Convert XNC <$00

}

} // namespace StarWars