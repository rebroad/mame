#include "cpu_6809.h"

namespace StarWars {

void routine_ca9d_cac5_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ca9d_cac5.md
    // Address: 0xCA9D_CAC5

    label_CA9D:
    // CA9D: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // CA9F: CMPX #$4AB6
    cpu.compare_x(0x4AB6);

    // CAA2: BCS $CA8F
    if (cpu.carry_flag()) cpu.m_pc = 0xCA8F;

    // CAA5: JSR $CAB7
    cpu.call_function(0xCAB7);

    // CAA8: LDA #$00
    cpu.m_a = 0x00;

    // CAAA: STA $4AEE
    cpu.write_memory(0x4AEE, cpu.m_a);

    // CAAD: LDD #$0000
    cpu.m_d = 0x0000;

    // CAB0: STD $4AEF
    cpu.write_memory16(0x4AEF, cpu.m_d);

    // CAB3: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // CAB7: STX $4AEC
    cpu.write_memory16(0x4AEC, cpu.m_x);

    // CABA: LDU #$4AD1
    cpu.m_u = 0x4AD1;

    // CABD: LDX #$4AB2
    cpu.m_x = 0x4AB2;

    // CAC0: CMPX $4AEC
    cpu.compare_x(cpu.read_memory16(0x4AEC));

    // CAC3: BEQ $CADE
    if (cpu.zero_flag()) cpu.m_pc = 0xCADE;

    label_CAC5:
    // CAC5: JMP $cac5
    goto label_CAC5;

}

} // namespace StarWars