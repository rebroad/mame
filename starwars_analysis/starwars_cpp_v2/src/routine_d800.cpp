#include "cpu_6809.h"

namespace StarWars {

void routine_d800_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d800.md
    // Address: 0xD800

    // D800: DEC <$0B
    // TODO: Convert DEC <$0B

    // D802: LDA #$00
    cpu.m_a = 0x00;

    // D804: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D806: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // D808: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // D80A: BEQ $0060
    if (cpu.zero_flag()) cpu.m_pc = 0xD86C;

    // D80C: DEC $3,X
    // TODO: Convert DEC $3,X

    // D80E: BEQ $002F
    if (cpu.zero_flag()) cpu.m_pc = 0xD83F;

    // D810: BRA $0060
    cpu.m_pc = 0xD872;

    // D812: CMPA #$1B
    cpu.compare_a(0x1B);

    // D814: BCC $001E
    if (!cpu.carry_flag()) cpu.m_pc = 0xD834;

    // D816: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D818: ADDA #$20
    cpu.m_a += 0x20;

    // D81A: BCC $FFEF
    if (!cpu.carry_flag()) cpu.m_pc = 0xD80B;

    // D81C: BNE $0022
    if (!cpu.zero_flag()) cpu.m_pc = 0xD840;

    // D81E: LDA #$1F
    cpu.m_a = 0x1F;

    // D820: BRA $FFEF
    cpu.m_pc = 0xD811;

    // D822: LDA #$1F
    cpu.m_a = 0x1F;

    // D824: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D826: LDB $3,X
    // TODO: Fix comma operator: LDB $3,X

    // D828: LDA #$78
    cpu.m_a = 0x78;

    // D82A: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // D82D: BEQ $0060
    if (cpu.zero_flag()) cpu.m_pc = 0xD88F;

    // D830: CMPX #$480D
    cpu.compare_x(0x480D);

    // D833: BCS $0053
    if (cpu.carry_flag()) cpu.m_pc = 0xD888;

    // D835: BEQ $004B
    if (cpu.zero_flag()) cpu.m_pc = 0xD882;

    // D837: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);

    // D839: ANDA #$0C
    cpu.m_a &= 0x0C;

    // D83D: BEQ $0053
    if (cpu.zero_flag()) cpu.m_pc = 0xD892;

    // D83F: ADDA #$02
    cpu.m_a += 0x02;

    // D841: BRA $0053
    cpu.m_pc = 0xD896;

    // D843: STU $0408
    cpu.write_memory16(0x0408, cpu.m_u);

    // D846: ASL <$0A
    // TODO: Convert ASL <$0A

    // D848: STU $FFFF
    cpu.write_memory16(0xFFFF, cpu.m_u);

    // D84B: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);

    // D84D: ANDA #$10
    cpu.m_a &= 0x10;

    // D84F: BEQ $0053
    if (cpu.zero_flag()) cpu.m_pc = 0xD8A4;

    // D851: LDA #$01
    cpu.m_a = 0x01;

    // D854: TFR A,B
    cpu.m_b = cpu.m_a;

    // D856: ADDB <$13
    cpu.m_b += 0x13;

    // D858: STB <$13
    cpu.write_memory(0x13, cpu.m_b);

    // D85A: ADDA <$12
    cpu.m_a += 0x12;

    // D85C: STA <$12
    cpu.write_memory(0x12, cpu.m_a);

    // D85E: INC $9,X
    // TODO: Convert INC $9,X

    // D860: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D862: CMPX #$480C
    cpu.compare_x(0x480C);

    // D865: LBGE $FFCE
    // TODO: Convert LBGE $FFCE

    // D869: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);

    // D870: LDB <$13
    cpu.m_b = cpu.read_memory(0x13);

    // D873: LDX #$D843
    cpu.m_x = 0xD843;

    // D876: SUBB A,X
    // TODO: Fix comma operator: SUBB A,X

    // D878: BCS $008B
    if (cpu.carry_flag()) cpu.m_pc = 0xD805;

    // D87A: ASL <$13
    // TODO: Convert ASL <$13

    // D87D: CMPA #$03
    cpu.compare_a(0x03);

    // D87F: BEQ $0085
    if (cpu.zero_flag()) cpu.m_pc = 0xD806;

