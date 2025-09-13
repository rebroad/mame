#include "cpu_6809.h"

namespace StarWars {

void routine_e790_e7c7_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e790_e7c7.md
    // Address: 0xE790_E7C7

    label_E790:
    // E790: TFR A,B
    cpu.m_b = cpu.m_a;
    // E792: LSRB 
    cpu.m_b >>= 1;
    // E793: LSRB 
    cpu.m_b >>= 1;
    label_E794:
    // E794: LSRB 
    cpu.m_b >>= 1;
    label_E795:
    // E795: ANDB #$1E
    cpu.m_b &= 0x1E;
    // E797: BNE $E7A2
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7A2;
    // E799: TST <$AD
    // TODO: Convert TST <$AD
    label_E79B:
    // E79B: BLE $E7A2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE7A2;
    // E79D: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);
    // E7A0: BRA $E7A9
    goto label_E7A9;
    // E7A2: CLR <$AD
    cpu.write_memory(0xAD, 0);
    // E7A4: LDU #$3004
    cpu.m_u = 0x3004;
    label_E7A7:
    // E7A7: LDU B,U
    // TODO: Fix comma operator: LDU B,U
    label_E7A9:
    // E7A9: DEC <$AD
    // TODO: Convert DEC <$AD
    // E7AB: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // E7AD: ASLA 
    cpu.m_a <<= 1;
    // E7AE: ANDA #$1E
    cpu.m_a &= 0x1E;
    // E7B0: BNE $E7BB
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7BB;
    // E7B2: TST <$AD
    // TODO: Convert TST <$AD
    // E7B4: BLE $E7BB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE7BB;
    // E7B6: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);
    // E7B9: BRA $E7C2
    goto label_E7C2;
    // E7BB: CLR <$AD
    cpu.write_memory(0xAD, 0);
    // E7BD: LDU #$3004
    cpu.m_u = 0x3004;
    // E7C0: LDU A,U
    // TODO: Fix comma operator: LDU A,U
    label_E7C2:
    // E7C2: DEC <$AD
    // TODO: Convert DEC <$AD
    // E7C4: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // E7C6: RTS 
    return;
    label_E7C7:
    // E7C7: JMP $e7c7
    goto label_E7C7;
}

} // namespace StarWars