#include "cpu_6809.h"

namespace StarWars {

void routine_640e_6458_impl(CPU6809& cpu) {
    // Converted from rom_disasm_640e_6458.md
    // Address: 0x640E_6458

    label_640E:
    // 640E: BRA $6458
    goto label_6458;

    // 6410: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 6413: ADDA $4812
    cpu.m_a += 0x4812;

    // 6416: CMPA #$01
    cpu.compare_a(0x01);

    // 6418: BNE $641E
    if (!cpu.zero_flag()) cpu.m_pc = 0x641E;

    // 641A: LDB #$0D
    cpu.m_b = 0x0D;

    // 641C: BRA $6420
    goto label_6420;

    // 641E: LDB #$0C
    cpu.m_b = 0x0C;

    label_6420:
    // 6420: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 6423: LDD #$01B0
    cpu.m_d = 0x01B0;

    // 6426: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 6428: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 642A: LDD #$FF80
    cpu.m_d = 0xFF80;

    // 642D: TST $4812
    // TODO: Convert TST $4812

    // 6430: BEQ $6435
    if (cpu.zero_flag()) cpu.m_pc = 0x6435;

    // 6432: SUBD #$0018
    cpu.m_d -= 0x0018;

    // 6435: ANDA #$1F
    cpu.m_a &= 0x1F;

    // 6437: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6439: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 643C: CMPA #$0A
    cpu.compare_a(0x0A);

    // 643E: BCS $6442
    if (cpu.carry_flag()) cpu.m_pc = 0x6442;

    // 6440: ADDA #$06
    cpu.m_a += 0x06;

    // 6442: LDB #$02
    cpu.m_b = 0x02;

    // 6444: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // 6446: JSR $E790
    cpu.call_function(0xE790);

    // 6449: LDA $4812
    cpu.m_a = cpu.read_memory(0x4812);

    // 644C: BEQ $6453
    if (cpu.zero_flag()) cpu.m_pc = 0x6453;

    // 644E: LDD #$B8F3
    cpu.m_d = 0xB8F3;

    // 6451: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6453: LDD #$8040
    cpu.m_d = 0x8040;

    // 6456: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

}

} // namespace StarWars