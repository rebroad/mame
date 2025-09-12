#include "cpu_6809.h"

namespace StarWars {

void routine_d800_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_d800.md
    // Address: 0xD800

    // D800: DEC <$0B
    // TODO: Convert DEC <$0B

    // D802: LDA #$00
    cpu.state_.a = 0x00;

    // D804: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D806: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // D808: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // D80A: BEQ $0060
    if (cpu.zero_flag()) cpu.state_.pc += 0x0060;

    // D80C: DEC $3,X
    // TODO: Convert DEC $3,X

    // D80E: BEQ $002F
    if (cpu.zero_flag()) cpu.state_.pc += 0x002F;

    // D810: BRA $0060
    cpu.state_.pc += 0x0060;

    // D812: CMPA #$1B
    cpu.compare_a(0x1B);

    // D814: BCC $001E
    if (!cpu.carry_flag()) cpu.state_.pc += 0x001E;

    // D816: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D818: ADDA #$20
    cpu.state_.a += 0x20;

    // D81A: BCC $FFEF
    if (!cpu.carry_flag()) cpu.state_.pc += 0xFFEF;

    // D81C: BNE $0022
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0022;

    // D81E: LDA #$1F
    cpu.state_.a = 0x1F;

    // D820: BRA $FFEF
    cpu.state_.pc += 0xFFEF;

    // D822: LDA #$1F
    cpu.state_.a = 0x1F;

    // D824: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D826: LDB $3,X
    // TODO: Fix comma operator: LDB $3,X

    // D828: LDA #$78
    cpu.state_.a = 0x78;

    // D82A: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // D82D: BEQ $0060
    if (cpu.zero_flag()) cpu.state_.pc += 0x0060;

    // D830: CMPX #$480D
    cpu.compare_x(0x480D);

    // D833: BCS $0053
    if (cpu.carry_flag()) cpu.state_.pc += 0x0053;

    // D835: BEQ $004B
    if (cpu.zero_flag()) cpu.state_.pc += 0x004B;

    // D837: LDA <$09
    cpu.state_.a = cpu.read_memory(0x09);

    // D839: ANDA #$0C
    cpu.state_.a &= 0x0C;

    // D83D: BEQ $0053
    if (cpu.zero_flag()) cpu.state_.pc += 0x0053;

    // D83F: ADDA #$02
    cpu.state_.a += 0x02;

    // D841: BRA $0053
    cpu.state_.pc += 0x0053;

    // D843: STU $0408
    cpu.write_memory(0x0408, cpu.state_.u);

    // D846: ASL <$0A
    // TODO: Convert ASL <$0A

    // D848: STU $FFFF
    cpu.write_memory(0xFFFF, cpu.state_.u);

    // D84B: LDA <$09
    cpu.state_.a = cpu.read_memory(0x09);

    // D84D: ANDA #$10
    cpu.state_.a &= 0x10;

    // D84F: BEQ $0053
    if (cpu.zero_flag()) cpu.state_.pc += 0x0053;

    // D851: LDA #$01
    cpu.state_.a = 0x01;

    // D854: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // D856: ADDB <$13
    cpu.state_.b += 0x13;

    // D858: STB <$13
    cpu.write_memory(0x13, cpu.state_.b);

    // D85A: ADDA <$12
    cpu.state_.a += 0x12;

    // D85C: STA <$12
    cpu.write_memory(0x12, cpu.state_.a);

    // D85E: INC $9,X
    // TODO: Convert INC $9,X

    // D860: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D862: CMPX #$480C
    cpu.compare_x(0x480C);

    // D865: LBGE $FFCE
    // TODO: Convert LBGE $FFCE

    // D869: LDA <$09
    cpu.state_.a = cpu.read_memory(0x09);

    // D870: LDB <$13
    cpu.state_.b = cpu.read_memory(0x13);

    // D873: LDX #$D843
    cpu.state_.x = 0xD843;

    // D876: SUBB A,X
    // TODO: Fix comma operator: SUBB A,X

    // D878: BCS $008B
    if (cpu.carry_flag()) cpu.state_.pc += 0x008B;

    // D87A: ASL <$13
    // TODO: Convert ASL <$13

    // D87D: CMPA #$03
    cpu.compare_a(0x03);

    // D87F: BEQ $0085
    if (cpu.zero_flag()) cpu.state_.pc += 0x0085;

    // D881: ADDB #$80
    cpu.state_.b += 0x80;

    // D883: BCC $0089
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0089;

    // D885: INC <$12
    // TODO: Convert INC <$12

    // D887: INC <$12
    // TODO: Convert INC <$12

