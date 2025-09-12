#include "cpu_6809.h"

namespace StarWars {

void routine_c200_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c200.md
    // Address: 0xC200

    // C200: STD $8E45
    cpu.write_memory16(0x8E45, cpu.m_d);

    // C203: PSHS PC,U,DP,D
    // TODO: Convert PSHS PC,U,DP,D

    // C206: ORB $8603
    cpu.m_b |= 0x8603;

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

    // C220: BHI $002A
    // TODO: Convert BHI $002A

    // C222: BCS $003D
    if (cpu.carry_flag()) cpu.m_pc = 0xC261;

    // C224: CMPU $4AFC
    // TODO: Convert CMPU $4AFC

    // C228: BLS $003D
    // TODO: Convert BLS $003D

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

    // C23B: BRA $0049
    cpu.m_pc = 0xC286;

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

    // C250: BCC $00B3
    if (!cpu.carry_flag()) cpu.m_pc = 0xC205;

    // C252: CMPA #$02
    cpu.compare_a(0x02);

    // C254: BCS $007F
    if (cpu.carry_flag()) cpu.m_pc = 0xC2D5;

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

    // C27B: BCS $0074
    if (cpu.carry_flag()) cpu.m_pc = 0xC2F1;

    // C27D: BRA $00B3
    cpu.m_pc = 0xC232;

    // C27F: TFR A,B
    cpu.m_b = cpu.m_a;

    // C282: BNE $009B
    if (!cpu.zero_flag()) cpu.m_pc = 0xC21F;

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

    // C299: BRA $00B1
    cpu.m_pc = 0xC24C;

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

    // C2B1: TFR B,A
    cpu.m_a = cpu.m_b;

    // C2B3: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C2B6: BEQ $00C2
    if (cpu.zero_flag()) cpu.m_pc = 0xC27A;

    // C2B8: STB $1,X
    // TODO: Handle indexed addressing: STB $1,X

    // C2BE: STB ,X
    // TODO: Handle indexed addressing: STB ,X

    // C2C0: LDB #$FF
    cpu.m_b = 0xFF;

    // C2C3: LEAS -$3,S
    // TODO: Fix comma operator: LEAS -$3,S

    // C2C5: LDX #$C7B7
    cpu.m_x = 0xC7B7;

    // C2C8: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C2CA: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C2CD: SUBB A,X
    // TODO: Fix comma operator: SUBB A,X

    // C2CF: SUBB #$02
    cpu.m_b -= 0x02;

    // C2D1: STB ,S
    // TODO: Handle indexed addressing: STB ,S

    // C2D3: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C2D5: LDX #$4500
    cpu.m_x = 0x4500;

    // C2D9: LDB #$00
    cpu.m_b = 0x00;

    // C2DB: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2DD: ORCC #$01
    cpu.m_cc |= 0x01;

    // C2DF: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // C2E1: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C2E3: ADCB $1,S
    // TODO: Convert ADCB $1,S

    // C2E5: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2E7: DEC ,S
    // TODO: Convert DEC ,S

    // C2E9: BNE $00DF
    if (!cpu.zero_flag()) cpu.m_pc = 0xC2CA;

    // C2EB: ADCB #$00
    // TODO: Convert ADCB #$00

    // C2ED: STB $1,S
    // TODO: Handle indexed addressing: STB $1,S

    // C2EF: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // C2F5: STB $2,S
    // TODO: Handle indexed addressing: STB $2,S

    // C2F7: LDB $1,X
    // TODO: Fix comma operator: LDB $1,X

    // C2F9: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C2FB: ADDB $2,S
    // TODO: Fix comma operator: ADDB $2,S

    // C2FD: STB $2,S
    // TODO: Handle indexed addressing: STB $2,S

    // C2FF: LDB $1,S
    // TODO: Fix comma operator: LDB $1,S

    // C301: CMPB $2,S
    // TODO: Fix comma operator: CMPB $2,S

    // C303: LEAS $3,S
    // TODO: Fix comma operator: LEAS $3,S

    // C306: LDX #$4500
    cpu.m_x = 0x4500;

    // C309: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C30C: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // C30E: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // C310: CMPX #$4600
    cpu.compare_x(0x4600);

    // C313: BCS $010C
    if (cpu.carry_flag()) cpu.m_pc = 0xC321;

    // C315: LDA #$FF
    cpu.m_a = 0xFF;

    // C317: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);

    // C31A: LDX #$0100
    cpu.m_x = 0x0100;

    // C31D: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // C320: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C322: BNE $011D
    if (!cpu.zero_flag()) cpu.m_pc = 0xC341;

    // C324: LDA #$00
    cpu.m_a = 0x00;

    // C326: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);

    // C329: LDX #$A000
    cpu.m_x = 0xA000;

    // C32C: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // C32F: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C331: BNE $012C
    if (!cpu.zero_flag()) cpu.m_pc = 0xC35F;

    // C333: LDX #$4500
    cpu.m_x = 0x4500;