    // D881: ADDB #$80
    cpu.m_b += 0x80;

    // D883: BCC $0089
    if (!cpu.carry_flag()) cpu.m_pc = 0xD80E;

    // D885: INC <$12
    // TODO: Convert INC <$12

    // D887: INC <$12
    // TODO: Convert INC <$12

    // D889: STB <$13
    cpu.write_memory(0x13, cpu.m_b);

    // D88B: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);

    // D88D: ANDA #$03
    cpu.m_a &= 0x03;

    // D88F: BEQ $00AC
    if (cpu.zero_flag()) cpu.m_pc = 0xD83D;

    // D891: TFR A,B
    cpu.m_b = cpu.m_a;

    // D895: ADDA <$12
    cpu.m_a += 0x12;

    // D897: BPL $00A4
    if (!cpu.negative_flag()) cpu.m_pc = 0xD83D;

    // D899: TST <$13
    // TODO: Convert TST <$13

    // D89B: BPL $00AE
    if (!cpu.negative_flag()) cpu.m_pc = 0xD84B;

    // D89E: BMI $00AE
    if (cpu.negative_flag()) cpu.m_pc = 0xD84E;

    // D8A0: ASL <$13
    // TODO: Convert ASL <$13

    // D8A2: LSR <$13
    // TODO: Convert LSR <$13

    // D8A4: CMPB #$01
    cpu.compare_b(0x01);

    // D8A6: BNE $00AA
    if (!cpu.zero_flag()) cpu.m_pc = 0xD852;

    // D8A8: INC <$14
    // TODO: Convert INC <$14

    // D8AA: INC <$14
    // TODO: Convert INC <$14

    // D8AC: STA <$12
    cpu.write_memory(0x12, cpu.m_a);

    // D8AE: LDB <$0A
    cpu.m_b = cpu.read_memory(0x0A);

    // D8B0: ANDB #$0F
    cpu.m_b &= 0x0F;

    // D8B2: BNE $00DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD892;

    // D8B4: LDX #$4817
    cpu.m_x = 0x4817;

    // D8B7: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8B9: BPL $00C0
    if (!cpu.negative_flag()) cpu.m_pc = 0xD87B;

    // D8BB: ANDA #$7F
    cpu.m_a &= 0x7F;

    // D8BE: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8C0: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8C2: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8C5: BGE $00B7
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD87E;

    // D8C8: BNE $00DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8A8;

    // D8CA: LDX #$4817
    cpu.m_x = 0x4817;

    // D8CD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8CF: BEQ $00D7
    if (cpu.zero_flag()) cpu.m_pc = 0xD8A8;

    // D8D1: ADDA #$7F
    cpu.m_a += 0x7F;

    // D8D3: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8D5: BRA $00DE
    cpu.m_pc = 0xD8B5;

    // D8D7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8D9: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8DC: BGE $00CD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD8AB;

    // D8DF: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D8E2: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8E5: BCC $00F1
    if (!cpu.carry_flag()) cpu.m_pc = 0xD8D8;

    // D8E7: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // D8E9: BNE $00EC
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8D7;

    // D8EC: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D8EF: BCS $00E7
    if (cpu.carry_flag()) cpu.m_pc = 0xD8D8;

    // D8F1: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // D8F3: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

    // D8F7: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D8FA: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // D8FC: BNE $0112
    if (!cpu.zero_flag()) cpu.m_pc = 0xD910;

    // D8FE: LDU $4AD9
    cpu.m_u = cpu.read_memory16(0x4AD9);

    // D901: CMPU #$4A52
    // TODO: Convert CMPU #$4A52

    // D905: BLS $0112
    // TODO: Convert BLS $0112

    // D907: LEAU -$1,U
    // TODO: Fix comma operator: LEAU -$1,U

    // D909: LDA ,U
    // TODO: Complex indexed addressing: ,U

    // D90B: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D90D: STU $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_u);

    // D910: LEAX ,U
    // TODO: Complex indexed addressing: ,U

    // D912: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // D914: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D917: BCS $00FA
    if (cpu.carry_flag()) cpu.m_pc = 0xD913;

    // D91A: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D91D: CLR ,X
    // TODO: Complex indexed addressing: ,X

    // D91F: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

