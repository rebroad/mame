#include "cpu_6809.h"

namespace StarWars {

void routine_d3ec_d433_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d3ec_d433.md
    // Address: 0xD3EC_D433

    label_D3EC:
    // D3EC: CLRB 
    cpu.m_b = 0;
    // D3ED: RTI 
    // TODO: Convert RTI 
    // D3EE: ADCA $EFF6
    // TODO: Convert ADCA $EFF6
    // D3F1: ASL $5C06
    // TODO: Convert ASL $5C06
    // D3F4: DECA 
    cpu.m_a--;
    // D3F5: XRES 
    // TODO: Convert XRES 
    // D3F6: ADCA $EF5E
    // TODO: Convert ADCA $EF5E
    // D3F9: LBRA $CA6D
    // TODO: Convert LBRA $CA6D
    // D3FC: ADCA $EF5B
    // TODO: Convert ADCA $EF5B
    // D3FF: NEG <$B9
    // TODO: Convert NEG <$B9
    // D401: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D403: XRES 
    // TODO: Convert XRES 
    // D404: ADCA $EF5F
    // TODO: Convert ADCA $EF5F
    // D407: NOP 
    // NOP;
    // D408: ADCA $EF42
    // TODO: Convert ADCA $EF42
    // D40B: BPL $D3C6
    if (!cpu.negative_flag()) cpu.m_pc = 0xD3C6;
    // D40D: STU -$4,U
    // TODO: Handle indexed addressing: STU -$4,U
    // D40F: ROR <$C0
    // TODO: Convert ROR <$C0
    // D411: NEG <$B9
    // TODO: Convert NEG <$B9
    // D413: STU -$6,U
    // TODO: Handle indexed addressing: STU -$6,U
    // D415: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D417: STU $2,U
    // TODO: Handle indexed addressing: STU $2,U
    // D419: BPL $D3D4
    if (!cpu.negative_flag()) cpu.m_pc = 0xD3D4;
    // D41B: STU -$1,U
    // TODO: Handle indexed addressing: STU -$1,U
    // D41D: NOP 
    // NOP;
    // D41E: LDB $915A
    cpu.m_b = cpu.read_memory(0x915A);
    // D421: ANDCC #$B9
    // TODO: Convert ANDCC #$B9
    // D423: STU $A,U
    // TODO: Handle indexed addressing: STU $A,U
    // D425: XRES 
    // TODO: Convert XRES 
    // D426: ADCA $EF42
    // TODO: Convert ADCA $EF42
    // D429: BPL $D3E4
    if (!cpu.negative_flag()) cpu.m_pc = 0xD3E4;
    // D42B: STU -$7,U
    // TODO: Handle indexed addressing: STU -$7,U
    // D42D: LBSR $8E1F
    // TODO: Convert LBSR $8E1F
    // D430: NEGA 
    cpu.m_a = -cpu.m_a;
    // D431: BCS $D3EC
    if (cpu.carry_flag()) cpu.m_pc = 0xD3EC;
    // D433: JMP $d432
    goto label_D432;
}

} // namespace StarWars