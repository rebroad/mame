#include "cpu_6809.h"

namespace StarWars {

void routine_c087_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c087.md
    // Address: 0xC087

    // C087: BSR $C089
    // TODO: Convert BSR $C089

    // C089: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // C08B: LDB #$03
    cpu.m_b = 0x03;

    // C08D: LDX #$4AFD
    cpu.m_x = 0x4AFD;

    // C090: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C092: ADCA ,X
    // TODO: Convert ADCA ,X

    // C095: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C097: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C09A: BPL $C090
    if (!cpu.negative_flag()) cpu.m_pc = 0xC090;

    // C09D: LDA #$02
    cpu.m_a = 0x02;

    // C09F: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C0A2: BNE $C0FE
    if (!cpu.zero_flag()) cpu.m_pc = 0xC0FE;

    // C0A5: LDB $4815
    cpu.m_b = cpu.read_memory(0x4815);

    // C0AA: LDB $4816
    cpu.m_b = cpu.read_memory(0x4816);

    // C0AF: LDB $4817
    cpu.m_b = cpu.read_memory(0x4817);

    // C0B4: TFR A,B
    cpu.m_b = cpu.m_a;

    // C0B6: EORB $4AF4
    cpu.m_b ^= 0x4AF4;

    // C0B9: ANDB $4AF4
    cpu.m_b &= 0x4AF4;

    // C0BC: STA $4AF4
    cpu.write_memory(0x4AF4, cpu.m_a);

    // C0BF: LDX #$4548
    cpu.m_x = 0x4548;

    // C0C3: BCC $C0F7
    if (!cpu.carry_flag()) cpu.m_pc = 0xC0F7;

    // C0C5: LDU #$4B5F
    cpu.m_u = 0x4B5F;

    // C0C8: JSR $C6D7
    cpu.call_function(0xC6D7);

    // C0CB: LDA $4B61
    cpu.m_a = cpu.read_memory(0x4B61);

    // C0CE: ADDA #$01
    cpu.m_a += 0x01;

    // C0D1: STA $4B61
    cpu.write_memory(0x4B61, cpu.m_a);

    // C0D4: LDA $4B60
    cpu.m_a = cpu.read_memory(0x4B60);

    // C0D7: ADCA #$00
    // TODO: Convert ADCA #$00

    // C0DA: STA $4B60
    cpu.write_memory(0x4B60, cpu.m_a);

    // C0DD: LDA $4B5F
    cpu.m_a = cpu.read_memory(0x4B5F);

    // C0E0: ADCA #$00
    // TODO: Convert ADCA #$00

    // C0E3: STA $4B5F
    cpu.write_memory(0x4B5F, cpu.m_a);

    // C0E6: LDU #$4B5F
    cpu.m_u = 0x4B5F;

    // C0E9: JSR $C6F7
    cpu.call_function(0xC6F7);

    // C0EC: LDA #$02
    cpu.m_a = 0x02;

    // C0EE: STB $4B62
    cpu.write_memory(0x4B62, cpu.m_b);

    // C0F1: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C0F4: LDB $4B62
    cpu.m_b = cpu.read_memory(0x4B62);

    // C0F7: LEAX -$6,X
    // TODO: Fix comma operator: LEAX -$6,X

    // C0F9: CMPX #$453C
    cpu.compare_x(0x453C);

    // C0FC: BCC $C0C2
    if (!cpu.carry_flag()) cpu.m_pc = 0xC0C2;

    // C0FF: LDA #$02
    cpu.m_a = 0x02;

    // C101: JSR $C413
    cpu.call_function(0xC413);

    // C104: LDX #$4554
    cpu.m_x = 0x4554;

    // C107: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C10A: LDA $4AFD
    cpu.m_a = cpu.read_memory(0x4AFD);

    // C10D: ADDA $481A
    cpu.m_a += 0x481A;

    // C111: STA $4AFD
    cpu.write_memory(0x4AFD, cpu.m_a);

    // C114: LDA $4AFC
    cpu.m_a = cpu.read_memory(0x4AFC);

    // C117: ADCA $4819
    // TODO: Convert ADCA $4819

    // C11B: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.m_a);

    // C11E: LDA $4AFB
    cpu.m_a = cpu.read_memory(0x4AFB);

