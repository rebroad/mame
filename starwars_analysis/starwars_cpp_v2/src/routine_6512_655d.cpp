#include "cpu_6809.h"

namespace StarWars {

void routine_6512_655d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6512_655d.md
    // Address: 0x6512_655D

    label_6512:
    // 6512: RTS 
    return;
    // 6513: JSR $D91A
    cpu.call_function(0xD91A);
    // 6516: LDA #$0A
    cpu.m_a = 0x0A;
    // 6518: STA $4AF6
    cpu.write_memory(0x4AF6, cpu.m_a);
    // 651B: LDA #$00
    cpu.m_a = 0x00;
    // 651D: STA $4598
    cpu.write_memory(0x4598, cpu.m_a);
    // 6520: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.m_a);
    // 6523: LDA #$03
    cpu.m_a = 0x03;
    // 6525: JSR $C2C3
    cpu.call_function(0xC2C3);
    // 6528: BEQ $652F
    if (cpu.zero_flag()) cpu.m_pc = 0x652F;
    // 652A: LDA #$03
    cpu.m_a = 0x03;
    // 652C: JSR $C369
    cpu.call_function(0xC369);
    // 652F: INC <$41
    // TODO: Convert INC <$41
    // 6531: RTS 
    return;
    // 6532: JSR $6112
    cpu.call_function(0x6112);
    // 6535: JSR $C450
    cpu.call_function(0xC450);
    // 6538: LDD #$6780
    cpu.m_d = 0x6780;
    // 653B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 653D: LDB #$66
    cpu.m_b = 0x66;
    // 653F: ADDB $4AF6
    cpu.m_b += 0x4AF6;
    // 6542: JSR $E7D3
    cpu.call_function(0xE7D3);
    // 6545: LDA $4AF6
    cpu.m_a = cpu.read_memory(0x4AF6);
    // 6548: JSR $C5A4
    cpu.call_function(0xC5A4);
    // 654B: JSR $C4EB
    cpu.call_function(0xC4EB);
    // 654E: JSR $D923
    cpu.call_function(0xD923);
    // 6551: JSR $612F
    cpu.call_function(0x612F);
    // 6554: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);
    // 6556: ANDA #$04
    cpu.m_a &= 0x04;
    // 6558: BEQ $655D
    if (cpu.zero_flag()) cpu.m_pc = 0x655D;
    // 655A: JMP $F261
    goto label_F261;
    label_655D:
    // 655D: JMP $655d
    goto label_655D;
}

} // namespace StarWars