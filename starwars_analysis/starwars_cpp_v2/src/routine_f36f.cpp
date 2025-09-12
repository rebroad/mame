#include "cpu_6809.h"

namespace StarWars {

void routine_f36f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_f36f.md
    // Address: 0xF36F

    // F370: BRA $F2F6
    cpu.state_.pc += 0xF2F6;

    // F372: LSR <$26
    // TODO: Convert LSR <$26

    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6

    // F379: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // F37B: BEQ $F380
    if (cpu.zero_flag()) cpu.state_.pc += 0xF380;

    // F37D: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // F380: LDS #$0000
    cpu.state_.sp = 0x0000;

    // F384: LDU #$F32E
    cpu.state_.u = 0xF32E;

    // F387: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F389: LDY #$0800
    cpu.state_.y = 0x0800;

    // F38D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F38F: BEQ $F39D
    if (cpu.zero_flag()) cpu.state_.pc += 0xF39D;

    // F391: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F393: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F396: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F399: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F39B: BRA $F3DC
    cpu.state_.pc += 0xF3DC;

    // F39D: LDA #$80
    cpu.state_.a = 0x80;

    // F3A1: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // F3A3: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // F3A5: EORB ,X
    // TODO: Complex indexed addressing: ,X

    // F3A7: BEQ $F3B5
    if (cpu.zero_flag()) cpu.state_.pc += 0xF3B5;

    // F3A9: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F3AB: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3AE: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3B1: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F3B3: BRA $F3DC
    cpu.state_.pc += 0xF3DC;

    // F3B5: BCC $F3BE
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF3BE;

    // F3B8: BNE $F3A0
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF3A0;

    // F3BA: ADDA #$FF
    cpu.state_.a += 0xFF;

    // F3BC: BRA $F3A0
    cpu.state_.pc += 0xF3A0;

    // F3BE: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // F3C1: BNE $F3A0
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF3A0;

    // F3C3: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F3C6: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F3CA: BEQ $F3D2
    if (cpu.zero_flag()) cpu.state_.pc += 0xF3D2;

    // F3CC: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F3D0: BNE $F3D6
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF3D6;

    // F3D2: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F3D4: BRA $F3D8
    cpu.state_.pc += 0xF3D8;

    // F3D6: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F3D8: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F3DA: BNE $F38D
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF38D;

    // F3DC: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F3E0: BCS $F387
    if (cpu.carry_flag()) cpu.state_.pc += 0xF387;

    // F3E2: LDU #$F32E
    cpu.state_.u = 0xF32E;

    // F3E5: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F3E7: LDY #$0800
    cpu.state_.y = 0x0800;

    // F3EB: INC ,X
    // TODO: Convert INC ,X

    // F3ED: BEQ $F3FB
    if (cpu.zero_flag()) cpu.state_.pc += 0xF3FB;

    // F3EF: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F3F1: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F3F4: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F3F7: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F3F9: BRA $F424
    cpu.state_.pc += 0xF424;

    // F3FB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F3FD: BEQ $F40B
    if (cpu.zero_flag()) cpu.state_.pc += 0xF40B;

    // F3FF: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F401: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F404: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F407: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F409: BRA $F424
    cpu.state_.pc += 0xF424;

    // F40B: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F40E: CMPU #$F332
    // TODO: Convert CMPU #$F332

    // F412: BEQ $F41A
    if (cpu.zero_flag()) cpu.state_.pc += 0xF41A;

    // F414: CMPU #$F334
    // TODO: Convert CMPU #$F334

    // F418: BNE $F41E
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF41E;

    // F41A: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F41C: BRA $F420
    cpu.state_.pc += 0xF420;

    // F41E: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F420: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F422: BNE $F3EB
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF3EB;

    // F424: CMPU #$F340
    // TODO: Convert CMPU #$F340

    // F428: BCS $F3E5
    if (cpu.carry_flag()) cpu.state_.pc += 0xF3E5;

    // F42A: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F42C: ANDB #$01
    cpu.state_.b &= 0x01;

    // F42E: BNE $F43F
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF43F;

    // F430: LDX #$4500
    cpu.state_.x = 0x4500;

