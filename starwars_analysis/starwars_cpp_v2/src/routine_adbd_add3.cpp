#include "cpu_6809.h"

namespace StarWars {

void routine_adbd_add3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_adbd_add3.md
    // Address: 0xADBD_ADD3

    // ADBD: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // ADC0: LDD <$4A
    cpu.m_d = cpu.read_memory16(0x4A);

    // ADC2: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // ADC5: JSR $ADD4
    cpu.call_function(0xADD4);

    // ADC8: LDD <$48
    cpu.m_d = cpu.read_memory16(0x48);

    // ADCA: SUBD #$0080
    cpu.m_d -= 0x0080;

    // ADCD: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // ADD0: JSR $ADD4
    cpu.call_function(0xADD4);

}

} // namespace StarWars