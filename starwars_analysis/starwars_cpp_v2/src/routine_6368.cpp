#include "cpu_6809.h"

namespace StarWars {

void routine_6368_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6368.md
    // Address: 0x6368

    // 6368: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 636B: SUBD #$0001
    cpu.m_d -= 0x0001;

    // 636E: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6371: ANDB #$07
    cpu.m_b &= 0x07;

    // 6373: BNE $639D
    if (!cpu.zero_flag()) cpu.m_pc = 0x639D;

    // 6375: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6378: BMI $637D
    if (cpu.negative_flag()) cpu.m_pc = 0x637D;

    // 637A: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 637D: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6380: CMPA #$12
    cpu.compare_a(0x12);

    // 6382: BNE $638E
    if (!cpu.zero_flag()) cpu.m_pc = 0x638E;

    // 6384: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);

    // 6387: ANDA #$03
    cpu.m_a &= 0x03;

    // 6389: ADDA #$1F
    cpu.m_a += 0x1F;

    // 638B: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 638E: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6391: ADDA #$01
    cpu.m_a += 0x01;

    // 6393: CMPA $4ADC
    cpu.compare_a(cpu.read_memory(0x4ADC));

    // 6396: BCS $639A
    if (cpu.carry_flag()) cpu.m_pc = 0x639A;

    // 6398: LDA #$80
    cpu.m_a = 0x80;

    // 639A: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 639D: LDD $4B0C
    cpu.m_d = cpu.read_memory16(0x4B0C);

    // 63A0: SUBD #$0008
    cpu.m_d -= 0x0008;

    // 63A3: BPL $63A8
    if (!cpu.negative_flag()) cpu.m_pc = 0x63A8;

    // 63A5: LDD #$0000
    cpu.m_d = 0x0000;

    // 63A8: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 63AB: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 63AE: CMPD #$00C0
    // TODO: Convert CMPD #$00C0

    // 63B2: BCC $63C6
    if (!cpu.carry_flag()) cpu.m_pc = 0x63C6;

    // 63B4: LDB $4B11
    cpu.m_b = cpu.read_memory(0x4B11);

    // 63B7: SUBB #$01
    cpu.m_b -= 0x01;

    // 63B9: CMPB #$10
    cpu.compare_b(0x10);

    // 63BB: BCC $63C3
    if (!cpu.carry_flag()) cpu.m_pc = 0x63C3;

    // 63BD: LDD #$0000
    cpu.m_d = 0x0000;

    // 63C0: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 63C3: STB $4B11
    cpu.write_memory(0x4B11, cpu.m_b);

    // 63C6: LDD $4B0C
    cpu.m_d = cpu.read_memory16(0x4B0C);

    // 63C9: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);

    // 63CC: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // 63CF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 63D1: JSR $D942
    cpu.call_function(0xD942);

    // 63D5: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 63D8: BNE $63EB
    if (!cpu.zero_flag()) cpu.m_pc = 0x63EB;

    // 63DA: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 63DC: ANDA #$10
    cpu.m_a &= 0x10;

    // 63DE: BNE $63E4
    if (!cpu.zero_flag()) cpu.m_pc = 0x63E4;

    // 63E0: LDB #$06
    cpu.m_b = 0x06;

    // 63E2: BRA $63E6
    cpu.m_pc = 0x63E6;

    // 63E4: LDB #$05
    cpu.m_b = 0x05;

    // 63E6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63E9: BRA $63F0
    cpu.m_pc = 0x63F0;

    // 63EB: LDB #$0B
    cpu.m_b = 0x0B;

    // 63ED: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63F0: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 63F3: BNE $6410
    if (!cpu.zero_flag()) cpu.m_pc = 0x6410;

    // 63F5: LDA $4812
    cpu.m_a = cpu.read_memory(0x4812);

    // 63F8: BEQ $6404
    if (cpu.zero_flag()) cpu.m_pc = 0x6404;

    // 63FA: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 63FC: ANDA #$10
    cpu.m_a &= 0x10;

    // 63FE: BEQ $6404
    if (cpu.zero_flag()) cpu.m_pc = 0x6404;

