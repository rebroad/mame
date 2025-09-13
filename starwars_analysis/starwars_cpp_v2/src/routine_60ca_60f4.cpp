#include "cpu_6809.h"

namespace StarWars {

void routine_60ca_60f4_impl(CPU6809& cpu) {
    // Converted from rom_disasm_60ca_60f4.md
    // Address: 0x60CA_60F4

    // 60CA: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60CD: BNE $60D4
    if (!cpu.zero_flag()) cpu.m_pc = 0x60D4;

    // 60CF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60D2: BRA $60F4
    goto label_60F4;

    // 60D4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60D7: BNE $60E4
    if (!cpu.zero_flag()) cpu.m_pc = 0x60E4;

    // 60D9: JSR $BD12
    cpu.call_function(0xBD12);

    // 60DC: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60DF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60E2: BRA $60F4
    goto label_60F4;

    // 60E4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60E7: CMPA $4814
    cpu.compare_a(cpu.read_memory(0x4814));

    // 60EA: BCC $60F4
    if (!cpu.carry_flag()) cpu.m_pc = 0x60F4;

    // 60EC: JSR $BD03
    cpu.call_function(0xBD03);

    // 60EF: LDA #$FF
    cpu.m_a = 0xFF;

    // 60F1: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60F4: JMP $60f4
    goto label_60F4;

}

} // namespace StarWars