    // F433: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // F436: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // F438: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // F43A: CMPX #$4600
    cpu.compare_x(0x4600);

    // F43D: BCS $F436
    if (cpu.carry_flag()) cpu.state_.pc += 0xF436;

    // F43F: LDU #$F342
    cpu.state_.u = 0xF342;

    // F442: LDX #$4500
    cpu.state_.x = 0x4500;

    // F445: LDD #$0000
    cpu.state_.d = 0x0000;

    // F448: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // F44A: CMPX #$4600
    cpu.compare_x(0x4600);

    // F44D: BCS $F448
    if (cpu.carry_flag()) cpu.state_.pc += 0xF448;

    // F44F: LDX #$4500
    cpu.state_.x = 0x4500;

    // F452: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F454: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // F456: BEQ $F464
    if (cpu.zero_flag()) cpu.state_.pc += 0xF464;

    // F458: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F45A: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F45D: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F460: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F462: BRA $F4B7
    cpu.state_.pc += 0xF4B7;

    // F464: LDA #$80
    cpu.state_.a = 0x80;

    // F467: LDY #$0004
    cpu.state_.y = 0x0004;

    // F46C: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // F46E: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // F470: EORB ,X
    // TODO: Complex indexed addressing: ,X

    // F472: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // F474: BEQ $F482
    if (cpu.zero_flag()) cpu.state_.pc += 0xF482;

    // F476: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F478: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F47B: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F47E: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F480: BRA $F4B7
    cpu.state_.pc += 0xF4B7;

    // F482: LEAY -$1,Y
    // TODO: Fix comma operator: LEAY -$1,Y

    // F484: BNE $F46B
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF46B;

    // F487: BMI $F491
    if (cpu.negative_flag()) cpu.state_.pc += 0xF491;

    // F489: LDA #$FF
    cpu.state_.a = 0xFF;

    // F48B: LDY #$0005
    cpu.state_.y = 0x0005;

    // F48F: BRA $F46B
    cpu.state_.pc += 0xF46B;

    // F491: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F494: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // F496: CMPX #$4600
    cpu.compare_x(0x4600);

    // F499: BCS $F452
    if (cpu.carry_flag()) cpu.state_.pc += 0xF452;

    // F49B: LDX #$4500
    cpu.state_.x = 0x4500;

    // F49E: INC ,X
    // TODO: Convert INC ,X

    // F4A0: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // F4A2: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // F4A4: BEQ $F4B2
    if (cpu.zero_flag()) cpu.state_.pc += 0xF4B2;

    // F4A6: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F4A8: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F4AB: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F4AE: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F4B0: BRA $F4B7
    cpu.state_.pc += 0xF4B7;

    // F4B2: CMPX #$4600
    cpu.compare_x(0x4600);

    // F4B5: BCS $F49E
    if (cpu.carry_flag()) cpu.state_.pc += 0xF49E;

    // F4B7: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F4B9: ANDB #$01
    cpu.state_.b &= 0x01;

    // F4BB: BNE $F4CE
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF4CE;

    // F4BD: LDX #$4C00
    cpu.state_.x = 0x4C00;

    // F4C0: LDU #$4500
    cpu.state_.u = 0x4500;

    // F4C3: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // F4C5: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // F4C7: CMPX #$4D00
    cpu.compare_x(0x4D00);

    // F4CA: BCS $F4C3
    if (cpu.carry_flag()) cpu.state_.pc += 0xF4C3;

    // F4CC: BRA $F4EC
    cpu.state_.pc += 0xF4EC;

    // F4CE: LDA #$FF
    cpu.state_.a = 0xFF;

    // F4D0: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // F4D3: LDX #$0100
    cpu.state_.x = 0x0100;

    // F4D6: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F4D9: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F4DB: BNE $F4D6
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF4D6;

    // F4DD: LDA #$00
    cpu.state_.a = 0x00;

    // F4DF: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // F4E2: LDX #$A000
    cpu.state_.x = 0xA000;

    // F4E5: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F4E8: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F4EA: BNE $F4E5
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF4E5;

    // F4EC: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F4EF: LDA #$00
    cpu.state_.a = 0x00;

    // F4F1: STA $4684
    cpu.write_memory(0x4684, cpu.state_.a);

