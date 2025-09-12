#include "cpu_6809.h"

namespace StarWars {

void routine_f36f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_f36f.md
    // Address: 0xF36F

    // Converted from rom_disasm_auto_f36f.md
    // Address: 0xROUTINE_F36F
    // F370: BRA $F2F6
    cpu.state_.pc += F2F6;
    // F372: LSR <$26
    // TODO: Convert LSR <$26
    // F374: XDEC <$B6
    // TODO: Convert XDEC <$B6
    // F379: ANDA #$7F
    cpu.state_.a &= 7F;
    // F37B: BEQ $F380
    if (cpu.zero_flag()) cpu.state_.pc += F380;
    // F37D: JMP $FD07
    cpu.state_.pc = FD07;
    // F380: LDS #$0000
    cpu.state_.sp = 0000;
    // F384: LDU #$F32E
    cpu.state_.u = F32E;
    // F387: LDX ,U++
    cpu.state_.x = ,U++;
    // F389: LDY #$0800
    cpu.state_.y = 0800;
    // F38D: LDA ,X
    cpu.state_.a = ,X;
    // F38F: BEQ $F39D
    if (cpu.zero_flag()) cpu.state_.pc += F39D;
    // F391: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F393: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F396: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F399: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F39B: BRA $F3DC
    cpu.state_.pc += F3DC;
    // F39D: LDA #$80
    cpu.state_.a = 80;
    // F3A1: STA ,X
    cpu.write_memory(,X, cpu.state_.a);
    // F3A3: TFR A,B
    cpu.state_.B = cpu.state_.A;
    // F3A5: EORB ,X
    cpu.state_.b ^= ,X;
    // F3A7: BEQ $F3B5
    if (cpu.zero_flag()) cpu.state_.pc += F3B5;
    // F3A9: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F3AB: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F3AE: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F3B1: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F3B3: BRA $F3DC
    cpu.state_.pc += F3DC;
    // F3B5: BCC $F3BE
    if (!cpu.carry_flag()) cpu.state_.pc += F3BE;
    // F3B8: BNE $F3A0
    if (!cpu.zero_flag()) cpu.state_.pc += F3A0;
    // F3BA: ADDA #$FF
    cpu.state_.a += FF;
    // F3BC: BRA $F3A0
    cpu.state_.pc += F3A0;
    // F3BE: TFR A,B
    cpu.state_.B = cpu.state_.A;
    // F3C1: BNE $F3A0
    if (!cpu.zero_flag()) cpu.state_.pc += F3A0;
    // F3C3: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F3C6: CMPU #$F332
    // TODO: Convert CMPU #$F332
    // F3CA: BEQ $F3D2
    if (cpu.zero_flag()) cpu.state_.pc += F3D2;
    // F3CC: CMPU #$F334
    // TODO: Convert CMPU #$F334
    // F3D0: BNE $F3D6
    if (!cpu.zero_flag()) cpu.state_.pc += F3D6;
    // F3D2: LEAX $2,X
    cpu.state_.x += $2,X;
    // F3D4: BRA $F3D8
    cpu.state_.pc += F3D8;
    // F3D6: LEAX $1,X
    cpu.state_.x += $1,X;
    // F3D8: LEAY -$1,Y
    cpu.state_.y += -$1,Y;
    // F3DA: BNE $F38D
    if (!cpu.zero_flag()) cpu.state_.pc += F38D;
    // F3DC: CMPU #$F340
    // TODO: Convert CMPU #$F340
    // F3E0: BCS $F387
    if (cpu.carry_flag()) cpu.state_.pc += F387;
    // F3E2: LDU #$F32E
    cpu.state_.u = F32E;
    // F3E5: LDX ,U++
    cpu.state_.x = ,U++;
    // F3E7: LDY #$0800
    cpu.state_.y = 0800;
    // F3EB: INC ,X
    // TODO: Convert INC ,X
    // F3ED: BEQ $F3FB
    if (cpu.zero_flag()) cpu.state_.pc += F3FB;
    // F3EF: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F3F1: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F3F4: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F3F7: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F3F9: BRA $F424
    cpu.state_.pc += F424;
    // F3FB: LDA ,X
    cpu.state_.a = ,X;
    // F3FD: BEQ $F40B
    if (cpu.zero_flag()) cpu.state_.pc += F40B;
    // F3FF: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F401: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F404: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F407: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F409: BRA $F424
    cpu.state_.pc += F424;
    // F40B: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F40E: CMPU #$F332
    // TODO: Convert CMPU #$F332
    // F412: BEQ $F41A
    if (cpu.zero_flag()) cpu.state_.pc += F41A;
    // F414: CMPU #$F334
    // TODO: Convert CMPU #$F334
    // F418: BNE $F41E
    if (!cpu.zero_flag()) cpu.state_.pc += F41E;
    // F41A: LEAX $2,X
    cpu.state_.x += $2,X;
    // F41C: BRA $F420
    cpu.state_.pc += F420;
    // F41E: LEAX $1,X
    cpu.state_.x += $1,X;
    // F420: LEAY -$1,Y
    cpu.state_.y += -$1,Y;
    // F422: BNE $F3EB
    if (!cpu.zero_flag()) cpu.state_.pc += F3EB;
    // F424: CMPU #$F340
    // TODO: Convert CMPU #$F340
    // F428: BCS $F3E5
    if (cpu.carry_flag()) cpu.state_.pc += F3E5;
    // F42A: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F42C: ANDB #$01
    cpu.state_.b &= 01;
    // F42E: BNE $F43F
    if (!cpu.zero_flag()) cpu.state_.pc += F43F;
    // F430: LDX #$4500
    cpu.state_.x = 4500;
    // F433: LDU #$4C00
    cpu.state_.u = 4C00;
    // F436: LDD ,X++
    cpu.state_.d = ,X++;
    // F438: STD ,U++
    cpu.write_memory(,U++, cpu.state_.d);
    // F43A: CMPX #$4600
    cpu.compare_x(4600);
    // F43D: BCS $F436
    if (cpu.carry_flag()) cpu.state_.pc += F436;
    // F43F: LDU #$F342
    cpu.state_.u = F342;
    // F442: LDX #$4500
    cpu.state_.x = 4500;
    // F445: LDD #$0000
    cpu.state_.d = 0000;
    // F448: STD ,X++
    cpu.write_memory(,X++, cpu.state_.d);
    // F44A: CMPX #$4600
    cpu.compare_x(4600);
    // F44D: BCS $F448
    if (cpu.carry_flag()) cpu.state_.pc += F448;
    // F44F: LDX #$4500
    cpu.state_.x = 4500;
    // F452: LDA ,X
    cpu.state_.a = ,X;
    // F454: ANDA #$0F
    cpu.state_.a &= 0F;
    // F456: BEQ $F464
    if (cpu.zero_flag()) cpu.state_.pc += F464;
    // F458: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F45A: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F45D: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F460: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F462: BRA $F4B7
    cpu.state_.pc += F4B7;
    // F464: LDA #$80
    cpu.state_.a = 80;
    // F467: LDY #$0004
    cpu.state_.y = 0004;
    // F46C: STA ,X
    cpu.write_memory(,X, cpu.state_.a);
    // F46E: TFR A,B
    cpu.state_.B = cpu.state_.A;
    // F470: EORB ,X
    cpu.state_.b ^= ,X;
    // F472: ANDB #$0F
    cpu.state_.b &= 0F;
    // F474: BEQ $F482
    if (cpu.zero_flag()) cpu.state_.pc += F482;
    // F476: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F478: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F47B: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F47E: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F480: BRA $F4B7
    cpu.state_.pc += F4B7;
    // F482: LEAY -$1,Y
    cpu.state_.y += -$1,Y;
    // F484: BNE $F46B
    if (!cpu.zero_flag()) cpu.state_.pc += F46B;
    // F487: BMI $F491
    if (cpu.negative_flag()) cpu.state_.pc += F491;
    // F489: LDA #$FF
    cpu.state_.a = FF;
    // F48B: LDY #$0005
    cpu.state_.y = 0005;
    // F48F: BRA $F46B
    cpu.state_.pc += F46B;
    // F491: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F494: LEAX $1,X
    cpu.state_.x += $1,X;
    // F496: CMPX #$4600
    cpu.compare_x(4600);
    // F499: BCS $F452
    if (cpu.carry_flag()) cpu.state_.pc += F452;
    // F49B: LDX #$4500
    cpu.state_.x = 4500;
    // F49E: INC ,X
    // TODO: Convert INC ,X
    // F4A0: LDA ,X+
    cpu.state_.a = ,X+;
    // F4A2: ANDA #$0F
    cpu.state_.a &= 0F;
    // F4A4: BEQ $F4B2
    if (cpu.zero_flag()) cpu.state_.pc += F4B2;
    // F4A6: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F4A8: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F4AB: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F4AE: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F4B0: BRA $F4B7
    cpu.state_.pc += F4B7;
    // F4B2: CMPX #$4600
    cpu.compare_x(4600);
    // F4B5: BCS $F49E
    if (cpu.carry_flag()) cpu.state_.pc += F49E;
    // F4B7: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F4B9: ANDB #$01
    cpu.state_.b &= 01;
    // F4BB: BNE $F4CE
    if (!cpu.zero_flag()) cpu.state_.pc += F4CE;
    // F4BD: LDX #$4C00
    cpu.state_.x = 4C00;
    // F4C0: LDU #$4500
    cpu.state_.u = 4500;
    // F4C3: LDD ,X++
    cpu.state_.d = ,X++;
    // F4C5: STD ,U++
    cpu.write_memory(,U++, cpu.state_.d);
    // F4C7: CMPX #$4D00
    cpu.compare_x(4D00);
    // F4CA: BCS $F4C3
    if (cpu.carry_flag()) cpu.state_.pc += F4C3;
    // F4CC: BRA $F4EC
    cpu.state_.pc += F4EC;
    // F4CE: LDA #$FF
    cpu.state_.a = FF;
    // F4D0: STA $4687
    cpu.write_memory(4687, cpu.state_.a);
    // F4D3: LDX #$0100
    cpu.state_.x = 0100;
    // F4D6: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F4D9: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // F4DB: BNE $F4D6
    if (!cpu.zero_flag()) cpu.state_.pc += F4D6;
    // F4DD: LDA #$00
    cpu.state_.a = 00;
    // F4DF: STA $4687
    cpu.write_memory(4687, cpu.state_.a);
    // F4E2: LDX #$A000
    cpu.state_.x = A000;
    // F4E5: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F4E8: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // F4EA: BNE $F4E5
    if (!cpu.zero_flag()) cpu.state_.pc += F4E5;
    // F4EC: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F4EF: LDA #$00
    cpu.state_.a = 00;
    // F4F1: STA $4684
    cpu.write_memory(4684, cpu.state_.a);
    // F4F4: LDX $F342
    cpu.state_.x = F342;
    // F4F7: LDY #$2000
    cpu.state_.y = 2000;
    // F4FB: TFR X,D
    cpu.state_.D = cpu.state_.X;
    // F4FD: ADCB $1,X
    // TODO: Convert ADCB $1,X
    // F4FF: ADCA ,X++
    // TODO: Convert ADCA ,X++
    // F501: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F504: LEAY -$2,Y
    cpu.state_.y += -$2,Y;
    // F506: BNE $F4FD
    if (!cpu.zero_flag()) cpu.state_.pc += F4FD;
    // F508: TFR D,X
    cpu.state_.X = cpu.state_.D;
    // F50A: LDA #$FF
    cpu.state_.a = FF;
    // F50C: STA $4684
    cpu.write_memory(4684, cpu.state_.a);
    // F50F: LDU #$F344
    cpu.state_.u = F344;
    // F512: TFR X,D
    cpu.state_.D = cpu.state_.X;
    // F514: LDY #$2000
    cpu.state_.y = 2000;
    // F518: LDX $F342
    cpu.state_.x = F342;
    // F51B: BRA $F528
    cpu.state_.pc += F528;
    // F51D: LDU #$F344
    cpu.state_.u = F344;
    // F520: LDX ,U++
    cpu.state_.x = ,U++;
    // F522: LDY #$2000
    cpu.state_.y = 2000;
    // F526: TFR X,D
    cpu.state_.D = cpu.state_.X;
    // F528: ADCB $1,X
    // TODO: Convert ADCB $1,X
    // F52A: ADCA ,X++
    // TODO: Convert ADCA ,X++
    // F52C: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F52F: LEAY -$2,Y
    cpu.state_.y += -$2,Y;
    // F531: BNE $F528
    if (!cpu.zero_flag()) cpu.state_.pc += F528;
    // F533: STD $5593,U
    cpu.write_memory($5593,U, cpu.state_.d);
    // F537: BEQ $F543
    if (cpu.zero_flag()) cpu.state_.pc += F543;
    // F539: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F53B: ORA $1E,U
    cpu.state_.a |= $1E,U;
    // F53E: ORB $1F,U
    cpu.state_.b |= $1F,U;
    // F541: TFR D,S
    cpu.state_.S = cpu.state_.D;
    // F543: CMPU #$F34C
    // TODO: Convert CMPU #$F34C
    // F547: BCS $F520
    if (cpu.carry_flag()) cpu.state_.pc += F520;
    // F549: CMPU #$F34E
    // TODO: Convert CMPU #$F34E
    // F54D: BCC $F557
    if (!cpu.carry_flag()) cpu.state_.pc += F557;
    // F54F: LDX ,U++
    cpu.state_.x = ,U++;
    // F551: LDY #$1000
    cpu.state_.y = 1000;
    // F555: BRA $F526
    cpu.state_.pc += F526;
    // F557: LDA #$FF
    cpu.state_.a = FF;
    // F559: STA $4686
    cpu.write_memory(4686, cpu.state_.a);
    // F55C: STA $4683
    cpu.write_memory(4683, cpu.state_.a);
    // F55F: STA $4682
    cpu.write_memory(4682, cpu.state_.a);
    // F562: CLR <$D1
    cpu.write_memory($D1, 0);
    // F564: LDA $4320
    cpu.state_.a = 4320;
    // F567: ANDA #$04
    cpu.state_.a &= 04;
    // F569: BNE $F56E
    if (!cpu.zero_flag()) cpu.state_.pc += F56E;
    // F56B: JMP $FD07
    cpu.state_.pc = FD07;
    // F56E: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F571: STS <$D2
    cpu.write_memory($D2, cpu.state_.sp);
    // F574: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F576: ANDB #$01
    cpu.state_.b &= 01;
    // F578: BNE $F5ED
    if (!cpu.zero_flag()) cpu.state_.pc += F5ED;
    // F57A: LDY #$0000
    cpu.state_.y = 0000;
    // F57E: LDD #$6000
    cpu.state_.d = 6000;
    // F581: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F583: LDD #$BFAE
    cpu.state_.d = BFAE;
    // F586: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F588: LDD #$8040
    cpu.state_.d = 8040;
    // F58B: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F58D: LDA #$48
    cpu.state_.a = 48;
    // F58F: TFR A,DP
    cpu.state_.DP = cpu.state_.A;
    // F591: STS <$CC
    cpu.write_memory($CC, cpu.state_.sp);
    // F594: LDS #$4FFF
    cpu.state_.sp = 4FFF;
    // F598: LDB #$D3
    cpu.state_.b = D3;
    // F59A: JSR $E7C7
    cpu.call_function(E7C7);
    // F59D: LDB #$B0
    cpu.state_.b = B0;
    // F59F: JSR $E7C7
    cpu.call_function(E7C7);
    // F5A2: LDB #$B2
    cpu.state_.b = B2;
    // F5A4: STB <$CE
    cpu.write_memory($CE, cpu.state_.b);
    // F5A6: LDD <$CC
    cpu.state_.d = $CC;
    // F5A8: BNE $F5B1
    if (!cpu.zero_flag()) cpu.state_.pc += F5B1;
    // F5AA: LDB #$B1
    cpu.state_.b = B1;
    // F5AC: JSR $E7C7
    cpu.call_function(E7C7);
    // F5AF: BRA $F5EB
    cpu.state_.pc += F5EB;
    // F5B3: STD <$CC
    cpu.write_memory($CC, cpu.state_.d);
    // F5B5: BCC $F5E5
    if (!cpu.carry_flag()) cpu.state_.pc += F5E5;
    // F5B7: LDB <$CE
    cpu.state_.b = $CE;
    // F5B9: JSR $E7C7
    cpu.call_function(E7C7);
    // F5BC: LDB <$CE
    cpu.state_.b = $CE;
    // F5BE: SUBB #$BC
    cpu.state_.b -= BC;
    // F5C0: BCS $F5E5
    if (cpu.carry_flag()) cpu.state_.pc += F5E5;
    // F5C3: LDX #$F743
    cpu.state_.x = F743;
    // F5C7: LDU ,X
    cpu.state_.u = ,X;
    // F5C9: STU ,Y++
    cpu.write_memory(,Y++, cpu.state_.u);
    // F5CB: LDU #$0120
    cpu.state_.u = 0120;
    // F5CE: STU ,Y++
    cpu.write_memory(,Y++, cpu.state_.u);
    // F5D0: LDX #$48D7
    cpu.state_.x = 48D7;
    // F5D4: LDA ,X+
    cpu.state_.a = ,X+;
    // F5D7: JSR $E790
    cpu.call_function(E790);
    // F5DA: LDA ,X
    cpu.state_.a = ,X;
    // F5DD: JSR $E790
    cpu.call_function(E790);
    // F5E0: LDD #$8040
    cpu.state_.d = 8040;
    // F5E3: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F5E5: INC <$CE
    // TODO: Convert INC <$CE
    // F5E7: LDD <$CC
    cpu.state_.d = $CC;
    // F5E9: BNE $F5B1
    if (!cpu.zero_flag()) cpu.state_.pc += F5B1;
    // F5EB: BRA $F643
    cpu.state_.pc += F643;
    // F5ED: LDX #$0008
    cpu.state_.x = 0008;
    // F5F0: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F5F3: BCC $F5F9
    if (!cpu.carry_flag()) cpu.state_.pc += F5F9;
    // F5F5: LDA #$29
    cpu.state_.a = 29;
    // F5F7: BRA $F5FB
    cpu.state_.pc += F5FB;
    // F5F9: LDA #$3B
    cpu.state_.a = 3B;
    // F5FB: STA $4400
    cpu.write_memory(4400, cpu.state_.a);
    // F5FE: LDU #$0000
    cpu.state_.u = 0000;
    // F601: STB $4640
    cpu.write_memory(4640, cpu.state_.b);
    // F604: LEAU $1,U
    cpu.state_.u += $1,U;
    // F606: CMPU #$A000
    // TODO: Convert CMPU #$A000
    // F60A: BCS $F601
    if (cpu.carry_flag()) cpu.state_.pc += F601;
    // F60C: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // F60E: BNE $F5F2
    if (!cpu.zero_flag()) cpu.state_.pc += F5F2;
    // F610: LDX #$0008
    cpu.state_.x = 0008;
    // F613: TFR S,D
    cpu.state_.D = cpu.state_.S;
    // F616: BCC $F61C
    if (!cpu.carry_flag()) cpu.state_.pc += F61C;
    // F618: LDB #$29
    cpu.state_.b = 29;
    // F61A: BRA $F61E
    cpu.state_.pc += F61E;
    // F61C: LDB #$3B
    cpu.state_.b = 3B;
    // F61E: STB $4400
    cpu.write_memory(4400, cpu.state_.b);
    // F621: LDU #$0000
    cpu.state_.u = 0000;
    // F624: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F627: LEAU $1,U
    cpu.state_.u += $1,U;
    // F629: CMPU #$A000
    // TODO: Convert CMPU #$A000
    // F62D: BCS $F624
    if (cpu.carry_flag()) cpu.state_.pc += F624;
    // F62F: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // F631: BNE $F615
    if (!cpu.zero_flag()) cpu.state_.pc += F615;
    // F633: LDU #$0000
    cpu.state_.u = 0000;
    // F636: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F639: LEAU $1,U
    cpu.state_.u += $1,U;
    // F63B: CMPU #$FF00
    // TODO: Convert CMPU #$FF00
    // F63F: BCS $F636
    if (cpu.carry_flag()) cpu.state_.pc += F636;
    // F641: BRA $F5ED
    cpu.state_.pc += F5ED;
    // F643: LDD #$2020
    cpu.state_.d = 2020;
    // F646: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F648: LDU #$F723
    cpu.state_.u = F723;
    // F64B: CLR <$C0
    cpu.write_memory($C0, 0);
    // F64D: LDA #$03
    cpu.state_.a = 03;
    // F64F: STA <$C5
    cpu.write_memory($C5, cpu.state_.a);
    // F651: STA <$C6
    cpu.write_memory($C6, cpu.state_.a);
    // F653: STA <$C7
    cpu.write_memory($C7, cpu.state_.a);
    // F655: STA <$D6
    cpu.write_memory($D6, cpu.state_.a);
    // F657: LDX #$F34E
    cpu.state_.x = F34E;
    // F65A: STX <$D4
    cpu.write_memory($D4, cpu.state_.x);
    // F65C: LDD #$0001
    cpu.state_.d = 0001;
    // F65F: LDX #$0000
    cpu.state_.x = 0000;
    // F662: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F665: LEAX D,X
    cpu.state_.x += D,X;
    // F667: CMPX #$0708
    cpu.compare_x(0708);
    // F66A: BCS $F662
    if (cpu.carry_flag()) cpu.state_.pc += F662;
    // F66C: STA $4620
    cpu.write_memory(4620, cpu.state_.a);
    // F66F: LDA $4320
    cpu.state_.a = 4320;
    // F672: ANDA #$04
    cpu.state_.a &= 04;
    // F674: BNE $F679
    if (!cpu.zero_flag()) cpu.state_.pc += F679;
    // F676: JMP $F720
    cpu.state_.pc = F720;
    // F679: LDA $4300
    cpu.state_.a = 4300;
    // F67C: ANDA #$04
    cpu.state_.a &= 04;
    // F67E: BNE $F69F
    if (!cpu.zero_flag()) cpu.state_.pc += F69F;
    // F680: LDA <$C5
    cpu.state_.a = $C5;
    // F682: BEQ $F69D
    if (cpu.zero_flag()) cpu.state_.pc += F69D;
    // F685: BNE $F69D
    if (!cpu.zero_flag()) cpu.state_.pc += F69D;
    // F687: LEAU $2,U
    cpu.state_.u += $2,U;
    // F689: CMPU #$F735
    // TODO: Convert CMPU #$F735
    // F68D: BCS $F692
    if (cpu.carry_flag()) cpu.state_.pc += F692;
    // F68F: LDU #$F725
    cpu.state_.u = F725;
    // F692: LDD #$0000
    cpu.state_.d = 0000;
    // F695: STD <$C2
    cpu.write_memory($C2, cpu.state_.d);
    // F697: STA <$C4
    cpu.write_memory($C4, cpu.state_.a);
    // F699: STA <$C0
    cpu.write_memory($C0, cpu.state_.a);
    // F69B: LDA #$80
    cpu.state_.a = 80;
    // F69D: BRA $F6A1
    cpu.state_.pc += F6A1;
    // F69F: LDA #$03
    cpu.state_.a = 03;
    // F6A1: STA <$C5
    cpu.write_memory($C5, cpu.state_.a);
    // F6A3: LDA $4300
    cpu.state_.a = 4300;
    // F6A7: ANDA #$C0
    cpu.state_.a &= C0;
    // F6A9: BEQ $F6C7
    if (cpu.zero_flag()) cpu.state_.pc += F6C7;
    // F6AB: LDA <$C6
    cpu.state_.a = $C6;
    // F6AD: BEQ $F6C5
    if (cpu.zero_flag()) cpu.state_.pc += F6C5;
    // F6B0: BNE $F6C5
    if (!cpu.zero_flag()) cpu.state_.pc += F6C5;
    // F6B2: LDB <$C0
    cpu.state_.b = $C0;
    // F6B4: ADDB #$02
    cpu.state_.b += 02;
    // F6B6: CMPB #$0E
    cpu.compare_b(0E);
    // F6B8: BCS $F6BB
    if (cpu.carry_flag()) cpu.state_.pc += F6BB;
    // F6BB: STB <$C0
    cpu.write_memory($C0, cpu.state_.b);
    // F6BD: CMPB #$04
    cpu.compare_b(04);
    // F6BF: BNE $F6C3
    if (!cpu.zero_flag()) cpu.state_.pc += F6C3;
    // F6C1: CLR <$C1
    cpu.write_memory($C1, 0);
    // F6C3: LDA #$80
    cpu.state_.a = 80;
    // F6C5: BRA $F6C9
    cpu.state_.pc += F6C9;
    // F6C7: LDA #$03
    cpu.state_.a = 03;
    // F6C9: STA <$C6
    cpu.write_memory($C6, cpu.state_.a);
    // F6CB: CMPU #$F733
    // TODO: Convert CMPU #$F733
    // F6CF: BNE $F6F0
    if (!cpu.zero_flag()) cpu.state_.pc += F6F0;
    // F6D1: LDA $4320
    cpu.state_.a = 4320;
    // F6D5: ANDA #$30
    cpu.state_.a &= 30;
    // F6D7: BEQ $F6EA
    if (cpu.zero_flag()) cpu.state_.pc += F6EA;
    // F6D9: LDA <$C7
    cpu.state_.a = $C7;
    // F6DB: BEQ $F6E8
    if (cpu.zero_flag()) cpu.state_.pc += F6E8;
    // F6DE: BNE $F6E8
    if (!cpu.zero_flag()) cpu.state_.pc += F6E8;
    // F6E0: LDB <$C1
    cpu.state_.b = $C1;
    // F6E2: EORB #$01
    cpu.state_.b ^= 01;
    // F6E4: STB <$C1
    cpu.write_memory($C1, cpu.state_.b);
    // F6E6: LDA #$80
    cpu.state_.a = 80;
    // F6E8: BRA $F6EC
    cpu.state_.pc += F6EC;
    // F6EA: LDA #$03
    cpu.state_.a = 03;
    // F6EC: STA <$C7
    cpu.write_memory($C7, cpu.state_.a);
    // F6EE: BRA $F6F2
    cpu.state_.pc += F6F2;
    // F6F0: CLR <$C1
    cpu.write_memory($C1, 0);
    // F6F2: LDY #$0000
    cpu.state_.y = 0000;
    // F6F6: LDB <$C0
    cpu.state_.b = $C0;
    // F6F8: LDX #$F735
    cpu.state_.x = F735;
    // F6FB: LDD B,X
    cpu.state_.d = B,X;
    // F6FD: CMPD #$6780
    // TODO: Convert CMPD #$6780
    // F701: BNE $F709
    if (!cpu.zero_flag()) cpu.state_.pc += F709;
    // F703: TST <$C1
    // TODO: Convert TST <$C1
    // F705: BEQ $F709
    if (cpu.zero_flag()) cpu.state_.pc += F709;
    // F707: LDB #$20
    cpu.state_.b = 20;
    // F709: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F70B: JMP [,U]
    cpu.state_.pc = [,U];
    // F70D: LDD #$2020
    cpu.state_.d = 2020;
    // F710: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F712: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F714: STA $4600
    cpu.write_memory(4600, cpu.state_.a);
    // F717: LDA $4300
    cpu.state_.a = 4300;
    // F71A: ANDA #$10
    cpu.state_.a &= 10;
    // F71C: LBEQ $F65C
    // TODO: Convert LBEQ $F65C
    // F720: JMP $F720
    cpu.state_.pc = F720;
    // F723: STB $4FF7
    cpu.write_memory(4FF7, cpu.state_.b);
    // F726: CLR $F958
    cpu.write_memory(F958, 0);
    // F729: EORB $8CF8
    cpu.state_.b ^= 8CF8;
    // F72C: ANDA #$F8
    cpu.state_.a &= F8;
    // F72E: ANDA <$F8
    cpu.state_.a &= $F8;
    // F730: ORA [-$34,S]
    cpu.state_.a |= [-$34,S];
    // F733: ADCB $3F64
    // TODO: Convert ADCB $3F64
    // F736: SUBA #$62
    cpu.state_.a -= 62;
    // F738: SUBA #$61
    cpu.state_.a -= 61;
    // F73A: SUBA #$65
    cpu.state_.a -= 65;
    // F73C: SUBA #$67
    cpu.state_.a -= 67;
    // F73E: SUBA #$66
    cpu.state_.a -= 66;
    // F740: SUBA #$63
    cpu.state_.a -= 63;
    // F742: SUBA #$1F
    cpu.state_.a -= 1F;
    // F744: XANDCC #$1F
    // TODO: Convert XANDCC #$1F
    // F746: ROR <$1E
    // TODO: Convert ROR <$1E
    // F748: ANDB <$1E
    cpu.state_.b &= $1E;
    // F74A: SBCA -$2,X
    // TODO: Convert SBCA -$2,X
    // F74C: NEG $1F6A
    // TODO: Convert NEG $1F6A
    // F74F: DEC <$D6
    // TODO: Convert DEC <$D6
    // F751: BPL $F77C
    if (!cpu.negative_flag()) cpu.state_.pc += F77C;
    // F753: LDA #$10
    cpu.state_.a = 10;
    // F755: STA <$D6
    cpu.write_memory($D6, cpu.state_.a);
    // F757: LDX <$D4
    cpu.state_.x = $D4;
    // F759: LDD <$D2
    cpu.state_.d = $D2;
    // F75B: ANDA ,X
    cpu.state_.a &= ,X;
    // F75D: BNE $F767
    if (!cpu.zero_flag()) cpu.state_.pc += F767;
    // F75F: ANDB $1,X
    cpu.state_.b &= $1,X;
    // F761: BNE $F767
    if (!cpu.zero_flag()) cpu.state_.pc += F767;
    // F763: LDA #$3B
    cpu.state_.a = 3B;
    // F765: BRA $F769
    cpu.state_.pc += F769;
    // F767: LDA #$29
    cpu.state_.a = 29;
    // F769: STA $4400
    cpu.write_memory(4400, cpu.state_.a);
    // F76C: LEAX $2,X
    cpu.state_.x += $2,X;
    // F76E: CMPX #$F36E
    cpu.compare_x(F36E);
    // F771: BCS $F77A
    if (cpu.carry_flag()) cpu.state_.pc += F77A;
    // F773: LDA #$20
    cpu.state_.a = 20;
    // F775: STA <$D6
    cpu.write_memory($D6, cpu.state_.a);
    // F777: LDX #$F34E
    cpu.state_.x = F34E;
    // F77A: STX <$D4
    cpu.write_memory($D4, cpu.state_.x);
    // F77C: JMP $F714
    cpu.state_.pc = F714;
    // F77F: STA $46C0
    cpu.write_memory(46C0, cpu.state_.a);
    // F782: STA $46C0
    cpu.write_memory(46C0, cpu.state_.a);
    // F785: LDD #$BFAE
    cpu.state_.d = BFAE;
    // F788: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F78A: LDD #$8040
    cpu.state_.d = 8040;
    // F78D: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F78F: LDS #$4FFF
    cpu.state_.sp = 4FFF;
    // F793: LDB #$9E
    cpu.state_.b = 9E;
    // F795: JSR $E7C7
    cpu.call_function(E7C7);
    // F798: LDB #$D3
    cpu.state_.b = D3;
    // F79A: JSR $E7C7
    cpu.call_function(E7C7);
    // F79D: LDB #$9F
    cpu.state_.b = 9F;
    // F79F: STB <$CE
    cpu.write_memory($CE, cpu.state_.b);
    // F7A1: LDA $4300
    cpu.state_.a = 4300;
    // F7A4: LDB $4320
    cpu.state_.b = 4320;
    // F7A7: ORB #$C7
    cpu.state_.b |= C7;
    // F7A9: STD <$CC
    cpu.write_memory($CC, cpu.state_.d);
    // F7AD: STD <$CC
    cpu.write_memory($CC, cpu.state_.d);
    // F7AF: BCS $F7B6
    if (cpu.carry_flag()) cpu.state_.pc += F7B6;
    // F7B1: LDB <$CE
    cpu.state_.b = $CE;
    // F7B3: JSR $E7C7
    cpu.call_function(E7C7);
    // F7B6: INC <$CE
    // TODO: Convert INC <$CE
    // F7B8: LDD <$CC
    cpu.state_.d = $CC;
    // F7BA: BNE $F7AB
    if (!cpu.zero_flag()) cpu.state_.pc += F7AB;
    // F7BC: LDD <$C8
    cpu.state_.d = $C8;
    // F7BE: STD <$CA
    cpu.write_memory($CA, cpu.state_.d);
    // F7C0: LDA $4300
    cpu.state_.a = 4300;
    // F7C3: ANDA #$CF
    cpu.state_.a &= CF;
    // F7C5: LDB $4320
    cpu.state_.b = 4320;
    // F7C8: ANDB #$3A
    cpu.state_.b &= 3A;
    // F7CA: STD <$C8
    cpu.write_memory($C8, cpu.state_.d);
    // F7CC: EORA <$CA
    cpu.state_.a ^= $CA;
    // F7CE: ANDA <$CA
    cpu.state_.a &= $CA;
    // F7D0: EORB <$CB
    cpu.state_.b ^= $CB;
    // F7D2: ANDB <$CB
    cpu.state_.b &= $CB;
    // F7D4: CMPD #$0000
    // TODO: Convert CMPD #$0000
    // F7D8: BEQ $F7DF
    if (cpu.zero_flag()) cpu.state_.pc += F7DF;
    // F7DA: LDA #$3B
    cpu.state_.a = 3B;
    // F7DC: STA $4400
    cpu.write_memory(4400, cpu.state_.a);
    // F7DF: LDD #$1EA2
    cpu.state_.d = 1EA2;
    // F7E2: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F7E4: LDD #$1F74
    cpu.state_.d = 1F74;
    // F7E7: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F7E9: LDA #$10
    cpu.state_.a = 10;
    // F7EB: JSR $E790
    cpu.call_function(E790);
    // F7EE: LDD $301E
    cpu.state_.d = 301E;
    // F7F1: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F7F3: LDD $3002
    cpu.state_.d = 3002;
    // F7F6: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F7F8: LDA $4340
    cpu.state_.a = 4340;
    // F7FB: JSR $F86C
    cpu.call_function(F86C);
    // F7FE: LDD #$1E70
    cpu.state_.d = 1E70;
    // F801: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F803: LDD #$1F5C
    cpu.state_.d = 1F5C;
    // F806: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F808: LDA #$10
    cpu.state_.a = 10;
    // F80A: JSR $E790
    cpu.call_function(E790);
    // F80D: LDD $3020
    cpu.state_.d = 3020;
    // F810: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F812: LDD $3022
    cpu.state_.d = 3022;
    // F815: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F817: LDD $3002
    cpu.state_.d = 3002;
    // F81A: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F81C: LDA $4360
    cpu.state_.a = 4360;
    // F81F: JSR $F86C
    cpu.call_function(F86C);
    // F822: LDB #$AF
    cpu.state_.b = AF;
    // F824: JSR $E7C7
    cpu.call_function(E7C7);
    // F827: LDD #$BFD5
    cpu.state_.d = BFD5;
    // F82A: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F82C: LDD #$0000
    cpu.state_.d = 0000;
    // F82F: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F831: LDD #$0140
    cpu.state_.d = 0140;
    // F834: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F836: LDB $4380
    cpu.state_.b = 4380;
    // F839: SUBB #$80
    cpu.state_.b -= 80;
    // F83C: TFR D,U
    cpu.state_.U = cpu.state_.D;
    // F840: LEAU D,U
    cpu.state_.u += D,U;
    // F842: TFR U,D
    cpu.state_.D = cpu.state_.U;
    // F844: ANDA #$1F
    cpu.state_.a &= 1F;
    // F846: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F848: STA $46C1
    cpu.write_memory(46C1, cpu.state_.a);
    // F84B: STA $46C1
    cpu.write_memory(46C1, cpu.state_.a);
    // F84E: LDX #$0014
    cpu.state_.x = 0014;
    // F851: LEAX -$1,X
    cpu.state_.x += -$1,X;
    // F853: BNE $F851
    if (!cpu.zero_flag()) cpu.state_.pc += F851;
    // F855: LDB $4380
    cpu.state_.b = 4380;
    // F858: SUBB #$80
    cpu.state_.b -= 80;
    // F85B: ANDA #$1F
    cpu.state_.a &= 1F;
    // F85D: ORA #$E0
    cpu.state_.a |= E0;
    // F85F: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F861: LDD #$8040
    cpu.state_.d = 8040;
    // F864: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
    // F866: LDU #$F725
    cpu.state_.u = F725;
    // F869: JMP $F70D
    cpu.state_.pc = F70D;
    // F86C: LDB #$07
    cpu.state_.b = 07;
    // F86F: BCC $F876
    if (!cpu.carry_flag()) cpu.state_.pc += F876;
    // F871: LDX $3022
    cpu.state_.x = 3022;
    // F874: BRA $F879
    cpu.state_.pc += F879;
    // F876: LDX $3032
    cpu.state_.x = 3032;
    // F879: STX ,Y++
    cpu.write_memory(,Y++, cpu.state_.x);
    // F87C: BPL $F86E
    if (!cpu.negative_flag()) cpu.state_.pc += F86E;
    // F87E: LDD #$8040
    cpu.state_.d = 8040;
    // F881: STD ,Y++
    cpu.write_memory(,Y++, cpu.state_.d);
}

} // namespace StarWars
