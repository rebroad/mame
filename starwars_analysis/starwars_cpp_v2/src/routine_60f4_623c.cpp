#include "cpu_6809.h"

namespace StarWars {

void routine_60f4_623c_impl(CPU6809& cpu) {
    // Converted from rom_disasm_60f4_623c.md
    // Address: 0x60F4_623C

    label_60F4:
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

    label_623C:
    // 623C: JMP $623c
    goto label_623C;

}

} // namespace StarWars