    // D889: STB <$13
    cpu.write_memory(0x13, cpu.state_.b);

    // D88B: LDA <$09
    cpu.state_.a = cpu.read_memory(0x09);

    // D88D: ANDA #$03
    cpu.state_.a &= 0x03;

    // D88F: BEQ $00AC
    if (cpu.zero_flag()) cpu.state_.pc += 0x00AC;

    // D891: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // D895: ADDA <$12
    cpu.state_.a += 0x12;

    // D897: BPL $00A4
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00A4;

    // D899: TST <$13
    // TODO: Convert TST <$13

    // D89B: BPL $00AE
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00AE;

    // D89E: BMI $00AE
    if (cpu.negative_flag()) cpu.state_.pc += 0x00AE;

    // D8A0: ASL <$13
    // TODO: Convert ASL <$13

    // D8A2: LSR <$13
    // TODO: Convert LSR <$13

    // D8A4: CMPB #$01
    cpu.compare_b(0x01);

    // D8A6: BNE $00AA
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00AA;

    // D8A8: INC <$14
    // TODO: Convert INC <$14

    // D8AA: INC <$14
    // TODO: Convert INC <$14

    // D8AC: STA <$12
    cpu.write_memory(0x12, cpu.state_.a);

    // D8AE: LDB <$0A
    cpu.state_.b = cpu.read_memory(0x0A);

    // D8B0: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // D8B2: BNE $00DE
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00DE;

    // D8B4: LDX #$4817
    cpu.state_.x = 0x4817;

    // D8B7: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8B9: BPL $00C0
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00C0;

    // D8BB: ANDA #$7F
    cpu.state_.a &= 0x7F;

    // D8BE: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8C0: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8C2: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8C5: BGE $00B7
    // TODO: Convert BGE $00B7

    // D8C8: BNE $00DE
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00DE;

    // D8CA: LDX #$4817
    cpu.state_.x = 0x4817;

    // D8CD: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // D8CF: BEQ $00D7
    if (cpu.zero_flag()) cpu.state_.pc += 0x00D7;

    // D8D1: ADDA #$7F
    cpu.state_.a += 0x7F;

    // D8D3: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // D8D5: BRA $00DE
    cpu.state_.pc += 0x00DE;

    // D8D7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // D8D9: CMPX #$4815
    cpu.compare_x(0x4815);

    // D8DC: BGE $00CD
    // TODO: Convert BGE $00CD

    // D8DF: LDX #$4A52
    cpu.state_.x = 0x4A52;

    // D8E2: CMPX $4AD9
    cpu.compare_x(cpu.read_memory_word(0x4AD9));

    // D8E5: BCC $00F1
    if (!cpu.carry_flag()) cpu.state_.pc += 0x00F1;

    // D8E7: CMPA ,X+
    // TODO: Complex indexed addressing: ,X+

    // D8E9: BNE $00EC
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00EC;

    // D8EC: CMPX $4AD9
    cpu.compare_x(cpu.read_memory_word(0x4AD9));

    // D8EF: BCS $00E7
    if (cpu.carry_flag()) cpu.state_.pc += 0x00E7;

    // D8F1: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // D8F3: STX $4AD9
    cpu.write_memory(0x4AD9, cpu.state_.x);

    // D8F7: LDX #$4A52
    cpu.state_.x = 0x4A52;

    // D8FA: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // D8FC: BNE $0112
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0112;

    // D8FE: LDU $4AD9
    cpu.state_.u = cpu.read_memory_word(0x4AD9);

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
    cpu.write_memory(0x4AD9, cpu.state_.u);

    // D910: LEAX ,U
    // TODO: Complex indexed addressing: ,U

    // D912: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // D914: CMPX $4AD9
    cpu.compare_x(cpu.read_memory_word(0x4AD9));

    // D917: BCS $00FA
    if (cpu.carry_flag()) cpu.state_.pc += 0x00FA;

    // D91A: LDX #$4A52
    cpu.state_.x = 0x4A52;

    // D91D: CLR ,X
    // TODO: Complex indexed addressing: ,X

    // D91F: STX $4AD9
    cpu.write_memory(0x4AD9, cpu.state_.x);

    // D923: LDU #$4A52
    cpu.state_.u = 0x4A52;

    // D926: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D92A: BCC $0141
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0141;

    // D92C: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D92E: CMPB #$D6
    cpu.compare_b(0xD6);

    // D930: BCC $013B
    if (!cpu.carry_flag()) cpu.state_.pc += 0x013B;

    // D932: STB $48AE
    cpu.write_memory(0x48AE, cpu.state_.b);

    // D935: JSR $E7DD
    cpu.call_function(0xE7DD);

