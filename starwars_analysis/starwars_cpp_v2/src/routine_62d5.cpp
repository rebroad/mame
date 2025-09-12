#include "cpu_6809.h"

namespace StarWars {

void routine_62d5_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_62d5.md
    // Address: 0x62D5

    // 62D5: LDA #$40
    cpu.state_.a = 0x40;

    // 62D7: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // 62D9: BLS $000E
    // TODO: Convert BLS $000E

    // 62DB: SUBA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E1: ADDA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E4: LDD #$0000
    cpu.state_.d = 0x0000;

    // 62E7: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 62EA: LDD #$0200
    cpu.state_.d = 0x0200;

    // 62ED: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 62F0: LDA #$0F
    cpu.state_.a = 0x0F;

    // 62F2: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.state_.a);

    // 62F5: LDA #$1F
    cpu.state_.a = 0x1F;

    // 62F7: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.state_.a);

    // 62FA: LDD #$6480
    cpu.state_.d = 0x6480;

    // 62FD: STD $4B10
    cpu.write_memory(0x4B10, cpu.state_.d);

    // 6300: JSR $D91A
    cpu.call_function(0xD91A);

    // 6303: INC <$41
    // TODO: Convert INC <$41

    // 6306: JSR $6112
    cpu.call_function(0x6112);

    // 6309: JSR $761D
    cpu.call_function(0x761D);

    // 630C: JSR $63D5
    cpu.call_function(0x63D5);

    // 630F: JSR $6368
    cpu.call_function(0x6368);

    // 6312: JSR $CD80
    cpu.call_function(0xCD80);

    // 6315: JSR $612F
    cpu.call_function(0x612F);

    // 6318: JSR $6DB6
    cpu.call_function(0x6DB6);

    // 631B: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 631E: BPL $004D
    if (!cpu.negative_flag()) cpu.state_.pc += 0x004D;

    // 6320: INC <$41
    // TODO: Convert INC <$41

    // 6322: JSR $622D
    cpu.call_function(0x622D);

    // 6326: LDD #$03C0
    cpu.state_.d = 0x03C0;

    // 6329: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 632C: LDD #$0200
    cpu.state_.d = 0x0200;

    // 632F: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6332: LDA #$23
    cpu.state_.a = 0x23;

    // 6334: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.state_.a);

    // 6337: LDA #$2C
    cpu.state_.a = 0x2C;

    // 6339: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.state_.a);

    // 633C: LDD #$6580
    cpu.state_.d = 0x6580;

    // 633F: STD $4B10
    cpu.write_memory(0x4B10, cpu.state_.d);

    // 6342: JSR $D91A
    cpu.call_function(0xD91A);

    // 6345: INC <$41
    // TODO: Convert INC <$41

    // 6348: JSR $6112
    cpu.call_function(0x6112);

    // 634B: JSR $761D
    cpu.call_function(0x761D);

    // 634E: JSR $63D5
    cpu.call_function(0x63D5);

    // 6351: JSR $6368
    cpu.call_function(0x6368);

    // 6354: JSR $CD80
    cpu.call_function(0xCD80);

    // 6357: JSR $612F
    cpu.call_function(0x612F);

    // 635A: JSR $6DC0
    cpu.call_function(0x6DC0);

    // 635D: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 6360: BPL $008F
    if (!cpu.negative_flag()) cpu.state_.pc += 0x008F;

    // 6362: INC <$41
    // TODO: Convert INC <$41

    // 6364: JSR $622D
    cpu.call_function(0x622D);

    // 6368: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 636B: SUBD #$0001
    cpu.state_.d -= 0x0001;

    // 636E: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6371: ANDB #$07
    cpu.state_.b &= 0x07;

    // 6373: BNE $00C8
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00C8;

    // 6375: LDA $4ADB
    cpu.state_.a = cpu.read_memory(0x4ADB);

    // 6378: BMI $00A8
    if (cpu.negative_flag()) cpu.state_.pc += 0x00A8;

    // 637A: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 637D: LDA $4ADB
    cpu.state_.a = cpu.read_memory(0x4ADB);

    // 6380: CMPA #$12
    cpu.compare_a(0x12);

    // 6382: BNE $00B9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00B9;