    // C121: ADCA #$00
    // TODO: Convert ADCA #$00

    // C124: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);

    // C127: LDA $4AFA
    cpu.m_a = cpu.read_memory(0x4AFA);

    // C12A: ADCA #$00
    // TODO: Convert ADCA #$00

    // C12D: BCS $C132
    if (cpu.carry_flag()) cpu.m_pc = 0xC132;

    // C12F: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C132: LDA #$03
    cpu.m_a = 0x03;

    // C134: STB $4B02
    cpu.write_memory(0x4B02, cpu.m_b);

    // C137: LDU #$4AFA
    cpu.m_u = 0x4AFA;

    // C13A: JSR $C6F9
    cpu.call_function(0xC6F9);

    // C13D: LDX #$454E
    cpu.m_x = 0x454E;

    // C140: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C143: LDA $4AFC
    cpu.m_a = cpu.read_memory(0x4AFC);

    // C146: ADDA #$01
    cpu.m_a += 0x01;

    // C149: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.m_a);

    // C14C: LDA $4AFB
    cpu.m_a = cpu.read_memory(0x4AFB);

    // C14F: ADCA #$00
    // TODO: Convert ADCA #$00

    // C152: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);

    // C155: LDA $4AFA
    cpu.m_a = cpu.read_memory(0x4AFA);

    // C158: ADCA #$00
    // TODO: Convert ADCA #$00

    // C15B: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C15E: JSR $C6F4
    cpu.call_function(0xC6F4);

    // C161: LDX #$4588
    cpu.m_x = 0x4588;

    // C164: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C167: LDA $4B16
    cpu.m_a = cpu.read_memory(0x4B16);

    // C16A: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C16D: BLS $C17B
    // TODO: Convert BLS $C17B

    // C16F: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C172: CLR $4AFB
    cpu.write_memory(0x4AFB, 0);

    // C175: CLR $4AFC
    cpu.write_memory(0x4AFC, 0);

    // C178: JSR $C6F4
    cpu.call_function(0xC6F4);

    // C17B: LDX #$4586
    cpu.m_x = 0x4586;

    // C17E: LDA $4819
    cpu.m_a = cpu.read_memory(0x4819);

    // C181: BNE $C19E
    if (!cpu.zero_flag()) cpu.m_pc = 0xC19E;

    // C183: LDA $481A
    cpu.m_a = cpu.read_memory(0x481A);

    // C186: LDX #$4564
    cpu.m_x = 0x4564;

    // C189: LDB #$9A
    cpu.m_b = 0x9A;

    // C18B: SUBB $C7A4
    cpu.m_b -= 0xC7A4;

    // C18E: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.m_b);

    // C191: ADDA $4AFA
    cpu.m_a += 0x4AFA;

    // C195: BCC $C19E
    if (!cpu.carry_flag()) cpu.m_pc = 0xC19E;

    // C197: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // C199: CMPX #$4586
    cpu.compare_x(0x4586);

    // C19C: BCS $C191
    if (cpu.carry_flag()) cpu.m_pc = 0xC191;

    // C19E: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C1A0: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C1A2: ADDA #$01
    cpu.m_a += 0x01;

    // C1A5: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C1A7: ANDA #$F0
    cpu.m_a &= 0xF0;

    // C1A9: BEQ $C1E9
    if (cpu.zero_flag()) cpu.m_pc = 0xC1E9;

    // C1AB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C1AD: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C1AF: ADDA #$01
    cpu.m_a += 0x01;

    // C1B2: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C1B4: ANDA #$F0
    cpu.m_a &= 0xF0;

    // C1B6: BEQ $C1E9
    if (cpu.zero_flag()) cpu.m_pc = 0xC1E9;

    // C1B8: LDX #$4564
    cpu.m_x = 0x4564;

    // C1BB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C1C1: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C1C4: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C1C6: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C1C8: ADDA $4AFA
    cpu.m_a += 0x4AFA;

    // C1CB: BITA #$10
    // TODO: Convert BITA #$10

    // C1CD: BEQ $C1D1
    if (cpu.zero_flag()) cpu.m_pc = 0xC1D1;

    // C1CF: SUBA #$06
    cpu.m_a -= 0x06;

