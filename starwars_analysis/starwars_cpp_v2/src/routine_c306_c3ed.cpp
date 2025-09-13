#include "cpu_6809.h"

namespace StarWars {

void routine_c306_c3ed_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c306_c3ed.md
    // Address: 0xC306_C3ED

    label_C306:
    // C306: LDX #$4500
    cpu.m_x = 0x4500;
    // C309: LDU #$4C00
    cpu.m_u = 0x4C00;
    // C30C: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // C30E: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // C310: CMPX #$4600
    cpu.compare_x(0x4600);
    // C313: BCS $C30C
    if (cpu.carry_flag()) cpu.m_pc = 0xC30C;
    // C315: LDA #$FF
    cpu.m_a = 0xFF;
    // C317: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);
    // C31A: LDX #$0100
    cpu.m_x = 0x0100;
    // C31D: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // C320: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // C322: BNE $C31D
    if (!cpu.zero_flag()) cpu.m_pc = 0xC31D;
    // C324: LDA #$00
    cpu.m_a = 0x00;
    // C326: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);
    // C329: LDX #$A000
    cpu.m_x = 0xA000;
    // C32C: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);
    // C32F: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // C331: BNE $C32C
    if (!cpu.zero_flag()) cpu.m_pc = 0xC32C;
    // C333: LDX #$4500
    cpu.m_x = 0x4500;
    // C336: LDY #$4C00
    cpu.m_y = 0x4C00;
    // C33A: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // C33C: LDD ,Y
    // TODO: Complex indexed addressing: ,Y
    // C33E: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // C340: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);
    // C342: CMPX #$4600
    cpu.compare_x(0x4600);
    // C345: BCS $C33A
    if (cpu.carry_flag()) cpu.m_pc = 0xC33A;
    // C347: LDA #$03
    cpu.m_a = 0x03;
    // C349: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C34C: BEQ $C37C
    if (cpu.zero_flag()) cpu.m_pc = 0xC37C;
    // C34E: LDA #$00
    cpu.m_a = 0x00;
    // C350: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C353: BEQ $C36C
    if (cpu.zero_flag()) cpu.m_pc = 0xC36C;
    // C355: JSR $C3EE
    cpu.call_function(0xC3EE);
    // C358: LDA #$03
    cpu.m_a = 0x03;
    // C35A: JSR $C3EE
    cpu.call_function(0xC3EE);
    // C35D: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C360: BEQ $C37C
    if (cpu.zero_flag()) cpu.m_pc = 0xC37C;
    // C362: LDA #$00
    cpu.m_a = 0x00;
    // C364: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C367: BEQ $C36C
    if (cpu.zero_flag()) cpu.m_pc = 0xC36C;
    // C369: JSR $C24E
    cpu.call_function(0xC24E);
    // C36C: LDX #$C7B6
    cpu.m_x = 0xC7B6;
    // C36F: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X
    // C373: LDX #$4500
    cpu.m_x = 0x4500;
    // C376: ABX 
    // TODO: Convert ABX 
    // C377: LDU #$4500
    cpu.m_u = 0x4500;
    // C37A: BRA $C3B7
    goto label_C3B7;
    // C37C: LDA #$00
    cpu.m_a = 0x00;
    // C37E: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C381: BNE $C3A7
    if (!cpu.zero_flag()) cpu.m_pc = 0xC3A7;
    // C383: LDA $4596
    cpu.m_a = cpu.read_memory(0x4596);
    // C386: ANDA #$0F
    cpu.m_a &= 0x0F;
    // C388: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);
    // C38B: LDA $4506
    cpu.m_a = cpu.read_memory(0x4506);
    // C38E: ANDA #$0F
    cpu.m_a &= 0x0F;
    // C390: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));
    // C393: BNE $C3A5
    if (!cpu.zero_flag()) cpu.m_pc = 0xC3A5;
    // C395: LDA $4597
    cpu.m_a = cpu.read_memory(0x4597);
    // C398: ANDA #$0F
    cpu.m_a &= 0x0F;
    // C39A: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);
    // C39D: LDA $4507
    cpu.m_a = cpu.read_memory(0x4507);
    // C3A0: ANDA #$0F
    cpu.m_a &= 0x0F;
    // C3A2: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));
    // C3A5: BEQ $C3C6
    if (cpu.zero_flag()) cpu.m_pc = 0xC3C6;
    // C3A7: LDX #$C7B6
    cpu.m_x = 0xC7B6;
    // C3AA: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X
    // C3AE: LDX #$4500
    cpu.m_x = 0x4500;
    // C3B1: ABX 
    // TODO: Convert ABX 
    // C3B2: TFR X,U
    cpu.m_u = cpu.m_x;
    // C3B4: LDX #$4500
    cpu.m_x = 0x4500;
    label_C3B7:
    // C3B7: LDB $C7B7
    cpu.m_b = cpu.read_memory(0xC7B7);
    // C3BA: STB $4B02
    cpu.write_memory(0x4B02, cpu.m_b);
    // C3BD: LDB ,U+
    // TODO: Complex indexed addressing: ,U+
    // C3BF: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+
    // C3C1: DEC $4B02
    // TODO: Convert DEC $4B02
    // C3C4: BNE $C3BD
    if (!cpu.zero_flag()) cpu.m_pc = 0xC3BD;
    // C3C6: LDA #$02
    cpu.m_a = 0x02;
    // C3C8: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C3CB: BEQ $C3D8
    if (cpu.zero_flag()) cpu.m_pc = 0xC3D8;
    // C3CD: JSR $C3EE
    cpu.call_function(0xC3EE);
    // C3D0: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C3D3: BEQ $C3D8
    if (cpu.zero_flag()) cpu.m_pc = 0xC3D8;
    // C3D5: JSR $C24E
    cpu.call_function(0xC24E);
    // C3D8: DECA 
    cpu.m_a--;
    // C3D9: BNE $C3C8
    if (!cpu.zero_flag()) cpu.m_pc = 0xC3C8;
    // C3DB: LDX #$455C
    cpu.m_x = 0x455C;
    // C3DE: JSR $C6D4
    cpu.call_function(0xC6D4);
    // C3E1: LDD $4AFA
    cpu.m_d = cpu.read_memory16(0x4AFA);
    // C3E4: STD $4B04
    cpu.write_memory16(0x4B04, cpu.m_d);
    // C3E7: LDD $4AFC
    cpu.m_d = cpu.read_memory16(0x4AFC);
    // C3EA: STD $4B06
    cpu.write_memory16(0x4B06, cpu.m_d);
    // C3ED: RTS 
    return;
}

} // namespace StarWars