    // 6384: LDA $4593
    cpu.state_.a = cpu.read_memory(0x4593);

    // 6387: ANDA #$03
    cpu.state_.a &= 0x03;

    // 6389: ADDA #$1F
    cpu.state_.a += 0x1F;

    // 638B: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 638E: LDA $4ADB
    cpu.state_.a = cpu.read_memory(0x4ADB);

    // 6391: ADDA #$01
    cpu.state_.a += 0x01;

    // 6393: CMPA $4ADC
    cpu.compare_a(cpu.read_memory(0x4ADC));

    // 6396: BCS $00C5
    if (cpu.carry_flag()) cpu.state_.pc += 0x00C5;

    // 6398: LDA #$80
    cpu.state_.a = 0x80;

    // 639A: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.state_.a);

    // 639D: LDD $4B0C
    cpu.state_.d = cpu.read_memory_word(0x4B0C);

    // 63A0: SUBD #$0008
    cpu.state_.d -= 0x0008;

    // 63A3: BPL $00D3
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00D3;

    // 63A5: LDD #$0000
    cpu.state_.d = 0x0000;

    // 63A8: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 63AB: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 63AE: CMPD #$00C0
    // TODO: Convert CMPD #$00C0

    // 63B2: BCC $00F1
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00F1;

    // 63B4: LDB $4B11
    cpu.state_.b = cpu.read_memory(0x4B11);

    // 63B7: SUBB #$01
    cpu.state_.b -= 0x01;

    // 63B9: CMPB #$10
    cpu.compare_b(0x10);

    // 63BB: BCC $00EE
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00EE;

    // 63BD: LDD #$0000
    cpu.state_.d = 0x0000;

    // 63C0: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 63C3: STB $4B11
    cpu.write_memory(0x4B11, cpu.state_.b);

    // 63C6: LDD $4B0C
    cpu.state_.d = cpu.read_memory_word(0x4B0C);

    // 63C9: STD $48AF
    cpu.write_memory(0x48AF, cpu.state_.d);

    // 63CC: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // 63CF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 63D1: JSR $D942
    cpu.call_function(0xD942);

    // 63D5: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 63D8: BNE $0116
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0116;

    // 63DA: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 63DC: ANDA #$10
    cpu.state_.a &= 0x10;

    // 63DE: BNE $010F
    if (!cpu.zero_flag()) cpu.state_.pc += 0x010F;

    // 63E0: LDB #$06
    cpu.state_.b = 0x06;

    // 63E2: BRA $0111
    cpu.state_.pc += 0x0111;

    // 63E4: LDB #$05
    cpu.state_.b = 0x05;

    // 63E6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63E9: BRA $011B
    cpu.state_.pc += 0x011B;

    // 63EB: LDB #$0B
    cpu.state_.b = 0x0B;

    // 63ED: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63F0: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 63F3: BNE $013B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x013B;

    // 63F5: LDA $4812
    cpu.state_.a = cpu.read_memory(0x4812);

    // 63F8: BEQ $012F
    if (cpu.zero_flag()) cpu.state_.pc += 0x012F;

    // 63FA: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 63FC: ANDA #$10
    cpu.state_.a &= 0x10;

    // 63FE: BEQ $012F
    if (cpu.zero_flag()) cpu.state_.pc += 0x012F;

    // 6400: BRA $013B
    cpu.state_.pc += 0x013B;

    // 6402: BRA $0139
    cpu.state_.pc += 0x0139;

    // 6404: LDB $4591
    cpu.state_.b = cpu.read_memory(0x4591);

    // 6407: ANDB #$03
    cpu.state_.b &= 0x03;

    // 6409: ADDB #$07
    cpu.state_.b += 0x07;

    // 640B: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 640E: BRA $0183
    cpu.state_.pc += 0x0183;

    // 6410: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 6413: ADDA $4812
    cpu.state_.a += 0x4812;

    // 6416: CMPA #$01
    cpu.compare_a(0x01);

    // 6418: BNE $0149
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0149;

    // 641A: LDB #$0D
    cpu.state_.b = 0x0D;

    // 641C: BRA $014B
    cpu.state_.pc += 0x014B;

    // 641E: LDB #$0C
    cpu.state_.b = 0x0C;

