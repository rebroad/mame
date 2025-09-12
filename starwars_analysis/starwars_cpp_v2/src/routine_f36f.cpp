#include "cpu_0x6809.h"

namespace StarWars {

void routine_0xF36F_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_0xF36F.md
    // Address: 0x0xF36F

    // Converted from rom_disasm_auto_0xF36F.md
    // Address: 0xROUTINE_0xF36F
    // 0xF370: BRA 0x0xF2F6
    cpu.state_.pc += 0xF2F6;
    // 0xF372: LSR <0x26
    // TODO: Convert LSR <0x26
    // 0xF374: XDEC <0xB6
    // TODO: Convert XDEC <0xB6
    // 0xF379: ANDA 0x7F
    cpu.state_.a &= 0x7F;
    // 0xF37B: BEQ 0x0xF380
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF380;
    // 0xF37D: JMP 0x0xFD07
    cpu.state_.pc = 0xFD07;
    // 0xF380: LDS 0x0x0000
    cpu.state_.sp = 0x0000;
    // 0xF384: LDU 0x0xF32E
    cpu.state_.u = 0xF32E;
    // 0xF387: LDX ,cpu.state_.u++
    cpu.state_.x = ,cpu.state_.u++;
    // 0xF389: LDY 0x0x0800
    cpu.state_.y = 0x0800;
    // 0xF38D: LDA ,cpu.state_.x
    cpu.state_.a = ,cpu.state_.x;
    // 0xF38F: BEQ 0x0xF39D
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF39D;
    // 0xF391: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF393: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF396: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF399: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF39B: BRA 0x0xF3DC
    cpu.state_.pc += 0xF3DC;
    // 0xF39D: LDA 0x80
    cpu.state_.a = 0x80;
    // 0xF3A1: STA ,cpu.state_.x
    cpu.cpu.write_memory(0, cpu.state_.x,  cpu.state_.a);
    // 0xF3A3: TFR cpu.state_.a,cpu.state_.b
    cpu.state_.cpu.state_.b = cpu.state_.cpu.state_.a;
    // 0xF3A5: EORB ,cpu.state_.x
    cpu.state_.b ^= ,cpu.state_.x;
    // 0xF3A7: BEQ 0x0xF3B5
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3B5;
    // 0xF3A9: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF3AB: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF3AE: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF3B1: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF3B3: BRA 0x0xF3DC
    cpu.state_.pc += 0xF3DC;
    // 0xF3B5: BCC 0x0xF3BE
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF3BE;
    // 0xF3B8: BNE 0x0xF3A0
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3A0;
    // 0xF3BA: 0xADDA 0xFF
    cpu.state_.a += 0xFF;
    // 0xF3BC: BRA 0x0xF3A0
    cpu.state_.pc += 0xF3A0;
    // 0xF3BE: TFR cpu.state_.a,cpu.state_.b
    cpu.state_.cpu.state_.b = cpu.state_.cpu.state_.a;
    // 0xF3C1: BNE 0x0xF3A0
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3A0;
    // 0xF3C3: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF3C6: CMPU 0x0xF332
    // TODO: Convert CMPU 0x0xF332
    // 0xF3CA: BEQ 0x0xF3D2
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3D2;
    // 0xF3CC: CMPU 0x0xF334
    // TODO: Convert CMPU 0x0xF334
    // 0xF3D0: BNE 0x0xF3D6
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3D6;
    // 0xF3D2: LEAX 0x2,cpu.state_.x
    cpu.state_.x += 0x2,cpu.state_.x;
    // 0xF3D4: BRA 0x0xF3D8
    cpu.state_.pc += 0xF3D8;
    // 0xF3D6: LEAX 0x1,cpu.state_.x
    cpu.state_.x += 0x1,cpu.state_.x;
    // 0xF3D8: LEAY -0x1,cpu.state_.y
    cpu.state_.y += -0x1,cpu.state_.y;
    // 0xF3DA: BNE 0x0xF38D
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF38D;
    // 0xF3DC: CMPU 0x0xF340
    // TODO: Convert CMPU 0x0xF340
    // 0xF3E0: BCS 0x0xF387
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF387;
    // 0xF3E2: LDU 0x0xF32E
    cpu.state_.u = 0xF32E;
    // 0xF3E5: LDX ,cpu.state_.u++
    cpu.state_.x = ,cpu.state_.u++;
    // 0xF3E7: LDY 0x0x0800
    cpu.state_.y = 0x0800;
    // 0xF3EB: INC ,cpu.state_.x
    // TODO: Convert INC ,cpu.state_.x
    // 0xF3ED: BEQ 0x0xF3FB
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3FB;
    // 0xF3EF: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF3F1: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF3F4: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF3F7: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF3F9: BRA 0x0xF424
    cpu.state_.pc += 0xF424;
    // 0xF3FB: LDA ,cpu.state_.x
    cpu.state_.a = ,cpu.state_.x;
    // 0xF3FD: BEQ 0x0xF40B
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF40B;
    // 0xF3FF: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF401: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF404: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF407: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF409: BRA 0x0xF424
    cpu.state_.pc += 0xF424;
    // 0xF40B: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF40E: CMPU 0x0xF332
    // TODO: Convert CMPU 0x0xF332
    // 0xF412: BEQ 0x0xF41A
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF41A;
    // 0xF414: CMPU 0x0xF334
    // TODO: Convert CMPU 0x0xF334
    // 0xF418: BNE 0xF40x1E
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF40x1E;
    // 0xF41A: LEAX 0x2,cpu.state_.x
    cpu.state_.x += 0x2,cpu.state_.x;
    // 0xF41C: BRA 0x0xF420
    cpu.state_.pc += 0xF420;
    // F40x1E: LEAX 0x1,cpu.state_.x
    cpu.state_.x += 0x1,cpu.state_.x;
    // 0xF420: LEAY -0x1,cpu.state_.y
    cpu.state_.y += -0x1,cpu.state_.y;
    // 0xF422: BNE 0x0xF3EB
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF3EB;
    // 0xF424: CMPU 0x0xF340
    // TODO: Convert CMPU 0x0xF340
    // 0xF428: BCS 0x0xF3E5
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF3E5;
    // 0xF42A: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF42C: ANDB 0x01
    cpu.state_.b &= 0x01;
    // 0xF42E: BNE 0x0xF43F
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF43F;
    // 0xF430: LDX 0x0x4500
    cpu.state_.x = 0x4500;
    // 0xF433: LDU 0x0x4C00
    cpu.state_.u = 0x4C00;
    // 0xF436: LDD ,cpu.state_.x++
    cpu.state_.d = ,cpu.state_.x++;
    // 0xF438: STD ,cpu.state_.u++
    cpu.cpu.write_memory(0, cpu.state_.u++,  cpu.state_.d);
    // 0xF43A: CMPX 0x0x4600
    cpu.cpu.compare_x(0x4600);
    // 0xF43D: BCS 0x0xF436
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF436;
    // 0xF43F: LDU 0x0xF342
    cpu.state_.u = 0xF342;
    // 0xF442: LDX 0x0x4500
    cpu.state_.x = 0x4500;
    // 0xF445: LDD 0x0x0000
    cpu.state_.d = 0x0000;
    // 0xF448: STD ,cpu.state_.x++
    cpu.cpu.write_memory(0, cpu.state_.x++,  cpu.state_.d);
    // 0xF44A: CMPX 0x0x4600
    cpu.cpu.compare_x(0x4600);
    // 0xF44D: BCS 0x0xF448
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF448;
    // 0xF44F: LDX 0x0x4500
    cpu.state_.x = 0x4500;
    // 0xF452: LDA ,cpu.state_.x
    cpu.state_.a = ,cpu.state_.x;
    // 0xF454: ANDA 0x0F
    cpu.state_.a &= 0x0F;
    // 0xF456: BEQ 0x0xF464
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF464;
    // 0xF458: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF45A: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF45D: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF460: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF462: BRA 0x0xF4B7
    cpu.state_.pc += 0xF4B7;
    // 0xF464: LDA 0x80
    cpu.state_.a = 0x80;
    // 0xF467: LDY 0x0x0004
    cpu.state_.y = 0x0004;
    // 0xF46C: STA ,cpu.state_.x
    cpu.cpu.write_memory(0, cpu.state_.x,  cpu.state_.a);
    // 0xF46E: TFR cpu.state_.a,cpu.state_.b
    cpu.state_.cpu.state_.b = cpu.state_.cpu.state_.a;
    // 0xF470: EORB ,cpu.state_.x
    cpu.state_.b ^= ,cpu.state_.x;
    // 0xF472: ANDB 0x0F
    cpu.state_.b &= 0x0F;
    // 0xF474: BEQ 0x0xF482
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF482;
    // 0xF476: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF478: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF47B: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF47E: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF480: BRA 0x0xF4B7
    cpu.state_.pc += 0xF4B7;
    // 0xF482: LEAY -0x1,cpu.state_.y
    cpu.state_.y += -0x1,cpu.state_.y;
    // 0xF484: BNE 0x0xF46B
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF46B;
    // 0xF487: BMI 0x0xF491
    if (cpu.cpu.negative_flag()) cpu.state_.pc += 0xF491;
    // 0xF489: LDA 0xFF
    cpu.state_.a = 0xFF;
    // 0xF48B: LDY 0x0x0005
    cpu.state_.y = 0x0005;
    // 0xF48F: BRA 0x0xF46B
    cpu.state_.pc += 0xF46B;
    // 0xF491: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF494: LEAX 0x1,cpu.state_.x
    cpu.state_.x += 0x1,cpu.state_.x;
    // 0xF496: CMPX 0x0x4600
    cpu.cpu.compare_x(0x4600);
    // 0xF499: BCS 0x0xF452
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF452;
    // 0xF49B: LDX 0x0x4500
    cpu.state_.x = 0x4500;
    // 0xF49E: INC ,cpu.state_.x
    // TODO: Convert INC ,cpu.state_.x
    // 0xF4A0: LDA ,cpu.state_.x+
    cpu.state_.a = ,cpu.state_.x+;
    // 0xF4A2: ANDA 0x0F
    cpu.state_.a &= 0x0F;
    // 0xF4A4: BEQ 0x0xF4B2
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF4B2;
    // 0xF4A6: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF4A8: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF4AB: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF4AE: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF4B0: BRA 0x0xF4B7
    cpu.state_.pc += 0xF4B7;
    // 0xF4B2: CMPX 0x0x4600
    cpu.cpu.compare_x(0x4600);
    // 0xF4B5: BCS 0x0xF49E
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF49E;
    // 0xF4B7: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF4B9: ANDB 0x01
    cpu.state_.b &= 0x01;
    // 0xF4BB: BNE 0x0xF4CE
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF4CE;
    // 0xF4BD: LDX 0x0x4C00
    cpu.state_.x = 0x4C00;
    // 0xF4C0: LDU 0x0x4500
    cpu.state_.u = 0x4500;
    // 0xF4C3: LDD ,cpu.state_.x++
    cpu.state_.d = ,cpu.state_.x++;
    // 0xF4C5: STD ,cpu.state_.u++
    cpu.cpu.write_memory(0, cpu.state_.u++,  cpu.state_.d);
    // 0xF4C7: CMPX 0x0x4D00
    cpu.cpu.compare_x(0x4D00);
    // 0xF4CA: BCS 0x0xF4C3
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF4C3;
    // 0xF4CC: BRA 0x0xF4EC
    cpu.state_.pc += 0xF4EC;
    // 0xF4CE: LDA 0xFF
    cpu.state_.a = 0xFF;
    // 0xF4D0: STA 0x0x4687
    cpu.cpu.write_memory(0x4687,  cpu.state_.a);
    // 0xF4D3: LDX 0x0x0100
    cpu.state_.x = 0x0100;
    // 0xF4D6: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF4D9: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF4DB: BNE 0x0xF4D6
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF4D6;
    // 0xF4DD: LDA 0x00
    cpu.state_.a = 0x00;
    // 0xF4DF: STA 0x0x4687
    cpu.cpu.write_memory(0x4687,  cpu.state_.a);
    // 0xF4E2: LDX 0x0xA000
    cpu.state_.x = 0xA000;
    // 0xF4E5: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF4E8: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF4EA: BNE 0x0xF4E5
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF4E5;
    // 0xF4EC: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF4EF: LDA 0x00
    cpu.state_.a = 0x00;
    // 0xF4F1: STA 0x0x4684
    cpu.cpu.write_memory(0x4684,  cpu.state_.a);
    // 0xF4F4: LDX 0x0xF342
    cpu.state_.x = 0xF342;
    // 0xF4F7: LDY 0x0x2000
    cpu.state_.y = 0x2000;
    // 0xF4FB: TFR cpu.state_.x,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.x;
    // 0xF4FD: 0xADCB 0x1,cpu.state_.x
    // TODO: Convert 0xADCB 0x1,cpu.state_.x
    // 0xF4FF: 0xADCA ,cpu.state_.x++
    // TODO: Convert 0xADCA ,cpu.state_.x++
    // 0xF501: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF504: LEAY -0x2,cpu.state_.y
    cpu.state_.y += -0x2,cpu.state_.y;
    // 0xF506: BNE 0x0xF4FD
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF4FD;
    // 0xF508: TFR cpu.state_.d,cpu.state_.x
    cpu.state_.cpu.state_.x = cpu.state_.cpu.state_.d;
    // 0xF50A: LDA 0xFF
    cpu.state_.a = 0xFF;
    // 0xF50C: STA 0x0x4684
    cpu.cpu.write_memory(0x4684,  cpu.state_.a);
    // 0xF50F: LDU 0x0xF344
    cpu.state_.u = 0xF344;
    // 0xF512: TFR cpu.state_.x,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.x;
    // 0xF514: LDY 0x0x2000
    cpu.state_.y = 0x2000;
    // 0xF518: LDX 0x0xF342
    cpu.state_.x = 0xF342;
    // 0xF51B: BRA 0x0xF528
    cpu.state_.pc += 0xF528;
    // 0xF51D: LDU 0x0xF344
    cpu.state_.u = 0xF344;
    // 0xF520: LDX ,cpu.state_.u++
    cpu.state_.x = ,cpu.state_.u++;
    // 0xF522: LDY 0x0x2000
    cpu.state_.y = 0x2000;
    // 0xF526: TFR cpu.state_.x,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.x;
    // 0xF528: 0xADCB 0x1,cpu.state_.x
    // TODO: Convert 0xADCB 0x1,cpu.state_.x
    // 0xF52A: 0xADCA ,cpu.state_.x++
    // TODO: Convert 0xADCA ,cpu.state_.x++
    // 0xF52C: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF52F: LEAY -0x2,cpu.state_.y
    cpu.state_.y += -0x2,cpu.state_.y;
    // 0xF531: BNE 0x0xF528
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF528;
    // 0xF533: STD 0x0x5593,cpu.state_.u
    cpu.cpu.write_memory(0x0x5593, cpu.state_.u, cpu.state_.d);
    // 0xF537: BEQ 0x0xF543
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF543;
    // 0xF539: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF53B: ORA 0x0x1E,cpu.state_.u
    cpu.state_.a |= 0x0x1E,cpu.state_.u;
    // 0xF53E: ORB 0x1F,cpu.state_.u
    cpu.state_.b |= 0x1F,cpu.state_.u;
    // 0xF541: TFR cpu.state_.d,cpu.state_.sp
    cpu.state_.cpu.state_.sp = cpu.state_.cpu.state_.d;
    // 0xF543: CMPU 0x0xF34C
    // TODO: Convert CMPU 0x0xF34C
    // 0xF547: BCS 0x0xF520
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF520;
    // 0xF549: CMPU 0x0xF34E
    // TODO: Convert CMPU 0x0xF34E
    // 0xF54D: BCC 0x0xF557
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF557;
    // 0xF54F: LDX ,cpu.state_.u++
    cpu.state_.x = ,cpu.state_.u++;
    // 0xF551: LDY 0x0x1000
    cpu.state_.y = 0x1000;
    // 0xF555: BRA 0x0xF526
    cpu.state_.pc += 0xF526;
    // 0xF557: LDA 0xFF
    cpu.state_.a = 0xFF;
    // 0xF559: STA 0x0x4686
    cpu.cpu.write_memory(0x4686,  cpu.state_.a);
    // 0xF55C: STA 0x0x4683
    cpu.cpu.write_memory(0x4683,  cpu.state_.a);
    // 0xF55F: STA 0x0x4682
    cpu.cpu.write_memory(0x4682,  cpu.state_.a);
    // 0xF562: CLR <0xD1
    cpu.cpu.write_memory(0xD1,  0);
    // 0xF564: LDA 0x0x4320
    cpu.state_.a = 0x4320;
    // 0xF567: ANDA 0x04
    cpu.state_.a &= 0x04;
    // 0xF569: BNE 0x0xF56E
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF56E;
    // 0xF56B: JMP 0x0xFD07
    cpu.state_.pc = 0xFD07;
    // 0xF56E: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF571: STS <0xD2
    cpu.cpu.write_memory(0xD2,  cpu.state_.sp);
    // 0xF574: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF576: ANDB 0x01
    cpu.state_.b &= 0x01;
    // 0xF578: BNE 0x0xF5ED
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF5ED;
    // 0xF57A: LDY 0x0x0000
    cpu.state_.y = 0x0000;
    // 0xF57E: LDD 0x0x6000
    cpu.state_.d = 0x6000;
    // 0xF581: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF583: LDD 0x0xBFAE
    cpu.state_.d = 0xBFAE;
    // 0xF586: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF588: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF58B: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF58D: LDA 0x48
    cpu.state_.a = 0x48;
    // 0xF58F: TFR cpu.state_.a,cpu.state_.dp
    cpu.state_.cpu.state_.dp = cpu.state_.cpu.state_.a;
    // 0xF591: STS <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.sp);
    // 0xF594: LDS 0x0x4FFF
    cpu.state_.sp = 0x4FFF;
    // 0xF598: LDB 0xD3
    cpu.state_.b = 0xD3;
    // 0xF59A: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF59D: LDB 0xB0
    cpu.state_.b = 0xB0;
    // 0xF59F: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF5A2: LDB 0xB2
    cpu.state_.b = 0xB2;
    // 0xF5A4: STB <0xCE
    cpu.cpu.write_memory(0xCE,  cpu.state_.b);
    // 0xF5A6: LDD <0xcpu.state_.cc
    cpu.state_.d = 0xcpu.state_.cc;
    // 0xF5A8: BNE 0x0xF5B1
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF5B1;
    // 0xF5AA: LDB 0xB1
    cpu.state_.b = 0xB1;
    // 0xF5AC: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF5AF: BRA 0x0xF5EB
    cpu.state_.pc += 0xF5EB;
    // 0xF5B3: STD <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.d);
    // 0xF5B5: BCC 0x0xF5E5
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF5E5;
    // 0xF5B7: LDB <0xCE
    cpu.state_.b = 0xCE;
    // 0xF5B9: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF5BC: LDB <0xCE
    cpu.state_.b = 0xCE;
    // 0xF5BE: SUBB 0xBC
    cpu.state_.b -= 0xBC;
    // 0xF5C0: BCS 0x0xF5E5
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF5E5;
    // 0xF5C3: LDX 0x0xF743
    cpu.state_.x = 0xF743;
    // 0xF5C7: LDU ,cpu.state_.x
    cpu.state_.u = ,cpu.state_.x;
    // 0xF5C9: STU ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.u);
    // 0xF5CB: LDU 0x0x0120
    cpu.state_.u = 0x0120;
    // 0xF5CE: STU ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.u);
    // 0xF5D0: LDX 0x0x48D7
    cpu.state_.x = 0x48D7;
    // 0xF5D4: LDA ,cpu.state_.x+
    cpu.state_.a = ,cpu.state_.x+;
    // 0xF5D7: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF5DA: LDA ,cpu.state_.x
    cpu.state_.a = ,cpu.state_.x;
    // 0xF5DD: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF5E0: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF5E3: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF5E5: INC <0xCE
    // TODO: Convert INC <0xCE
    // 0xF5E7: LDD <0xcpu.state_.cc
    cpu.state_.d = 0xcpu.state_.cc;
    // 0xF5E9: BNE 0x0xF5B1
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF5B1;
    // 0xF5EB: BRA 0x0xF643
    cpu.state_.pc += 0xF643;
    // 0xF5ED: LDX 0x0x0008
    cpu.state_.x = 0x0008;
    // 0xF5F0: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF5F3: BCC 0x0xF5F9
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF5F9;
    // 0xF5F5: LDA 0x29
    cpu.state_.a = 0x29;
    // 0xF5F7: BRA 0x0xF5FB
    cpu.state_.pc += 0xF5FB;
    // 0xF5F9: LDA 0x3B
    cpu.state_.a = 0x3B;
    // 0xF5FB: STA 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.a);
    // 0xF5FE: LDU 0x0x0000
    cpu.state_.u = 0x0000;
    // 0xF601: STB 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.b);
    // 0xF604: LEAU 0x1,cpu.state_.u
    cpu.state_.u += 0x1,cpu.state_.u;
    // 0xF606: CMPU 0x0xA000
    // TODO: Convert CMPU 0x0xA000
    // 0xF60A: BCS 0x0xF601
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF601;
    // 0xF60C: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF60E: BNE 0x0xF5F2
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF5F2;
    // 0xF610: LDX 0x0x0008
    cpu.state_.x = 0x0008;
    // 0xF613: TFR cpu.state_.sp,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.sp;
    // 0xF616: BCC 0x0xF61C
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF61C;
    // 0xF618: LDB 0x29
    cpu.state_.b = 0x29;
    // 0xF61A: BRA 0xF60x1E
    cpu.state_.pc += 0xF60x1E;
    // 0xF61C: LDB 0x3B
    cpu.state_.b = 0x3B;
    // F60x1E: STB 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.b);
    // 0xF621: LDU 0x0x0000
    cpu.state_.u = 0x0000;
    // 0xF624: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF627: LEAU 0x1,cpu.state_.u
    cpu.state_.u += 0x1,cpu.state_.u;
    // 0xF629: CMPU 0x0xA000
    // TODO: Convert CMPU 0x0xA000
    // 0xF62D: BCS 0x0xF624
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF624;
    // 0xF62F: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF631: BNE 0x0xF615
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF615;
    // 0xF633: LDU 0x0x0000
    cpu.state_.u = 0x0000;
    // 0xF636: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF639: LEAU 0x1,cpu.state_.u
    cpu.state_.u += 0x1,cpu.state_.u;
    // 0xF63B: CMPU 0x0xFF00
    // TODO: Convert CMPU 0x0xFF00
    // 0xF63F: BCS 0x0xF636
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF636;
    // 0xF641: BRA 0x0xF5ED
    cpu.state_.pc += 0xF5ED;
    // 0xF643: LDD 0x0x2020
    cpu.state_.d = 0x2020;
    // 0xF646: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF648: LDU 0x0xF723
    cpu.state_.u = 0xF723;
    // 0xF64B: CLR <0xC0
    cpu.cpu.write_memory(0xC0,  0);
    // 0xF64D: LDA 0x03
    cpu.state_.a = 0x03;
    // 0xF64F: STA <0xC5
    cpu.cpu.write_memory(0xC5,  cpu.state_.a);
    // 0xF651: STA <0xC6
    cpu.cpu.write_memory(0xC6,  cpu.state_.a);
    // 0xF653: STA <0xC7
    cpu.cpu.write_memory(0xC7,  cpu.state_.a);
    // 0xF655: STA <0xD6
    cpu.cpu.write_memory(0xD6,  cpu.state_.a);
    // 0xF657: LDX 0x0xF34E
    cpu.state_.x = 0xF34E;
    // 0xF65A: STX <0xD4
    cpu.cpu.write_memory(0xD4,  cpu.state_.x);
    // 0xF65C: LDD 0x0x0001
    cpu.state_.d = 0x0001;
    // 0xF65F: LDX 0x0x0000
    cpu.state_.x = 0x0000;
    // 0xF662: STA 0x0x4640
    cpu.cpu.write_memory(0x4640,  cpu.state_.a);
    // 0xF665: LEAX cpu.state_.d,cpu.state_.x
    cpu.state_.x += cpu.state_.d,cpu.state_.x;
    // 0xF667: CMPX 0x0x0708
    cpu.cpu.compare_x(0x0708);
    // 0xF66A: BCS 0x0xF662
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF662;
    // 0xF66C: STA 0x0x4620
    cpu.cpu.write_memory(0x4620,  cpu.state_.a);
    // 0xF66F: LDA 0x0x4320
    cpu.state_.a = 0x4320;
    // 0xF672: ANDA 0x04
    cpu.state_.a &= 0x04;
    // 0xF674: BNE 0x0xF679
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF679;
    // 0xF676: JMP 0x0xF720
    cpu.state_.pc = 0xF720;
    // 0xF679: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF67C: ANDA 0x04
    cpu.state_.a &= 0x04;
    // 0xF67E: BNE 0x0xF69F
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF69F;
    // 0xF680: LDA <0xC5
    cpu.state_.a = 0xC5;
    // 0xF682: BEQ 0x0xF69D
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF69D;
    // 0xF685: BNE 0x0xF69D
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF69D;
    // 0xF687: LEAU 0x2,cpu.state_.u
    cpu.state_.u += 0x2,cpu.state_.u;
    // 0xF689: CMPU 0x0xF735
    // TODO: Convert CMPU 0x0xF735
    // 0xF68D: BCS 0x0xF692
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF692;
    // 0xF68F: LDU 0x0xF725
    cpu.state_.u = 0xF725;
    // 0xF692: LDD 0x0x0000
    cpu.state_.d = 0x0000;
    // 0xF695: STD <0xC2
    cpu.cpu.write_memory(0xC2,  cpu.state_.d);
    // 0xF697: STA <0xC4
    cpu.cpu.write_memory(0xC4,  cpu.state_.a);
    // 0xF699: STA <0xC0
    cpu.cpu.write_memory(0xC0,  cpu.state_.a);
    // 0xF69B: LDA 0x80
    cpu.state_.a = 0x80;
    // 0xF69D: BRA 0x0xF6A1
    cpu.state_.pc += 0xF6A1;
    // 0xF69F: LDA 0x03
    cpu.state_.a = 0x03;
    // 0xF6A1: STA <0xC5
    cpu.cpu.write_memory(0xC5,  cpu.state_.a);
    // 0xF6A3: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF6A7: ANDA 0xC0
    cpu.state_.a &= 0xC0;
    // 0xF6A9: BEQ 0x0xF6C7
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6C7;
    // 0xF6AB: LDA <0xC6
    cpu.state_.a = 0xC6;
    // 0xF6AD: BEQ 0x0xF6C5
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6C5;
    // 0xF6B0: BNE 0x0xF6C5
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6C5;
    // 0xF6B2: LDB <0xC0
    cpu.state_.b = 0xC0;
    // 0xF6B4: 0xADDB 0x02
    cpu.state_.b += 0x02;
    // 0xF6B6: CMPB 0x0E
    cpu.cpu.compare_b(0E);
    // 0xF6B8: BCS 0x0xF6BB
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF6BB;
    // 0xF6BB: STB <0xC0
    cpu.cpu.write_memory(0xC0,  cpu.state_.b);
    // 0xF6BD: CMPB 0x04
    cpu.cpu.compare_b(04);
    // 0xF6BF: BNE 0x0xF6C3
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6C3;
    // 0xF6C1: CLR <0xC1
    cpu.cpu.write_memory(0xC1,  0);
    // 0xF6C3: LDA 0x80
    cpu.state_.a = 0x80;
    // 0xF6C5: BRA 0x0xF6C9
    cpu.state_.pc += 0xF6C9;
    // 0xF6C7: LDA 0x03
    cpu.state_.a = 0x03;
    // 0xF6C9: STA <0xC6
    cpu.cpu.write_memory(0xC6,  cpu.state_.a);
    // 0xF6CB: CMPU 0x0xF733
    // TODO: Convert CMPU 0x0xF733
    // 0xF6CF: BNE 0x0xF6F0
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6F0;
    // 0xF6D1: LDA 0x0x4320
    cpu.state_.a = 0x4320;
    // 0xF6D5: ANDA 0x30
    cpu.state_.a &= 0x30;
    // 0xF6D7: BEQ 0x0xF6EA
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6EA;
    // 0xF6D9: LDA <0xC7
    cpu.state_.a = 0xC7;
    // 0xF6DB: BEQ 0x0xF6E8
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6E8;
    // 0xF6DE: BNE 0x0xF6E8
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF6E8;
    // 0xF6E0: LDB <0xC1
    cpu.state_.b = 0xC1;
    // 0xF6E2: EORB 0x01
    cpu.state_.b ^= 0x01;
    // 0xF6E4: STB <0xC1
    cpu.cpu.write_memory(0xC1,  cpu.state_.b);
    // 0xF6E6: LDA 0x80
    cpu.state_.a = 0x80;
    // 0xF6E8: BRA 0x0xF6EC
    cpu.state_.pc += 0xF6EC;
    // 0xF6EA: LDA 0x03
    cpu.state_.a = 0x03;
    // 0xF6EC: STA <0xC7
    cpu.cpu.write_memory(0xC7,  cpu.state_.a);
    // 0xF6EE: BRA 0x0xF6F2
    cpu.state_.pc += 0xF6F2;
    // 0xF6F0: CLR <0xC1
    cpu.cpu.write_memory(0xC1,  0);
    // 0xF6F2: LDY 0x0x0000
    cpu.state_.y = 0x0000;
    // 0xF6F6: LDB <0xC0
    cpu.state_.b = 0xC0;
    // 0xF6F8: LDX 0x0xF735
    cpu.state_.x = 0xF735;
    // 0xF6FB: LDD cpu.state_.b,cpu.state_.x
    cpu.state_.d = cpu.state_.b,cpu.state_.x;
    // 0xF6FD: CMPD 0x0x6780
    // TODO: Convert CMPD 0x0x6780
    // 0xF701: BNE 0x0xF709
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF709;
    // 0xF703: TST <0xC1
    // TODO: Convert TST <0xC1
    // 0xF705: BEQ 0x0xF709
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF709;
    // 0xF707: LDB 0x20
    cpu.state_.b = 0x20;
    // 0xF709: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF70B: JMP [,cpu.state_.u]
    cpu.state_.pc = [,cpu.state_.u];
    // 0xF70D: LDD 0x0x2020
    cpu.state_.d = 0x2020;
    // 0xF710: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF712: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF714: STA 0x0x4600
    cpu.cpu.write_memory(0x4600,  cpu.state_.a);
    // 0xF717: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF71A: ANDA 0x10
    cpu.state_.a &= 0x10;
    // 0xF71C: LBEQ 0x0xF65C
    // TODO: Convert LBEQ 0x0xF65C
    // 0xF720: JMP 0x0xF720
    cpu.state_.pc = 0xF720;
    // 0xF723: STB 0x0x4FF7
    cpu.cpu.write_memory(0x4FF7,  cpu.state_.b);
    // 0xF726: CLR 0x0xF958
    cpu.cpu.write_memory(0xF958,  0);
    // 0xF729: EORB 0x0x8CF8
    cpu.state_.b ^= 0x8CF8;
    // 0xF72C: ANDA 0xF8
    cpu.state_.a &= 0xF8;
    // 0xF72E: ANDA <0xF8
    cpu.state_.a &= 0xF8;
    // 0xF730: ORA [-0x34,cpu.state_.sp]
    cpu.state_.a |= [-0x34,cpu.state_.sp];
    // 0xF733: 0xADCB 0x0x3F64
    // TODO: Convert 0xADCB 0x0x3F64
    // 0xF736: SUBA 0x62
    cpu.state_.a -= 0x62;
    // 0xF738: SUBA 0x61
    cpu.state_.a -= 0x61;
    // 0xF73A: SUBA 0x65
    cpu.state_.a -= 0x65;
    // 0xF73C: SUBA 0x67
    cpu.state_.a -= 0x67;
    // 0xF73E: SUBA 0x66
    cpu.state_.a -= 0x66;
    // 0xF740: SUBA 0x63
    cpu.state_.a -= 0x63;
    // 0xF742: SUBA 0x1F
    cpu.state_.a -= 0x1F;
    // 0xF744: XANDCC 0x1F
    // TODO: Convert XANDCC 0x1F
    // 0xF746: ROR <0x0x1E
    // TODO: Convert ROR <0x0x1E
    // 0xF748: ANDB <0x0x1E
    cpu.state_.b &= 0x0x1E;
    // 0xF74A: SBCA -0x2,cpu.state_.x
    // TODO: Convert SBCA -0x2,cpu.state_.x
    // 0xF74C: NEG 0x0x1F6A
    // TODO: Convert NEG 0x0x1F6A
    // 0xF74F: DEC <0xD6
    // TODO: Convert DEC <0xD6
    // 0xF751: BPL 0x0xF77C
    if (!cpu.cpu.negative_flag()) cpu.state_.pc += 0xF77C;
    // 0xF753: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF755: STA <0xD6
    cpu.cpu.write_memory(0xD6,  cpu.state_.a);
    // 0xF757: LDX <0xD4
    cpu.state_.x = 0xD4;
    // 0xF759: LDD <0xD2
    cpu.state_.d = 0xD2;
    // 0xF75B: ANDA ,cpu.state_.x
    cpu.state_.a &= ,cpu.state_.x;
    // 0xF75D: BNE 0x0xF767
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF767;
    // 0xF75F: ANDB 0x1,cpu.state_.x
    cpu.state_.b &= 0x1,cpu.state_.x;
    // 0xF761: BNE 0x0xF767
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF767;
    // 0xF763: LDA 0x3B
    cpu.state_.a = 0x3B;
    // 0xF765: BRA 0x0xF769
    cpu.state_.pc += 0xF769;
    // 0xF767: LDA 0x29
    cpu.state_.a = 0x29;
    // 0xF769: STA 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.a);
    // 0xF76C: LEAX 0x2,cpu.state_.x
    cpu.state_.x += 0x2,cpu.state_.x;
    // 0xF76E: CMPX 0x0xF36E
    cpu.cpu.compare_x(0xF36E);
    // 0xF771: BCS 0x0xF77A
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF77A;
    // 0xF773: LDA 0x20
    cpu.state_.a = 0x20;
    // 0xF775: STA <0xD6
    cpu.cpu.write_memory(0xD6,  cpu.state_.a);
    // 0xF777: LDX 0x0xF34E
    cpu.state_.x = 0xF34E;
    // 0xF77A: STX <0xD4
    cpu.cpu.write_memory(0xD4,  cpu.state_.x);
    // 0xF77C: JMP 0x0xF714
    cpu.state_.pc = 0xF714;
    // 0xF77F: STA 0x0x46C0
    cpu.cpu.write_memory(0x46C0,  cpu.state_.a);
    // 0xF782: STA 0x0x46C0
    cpu.cpu.write_memory(0x46C0,  cpu.state_.a);
    // 0xF785: LDD 0x0xBFAE
    cpu.state_.d = 0xBFAE;
    // 0xF788: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF78A: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF78D: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF78F: LDS 0x0x4FFF
    cpu.state_.sp = 0x4FFF;
    // 0xF793: LDB 0x9E
    cpu.state_.b = 0x9E;
    // 0xF795: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF798: LDB 0xD3
    cpu.state_.b = 0xD3;
    // 0xF79A: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF79D: LDB 0x9F
    cpu.state_.b = 0x9F;
    // 0xF79F: STB <0xCE
    cpu.cpu.write_memory(0xCE,  cpu.state_.b);
    // 0xF7A1: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF7A4: LDB 0x0x4320
    cpu.state_.b = 0x4320;
    // 0xF7A7: ORB 0xC7
    cpu.state_.b |= 0xC7;
    // 0xF7A9: STD <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.d);
    // 0xF7AD: STD <0xcpu.state_.cc
    cpu.cpu.write_memory(0xcpu.state_.cc,  cpu.state_.d);
    // 0xF7AF: BCS 0x0xF7B6
    if (cpu.cpu.carry_flag()) cpu.state_.pc += 0xF7B6;
    // 0xF7B1: LDB <0xCE
    cpu.state_.b = 0xCE;
    // 0xF7B3: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF7B6: INC <0xCE
    // TODO: Convert INC <0xCE
    // 0xF7B8: LDD <0xcpu.state_.cc
    cpu.state_.d = 0xcpu.state_.cc;
    // 0xF7BA: BNE 0x0xF7AB
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF7AB;
    // 0xF7BC: LDD <0xC8
    cpu.state_.d = 0xC8;
    // 0xF7BE: STD <0xCA
    cpu.cpu.write_memory(0xCA,  cpu.state_.d);
    // 0xF7C0: LDA 0x0x4300
    cpu.state_.a = 0x4300;
    // 0xF7C3: ANDA 0xCF
    cpu.state_.a &= 0xCF;
    // 0xF7C5: LDB 0x0x4320
    cpu.state_.b = 0x4320;
    // 0xF7C8: ANDB 0x3A
    cpu.state_.b &= 0x3A;
    // 0xF7CA: STD <0xC8
    cpu.cpu.write_memory(0xC8,  cpu.state_.d);
    // 0xF7CC: EORA <0xCA
    cpu.state_.a ^= 0xCA;
    // 0xF7CE: ANDA <0xCA
    cpu.state_.a &= 0xCA;
    // 0xF7D0: EORB <0xCB
    cpu.state_.b ^= 0xCB;
    // 0xF7D2: ANDB <0xCB
    cpu.state_.b &= 0xCB;
    // 0xF7D4: CMPD 0x0x0000
    // TODO: Convert CMPD 0x0x0000
    // 0xF7D8: BEQ 0x0xF7DF
    if (cpu.cpu.zero_flag()) cpu.state_.pc += 0xF7DF;
    // 0xF7DA: LDA 0x3B
    cpu.state_.a = 0x3B;
    // 0xF7DC: STA 0x0x4400
    cpu.cpu.write_memory(0x4400,  cpu.state_.a);
    // 0xF7DF: LDD 0x0x0x1EA2
    cpu.state_.d = 0x0x1EA2;
    // 0xF7E2: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7E4: LDD 0x0x1F74
    cpu.state_.d = 0x1F74;
    // 0xF7E7: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7E9: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF7EB: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF7EE: LDD 0x300x1E
    cpu.state_.d = 0x300x1E;
    // 0xF7F1: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7F3: LDD 0x0x3002
    cpu.state_.d = 0x3002;
    // 0xF7F6: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF7F8: LDA 0x0x4340
    cpu.state_.a = 0x4340;
    // 0xF7FB: JSR 0x0xF86C
    cpu.cpu.call_function(0xF86C);
    // 0xF7FE: LDD 0x0x0x1E70
    cpu.state_.d = 0x0x1E70;
    // 0xF801: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF803: LDD 0x0x1F5C
    cpu.state_.d = 0x1F5C;
    // 0xF806: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF808: LDA 0x10
    cpu.state_.a = 0x10;
    // 0xF80A: JSR 0x0xE790
    cpu.cpu.call_function(0xE790);
    // 0xF80D: LDD 0x0x3020
    cpu.state_.d = 0x3020;
    // 0xF810: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF812: LDD 0x0x3022
    cpu.state_.d = 0x3022;
    // 0xF815: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF817: LDD 0x0x3002
    cpu.state_.d = 0x3002;
    // 0xF81A: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF81C: LDA 0x0x4360
    cpu.state_.a = 0x4360;
    // 0xF81F: JSR 0x0xF86C
    cpu.cpu.call_function(0xF86C);
    // 0xF822: LDB 0xAF
    cpu.state_.b = 0xAF;
    // 0xF824: JSR 0x0xE7C7
    cpu.cpu.call_function(0xE7C7);
    // 0xF827: LDD 0x0xBFD5
    cpu.state_.d = 0xBFD5;
    // 0xF82A: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF82C: LDD 0x0x0000
    cpu.state_.d = 0x0000;
    // 0xF82F: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF831: LDD 0x0x0140
    cpu.state_.d = 0x0140;
    // 0xF834: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF836: LDB 0x0x4380
    cpu.state_.b = 0x4380;
    // 0xF839: SUBB 0x80
    cpu.state_.b -= 0x80;
    // 0xF83C: TFR cpu.state_.d,cpu.state_.u
    cpu.state_.cpu.state_.u = cpu.state_.cpu.state_.d;
    // 0xF840: LEAU cpu.state_.d,cpu.state_.u
    cpu.state_.u += cpu.state_.d,cpu.state_.u;
    // 0xF842: TFR cpu.state_.u,cpu.state_.d
    cpu.state_.cpu.state_.d = cpu.state_.cpu.state_.u;
    // 0xF844: ANDA 0x1F
    cpu.state_.a &= 0x1F;
    // 0xF846: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF848: STA 0x0x46C1
    cpu.cpu.write_memory(0x46C1,  cpu.state_.a);
    // 0xF84B: STA 0x0x46C1
    cpu.cpu.write_memory(0x46C1,  cpu.state_.a);
    // 0xF84E: LDX 0x0x0014
    cpu.state_.x = 0x0014;
    // 0xF851: LEAX -0x1,cpu.state_.x
    cpu.state_.x += -0x1,cpu.state_.x;
    // 0xF853: BNE 0x0xF851
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xF851;
    // 0xF855: LDB 0x0x4380
    cpu.state_.b = 0x4380;
    // 0xF858: SUBB 0x80
    cpu.state_.b -= 0x80;
    // 0xF85B: ANDA 0x1F
    cpu.state_.a &= 0x1F;
    // 0xF85D: ORA 0xE0
    cpu.state_.a |= 0xE0;
    // 0xF85F: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF861: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF864: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
    // 0xF866: LDU 0x0xF725
    cpu.state_.u = 0xF725;
    // 0xF869: JMP 0x0xF70D
    cpu.state_.pc = 0xF70D;
    // 0xF86C: LDB 0x07
    cpu.state_.b = 0x07;
    // 0xF86F: BCC 0x0xF876
    if (!cpu.cpu.carry_flag()) cpu.state_.pc += 0xF876;
    // 0xF871: LDX 0x0x3022
    cpu.state_.x = 0x3022;
    // 0xF874: BRA 0x0xF879
    cpu.state_.pc += 0xF879;
    // 0xF876: LDX 0x0x3032
    cpu.state_.x = 0x3032;
    // 0xF879: STX ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.x);
    // 0xF87C: BPL 0x0xF86E
    if (!cpu.cpu.negative_flag()) cpu.state_.pc += 0xF86E;
    // 0xF87E: LDD 0x0x8040
    cpu.state_.d = 0x8040;
    // 0xF881: STD ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.d);
}

} // namespace StarWars