    // F4F4: LDX $F342
    cpu.state_.x = cpu.read_memory_word(0xF342);

    // F4F7: LDY #$2000
    cpu.state_.y = 0x2000;

    // F4FB: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // F4FD: ADCB $1,X
    // TODO: Convert ADCB $1,X

    // F4FF: ADCA ,X++
    // TODO: Convert ADCA ,X++

    // F501: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F504: LEAY -$2,Y
    // TODO: Fix comma operator: LEAY -$2,Y

    // F506: BNE $F4FD
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF4FD;

    // F508: TFR D,X
    cpu.state_.x = cpu.state_.d;

    // F50A: LDA #$FF
    cpu.state_.a = 0xFF;

    // F50C: STA $4684
    cpu.write_memory(0x4684, cpu.state_.a);

    // F50F: LDU #$F344
    cpu.state_.u = 0xF344;

    // F512: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // F514: LDY #$2000
    cpu.state_.y = 0x2000;

    // F518: LDX $F342
    cpu.state_.x = cpu.read_memory_word(0xF342);

    // F51B: BRA $F528
    cpu.state_.pc += 0xF528;

    // F51D: LDU #$F344
    cpu.state_.u = 0xF344;

    // F520: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F522: LDY #$2000
    cpu.state_.y = 0x2000;

    // F526: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // F528: ADCB $1,X
    // TODO: Convert ADCB $1,X

    // F52A: ADCA ,X++
    // TODO: Convert ADCA ,X++

    // F52C: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F52F: LEAY -$2,Y
    // TODO: Fix comma operator: LEAY -$2,Y

    // F531: BNE $F528
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF528;

    // F533: STD $5593,U
    // TODO: Handle indexed addressing: STD $5593,U

    // F537: BEQ $F543
    if (cpu.zero_flag()) cpu.state_.pc += 0xF543;

    // F539: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F53B: ORA $1E,U
    // TODO: Fix comma operator: ORA $1E,U

    // F53E: ORB $1F,U
    // TODO: Fix comma operator: ORB $1F,U

    // F541: TFR D,S
    cpu.state_.sp = cpu.state_.d;

    // F543: CMPU #$F34C
    // TODO: Convert CMPU #$F34C

    // F547: BCS $F520
    if (cpu.carry_flag()) cpu.state_.pc += 0xF520;

    // F549: CMPU #$F34E
    // TODO: Convert CMPU #$F34E

    // F54D: BCC $F557
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF557;

    // F54F: LDX ,U++
    cpu.state_.x = cpu.read_memory_word(cpu.state_.u++);

    // F551: LDY #$1000
    cpu.state_.y = 0x1000;

    // F555: BRA $F526
    cpu.state_.pc += 0xF526;

    // F557: LDA #$FF
    cpu.state_.a = 0xFF;

    // F559: STA $4686
    cpu.write_memory(0x4686, cpu.state_.a);

    // F55C: STA $4683
    cpu.write_memory(0x4683, cpu.state_.a);

    // F55F: STA $4682
    cpu.write_memory(0x4682, cpu.state_.a);

    // F562: CLR <$D1
    cpu.write_memory(0xD1, 0);

    // F564: LDA $4320
    cpu.state_.a = cpu.read_memory(0x4320);

    // F567: ANDA #$04
    cpu.state_.a &= 0x04;

    // F569: BNE $F56E
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF56E;

    // F56B: JMP $FD07
    cpu.state_.pc = 0xFD07;

    // F56E: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F571: STS <$D2
    cpu.write_memory(0xD2, cpu.state_.sp);

    // F574: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F576: ANDB #$01
    cpu.state_.b &= 0x01;

    // F578: BNE $F5ED
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF5ED;

    // F57A: LDY #$0000
    cpu.state_.y = 0x0000;

    // F57E: LDD #$6000
    cpu.state_.d = 0x6000;

    // F581: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F583: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // F586: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F588: LDD #$8040
    cpu.state_.d = 0x8040;

    // F58B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F58D: LDA #$48
    cpu.state_.a = 0x48;

    // F58F: TFR A,DP
    cpu.state_.dp = cpu.state_.a;