    // D923: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D926: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D92A: BCC $0141
    if (!cpu.carry_flag()) cpu.m_pc = 0xD96D;

    // D92C: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D92E: CMPB #$D6
    cpu.compare_b(0xD6);

    // D930: BCC $013B
    if (!cpu.carry_flag()) cpu.m_pc = 0xD96D;

    // D932: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D935: JSR $E7DD
    cpu.call_function(0xE7DD);

    // D938: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D93B: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D93F: BCS $012C
    if (cpu.carry_flag()) cpu.m_pc = 0xD96D;

    // D942: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D945: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D949: BCC $015D
    if (!cpu.carry_flag()) cpu.m_pc = 0xD9A8;

    // D94B: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D94D: CMPB #$D6
    cpu.compare_b(0xD6);

    // D94F: BCC $0157
    if (!cpu.carry_flag()) cpu.m_pc = 0xD9A8;

    // D951: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D954: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D957: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D95B: BCS $014B
    if (cpu.carry_flag()) cpu.m_pc = 0xD9A8;

    // D95E: LDU $4ADD
    cpu.m_u = cpu.read_memory16(0x4ADD);

    // D961: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+

    // D963: LDD #$0000
    cpu.m_d = 0x0000;

    // D966: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // D968: LDD #$0100
    cpu.m_d = 0x0100;

    // D96B: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // D96D: STU $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_u);

    // D971: LDU #$4A66
    cpu.m_u = 0x4A66;

    // D974: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // D976: BNE $017C
    if (!cpu.zero_flag()) cpu.m_pc = 0xD9F4;

    // D978: LDA #$00
    cpu.m_a = 0x00;

    // D97A: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // D97C: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // D97E: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D982: BCS $0174
    if (cpu.carry_flag()) cpu.m_pc = 0xD9F8;

    // D985: LDU #$4A66
    cpu.m_u = 0x4A66;

    // D988: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D98C: BCC $01DB
    if (!cpu.carry_flag()) cpu.m_pc = 0xD969;

    // D98E: LDD #$7200
    cpu.m_d = 0x7200;

    // D991: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D993: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // D995: BEQ $01D3
    if (cpu.zero_flag()) cpu.m_pc = 0xD96A;

    // D997: STA $48AE
    cpu.write_memory(0x48AE, cpu.m_a);

    // D99A: LDD #$0198
    cpu.m_d = 0x0198;

    // D99D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D99F: LDD #$0000
    cpu.m_d = 0x0000;

    // D9A2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9A4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // D9A6: LDA #$71
    cpu.m_a = 0x71;

    // D9A8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9AB: ADDB #$10
    cpu.m_b += 0x10;

    // D9AD: LDA #$62
    cpu.m_a = 0x62;

    // D9AF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9B1: LDX #$E99E
    cpu.m_x = 0xE99E;

    // D9B4: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // D9B9: LDD #$1DD0
    cpu.m_d = 0x1DD0;

    // D9BC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9BE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // D9C0: ANDA #$1F
    cpu.m_a &= 0x1F;

    // D9C2: ORA #$00
    cpu.m_a |= 0x00;

    // D9C4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9C6: JSR $E821
    cpu.call_function(0xE821);

    // D9C9: LDD #$7200
    cpu.m_d = 0x7200;

    // D9CC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9CE: LDD #$8040
    cpu.m_d = 0x8040;

    // D9D1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // D9D3: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // D9D5: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D9D9: BCS $0193
    if (cpu.carry_flag()) cpu.m_pc = 0xD96E;

    // D9DC: LDD #$0000
    cpu.m_d = 0x0000;

    // D9DF: STD $4AE4
    cpu.write_memory16(0x4AE4, cpu.m_d);

    // D9E2: LDD #$6018
    cpu.m_d = 0x6018;

    // D9E5: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);

    // D9E8: LDD #$4A66
    cpu.m_d = 0x4A66;

    // D9EB: STD $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_d);

    // D9EE: LDD $DB2F
    cpu.m_d = cpu.read_memory16(0xDB2F);

    // D9F1: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);

    // D9F4: LDA #$51
    cpu.m_a = 0x51;

    // D9F6: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.m_a);

    // D9FA: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);

    // D9FD: ADDD #$0001
    cpu.m_d += 0x0001;

}

} // namespace StarWars