#include "cpu_6809.h"

namespace StarWars {

void routine_6005_6036_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6005_6036.md
    // Address: 0x6005_6036

    label_6005:
    // 6005: LDX #$0000
    cpu.m_x = 0x0000;
    // 6008: LDD #$F800
    cpu.m_d = 0xF800;
    // 600B: LDA #$48
    cpu.m_a = 0x48;
    // 600D: TFR A,DP
    cpu.m_dp = cpu.m_a;
    // 600F: LSR <$3D
    // TODO: Convert LSR <$3D
    // 6011: BCC $6005
    if (!cpu.carry_flag()) cpu.m_pc = 0x6005;
    // 6013: CMPS #$4FFF
    // TODO: Convert CMPS #$4FFF
    // 6017: BEQ $601A
    if (cpu.zero_flag()) cpu.m_pc = 0x601A;
    // 6019: RTS 
    return;
    // 601A: LDA <$28
    cpu.m_a = cpu.read_memory(0x28);
    // 601C: BNE $602F
    if (!cpu.zero_flag()) cpu.m_pc = 0x602F;
    // 601E: LDA $4824
    cpu.m_a = cpu.read_memory(0x4824);
    // 6021: ANDA #$80
    cpu.m_a &= 0x80;
    // 6023: BNE $602F
    if (!cpu.zero_flag()) cpu.m_pc = 0x602F;
    // 6025: LDA <$31
    cpu.m_a = cpu.read_memory(0x31);
    // 6027: BITA #$80
    // TODO: Convert BITA #$80
    // 6029: BEQ $6005
    if (cpu.zero_flag()) cpu.m_pc = 0x6005;
    // 602B: ANDA #$7F
    cpu.m_a &= 0x7F;
    // 602D: STA <$31
    cpu.write_memory(0x31, cpu.m_a);
    // 602F: JSR $60BE
    cpu.call_function(0x60BE);
    // 6032: LDA <$3F
    cpu.m_a = cpu.read_memory(0x3F);
    // 6034: BMI $6032
    if (cpu.negative_flag()) cpu.m_pc = 0x6032;
    label_6036:
    // 6036: JMP $6036
    goto label_6036;
}

} // namespace StarWars