    // F591: STS <$CC
    cpu.write_memory(0xCC, cpu.state_.sp);

    // F594: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // F598: LDB #$D3
    cpu.state_.b = 0xD3;

    // F59A: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F59D: LDB #$B0
    cpu.state_.b = 0xB0;

    // F59F: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F5A2: LDB #$B2
    cpu.state_.b = 0xB2;

    // F5A4: STB <$CE
    cpu.write_memory(0xCE, cpu.state_.b);

    // F5A6: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // F5A8: BNE $F5B1
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF5B1;

    // F5AA: LDB #$B1
    cpu.state_.b = 0xB1;

    // F5AC: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F5AF: BRA $F5EB
    cpu.state_.pc += 0xF5EB;

    // F5B3: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // F5B5: BCC $F5E5
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF5E5;

    // F5B7: LDB <$CE
    cpu.state_.b = cpu.read_memory(0xCE);

    // F5B9: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F5BC: LDB <$CE
    cpu.state_.b = cpu.read_memory(0xCE);

    // F5BE: SUBB #$BC
    cpu.state_.b -= 0xBC;

    // F5C0: BCS $F5E5
    if (cpu.carry_flag()) cpu.state_.pc += 0xF5E5;

    // F5C3: LDX #$F743
    cpu.state_.x = 0xF743;

    // F5C7: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // F5C9: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // F5CB: LDU #$0120
    cpu.state_.u = 0x0120;

    // F5CE: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // F5D0: LDX #$48D7
    cpu.state_.x = 0x48D7;

    // F5D4: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // F5D7: JSR $E790
    cpu.call_function(0xE790);

    // F5DA: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // F5DD: JSR $E790
    cpu.call_function(0xE790);

    // F5E0: LDD #$8040
    cpu.state_.d = 0x8040;

    // F5E3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F5E5: INC <$CE
    // TODO: Convert INC <$CE

    // F5E7: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // F5E9: BNE $F5B1
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF5B1;

    // F5EB: BRA $F643
    cpu.state_.pc += 0xF643;

    // F5ED: LDX #$0008
    cpu.state_.x = 0x0008;

    // F5F0: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F5F3: BCC $F5F9
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF5F9;

    // F5F5: LDA #$29
    cpu.state_.a = 0x29;

    // F5F7: BRA $F5FB
    cpu.state_.pc += 0xF5FB;

    // F5F9: LDA #$3B
    cpu.state_.a = 0x3B;

    // F5FB: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F5FE: LDU #$0000
    cpu.state_.u = 0x0000;

    // F601: STB $4640
    cpu.write_memory(0x4640, cpu.state_.b);

    // F604: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // F606: CMPU #$A000
    // TODO: Convert CMPU #$A000

    // F60A: BCS $F601
    if (cpu.carry_flag()) cpu.state_.pc += 0xF601;

    // F60C: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F60E: BNE $F5F2
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF5F2;

    // F610: LDX #$0008
    cpu.state_.x = 0x0008;

    // F613: TFR S,D
    cpu.state_.d = cpu.state_.sp;

    // F616: BCC $F61C
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF61C;

    // F618: LDB #$29
    cpu.state_.b = 0x29;

    // F61A: BRA $F61E
    cpu.state_.pc += 0xF61E;

    // F61C: LDB #$3B
    cpu.state_.b = 0x3B;

    // F61E: STB $4400
    cpu.write_memory(0x4400, cpu.state_.b);

    // F621: LDU #$0000
    cpu.state_.u = 0x0000;

    // F624: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F627: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // F629: CMPU #$A000
    // TODO: Convert CMPU #$A000

    // F62D: BCS $F624
    if (cpu.carry_flag()) cpu.state_.pc += 0xF624;

    // F62F: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F631: BNE $F615
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF615;

    // F633: LDU #$0000
    cpu.state_.u = 0x0000;

    // F636: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F639: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // F63B: CMPU #$FF00
    // TODO: Convert CMPU #$FF00

    // F63F: BCS $F636
    if (cpu.carry_flag()) cpu.state_.pc += 0xF636;

    // F641: BRA $F5ED
    cpu.state_.pc += 0xF5ED;

    // F643: LDD #$2020
    cpu.state_.d = 0x2020;

