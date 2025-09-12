#include "cpu_6809.h"

namespace StarWars {

void routine_e790_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_e790.md
    // Address: 0xE790

    // Converted from rom_disasm_auto_e790.md
    // Address: 0xROUTINE_E790
    // E790: TFR A,B
    cpu.state_.B = cpu.state_.A;
    // E795: ANDB #$1E
    cpu.state_.b &= 1E;
    // E797: BNE $E7A2
    if (!cpu.zero_flag()) cpu.state_.pc += E7A2;
    // E799: TST <$AD
    // TODO: Convert TST <$AD
    // E79B: BLE $E7A2
    // TODO: Convert BLE $E7A2
    // E79D: LDU $3002
    cpu.state_.u = 3002;
    // E7A0: BRA $E7A9
    cpu.state_.pc += E7A9;
    // E7A2: CLR <$AD
    cpu.write_memory($AD, 0);
    // E7A4: LDU #$3004
    cpu.state_.u = 3004;
    // E7A7: LDU B,U
    cpu.state_.u = B,U;
    // E7A9: DEC <$AD
    // TODO: Convert DEC <$AD
    // E7AB: STU ,Y++
    cpu.write_memory(,Y++, cpu.state_.u);
    // E7AE: ANDA #$1E
    cpu.state_.a &= 1E;
    // E7B0: BNE $E7BB
    if (!cpu.zero_flag()) cpu.state_.pc += E7BB;
    // E7B2: TST <$AD
    // TODO: Convert TST <$AD
    // E7B4: BLE $E7BB
    // TODO: Convert BLE $E7BB
    // E7B6: LDU $3002
    cpu.state_.u = 3002;
    // E7B9: BRA $E7C2
    cpu.state_.pc += E7C2;
    // E7BB: CLR <$AD
    cpu.write_memory($AD, 0);
    // E7BD: LDU #$3004
    cpu.state_.u = 3004;
    // E7C0: LDU A,U
    cpu.state_.u = A,U;
    // E7C2: DEC <$AD
    // TODO: Convert DEC <$AD
    // E7C4: STU ,Y++
    cpu.write_memory(,Y++, cpu.state_.u);
}

} // namespace StarWars
