#include "cpu_6809.h"

namespace StarWars {

void routine_6864_68cf_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6864_68cf.md
    // Address: 0x6864_68CF

    label_6864:
    // 6864: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // 6865: JSR $9898
    cpu.call_function(0x9898);
    // 6868: JSR $B98B
    cpu.call_function(0xB98B);
    // 686B: JSR $9890
    cpu.call_function(0x9890);
    // 686E: JSR $9558
    cpu.call_function(0x9558);
    // 6871: JSR $8B6D
    cpu.call_function(0x8B6D);
    // 6874: JSR $70DB
    cpu.call_function(0x70DB);
    // 6877: JSR $6DD2
    cpu.call_function(0x6DD2);
    // 687A: LDA #$10
    cpu.m_a = 0x10;
    // 687C: JSR $CE0C
    cpu.call_function(0xCE0C);
    // 687F: JSR $6F5F
    cpu.call_function(0x6F5F);
    // 6882: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);
    // 6885: ADDD #$0001
    cpu.m_d += 0x0001;
    // 6888: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);
    // 688B: CMPD #$0028
    // TODO: Convert CMPD #$0028
    // 688F: BNE $68A6
    if (!cpu.zero_flag()) cpu.m_pc = 0x68A6;
    // 6891: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);
    // 6894: CMPA #$03
    cpu.compare_a(0x03);
    // 6896: BLT $68A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x68A1;
    // 6898: ANDA #$01
    cpu.m_a &= 0x01;
    // 689A: BEQ $68A1
    if (cpu.zero_flag()) cpu.m_pc = 0x68A1;
    // 689C: JSR $BD85
    cpu.call_function(0xBD85);
    // 689F: BRA $68A4
    goto label_68A4;
    // 68A1: JSR $BDA8
    cpu.call_function(0xBDA8);
    label_68A4:
    // 68A4: BRA $68C6
    goto label_68C6;
    // 68A6: CMPD #$00C8
    // TODO: Convert CMPD #$00C8
    // 68AA: BNE $68B1
    if (!cpu.zero_flag()) cpu.m_pc = 0x68B1;
    // 68AC: JSR $BDAD
    cpu.call_function(0xBDAD);
    // 68AF: BRA $68C6
    goto label_68C6;
    // 68B1: CMPD #$0190
    // TODO: Convert CMPD #$0190
    // 68B5: BNE $68BC
    if (!cpu.zero_flag()) cpu.m_pc = 0x68BC;
    // 68B7: JSR $BD8A
    cpu.call_function(0xBD8A);
    // 68BA: BRA $68C6
    goto label_68C6;
    // 68BC: CMPD #$01A4
    // TODO: Convert CMPD #$01A4
    // 68C0: BCS $68C6
    if (cpu.carry_flag()) cpu.m_pc = 0x68C6;
    // 68C2: LDA #$21
    cpu.m_a = 0x21;
    // 68C4: STA <$41
    cpu.write_memory(0x41, cpu.m_a);
    label_68C6:
    // 68C6: LDA <$E6
    cpu.m_a = cpu.read_memory(0xE6);
    // 68C8: CMPA #$03
    cpu.compare_a(0x03);
    // 68CA: BCC $68CF
    if (!cpu.carry_flag()) cpu.m_pc = 0x68CF;
    // 68CC: JSR $8F7B
    cpu.call_function(0x8F7B);
    // 68CF: RTS 
    return;
}

} // namespace StarWars