#include "cpu_6809.h"

namespace StarWars {

void routine_e811_e82b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e811_e82b.md
    // Address: 0xE811_E82B

    label_E811:
    // E811: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E813: JSR $E821
    cpu.call_function(0xE821);
    // E816: LDD #$7200
    cpu.m_d = 0x7200;
    // E819: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E81B: LDD #$8040
    cpu.m_d = 0x8040;
    // E81E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E820: RTS 
    return;
    // E821: LDX #$E894
    cpu.m_x = 0xE894;
    // E824: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);
    // E827: ABX 
    // TODO: Convert ABX 
    // E828: ABX 
    // TODO: Convert ABX 
    // E829: LDX ,X
    // TODO: Complex indexed addressing: ,X
    label_E82B:
    // E82B: JMP $e82b
    goto label_E82B;
}

} // namespace StarWars