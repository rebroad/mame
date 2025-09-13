#include "cpu_6809.h"

namespace StarWars {

void routine_8f7b_9558_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8f7b_9558.md
    // Address: 0x8F7B_9558

    label_8F7B:
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
    // 8F88: ASLB 
    cpu.m_b <<= 1;
    // 8F89: LDX #$9070
    cpu.m_x = 0x9070;
    // 8F8C: ABX 
    // TODO: Convert ABX 
    // 8F8D: CMPX #$907C
    cpu.compare_x(0x907C);
    // 8F90: BCS $8FA0
    if (cpu.carry_flag()) cpu.m_pc = 0x8FA0;
    // 8F92: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);
    // 8F95: LSRA 
    cpu.m_a >>= 1;
    // 8F96: BCS $8F9D
    if (cpu.carry_flag()) cpu.m_pc = 0x8F9D;
    // 8F98: LDX #$9078
    cpu.m_x = 0x9078;
    // 8F9B: BRA $8FA0
    goto label_8FA0;
    // 8F9D: LDX #$907A
    cpu.m_x = 0x907A;
    label_8FA0:
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
    // 8FAC: ASLB 
    cpu.m_b <<= 1;
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
    goto label_9023;
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
    // 8FF1: CLRA 
    cpu.m_a = 0;
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
    label_9023:
    // 9023: RTS 
    return;
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
    // 9082: XDECA 
    // TODO: Convert XDECA 
    // 9083: CMPA <$71
    cpu.compare_a(cpu.read_memory(0x71));
    // 9085: LSR <$90
    // TODO: Convert LSR <$90
    // 9087: ADCB <$91
    // TODO: Convert ADCB <$91
    // 9089: NOP 
    // NOP;
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
    // 9094: NOP 
    // NOP;
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
    // 90A1: NOP 
    // NOP;
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
    // 90BB: NOP 
    // NOP;
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
    // 90D6: SUBA <$34
    cpu.m_a -= 0x34;
    // 90D8: NEG <$90
    // TODO: Convert NEG <$90
    // 90DA: BCC $906E
    if (!cpu.carry_flag()) cpu.m_pc = 0x906E;
    // 90DC: ASR $903A
    // TODO: Convert ASR $903A
    // 90DF: SUBA <$24
    cpu.m_a -= 0x24;
    // 90E1: SBCA <$AD
    // TODO: Convert SBCA <$AD
    // 90E3: SUBA <$40
    cpu.m_a -= 0x40;
    // 90E5: SUBA <$24
    cpu.m_a -= 0x24;
    // 90E7: SBCA <$D1
    // TODO: Convert SBCA <$D1
    // 90E9: SUBA <$46
    cpu.m_a -= 0x46;
    // 90EB: NEG <$90
    // TODO: Convert NEG <$90
    // 90ED: BCC $9082
    if (!cpu.carry_flag()) cpu.m_pc = 0x9082;
    // 90EF: DAA 
    // TODO: Convert DAA 
    // 90F0: SUBA <$4C
    cpu.m_a -= 0x4C;
    // 90F2: SUBA <$24
    cpu.m_a -= 0x24;
    // 90F4: SUBD <$3D
    cpu.m_d -= 0x3D;
    // 90F6: SUBA <$52
    cpu.m_a -= 0x52;
    // 90F8: SUBA <$24
    cpu.m_a -= 0x24;
    // 90FA: SUBD <$55
    cpu.m_d -= 0x55;
    // 90FC: SUBA <$58
    cpu.m_a -= 0x58;
    // 90FE: NEG <$90
    // TODO: Convert NEG <$90
    // 9100: BCC $9095
    if (!cpu.carry_flag()) cpu.m_pc = 0x9095;
    // 9102: BITA #$90
    // TODO: Convert BITA #$90
    // 9104: XCLRB 
    // TODO: Convert XCLRB 
    // 9105: SUBA <$24
    cpu.m_a -= 0x24;
    // 9107: SUBD <$A9
    cpu.m_d -= 0xA9;
    // 9109: SUBA <$64
    cpu.m_a -= 0x64;
    // 910B: SUBA <$24
    cpu.m_a -= 0x24;
    // 910D: SUBD <$DC
    cpu.m_d -= 0xDC;
    // 910F: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 9111: NEG <$90
    // TODO: Convert NEG <$90
    // 9113: BCC $90A8
    if (!cpu.carry_flag()) cpu.m_pc = 0x90A8;
    // 9115: BITA #$90
    // TODO: Convert BITA #$90
    // 9117: XCLRB 
    // TODO: Convert XCLRB 
    // 9118: SUBA <$24
    cpu.m_a -= 0x24;
    // 911A: SUBD <$A9
    cpu.m_d -= 0xA9;
    // 911C: SUBA <$64
    cpu.m_a -= 0x64;
    // 911E: SUBA <$26
    cpu.m_a -= 0x26;
    // 9120: SUBD <$DC
    cpu.m_d -= 0xDC;
    // 9122: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 9124: NEG <$90
    // TODO: Convert NEG <$90
    // 9126: BCC $90B9
    if (!cpu.carry_flag()) cpu.m_pc = 0x90B9;
    // 9128: LDU <$90
    cpu.m_u = cpu.read_memory16(0x90);
    // 912A: BVC $90BC
    // TODO: Convert BVC $90BC
    // 912C: BCC $90C0
    if (!cpu.carry_flag()) cpu.m_pc = 0x90C0;
    // 912E: XNC <$90
    // TODO: Convert XNC <$90
    // 9130: BGT $90C2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x90C2;
    // 9132: BCC $90C6
    if (!cpu.carry_flag()) cpu.m_pc = 0x90C6;
    // 9134: BLE $90C6
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x90C6;
    // 9136: PSHS 
    // TODO: Convert PSHS 
    // 9138: SUBA <$24
    cpu.m_a -= 0x24;
    // 913A: SBCA <$74
    // TODO: Convert SBCA <$74
    // 913C: SUBA <$3A
    cpu.m_a -= 0x3A;
    // 913E: SUBA <$24
    cpu.m_a -= 0x24;
    // 9140: SBCA <$AA
    // TODO: Convert SBCA <$AA
    // 9142: SUBA <$40
    cpu.m_a -= 0x40;
    // 9144: SUBA <$24
    cpu.m_a -= 0x24;
    // 9146: SBCA <$CE
    // TODO: Convert SBCA <$CE
    // 9148: SUBA <$46
    cpu.m_a -= 0x46;
    // 914A: NEG <$90
    // TODO: Convert NEG <$90
    // 914C: BCC $90E1
    if (!cpu.carry_flag()) cpu.m_pc = 0x90E1;
    // 914E: LBRA $219D
    // TODO: Convert LBRA $219D
    // 9151: SUBA <$24
    cpu.m_a -= 0x24;
    // 9153: SUBD <$3A
    cpu.m_d -= 0x3A;
    // 9155: SUBA <$52
    cpu.m_a -= 0x52;
    // 9157: SUBA <$24
    cpu.m_a -= 0x24;
    // 9159: SUBD <$52
    cpu.m_d -= 0x52;
    // 915B: SUBA <$58
    cpu.m_a -= 0x58;
    // 915D: NEG <$90
    // TODO: Convert NEG <$90
    // 915F: BCC $90F4
    if (!cpu.carry_flag()) cpu.m_pc = 0x90F4;
    // 9161: SBCA #$90
    // TODO: Convert SBCA #$90
    // 9163: XCLRB 
    // TODO: Convert XCLRB 
    // 9164: SUBA <$24
    cpu.m_a -= 0x24;
    // 9166: SUBD <$A6
    cpu.m_d -= 0xA6;
    // 9168: SUBA <$64
    cpu.m_a -= 0x64;
    // 916A: SUBA <$24
    cpu.m_a -= 0x24;
    // 916C: SUBD <$D9
    cpu.m_d -= 0xD9;
    // 916E: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 9170: NEG <$90
    // TODO: Convert NEG <$90
    // 9172: BCC $9105
    if (!cpu.carry_flag()) cpu.m_pc = 0x9105;
    // 9174: LDU <$90
    cpu.m_u = cpu.read_memory16(0x90);
    // 9176: BVC $9108
    // TODO: Convert BVC $9108
    // 9178: BCC $910C
    if (!cpu.carry_flag()) cpu.m_pc = 0x910C;
    // 917A: XNC <$90
    // TODO: Convert XNC <$90
    // 917C: BGT $910E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x910E;
    // 917E: BCC $9112
    if (!cpu.carry_flag()) cpu.m_pc = 0x9112;
    // 9180: BLE $9112
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x9112;
    // 9182: PSHS PC,X
    // TODO: Convert PSHS PC,X
    // 9184: BCC $9119
    if (!cpu.carry_flag()) cpu.m_pc = 0x9119;
    // 9186: SBCA #$90
    // TODO: Convert SBCA #$90
    // 9188: XCLRB 
    // TODO: Convert XCLRB 
    // 9189: SUBA <$24
    cpu.m_a -= 0x24;
    // 918B: SUBD <$A6
    cpu.m_d -= 0xA6;
    // 918D: SUBA <$64
    cpu.m_a -= 0x64;
    // 918F: SUBA <$24
    cpu.m_a -= 0x24;
    // 9191: SUBD <$D9
    cpu.m_d -= 0xD9;
    // 9193: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 9195: SUBA <$24
    cpu.m_a -= 0x24;
    // 9197: SBCA <$74
    // TODO: Convert SBCA <$74
    // 9199: SUBA <$3A
    cpu.m_a -= 0x3A;
    // 919B: SUBA <$24
    cpu.m_a -= 0x24;
    // 919D: SBCA <$AA
    // TODO: Convert SBCA <$AA
    // 919F: SUBA <$40
    cpu.m_a -= 0x40;
    // 91A1: SUBA <$24
    cpu.m_a -= 0x24;
    // 91A3: SBCA <$CE
    // TODO: Convert SBCA <$CE
    // 91A5: SUBA <$46
    cpu.m_a -= 0x46;
    // 91A7: SUBA <$24
    cpu.m_a -= 0x24;
    // 91A9: SUBD <$82
    cpu.m_d -= 0x82;
    // 91AB: SUBA <$5E
    cpu.m_a -= 0x5E;
    // 91AD: SUBA <$24
    cpu.m_a -= 0x24;
    // 91AF: SUBD <$A6
    cpu.m_d -= 0xA6;
    // 91B1: SUBA <$64
    cpu.m_a -= 0x64;
    // 91B3: SUBA <$24
    cpu.m_a -= 0x24;
    // 91B5: SUBD <$D9
    cpu.m_d -= 0xD9;
    // 91B7: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 91B9: SUBA <$24
    cpu.m_a -= 0x24;
    // 91BB: SUBD <$16
    cpu.m_d -= 0x16;
    // 91BD: SUBA <$4C
    cpu.m_a -= 0x4C;
    // 91BF: SUBA <$24
    cpu.m_a -= 0x24;
    // 91C1: SUBD <$3A
    cpu.m_d -= 0x3A;
    // 91C3: SUBA <$52
    cpu.m_a -= 0x52;
    // 91C5: SUBA <$24
    cpu.m_a -= 0x24;
    // 91C7: SUBD <$52
    cpu.m_d -= 0x52;
    // 91C9: SUBA <$58
    cpu.m_a -= 0x58;
    // 91CB: SUBA <$24
    cpu.m_a -= 0x24;
    // 91CD: SUBD <$82
    cpu.m_d -= 0x82;
    // 91CF: SUBA <$5E
    cpu.m_a -= 0x5E;
    // 91D1: SUBA <$24
    cpu.m_a -= 0x24;
    // 91D3: SUBD <$A6
    cpu.m_d -= 0xA6;
    // 91D5: SUBA <$64
    cpu.m_a -= 0x64;
    // 91D7: SUBA <$24
    cpu.m_a -= 0x24;
    // 91D9: SUBD <$D9
    cpu.m_d -= 0xD9;
    // 91DB: SUBA <$6A
    cpu.m_a -= 0x6A;
    // 91DD: NEG <$02
    // TODO: Convert NEG <$02
    // 91DF: ANDA <$21
    cpu.m_a &= 0x21;
    // 91E1: ANDA #$00
    cpu.m_a &= 0x00;
    // 91E3: ANDA #$00
    cpu.m_a &= 0x00;
    // 91E6: BRA $922C
    goto label_922C;
    // 91E8: LSR <$10
    // TODO: Convert LSR <$10
    // 91EA: NEG <$00
    // TODO: Convert NEG <$00
    // 91EC: LSR <$44
    // TODO: Convert LSR <$44
    // 91EE: SUBA #$00
    cpu.m_a -= 0x00;
    // 91F0: NEG <$04
    // TODO: Convert NEG <$04
    // 91F2: NEG <$84
    // TODO: Convert NEG <$84
    // 91F4: CMPA #$10
    cpu.compare_a(0x10);
    // 91F6: NEG <$00
    // TODO: Convert NEG <$00
    // 91F8: LSR <$44
    // TODO: Convert LSR <$44
    // 91FA: SUBA #$00
    cpu.m_a -= 0x00;
    // 91FC: NEG <$00
    // TODO: Convert NEG <$00
    // 91FE: NEG <$01
    // TODO: Convert NEG <$01
    // 9200: SBCA <$5C
    // TODO: Convert SBCA <$5C
    // 9202: XNC <$94
    // TODO: Convert XNC <$94
    // 9204: BRN $918A
    // TODO: Convert BRN $918A
    // 9206: XNC <$20
    // TODO: Convert XNC <$20
    // 9208: LSRA 
    cpu.m_a >>= 1;
    // 9209: FCB $10
    // TODO: Convert FCB $10
    // 920A: NEG <$00
    // TODO: Convert NEG <$00
    // 920D: LSR <$44
    // TODO: Convert LSR <$44
    // 920F: SUBA <$10
    cpu.m_a -= 0x10;
    // 9211: NEG <$00
    // TODO: Convert NEG <$00
    // 9213: NEG <$84
    // TODO: Convert NEG <$84
    // 9215: XNC <$10
    // TODO: Convert XNC <$10
    // 9217: NEG <$00
    // TODO: Convert NEG <$00
    // 9219: LSR <$44
    // TODO: Convert LSR <$44
    // 921B: SUBA <$10
    cpu.m_a -= 0x10;
    // 921D: NEG <$00
    // TODO: Convert NEG <$00
    // 921F: NEG <$44
    // TODO: Convert NEG <$44
    // 9221: XNC <$20
    // TODO: Convert XNC <$20
    // 9223: NEG <$00
    // TODO: Convert NEG <$00
    // 9225: LSR <$44
    // TODO: Convert LSR <$44
    // 9227: SUBA <$10
    cpu.m_a -= 0x10;
    // 9229: NEG <$00
    // TODO: Convert NEG <$00
    // 922B: NEG <$01
    // TODO: Convert NEG <$01
    // 922D: SBCA <$5C
    // TODO: Convert SBCA <$5C
    // 922F: XNC <$94
    // TODO: Convert XNC <$94
    // 9231: BRN $91B7
    // TODO: Convert BRN $91B7
    // 9233: NEG <$20
    // TODO: Convert NEG <$20
    // 9235: LSRA 
    cpu.m_a >>= 1;
    // 9236: BRA $9248
    goto label_9248;
    // 9238: NEG <$00
    // TODO: Convert NEG <$00
    // 923A: LSR <$44
    // TODO: Convert LSR <$44
    // 923C: SUBA -$10,X
    // TODO: Fix comma operator: SUBA -$10,X
    // 923E: NEG <$00
    // TODO: Convert NEG <$00
    // 9240: NEG <$84
    // TODO: Convert NEG <$84
    // 9242: NEG <$10
    // TODO: Convert NEG <$10
    // 9244: NEG <$00
    // TODO: Convert NEG <$00
    // 9246: LSR <$44
    // TODO: Convert LSR <$44
    label_9248:
    // 9248: SUBA -$10,X
    // TODO: Fix comma operator: SUBA -$10,X
    // 924A: NEG <$00
    // TODO: Convert NEG <$00
    // 924C: NEG <$44
    // TODO: Convert NEG <$44
    // 924E: NEG <$20
    // TODO: Convert NEG <$20
    // 9250: NEG <$00
    // TODO: Convert NEG <$00
    // 9252: LSR <$44
    // TODO: Convert LSR <$44
    // 9254: SUBA -$10,X
    // TODO: Fix comma operator: SUBA -$10,X
    // 9256: NEG <$00
    // TODO: Convert NEG <$00
    // 9258: NEG <$01
    // TODO: Convert NEG <$01
    // 925A: SBCA <$5C
    // TODO: Convert SBCA <$5C
    // 925C: NEG <$00
    // TODO: Convert NEG <$00
    // 925E: LSRA 
    cpu.m_a >>= 1;
    // 925F: LSRA 
    cpu.m_a >>= 1;
    // 9260: SBCA #$20
    // TODO: Convert SBCA #$20
    // 9262: NEG <$00
    // TODO: Convert NEG <$00
    // 9264: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9265: LSRA 
    cpu.m_a >>= 1;
    // 9266: NEG <$20
    // TODO: Convert NEG <$20
    // 9268: NEG <$92
    // TODO: Convert NEG <$92
    // 926A: INCB 
    cpu.m_b++;
    // 926B: NEG <$00
    // TODO: Convert NEG <$00
    // 926D: NEG <$24
    // TODO: Convert NEG <$24
    // 926F: NEG <$08
    // TODO: Convert NEG <$08
    // 9271: NEG <$92
    // TODO: Convert NEG <$92
    // 9273: INCB 
    cpu.m_b++;
    // 9274: XNC <$94
    // TODO: Convert XNC <$94
    // 9276: BRN $92BC
    // TODO: Convert BRN $92BC
    // 9278: NEG <$14
    // TODO: Convert NEG <$14
    // 927A: LSRA 
    cpu.m_a >>= 1;
    // 927B: NEG <$11
    // TODO: Convert NEG <$11
    // 927D: LSRA 
    cpu.m_a >>= 1;
    // 927E: NEG <$14
    // TODO: Convert NEG <$14
    // 9280: LSRA 
    cpu.m_a >>= 1;
    // 9281: NEG <$11
    // TODO: Convert NEG <$11
    // 9283: LSRA 
    cpu.m_a >>= 1;
    // 9284: LSR <$10
    // TODO: Convert LSR <$10
    // 9286: NEG <$00
    // TODO: Convert NEG <$00
    // 9288: LSR <$44
    // TODO: Convert LSR <$44
    // 928A: SUBA #$00
    cpu.m_a -= 0x00;
    // 928C: NEG <$00
    // TODO: Convert NEG <$00
    // 928E: NEG <$44
    // TODO: Convert NEG <$44
    // 9290: NEG <$14
    // TODO: Convert NEG <$14
    // 9292: LSRA 
    cpu.m_a >>= 1;
    // 9293: NEG <$11
    // TODO: Convert NEG <$11
    // 9295: ANDA #$80
    cpu.m_a &= 0x80;
    // 9297: XHCF 
    // TODO: Convert XHCF 
    // 9298: LSRA 
    cpu.m_a >>= 1;
    // 9299: NEG <$14
    // TODO: Convert NEG <$14
    // 929B: LSRA 
    cpu.m_a >>= 1;
    // 929C: NEG <$11
    // TODO: Convert NEG <$11
    // 929E: NEG <$00
    // TODO: Convert NEG <$00
    // 92A0: LSR <$44
    // TODO: Convert LSR <$44
    // 92A2: SUBA #$04
    cpu.m_a -= 0x04;
    // 92A4: NEG <$00
    // TODO: Convert NEG <$00
    // 92A6: NEG <$01
    // TODO: Convert NEG <$01
    // 92A8: SBCA <$E9
    // TODO: Convert SBCA <$E9
    // 92AA: XNC <$94
    // TODO: Convert XNC <$94
    // 92AC: BRN $92D2
    // TODO: Convert BRN $92D2
    // 92AE: NEG <$18
    // TODO: Convert NEG <$18
    // 92B0: BCC $92B2
    if (!cpu.carry_flag()) cpu.m_pc = 0x92B2;
    // 92B2: NOP 
    // NOP;
    // 92B3: BCC $92B5
    if (!cpu.carry_flag()) cpu.m_pc = 0x92B5;
    // 92B5: BVC $92DB
    // TODO: Convert BVC $92DB
    // 92B7: NEG <$22
    // TODO: Convert NEG <$22
    // 92B9: NEG <$00
    // TODO: Convert NEG <$00
    // 92BB: LSR <$44
    // TODO: Convert LSR <$44
    // 92BD: SUBA #$11
    cpu.m_a -= 0x11;
    // 92BF: NEG <$00
    // TODO: Convert NEG <$00
    // 92C1: NEG <$00
    // TODO: Convert NEG <$00
    // 92C3: NEG <$04
    // TODO: Convert NEG <$04
    // 92C5: LSRA 
    cpu.m_a >>= 1;
    // 92C6: SUBA #$14
    cpu.m_a -= 0x14;
    // 92C8: NEG <$00
    // TODO: Convert NEG <$00
    // 92CA: NEG <$01
    // TODO: Convert NEG <$01
    // 92CC: SBCA <$E9
    // TODO: Convert SBCA <$E9
    // 92CE: XNC <$94
    // TODO: Convert XNC <$94
    // 92D0: BRN $92F6
    // TODO: Convert BRN $92F6
    // 92D2: NEG <$18
    // TODO: Convert NEG <$18
    // 92D4: BCC $92D6
    if (!cpu.carry_flag()) cpu.m_pc = 0x92D6;
    // 92D6: NOP 
    // NOP;
    // 92D7: BCC $92D9
    if (!cpu.carry_flag()) cpu.m_pc = 0x92D9;
    // 92D9: BVC $92FF
    // TODO: Convert BVC $92FF
    // 92DB: NEG <$22
    // TODO: Convert NEG <$22
    // 92DD: NEG <$00
    // TODO: Convert NEG <$00
    // 92DF: LSR <$44
    // TODO: Convert LSR <$44
    // 92E1: SUBA #$11
    cpu.m_a -= 0x11;
    // 92E3: NEG <$00
    // TODO: Convert NEG <$00
    // 92E5: NEG <$01
    // TODO: Convert NEG <$01
    // 92E7: SBCA <$E9
    // TODO: Convert SBCA <$E9
    // 92E9: NEG <$00
    // TODO: Convert NEG <$00
    // 92EB: LSRA 
    cpu.m_a >>= 1;
    // 92EC: LSRA 
    cpu.m_a >>= 1;
    // 92ED: SBCA #$20
    // TODO: Convert SBCA #$20
    // 92EF: NEG <$00
    // TODO: Convert NEG <$00
    // 92F1: NEGA 
    cpu.m_a = -cpu.m_a;
    // 92F2: LSRA 
    cpu.m_a >>= 1;
    // 92F3: XNC <$20
    // TODO: Convert XNC <$20
    // 92F5: NEG <$92
    // TODO: Convert NEG <$92
    // 92F7: ADCB $0,X
    // TODO: Convert ADCB $0,X
    // 92F9: NEG <$00
    // TODO: Convert NEG <$00
    // 92FB: BCC $92FD
    if (!cpu.carry_flag()) cpu.m_pc = 0x92FD;
    // 92FD: ASL <$00
    // TODO: Convert ASL <$00
    // 92FF: LSR <$00
    // TODO: Convert LSR <$00
    // 9301: LDD $8210
    cpu.m_d = cpu.read_memory16(0x8210);
    // 9304: NEG <$00
    // TODO: Convert NEG <$00
    // 9306: NEG <$44
    // TODO: Convert NEG <$44
    // 9308: SBCA #$08
    // TODO: Convert SBCA #$08
    // 930A: LSRA 
    cpu.m_a >>= 1;
    // 930B: CMPA #$02
    cpu.compare_a(0x02);
    // 930D: LSRA 
    cpu.m_a >>= 1;
    // 930E: CMPA #$08
    cpu.compare_a(0x08);
    // 9310: LSRA 
    cpu.m_a >>= 1;
    // 9311: SBCA #$02
    // TODO: Convert SBCA #$02
    // 9313: NEG <$92
    // TODO: Convert NEG <$92
    // 9315: ADCB $2,X
    // TODO: Convert ADCB $2,X
    // 9317: ANDA <$21
    cpu.m_a &= 0x21;
    // 9319: BCC $931B
    if (!cpu.carry_flag()) cpu.m_pc = 0x931B;
    // 931B: XHCF 
    // TODO: Convert XHCF 
    // 931C: BCC $931E
    if (!cpu.carry_flag()) cpu.m_pc = 0x931E;
    // 931E: BCC $9321
    if (!cpu.carry_flag()) cpu.m_pc = 0x9321;
    // 9321: XHCF 
    // TODO: Convert XHCF 
    // 9322: BCC $9324
    if (!cpu.carry_flag()) cpu.m_pc = 0x9324;
    // 9324: LSRA 
    cpu.m_a >>= 1;
    // 9326: LSR <$10
    // TODO: Convert LSR <$10
    // 9328: NEG <$00
    // TODO: Convert NEG <$00
    // 932A: LSR <$44
    // TODO: Convert LSR <$44
    // 932C: SUBA #$00
    cpu.m_a -= 0x00;
    // 932E: NEG <$00
    // TODO: Convert NEG <$00
    // 9330: NEG <$00
    // TODO: Convert NEG <$00
    // 9332: NEG <$04
    // TODO: Convert NEG <$04
    // 9334: LSRA 
    cpu.m_a >>= 1;
    // 9335: SUBA #$04
    cpu.m_a -= 0x04;
    // 9337: NEG <$00
    // TODO: Convert NEG <$00
    // 9339: NEG <$02
    // TODO: Convert NEG <$02
    // 933B: ANDA <$21
    cpu.m_a &= 0x21;
    // 933D: LSRA 
    cpu.m_a >>= 1;
    // 933E: SBCA #$14
    // TODO: Convert SBCA #$14
    // 9340: LSRA 
    cpu.m_a >>= 1;
    // 9341: SBCA #$24
    // TODO: Convert SBCA #$24
    // 9343: LSRA 
    cpu.m_a >>= 1;
    // 9344: XHCF 
    // TODO: Convert XHCF 
    // 9346: NEG <$00
    // TODO: Convert NEG <$00
    // 9348: LSR <$44
    // TODO: Convert LSR <$44
    // 934A: SUBA <$14
    cpu.m_a -= 0x14;
    // 934C: NEG <$00
    // TODO: Convert NEG <$00
    // 934E: NEG <$01
    // TODO: Convert NEG <$01
    // 9350: SUBD <$6A
    cpu.m_d -= 0x6A;
    // 9352: XNC <$94
    // TODO: Convert XNC <$94
    // 9354: BRN $939A
    // TODO: Convert BRN $939A
    // 9356: CMPA #$14
    cpu.compare_a(0x14);
    // 9358: LSRA 
    cpu.m_a >>= 1;
    // 9359: CMPA #$24
    cpu.compare_a(0x24);
    // 935B: LSRA 
    cpu.m_a >>= 1;
    // 935C: BRA $9372
    goto label_9372;
    // 935E: NEG <$00
    // TODO: Convert NEG <$00
    // 9360: LSR <$44
    // TODO: Convert LSR <$44
    // 9362: SUBA -$C,X
    // TODO: Fix comma operator: SUBA -$C,X
    // 9364: NEG <$00
    // TODO: Convert NEG <$00
    // 9366: NEG <$01
    // TODO: Convert NEG <$01
    // 9368: SUBD <$6A
    cpu.m_d -= 0x6A;
    // 936A: NEG <$00
    // TODO: Convert NEG <$00
    // 936C: LSRA 
    cpu.m_a >>= 1;
    // 936D: LSRA 
    cpu.m_a >>= 1;
    // 936E: SBCA #$24
    // TODO: Convert SBCA #$24
    // 9370: NEG <$00
    // TODO: Convert NEG <$00
    label_9372:
    // 9372: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9373: LSRA 
    cpu.m_a >>= 1;
    // 9374: NEG <$20
    // TODO: Convert NEG <$20
    // 9376: NEG <$93
    // TODO: Convert NEG <$93
    // 9378: DEC $0,X
    // TODO: Convert DEC $0,X
    // 937A: NEG <$00
    // TODO: Convert NEG <$00
    // 937C: BCC $937E
    if (!cpu.carry_flag()) cpu.m_pc = 0x937E;
    // 937E: XNC <$01
    // TODO: Convert XNC <$01
    // 9380: SUBD <$6A
    cpu.m_d -= 0x6A;
    // 9382: XNC <$94
    // TODO: Convert XNC <$94
    // 9384: BRN $9386
    // TODO: Convert BRN $9386
    // 9386: LSR <$00
    // TODO: Convert LSR <$00
    // 9388: LDD $8218
    cpu.m_d = cpu.read_memory16(0x8218);
    // 938B: NEG <$00
    // TODO: Convert NEG <$00
    // 938D: NEG <$FC
    // TODO: Convert NEG <$FC
    // 938F: SBCA #$08
    // TODO: Convert SBCA #$08
    // 9391: LDD $8208
    cpu.m_d = cpu.read_memory16(0x8208);
    // 9394: LDD $8208
    cpu.m_d = cpu.read_memory16(0x8208);
    // 9397: LDD $8208
    cpu.m_d = cpu.read_memory16(0x8208);
    // 939A: NEG <$00
    // TODO: Convert NEG <$00
    // 939C: LSR <$44
    // TODO: Convert LSR <$44
    // 939E: CMPA #$08
    cpu.compare_a(0x08);
    // 93A0: NEG <$00
    // TODO: Convert NEG <$00
    // 93A2: NEG <$01
    // TODO: Convert NEG <$01
    // 93A4: ANDA <$5A
    cpu.m_a &= 0x5A;
    // 93A6: XNC <$94
    // TODO: Convert XNC <$94
    // 93A8: BRN $93AA
    // TODO: Convert BRN $93AA
    // 93AA: LSR <$00
    // TODO: Convert LSR <$00
    // 93AC: LDD $8218
    cpu.m_d = cpu.read_memory16(0x8218);
    // 93AF: NEG <$00
    // TODO: Convert NEG <$00
    // 93B1: NEG <$84
    // TODO: Convert NEG <$84
    // 93B3: CMPA #$08
    cpu.compare_a(0x08);
    // 93B5: SUBA #$00
    cpu.m_a -= 0x00;
    // 93B7: LSRA 
    cpu.m_a >>= 1;
    // 93B9: SBCA #$08
    // TODO: Convert SBCA #$08
    // 93BB: SUBA #$00
    cpu.m_a -= 0x00;
    // 93BD: NEG <$84
    // TODO: Convert NEG <$84
    // 93BF: CMPA #$08
    cpu.compare_a(0x08);
    // 93C1: SUBA #$00
    cpu.m_a -= 0x00;
    // 93C3: LSRA 
    cpu.m_a >>= 1;
    // 93C5: CMPA #$08
    cpu.compare_a(0x08);
    // 93C7: SUBA #$00
    cpu.m_a -= 0x00;
    // 93C9: NEG <$84
    // TODO: Convert NEG <$84
    // 93CB: CMPA #$08
    cpu.compare_a(0x08);
    // 93CD: NEG <$00
    // TODO: Convert NEG <$00
    // 93CF: LSR <$44
    // TODO: Convert LSR <$44
    // 93D1: SBCA #$08
    // TODO: Convert SBCA #$08
    // 93D3: NEG <$00
    // TODO: Convert NEG <$00
    label_93D5:
    // 93D5: NEG <$01
    // TODO: Convert NEG <$01
    // 93D7: ANDA <$5A
    cpu.m_a &= 0x5A;
    // 93D9: XNC <$94
    // TODO: Convert XNC <$94
    // 93DB: BRN $93DD
    // TODO: Convert BRN $93DD
    // 93DD: LSR <$00
    // TODO: Convert LSR <$00
    // 93DF: XHCF 
    // TODO: Convert XHCF 
    // 93E0: SUBA #$18
    cpu.m_a -= 0x18;
    // 93E2: XHCF 
    // TODO: Convert XHCF 
    // 93E3: SUBA #$12
    cpu.m_a -= 0x12;
    // 93E5: XHCF 
    // TODO: Convert XHCF 
    // 93E6: SUBA #$18
    cpu.m_a -= 0x18;
    // 93E8: XHCF 
    // TODO: Convert XHCF 
    // 93E9: SUBA #$12
    cpu.m_a -= 0x12;
    // 93EB: XHCF 
    // TODO: Convert XHCF 
    // 93EC: SUBA #$18
    cpu.m_a -= 0x18;
    // 93EE: XHCF 
    // TODO: Convert XHCF 
    // 93EF: SUBA #$12
    cpu.m_a -= 0x12;
    // 93F1: XHCF 
    // TODO: Convert XHCF 
    // 93F2: SUBA #$18
    cpu.m_a -= 0x18;
    // 93F4: XHCF 
    // TODO: Convert XHCF 
    // 93F5: SUBA #$12
    cpu.m_a -= 0x12;
    // 93F7: NEG <$00
    // TODO: Convert NEG <$00
    // 93F9: NEG <$00
    // TODO: Convert NEG <$00
    // 93FB: NEG <$01
    // TODO: Convert NEG <$01
    // 93FD: LSRA 
    cpu.m_a >>= 1;
    // 93FE: SUBA $0844
    cpu.m_a -= 0x0844;
    // 9401: CMPX #$0844
    cpu.compare_x(0x0844);
    // 9404: SUBA $0244
    cpu.m_a -= 0x0244;
    // 9407: CMPX #$0244
    cpu.compare_x(0x0244);
    // 940A: SUBA $0844
    cpu.m_a -= 0x0844;
    // 940D: CMPX #$0844
    cpu.compare_x(0x0844);
    // 9410: SUBA $0244
    cpu.m_a -= 0x0244;
    // 9413: CMPX #$0200
    cpu.compare_x(0x0200);
    // 9416: NEG <$04
    // TODO: Convert NEG <$04
    // 9418: LSRA 
    cpu.m_a >>= 1;
    // 9419: CMPA #$10
    cpu.compare_a(0x10);
    // 941B: NEG <$00
    // TODO: Convert NEG <$00
    // 941D: NEG <$01
    // TODO: Convert NEG <$01
    // 941F: ANDA <$5A
    cpu.m_a &= 0x5A;
    // 9421: INC <$80
    // TODO: Convert INC <$80
    // 9423: SUBA #$00
    cpu.m_a -= 0x00;
    // 9426: NEG <$94
    // TODO: Convert NEG <$94
    // 9429: CWAI #$80
    // TODO: Convert CWAI #$80
    // 942B: NEG <$20
    // TODO: Convert NEG <$20
    // 942D: LSRA 
    cpu.m_a >>= 1;
    // 942E: SUBA #$3C
    cpu.m_a -= 0x3C;
    // 9430: NEG <$94
    // TODO: Convert NEG <$94
    // 9432: XCLRA 
    // TODO: Convert XCLRA 
    // 9433: SUBA #$00
    cpu.m_a -= 0x00;
    // 9435: NEG <$44
    // TODO: Convert NEG <$44
    label_9437:
    // 9437: SUBA #$33
    cpu.m_a -= 0x33;
    // 9439: NEG <$94
    // TODO: Convert NEG <$94
    // 943B: XCLRA 
    // TODO: Convert XCLRA 
    // 943C: SUBA #$00
    cpu.m_a -= 0x00;
    // 943E: BRA $9484
    goto label_9484;
    // 9440: SBCA #$3C
    // TODO: Convert SBCA #$3C
    // 9442: NEG <$94
    // TODO: Convert NEG <$94
    // 9444: XCLRA 
    // TODO: Convert XCLRA 
    // 9445: SUBA #$00
    cpu.m_a -= 0x00;
    // 9447: NEG <$44
    // TODO: Convert NEG <$44
    // 9449: SBCA #$33
    // TODO: Convert SBCA #$33
    // 944B: NEG <$94
    // TODO: Convert NEG <$94
    // 944D: XCLRA 
    // TODO: Convert XCLRA 
    // 944E: SUBA #$00
    cpu.m_a -= 0x00;
    // 9450: BRA $9496
    goto label_9496;
    // 9452: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9453: BRA $93D5
    goto label_93D5;
    // 9455: NEG <$00
    // TODO: Convert NEG <$00
    // 9457: COM <$00
    // TODO: Convert COM <$00
    // 9459: NEG <$24
    // TODO: Convert NEG <$24
    // 945B: NEG <$08
    // TODO: Convert NEG <$08
    // 945D: NEG <$04
    // TODO: Convert NEG <$04
    // 945F: NEG <$84
    // TODO: Convert NEG <$84
    // 9461: CMPA #$20
    cpu.compare_a(0x20);
    // 9463: NEG <$00
    // TODO: Convert NEG <$00
    // 9465: LSRA 
    cpu.m_a >>= 1;
    // 9466: LSRA 
    cpu.m_a >>= 1;
    // 9467: SBCA #$20
    // TODO: Convert SBCA #$20
    // 9469: NEG <$00
    // TODO: Convert NEG <$00
    // 946B: NEGA 
    cpu.m_a = -cpu.m_a;
    // 946C: LSRA 
    cpu.m_a >>= 1;
    // 946D: NEG <$10
    // TODO: Convert NEG <$10
    // 946F: NEG <$00
    // TODO: Convert NEG <$00
    // 9471: NEG <$00
    // TODO: Convert NEG <$00
    // 9473: INC <$00
    // TODO: Convert INC <$00
    // 9475: ANDA #$81
    cpu.m_a &= 0x81;
    // 9477: BRA $9479
    goto label_9479;
    label_9479:
    // 9479: ASL <$44
    // TODO: Convert ASL <$44
    // 947B: LSRA 
    cpu.m_a >>= 1;
    // 947C: SBCA #$20
    // TODO: Convert SBCA #$20
    // 947E: NEG <$08
    // TODO: Convert NEG <$08
    // 9480: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9481: LSRA 
    cpu.m_a >>= 1;
    // 9482: NEG <$10
    // TODO: Convert NEG <$10
    label_9484:
    // 9484: NEG <$00
    // TODO: Convert NEG <$00
    // 9486: NEG <$80
    // TODO: Convert NEG <$80
    // 9488: ASL <$00
    // TODO: Convert ASL <$00
    // 948A: NEG <$94
    // TODO: Convert NEG <$94
    // 948C: SUBD <$80
    cpu.m_d -= 0x80;
    // 948E: NEG <$00
    // TODO: Convert NEG <$00
    // 9490: NEG <$94
    // TODO: Convert NEG <$94
    // 9492: DECB 
    cpu.m_b--;
    // 9493: SUBA #$00
    cpu.m_a -= 0x00;
    // 9495: LSRA 
    cpu.m_a >>= 1;
    // 9497: XNC <$08
    // TODO: Convert XNC <$08
    // 9499: NEG <$94
    // TODO: Convert NEG <$94
    // 949B: DECB 
    cpu.m_b--;
    // 949C: SUBA #$00
    cpu.m_a -= 0x00;
    // 949E: NEG <$44
    // TODO: Convert NEG <$44
    // 94A0: NEG <$20
    // TODO: Convert NEG <$20
    // 94A2: NEG <$94
    // TODO: Convert NEG <$94
    // 94A4: DECB 
    cpu.m_b--;
    // 94A5: EORA $5D78
    cpu.m_a ^= 0x5D78;
    // 94A8: BVC $94EA
    // TODO: Convert BVC $94EA
    // 94AA: LDD [,U]
    // TODO: Complex indexed addressing: [,U]
    // 94AC: STA $2A89
    cpu.write_memory(0x2A89, cpu.m_a);
    // 94AF: NEG A,U
    // TODO: Convert NEG A,U
    // 94B1: BRA $9437
    goto label_9437;
    // 94B3: MUL 
    // TODO: Convert MUL 
    // 94B4: NEG >$0078
    // TODO: Convert NEG >$0078
    // 94B7: STD [$68EF,W]
    // TODO: Handle indexed addressing: STD [$68EF,W]
    // 94BB: SBCA <$5C
    // TODO: Convert SBCA <$5C
    // 94BD: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94C0: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94C3: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94C6: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94C9: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94CC: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94CF: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94D2: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94D5: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94D8: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94DB: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94DE: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94E1: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94E4: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94E7: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94EA: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94ED: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94F0: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94F3: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94F6: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94F9: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94FC: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 94FF: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9502: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9505: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9508: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 950B: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 950E: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9511: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9514: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9517: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 951A: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 951D: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9520: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9523: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);
    // 9526: STU $434F
    cpu.write_memory16(0x434F, cpu.m_u);
    // 9529: NEGB 
    cpu.m_b = -cpu.m_b;
    // 952A: ROLB 
    cpu.m_b = (cpu.m_b << 1) | (cpu.carry_flag() ? 1 : 0);
    // 952B: XNCB 
    // TODO: Convert XNCB 
    // 952C: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // 952D: ASRA 
    // TODO: Convert ASRA 
    // 952E: ASLA 
    cpu.m_a <<= 1;
    // 952F: LSRB 
    cpu.m_b >>= 1;
    // 9530: BRA $9563
    goto label_9563;
    // 9532: RTS 
    return;
    // 9533: XANDCC #$33
    // TODO: Convert XANDCC #$33
    // 9535: BRA $9578
    goto label_9578;
    // 9537: LSRB 
    cpu.m_b >>= 1;
    // 9538: NEGA 
    cpu.m_a = -cpu.m_a;
    // 9539: XNCB 
    // TODO: Convert XNCB 
    // 953A: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // 953B: LDA $4592
    cpu.m_a = cpu.read_memory(0x4592);
    // 953E: ANDA #$03
    cpu.m_a &= 0x03;
    // 9540: BEQ $9557
    if (cpu.zero_flag()) cpu.m_pc = 0x9557;
    // 9542: ADDA <$60
    cpu.m_a += 0x60;
    // 9544: STA <$60
    cpu.write_memory(0x60, cpu.m_a);
    // 9546: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);
    // 9549: ANDA #$03
    cpu.m_a &= 0x03;
    // 954B: ADDA #$06
    cpu.m_a += 0x06;
    // 954D: CMPA <$60
    cpu.compare_a(cpu.read_memory(0x60));
    // 954F: BCC $9553
    if (!cpu.carry_flag()) cpu.m_pc = 0x9553;
    // 9551: STA <$60
    cpu.write_memory(0x60, cpu.m_a);
    // 9553: LDA #$14
    cpu.m_a = 0x14;
    // 9555: STA <$61
    cpu.write_memory(0x61, cpu.m_a);
    // 9557: RTS 
    return;
    label_9558:
    // 9558: JMP $9558
    goto label_9558;
}

} // namespace StarWars