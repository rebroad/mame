#include "cpu_6809.h"

namespace StarWars {

void routine_f36e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_f36e.md
    // Address: 0xF36E

    // F36E: LDA $4320
    cpu.m_a = cpu.read_memory(0x4320);

    // F371: ANDA #$04
    cpu.m_a &= 0x04;

    // F373: BNE $0012
    if (!cpu.zero_flag()) cpu.m_pc = 0xF387;

    // F375: LDA $4340
    cpu.m_a = cpu.read_memory(0x4340);

    // F379: ANDA #$7F
    cpu.m_a &= 0x7F;

    // F37B: BEQ $0012
    if (cpu.zero_flag()) cpu.m_pc = 0xF38F;

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

    // F38F: BEQ $002F
    if (cpu.zero_flag()) cpu.m_pc = 0xF3C0;

    // F391: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F393: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F396: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F399: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F39B: BRA $006E
    cpu.m_pc = 0xF40B;

    // F39D: LDA #$80
    cpu.m_a = 0x80;

    // F3A1: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // F3A3: TFR A,B
    cpu.m_b = cpu.m_a;

    // F3A5: EORB ,X
    // TODO: Complex indexed addressing: ,X

    // F3A7: BEQ $0047
    if (cpu.zero_flag()) cpu.m_pc = 0xF3F0;

    // F3A9: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F3AB: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3AE: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3B1: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F3B3: BRA $006E
    cpu.m_pc = 0xF423;

    // F3B5: BCC $0050
    if (!cpu.carry_flag()) cpu.m_pc = 0xF407;

    // F3B8: BNE $0032
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3EC;

    // F3BA: ADDA #$FF
    cpu.m_a += 0xFF;

    // F3BC: BRA $0032
    cpu.m_pc = 0xF3F0;

    // F3BE: TFR A,B
    cpu.m_b = cpu.m_a;

    // F3C1: BNE $0032
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3F5;

    // F3C3: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // F3C6: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F3CA: BEQ $0064
    if (cpu.zero_flag()) cpu.m_pc = 0xF430;

    // F3CC: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F3D0: BNE $0068
    if (!cpu.zero_flag()) cpu.m_pc = 0xF43A;

    // F3D2: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F3D4: BRA $006A
    cpu.m_pc = 0xF440;

    // F3D6: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F3D8: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F3DA: BNE $001F
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3FB;

    // F3DC: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F3E0: BCS $0019
    if (cpu.carry_flag()) cpu.m_pc = 0xF3FB;

    // F3E2: LDU #$F32E
    cpu.m_u = 0xF32E;

    // F3E5: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);

    // F3E7: LDY #$0800
    cpu.m_y = 0x0800;

    // F3EB: INC ,X
    // TODO: Convert INC ,X

    // F3ED: BEQ $008D
    if (cpu.zero_flag()) cpu.m_pc = 0xF37C;

    // F3EF: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F3F1: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3F4: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3F7: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F3F9: BRA $00B6
    cpu.m_pc = 0xF3B1;

    // F3FB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F3FD: BEQ $009D
    if (cpu.zero_flag()) cpu.m_pc = 0xF39C;

    // F3FF: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F401: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F404: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F407: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F409: BRA $00B6
    cpu.m_pc = 0xF3C1;

    // F40B: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // F40E: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F412: BEQ $00AC
    if (cpu.zero_flag()) cpu.m_pc = 0xF3C0;

    // F414: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F418: BNE $00B0
    if (!cpu.zero_flag()) cpu.m_pc = 0xF3CA;

    // F41A: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F41C: BRA $00B2
    cpu.m_pc = 0xF3D0;

    // F41E: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F420: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F422: BNE $007D
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4A1;

    // F424: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F428: BCS $0077
    if (cpu.carry_flag()) cpu.m_pc = 0xF4A1;

    // F42A: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F42C: ANDB #$01
    cpu.m_b &= 0x01;

    // F42E: BNE $00D1
    if (!cpu.zero_flag()) cpu.m_pc = 0xF401;

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

    // F43D: BCS $00C8
    if (cpu.carry_flag()) cpu.m_pc = 0xF407;

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