    // C1D2: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C1D8: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C1DA: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // C1DC: CMPX #$4588
    cpu.compare_x(0x4588);

    // C1DF: BCS $C1BB
    if (cpu.carry_flag()) cpu.m_pc = 0xC1BB;

    // C1E1: LDA #$05
    cpu.m_a = 0x05;

    // C1E3: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // C1E5: LDA #$00
    cpu.m_a = 0x00;

    // C1E7: STA $1,U
    // TODO: Handle indexed addressing: STA $1,U

    // C1E9: LDA $4866
    cpu.m_a = cpu.read_memory(0x4866);

    // C1EC: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C1EF: LDA $4868
    cpu.m_a = cpu.read_memory(0x4868);

    // C1F2: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.m_a);

    // C1F5: LDA $486F
    cpu.m_a = cpu.read_memory(0x486F);

    // C1F8: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.m_a);

    // C1FB: LDA $4871
    cpu.m_a = cpu.read_memory(0x4871);

    // C1FE: STA $4AFD
    cpu.write_memory(0x4AFD, cpu.m_a);

    // C201: LDX #$4534
    cpu.m_x = 0x4534;

    // C204: LDU #$4AFA
    cpu.m_u = 0x4AFA;

    // C207: LDA #$03
    cpu.m_a = 0x03;

    // C209: JSR $C6F9
    cpu.call_function(0xC6F9);

    // C20C: LDX #$455C
    cpu.m_x = 0x455C;

    // C20F: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C212: ORCC #$10
    cpu.m_cc |= 0x10;

    // C214: LDU $4B06
    cpu.m_u = cpu.read_memory16(0x4B06);

    // C217: LDD $4B04
    cpu.m_d = cpu.read_memory16(0x4B04);

    // C21A: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // C21C: CMPD $4AFA
    // TODO: Convert CMPD $4AFA

    // C220: BHI $C22A
    // TODO: Convert BHI $C22A

    // C222: BCS $C23D
    if (cpu.carry_flag()) cpu.m_pc = 0xC23D;

    // C224: CMPU $4AFC
    // TODO: Convert CMPU $4AFC

    // C228: BLS $C23D
    // TODO: Convert BLS $C23D

    // C22A: STD $4AFA
    cpu.write_memory16(0x4AFA, cpu.m_d);

    // C22D: STU $4AFC
    cpu.write_memory16(0x4AFC, cpu.m_u);

    // C230: LDX #$455C
    cpu.m_x = 0x455C;

    // C233: LDU #$4AFA
    cpu.m_u = 0x4AFA;

    // C236: LDA #$03
    cpu.m_a = 0x03;

    // C238: JSR $C6F9
    cpu.call_function(0xC6F9);

    // C23B: BRA $C249
    cpu.m_pc = 0xC249;

    // C23D: LDD $4AFA
    cpu.m_d = cpu.read_memory16(0x4AFA);

    // C240: STD $4B04
    cpu.write_memory16(0x4B04, cpu.m_d);

    // C243: LDD $4AFC
    cpu.m_d = cpu.read_memory16(0x4AFC);

    // C246: STD $4B06
    cpu.write_memory16(0x4B06, cpu.m_d);

    // C249: LDA #$02
    cpu.m_a = 0x02;

    // C24B: JMP $C2B3
    cpu.m_pc = 0xC2B3;

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

    // C26E: TFR X,U
    cpu.m_u = cpu.m_x;

    // C270: LDX #$4500
    cpu.m_x = 0x4500;

    // C274: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C276: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C278: CMPX $4AFA
    cpu.compare_x(cpu.read_memory16(0x4AFA));

    // C27B: BCS $C274
    if (cpu.carry_flag()) cpu.m_pc = 0xC274;

    // C27D: BRA $C2B3
    cpu.m_pc = 0xC2B3;

    // C27F: TFR A,B
    cpu.m_b = cpu.m_a;

    // C282: BNE $C29B
    if (!cpu.zero_flag()) cpu.m_pc = 0xC29B;

    // C284: LDA <$27
    cpu.m_a = cpu.read_memory(0x27);

    // C286: STA >$0000
    cpu.write_memory(0x0000, cpu.m_a);

}

} // namespace StarWars