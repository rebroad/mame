#include "cpu_6809.h"

namespace StarWars {

void routine_8f34_8f7b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_8f34_8f7b.md
    // Address: 0x8F34_8F7B

    label_8F34:
    // 8F34: LDA #$01
    cpu.m_a = 0x01;
    // 8F36: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X
    // 8F38: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // 8F3A: JSR $CDC3
    cpu.call_function(0xCDC3);
    // 8F3D: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // 8F3F: LDA #$C0
    cpu.m_a = 0xC0;
    // 8F41: STA -$10,U
    // TODO: Handle indexed addressing: STA -$10,U
    // 8F43: STA -$6,U
    // TODO: Handle indexed addressing: STA -$6,U
    // 8F45: CLRA 
    cpu.m_a = 0;
    // 8F46: STA $9,X
    // TODO: Handle indexed addressing: STA $9,X
    // 8F48: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X
    // 8F4A: STA $6,X
    // TODO: Handle indexed addressing: STA $6,X
    // 8F4C: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X
    // 8F4E: STA $B,X
    // TODO: Handle indexed addressing: STA $B,X
    // 8F50: LDU <$E0
    cpu.m_u = cpu.read_memory16(0xE0);
    // 8F52: LDA $1,U
    // TODO: Fix comma operator: LDA $1,U
    // 8F54: STA $7,X
    // TODO: Handle indexed addressing: STA $7,X
    // 8F56: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // 8F58: LDX <$E2
    cpu.m_x = cpu.read_memory16(0xE2);
    // 8F5A: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // 8F5C: STD $8,U
    // TODO: Handle indexed addressing: STD $8,U
    // 8F5E: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X
    // 8F60: STD $A,U
    // TODO: Handle indexed addressing: STD $A,U
    // 8F62: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X
    // 8F64: STD $C,U
    // TODO: Handle indexed addressing: STD $C,U
    // 8F66: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);
    // 8F68: LDD <$DE
    cpu.m_d = cpu.read_memory16(0xDE);
    // 8F6A: STD $D,X
    // TODO: Handle indexed addressing: STD $D,X
    // 8F6C: JSR $8E23
    cpu.call_function(0x8E23);
    // 8F6F: LDX <$5A
    cpu.m_x = cpu.read_memory16(0x5A);
    // 8F71: LDB [$48E0]
    // TODO: Unrecognized operand: [$48E0]
    // 8F75: STB $4,X
    // TODO: Handle indexed addressing: STB $4,X
    // 8F77: JSR $CCCC
    cpu.call_function(0xCCCC);
    // 8F7A: RTS 
    return;
    label_8F7B:
    // 8F7B: JMP $8f7b
    goto label_8F7B;
}

} // namespace StarWars