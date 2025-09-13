#include "cpu_6809.h"

namespace StarWars {

void routine_caf3_cb08_impl(CPU6809& cpu) {
    // Converted from rom_disasm_caf3_cb08.md
    // Address: 0xCAF3_CB08

    label_CAF3:
    // CAF3: LDX $4AEC
    cpu.m_x = cpu.read_memory16(0x4AEC);
    // CAF6: LDB $4AEE
    cpu.m_b = cpu.read_memory(0x4AEE);
    // CAF9: ABX 
    // TODO: Convert ABX 
    // CAFA: TFR X,U
    cpu.m_u = cpu.m_x;
    // CAFC: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);
    // CAFF: CMPA #$03
    cpu.compare_a(0x03);
    // CB01: BCS $CB08
    if (cpu.carry_flag()) cpu.m_pc = 0xCB08;
    // CB03: LDX #$CC10
    cpu.m_x = 0xCC10;
    // CB06: BRA $CB0B
    goto label_CB0B;
    label_CB08:
    // CB08: JMP $cb08
    goto label_CB08;
}

} // namespace StarWars