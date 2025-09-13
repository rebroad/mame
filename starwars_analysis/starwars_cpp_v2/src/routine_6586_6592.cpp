#include "cpu_6809.h"

namespace StarWars {

void routine_6586_6592_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6586_6592.md
    // Address: 0x6586_6592

    // 6586: TFR B,A
    cpu.m_a = cpu.m_b;

    // 6588: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 658C: CMPB #$3A
    cpu.compare_b(0x3A);

    // 658E: BCS $6586
    if (cpu.carry_flag()) cpu.m_pc = 0x6586;

    // 6590: INC <$41
    // TODO: Convert INC <$41

}

} // namespace StarWars