    // F646: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F648: LDU #$F723
    cpu.state_.u = 0xF723;

    // F64B: CLR <$C0
    cpu.write_memory(0xC0, 0);

    // F64D: LDA #$03
    cpu.state_.a = 0x03;

    // F64F: STA <$C5
    cpu.write_memory(0xC5, cpu.state_.a);

    // F651: STA <$C6
    cpu.write_memory(0xC6, cpu.state_.a);

    // F653: STA <$C7
    cpu.write_memory(0xC7, cpu.state_.a);

    // F655: STA <$D6
    cpu.write_memory(0xD6, cpu.state_.a);

    // F657: LDX #$F34E
    cpu.state_.x = 0xF34E;

    // F65A: STX <$D4
    cpu.write_memory(0xD4, cpu.state_.x);

    // F65C: LDD #$0001
    cpu.state_.d = 0x0001;

    // F65F: LDX #$0000
    cpu.state_.x = 0x0000;

    // F662: STA $4640
    cpu.write_memory(0x4640, cpu.state_.a);

    // F665: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X

    // F667: CMPX #$0708
    cpu.compare_x(0x0708);

    // F66A: BCS $F662
    if (cpu.carry_flag()) cpu.state_.pc += 0xF662;

    // F66C: STA $4620
    cpu.write_memory(0x4620, cpu.state_.a);

    // F66F: LDA $4320
    cpu.state_.a = cpu.read_memory(0x4320);

    // F672: ANDA #$04
    cpu.state_.a &= 0x04;

    // F674: BNE $F679
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF679;

    // F676: JMP $F720
    cpu.state_.pc = 0xF720;

    // F679: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F67C: ANDA #$04
    cpu.state_.a &= 0x04;

    // F67E: BNE $F69F
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF69F;

    // F680: LDA <$C5
    cpu.state_.a = cpu.read_memory(0xC5);

    // F682: BEQ $F69D
    if (cpu.zero_flag()) cpu.state_.pc += 0xF69D;

    // F685: BNE $F69D
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF69D;

    // F687: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // F689: CMPU #$F735
    // TODO: Convert CMPU #$F735

    // F68D: BCS $F692
    if (cpu.carry_flag()) cpu.state_.pc += 0xF692;

    // F68F: LDU #$F725
    cpu.state_.u = 0xF725;

    // F692: LDD #$0000
    cpu.state_.d = 0x0000;

    // F695: STD <$C2
    cpu.write_memory(0xC2, cpu.state_.d);

    // F697: STA <$C4
    cpu.write_memory(0xC4, cpu.state_.a);

    // F699: STA <$C0
    cpu.write_memory(0xC0, cpu.state_.a);

    // F69B: LDA #$80
    cpu.state_.a = 0x80;

    // F69D: BRA $F6A1
    cpu.state_.pc += 0xF6A1;

    // F69F: LDA #$03
    cpu.state_.a = 0x03;

    // F6A1: STA <$C5
    cpu.write_memory(0xC5, cpu.state_.a);

    // F6A3: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F6A7: ANDA #$C0
    cpu.state_.a &= 0xC0;

    // F6A9: BEQ $F6C7
    if (cpu.zero_flag()) cpu.state_.pc += 0xF6C7;

    // F6AB: LDA <$C6
    cpu.state_.a = cpu.read_memory(0xC6);

    // F6AD: BEQ $F6C5
    if (cpu.zero_flag()) cpu.state_.pc += 0xF6C5;

    // F6B0: BNE $F6C5
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF6C5;

    // F6B2: LDB <$C0
    cpu.state_.b = cpu.read_memory(0xC0);

    // F6B4: ADDB #$02
    cpu.state_.b += 0x02;

    // F6B6: CMPB #$0E
    cpu.compare_b(0x0E);

    // F6B8: BCS $F6BB
    if (cpu.carry_flag()) cpu.state_.pc += 0xF6BB;

    // F6BB: STB <$C0
    cpu.write_memory(0xC0, cpu.state_.b);

    // F6BD: CMPB #$04
    cpu.compare_b(0x04);

    // F6BF: BNE $F6C3
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF6C3;

