#include "cpu_6809.h"

namespace StarWars {

void routine_7a48_7a7a_impl(CPU6809& cpu) {
    // Converted from rom_disasm_7a48_7a7a.md
    // Address: 0x7A48_7A7A

    label_7A48:
    // 7A48: LDU #$5090
    cpu.m_u = 0x5090;
    // 7A4B: JSR $CDC3
    cpu.call_function(0xCDC3);
    // 7A4E: LDD #$0000
    cpu.m_d = 0x0000;
    // 7A51: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);
    // 7A54: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);
    // 7A57: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);
    // 7A5A: LDD #$0000
    cpu.m_d = 0x0000;
    // 7A5D: STA <$62
    cpu.write_memory(0x62, cpu.m_a);
    // 7A5F: STA <$63
    cpu.write_memory(0x63, cpu.m_a);
    // 7A61: STA <$31
    cpu.write_memory(0x31, cpu.m_a);
    // 7A63: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);
    // 7A65: STA <$B7
    cpu.write_memory(0xB7, cpu.m_a);
    // 7A67: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);
    // 7A69: STD <$A3
    cpu.write_memory16(0xA3, cpu.m_d);
    // 7A6B: STA $4878
    cpu.write_memory(0x4878, cpu.m_a);
    // 7A6E: STA $486E
    cpu.write_memory(0x486E, cpu.m_a);
    // 7A71: STA $4877
    cpu.write_memory(0x4877, cpu.m_a);
    // 7A74: STD $4874
    cpu.write_memory16(0x4874, cpu.m_d);
    // 7A77: STD $486B
    cpu.write_memory16(0x486B, cpu.m_d);
    // 7A7A: RTS 
    return;
}

} // namespace StarWars