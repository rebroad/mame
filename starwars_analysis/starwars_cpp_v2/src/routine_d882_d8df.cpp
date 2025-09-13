#include "cpu_6809.h"

namespace StarWars {

void routine_d882_d8df_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d882_d8df.md
    // Address: 0xD882_D8DF

    label_D882:
    // D882: SUBA #$24
    cpu.m_a -= 0x24;
    // D884: LSR <$0C
    // TODO: Convert LSR <$0C
    // D886: NOP 
    // NOP;
    // D887: INC <$12
    // TODO: Convert INC <$12
    // D889: STB <$13
    cpu.write_memory(0x13, cpu.m_b);
    // D88B: LDA <$09
    cpu.m_a = cpu.read_memory(0x09);
    // D88D: ANDA #$03
    cpu.m_a &= 0x03;
    // D88F: BEQ $D8AC
    if (cpu.zero_flag()) cpu.m_pc = 0xD8AC;
    // D891: TFR A,B
    cpu.m_b = cpu.m_a;
    // D893: NEGA 
    cpu.m_a = -cpu.m_a;
    // D894: ASRA 
    // TODO: Convert ASRA 
    // D895: ADDA <$12
    cpu.m_a += 0x12;
    // D897: BPL $D8A4
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8A4;
    // D899: TST <$13
    // TODO: Convert TST <$13
    // D89B: BPL $D8AE
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8AE;
    // D89D: INCA 
    cpu.m_a++;
    // D89E: BMI $D8AE
    if (cpu.negative_flag()) cpu.m_pc = 0xD8AE;
    // D8A0: ASL <$13
    // TODO: Convert ASL <$13
    // D8A2: LSR <$13
    // TODO: Convert LSR <$13
    // D8A4: CMPB #$01
    cpu.compare_b(0x01);
    // D8A6: BNE $D8AA
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8AA;
    // D8A8: INC <$14
    // TODO: Convert INC <$14
    // D8AA: INC <$14
    // TODO: Convert INC <$14
    // D8AC: STA <$12
    cpu.write_memory(0x12, cpu.m_a);
    label_D8AE:
    // D8AE: LDB <$0A
    cpu.m_b = cpu.read_memory(0x0A);
    // D8B0: ANDB #$0F
    cpu.m_b &= 0x0F;
    // D8B2: BNE $D8DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8DE;
    // D8B4: LDX #$4817
    cpu.m_x = 0x4817;
    // D8B7: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // D8B9: BPL $D8C0
    if (!cpu.negative_flag()) cpu.m_pc = 0xD8C0;
    // D8BB: ANDA #$7F
    cpu.m_a &= 0x7F;
    // D8BD: INCB 
    cpu.m_b++;
    // D8BE: STA ,X
    // TODO: Handle indexed addressing: STA ,X
    // D8C0: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // D8C2: CMPX #$4815
    cpu.compare_x(0x4815);
    // D8C5: BGE $D8B7
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD8B7;
    // D8C7: TSTB 
    cpu.test_b();
    // D8C8: BNE $D8DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xD8DE;
    // D8CA: LDX #$4817
    cpu.m_x = 0x4817;
    // D8CD: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // D8CF: BEQ $D8D7
    if (cpu.zero_flag()) cpu.m_pc = 0xD8D7;
    // D8D1: ADDA #$7F
    cpu.m_a += 0x7F;
    // D8D3: STA ,X
    // TODO: Handle indexed addressing: STA ,X
    // D8D5: BRA $D8DE
    goto label_D8DE;
    // D8D7: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // D8D9: CMPX #$4815
    cpu.compare_x(0x4815);
    // D8DC: BGE $D8CD
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xD8CD;
    label_D8DE:
    // D8DE: RTS 
    return;
    label_D8DF:
    // D8DF: JMP $d8df
    goto label_D8DF;
}

} // namespace StarWars