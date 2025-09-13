#include "cpu_6809.h"

namespace StarWars {

void routine_9898_98af_impl(CPU6809& cpu) {
    // Converted from rom_disasm_9898_98af.md
    // Address: 0x9898_98AF

    // 9898: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 989A: ANDA #$00
    cpu.m_a &= 0x00;

    // 989C: BNE $98AF
    if (!cpu.zero_flag()) cpu.m_pc = 0x98AF;

    // 989E: LDX #$4900
    cpu.m_x = 0x4900;

    // 98A1: DEC $6,X
    // TODO: Convert DEC $6,X

    // 98A3: BPL $98A7
    if (!cpu.negative_flag()) cpu.m_pc = 0x98A7;

    // 98A5: CLR $6,X
    // TODO: Fix comma operator: CLR $6,X

    // 98A7: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 98AA: CMPX #$494B
    cpu.compare_x(0x494B);

    // 98AD: BCS $98A1
    if (cpu.carry_flag()) cpu.m_pc = 0x98A1;

}

} // namespace StarWars