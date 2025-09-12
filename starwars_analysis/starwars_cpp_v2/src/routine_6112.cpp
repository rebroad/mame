#include "cpu_6809.h"

namespace StarWars {

void routine_6112_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6112.md
    // Address: 0x6112

    // 6112: LDA <$3F
    cpu.state_.a = cpu.read_memory(0x3F);

    // 6114: LDB #$70
    cpu.state_.b = 0x70;

    // 6116: TFR D,Y
    cpu.state_.y = cpu.state_.d;

    // 6118: LDD #$B99E
    cpu.state_.d = 0xB99E;

    // 611B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 611E: LDX #$CEDE
    cpu.state_.x = 0xCEDE;

    // 6121: LDU #$2800
    cpu.state_.u = 0x2800;

    // 6124: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // 6126: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // 6128: CMPU #$3000
    // TODO: Convert CMPU #$3000

    // 612C: BCS $0012
    if (cpu.carry_flag()) cpu.state_.pc = 0x6140;

    // 612F: LDD #$8040
    cpu.state_.d = 0x8040;

    // 6132: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 6134: LDD #$2020
    cpu.state_.d = 0x2020;

    // 6137: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 6139: STD ,Y+
    // TODO: Handle indexed addressing: STD ,Y+

    // 613B: TFR Y,D
    cpu.state_.d = cpu.state_.y;

    // 613D: SUBA <$3F
    cpu.state_.a -= 0x3F;

    // 613F: SUBA #$14
    cpu.state_.a -= 0x14;

    // 6141: BCS $0043
    if (cpu.carry_flag()) cpu.state_.pc = 0x6186;

    // 6143: JSR $611E
    cpu.call_function(0x611E);

    // 6146: LDD #$2020
    cpu.state_.d = 0x2020;

    // 6149: STD $13FE
    cpu.write_memory(0x13FE, cpu.state_.d);

    // 614C: STD $13FC
    cpu.write_memory(0x13FC, cpu.state_.d);

    // 614F: STD $27FE
    cpu.write_memory(0x27FE, cpu.state_.d);

    // 6152: STD $27FC
    cpu.write_memory(0x27FC, cpu.state_.d);

    // 6155: LDA #$FF
    cpu.state_.a = 0xFF;

    // 6157: STA <$3F
    cpu.write_memory(0x3F, cpu.state_.a);

    // 615A: JSR $6161
    cpu.call_function(0x6161);

    // 615D: JSR $7A48
    cpu.call_function(0x7A48);

    // 6161: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 6164: SUBA $4703
    cpu.state_.a -= 0x4703;

    // 6167: BNE $005F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x61C8;

    // 6169: STA $4685
    cpu.write_memory(0x4685, cpu.state_.a);

    // 616C: LDA #$80
    cpu.state_.a = 0x80;

    // 616E: STA $4685
    cpu.write_memory(0x4685, cpu.state_.a);

    // 6171: LDA #$80
    cpu.state_.a = 0x80;

    // 6173: STA <$83
    cpu.write_memory(0x83, cpu.state_.a);

    // 6175: LDX #$4900
    cpu.state_.x = 0x4900;

    // 6178: LDU #$50F0
    cpu.state_.u = 0x50F0;

    // 617B: LDB #$1C
    cpu.state_.b = 0x1C;

    // 617D: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 617F: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 6181: LEAU $20,U
    // TODO: Fix comma operator: LEAU $20,U

    // 6184: ADDB #$04
    cpu.state_.b += 0x04;

    // 6186: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6189: CMPX #$494B
    cpu.compare_x(0x494B);

    // 618C: BCS $006B
    if (cpu.carry_flag()) cpu.state_.pc = 0x61F9;

    // 618E: LDX #$494B
    cpu.state_.x = 0x494B;

    // 6191: LDU #$5160
    cpu.state_.u = 0x5160;

    // 6194: LDB #$2C
    cpu.state_.b = 0x2C;

