#include "cpu_6809.h"

namespace StarWars {

void routine_f261_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_auto_f261.md
    // Address: 0xF261

    // Converted from rom_disasm_auto_f261.md
    // Address: 0xROUTINE_F261
    // F261: ORCC #$10
    cpu.state_.cc |= 10;
    // F263: CLR $4684
    cpu.write_memory(4684, 0);
    // F266: LDA #$00
    cpu.state_.a = 00;
    // F268: STA $4686
    cpu.write_memory(4686, cpu.state_.a);
    // F26B: STA $4683
    cpu.write_memory(4683, cpu.state_.a);
    // F26E: STA $4682
    cpu.write_memory(4682, cpu.state_.a);
    // F271: LDA #$00
    cpu.state_.a = 00;
    // F273: STA $4685
    cpu.write_memory(4685, cpu.state_.a);
    // F276: LDA #$80
    cpu.state_.a = 80;
    // F278: STA $4685
    cpu.write_memory(4685, cpu.state_.a);
    // F27B: STA $4620
    cpu.write_memory(4620, cpu.state_.a);
    // F27E: LDU #$0000
    cpu.state_.u = 0000;
    // F281: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F284: LEAU -$1,U
    cpu.state_.u += -$1,U;
    // F286: CMPU #$0000
    // TODO: Convert CMPU #$0000
    // F28A: BNE $F281
    if (!cpu.zero_flag()) cpu.state_.pc += F281;
    // F28C: LDS #$4FFF
    cpu.state_.sp = 4FFF;
    // F290: LDA #$48
    cpu.state_.a = 48;
    // F292: TFR A,DP
    cpu.state_.DP = cpu.state_.A;
    // F294: STA $46E0
    cpu.write_memory(46E0, cpu.state_.a);
    // F297: LDA #$00
    cpu.state_.a = 00;
    // F299: STA $4400
    cpu.write_memory(4400, cpu.state_.a);
    // F29C: LDX #$4800
    cpu.state_.x = 4800;
    // F29F: LDD #$0000
    cpu.state_.d = 0000;
    // F2A2: STD ,X++
    cpu.write_memory(,X++, cpu.state_.d);
    // F2A4: CMPX #$5000
    cpu.compare_x(5000);
    // F2A7: BCS $F2A2
    if (cpu.carry_flag()) cpu.state_.pc += F2A2;
    // F2A9: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F2AC: LDX #$5000
    cpu.state_.x = 5000;
    // F2AF: LDD #$0000
    cpu.state_.d = 0000;
    // F2B2: STD ,X++
    cpu.write_memory(,X++, cpu.state_.d);
    // F2B4: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F2B7: CMPX #$6000
    cpu.compare_x(6000);
    // F2BA: BCS $F2B2
    if (cpu.carry_flag()) cpu.state_.pc += F2B2;
    // F2BC: LDX #$0000
    cpu.state_.x = 0000;
    // F2BF: LDD #$0000
    cpu.state_.d = 0000;
    // F2C2: STD ,X++
    cpu.write_memory(,X++, cpu.state_.d);
    // F2C4: STA $4640
    cpu.write_memory(4640, cpu.state_.a);
    // F2C7: CMPX #$3000
    cpu.compare_x(3000);
    // F2CA: BCS $F2C2
    if (cpu.carry_flag()) cpu.state_.pc += F2C2;
    // F2CC: LDA $4300
    cpu.state_.a = 4300;
    // F2CF: ANDA #$10
    cpu.state_.a &= 10;
    // F2D1: BNE $F2D6
    if (!cpu.zero_flag()) cpu.state_.pc += F2D6;
    // F2D3: JMP $F36E
    cpu.state_.pc = F36E;
}

} // namespace StarWars