    // F44D: BCS $00DA
    if (cpu.carry_flag()) cpu.m_pc = 0xF429;

    // F44F: LDX #$4500
    cpu.m_x = 0x4500;

    // F452: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F454: ANDA #$0F
    cpu.m_a &= 0x0F;

    // F456: BEQ $00F6
    if (cpu.zero_flag()) cpu.m_pc = 0xF44E;

    // F458: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F45A: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F45D: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F460: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F462: BRA $0149
    cpu.m_pc = 0xF4AD;

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

    // F474: BEQ $0114
    if (cpu.zero_flag()) cpu.m_pc = 0xF48A;

    // F476: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F478: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F47B: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F47E: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F480: BRA $0149
    cpu.m_pc = 0xF4CB;

    // F482: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F484: BNE $00FD
    if (!cpu.zero_flag()) cpu.m_pc = 0xF483;

    // F487: BMI $0123
    if (cpu.negative_flag()) cpu.m_pc = 0xF4AC;

    // F489: LDA #$FF
    cpu.m_a = 0xFF;

    // F48B: LDY #$0005
    cpu.m_y = 0x0005;

    // F48F: BRA $00FD
    cpu.m_pc = 0xF48E;

    // F491: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // F494: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F496: CMPX #$4600
    cpu.compare_x(0x4600);

    // F499: BCS $00E4
    if (cpu.carry_flag()) cpu.m_pc = 0xF47F;

    // F49B: LDX #$4500
    cpu.m_x = 0x4500;

    // F49E: INC ,X
    // TODO: Convert INC ,X

    // F4A0: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // F4A2: ANDA #$0F
    cpu.m_a &= 0x0F;

    // F4A4: BEQ $0144
    if (cpu.zero_flag()) cpu.m_pc = 0xF4EA;

    // F4A6: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F4A8: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F4AB: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F4AE: TFR D,S
    cpu.m_sp = cpu.m_d;

    // F4B0: BRA $0149
    cpu.m_pc = 0xF4FB;

    // F4B2: CMPX #$4600
    cpu.compare_x(0x4600);

    // F4B5: BCS $0130
    if (cpu.carry_flag()) cpu.m_pc = 0xF4E7;

    // F4B7: TFR S,D
    cpu.m_d = cpu.m_sp;

    // F4B9: ANDB #$01
    cpu.m_b &= 0x01;

    // F4BB: BNE $0160
    if (!cpu.zero_flag()) cpu.m_pc = 0xF51D;

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

    // F4CA: BCS $0155
    if (cpu.carry_flag()) cpu.m_pc = 0xF521;

    // F4CC: BRA $017E
    cpu.m_pc = 0xF54C;

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

    // F4DB: BNE $0168
    if (!cpu.zero_flag()) cpu.m_pc = 0xF545;

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

    // F4EA: BNE $0177
    if (!cpu.zero_flag()) cpu.m_pc = 0xF563;

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

    // F506: BNE $018F
    if (!cpu.zero_flag()) cpu.m_pc = 0xF497;

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

    // F51B: BRA $01BA
    cpu.m_pc = 0xF4D7;

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

    // F531: BNE $01BA
    if (!cpu.zero_flag()) cpu.m_pc = 0xF4ED;

    // F533: STD $5593,U
    // TODO: Handle indexed addressing: STD $5593,U

    // F537: BEQ $01D5
    if (cpu.zero_flag()) cpu.m_pc = 0xF50E;

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

    // F547: BCS $01B2
    if (cpu.carry_flag()) cpu.m_pc = 0xF4FB;

    // F549: CMPU #$F34E
    // TODO: Convert CMPU #$F34E

    // F54D: BCC $01E9
    if (!cpu.carry_flag()) cpu.m_pc = 0xF538;

    // F54F: LDX ,U++
    cpu.m_x = cpu.read_memory16(cpu.m_u++);

    // F551: LDY #$1000
    cpu.m_y = 0x1000;

    // F555: BRA $01B8
    cpu.m_pc = 0xF50F;

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

    // F569: BNE $0200
    if (!cpu.zero_flag()) cpu.m_pc = 0xF56B;

    // F56B: JMP $FD07
    cpu.m_pc = 0xFD07;

}

} // namespace StarWars