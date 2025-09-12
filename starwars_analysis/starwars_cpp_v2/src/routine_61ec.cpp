#include "cpu_6809.h"

namespace StarWars {

void routine_61ec_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_61ec.md
    // Address: 0x61EC

    // 61EC: LDA #$80
    cpu.state_.a = 0x80;

    // 61EE: STA <$83
    cpu.write_memory(0x83, cpu.state_.a);

    // 61F0: LDX #$5C60
    cpu.state_.x = 0x5C60;

    // 61F3: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 61F6: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 61F9: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // 61FC: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 61FF: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // 6202: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 6205: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // 6207: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // 6209: CMPX #$5DF0
    cpu.compare_x(0x5DF0);

    // 620C: BCS $0007
    if (cpu.carry_flag()) cpu.state_.pc = 0x6215;

    // 620F: LDX #$5C60
    cpu.state_.x = 0x5C60;

    // 6212: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 6215: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // 6218: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // 621B: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 621E: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // 6220: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6223: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // 6225: LEAX $8,X
    // TODO: Fix comma operator: LEAX $8,X

    // 6227: CMPX #$5DF0
    cpu.compare_x(0x5DF0);

    // 622A: BCS $0026
    if (cpu.carry_flag()) cpu.state_.pc = 0x6252;

    // 622D: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 622F: CMPB #$A0
    cpu.compare_b(0xA0);

    // 6231: BGT $0052
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6285;

    // 6233: LDA #$08
    cpu.state_.a = 0x08;

    // 6235: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6237: BEQ $0050
    if (cpu.zero_flag()) cpu.state_.pc = 0x6289;

    // 623A: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 623C: BRA $005F
    cpu.state_.pc = 0x629D;

    // 623E: CMPB #$60
    cpu.compare_b(0x60);

    // 6240: BLT $005F
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x62A1;

    // 6242: LDA #$0C
    cpu.state_.a = 0x0C;

    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6246: BEQ $005F
    if (cpu.zero_flag()) cpu.state_.pc = 0x62A7;

    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 624B: LDA $4591
    cpu.state_.a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.state_.a &= 0x03;

    // 6250: BNE $006B
    if (!cpu.zero_flag()) cpu.state_.pc = 0x62BD;

