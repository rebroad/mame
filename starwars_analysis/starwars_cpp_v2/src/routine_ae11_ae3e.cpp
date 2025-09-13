#include "cpu_6809.h"

namespace StarWars {

void routine_ae11_ae3e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_ae11_ae3e.md
    // Address: 0xAE11_AE3E

    label_AE11:
    // AE11: SUBD $5000
    cpu.m_d -= 0x5000;
    // AE14: BGE $AE5F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAE5F;
    // AE16: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);
    // AE19: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);
    // AE1C: LDA #$86
    cpu.m_a = 0x86;
    // AE1E: JSR $CDBA
    cpu.call_function(0xCDBA);
    // AE21: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);
    // AE24: ADDD #$FF98
    cpu.m_d += 0xFF98;
    // AE27: ANDA #$1F
    cpu.m_a &= 0x1F;
    // AE29: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AE2B: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);
    // AE2E: ANDA #$1F
    cpu.m_a &= 0x1F;
    // AE30: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AE32: LDD #$63FF
    cpu.m_d = 0x63FF;
    // AE35: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AE37: LDA #$06
    cpu.m_a = 0x06;
    // AE39: STA <$01
    cpu.write_memory(0x01, cpu.m_a);
    // AE3B: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);
    label_AE3E:
    // AE3E: JMP $ae3e
    goto label_AE3E;
}

} // namespace StarWars