    // 6400: BRA $6410
    cpu.m_pc = 0x6410;

    // 6402: BRA $640E
    cpu.m_pc = 0x640E;

    // 6404: LDB $4591
    cpu.m_b = cpu.read_memory(0x4591);

    // 6407: ANDB #$03
    cpu.m_b &= 0x03;

    // 6409: ADDB #$07
    cpu.m_b += 0x07;

    // 640B: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 640E: BRA $6458
    cpu.m_pc = 0x6458;

    // 6410: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 6413: ADDA $4812
    cpu.m_a += 0x4812;

    // 6416: CMPA #$01
    cpu.compare_a(0x01);

    // 6418: BNE $641E
    if (!cpu.zero_flag()) cpu.m_pc = 0x641E;

    // 641A: LDB #$0D
    cpu.m_b = 0x0D;

    // 641C: BRA $6420
    cpu.m_pc = 0x6420;

    // 641E: LDB #$0C
    cpu.m_b = 0x0C;

    // 6420: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 6423: LDD #$01B0
    cpu.m_d = 0x01B0;

    // 6426: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 6428: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 642A: LDD #$FF80
    cpu.m_d = 0xFF80;

    // 642D: TST $4812
    // TODO: Convert TST $4812

    // 6430: BEQ $6435
    if (cpu.zero_flag()) cpu.m_pc = 0x6435;

    // 6432: SUBD #$0018
    cpu.m_d -= 0x0018;

    // 6435: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 6437: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6439: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 643C: CMPA #$0A
    cpu.compare_a(0x0A);

    // 643E: BCS $6442
    if (cpu.carry_flag()) cpu.m_pc = 0x6442;

    // 6440: ADDA #$06
    cpu.m_a += 0x06;

    // 6442: LDB #$02
    cpu.m_b = 0x02;

    // 6444: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // 6446: JSR $E790
    cpu.call_function(0xE790);

    // 6449: LDA $4812
    cpu.m_a = cpu.read_memory(0x4812);

    // 644C: BEQ $6453
    if (cpu.zero_flag()) cpu.m_pc = 0x6453;

    // 644E: LDD #$B8F3
    cpu.m_d = 0xB8F3;

    // 6451: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6453: LDD #$8040
    cpu.m_d = 0x8040;

    // 6456: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6459: LDD #$0000
    cpu.m_d = 0x0000;

    // 645C: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 645F: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);

    // 6462: LDD #$0100
    cpu.m_d = 0x0100;

    // 6465: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6468: LDD #$6180
    cpu.m_d = 0x6180;

    // 646B: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);

    // 646E: JSR $D91A
    cpu.call_function(0xD91A);

    // 6471: JSR $61B5
    cpu.call_function(0x61B5);

    // 6474: JSR $615A
    cpu.call_function(0x615A);

    // 6477: LDU #$5038
    cpu.m_u = 0x5038;

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
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6495: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // 6499: BCC $64A9
    if (!cpu.carry_flag()) cpu.m_pc = 0x64A9;

    // 649B: LDB $4B11
    cpu.m_b = cpu.read_memory(0x4B11);

    // 649E: SUBB #$01
    cpu.m_b -= 0x01;

    // 64A0: CMPB #$F0
    cpu.compare_b(0xF0);

    // 64A2: BCS $64A6
    if (cpu.carry_flag()) cpu.m_pc = 0x64A6;

    // 64A4: LDB #$00
    cpu.m_b = 0x00;

    // 64A6: STB $4B11
    cpu.write_memory(0x4B11, cpu.m_b);

    // 64A9: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // 64AC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 64AE: JSR $C7FD
    cpu.call_function(0xC7FD);

    // 64B1: JSR $D923
    cpu.call_function(0xD923);

    // 64B4: JSR $612F
    cpu.call_function(0x612F);

    // 64B7: JSR $6DCA
    cpu.call_function(0x6DCA);

    // 64BA: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 64BD: SUBD #$0001
    cpu.m_d -= 0x0001;

    // 64C0: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 64C3: BPL $64C9
    if (!cpu.negative_flag()) cpu.m_pc = 0x64C9;

