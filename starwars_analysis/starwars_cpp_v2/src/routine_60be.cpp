#include "cpu_6809.h"

namespace StarWars {

void routine_60be_impl(CPU6809& cpu) {
    // Converted from rom_disasm_60be.md
    // Address: 0x60BE

    // 60BE: INC <$43
    // TODO: Convert INC <$43

    // 60C0: BNE $60CA
    if (!cpu.zero_flag()) cpu.m_pc = 0x60CA;

    // 60C2: INC <$42
    // TODO: Convert INC <$42

    // 60C4: BNE $60CA
    if (!cpu.zero_flag()) cpu.m_pc = 0x60CA;

    // 60C6: LDA #$80
    cpu.m_a = 0x80;

    // 60C8: STA <$42
    cpu.write_memory(0x42, cpu.m_a);

    // 60CA: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60CD: BNE $60D4
    if (!cpu.zero_flag()) cpu.m_pc = 0x60D4;

    // 60CF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60D2: BRA $60F4
    cpu.m_pc = 0x60F4;

    // 60D4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60D7: BNE $60E4
    if (!cpu.zero_flag()) cpu.m_pc = 0x60E4;

    // 60D9: JSR $BD12
    cpu.call_function(0xBD12);

    // 60DC: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60DF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60E2: BRA $60F4
    cpu.m_pc = 0x60F4;

    // 60E4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60E7: CMPA $4814
    cpu.compare_a(cpu.read_memory(0x4814));

    // 60EA: BCC $60F4
    if (!cpu.carry_flag()) cpu.m_pc = 0x60F4;

    // 60EC: JSR $BD03
    cpu.call_function(0xBD03);

    // 60EF: LDA #$FF
    cpu.m_a = 0xFF;

    // 60F1: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60F4: JSR $70DB
    cpu.call_function(0x70DB);

    // 60F7: LDA <$AB
    cpu.m_a = cpu.read_memory(0xAB);

    // 60F9: STA <$AA
    cpu.write_memory(0xAA, cpu.m_a);

    // 60FB: LDA <$21
    cpu.m_a = cpu.read_memory(0x21);

    // 60FD: ANDA #$30
    cpu.m_a &= 0x30;

    // 60FF: PSHS A
    // TODO: Convert PSHS A

    // 6101: LDA <$1E
    cpu.m_a = cpu.read_memory(0x1E);

    // 6103: ANDA #$CF
    cpu.m_a &= 0xCF;

    // 6105: ORA ,S+
    // TODO: Complex indexed addressing: ,S+

    // 6107: ANDA #$F4
    cpu.m_a &= 0xF4;

    // 6109: STA <$AB
    cpu.write_memory(0xAB, cpu.m_a);

    // 610B: EORA <$AA
    cpu.m_a ^= 0xAA;

    // 610D: ANDA <$AA
    cpu.m_a &= 0xAA;

    // 610F: STA <$AC
    cpu.write_memory(0xAC, cpu.m_a);

    // 6112: LDA <$3F
    cpu.m_a = cpu.read_memory(0x3F);

    // 6114: LDB #$70
    cpu.m_b = 0x70;

    // 6116: TFR D,Y
    cpu.m_y = cpu.m_d;

    // 6118: LDD #$B99E
    cpu.m_d = 0xB99E;

    // 611B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 611E: LDX #$CEDE
    cpu.m_x = 0xCEDE;

    // 6121: LDU #$2800
    cpu.m_u = 0x2800;

    // 6124: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // 6126: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // 6128: CMPU #$3000
    // TODO: Convert CMPU #$3000

    // 612C: BCS $6124
    if (cpu.carry_flag()) cpu.m_pc = 0x6124;

    // 612F: LDD #$8040
    cpu.m_d = 0x8040;

    // 6132: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6134: LDD #$2020
    cpu.m_d = 0x2020;

    // 6137: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6139: STD ,Y+
    // TODO: Handle indexed addressing: STD ,Y+

    // 613B: TFR Y,D
    cpu.m_d = cpu.m_y;

    // 613D: SUBA <$3F
    cpu.m_a -= 0x3F;

    // 613F: SUBA #$14
    cpu.m_a -= 0x14;

    // 6141: BCS $6155
    if (cpu.carry_flag()) cpu.m_pc = 0x6155;

    // 6143: JSR $611E
    cpu.call_function(0x611E);

    // 6146: LDD #$2020
    cpu.m_d = 0x2020;

    // 6149: STD $13FE
    cpu.write_memory16(0x13FE, cpu.m_d);

    // 614C: STD $13FC
    cpu.write_memory16(0x13FC, cpu.m_d);

    // 614F: STD $27FE
    cpu.write_memory16(0x27FE, cpu.m_d);

    // 6152: STD $27FC
    cpu.write_memory16(0x27FC, cpu.m_d);

    // 6155: LDA #$FF
    cpu.m_a = 0xFF;

    // 6157: STA <$3F
    cpu.write_memory(0x3F, cpu.m_a);

    // 615A: JSR $6161
    cpu.call_function(0x6161);

    // 615D: JSR $7A48
    cpu.call_function(0x7A48);

    // 6161: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 6164: SUBA $4703
    cpu.m_a -= 0x4703;

    // 6167: BNE $6171
    if (!cpu.zero_flag()) cpu.m_pc = 0x6171;

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

    // 618C: BCS $617D
    if (cpu.carry_flag()) cpu.m_pc = 0x617D;

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

    // 61A5: BCS $6196
    if (cpu.carry_flag()) cpu.m_pc = 0x6196;

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

    // 620C: BCS $61F3
    if (cpu.carry_flag()) cpu.m_pc = 0x61F3;

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

    // 622A: BCS $6212
    if (cpu.carry_flag()) cpu.m_pc = 0x6212;

    // 622D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 622F: CMPB #$A0
    cpu.compare_b(0xA0);

    // 6231: BGT $623E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x623E;

    // 6233: LDA #$08
    cpu.m_a = 0x08;

    // 6235: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6237: BEQ $623C
    if (cpu.zero_flag()) cpu.m_pc = 0x623C;

    // 623A: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 623C: BRA $624B
    cpu.m_pc = 0x624B;

    // 623E: CMPB #$60
    cpu.compare_b(0x60);

    // 6240: BLT $624B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x624B;

    // 6242: LDA #$0C
    cpu.m_a = 0x0C;

    // 6244: CMPA <$41
    cpu.compare_a(cpu.read_memory(0x41));

    // 6246: BEQ $624B
    if (cpu.zero_flag()) cpu.m_pc = 0x624B;

    // 6249: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 624B: LDA $4591
    cpu.m_a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.m_a &= 0x03;

    // 6250: BNE $6257
    if (!cpu.zero_flag()) cpu.m_pc = 0x6257;

    // 6252: LDA #$01
    cpu.m_a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.m_a);

    // 6257: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 625A: BEQ $6269
    if (cpu.zero_flag()) cpu.m_pc = 0x6269;

    // 625C: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.m_a &= 0xF0;

    // 6260: BEQ $6269
    if (cpu.zero_flag()) cpu.m_pc = 0x6269;

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

    // 626E: BNE $6274
    if (!cpu.zero_flag()) cpu.m_pc = 0x6274;

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

    // 62BD: STA <$00
    cpu.write_memory(0x00, cpu.m_a);

}

} // namespace StarWars