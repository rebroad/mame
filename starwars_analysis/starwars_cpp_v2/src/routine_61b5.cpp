#include "cpu_6809.h"

namespace StarWars {

void routine_61b5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_61b5.md
    // Address: 0x61B5

    // 61B5: LDD #$0000
    cpu.m_d = 0x0000;

    // 61B8: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // 61BB: LDD #$4000
    cpu.m_d = 0x4000;

    // 61BE: STD $5020
    cpu.write_memory16(0x5020, cpu.m_d);

    // 61C1: LDD #$E000
    cpu.m_d = 0xE000;

    // 61C4: STD $5026
    cpu.write_memory16(0x5026, cpu.m_d);

    // 61C7: LDD #$0080
    cpu.m_d = 0x0080;

    // 61CA: STD $506A
    cpu.write_memory16(0x506A, cpu.m_d);

    // 61CD: LDD #$0040
    cpu.m_d = 0x0040;

    // 61D0: STD $5068
    cpu.write_memory16(0x5068, cpu.m_d);

    // 61D3: LDD #$021F
    cpu.m_d = 0x021F;

    // 61D6: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 61D9: LDD #$3FF7
    cpu.m_d = 0x3FF7;

    // 61DC: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 61DF: LDD #$4000
    cpu.m_d = 0x4000;

    // 61E2: STD $506C
    cpu.write_memory16(0x506C, cpu.m_d);

    // 61E5: LDD #$0200
    cpu.m_d = 0x0200;

    // 61E8: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // 61EC: LDA #$80
    cpu.m_a = 0x80;

    // 61EE: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 61F0: LDX #$5C60
    cpu.m_x = 0x5C60;

    // 61F3: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 61F6: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 61F9: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // 61FC: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 61FF: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // 6202: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 6205: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // 6207: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // 6209: CMPX #$5DF0
    cpu.compare_x(0x5DF0);

    // 620C: BCS $003E
    if (cpu.carry_flag()) cpu.m_pc = 0x624C;

    // 620F: LDX #$5C60
    cpu.m_x = 0x5C60;

    // 6212: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 6215: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 6218: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // 621B: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 621E: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // 6220: LDD #$0000
    cpu.m_d = 0x0000;

    // 6223: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // 6225: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // 6227: CMPX #$5DF0
    cpu.compare_x(0x5DF0);

    // 622A: BCS $005D
    if (cpu.carry_flag()) cpu.m_pc = 0x6289;

    // 622D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 622F: CMPB #$A0
    cpu.compare_b(0xA0);

    // 6231: BGT $0089
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x61BC;

    // 6233: LDA #$08
    cpu.m_a = 0x08;

    // 6235: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6237: BEQ $0087
    if (cpu.zero_flag()) cpu.m_pc = 0x61C0;

    // 623A: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 623C: BRA $0096
    cpu.m_pc = 0x61D4;

    // 623E: CMPB #$60
    cpu.compare_b(0x60);

    // 6240: BLT $0096
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x61D8;

    // 6242: LDA #$0C
    cpu.m_a = 0x0C;

    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6246: BEQ $0096
    if (cpu.zero_flag()) cpu.m_pc = 0x61DE;

    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 624B: LDA $4591
    cpu.m_a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.m_a &= 0x03;

    // 6250: BNE $00A2
    if (!cpu.zero_flag()) cpu.m_pc = 0x61F4;

