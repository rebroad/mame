#include "cpu_6809.h"

namespace StarWars {

void routine_d95d_dad3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_d95d_dad3.md
    // Address: 0xD95D_DAD3

    label_D95D:
    // D95D: RTS 
    return;
    // D95E: LDU $4ADD
    cpu.m_u = cpu.read_memory16(0x4ADD);
    // D961: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+
    // D963: LDD #$0000
    cpu.m_d = 0x0000;
    // D966: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D968: LDD #$0100
    cpu.m_d = 0x0100;
    // D96B: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);
    // D96D: STU $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_u);
    // D970: RTS 
    return;
    // D971: LDU #$4A66
    cpu.m_u = 0x4A66;
    // D974: CMPA ,U
    // TODO: Complex indexed addressing: ,U
    // D976: BNE $D97C
    if (!cpu.zero_flag()) cpu.m_pc = 0xD97C;
    // D978: LDA #$00
    cpu.m_a = 0x00;
    // D97A: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // D97C: LEAU $5,U
    // TODO: Fix comma operator: LEAU $5,U
    // D97E: CMPU $4ADD
    // TODO: Convert CMPU $4ADD
    // D982: BCS $D974
    if (cpu.carry_flag()) cpu.m_pc = 0xD974;
    // D984: RTS 
    return;
    // D985: LDU #$4A66
    cpu.m_u = 0x4A66;
    // D988: CMPU $4ADD
    // TODO: Convert CMPU $4ADD
    // D98C: BCC $D9DB
    if (!cpu.carry_flag()) cpu.m_pc = 0xD9DB;
    // D98E: LDD #$7200
    cpu.m_d = 0x7200;
    // D991: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D993: LDA ,U+
    // TODO: Complex indexed addressing: ,U+
    // D995: BEQ $D9D3
    if (cpu.zero_flag()) cpu.m_pc = 0xD9D3;
    // D997: STA $48AE
    cpu.write_memory(0x48AE, cpu.m_a);
    // D99A: LDD #$0198
    cpu.m_d = 0x0198;
    // D99D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D99F: LDD #$0000
    cpu.m_d = 0x0000;
    // D9A2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9A4: LDB ,U
    // TODO: Complex indexed addressing: ,U
    // D9A6: LDA #$71
    cpu.m_a = 0x71;
    // D9A8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9AA: COMB 
    cpu.m_b = ~cpu.m_b;
    // D9AB: ADDB #$10
    cpu.m_b += 0x10;
    // D9AD: LDA #$62
    cpu.m_a = 0x62;
    // D9AF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9B1: LDX #$E99E
    cpu.m_x = 0xE99E;
    // D9B4: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);
    // D9B7: ABX 
    // TODO: Convert ABX 
    // D9B8: ABX 
    // TODO: Convert ABX 
    // D9B9: LDD #$1DD0
    cpu.m_d = 0x1DD0;
    // D9BC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9BE: LDD ,X
    // TODO: Complex indexed addressing: ,X
    // D9C0: ANDA #$1F
    cpu.m_a &= 0x1F;
    // D9C2: ORA #$00
    cpu.m_a |= 0x00;
    // D9C4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9C6: JSR $E821
    cpu.call_function(0xE821);
    // D9C9: LDD #$7200
    cpu.m_d = 0x7200;
    // D9CC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9CE: LDD #$8040
    cpu.m_d = 0x8040;
    // D9D1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // D9D3: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U
    // D9D5: CMPU $4ADD
    // TODO: Convert CMPU $4ADD
    // D9D9: BCS $D993
    if (cpu.carry_flag()) cpu.m_pc = 0xD993;
    // D9DB: RTS 
    return;
    // D9DC: LDD #$0000
    cpu.m_d = 0x0000;
    // D9DF: STD $4AE4
    cpu.write_memory16(0x4AE4, cpu.m_d);
    // D9E2: LDD #$6018
    cpu.m_d = 0x6018;
    // D9E5: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);
    // D9E8: LDD #$4A66
    cpu.m_d = 0x4A66;
    // D9EB: STD $4ADD
    cpu.write_memory16(0x4ADD, cpu.m_d);
    // D9EE: LDD $DB2F
    cpu.m_d = cpu.read_memory16(0xDB2F);
    // D9F1: STD $4AE2
    cpu.write_memory16(0x4AE2, cpu.m_d);
    // D9F4: LDA #$51
    cpu.m_a = 0x51;
    // D9F6: STA $4ADF
    cpu.write_memory(0x4ADF, cpu.m_a);
    // D9F9: RTS 
    return;
    // D9FA: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);
    // D9FD: ADDD #$0001
    cpu.m_d += 0x0001;
    // DA00: STD $4AE4
    cpu.write_memory16(0x4AE4, cpu.m_d);
    // DA03: CMPD #$00F8
    // TODO: Convert CMPD #$00F8
    // DA07: LBCC $DA94
    // TODO: Convert LBCC $DA94
    // DA0B: CMPD #$0040
    // TODO: Convert CMPD #$0040
    // DA0F: BCC $DA1E
    if (!cpu.carry_flag()) cpu.m_pc = 0xDA1E;
    // DA11: LDD $4AE6
    cpu.m_d = cpu.read_memory16(0x4AE6);
    // DA14: ADDB #$03
    cpu.m_b += 0x03;
    // DA16: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);
    // DA19: LDD #$0040
    cpu.m_d = 0x0040;
    // DA1C: BRA $DA2A
    goto label_DA2A;
    // DA1E: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);
    // DA21: COMB 
    cpu.m_b = ~cpu.m_b;
    // DA22: ADDB #$18
    cpu.m_b += 0x18;
    // DA24: STD $4AE6
    cpu.write_memory16(0x4AE6, cpu.m_d);
    // DA27: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);
    label_DA2A:
    // DA2A: ORA #$73
    cpu.m_a |= 0x73;
    // DA2C: STD $4AE8
    cpu.write_memory16(0x4AE8, cpu.m_d);
    // DA2F: LDD $4AE6
    cpu.m_d = cpu.read_memory16(0x4AE6);
    // DA32: ORA #$61
    cpu.m_a |= 0x61;
    // DA34: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // DA36: LDD #$0198
    cpu.m_d = 0x0198;
    // DA39: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y
    // DA3B: STD $8,Y
    // TODO: Handle indexed addressing: STD $8,Y
    // DA3D: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y
    // DA40: STD $18,Y
    // TODO: Handle indexed addressing: STD $18,Y
    // DA43: STD $20,Y
    // TODO: Handle indexed addressing: STD $20,Y
    // DA46: STD $28,Y
    // TODO: Handle indexed addressing: STD $28,Y
    // DA49: LDD #$0000
    cpu.m_d = 0x0000;
    // DA4C: STD $2,Y
    // TODO: Handle indexed addressing: STD $2,Y
    // DA4E: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y
    // DA50: STD $12,Y
    // TODO: Handle indexed addressing: STD $12,Y
    // DA53: STD $1A,Y
    // TODO: Handle indexed addressing: STD $1A,Y
    // DA56: STD $22,Y
    // TODO: Handle indexed addressing: STD $22,Y
    // DA59: STD $2A,Y
    // TODO: Handle indexed addressing: STD $2A,Y
    // DA5C: LDD $4AE8
    cpu.m_d = cpu.read_memory16(0x4AE8);
    // DA5F: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y
    // DA61: STD $C,Y
    // TODO: Handle indexed addressing: STD $C,Y
    // DA63: STD $14,Y
    // TODO: Handle indexed addressing: STD $14,Y
    // DA66: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y
    // DA69: STD $24,Y
    // TODO: Handle indexed addressing: STD $24,Y
    // DA6C: STD $2C,Y
    // TODO: Handle indexed addressing: STD $2C,Y
    // DA6F: LDD #$B400
    cpu.m_d = 0xB400;
    // DA72: STD $6,Y
    // TODO: Handle indexed addressing: STD $6,Y
    // DA74: LDD #$B434
    cpu.m_d = 0xB434;
    // DA77: STD $E,Y
    // TODO: Handle indexed addressing: STD $E,Y
    // DA79: LDD #$B458
    cpu.m_d = 0xB458;
    // DA7C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y
    // DA7F: LDD #$B488
    cpu.m_d = 0xB488;
    // DA82: STD $1E,Y
    // TODO: Handle indexed addressing: STD $1E,Y
    // DA85: LDD #$B4AE
    cpu.m_d = 0xB4AE;
    // DA88: STD $26,Y
    // TODO: Handle indexed addressing: STD $26,Y
    // DA8B: LDD #$B4D2
    cpu.m_d = 0xB4D2;
    // DA8E: STD $2E,Y
    // TODO: Handle indexed addressing: STD $2E,Y
    // DA91: LEAY $30,Y
    // TODO: Fix comma operator: LEAY $30,Y
    // DA94: LDX #$4A66
    cpu.m_x = 0x4A66;
    // DA97: CMPX $4ADD
    cpu.compare_x(cpu.read_memory16(0x4ADD));
    // DA9A: BCC $DAF5
    if (!cpu.carry_flag()) cpu.m_pc = 0xDAF5;
    // DA9C: LDD $4AE4
    cpu.m_d = cpu.read_memory16(0x4AE4);
    // DA9F: CMPD #$00E0
    // TODO: Convert CMPD #$00E0
    // DAA3: BCC $DAB3
    if (!cpu.carry_flag()) cpu.m_pc = 0xDAB3;
    // DAA5: CMPD #$0040
    // TODO: Convert CMPD #$0040
    // DAA9: BCS $DAB1
    if (cpu.carry_flag()) cpu.m_pc = 0xDAB1;
    // DAAB: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X
    // DAAD: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X
    // DAAF: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X
    // DAB1: BRA $DAEE
    goto label_DAEE;
    // DAB3: CMPD #$0160
    // TODO: Convert CMPD #$0160
    // DAB7: BCC $DAC1
    if (!cpu.carry_flag()) cpu.m_pc = 0xDAC1;
    // DAB9: LDD #$0400
    cpu.m_d = 0x0400;
    // DABC: STD $4A69
    cpu.write_memory16(0x4A69, cpu.m_d);
    // DABF: BRA $DAEE
    goto label_DAEE;
    // DAC1: LDD $1,X
    // TODO: Fix comma operator: LDD $1,X
    // DAC3: ADDD $3,X
    // TODO: Fix comma operator: ADDD $3,X
    // DAC5: STD $1,X
    // TODO: Handle indexed addressing: STD $1,X
    // DAC7: CMPD #$F000
    // TODO: Convert CMPD #$F000
    // DACB: BCS $DAEE
    if (cpu.carry_flag()) cpu.m_pc = 0xDAEE;
    // DACD: LDA ,X
    // TODO: Complex indexed addressing: ,X
    // DACF: INCA 
    cpu.m_a++;
    // DAD0: LDU #$4A66
    cpu.m_u = 0x4A66;
    label_DAD3:
    // DAD3: JMP $dad3
    goto label_DAD3;
}

} // namespace StarWars