    // 64C5: LDA #$05
    cpu.m_a = 0x05;

    // 64C7: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 64C9: JSR $622D
    cpu.call_function(0x622D);

    // 64CD: LDB #$00
    cpu.m_b = 0x00;

    // 64CF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D2: LDB #$01
    cpu.m_b = 0x01;

    // 64D4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D7: LDB #$02
    cpu.m_b = 0x02;

    // 64D9: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64DC: LDB #$03
    cpu.m_b = 0x03;

    // 64DE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64E2: JSR $D91A
    cpu.call_function(0xD91A);

    // 64E5: LDD #$0000
    cpu.m_d = 0x0000;

    // 64E8: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 64EB: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);

    // 64EE: INC <$41
    // TODO: Convert INC <$41

    // 64F1: JSR $6112
    cpu.call_function(0x6112);

    // 64F4: JSR $BE20
    cpu.call_function(0xBE20);

    // 64F7: JSR $D923
    cpu.call_function(0xD923);

    // 64FA: JSR $612F
    cpu.call_function(0x612F);

    // 64FD: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 64FF: ANDA #$04
    cpu.m_a &= 0x04;

    // 6501: BEQ $6507
    if (cpu.zero_flag()) cpu.m_pc = 0x6507;

    // 6503: LDA #$03
    cpu.m_a = 0x03;

    // 6505: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6507: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 650A: ANDA #$10
    cpu.m_a &= 0x10;

    // 650C: BEQ $6512
    if (cpu.zero_flag()) cpu.m_pc = 0x6512;

    // 650E: LDA #$05
    cpu.m_a = 0x05;

    // 6510: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6513: JSR $D91A
    cpu.call_function(0xD91A);

    // 6516: LDA #$0A
    cpu.m_a = 0x0A;

    // 6518: STA $4AF6
    cpu.write_memory(0x4AF6, cpu.m_a);

    // 651B: LDA #$00
    cpu.m_a = 0x00;

    // 651D: STA $4598
    cpu.write_memory(0x4598, cpu.m_a);

    // 6520: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.m_a);

    // 6523: LDA #$03
    cpu.m_a = 0x03;

    // 6525: JSR $C2C3
    cpu.call_function(0xC2C3);

    // 6528: BEQ $652F
    if (cpu.zero_flag()) cpu.m_pc = 0x652F;

    // 652A: LDA #$03
    cpu.m_a = 0x03;

    // 652C: JSR $C369
    cpu.call_function(0xC369);

    // 652F: INC <$41
    // TODO: Convert INC <$41

    // 6532: JSR $6112
    cpu.call_function(0x6112);

    // 6535: JSR $C450
    cpu.call_function(0xC450);

    // 6538: LDD #$6780
    cpu.m_d = 0x6780;

    // 653B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 653D: LDB #$66
    cpu.m_b = 0x66;

    // 653F: ADDB $4AF6
    cpu.m_b += 0x4AF6;

    // 6542: JSR $E7D3
    cpu.call_function(0xE7D3);

    // 6545: LDA $4AF6
    cpu.m_a = cpu.read_memory(0x4AF6);

    // 6548: JSR $C5A4
    cpu.call_function(0xC5A4);

    // 654B: JSR $C4EB
    cpu.call_function(0xC4EB);

    // 654E: JSR $D923
    cpu.call_function(0xD923);

    // 6551: JSR $612F
    cpu.call_function(0x612F);

    // 6554: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 6556: ANDA #$04
    cpu.m_a &= 0x04;

    // 6558: BEQ $655D
    if (cpu.zero_flag()) cpu.m_pc = 0x655D;

    // 655A: JMP $F261
    cpu.m_pc = 0xF261;

    // 655D: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 6560: ANDA #$10
    cpu.m_a &= 0x10;

    // 6562: BEQ $656B
    if (cpu.zero_flag()) cpu.m_pc = 0x656B;

    // 6564: JSR $D91A
    cpu.call_function(0xD91A);

    // 6567: LDA #$00
    cpu.m_a = 0x00;

}

} // namespace StarWars