    // D938: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D93B: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D93F: BCS $012C
    if (cpu.carry_flag()) cpu.state_.pc += 0x012C;

    // D942: LDU #$4A52
    cpu.state_.u = 0x4A52;

    // D945: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D949: BCC $015D
    if (!cpu.carry_flag()) cpu.state_.pc += 0x015D;

    // D94B: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D94D: CMPB #$D6
    cpu.compare_b(0xD6);

    // D94F: BCC $0157
    if (!cpu.carry_flag()) cpu.state_.pc += 0x0157;

    // D951: STB $48AE
    cpu.write_memory(0x48AE, cpu.state_.b);

    // D954: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D957: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D95B: BCS $014B
    if (cpu.carry_flag()) cpu.state_.pc += 0x014B;

    // D95E: LDU $4ADD
    cpu.state_.u = cpu.read_memory_word(0x4ADD);

    // D961: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+

    // D963: LDD #$0000
    cpu.state_.d = 0x0000;

    // D966: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // D968: LDD #$0100
    cpu.state_.d = 0x0100;

    // D96B: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // D96D: STU $4ADD
    cpu.write_memory(0x4ADD, cpu.state_.u);

    // D971: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // D974: CMPA ,U
    // TODO: Complex indexed addressing: ,U

    // D976: BNE $017C
    if (!cpu.zero_flag()) cpu.state_.pc += 0x017C;

    // D978: LDA #$00
    cpu.state_.a = 0x00;

    // D97A: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // D97C: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U

    // D97E: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D982: BCS $0174
    if (cpu.carry_flag()) cpu.state_.pc += 0x0174;

    // D985: LDU #$4A66
    cpu.state_.u = 0x4A66;

    // D988: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D98C: BCC $01DB
    if (!cpu.carry_flag()) cpu.state_.pc += 0x01DB;

    // D98E: LDD #$7200
    cpu.state_.d = 0x7200;

    // D991: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D993: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // D995: BEQ $01D3
    if (cpu.zero_flag()) cpu.state_.pc += 0x01D3;

    // D997: STA $48AE
    cpu.write_memory(0x48AE, cpu.state_.a);

    // D99A: LDD #$0198
    cpu.state_.d = 0x0198;

    // D99D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D99F: LDD #$0000
    cpu.state_.d = 0x0000;

    // D9A2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9A4: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // D9A6: LDA #$71
    cpu.state_.a = 0x71;

    // D9A8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9AB: ADDB #$10
    cpu.state_.b += 0x10;

    // D9AD: LDA #$62
    cpu.state_.a = 0x62;

    // D9AF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9B1: LDX #$E99E
    cpu.state_.x = 0xE99E;

    // D9B4: LDB $48AE
    cpu.state_.b = cpu.read_memory(0x48AE);

    // D9B9: LDD #$1DD0
    cpu.state_.d = 0x1DD0;

    // D9BC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9BE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // D9C0: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // D9C2: ORA #$00
    cpu.state_.a |= 0x00;

    // D9C4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9C6: JSR $E821
    cpu.call_function(0xE821);

    // D9C9: LDD #$7200
    cpu.state_.d = 0x7200;

    // D9CC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9CE: LDD #$8040
    cpu.state_.d = 0x8040;

    // D9D1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // D9D3: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // D9D5: CMPU $4ADD
    // TODO: Convert CMPU $4ADD

    // D9D9: BCS $0193
    if (cpu.carry_flag()) cpu.state_.pc += 0x0193;

    // D9DC: LDD #$0000
    cpu.state_.d = 0x0000;

    // D9DF: STD $4AE4
    cpu.write_memory(0x4AE4, cpu.state_.d);

    // D9E2: LDD #$6018
    cpu.state_.d = 0x6018;

    // D9E5: STD $4AE6
    cpu.write_memory(0x4AE6, cpu.state_.d);

    // D9E8: LDD #$4A66
    cpu.state_.d = 0x4A66;

    // D9EB: STD $4ADD
    cpu.write_memory(0x4ADD, cpu.state_.d);

    // D9EE: LDD $DB2F
    cpu.state_.d = cpu.read_memory_word(0xDB2F);

    // D9F1: STD $4AE2
    cpu.write_memory(0x4AE2, cpu.state_.d);

    // D9F4: LDA #$51
    cpu.state_.a = 0x51;

    // D9F6: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.state_.a);

    // D9FA: LDD $4AE4
    cpu.state_.d = cpu.read_memory_word(0x4AE4);

    // D9FD: ADDD #$0001
    cpu.state_.d += 0x0001;

}

} // namespace StarWars