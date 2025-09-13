#include "cpu_6809.h"

namespace StarWars {

void routine_60be_60ca_impl(CPU6809& cpu) {
    // Converted from rom_disasm_60be_60ca.md
    // Address: 0x60BE_60CA

    label_60BE:
    // 60BE: INC <$43
    // TODO: Convert INC <$43
    // 60C0: BNE $60CA
    if (!cpu.zero_flag()) cpu.m_pc = 0x60CA;
    // 60C2: INC <$42
    // TODO: Convert INC <$42
    // 60C4: BNE $60CA
    if (!cpu.zero_flag()) cpu.m_pc = 0x60CA;
    // 60C6: LDA #$80
    cpu.m_a = 0x80;
    // 60C8: STA <$42
    cpu.write_memory(0x42, cpu.m_a);
    label_60CA:
    // 60CA: JMP $60ca
    goto label_60CA;
}

} // namespace StarWars