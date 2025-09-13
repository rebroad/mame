#include "cpu_6809.h"

namespace StarWars {

void routine_d912_d95d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d912_d95d.md
    // Address: 0xD912_D95D

    label_D912:
    // D912: LEAX $1,X
    // TODO: Fix comma operator: LEAX $1,X

    // D914: CMPX $4AD9
    cpu.compare_x(cpu.read_memory16(0x4AD9));

    // D917: BCS $D8FA
    if (cpu.carry_flag()) cpu.m_pc = 0xD8FA;

    // D91A: LDX #$4A52
    cpu.m_x = 0x4A52;

    // D91D: CLR ,X
    // TODO: Complex indexed addressing: ,X

    // D91F: STX $4AD9
    cpu.write_memory16(0x4AD9, cpu.m_x);

    // D923: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D926: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D92A: BCC $D941
    if (!cpu.carry_flag()) cpu.m_pc = 0xD941;

    // D92C: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D92E: CMPB #$D6
    cpu.compare_b(0xD6);

    // D930: BCC $D93B
    if (!cpu.carry_flag()) cpu.m_pc = 0xD93B;

    // D932: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D935: JSR $E7DD
    cpu.call_function(0xE7DD);

    // D938: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D93B: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D93F: BCS $D92C
    if (cpu.carry_flag()) cpu.m_pc = 0xD92C;

    // D942: LDU #$4A52
    cpu.m_u = 0x4A52;

    // D945: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D949: BCC $D95D
    if (!cpu.carry_flag()) cpu.m_pc = 0xD95D;

    // D94B: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // D94D: CMPB #$D6
    cpu.compare_b(0xD6);

    // D94F: BCC $D957
    if (!cpu.carry_flag()) cpu.m_pc = 0xD957;

    // D951: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // D954: JSR $E7FC
    cpu.call_function(0xE7FC);

    // D957: CMPU $4AD9
    // TODO: Convert CMPU $4AD9

    // D95B: BCS $D94B
    if (cpu.carry_flag()) cpu.m_pc = 0xD94B;

    label_D95D:
    // D95D: JMP $d95d
    goto label_D95D;

}

} // namespace StarWars