#include "cpu_6809.h"

namespace StarWars {

void routine_868a_8695_impl(CPU6809& cpu) {
    // Converted from rom_disasm_868a_8695.md
    // Address: 0x868A_8695

    label_868A:
    // 868A: LDX -$10,X
    // TODO: Fix comma operator: LDX -$10,X
    // 868C: BCS $868D
    if (cpu.carry_flag()) cpu.m_pc = 0x868D;
    // 868E: ASL $FC50
    // TODO: Convert ASL $FC50
    // 8691: EORA <$FD
    cpu.m_a ^= 0xFD;
    // 8693: NEGB 
    cpu.m_b = -cpu.m_b;
    // 8694: NEGA 
    cpu.m_a = -cpu.m_a;
    // 8695: RTS 
    return;
}

} // namespace StarWars