    // 6420: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 6423: LDD #$01B0
    cpu.state_.d = 0x01B0;

    // 6426: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // 6428: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 642A: LDD #$FF80
    cpu.state_.d = 0xFF80;

    // 642D: TST $4812
    // TODO: Convert TST $4812

    // 6430: BEQ $0160
    if (cpu.zero_flag()) cpu.state_.pc += 0x0160;

    // 6432: SUBD #$0018
    cpu.state_.d -= 0x0018;

    // 6435: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // 6437: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 6439: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 643C: CMPA #$0A
    cpu.compare_a(0x0A);

    // 643E: BCS $016D
    if (cpu.carry_flag()) cpu.state_.pc += 0x016D;

    // 6440: ADDA #$06
    cpu.state_.a += 0x06;

    // 6442: LDB #$02
    cpu.state_.b = 0x02;

    // 6444: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // 6446: JSR $E790
    cpu.call_function(0xE790);

    // 6449: LDA $4812
    cpu.state_.a = cpu.read_memory(0x4812);

    // 644C: BEQ $017E
    if (cpu.zero_flag()) cpu.state_.pc += 0x017E;

    // 644E: LDD #$B8F3
    cpu.state_.d = 0xB8F3;

    // 6451: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 6453: LDD #$8040
    cpu.state_.d = 0x8040;

    // 6456: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 6459: LDD #$0000
    cpu.state_.d = 0x0000;

    // 645C: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 645F: STD $48AF
    cpu.write_memory(0x48AF, cpu.state_.d);

    // 6462: LDD #$0100
    cpu.state_.d = 0x0100;

    // 6465: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6468: LDD #$6180
    cpu.state_.d = 0x6180;

    // 646B: STD $4B10
    cpu.write_memory(0x4B10, cpu.state_.d);

    // 646E: JSR $D91A
    cpu.call_function(0xD91A);

    // 6471: JSR $61B5
    cpu.call_function(0x61B5);

    // 6474: JSR $615A
    cpu.call_function(0x615A);

    // 6477: LDU #$5038
    cpu.state_.u = 0x5038;

    // 647A: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 647D: JSR $CC38
    cpu.call_function(0xCC38);

    // 6480: INC <$41
    // TODO: Convert INC <$41

    // 6483: JSR $6112
    cpu.call_function(0x6112);

    // 6486: JSR $64CD
    cpu.call_function(0x64CD);

    // 6489: JSR $CD80
    cpu.call_function(0xCD80);

    // 648C: JSR $761D
    cpu.call_function(0x761D);

    // 648F: JSR $63D5
    cpu.call_function(0x63D5);

    // 6492: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 6495: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // 6499: BCC $01D4
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01D4;

    // 649B: LDB $4B11
    cpu.state_.b = cpu.read_memory(0x4B11);

    // 649E: SUBB #$01
    cpu.state_.b -= 0x01;

    // 64A0: CMPB #$F0
    cpu.compare_b(0xF0);

    // 64A2: BCS $01D1
    if (cpu.carry_flag()) cpu.state_.pc += 0x01D1;

    // 64A4: LDB #$00
    cpu.state_.b = 0x00;

    // 64A6: STB $4B11
    cpu.write_memory(0x4B11, cpu.state_.b);

    // 64A9: LDD $4B10
    cpu.state_.d = cpu.read_memory_word(0x4B10);

    // 64AC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 64AE: JSR $C7FD
    cpu.call_function(0xC7FD);

    // 64B1: JSR $D923
    cpu.call_function(0xD923);

    // 64B4: JSR $612F
    cpu.call_function(0x612F);

    // 64B7: JSR $6DCA
    cpu.call_function(0x6DCA);

    // 64BA: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 64BD: SUBD #$0001
    cpu.state_.d -= 0x0001;

    // 64C0: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 64C3: BPL $01F4
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01F4;

    // 64C5: LDA #$05
    cpu.state_.a = 0x05;

    // 64C7: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 64C9: JSR $622D
    cpu.call_function(0x622D);

    // 64CD: LDB #$00
    cpu.state_.b = 0x00;

    // 64CF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D2: LDB #$01
    cpu.state_.b = 0x01;

    // 64D4: JSR >$0000
    cpu.call_function(0x0000);

}

} // namespace StarWars