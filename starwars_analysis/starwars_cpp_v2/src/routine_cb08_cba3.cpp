#include "cpu_6809.h"

namespace StarWars {

void routine_cb08_cba3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cb08_cba3.md
    // Address: 0xCB08_CBA3

    // CB08: LDX #$CBA4
    cpu.m_x = 0xCBA4;

    // CB0B: LDD $4879
    cpu.m_d = cpu.read_memory16(0x4879);

    // CB0E: SUBD #$0008
    cpu.m_d -= 0x0008;

    // CB11: SUBD ,X
    // TODO: Complex indexed addressing: ,X

    // CB14: BPL $CB1A
    if (!cpu.negative_flag()) cpu.m_pc = 0xCB1A;

    // CB18: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // CB1A: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // CB1C: CMPD #$0018
    // TODO: Convert CMPD #$0018

    // CB20: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB22: LDD $487B
    cpu.m_d = cpu.read_memory16(0x487B);

    // CB25: ADDD #$FF8C
    cpu.m_d += 0xFF8C;

    // CB28: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // CB2B: BPL $CB31
    if (!cpu.negative_flag()) cpu.m_pc = 0xCB31;

    // CB2F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // CB31: CMPD #$0018
    // TODO: Convert CMPD #$0018

    // CB35: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB37: ADDD <$01
    cpu.m_d += 0x01;

    // CB39: CMPD #$0020
    // TODO: Convert CMPD #$0020

    // CB3D: BCC $CB49
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB49;

    // CB3F: TFR X,D
    cpu.m_d = cpu.m_x;

    // CB41: SUBD #$CBA4
    cpu.m_d -= 0xCBA4;

    // CB46: STB $4AEF
    cpu.write_memory(0x4AEF, cpu.m_b);

    // CB49: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // CB4B: CMPX #$CC18
    cpu.compare_x(0xCC18);

    // CB4E: BCS $CB0B
    if (cpu.carry_flag()) cpu.m_pc = 0xCB0B;

    // CB50: LDA $4AEF
    cpu.m_a = cpu.read_memory(0x4AEF);

    // CB53: CMPA #$1B
    cpu.compare_a(0x1B);

    // CB55: BCC $CB59
    if (!cpu.carry_flag()) cpu.m_pc = 0xCB59;

    // CB57: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // CB59: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // CB5B: ANDA #$F0
    cpu.m_a &= 0xF0;

    // CB5D: BEQ $CBA3
    if (cpu.zero_flag()) cpu.m_pc = 0xCBA3;

    // CB5F: LDA $4AEF
    cpu.m_a = cpu.read_memory(0x4AEF);

    // CB62: CMPA #$1B
    cpu.compare_a(0x1B);

    // CB64: BNE $CB82
    if (!cpu.zero_flag()) cpu.m_pc = 0xCB82;

    // CB66: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB69: CMPA #$02
    cpu.compare_a(0x02);

    // CB6B: BHI $CB71
    // TODO: Convert BHI $CB71

    // CB6D: LDA #$00
    cpu.m_a = 0x00;

    // CB6F: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // CB71: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB74: BEQ $CB7D
    if (cpu.zero_flag()) cpu.m_pc = 0xCB7D;

    // CB76: DEC $4AEE
    // TODO: Convert DEC $4AEE

    // CB79: LDA #$00
    cpu.m_a = 0x00;

    // CB7B: STA -$1,U
    // TODO: Handle indexed addressing: STA -$1,U

    // CB7D: JSR $BDF8
    cpu.call_function(0xBDF8);

    // CB80: BRA $CBA3
    goto label_CBA3;

    // CB82: CMPA #$1C
    cpu.compare_a(0x1C);

    // CB84: BNE $CB91
    if (!cpu.zero_flag()) cpu.m_pc = 0xCB91;

    // CB86: LDD #$FFFF
    cpu.m_d = 0xFFFF;

    // CB89: STD $4AEC
    cpu.write_memory16(0x4AEC, cpu.m_d);

    // CB8C: JSR $BDD5
    cpu.call_function(0xBDD5);

    // CB8F: BRA $CBA3
    goto label_CBA3;

    // CB91: INC $4AEE
    // TODO: Convert INC $4AEE

    // CB94: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // CB97: CMPA #$03
    cpu.compare_a(0x03);

    // CB99: BCS $CBA0
    if (cpu.carry_flag()) cpu.m_pc = 0xCBA0;

    // CB9B: LDA #$1C
    cpu.m_a = 0x1C;

    // CB9D: STA $4AEF
    cpu.write_memory(0x4AEF, cpu.m_a);

    // CBA0: JSR $BE16
    cpu.call_function(0xBE16);

}

} // namespace StarWars