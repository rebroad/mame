#include "cpu_0x6809.h"

namespace StarWars {

void routine_0xE790_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_0xE790.md
    // Address: 0x0xE790

    // Converted from rom_disasm_auto_0xE790.md
    // Address: 0xROUTINE_0xE790
    // 0xE790: TFR cpu.state_.a,cpu.state_.b
    cpu.state_.cpu.state_.b = cpu.state_.cpu.state_.a;
    // 0xE795: ANDB 0x0x1E
    cpu.state_.b &= 0x1E;
    // 0xE797: BNE 0x0xE7A2
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xE7A2;
    // 0xE799: TST <0xAD
    // TODO: Convert TST <0xAD
    // 0xE79B: BLE 0x0xE7A2
    // TODO: Convert BLE 0x0xE7A2
    // 0xE79D: LDU 0x0x3002
    cpu.state_.u = 0x3002;
    // 0xE7A0: BRA 0x0xE7A9
    cpu.state_.pc += 0xE7A9;
    // 0xE7A2: CLR <0xAD
    cpu.cpu.write_memory(0xAD,  0);
    // 0xE7A4: LDU 0x0x3004
    cpu.state_.u = 0x3004;
    // 0xE7A7: LDU cpu.state_.b,cpu.state_.u
    cpu.state_.u = cpu.state_.b,cpu.state_.u;
    // 0xE7A9: DEC <0xAD
    // TODO: Convert DEC <0xAD
    // 0xE7AB: STU ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.u);
    // 0xE7AE: ANDA 0x0x1E
    cpu.state_.a &= 0x1E;
    // 0xE7B0: BNE 0x0xE7BB
    if (!cpu.cpu.zero_flag()) cpu.state_.pc += 0xE7BB;
    // 0xE7B2: TST <0xAD
    // TODO: Convert TST <0xAD
    // 0xE7B4: BLE 0x0xE7BB
    // TODO: Convert BLE 0x0xE7BB
    // 0xE7B6: LDU 0x0x3002
    cpu.state_.u = 0x3002;
    // 0xE7B9: BRA 0x0xE7C2
    cpu.state_.pc += 0xE7C2;
    // 0xE7BB: CLR <0xAD
    cpu.cpu.write_memory(0xAD,  0);
    // 0xE7BD: LDU 0x0x3004
    cpu.state_.u = 0x3004;
    // 0xE7C0: LDU cpu.state_.a,cpu.state_.u
    cpu.state_.u = cpu.state_.a,cpu.state_.u;
    // 0xE7C2: DEC <0xAD
    // TODO: Convert DEC <0xAD
    // 0xE7C4: STU ,cpu.state_.y++
    cpu.cpu.write_memory(0, cpu.state_.y++,  cpu.state_.u);
}

} // namespace StarWars
