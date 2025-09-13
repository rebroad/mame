#include "cpu_6809.h"

namespace StarWars {

void routine_e7dc_e811_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e7dc_e811.md
    // Address: 0xE7DC_E811

    label_E7DC:
    // E7DC: RTS 
    return;
    // E7DD: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);
    // E7E0: LDX #$EDA8
    cpu.m_x = 0xEDA8;
    // E7E3: ABX 
    // TODO: Convert ABX 
    // E7E4: ABX 
    // TODO: Convert ABX 
    // E7E5: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // E7E7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E7E9: RTS 
    return;
    // E7EA: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);
    // E7ED: LDX #$EA50
    cpu.m_x = 0xEA50;
    // E7F0: ABX 
    // TODO: Convert ABX 
    // E7F1: ABX 
    // TODO: Convert ABX 
    // E7F2: ABX 
    // TODO: Convert ABX 
    // E7F3: ABX 
    // TODO: Convert ABX 
    // E7F4: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X
    // E7F6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E7F8: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // E7FA: BRA $E811
    goto label_E811;
    // E7FC: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);
    // E7FF: LDX #$EA50
    cpu.m_x = 0xEA50;
    // E802: ABX 
    // TODO: Convert ABX 
    // E803: ABX 
    // TODO: Convert ABX 
    // E804: ABX 
    // TODO: Convert ABX 
    // E805: ABX 
    // TODO: Convert ABX 
    // E806: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X
    // E808: SUBD $48AF
    cpu.m_d -= 0x48AF;
    // E80B: ANDA #$1F
    cpu.m_a &= 0x1F;
    // E80D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // E80F: LDD ,X
    // TODO: Complex indexed addressing: ,X
    label_E811:
    // E811: JMP $e811
    goto label_E811;
}

} // namespace StarWars