    // 6252: LDA #$01
    cpu.state_.a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.state_.a);

    // 6257: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 625A: BEQ $007D
    if (cpu.zero_flag()) cpu.state_.pc = 0x62D9;

    // 625C: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // 6260: BEQ $007D
    if (cpu.zero_flag()) cpu.state_.pc = 0x62DF;

    // 6262: LDA #$19
    cpu.state_.a = 0x19;

    // 6264: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6266: DEC $4814
    // TODO: Convert DEC $4814

    // 6269: LDA $481E
    cpu.state_.a = cpu.read_memory(0x481E);

    // 626C: ANDA #$10
    cpu.state_.a &= 0x10;

    // 626E: BNE $0088
    if (!cpu.zero_flag()) cpu.state_.pc = 0x61F8;

    // 6270: LDA #$01
    cpu.state_.a = 0x01;

    // 6272: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6275: ORCC #$10
    cpu.state_.cc |= 0x10;

    // 6277: LDX #$4534
    cpu.state_.x = 0x4534;

    // 627A: JSR $C6D4
    cpu.call_function(0xC6D4);

    // 627D: LDX #$4AFA
    cpu.state_.x = 0x4AFA;

    // 6280: JSR $62D5
    cpu.call_function(0x62D5);

    // 6283: STA $4866
    cpu.write_memory(0x4866, cpu.state_.a);

    // 6286: LDX #$4AFB
    cpu.state_.x = 0x4AFB;

    // 6289: JSR $62D5
    cpu.call_function(0x62D5);

    // 628C: STA $4868
    cpu.write_memory(0x4868, cpu.state_.a);

    // 628F: LDX #$4AFC
    cpu.state_.x = 0x4AFC;

    // 6292: JSR $62D5
    cpu.call_function(0x62D5);

    // 6295: STA $486F
    cpu.write_memory(0x486F, cpu.state_.a);

    // 6298: LDX #$4AFD
    cpu.state_.x = 0x4AFD;

    // 629B: JSR $62D5
    cpu.call_function(0x62D5);

    // 629E: STA $4871
    cpu.write_memory(0x4871, cpu.state_.a);

    // 62A1: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 62A3: LDA #$0B
    cpu.state_.a = 0x0B;

    // 62A5: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 62A7: LDA #$FF
    cpu.state_.a = 0xFF;

    // 62A9: STA $4B34
    cpu.write_memory(0x4B34, cpu.state_.a);

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
    cpu.state_.a = 0x00;

    // 62BD: STA <$5C
    cpu.write_memory(0x5C, cpu.state_.a);

    // 62BF: STA <$5D
    cpu.write_memory(0x5D, cpu.state_.a);

    // 62C1: STA <$5E
    cpu.write_memory(0x5E, cpu.state_.a);

    // 62C3: STA <$5F
    cpu.write_memory(0x5F, cpu.state_.a);

    // 62C5: STA <$8B
    cpu.write_memory(0x8B, cpu.state_.a);

    // 62C7: STA <$8C
    cpu.write_memory(0x8C, cpu.state_.a);

    // 62C9: JSR $CC18
    cpu.call_function(0xCC18);

    // 62CC: LDA #$FF
    cpu.state_.a = 0xFF;

    // 62CE: STA $4AEC
    cpu.write_memory(0x4AEC, cpu.state_.a);

    // 62D1: STA $4818
    cpu.write_memory(0x4818, cpu.state_.a);

    // 62D5: LDA #$40
    cpu.state_.a = 0x40;

    // 62D7: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // 62D9: BLS $00F7
    // TODO: Convert BLS $00F7

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

    // 631E: BPL $0136
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6356;

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

    // 6360: BPL $0178
    if (!cpu.negative_flag()) cpu.state_.pc = 0x63DA;

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

    // 6373: BNE $01B1
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6326;

    // 6375: LDA $4ADB
    cpu.state_.a = cpu.read_memory(0x4ADB);

    // 6378: BMI $0191
    if (cpu.negative_flag()) cpu.state_.pc = 0x630B;

    // 637A: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 637D: LDA $4ADB
    cpu.state_.a = cpu.read_memory(0x4ADB);

    // 6380: CMPA #$12
    cpu.compare_a(0x12);

    // 6382: BNE $01A2
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6326;

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

    // 6396: BCS $01AE
    if (cpu.carry_flag()) cpu.state_.pc = 0x6346;

    // 6398: LDA #$80
    cpu.state_.a = 0x80;

    // 639A: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.state_.a);

    // 639D: LDD $4B0C
    cpu.state_.d = cpu.read_memory_word(0x4B0C);

    // 63A0: SUBD #$0008
    cpu.state_.d -= 0x0008;

    // 63A3: BPL $01BC
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6361;

    // 63A5: LDD #$0000
    cpu.state_.d = 0x0000;

    // 63A8: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 63AB: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 63AE: CMPD #$00C0
    // TODO: Convert CMPD #$00C0

    // 63B2: BCC $01DA
    if (!cpu.carry_flag()) cpu.state_.pc = 0x638E;

    // 63B4: LDB $4B11
    cpu.state_.b = cpu.read_memory(0x4B11);

    // 63B7: SUBB #$01
    cpu.state_.b -= 0x01;

    // 63B9: CMPB #$10
    cpu.compare_b(0x10);

    // 63BB: BCC $01D7
    if (!cpu.carry_flag()) cpu.state_.pc = 0x6394;

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

    // 63D8: BNE $01FF
    if (!cpu.zero_flag()) cpu.state_.pc = 0x63D9;

    // 63DA: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 63DC: ANDA #$10
    cpu.state_.a &= 0x10;

    // 63DE: BNE $01F8
    if (!cpu.zero_flag()) cpu.state_.pc = 0x63D8;

    // 63E0: LDB #$06
    cpu.state_.b = 0x06;

    // 63E2: BRA $01FA
    cpu.state_.pc = 0x63DE;

    // 63E4: LDB #$05
    cpu.state_.b = 0x05;

    // 63E6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63E9: BRA $0204
    cpu.state_.pc = 0x63EF;

    // 63EB: LDB #$00
    cpu.state_.b = 0x00;

}

} // namespace StarWars