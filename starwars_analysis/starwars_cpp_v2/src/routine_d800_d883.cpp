#include "cpu_6809.h"

namespace StarWars {

void routine_d800_d883_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d800_d883.md
    // Address: 0xD800_D883

    label_D800:
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
    // D80A: BEQ $D860
    if (cpu.zero_flag()) cpu.m_pc = 0xD860;
    // D80C: DEC $3,X
    // TODO: Convert DEC $3,X
    // D80E: BEQ $D82F
    if (cpu.zero_flag()) cpu.m_pc = 0xD82F;
    // D810: BRA $D860
    goto label_D860;
    // D812: CMPA #$1B
    cpu.compare_a(0x1B);
    // D814: BCC $D81E
    if (!cpu.carry_flag()) cpu.m_pc = 0xD81E;
    // D816: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // D818: ADDA #$20
    cpu.m_a += 0x20;
    // D81A: BCC $D7EF
    if (!cpu.carry_flag()) cpu.m_pc = 0xD7EF;
    // D81C: BNE $D822
    if (!cpu.zero_flag()) cpu.m_pc = 0xD822;
    // D81E: LDA #$1F
    cpu.m_a = 0x1F;
    // D820: BRA $D7EF
    goto label_D7EF;
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
    // D82C: TSTB 
    cpu.test_b();
    // D82D: BEQ $D860
    if (cpu.zero_flag()) cpu.m_pc = 0xD860;
    // D82F: CLRA 
    cpu.m_a = 0;
    // D830: CMPX #$480D
    cpu.compare_x(0x480D);
    // D833: BCS $D853
    if (cpu.carry_flag()) cpu.m_pc = 0xD853;
    // D835: BEQ $D84B
    if (cpu.zero_flag()) cpu.m_pc = 0xD84B;
    // D837: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);
    // D839: ANDA #$0C
    cpu.m_a &= 0x0C;
    // D83B: LSRA 
    cpu.m_a >>= 1;
    // D83C: LSRA 
    cpu.m_a >>= 1;
    // D83D: BEQ $D853
    if (cpu.zero_flag()) cpu.m_pc = 0xD853;
    // D83F: ADDA #$02
    cpu.m_a += 0x02;
    // D841: BRA $D853
    goto label_D853;
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
    // D84F: BEQ $D853
    if (cpu.zero_flag()) cpu.m_pc = 0xD853;
    // D851: LDA #$01
    cpu.m_a = 0x01;
    label_D853:
    // D853: INCA 
    cpu.m_a++;
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
    label_D860:
    // D860: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // D862: CMPX #$480C
    cpu.compare_x(0x480C);
    // D865: LBGE $D7CE
    // TODO: Convert LBGE $D7CE
    // D869: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);
    // D86B: LSRA 
    cpu.m_a >>= 1;
    // D86C: LSRA 
    cpu.m_a >>= 1;
    // D86D: LSRA 
    cpu.m_a >>= 1;
    // D86E: LSRA 
    cpu.m_a >>= 1;
    // D86F: LSRA 
    cpu.m_a >>= 1;
    // D870: LDB <$13
    cpu.m_b = cpu.read_memory(0x13);
    // D872: ASLB 
    cpu.m_b <<= 1;
    // D873: LDX #$D843
    cpu.m_x = 0xD843;
    // D876: SUBB A,X
    // TODO: Fix comma operator: SUBB A,X
    // D878: BCS $D88B
    if (cpu.carry_flag()) cpu.m_pc = 0xD88B;
    // D87A: ASL <$13
    // TODO: Convert ASL <$13
    // D87C: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // D87D: CMPA #$03
    cpu.compare_a(0x03);
    // D87F: BEQ $D885
    if (cpu.zero_flag()) cpu.m_pc = 0xD885;
    // D881: ADDB #$80
    cpu.m_b += 0x80;
    label_D883:
    // D883: JMP $d882
    goto label_D882;
}

} // namespace StarWars