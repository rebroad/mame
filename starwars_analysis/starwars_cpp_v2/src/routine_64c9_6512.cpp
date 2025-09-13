#include "cpu_6809.h"

namespace StarWars {

void routine_64c9_6512_impl(CPU6809& cpu) {
    // Converted from rom_disasm_64c9_6512.md
    // Address: 0x64C9_6512

    // 64C9: JSR $622D
    cpu.call_function(0x622D);

    // 64CD: LDB #$00
    cpu.m_b = 0x00;

    // 64CF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D2: LDB #$01
    cpu.m_b = 0x01;

    // 64D4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D7: LDB #$02
    cpu.m_b = 0x02;

    // 64D9: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64DC: LDB #$03
    cpu.m_b = 0x03;

    // 64DE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64E2: JSR $D91A
    cpu.call_function(0xD91A);

    // 64E5: LDD #$0000
    cpu.m_d = 0x0000;

    // 64E8: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 64EB: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);

    // 64EE: INC <$41
    // TODO: Convert INC <$41

    // 64F1: JSR $6112
    cpu.call_function(0x6112);

    // 64F4: JSR $BE20
    cpu.call_function(0xBE20);

    // 64F7: JSR $D923
    cpu.call_function(0xD923);

    // 64FA: JSR $612F
    cpu.call_function(0x612F);

    // 64FD: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 64FF: ANDA #$04
    cpu.m_a &= 0x04;

    // 6501: BEQ $6507
    if (cpu.zero_flag()) cpu.m_pc = 0x6507;

    // 6503: LDA #$03
    cpu.m_a = 0x03;

    // 6505: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6507: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 650A: ANDA #$10
    cpu.m_a &= 0x10;

    // 650C: BEQ $6512
    if (cpu.zero_flag()) cpu.m_pc = 0x6512;

    // 650E: LDA #$05
    cpu.m_a = 0x05;

    // 6510: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6512: JMP $6512
    goto label_6512;

}

} // namespace StarWars