    // C336: LDY #$4C00
    cpu.m_y = 0x4C00;

    // C33A: LDU ,X
    // TODO: Complex indexed addressing: ,X

    // C33C: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // C33E: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // C340: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // C342: CMPX #$4600
    cpu.compare_x(0x4600);

    // C345: BCS $013A
    if (cpu.carry_flag()) cpu.m_pc = 0xC381;

    // C347: LDA #$03
    cpu.m_a = 0x03;

    // C349: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C34C: BEQ $017C
    if (cpu.zero_flag()) cpu.m_pc = 0xC3CA;

    // C34E: LDA #$00
    cpu.m_a = 0x00;

    // C350: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C353: BEQ $016C
    if (cpu.zero_flag()) cpu.m_pc = 0xC3C1;

    // C355: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C358: LDA #$03
    cpu.m_a = 0x03;

    // C35A: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C35D: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C360: BEQ $017C
    if (cpu.zero_flag()) cpu.m_pc = 0xC3DE;

    // C362: LDA #$00
    cpu.m_a = 0x00;

    // C364: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C367: BEQ $016C
    if (cpu.zero_flag()) cpu.m_pc = 0xC3D5;

    // C369: JSR $C24E
    cpu.call_function(0xC24E);

    // C36C: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C36F: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C373: LDX #$4500
    cpu.m_x = 0x4500;

    // C377: LDU #$4500
    cpu.m_u = 0x4500;

    // C37A: BRA $01B7
    cpu.m_pc = 0xC333;

    // C37C: LDA #$00
    cpu.m_a = 0x00;

    // C37E: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C381: BNE $01A7
    if (!cpu.zero_flag()) cpu.m_pc = 0xC32A;

    // C383: LDA $4596
    cpu.m_a = cpu.read_memory(0x4596);

    // C386: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C388: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C38B: LDA $4506
    cpu.m_a = cpu.read_memory(0x4506);

    // C38E: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C390: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C393: BNE $01A5
    if (!cpu.zero_flag()) cpu.m_pc = 0xC33A;

    // C395: LDA $4597
    cpu.m_a = cpu.read_memory(0x4597);

    // C398: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C39A: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.m_a);

    // C39D: LDA $4507
    cpu.m_a = cpu.read_memory(0x4507);

    // C3A0: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C3A2: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C3A5: BEQ $01C6
    if (cpu.zero_flag()) cpu.m_pc = 0xC36D;

    // C3A7: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C3AA: LDB $0003,X
    // TODO: Fix comma operator: LDB $0003,X

    // C3AE: LDX #$4500
    cpu.m_x = 0x4500;

    // C3B2: TFR X,U
    cpu.m_u = cpu.m_x;

    // C3B4: LDX #$4500
    cpu.m_x = 0x4500;

    // C3B7: LDB $C7B7
    cpu.m_b = cpu.read_memory(0xC7B7);

    // C3BA: STB $4B02
    cpu.write_memory(0x4B02, cpu.m_b);

    // C3BD: LDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // C3BF: STB ,X+
    // TODO: Handle indexed addressing: STB ,X+

    // C3C1: DEC $4B02
    // TODO: Convert DEC $4B02

    // C3C4: BNE $01BD
    if (!cpu.zero_flag()) cpu.m_pc = 0xC383;

    // C3C6: LDA #$02
    cpu.m_a = 0x02;

    // C3C8: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3CB: BEQ $01D8
    if (cpu.zero_flag()) cpu.m_pc = 0xC3A5;

    // C3CD: JSR $C3EE
    cpu.call_function(0xC3EE);

    // C3D0: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C3D3: BEQ $01D8
    if (cpu.zero_flag()) cpu.m_pc = 0xC3AD;

    // C3D5: JSR $C24E
    cpu.call_function(0xC24E);

    // C3D9: BNE $01C8
    if (!cpu.zero_flag()) cpu.m_pc = 0xC3A3;

    // C3DB: LDX #$455C
    cpu.m_x = 0x455C;

    // C3DE: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C3E1: LDD $4AFA
    cpu.m_d = cpu.read_memory16(0x4AFA);

    // C3E4: STD $4B04
    cpu.write_memory16(0x4B04, cpu.m_d);

    // C3E7: LDD $4AFC
    cpu.m_d = cpu.read_memory16(0x4AFC);

    // C3EA: STD $4B06
    cpu.write_memory16(0x4B06, cpu.m_d);

    // C3EE: LDX #$C7B7
    cpu.m_x = 0xC7B7;

    // C3F1: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3F3: LDX #$4500
    cpu.m_x = 0x4500;

    // C3F7: STX $4AFA
    cpu.write_memory16(0x4AFA, cpu.m_x);

    // C3FA: LDX #$C7B6
    cpu.m_x = 0xC7B6;

    // C3FD: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C3FF: LDX #$0000
    cpu.m_x = 0x0000;

}

} // namespace StarWars