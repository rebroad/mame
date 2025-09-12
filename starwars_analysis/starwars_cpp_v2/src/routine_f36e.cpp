#include "cpu_6809.h"

namespace StarWars {

void routine_f36e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f36e.md
    // Address: 0xF36E

    // F36E: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);

    // F371: ANDA #$04
    cpu.m_a &= 0x04;

    // F373: BNE $F380
    if (!cpu.zero_flag()) cpu.m_pc = 0xF380;

    // F375: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);

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

    // F460: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F462: BRA $F4B7
    cpu.m_pc = 0xF4B7;

    // F464: LDA #$80
    cpu.m_a = 0x80;

    // F467: LDY #$0004
    cpu.m_y = 0x0004;

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
    cpu.m_pc = 0xF4B7;

    // F482: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F484: BNE $F46B
    if (!cpu.zero_flag()) cpu.m_pc = 0xF46B;

    // F487: BMI $F491
    if (cpu.negative_flag()) cpu.m_pc = 0xF491;

    // F489: LDA #$FF
    cpu.m_a = 0xFF;

    // F48B: LDY #$0005
    cpu.m_y = 0x0005;

    // F48F: BRA $F46B
    cpu.m_pc = 0xF46B;

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
    cpu.m_pc = 0xF4B7;

    // F4B2: CMPX #$4600
    cpu.compare_x(0x4600);

    // F4B5: BCS $F49E
    if (cpu.carry_flag()) cpu.m_pc = 0xF49E;

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
    cpu.m_pc = 0xF4EC;

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
    cpu.m_pc = 0xF528;

    // F51D: LDU #$F344
    cpu.m_u = 0xF344;

    // F520: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);

    // F522: LDY #$2000
    cpu.m_y = 0x2000;

    // F526: TFR X,D
    cpu.m_d = cpu.m_x;

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
    cpu.m_pc = 0xF526;

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
    cpu.m_pc = 0xFD07;

}

} // namespace StarWars