    // 6252: LDA #$01
    cpu.m_a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.m_a);

    // 6257: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 625A: BEQ $00B4
    if (cpu.zero_flag()) cpu.m_pc = 0x6210;

    // 625C: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.m_a &= 0xF0;

    // 6260: BEQ $00B4
    if (cpu.zero_flag()) cpu.m_pc = 0x6216;

    // 6262: LDA #$19
    cpu.m_a = 0x19;

    // 6264: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6266: DEC $4814
    // TODO: Convert DEC $4814

    // 6269: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 626C: ANDA #$10
    cpu.m_a &= 0x10;

    // 626E: BNE $00BF
    if (!cpu.zero_flag()) cpu.m_pc = 0x622F;

    // 6270: LDA #$01
    cpu.m_a = 0x01;

    // 6272: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6275: ORCC #$10
    cpu.m_cc |= 0x10;

    // 6277: LDX #$4534
    cpu.m_x = 0x4534;

    // 627A: JSR $C6D4
    cpu.call_function(0xC6D4);

    // 627D: LDX #$4AFA
    cpu.m_x = 0x4AFA;

    // 6280: JSR $62D5
    cpu.call_function(0x62D5);

    // 6283: STA $4866
    cpu.write_memory(0x4866, cpu.m_a);

    // 6286: LDX #$4AFB
    cpu.m_x = 0x4AFB;

    // 6289: JSR $62D5
    cpu.call_function(0x62D5);

    // 628C: STA $4868
    cpu.write_memory(0x4868, cpu.m_a);

    // 628F: LDX #$4AFC
    cpu.m_x = 0x4AFC;

    // 6292: JSR $62D5
    cpu.call_function(0x62D5);

    // 6295: STA $486F
    cpu.write_memory(0x486F, cpu.m_a);

    // 6298: LDX #$4AFD
    cpu.m_x = 0x4AFD;

    // 629B: JSR $62D5
    cpu.call_function(0x62D5);

    // 629E: STA $4871
    cpu.write_memory(0x4871, cpu.m_a);

    // 62A1: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 62A3: LDA #$0B
    cpu.m_a = 0x0B;

    // 62A5: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 62A7: LDA #$FF
    cpu.m_a = 0xFF;

    // 62A9: STA $4B34
    cpu.write_memory(0x4B34, cpu.m_a);

    // 62AC: JSR $61B5
    cpu.call_function(0x61B5);

    // 62AF: JSR $615A
    cpu.call_function(0x615A);

    // 62B2: JSR $611E
    cpu.call_function(0x611E);

    // 62B5: JSR $61EC
    cpu.call_function(0x61EC);

    // 62B8: JSR $D91A
    cpu.call_function(0xD91A);

    // 62BB: LDA #$00
    cpu.m_a = 0x00;

    // 62BD: STA <$5C
    cpu.write_memory(0x5C, cpu.m_a);

    // 62BF: STA <$5D
    cpu.write_memory(0x5D, cpu.m_a);

    // 62C1: STA <$5E
    cpu.write_memory(0x5E, cpu.m_a);

    // 62C3: STA <$5F
    cpu.write_memory(0x5F, cpu.m_a);

    // 62C5: STA <$8B
    cpu.write_memory(0x8B, cpu.m_a);

    // 62C7: STA <$8C
    cpu.write_memory(0x8C, cpu.m_a);

    // 62C9: JSR $CC18
    cpu.call_function(0xCC18);

    // 62CC: LDA #$FF
    cpu.m_a = 0xFF;

    // 62CE: STA $4AEC
    cpu.write_memory(0x4AEC, cpu.m_a);

    // 62D1: STA $4818
    cpu.write_memory(0x4818, cpu.m_a);

    // 62D5: LDA #$40
    cpu.m_a = 0x40;

    // 62D7: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // 62D9: BLS $012E
    // TODO: Convert BLS $012E

    // 62DB: SUBA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E1: ADDA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E4: LDD #$0000
    cpu.m_d = 0x0000;

    // 62E7: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 62EA: LDD #$0200
    cpu.m_d = 0x0200;

    // 62ED: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 62F0: LDA #$0F
    cpu.m_a = 0x0F;

    // 62F2: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 62F5: LDA #$1F
    cpu.m_a = 0x1F;

    // 62F7: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.m_a);

    // 62FA: LDD #$6480
    cpu.m_d = 0x6480;

    // 62FD: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);

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
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 631E: BPL $016D
    if (!cpu.negative_flag()) cpu.m_pc = 0x638D;

    // 6320: INC <$41
    // TODO: Convert INC <$41

    // 6322: JSR $622D
    cpu.call_function(0x622D);

    // 6326: LDD #$03C0
    cpu.m_d = 0x03C0;

    // 6329: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 632C: LDD #$0200
    cpu.m_d = 0x0200;

    // 632F: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6332: LDA #$23
    cpu.m_a = 0x23;

    // 6334: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 6337: LDA #$2C
    cpu.m_a = 0x2C;

    // 6339: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.m_a);

    // 633C: LDD #$6580
    cpu.m_d = 0x6580;

    // 633F: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);

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
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6360: BPL $01AF
    if (!cpu.negative_flag()) cpu.m_pc = 0x6311;

    // 6362: INC <$41
    // TODO: Convert INC <$41

    // 6364: JSR $622D
    cpu.call_function(0x622D);

    // 6368: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 636B: SUBD #$0001
    cpu.m_d -= 0x0001;

    // 636E: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6371: ANDB #$07
    cpu.m_b &= 0x07;

    // 6373: BNE $01E8
    if (!cpu.zero_flag()) cpu.m_pc = 0x635D;

    // 6375: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6378: BMI $01C8
    if (cpu.negative_flag()) cpu.m_pc = 0x6342;

    // 637A: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 637D: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6380: CMPA #$12
    cpu.compare_a(0x12);

    // 6382: BNE $01D9
    if (!cpu.zero_flag()) cpu.m_pc = 0x635D;

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

    // 6396: BCS $01E5
    if (cpu.carry_flag()) cpu.m_pc = 0x637D;

    // 6398: LDA #$80
    cpu.m_a = 0x80;

    // 639A: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 639D: LDD $4B0C
    cpu.m_d = cpu.read_memory16(0x4B0C);

    // 63A0: SUBD #$0008
    cpu.m_d -= 0x0008;

    // 63A3: BPL $01F3
    if (!cpu.negative_flag()) cpu.m_pc = 0x6398;

    // 63A5: LDD #$0000
    cpu.m_d = 0x0000;

    // 63A8: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 63AB: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 63AE: CMPD #$00C0
    // TODO: Convert CMPD #$00C0

    // 63B2: BCC $0211
    if (!cpu.carry_flag()) cpu.m_pc = 0x63C5;

    // 63B4: LDB >$0000
    cpu.m_b = cpu.read_memory(0x0000);

}

} // namespace StarWars