    // F6C1: CLR <$C1
    cpu.write_memory(0xC1, 0);

    // F6C3: LDA #$80
    cpu.state_.a = 0x80;

    // F6C5: BRA $F6C9
    cpu.state_.pc += 0xF6C9;

    // F6C7: LDA #$03
    cpu.state_.a = 0x03;

    // F6C9: STA <$C6
    cpu.write_memory(0xC6, cpu.state_.a);

    // F6CB: CMPU #$F733
    // TODO: Convert CMPU #$F733

    // F6CF: BNE $F6F0
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF6F0;

    // F6D1: LDA $4320
    cpu.state_.a = cpu.read_memory(0x4320);

    // F6D5: ANDA #$30
    cpu.state_.a &= 0x30;

    // F6D7: BEQ $F6EA
    if (cpu.zero_flag()) cpu.state_.pc += 0xF6EA;

    // F6D9: LDA <$C7
    cpu.state_.a = cpu.read_memory(0xC7);

    // F6DB: BEQ $F6E8
    if (cpu.zero_flag()) cpu.state_.pc += 0xF6E8;

    // F6DE: BNE $F6E8
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF6E8;

    // F6E0: LDB <$C1
    cpu.state_.b = cpu.read_memory(0xC1);

    // F6E2: EORB #$01
    cpu.state_.b ^= 0x01;

    // F6E4: STB <$C1
    cpu.write_memory(0xC1, cpu.state_.b);

    // F6E6: LDA #$80
    cpu.state_.a = 0x80;

    // F6E8: BRA $F6EC
    cpu.state_.pc += 0xF6EC;

    // F6EA: LDA #$03
    cpu.state_.a = 0x03;

    // F6EC: STA <$C7
    cpu.write_memory(0xC7, cpu.state_.a);

    // F6EE: BRA $F6F2
    cpu.state_.pc += 0xF6F2;

    // F6F0: CLR <$C1
    cpu.write_memory(0xC1, 0);

    // F6F2: LDY #$0000
    cpu.state_.y = 0x0000;

    // F6F6: LDB <$C0
    cpu.state_.b = cpu.read_memory(0xC0);

    // F6F8: LDX #$F735
    cpu.state_.x = 0xF735;

    // F6FB: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // F6FD: CMPD #$6780
    // TODO: Convert CMPD #$6780

    // F701: BNE $F709
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF709;

    // F703: TST <$C1
    // TODO: Convert TST <$C1

    // F705: BEQ $F709
    if (cpu.zero_flag()) cpu.state_.pc += 0xF709;

    // F707: LDB #$20
    cpu.state_.b = 0x20;

    // F709: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F70B: JMP [,U]
    // TODO: Complex indexed addressing: [,U]

    // F70D: LDD #$2020
    cpu.state_.d = 0x2020;

    // F710: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F712: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F714: STA $4600
    cpu.write_memory(0x4600, cpu.state_.a);

    // F717: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F71A: ANDA #$10
    cpu.state_.a &= 0x10;

    // F71C: LBEQ $F65C
    // TODO: Convert LBEQ $F65C

    // F720: JMP $F720
    cpu.state_.pc = 0xF720;

    // F723: STB $4FF7
    cpu.write_memory(0x4FF7, cpu.state_.b);

    // F726: CLR $F958
    cpu.write_memory(0xF958, 0);

    // F729: EORB $8CF8
    cpu.state_.b ^= 0x8CF8;

    // F72C: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // F72E: ANDA <$F8
    cpu.state_.a &= 0xF8;

    // F730: ORA [-$34,S]
    // TODO: Complex indexed addressing: [-$34,S]

    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64

    // F736: SUBA #$62
    cpu.state_.a -= 0x62;

    // F738: SUBA #$61
    cpu.state_.a -= 0x61;

    // F73A: SUBA #$65
    cpu.state_.a -= 0x65;

    // F73C: SUBA #$67
    cpu.state_.a -= 0x67;

    // F73E: SUBA #$66
    cpu.state_.a -= 0x66;

    // F740: SUBA #$63
    cpu.state_.a -= 0x63;

    // F742: SUBA #$1F
    cpu.state_.a -= 0x1F;

    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F