    // 6196: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 6198: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 619A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 619C: LEAU $8,U
    // TODO: Fix comma operator: LEAU $8,U

    // 619E: ADDB #$01
    cpu.state_.b += 0x01;

    // 61A0: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // 61A2: CMPX #$496F
    cpu.compare_x(0x496F);

    // 61A5: BCS $0084
    if (cpu.carry_flag()) cpu.state_.pc = 0x612B;

    // 61A7: JSR $8ED6
    cpu.call_function(0x8ED6);

    // 61AA: LDB #$04
    cpu.state_.b = 0x04;

    // 61AC: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 61AF: LDB #$07
    cpu.state_.b = 0x07;

    // 61B1: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 61B5: LDD #$0000
    cpu.state_.d = 0x0000;

    // 61B8: STD $501E
    cpu.write_memory(0x501E, cpu.state_.d);

    // 61BB: LDD #$4000
    cpu.state_.d = 0x4000;

    // 61BE: STD $5020
    cpu.write_memory(0x5020, cpu.state_.d);

    // 61C1: LDD #$E000
    cpu.state_.d = 0xE000;

    // 61C4: STD $5026
    cpu.write_memory(0x5026, cpu.state_.d);

    // 61C7: LDD #$0080
    cpu.state_.d = 0x0080;

    // 61CA: STD $506A
    cpu.write_memory(0x506A, cpu.state_.d);

    // 61CD: LDD #$0040
    cpu.state_.d = 0x0040;

    // 61D0: STD $5068
    cpu.write_memory(0x5068, cpu.state_.d);

    // 61D3: LDD #$021F
    cpu.state_.d = 0x021F;

    // 61D6: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 61D9: LDD #$3FF7
    cpu.state_.d = 0x3FF7;

    // 61DC: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 61DF: LDD #$4000
    cpu.state_.d = 0x4000;

    // 61E2: STD $506C
    cpu.write_memory(0x506C, cpu.state_.d);

    // 61E5: LDD #$0200
    cpu.state_.d = 0x0200;

    // 61E8: STD $4706
    cpu.write_memory(0x4706, cpu.state_.d);

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

    // 620C: BCS $00E1
    if (cpu.carry_flag()) cpu.state_.pc = 0x61EF;

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

    // 622A: BCS $0100
    if (cpu.carry_flag()) cpu.state_.pc = 0x622C;

    // 622D: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 622F: CMPB #$A0
    cpu.compare_b(0xA0);

    // 6231: BGT $012C
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x625F;

    // 6233: LDA #$08
    cpu.state_.a = 0x08;

    // 6235: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6237: BEQ $012A
    if (cpu.zero_flag()) cpu.state_.pc = 0x6263;

    // 623A: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 623C: BRA $0139
    cpu.state_.pc = 0x6277;

    // 623E: CMPB #$60
    cpu.compare_b(0x60);

    // 6240: BLT $0139
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x627B;

    // 6242: LDA #$0C
    cpu.state_.a = 0x0C;

    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6246: BEQ $0139
    if (cpu.zero_flag()) cpu.state_.pc = 0x6281;

    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 624B: LDA $4591
    cpu.state_.a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.state_.a &= 0x03;

    // 6250: BNE $0145
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6297;

    // 6252: LDA #$01
    cpu.state_.a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.state_.a);

    // 6257: LDA $4814
    cpu.state_.a = cpu.read_memory(0x4814);

    // 625A: BEQ $0157
    if (cpu.zero_flag()) cpu.state_.pc = 0x62B3;

    // 625C: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // 6260: BEQ $0157
    if (cpu.zero_flag()) cpu.state_.pc = 0x62B9;

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

    // 626E: BNE $0162
    if (!cpu.zero_flag()) cpu.state_.pc = 0x62D2;

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

    // 62D9: BLS $01D1
    // TODO: Convert BLS $01D1

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

}

} // namespace StarWars