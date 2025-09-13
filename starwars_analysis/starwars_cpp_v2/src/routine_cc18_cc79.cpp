#include "cpu_6809.h"

namespace StarWars {

void routine_cc18_cc79_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cc18_cc79.md
    // Address: 0xCC18_CC79

    label_CC18:
    // CC18: JSR $CC5B
    cpu.call_function(0xCC5B);

    // CC1B: LDA #$01
    cpu.m_a = 0x01;

    // CC1D: JSR $C2C3
    cpu.call_function(0xC2C3);

    // CC20: BNE $CC38
    if (!cpu.zero_flag()) cpu.m_pc = 0xCC38;

    // CC22: LDU #$4AB6
    cpu.m_u = 0x4AB6;

    // CC25: LDX #$4520
    cpu.m_x = 0x4520;

    // CC28: LDA #$08
    cpu.m_a = 0x08;

    // CC2A: JSR $C6D9
    cpu.call_function(0xC6D9);

    // CC2D: LDU #$4A8E
    cpu.m_u = 0x4A8E;

    // CC30: LDX #$4508
    cpu.m_x = 0x4508;

    // CC33: LDA #$0B
    cpu.m_a = 0x0B;

    // CC35: JSR $C6D9
    cpu.call_function(0xC6D9);

    // CC38: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // CC3B: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // CC3D: CMPA #$1B
    cpu.compare_a(0x1B);

    // CC3F: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC41: CMPX #$4AD4
    cpu.compare_x(0x4AD4);

    // CC44: BCS $CC3B
    if (cpu.carry_flag()) cpu.m_pc = 0xCC3B;

    // CC46: LDX #$4A8E
    cpu.m_x = 0x4A8E;

    // CC49: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // CC4B: CMPA #$A0
    cpu.compare_a(0xA0);

    // CC4D: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC4F: ANDA #$0F
    cpu.m_a &= 0x0F;

    // CC51: CMPA #$0A
    cpu.compare_a(0x0A);

    // CC53: BCC $CC5B
    if (!cpu.carry_flag()) cpu.m_pc = 0xCC5B;

    // CC55: CMPX #$4AB6
    cpu.compare_x(0x4AB6);

    // CC58: BCS $CC49
    if (cpu.carry_flag()) cpu.m_pc = 0xCC49;

    // CC5B: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // CC5E: LDU #$CC7A
    cpu.m_u = 0xCC7A;

    // CC61: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // CC63: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // CC65: CMPX #$4AD4
    cpu.compare_x(0x4AD4);

    // CC68: BCS $CC61
    if (cpu.carry_flag()) cpu.m_pc = 0xCC61;

    // CC6A: LDX #$4A8E
    cpu.m_x = 0x4A8E;

    // CC6D: LDU #$CC98
    cpu.m_u = 0xCC98;

    // CC70: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // CC72: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // CC74: CMPX #$4AB6
    cpu.compare_x(0x4AB6);

    // CC77: BCS $CC70
    if (cpu.carry_flag()) cpu.m_pc = 0xCC70;

}

} // namespace StarWars