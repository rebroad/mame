#include "cpu_6809.h"

namespace StarWars {

void routine_c421_c434_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c421_c434.md
    // Address: 0xC421_C434

    label_C421:
    // C421: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);
    // C423: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // C425: CMPX #$4600
    cpu.compare_x(0x4600);
    // C428: BCS $C421
    if (cpu.carry_flag()) cpu.m_pc = 0xC421;
    // C42A: JSR $C6B8
    cpu.call_function(0xC6B8);
    // C42D: LDX #$4500
    cpu.m_x = 0x4500;
    // C430: LDY #$4C00
    cpu.m_y = 0x4C00;
    label_C434:
    // C434: JMP $c434
    goto label_C434;
}

} // namespace StarWars