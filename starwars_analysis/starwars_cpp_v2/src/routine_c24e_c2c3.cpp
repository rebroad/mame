#include "cpu_6809.h"

namespace StarWars {

void routine_c24e_c2c3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c24e_c2c3.md
    // Address: 0xC24E_C2C3

    label_C24E:
    // C24E: CMPA #$03
    cpu.compare_a(0x03);
    // C250: BCC $C2B3
    if (!cpu.carry_flag()) cpu.m_pc = 0xC2B3;
    // C252: CMPA #$02
    cpu.compare_a(0x02);
    // C254: BCS $C27F
    if (cpu.carry_flag()) cpu.m_pc = 0xC27F;
    // C256: LDX #$C7B7
    cpu.m_x = 0xC7B7;
    // C259: LDB A,X
    // TODO: Fix comma operator: LDB A,X
    // C25B: SUBB #$02
    cpu.m_b -= 0x02;
    // C25D: STB $4AFB
    cpu.write_memory(0x4AFB, cpu.m_b);
    // C260: LDB #$45
    cpu.m_b = 0x45;
    // C262: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.m_b);
    // C265: LDX #$C7B6
    cpu.m_x = 0xC7B6;
    // C268: LDB A,X
    // TODO: Fix comma operator: LDB A,X
    // C26A: LDX #$C707
    cpu.m_x = 0xC707;
    // C26D: ABX 
    // TODO: Convert ABX 
    // C26E: TFR X,U
    cpu.m_u = cpu.m_x;
    // C270: LDX #$4500
    cpu.m_x = 0x4500;
    // C273: ABX 
    // TODO: Convert ABX 
    // C274: LDB ,U+
    // TODO: Complex indexed addressing: ,U+
    // C276: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+
    // C278: CMPX $4AFA
    cpu.compare_x(cpu.read_memory16(0x4AFA));
    // C27B: BCS $C274
    if (cpu.carry_flag()) cpu.m_pc = 0xC274;
    // C27D: BRA $C2B3
    goto label_C2B3;
    // C27F: TFR A,B
    cpu.m_b = cpu.m_a;
    // C281: TSTA 
    cpu.test_a();
    // C282: BNE $C29B
    if (!cpu.zero_flag()) cpu.m_pc = 0xC29B;
    // C284: LDA <$27
    cpu.m_a = cpu.read_memory(0x27);
    // C286: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);
    // C289: LDA <$24
    cpu.m_a = cpu.read_memory(0x24);
    // C28B: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);
    // C28E: LDA #$00
    cpu.m_a = 0x00;
    // C290: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.m_a);
    // C293: LDX #$4500
    cpu.m_x = 0x4500;
    // C296: JSR $C6F4
    cpu.call_function(0xC6F4);
    // C299: BRA $C2B1
    goto label_C2B1;
    // C29B: LDX #$4508
    cpu.m_x = 0x4508;
    // C29E: LDU #$CC98
    cpu.m_u = 0xCC98;
    // C2A1: LDA #$0B
    cpu.m_a = 0x0B;
    // C2A3: JSR $C6F9
    cpu.call_function(0xC6F9);
    // C2A6: LDX #$4520
    cpu.m_x = 0x4520;
    // C2A9: LDU #$CC7A
    cpu.m_u = 0xCC7A;
    // C2AC: LDA #$08
    cpu.m_a = 0x08;
    // C2AE: JSR $C6F9
    cpu.call_function(0xC6F9);
    label_C2B1:
    // C2B1: TFR B,A
    cpu.m_a = cpu.m_b;
    label_C2B3:
    // C2B3: JSR $C2C3
    cpu.call_function(0xC2C3);
    // C2B6: BEQ $C2C2
    if (cpu.zero_flag()) cpu.m_pc = 0xC2C2;
    // C2B8: STB $1,X
    // TODO: Handle indexed addressing: STB $1,X
    // C2BA: LSRB 
    cpu.m_b >>= 1;
    // C2BB: LSRB 
    cpu.m_b >>= 1;
    // C2BC: LSRB 
    cpu.m_b >>= 1;
    // C2BD: LSRB 
    cpu.m_b >>= 1;
    // C2BE: STB ,X
    // TODO: Handle indexed addressing: STB ,X
    // C2C0: LDB #$FF
    cpu.m_b = 0xFF;
    // C2C2: RTS 
    return;
    label_C2C3:
    // C2C3: JMP $c2c3
    goto label_C2C3;
}

} // namespace StarWars