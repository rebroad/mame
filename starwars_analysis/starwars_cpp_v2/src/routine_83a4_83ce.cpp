#include "cpu_6809.h"

namespace StarWars {

void routine_83a4_83ce_impl(CPU6809& cpu) {
    // Converted from rom_disasm_83a4_83ce.md
    // Address: 0x83A4_83CE

    // 83A4: LDU #$4B3F
    cpu.m_u = 0x4B3F;

    // 83A7: LDX #$7C7E
    cpu.m_x = 0x7C7E;

    // 83AA: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // 83AC: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // 83AE: CMPU #$4B5F
    // TODO: Convert CMPU #$4B5F

    // 83B2: BCS $83AA
    if (cpu.carry_flag()) cpu.m_pc = 0x83AA;

    // 83B4: LDU #$4B43
    cpu.m_u = 0x4B43;

    // 83B7: LDX #$7C9E
    cpu.m_x = 0x7C9E;

    // 83BA: LDA #$11
    cpu.m_a = 0x11;

    // 83BC: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 83C1: LDD A,X
    // TODO: Fix comma operator: LDD A,X

    // 83C3: STD ,U
    // TODO: Handle indexed addressing: STD ,U

    // 83C5: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 83C7: CMPU #$4B5F
    // TODO: Convert CMPU #$4B5F

    // 83CB: BCS $83BA
    if (cpu.carry_flag()) cpu.m_pc = 0x83BA;

    // 83CE: JMP $83ce
    goto label_83CE;

}

} // namespace StarWars