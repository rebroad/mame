#include "cpu_6809.h"

namespace StarWars {

void routine_f261_f883_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f261_f883.md
    // Address: 0xF261_F883

    label_F261:
    // F261: ORCC #$10
    cpu.m_cc |= 0x10;
    // F263: CLR $4684
    cpu.write_memory(0x4684, 0);
    // F266: LDA #$00
    cpu.m_a = 0x00;
    // F268: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);
    // F26B: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);
    // F26E: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);
    // F271: LDA #$00
    cpu.m_a = 0x00;
    // F273: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);
    // F276: LDA #$80
    cpu.m_a = 0x80;
    // F278: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);
    // F27B: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);
    // F27E: LDU #$0000
    cpu.m_u = 0x0000;
    // F281: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F284: LEAU -$1,U
    // TODO: Fix comma operator: LEAU -$1,U
    // F286: CMPU #$0000
    // TODO: Convert CMPU #$0000
    // F28A: BNE $F281
    if (!cpu.zero_flag()) cpu.m_pc = 0xF281;
    // F28C: LDS #$4FFF
    cpu.m_sp = 0x4FFF;
    // F290: LDA #$48
    cpu.m_a = 0x48;
    // F292: TFR A,DP
    cpu.m_dp = cpu.m_a;
    // F294: STA $46E0
    cpu.write_memory(0x46E0, cpu.m_a);
    // F297: LDA #$00
    cpu.m_a = 0x00;
    // F299: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);
    // F29C: LDX #$4800
    cpu.m_x = 0x4800;
    // F29F: LDD #$0000
    cpu.m_d = 0x0000;
    // F2A2: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // F2A4: CMPX #$5000
    cpu.compare_x(0x5000);
    // F2A7: BCS $F2A2
    if (cpu.carry_flag()) cpu.m_pc = 0xF2A2;
    // F2A9: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F2AC: LDX #$5000
    cpu.m_x = 0x5000;
    // F2AF: LDD #$0000
    cpu.m_d = 0x0000;
    // F2B2: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // F2B4: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F2B7: CMPX #$6000
    cpu.compare_x(0x6000);
    // F2BA: BCS $F2B2
    if (cpu.carry_flag()) cpu.m_pc = 0xF2B2;
    // F2BC: LDX #$0000
    cpu.m_x = 0x0000;
    // F2BF: LDD #$0000
    cpu.m_d = 0x0000;
    // F2C2: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // F2C4: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F2C7: CMPX #$3000
    cpu.compare_x(0x3000);
    // F2CA: BCS $F2C2
    if (cpu.carry_flag()) cpu.m_pc = 0xF2C2;
    // F2CC: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F2CF: ANDA #$10
    cpu.m_a &= 0x10;
    // F2D1: BNE $F2D6
    if (!cpu.zero_flag()) cpu.m_pc = 0xF2D6;
    // F2D3: JMP $F36E
    goto label_F36E;
    // F2D6: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);
    // F2D9: LDB $4360
    cpu.m_b = cpu.read_memory(0x4360);
    // F2DC: STA <$24
    cpu.write_memory(0x24, cpu.m_a);
    // F2DE: STB <$27
    cpu.write_memory(0x27, cpu.m_b);
    // F2E0: LDX #$0800
    cpu.m_x = 0x0800;
    // F2E3: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F2E5: BNE $F2E3
    if (!cpu.zero_flag()) cpu.m_pc = 0xF2E3;
    // F2E7: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);
    // F2EA: LDB $4360
    cpu.m_b = cpu.read_memory(0x4360);
    // F2ED: CMPA <$24
    cpu.compare_a(cpu.read_memory(0x24));
    // F2EF: BNE $F2DC
    if (!cpu.zero_flag()) cpu.m_pc = 0xF2DC;
    // F2F1: CMPB <$27
    cpu.compare_b(cpu.read_memory(0x27));
    // F2F3: BNE $F2DC
    if (!cpu.zero_flag()) cpu.m_pc = 0xF2DC;
    // F2F5: LDD #$2020
    cpu.m_d = 0x2020;
    // F2F8: LDX #$0000
    cpu.m_x = 0x0000;
    // F2FB: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // F2FD: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F300: CMPX #$2800
    cpu.compare_x(0x2800);
    // F303: BCS $F2FB
    if (cpu.carry_flag()) cpu.m_pc = 0xF2FB;
    // F305: LDD #$E038
    cpu.m_d = 0xE038;
    // F308: STD >$0000
    cpu.write_memory16(0x0000, cpu.m_d);
    // F30B: LDA #$FF
    cpu.m_a = 0xFF;
    // F30D: STA <$3F
    cpu.write_memory(0x3F, cpu.m_a);
    // F30F: LDA #$3F
    cpu.m_a = 0x3F;
    // F311: STA <$00
    cpu.write_memory(0x00, cpu.m_a);
    // F313: LDA #$40
    cpu.m_a = 0x40;
    // F315: STA <$28
    cpu.write_memory(0x28, cpu.m_a);
    // F317: JSR $C306
    cpu.call_function(0xC306);
    // F31A: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F31D: LDA #$FF
    cpu.m_a = 0xFF;
    // F31F: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);
    // F322: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);
    // F325: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);
    // F328: STA $4660
    cpu.write_memory(0x4660, cpu.m_a);
    // F32B: JMP $6036
    goto label_6036;
    // F32E: ASLA 
    cpu.m_a <<= 1;
    // F32F: NEG <$50
    // TODO: Convert NEG <$50
    // F331: NEG <$50
    // TODO: Convert NEG <$50
    // F333: NEG <$00
    // TODO: Convert NEG <$00
    // F335: NEG <$08
    // TODO: Convert NEG <$08
    // F337: NEG <$10
    // TODO: Convert NEG <$10
    // F339: NEG <$18
    // TODO: Convert NEG <$18
    // F33B: NEG <$20
    // TODO: Convert NEG <$20
    // F33D: NEG <$28
    // TODO: Convert NEG <$28
    // F33F: NEG <$45
    // TODO: Convert NEG <$45
    // F341: NEG <$60
    // TODO: Convert NEG <$60
    // F343: NEG <$80
    // TODO: Convert NEG <$80
    // F345: NEG <$A0
    // TODO: Convert NEG <$A0
    // F347: NEG <$C0
    // TODO: Convert NEG <$C0
    // F349: NEG <$E0
    // TODO: Convert NEG <$E0
    // F34B: NEG <$28
    // TODO: Convert NEG <$28
    // F34D: NEG <$00
    // TODO: Convert NEG <$00
    // F34F: NEG <$00
    // TODO: Convert NEG <$00
    // F351: XNC <$00
    // TODO: Convert XNC <$00
    // F353: LSR <$00
    // TODO: Convert LSR <$00
    // F355: ASL <$00
    // TODO: Convert ASL <$00
    // F357: NEG <$20
    // TODO: Convert NEG <$20
    // F35A: NEG <$40
    // TODO: Convert NEG <$40
    // F35C: NEG <$80
    // TODO: Convert NEG <$80
    // F35E: NEG <$00
    // TODO: Convert NEG <$00
    // F360: XNC <$00
    // TODO: Convert XNC <$00
    // F362: LSR <$00
    // TODO: Convert LSR <$00
    // F364: ASL <$00
    // TODO: Convert ASL <$00
    // F366: NEG <$20
    // TODO: Convert NEG <$20
    // F369: NEG <$40
    // TODO: Convert NEG <$40
    // F36B: NEG <$80
    // TODO: Convert NEG <$80
    // F36D: NEG <$B6
    // TODO: Convert NEG <$B6
    // F36F: COMA 
    cpu.m_a = ~cpu.m_a;
    // F370: BRA $F2F6
    goto label_F2F6;
    // F372: LSR <$26
    // TODO: Convert LSR <$26
    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6
    // F376: COMA 
    cpu.m_a = ~cpu.m_a;
    // F377: NEGA 
    cpu.m_a = -cpu.m_a;
    // F378: COMA 
    cpu.m_a = ~cpu.m_a;
    // F379: ANDA #$7F
    cpu.m_a &= 0x7F;
    // F37B: BEQ $F380
    if (cpu.zero_flag()) cpu.m_pc = 0xF380;
    // F37D: JMP $FD07
    goto label_FD07;
    // F380: LDS #$0000
    cpu.m_sp = 0x0000;
    // F384: LDU #$F32E
    cpu.m_u = 0xF32E;
    // F387: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);
    // F389: LDY #$0800
    cpu.m_y = 0x0800;
    // F38D: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // F38F: BEQ $F39D
    if (cpu.zero_flag()) cpu.m_pc = 0xF39D;
    // F391: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F393: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F396: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F399: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F39B: BRA $F3DC
    goto label_F3DC;
    // F39D: LDA #$80
    cpu.m_a = 0x80;
    // F39F: ASLA 
    cpu.m_a <<= 1;
    label_F3A0:
    // F3A0: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // F3A1: STA ,X
    // TODO: Handle indexed addressing: STA ,X
    // F3A3: TFR A,B
    cpu.m_b = cpu.m_a;
    // F3A5: EORB ,X
    // TODO: Complex indexed addressing: ,X
    // F3A7: BEQ $F3B5
    if (cpu.zero_flag()) cpu.m_pc = 0xF3B5;
    // F3A9: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F3AB: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F3AE: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F3B1: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F3B3: BRA $F3DC
    goto label_F3DC;
    // F3B5: BCC $F3BE
    if (!cpu.carry_flag()) cpu.m_pc = 0xF3BE;
    // F3B7: TSTA 
    cpu.test_a();
    // F3B8: BNE $F3A0
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3A0;
    // F3BA: ADDA #$FF
    cpu.m_a += 0xFF;
    // F3BC: BRA $F3A0
    goto label_F3A0;
    // F3BE: TFR A,B
    cpu.m_b = cpu.m_a;
    // F3C0: INCB 
    cpu.m_b++;
    // F3C1: BNE $F3A0
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3A0;
    // F3C3: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F3C6: CMPU #$F332
    // TODO: Convert CMPU #$F332
    // F3CA: BEQ $F3D2
    if (cpu.zero_flag()) cpu.m_pc = 0xF3D2;
    // F3CC: CMPU #$F334
    // TODO: Convert CMPU #$F334
    // F3D0: BNE $F3D6
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3D6;
    // F3D2: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X
    // F3D4: BRA $F3D8
    goto label_F3D8;
    // F3D6: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X
    label_F3D8:
    // F3D8: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y
    // F3DA: BNE $F38D
    if (!cpu.zero_flag()) cpu.m_pc = 0xF38D;
    label_F3DC:
    // F3DC: CMPU #$F340
    // TODO: Convert CMPU #$F340
    // F3E0: BCS $F387
    if (cpu.carry_flag()) cpu.m_pc = 0xF387;
    // F3E2: LDU #$F32E
    cpu.m_u = 0xF32E;
    // F3E5: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);
    // F3E7: LDY #$0800
    cpu.m_y = 0x0800;
    // F3EB: INC ,X
    // TODO: Convert INC ,X
    // F3ED: BEQ $F3FB
    if (cpu.zero_flag()) cpu.m_pc = 0xF3FB;
    // F3EF: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F3F1: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F3F4: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F3F7: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F3F9: BRA $F424
    goto label_F424;
    // F3FB: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // F3FD: BEQ $F40B
    if (cpu.zero_flag()) cpu.m_pc = 0xF40B;
    // F3FF: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F401: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F404: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F407: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F409: BRA $F424
    goto label_F424;
    // F40B: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F40E: CMPU #$F332
    // TODO: Convert CMPU #$F332
    // F412: BEQ $F41A
    if (cpu.zero_flag()) cpu.m_pc = 0xF41A;
    // F414: CMPU #$F334
    // TODO: Convert CMPU #$F334
    // F418: BNE $F41E
    if (!cpu.zero_flag()) cpu.m_pc = 0xF41E;
    // F41A: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X
    // F41C: BRA $F420
    goto label_F420;
    // F41E: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X
    label_F420:
    // F420: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y
    // F422: BNE $F3EB
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3EB;
    label_F424:
    // F424: CMPU #$F340
    // TODO: Convert CMPU #$F340
    // F428: BCS $F3E5
    if (cpu.carry_flag()) cpu.m_pc = 0xF3E5;
    // F42A: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F42C: ANDB #$01
    cpu.m_b &= 0x01;
    // F42E: BNE $F43F
    if (!cpu.zero_flag()) cpu.m_pc = 0xF43F;
    // F430: LDX #$4500
    cpu.m_x = 0x4500;
    // F433: LDU #$4C00
    cpu.m_u = 0x4C00;
    // F436: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // F438: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // F43A: CMPX #$4600
    cpu.compare_x(0x4600);
    // F43D: BCS $F436
    if (cpu.carry_flag()) cpu.m_pc = 0xF436;
    // F43F: LDU #$F342
    cpu.m_u = 0xF342;
    // F442: LDX #$4500
    cpu.m_x = 0x4500;
    // F445: LDD #$0000
    cpu.m_d = 0x0000;
    // F448: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // F44A: CMPX #$4600
    cpu.compare_x(0x4600);
    // F44D: BCS $F448
    if (cpu.carry_flag()) cpu.m_pc = 0xF448;
    // F44F: LDX #$4500
    cpu.m_x = 0x4500;
    // F452: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // F454: ANDA #$0F
    cpu.m_a &= 0x0F;
    // F456: BEQ $F464
    if (cpu.zero_flag()) cpu.m_pc = 0xF464;
    // F458: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F45A: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F45D: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F460: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F462: BRA $F4B7
    goto label_F4B7;
    // F464: LDA #$80
    cpu.m_a = 0x80;
    // F466: ASLA 
    cpu.m_a <<= 1;
    // F467: LDY #$0004
    cpu.m_y = 0x0004;
    label_F46B:
    // F46B: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // F46C: STA ,X
    // TODO: Handle indexed addressing: STA ,X
    // F46E: TFR A,B
    cpu.m_b = cpu.m_a;
    // F470: EORB ,X
    // TODO: Complex indexed addressing: ,X
    // F472: ANDB #$0F
    cpu.m_b &= 0x0F;
    // F474: BEQ $F482
    if (cpu.zero_flag()) cpu.m_pc = 0xF482;
    // F476: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F478: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F47B: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F47E: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F480: BRA $F4B7
    goto label_F4B7;
    // F482: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y
    // F484: BNE $F46B
    if (!cpu.zero_flag()) cpu.m_pc = 0xF46B;
    // F486: TSTA 
    cpu.test_a();
    // F487: BMI $F491
    if (cpu.negative_flag()) cpu.m_pc = 0xF491;
    // F489: LDA #$FF
    cpu.m_a = 0xFF;
    // F48B: LDY #$0005
    cpu.m_y = 0x0005;
    // F48F: BRA $F46B
    goto label_F46B;
    // F491: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F494: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X
    // F496: CMPX #$4600
    cpu.compare_x(0x4600);
    // F499: BCS $F452
    if (cpu.carry_flag()) cpu.m_pc = 0xF452;
    // F49B: LDX #$4500
    cpu.m_x = 0x4500;
    // F49E: INC ,X
    // TODO: Convert INC ,X
    // F4A0: LDA ,X+
    // TODO: Complex indexed addressing: ,X+
    // F4A2: ANDA #$0F
    cpu.m_a &= 0x0F;
    // F4A4: BEQ $F4B2
    if (cpu.zero_flag()) cpu.m_pc = 0xF4B2;
    // F4A6: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F4A8: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F4AB: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F4AE: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F4B0: BRA $F4B7
    goto label_F4B7;
    // F4B2: CMPX #$4600
    cpu.compare_x(0x4600);
    // F4B5: BCS $F49E
    if (cpu.carry_flag()) cpu.m_pc = 0xF49E;
    label_F4B7:
    // F4B7: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F4B9: ANDB #$01
    cpu.m_b &= 0x01;
    // F4BB: BNE $F4CE
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4CE;
    // F4BD: LDX #$4C00
    cpu.m_x = 0x4C00;
    // F4C0: LDU #$4500
    cpu.m_u = 0x4500;
    // F4C3: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // F4C5: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // F4C7: CMPX #$4D00
    cpu.compare_x(0x4D00);
    // F4CA: BCS $F4C3
    if (cpu.carry_flag()) cpu.m_pc = 0xF4C3;
    // F4CC: BRA $F4EC
    goto label_F4EC;
    // F4CE: LDA #$FF
    cpu.m_a = 0xFF;
    // F4D0: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);
    // F4D3: LDX #$0100
    cpu.m_x = 0x0100;
    // F4D6: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F4D9: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F4DB: BNE $F4D6
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4D6;
    // F4DD: LDA #$00
    cpu.m_a = 0x00;
    // F4DF: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);
    // F4E2: LDX #$A000
    cpu.m_x = 0xA000;
    // F4E5: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F4E8: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F4EA: BNE $F4E5
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4E5;
    label_F4EC:
    // F4EC: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F4EF: LDA #$00
    cpu.m_a = 0x00;
    // F4F1: STA $4684
    cpu.write_memory(0x4684, cpu.m_a);
    // F4F4: LDX $F342
    cpu.m_x = cpu.read_memory16(0xF342);
    // F4F7: LDY #$2000
    cpu.m_y = 0x2000;
    // F4FB: TFR X,D
    cpu.m_d = cpu.m_x;
    // F4FD: ADCB $1,X
    // TODO: Convert ADCB $1,X
    // F4FF: ADCA ,X++
    // TODO: Convert ADCA ,X++
    // F501: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F504: LEAY -$2,Y
    // TODO: Fix comma operator: LEAY -$2,Y
    // F506: BNE $F4FD
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4FD;
    // F508: TFR D,X
    cpu.m_x = cpu.m_d;
    // F50A: LDA #$FF
    cpu.m_a = 0xFF;
    // F50C: STA $4684
    cpu.write_memory(0x4684, cpu.m_a);
    // F50F: LDU #$F344
    cpu.m_u = 0xF344;
    // F512: TFR X,D
    cpu.m_d = cpu.m_x;
    // F514: LDY #$2000
    cpu.m_y = 0x2000;
    // F518: LDX $F342
    cpu.m_x = cpu.read_memory16(0xF342);
    // F51B: BRA $F528
    goto label_F528;
    // F51D: LDU #$F344
    cpu.m_u = 0xF344;
    // F520: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);
    // F522: LDY #$2000
    cpu.m_y = 0x2000;
    label_F526:
    // F526: TFR X,D
    cpu.m_d = cpu.m_x;
    label_F528:
    // F528: ADCB $1,X
    // TODO: Convert ADCB $1,X
    // F52A: ADCA ,X++
    // TODO: Convert ADCA ,X++
    // F52C: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F52F: LEAY -$2,Y
    // TODO: Fix comma operator: LEAY -$2,Y
    // F531: BNE $F528
    if (!cpu.zero_flag()) cpu.m_pc = 0xF528;
    // F533: STD $5593,U
    // TODO: Handle indexed addressing: STD $5593,U
    // F537: BEQ $F543
    if (cpu.zero_flag()) cpu.m_pc = 0xF543;
    // F539: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F53B: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U
    // F53E: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U
    // F541: TFR D,S
    cpu.m_sp = cpu.m_d;
    // F543: CMPU #$F34C
    // TODO: Convert CMPU #$F34C
    // F547: BCS $F520
    if (cpu.carry_flag()) cpu.m_pc = 0xF520;
    // F549: CMPU #$F34E
    // TODO: Convert CMPU #$F34E
    // F54D: BCC $F557
    if (!cpu.carry_flag()) cpu.m_pc = 0xF557;
    // F54F: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);
    // F551: LDY #$1000
    cpu.m_y = 0x1000;
    // F555: BRA $F526
    goto label_F526;
    // F557: LDA #$FF
    cpu.m_a = 0xFF;
    // F559: STA $4686
    cpu.write_memory(0x4686, cpu.m_a);
    // F55C: STA $4683
    cpu.write_memory(0x4683, cpu.m_a);
    // F55F: STA $4682
    cpu.write_memory(0x4682, cpu.m_a);
    // F562: CLR <$D1
    cpu.write_memory(0xD1, 0);
    // F564: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);
    // F567: ANDA #$04
    cpu.m_a &= 0x04;
    // F569: BNE $F56E
    if (!cpu.zero_flag()) cpu.m_pc = 0xF56E;
    // F56B: JMP $FD07
    goto label_FD07;
    // F56E: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F571: STS <$D2
    cpu.write_memory16(0xD2, cpu.m_sp);
    // F574: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F576: ANDB #$01
    cpu.m_b &= 0x01;
    // F578: BNE $F5ED
    if (!cpu.zero_flag()) cpu.m_pc = 0xF5ED;
    // F57A: LDY #$0000
    cpu.m_y = 0x0000;
    // F57E: LDD #$6000
    cpu.m_d = 0x6000;
    // F581: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F583: LDD #$BFAE
    cpu.m_d = 0xBFAE;
    // F586: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F588: LDD #$8040
    cpu.m_d = 0x8040;
    // F58B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F58D: LDA #$48
    cpu.m_a = 0x48;
    // F58F: TFR A,DP
    cpu.m_dp = cpu.m_a;
    // F591: STS <$CC
    cpu.write_memory16(0xCC, cpu.m_sp);
    // F594: LDS #$4FFF
    cpu.m_sp = 0x4FFF;
    // F598: LDB #$D3
    cpu.m_b = 0xD3;
    // F59A: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F59D: LDB #$B0
    cpu.m_b = 0xB0;
    // F59F: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F5A2: LDB #$B2
    cpu.m_b = 0xB2;
    // F5A4: STB <$CE
    cpu.write_memory(0xCE, cpu.m_b);
    // F5A6: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);
    // F5A8: BNE $F5B1
    if (!cpu.zero_flag()) cpu.m_pc = 0xF5B1;
    // F5AA: LDB #$B1
    cpu.m_b = 0xB1;
    // F5AC: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F5AF: BRA $F5EB
    goto label_F5EB;
    // F5B1: LSRA 
    cpu.m_a >>= 1;
    // F5B2: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // F5B3: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);
    // F5B5: BCC $F5E5
    if (!cpu.carry_flag()) cpu.m_pc = 0xF5E5;
    // F5B7: LDB <$CE
    cpu.m_b = cpu.read_memory(0xCE);
    // F5B9: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F5BC: LDB <$CE
    cpu.m_b = cpu.read_memory(0xCE);
    // F5BE: SUBB #$BC
    cpu.m_b -= 0xBC;
    // F5C0: BCS $F5E5
    if (cpu.carry_flag()) cpu.m_pc = 0xF5E5;
    // F5C2: ASLB 
    cpu.m_b <<= 1;
    // F5C3: LDX #$F743
    cpu.m_x = 0xF743;
    // F5C6: ABX 
    // TODO: Convert ABX 
    // F5C7: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // F5C9: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // F5CB: LDU #$0120
    cpu.m_u = 0x0120;
    // F5CE: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // F5D0: LDX #$48D7
    cpu.m_x = 0x48D7;
    // F5D3: ABX 
    // TODO: Convert ABX 
    // F5D4: LDA ,X+
    // TODO: Complex indexed addressing: ,X+
    // F5D6: COMA 
    cpu.m_a = ~cpu.m_a;
    // F5D7: JSR $E790
    cpu.call_function(0xE790);
    // F5DA: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // F5DC: COMA 
    cpu.m_a = ~cpu.m_a;
    // F5DD: JSR $E790
    cpu.call_function(0xE790);
    // F5E0: LDD #$8040
    cpu.m_d = 0x8040;
    // F5E3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F5E5: INC <$CE
    // TODO: Convert INC <$CE
    // F5E7: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);
    // F5E9: BNE $F5B1
    if (!cpu.zero_flag()) cpu.m_pc = 0xF5B1;
    label_F5EB:
    // F5EB: BRA $F643
    goto label_F643;
    label_F5ED:
    // F5ED: LDX #$0008
    cpu.m_x = 0x0008;
    // F5F0: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F5F2: LSRB 
    cpu.m_b >>= 1;
    // F5F3: BCC $F5F9
    if (!cpu.carry_flag()) cpu.m_pc = 0xF5F9;
    // F5F5: LDA #$29
    cpu.m_a = 0x29;
    // F5F7: BRA $F5FB
    goto label_F5FB;
    // F5F9: LDA #$3B
    cpu.m_a = 0x3B;
    label_F5FB:
    // F5FB: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);
    // F5FE: LDU #$0000
    cpu.m_u = 0x0000;
    // F601: STB $4640
    cpu.write_memory(0x4640, cpu.m_b);
    // F604: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U
    // F606: CMPU #$A000
    // TODO: Convert CMPU #$A000
    // F60A: BCS $F601
    if (cpu.carry_flag()) cpu.m_pc = 0xF601;
    // F60C: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F60E: BNE $F5F2
    if (!cpu.zero_flag()) cpu.m_pc = 0xF5F2;
    // F610: LDX #$0008
    cpu.m_x = 0x0008;
    // F613: TFR S,D
    cpu.m_d = cpu.m_sp;
    // F615: LSRA 
    cpu.m_a >>= 1;
    // F616: BCC $F61C
    if (!cpu.carry_flag()) cpu.m_pc = 0xF61C;
    // F618: LDB #$29
    cpu.m_b = 0x29;
    // F61A: BRA $F61E
    goto label_F61E;
    // F61C: LDB #$3B
    cpu.m_b = 0x3B;
    label_F61E:
    // F61E: STB $4400
    cpu.write_memory(0x4400, cpu.m_b);
    // F621: LDU #$0000
    cpu.m_u = 0x0000;
    // F624: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F627: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U
    // F629: CMPU #$A000
    // TODO: Convert CMPU #$A000
    // F62D: BCS $F624
    if (cpu.carry_flag()) cpu.m_pc = 0xF624;
    // F62F: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F631: BNE $F615
    if (!cpu.zero_flag()) cpu.m_pc = 0xF615;
    // F633: LDU #$0000
    cpu.m_u = 0x0000;
    // F636: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F639: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U
    // F63B: CMPU #$FF00
    // TODO: Convert CMPU #$FF00
    // F63F: BCS $F636
    if (cpu.carry_flag()) cpu.m_pc = 0xF636;
    // F641: BRA $F5ED
    goto label_F5ED;
    label_F643:
    // F643: LDD #$2020
    cpu.m_d = 0x2020;
    // F646: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F648: LDU #$F723
    cpu.m_u = 0xF723;
    // F64B: CLR <$C0
    cpu.write_memory(0xC0, 0);
    // F64D: LDA #$03
    cpu.m_a = 0x03;
    // F64F: STA <$C5
    cpu.write_memory(0xC5, cpu.m_a);
    // F651: STA <$C6
    cpu.write_memory(0xC6, cpu.m_a);
    // F653: STA <$C7
    cpu.write_memory(0xC7, cpu.m_a);
    // F655: STA <$D6
    cpu.write_memory(0xD6, cpu.m_a);
    // F657: LDX #$F34E
    cpu.m_x = 0xF34E;
    // F65A: STX <$D4
    cpu.write_memory16(0xD4, cpu.m_x);
    // F65C: LDD #$0001
    cpu.m_d = 0x0001;
    // F65F: LDX #$0000
    cpu.m_x = 0x0000;
    // F662: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // F665: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X
    // F667: CMPX #$0708
    cpu.compare_x(0x0708);
    // F66A: BCS $F662
    if (cpu.carry_flag()) cpu.m_pc = 0xF662;
    // F66C: STA $4620
    cpu.write_memory(0x4620, cpu.m_a);
    // F66F: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);
    // F672: ANDA #$04
    cpu.m_a &= 0x04;
    // F674: BNE $F679
    if (!cpu.zero_flag()) cpu.m_pc = 0xF679;
    // F676: JMP $F720
    goto label_F720;
    // F679: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F67C: ANDA #$04
    cpu.m_a &= 0x04;
    // F67E: BNE $F69F
    if (!cpu.zero_flag()) cpu.m_pc = 0xF69F;
    // F680: LDA <$C5
    cpu.m_a = cpu.read_memory(0xC5);
    // F682: BEQ $F69D
    if (cpu.zero_flag()) cpu.m_pc = 0xF69D;
    // F684: DECA 
    cpu.m_a--;
    // F685: BNE $F69D
    if (!cpu.zero_flag()) cpu.m_pc = 0xF69D;
    // F687: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U
    // F689: CMPU #$F735
    // TODO: Convert CMPU #$F735
    // F68D: BCS $F692
    if (cpu.carry_flag()) cpu.m_pc = 0xF692;
    // F68F: LDU #$F725
    cpu.m_u = 0xF725;
    // F692: LDD #$0000
    cpu.m_d = 0x0000;
    // F695: STD <$C2
    cpu.write_memory16(0xC2, cpu.m_d);
    // F697: STA <$C4
    cpu.write_memory(0xC4, cpu.m_a);
    // F699: STA <$C0
    cpu.write_memory(0xC0, cpu.m_a);
    // F69B: LDA #$80
    cpu.m_a = 0x80;
    // F69D: BRA $F6A1
    goto label_F6A1;
    // F69F: LDA #$03
    cpu.m_a = 0x03;
    label_F6A1:
    // F6A1: STA <$C5
    cpu.write_memory(0xC5, cpu.m_a);
    // F6A3: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F6A6: COMA 
    cpu.m_a = ~cpu.m_a;
    // F6A7: ANDA #$C0
    cpu.m_a &= 0xC0;
    // F6A9: BEQ $F6C7
    if (cpu.zero_flag()) cpu.m_pc = 0xF6C7;
    // F6AB: LDA <$C6
    cpu.m_a = cpu.read_memory(0xC6);
    // F6AD: BEQ $F6C5
    if (cpu.zero_flag()) cpu.m_pc = 0xF6C5;
    // F6AF: DECA 
    cpu.m_a--;
    // F6B0: BNE $F6C5
    if (!cpu.zero_flag()) cpu.m_pc = 0xF6C5;
    // F6B2: LDB <$C0
    cpu.m_b = cpu.read_memory(0xC0);
    // F6B4: ADDB #$02
    cpu.m_b += 0x02;
    // F6B6: CMPB #$0E
    cpu.compare_b(0x0E);
    // F6B8: BCS $F6BB
    if (cpu.carry_flag()) cpu.m_pc = 0xF6BB;
    // F6BA: CLRB 
    cpu.m_b = 0;
    // F6BB: STB <$C0
    cpu.write_memory(0xC0, cpu.m_b);
    // F6BD: CMPB #$04
    cpu.compare_b(0x04);
    // F6BF: BNE $F6C3
    if (!cpu.zero_flag()) cpu.m_pc = 0xF6C3;
    // F6C1: CLR <$C1
    cpu.write_memory(0xC1, 0);
    // F6C3: LDA #$80
    cpu.m_a = 0x80;
    // F6C5: BRA $F6C9
    goto label_F6C9;
    // F6C7: LDA #$03
    cpu.m_a = 0x03;
    label_F6C9:
    // F6C9: STA <$C6
    cpu.write_memory(0xC6, cpu.m_a);
    // F6CB: CMPU #$F733
    // TODO: Convert CMPU #$F733
    // F6CF: BNE $F6F0
    if (!cpu.zero_flag()) cpu.m_pc = 0xF6F0;
    // F6D1: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);
    // F6D4: COMA 
    cpu.m_a = ~cpu.m_a;
    // F6D5: ANDA #$30
    cpu.m_a &= 0x30;
    // F6D7: BEQ $F6EA
    if (cpu.zero_flag()) cpu.m_pc = 0xF6EA;
    // F6D9: LDA <$C7
    cpu.m_a = cpu.read_memory(0xC7);
    // F6DB: BEQ $F6E8
    if (cpu.zero_flag()) cpu.m_pc = 0xF6E8;
    // F6DD: DECA 
    cpu.m_a--;
    // F6DE: BNE $F6E8
    if (!cpu.zero_flag()) cpu.m_pc = 0xF6E8;
    // F6E0: LDB <$C1
    cpu.m_b = cpu.read_memory(0xC1);
    // F6E2: EORB #$01
    cpu.m_b ^= 0x01;
    // F6E4: STB <$C1
    cpu.write_memory(0xC1, cpu.m_b);
    // F6E6: LDA #$80
    cpu.m_a = 0x80;
    // F6E8: BRA $F6EC
    goto label_F6EC;
    // F6EA: LDA #$03
    cpu.m_a = 0x03;
    label_F6EC:
    // F6EC: STA <$C7
    cpu.write_memory(0xC7, cpu.m_a);
    // F6EE: BRA $F6F2
    goto label_F6F2;
    // F6F0: CLR <$C1
    cpu.write_memory(0xC1, 0);
    label_F6F2:
    // F6F2: LDY #$0000
    cpu.m_y = 0x0000;
    // F6F6: LDB <$C0
    cpu.m_b = cpu.read_memory(0xC0);
    // F6F8: LDX #$F735
    cpu.m_x = 0xF735;
    // F6FB: LDD B,X
    // TODO: Fix comma operator: LDD B,X
    // F6FD: CMPD #$6780
    // TODO: Convert CMPD #$6780
    // F701: BNE $F709
    if (!cpu.zero_flag()) cpu.m_pc = 0xF709;
    // F703: TST <$C1
    // TODO: Convert TST <$C1
    // F705: BEQ $F709
    if (cpu.zero_flag()) cpu.m_pc = 0xF709;
    // F707: LDB #$20
    cpu.m_b = 0x20;
    // F709: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F70B: JMP [,U]
    // TODO: Invalid branch offset: [,U]
    label_F70D:
    // F70D: LDD #$2020
    cpu.m_d = 0x2020;
    // F710: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F712: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    label_F714:
    // F714: STA $4600
    cpu.write_memory(0x4600, cpu.m_a);
    // F717: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F71A: ANDA #$10
    cpu.m_a &= 0x10;
    // F71C: LBEQ $F65C
    // TODO: Convert LBEQ $F65C
    label_F720:
    // F720: JMP $F720
    goto label_F720;
    // F723: STB $4FF7
    cpu.write_memory(0x4FF7, cpu.m_b);
    // F726: CLR $F958
    cpu.write_memory(0xF958, 0);
    // F729: EORB $8CF8
    cpu.m_b ^= 0x8CF8;
    // F72C: ANDA #$F8
    cpu.m_a &= 0xF8;
    // F72E: ANDA <$F8
    cpu.m_a &= 0xF8;
    // F730: ORA [-$34,S]
    // TODO: Complex indexed addressing: [-$34,S]
    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64
    // F736: SUBA #$62
    cpu.m_a -= 0x62;
    // F738: SUBA #$61
    cpu.m_a -= 0x61;
    // F73A: SUBA #$65
    cpu.m_a -= 0x65;
    // F73C: SUBA #$67
    cpu.m_a -= 0x67;
    // F73E: SUBA #$66
    cpu.m_a -= 0x66;
    // F740: SUBA #$63
    cpu.m_a -= 0x63;
    // F742: SUBA #$1F
    cpu.m_a -= 0x1F;
    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F
    // F746: ROR <$1E
    // TODO: Convert ROR <$1E
    // F748: ANDB <$1E
    cpu.m_b &= 0x1E;
    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X
    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A
    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6
    // F751: BPL $F77C
    if (!cpu.negative_flag()) cpu.m_pc = 0xF77C;
    // F753: LDA #$10
    cpu.m_a = 0x10;
    // F755: STA <$D6
    cpu.write_memory(0xD6, cpu.m_a);
    // F757: LDX <$D4
    cpu.m_x = cpu.read_memory16(0xD4);
    // F759: LDD <$D2
    cpu.m_d = cpu.read_memory16(0xD2);
    // F75B: ANDA ,X
    // TODO: Complex indexed addressing: ,X
    // F75D: BNE $F767
    if (!cpu.zero_flag()) cpu.m_pc = 0xF767;
    // F75F: ANDB $1,X
    // TODO: Fix comma operator: ANDB $1,X
    // F761: BNE $F767
    if (!cpu.zero_flag()) cpu.m_pc = 0xF767;
    // F763: LDA #$3B
    cpu.m_a = 0x3B;
    // F765: BRA $F769
    goto label_F769;
    // F767: LDA #$29
    cpu.m_a = 0x29;
    label_F769:
    // F769: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);
    // F76C: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X
    // F76E: CMPX #$F36E
    cpu.compare_x(0xF36E);
    // F771: BCS $F77A
    if (cpu.carry_flag()) cpu.m_pc = 0xF77A;
    // F773: LDA #$20
    cpu.m_a = 0x20;
    // F775: STA <$D6
    cpu.write_memory(0xD6, cpu.m_a);
    // F777: LDX #$F34E
    cpu.m_x = 0xF34E;
    // F77A: STX <$D4
    cpu.write_memory16(0xD4, cpu.m_x);
    // F77C: JMP $F714
    goto label_F714;
    // F77F: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);
    // F782: STA $46C0
    cpu.write_memory(0x46C0, cpu.m_a);
    // F785: LDD #$BFAE
    cpu.m_d = 0xBFAE;
    // F788: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F78A: LDD #$8040
    cpu.m_d = 0x8040;
    // F78D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F78F: LDS #$4FFF
    cpu.m_sp = 0x4FFF;
    // F793: LDB #$9E
    cpu.m_b = 0x9E;
    // F795: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F798: LDB #$D3
    cpu.m_b = 0xD3;
    // F79A: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F79D: LDB #$9F
    cpu.m_b = 0x9F;
    // F79F: STB <$CE
    cpu.write_memory(0xCE, cpu.m_b);
    // F7A1: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F7A4: LDB $4320
    cpu.m_b = cpu.read_memory(0x4320);
    // F7A7: ORB #$C7
    cpu.m_b |= 0xC7;
    // F7A9: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);
    // F7AB: ASLB 
    cpu.m_b <<= 1;
    // F7AC: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // F7AD: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);
    // F7AF: BCS $F7B6
    if (cpu.carry_flag()) cpu.m_pc = 0xF7B6;
    // F7B1: LDB <$CE
    cpu.m_b = cpu.read_memory(0xCE);
    // F7B3: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F7B6: INC <$CE
    // TODO: Convert INC <$CE
    // F7B8: LDD <$CC
    cpu.m_d = cpu.read_memory16(0xCC);
    // F7BA: BNE $F7AB
    if (!cpu.zero_flag()) cpu.m_pc = 0xF7AB;
    // F7BC: LDD <$C8
    cpu.m_d = cpu.read_memory16(0xC8);
    // F7BE: STD <$CA
    cpu.write_memory16(0xCA, cpu.m_d);
    // F7C0: LDA $4300
    cpu.m_a = cpu.read_memory(0x4300);
    // F7C3: ANDA #$CF
    cpu.m_a &= 0xCF;
    // F7C5: LDB $4320
    cpu.m_b = cpu.read_memory(0x4320);
    // F7C8: ANDB #$3A
    cpu.m_b &= 0x3A;
    // F7CA: STD <$C8
    cpu.write_memory16(0xC8, cpu.m_d);
    // F7CC: EORA <$CA
    cpu.m_a ^= 0xCA;
    // F7CE: ANDA <$CA
    cpu.m_a &= 0xCA;
    // F7D0: EORB <$CB
    cpu.m_b ^= 0xCB;
    // F7D2: ANDB <$CB
    cpu.m_b &= 0xCB;
    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000
    // F7D8: BEQ $F7DF
    if (cpu.zero_flag()) cpu.m_pc = 0xF7DF;
    // F7DA: LDA #$3B
    cpu.m_a = 0x3B;
    // F7DC: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);
    // F7DF: LDD #$1EA2
    cpu.m_d = 0x1EA2;
    // F7E2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F7E4: LDD #$1F74
    cpu.m_d = 0x1F74;
    // F7E7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F7E9: LDA #$10
    cpu.m_a = 0x10;
    // F7EB: JSR $E790
    cpu.call_function(0xE790);
    // F7EE: LDD $301E
    cpu.m_d = cpu.read_memory16(0x301E);
    // F7F1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F7F3: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);
    // F7F6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F7F8: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);
    // F7FB: JSR $F86C
    cpu.call_function(0xF86C);
    // F7FE: LDD #$1E70
    cpu.m_d = 0x1E70;
    // F801: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F803: LDD #$1F5C
    cpu.m_d = 0x1F5C;
    // F806: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F808: LDA #$10
    cpu.m_a = 0x10;
    // F80A: JSR $E790
    cpu.call_function(0xE790);
    // F80D: LDD $3020
    cpu.m_d = cpu.read_memory16(0x3020);
    // F810: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F812: LDD $3022
    cpu.m_d = cpu.read_memory16(0x3022);
    // F815: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F817: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);
    // F81A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F81C: LDA $4360
    cpu.m_a = cpu.read_memory(0x4360);
    // F81F: JSR $F86C
    cpu.call_function(0xF86C);
    // F822: LDB #$AF
    cpu.m_b = 0xAF;
    // F824: JSR $E7C7
    cpu.call_function(0xE7C7);
    // F827: LDD #$BFD5
    cpu.m_d = 0xBFD5;
    // F82A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F82C: LDD #$0000
    cpu.m_d = 0x0000;
    // F82F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F831: LDD #$0140
    cpu.m_d = 0x0140;
    // F834: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F836: LDB $4380
    cpu.m_b = cpu.read_memory(0x4380);
    // F839: SUBB #$80
    cpu.m_b -= 0x80;
    // F83B: SEX 
    // TODO: Convert SEX 
    // F83C: TFR D,U
    cpu.m_u = cpu.m_d;
    // F83E: ASRA 
    // TODO: Convert ASRA 
    // F83F: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // F840: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U
    // F842: TFR U,D
    cpu.m_d = cpu.m_u;
    // F844: ANDA #$1F
    cpu.m_a &= 0x1F;
    // F846: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F848: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);
    // F84B: STA $46C1
    cpu.write_memory(0x46C1, cpu.m_a);
    // F84E: LDX #$0014
    cpu.m_x = 0x0014;
    // F851: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // F853: BNE $F851
    if (!cpu.zero_flag()) cpu.m_pc = 0xF851;
    // F855: LDB $4380
    cpu.m_b = cpu.read_memory(0x4380);
    // F858: SUBB #$80
    cpu.m_b -= 0x80;
    // F85A: SEX 
    // TODO: Convert SEX 
    // F85B: ANDA #$1F
    cpu.m_a &= 0x1F;
    // F85D: ORA #$E0
    cpu.m_a |= 0xE0;
    // F85F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F861: LDD #$8040
    cpu.m_d = 0x8040;
    // F864: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F866: LDU #$F725
    cpu.m_u = 0xF725;
    // F869: JMP $F70D
    goto label_F70D;
    // F86C: LDB #$07
    cpu.m_b = 0x07;
    // F86E: LSRA 
    cpu.m_a >>= 1;
    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.m_pc = 0xF876;
    // F871: LDX $3022
    cpu.m_x = cpu.read_memory16(0x3022);
    // F874: BRA $F879
    goto label_F879;
    // F876: LDX $3032
    cpu.m_x = cpu.read_memory16(0x3032);
    label_F879:
    // F879: STX ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_x);
    // F87B: DECB 
    cpu.m_b--;
    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.m_pc = 0xF86E;
    // F87E: LDD #$8040
    cpu.m_d = 0x8040;
    // F881: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // F883: RTS 
    return;
}

} // namespace StarWars