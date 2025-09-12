#include "cpu_6809.h"

namespace StarWars {

void routine_f261_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f261.md
    // Address: 0xF261

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
    cpu.m_pc = 0xF36E;

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
    cpu.m_pc = 0x6036;

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

    // F370: BRA $F2F6
    cpu.m_pc = 0xF2F6;

    // F372: LSR <$26
    // TODO: Convert LSR <$26

    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6

    // F379: ANDA #$7F
    cpu.m_a &= 0x7F;

    // F37B: BEQ $F380
    if (cpu.zero_flag()) cpu.m_pc = 0xF380;

    // F37D: JMP $FD07
    cpu.m_pc = 0xFD07;

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
    cpu.m_pc = 0xF3DC;

    // F39D: LDA #$80
    cpu.m_a = 0x80;

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
    cpu.m_pc = 0xF3DC;

    // F3B5: BCC $F3BE
    if (!cpu.carry_flag()) cpu.m_pc = 0xF3BE;

    // F3B8: BNE $F3A0
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3A0;

    // F3BA: ADDA #$FF
    cpu.m_a += 0xFF;

    // F3BC: BRA $F3A0
    cpu.m_pc = 0xF3A0;

    // F3BE: TFR A,B
    cpu.m_b = cpu.m_a;

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
    cpu.m_pc = 0xF3D8;

    // F3D6: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F3D8: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F3DA: BNE $F38D
    if (!cpu.zero_flag()) cpu.m_pc = 0xF38D;

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
    cpu.m_pc = 0xF424;

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
    cpu.m_pc = 0xF424;

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
    cpu.m_pc = 0xF420;

    // F41E: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F420: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F422: BNE $F3EB
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3EB;

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

    // F460: TFR D,D
    cpu.m_d = cpu.m_d;

}

} // namespace StarWars