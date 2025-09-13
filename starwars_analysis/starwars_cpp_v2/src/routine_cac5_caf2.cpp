#include "cpu_6809.h"

namespace StarWars {

void routine_cac5_caf2_impl(CPU6809& cpu) {
    // Converted from rom_disasm_cac5_caf2.md
    // Address: 0xCAC5_CAF2

    label_CAC5:
    // CAC5: LDD -$4,X
    // TODO: Fix comma operator: LDD -$4,X
    // CAC7: STD ,X
    // TODO: Handle indexed addressing: STD ,X
    // CAC9: LDD -$2,X
    // TODO: Fix comma operator: LDD -$2,X
    // CACB: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X
    // CACD: LDD -$3,U
    // TODO: Fix comma operator: LDD -$3,U
    // CACF: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // CAD1: LDA -$1,U
    // TODO: Fix comma operator: LDA -$1,U
    // CAD3: STA $2,U
    // TODO: Handle indexed addressing: STA $2,U
    // CAD5: LEAU -$3,U
    // TODO: Fix comma operator: LEAU -$3,U
    // CAD7: LEAX -$4,X
    // TODO: Fix comma operator: LEAX -$4,X
    // CAD9: CMPX $4AEC
    cpu.compare_x(cpu.read_memory16(0x4AEC));
    // CADC: BHI $CAC5
    // TODO: Convert BHI $CAC5
    // CADE: STU $4AEC
    cpu.write_memory16(0x4AEC, cpu.m_u);
    // CAE1: LDA #$00
    cpu.m_a = 0x00;
    // CAE3: STA ,U
    // TODO: Handle indexed addressing: STA ,U
    // CAE5: LDD #$0000
    cpu.m_d = 0x0000;
    // CAE8: STD $1,U
    // TODO: Handle indexed addressing: STD $1,U
    // CAEA: LDD <$5C
    cpu.m_d = cpu.read_memory16(0x5C);
    // CAEC: STD ,X
    // TODO: Handle indexed addressing: STD ,X
    // CAEE: LDD <$5E
    cpu.m_d = cpu.read_memory16(0x5E);
    // CAF0: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X
    // CAF2: RTS 
    return;
}

} // namespace StarWars