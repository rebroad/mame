#include "cpu_6809.h"

namespace StarWars {

void routine_615a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_615a.md
    // Address: 0x615A

    // 615A: JSR $6161
    cpu.call_function(0x6161);

    // 615D: JSR $7A48
    cpu.call_function(0x7A48);

    // 6161: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 6164: SUBA $4703
    cpu.m_a -= 0x4703;

    // 6167: BNE $0017
    if (!cpu.zero_flag()) cpu.m_pc = 0x6180;

    // 6169: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);

    // 616C: LDA #$80
    cpu.m_a = 0x80;

    // 616E: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);

    // 6171: LDA #$80
    cpu.m_a = 0x80;

    // 6173: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 6175: LDX #$4900
    cpu.m_x = 0x4900;

    // 6178: LDU #$50F0
    cpu.m_u = 0x50F0;

    // 617B: LDB #$1C
    cpu.m_b = 0x1C;

    // 617D: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 617F: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 6181: LEAU $20,U
    // TODO: Fix comma operator: LEAU $20,U

    // 6184: ADDB #$04
    cpu.m_b += 0x04;

    // 6186: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6189: CMPX #$494B
    cpu.compare_x(0x494B);

    // 618C: BCS $0023
    if (cpu.carry_flag()) cpu.m_pc = 0x61B1;

    // 618E: LDX #$494B
    cpu.m_x = 0x494B;

    // 6191: LDU #$5160
    cpu.m_u = 0x5160;

    // 6194: LDB #$2C
    cpu.m_b = 0x2C;

    // 6196: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 6198: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 619A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 619C: LEAU $8,U
    // TODO: Fix comma operator: LEAU $8,U

    // 619E: ADDB #$01
    cpu.m_b += 0x01;

    // 61A0: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // 61A2: CMPX #$496F
    cpu.compare_x(0x496F);

    // 61A5: BCS $003C
    if (cpu.carry_flag()) cpu.m_pc = 0x61E3;

    // 61A7: JSR $8ED6
    cpu.call_function(0x8ED6);

    // 61AA: LDB #$04
    cpu.m_b = 0x04;

    // 61AC: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 61AF: LDB #$07
    cpu.m_b = 0x07;

    // 61B1: JSR $CCCC
    cpu.call_function(0xCCCC);

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

    // 620C: BCS $0099
    if (cpu.carry_flag()) cpu.m_pc = 0x61A7;

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

    // 622A: BCS $00B8
    if (cpu.carry_flag()) cpu.m_pc = 0x61E4;

    // 622D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 622F: CMPB #$A0
    cpu.compare_b(0xA0);

    // 6231: BGT $00E4
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6217;

    // 6233: LDA #$08
    cpu.m_a = 0x08;

    // 6235: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6237: BEQ $00E2
    if (cpu.zero_flag()) cpu.m_pc = 0x621B;

    // 623A: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 623C: BRA $00F1
    cpu.m_pc = 0x622F;

    // 623E: CMPB #$60
    cpu.compare_b(0x60);

    // 6240: BLT $00F1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6233;

    // 6242: LDA #$0C
    cpu.m_a = 0x0C;

    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6246: BEQ $00F1
    if (cpu.zero_flag()) cpu.m_pc = 0x6239;

    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 624B: LDA $4591
    cpu.m_a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.m_a &= 0x03;

    // 6250: BNE $00FD
    if (!cpu.zero_flag()) cpu.m_pc = 0x624F;

    // 6252: LDA #$01
    cpu.m_a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.m_a);

    // 6257: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 625A: BEQ $010F
    if (cpu.zero_flag()) cpu.m_pc = 0x626B;

    // 625C: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.m_a &= 0xF0;

    // 6260: BEQ $010F
    if (cpu.zero_flag()) cpu.m_pc = 0x6271;

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

    // 626E: BNE $011A
    if (!cpu.zero_flag()) cpu.m_pc = 0x628A;

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

    // 62D9: BLS $0189
    // TODO: Convert BLS $0189

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

    // 631E: BPL $01C8
    if (!cpu.negative_flag()) cpu.m_pc = 0x62E8;

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

}

} // namespace StarWars