    // F746: ROR <$1E
    // TODO: Convert ROR <$1E

    // F748: ANDB <$1E
    cpu.state_.b &= 0x1E;

    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X

    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A

    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6

    // F751: BPL $F77C
    if (!cpu.negative_flag()) cpu.state_.pc += 0xF77C;

    // F753: LDA #$10
    cpu.state_.a = 0x10;

    // F755: STA <$D6
    cpu.write_memory(0xD6, cpu.state_.a);

    // F757: LDX <$D4
    cpu.state_.x = cpu.read_memory_word(0xD4);

    // F759: LDD <$D2
    cpu.state_.d = cpu.read_memory_word(0xD2);

    // F75B: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // F75D: BNE $F767
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF767;

    // F75F: ANDB $1,X
    // TODO: Fix comma operator: ANDB $1,X

    // F761: BNE $F767
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF767;

    // F763: LDA #$3B
    cpu.state_.a = 0x3B;

    // F765: BRA $F769
    cpu.state_.pc += 0xF769;

    // F767: LDA #$29
    cpu.state_.a = 0x29;

    // F769: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F76C: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // F76E: CMPX #$F36E
    cpu.compare_x(0xF36E);

    // F771: BCS $F77A
    if (cpu.carry_flag()) cpu.state_.pc += 0xF77A;

    // F773: LDA #$20
    cpu.state_.a = 0x20;

    // F775: STA <$D6
    cpu.write_memory(0xD6, cpu.state_.a);

    // F777: LDX #$F34E
    cpu.state_.x = 0xF34E;

    // F77A: STX <$D4
    cpu.write_memory(0xD4, cpu.state_.x);

    // F77C: JMP $F714
    cpu.state_.pc = 0xF714;

    // F77F: STA $46C0
    cpu.write_memory(0x46C0, cpu.state_.a);

    // F782: STA $46C0
    cpu.write_memory(0x46C0, cpu.state_.a);

    // F785: LDD #$BFAE
    cpu.state_.d = 0xBFAE;

    // F788: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F78A: LDD #$8040
    cpu.state_.d = 0x8040;

    // F78D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F78F: LDS #$4FFF
    cpu.state_.sp = 0x4FFF;

    // F793: LDB #$9E
    cpu.state_.b = 0x9E;

    // F795: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F798: LDB #$D3
    cpu.state_.b = 0xD3;

    // F79A: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F79D: LDB #$9F
    cpu.state_.b = 0x9F;

    // F79F: STB <$CE
    cpu.write_memory(0xCE, cpu.state_.b);

    // F7A1: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F7A4: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // F7A7: ORB #$C7
    cpu.state_.b |= 0xC7;

    // F7A9: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // F7AD: STD <$CC
    cpu.write_memory(0xCC, cpu.state_.d);

    // F7AF: BCS $F7B6
    if (cpu.carry_flag()) cpu.state_.pc += 0xF7B6;

    // F7B1: LDB <$CE
    cpu.state_.b = cpu.read_memory(0xCE);

    // F7B3: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F7B6: INC <$CE
    // TODO: Convert INC <$CE

    // F7B8: LDD <$CC
    cpu.state_.d = cpu.read_memory_word(0xCC);

    // F7BA: BNE $F7AB
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF7AB;

    // F7BC: LDD <$C8
    cpu.state_.d = cpu.read_memory_word(0xC8);

    // F7BE: STD <$CA
    cpu.write_memory(0xCA, cpu.state_.d);

    // F7C0: LDA $4300
    cpu.state_.a = cpu.read_memory(0x4300);

    // F7C3: ANDA #$CF
    cpu.state_.a &= 0xCF;

    // F7C5: LDB $4320
    cpu.state_.b = cpu.read_memory(0x4320);

    // F7C8: ANDB #$3A
    cpu.state_.b &= 0x3A;

    // F7CA: STD <$C8
    cpu.write_memory(0xC8, cpu.state_.d);

    // F7CC: EORA <$CA
    cpu.state_.a ^= 0xCA;

    // F7CE: ANDA <$CA
    cpu.state_.a &= 0xCA;

    // F7D0: EORB <$CB
    cpu.state_.b ^= 0xCB;

    // F7D2: ANDB <$CB
    cpu.state_.b &= 0xCB;

    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000

    // F7D8: BEQ $F7DF
    if (cpu.zero_flag()) cpu.state_.pc += 0xF7DF;

    // F7DA: LDA #$3B
    cpu.state_.a = 0x3B;

    // F7DC: STA $4400
    cpu.write_memory(0x4400, cpu.state_.a);

    // F7DF: LDD #$1EA2
    cpu.state_.d = 0x1EA2;

    // F7E2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7E4: LDD #$1F74
    cpu.state_.d = 0x1F74;

    // F7E7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7E9: LDA #$10
    cpu.state_.a = 0x10;

    // F7EB: JSR $E790
    cpu.call_function(0xE790);

    // F7EE: LDD $301E
    cpu.state_.d = cpu.read_memory_word(0x301E);

    // F7F1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7F3: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // F7F6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F7F8: LDA $4340
    cpu.state_.a = cpu.read_memory(0x4340);

    // F7FB: JSR $F86C
    cpu.call_function(0xF86C);

    // F7FE: LDD #$1E70
    cpu.state_.d = 0x1E70;

    // F801: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F803: LDD #$1F5C
    cpu.state_.d = 0x1F5C;

    // F806: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F808: LDA #$10
    cpu.state_.a = 0x10;

    // F80A: JSR $E790
    cpu.call_function(0xE790);

    // F80D: LDD $3020
    cpu.state_.d = cpu.read_memory_word(0x3020);

    // F810: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F812: LDD $3022
    cpu.state_.d = cpu.read_memory_word(0x3022);

    // F815: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F817: LDD $3002
    cpu.state_.d = cpu.read_memory_word(0x3002);

    // F81A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F81C: LDA $4360
    cpu.state_.a = cpu.read_memory(0x4360);

    // F81F: JSR $F86C
    cpu.call_function(0xF86C);

    // F822: LDB #$AF
    cpu.state_.b = 0xAF;

    // F824: JSR $E7C7
    cpu.call_function(0xE7C7);

    // F827: LDD #$BFD5
    cpu.state_.d = 0xBFD5;

    // F82A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F82C: LDD #$0000
    cpu.state_.d = 0x0000;

    // F82F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F831: LDD #$0140
    cpu.state_.d = 0x0140;

    // F834: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F836: LDB $4380
    cpu.state_.b = cpu.read_memory(0x4380);

    // F839: SUBB #$80
    cpu.state_.b -= 0x80;

    // F83C: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // F840: LEAU D,U
    // TODO: Fix comma operator: LEAU D,U

    // F842: TFR U,D
    cpu.state_.d = cpu.state_.u;

    // F844: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F846: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F848: STA $46C1
    cpu.write_memory(0x46C1, cpu.state_.a);

    // F84B: STA $46C1
    cpu.write_memory(0x46C1, cpu.state_.a);

    // F84E: LDX #$0014
    cpu.state_.x = 0x0014;

    // F851: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // F853: BNE $F851
    if (!cpu.zero_flag()) cpu.state_.pc += 0xF851;

    // F855: LDB $4380
    cpu.state_.b = cpu.read_memory(0x4380);

    // F858: SUBB #$80
    cpu.state_.b -= 0x80;

    // F85B: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // F85D: ORA #$E0
    cpu.state_.a |= 0xE0;

    // F85F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F861: LDD #$8040
    cpu.state_.d = 0x8040;

    // F864: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // F866: LDU #$F725
    cpu.state_.u = 0xF725;

    // F869: JMP $F70D
    cpu.state_.pc = 0xF70D;

    // F86C: LDB #$07
    cpu.state_.b = 0x07;

    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.state_.pc += 0xF876;

    // F871: LDX $3022
    cpu.state_.x = cpu.read_memory_word(0x3022);

    // F874: BRA $F879
    cpu.state_.pc += 0xF879;

    // F876: LDX $3032
    cpu.state_.x = cpu.read_memory_word(0x3032);

    // F879: STX ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.x);

    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.state_.pc += 0xF86E;

    // F87E: LDD #$8040
    cpu.state_.d = 0x8040;

    // F881: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

}

} // namespace StarWars