#include "cpu_6809.h"

namespace StarWars {

void routine_c02f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c02f.md
    // Address: 0xC02F

    // C02F: LDX #$4AFE
    cpu.state_.x = 0x4AFE;

    // C032: LDA #$01
    cpu.state_.a = 0x01;

    // C034: STA $4B02
    cpu.write_memory(0x4B02, cpu.state_.a);

    // C037: LDB #$03
    cpu.state_.b = 0x03;

    // C039: LDA #$99
    cpu.state_.a = 0x99;

    // C03B: SUBA ,-X
    // TODO: Complex indexed addressing: ,-X

    // C03D: ADDA $4B02
    cpu.state_.a += 0x4B02;

    // C041: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C043: BCS $001B
    if (cpu.carry_flag()) cpu.state_.pc = 0xC060;

    // C045: CLR $4B02
    cpu.write_memory(0x4B02, 0);

    // C048: BRA $0020
    cpu.state_.pc = 0xC06A;

    // C04A: LDA #$01
    cpu.state_.a = 0x01;

    // C04C: STA $4B02
    cpu.write_memory(0x4B02, cpu.state_.a);

    // C050: BPL $000A
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC05C;

    // C052: LDB #$FF
    cpu.state_.b = 0xFF;

    // C055: CMPB #$EF
    cpu.compare_b(0xEF);

    // C057: BEQ $0054
    if (cpu.zero_flag()) cpu.state_.pc = 0xC0AD;

    // C059: LDA $4B01
    cpu.state_.a = cpu.read_memory(0x4B01);

    // C05C: ADDA $4AFD
    cpu.state_.a += 0x4AFD;

    // C060: STA $4B01
    cpu.write_memory(0x4B01, cpu.state_.a);

    // C063: LDA $4B00
    cpu.state_.a = cpu.read_memory(0x4B00);

    // C066: ADCA $4AFC
    // TODO: Convert ADCA $4AFC

    // C06A: STA $4B00
    cpu.write_memory(0x4B00, cpu.state_.a);

    // C06D: LDA $4AFF
    cpu.state_.a = cpu.read_memory(0x4AFF);

    // C070: ADCA $4AFB
    // TODO: Convert ADCA $4AFB

    // C074: STA $4AFF
    cpu.write_memory(0x4AFF, cpu.state_.a);

    // C077: LDA $4AFE
    cpu.state_.a = cpu.read_memory(0x4AFE);

    // C07A: ADCA $4AFA
    // TODO: Convert ADCA $4AFA

    // C07E: STA $4AFE
    cpu.write_memory(0x4AFE, cpu.state_.a);

    // C081: BCS $0025
    if (cpu.carry_flag()) cpu.state_.pc = 0xC0A8;

    // C083: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C087: BSR $005A
    // TODO: Convert BSR $005A

    // C089: ANDCC #$FE
    // TODO: Convert ANDCC #$FE

    // C08B: LDB #$03
    cpu.state_.b = 0x03;

    // C08D: LDX #$4AFD
    cpu.state_.x = 0x4AFD;

    // C090: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C092: ADCA ,X
    // TODO: Convert ADCA ,X

    // C095: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C097: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C09A: BPL $0061
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC0FD;

    // C09D: LDA #$02
    cpu.state_.a = 0x02;

    // C09F: JSR $C2C3
    cpu.call_function(0xC2C3);

    // C0A2: BNE $00CF
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC073;

    // C0A5: LDB $4815
    cpu.state_.b = cpu.read_memory(0x4815);

    // C0AA: LDB $4816
    cpu.state_.b = cpu.read_memory(0x4816);

    // C0AF: LDB $4817
    cpu.state_.b = cpu.read_memory(0x4817);

    // C0B4: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // C0B6: EORB $4AF4
    cpu.state_.b ^= 0x4AF4;

    // C0B9: ANDB $4AF4
    cpu.state_.b &= 0x4AF4;

    // C0BC: STA $4AF4
    cpu.write_memory(0x4AF4, cpu.state_.a);

    // C0BF: LDX #$4548
    cpu.state_.x = 0x4548;

    // C0C3: BCC $00C8
    if (!cpu.carry_flag()) cpu.state_.pc = 0xC08D;

    // C0C5: LDU #$4B5F
    cpu.state_.u = 0x4B5F;

    // C0C8: JSR $C6D7
    cpu.call_function(0xC6D7);

    // C0CB: LDA $4B61
    cpu.state_.a = cpu.read_memory(0x4B61);

    // C0CE: ADDA #$01
    cpu.state_.a += 0x01;

    // C0D1: STA $4B61
    cpu.write_memory(0x4B61, cpu.state_.a);

    // C0D4: LDA $4B60
    cpu.state_.a = cpu.read_memory(0x4B60);

    // C0D7: ADCA #$00
    // TODO: Convert ADCA #$00

    // C0DA: STA $4B60
    cpu.write_memory(0x4B60, cpu.state_.a);

    // C0DD: LDA $4B5F
    cpu.state_.a = cpu.read_memory(0x4B5F);

    // C0E0: ADCA #$00
    // TODO: Convert ADCA #$00

    // C0E3: STA $4B5F
    cpu.write_memory(0x4B5F, cpu.state_.a);

    // C0E6: LDU #$4B5F
    cpu.state_.u = 0x4B5F;

    // C0E9: JSR $C6F7
    cpu.call_function(0xC6F7);

    // C0EC: LDA #$02
    cpu.state_.a = 0x02;

    // C0EE: STB $4B62
    cpu.write_memory(0x4B62, cpu.state_.b);

    // C0F1: JSR $C2B3
    cpu.call_function(0xC2B3);

    // C0F4: LDB $4B62
    cpu.state_.b = cpu.read_memory(0x4B62);

    // C0F7: LEAX -$6,X
    // TODO: Fix comma operator: LEAX -$6,X

    // C0F9: CMPX #$453C
    cpu.compare_x(0x453C);

    // C0FC: BCC $0093
    if (!cpu.carry_flag()) cpu.state_.pc = 0xC091;

    // C0FF: LDA #$02
    cpu.state_.a = 0x02;

    // C101: JSR $C413
    cpu.call_function(0xC413);

    // C104: LDX #$4554
    cpu.state_.x = 0x4554;

    // C107: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C10A: LDA $4AFD
    cpu.state_.a = cpu.read_memory(0x4AFD);

    // C10D: ADDA $481A
    cpu.state_.a += 0x481A;

    // C111: STA $4AFD
    cpu.write_memory(0x4AFD, cpu.state_.a);

    // C114: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C117: ADCA $4819
    // TODO: Convert ADCA $4819

    // C11B: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.a);

    // C11E: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // C121: ADCA #$00
    // TODO: Convert ADCA #$00

    // C124: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // C127: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // C12A: ADCA #$00
    // TODO: Convert ADCA #$00

    // C12D: BCS $0103
    if (cpu.carry_flag()) cpu.state_.pc = 0xC132;

    // C12F: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C132: LDA #$03
    cpu.state_.a = 0x03;

    // C134: STB $4B02
    cpu.write_memory(0x4B02, cpu.state_.b);

    // C137: LDU #$4AFA
    cpu.state_.u = 0x4AFA;

    // C13A: JSR $C6F9
    cpu.call_function(0xC6F9);

    // C13D: LDX #$454E
    cpu.state_.x = 0x454E;

    // C140: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C143: LDA $4AFC
    cpu.state_.a = cpu.read_memory(0x4AFC);

    // C146: ADDA #$01
    cpu.state_.a += 0x01;

    // C149: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.a);

    // C14C: LDA $4AFB
    cpu.state_.a = cpu.read_memory(0x4AFB);

    // C14F: ADCA #$00
    // TODO: Convert ADCA #$00

    // C152: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // C155: LDA $4AFA
    cpu.state_.a = cpu.read_memory(0x4AFA);

    // C158: ADCA #$00
    // TODO: Convert ADCA #$00

    // C15B: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C15E: JSR $C6F4
    cpu.call_function(0xC6F4);

    // C161: LDX #$4588
    cpu.state_.x = 0x4588;

    // C164: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C167: LDA $4B16
    cpu.state_.a = cpu.read_memory(0x4B16);

    // C16A: CMPA $4AFA
    cpu.compare_a(cpu.read_memory(0x4AFA));

    // C16D: BLS $014C
    // TODO: Convert BLS $014C

    // C16F: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C172: CLR $4AFB
    cpu.write_memory(0x4AFB, 0);

    // C175: CLR $4AFC
    cpu.write_memory(0x4AFC, 0);

    // C178: JSR $C6F4
    cpu.call_function(0xC6F4);

    // C17B: LDX #$4586
    cpu.state_.x = 0x4586;

    // C17E: LDA $4819
    cpu.state_.a = cpu.read_memory(0x4819);

    // C181: BNE $016F
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC1F2;

    // C183: LDA $481A
    cpu.state_.a = cpu.read_memory(0x481A);

    // C186: LDX #$4564
    cpu.state_.x = 0x4564;

    // C189: LDB #$9A
    cpu.state_.b = 0x9A;

    // C18B: SUBB $C7A4
    cpu.state_.b -= 0xC7A4;

    // C18E: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C191: ADDA $4AFA
    cpu.state_.a += 0x4AFA;

    // C195: BCC $016F
    if (!cpu.carry_flag()) cpu.state_.pc = 0xC206;

    // C197: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // C199: CMPX #$4586
    cpu.compare_x(0x4586);

    // C19C: BCS $0162
    if (cpu.carry_flag()) cpu.state_.pc = 0xC200;

    // C19E: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C1A0: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C1A2: ADDA #$01
    cpu.state_.a += 0x01;

    // C1A5: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C1A7: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // C1A9: BEQ $01BA
    if (cpu.zero_flag()) cpu.state_.pc = 0xC165;

    // C1AB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C1AD: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C1AF: ADDA #$01
    cpu.state_.a += 0x01;

    // C1B2: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C1B4: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // C1B6: BEQ $01BA
    if (cpu.zero_flag()) cpu.state_.pc = 0xC172;

    // C1B8: LDX #$4564
    cpu.state_.x = 0x4564;

    // C1BB: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C1C1: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C1C4: LDA $1,X
    // TODO: Fix comma operator: LDA $1,X

    // C1C6: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C1C8: ADDA $4AFA
    cpu.state_.a += 0x4AFA;

    // C1CB: BITA #$10
    // TODO: Convert BITA #$10

    // C1CD: BEQ $01A2
    if (cpu.zero_flag()) cpu.state_.pc = 0xC171;

    // C1CF: SUBA #$06
    cpu.state_.a -= 0x06;

    // C1D2: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C1D8: STA ,X
    // TODO: Handle indexed addressing: STA ,X

    // C1DA: LEAX $2,X
    // TODO: Fix comma operator: LEAX $2,X

    // C1DC: CMPX #$4588
    cpu.compare_x(0x4588);

    // C1DF: BCS $018C
    if (cpu.carry_flag()) cpu.state_.pc = 0xC16D;

    // C1E1: LDA #$05
    cpu.state_.a = 0x05;

    // C1E3: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // C1E5: LDA #$00
    cpu.state_.a = 0x00;

    // C1E7: STA $1,U
    // TODO: Handle indexed addressing: STA $1,U

    // C1E9: LDA $4866
    cpu.state_.a = cpu.read_memory(0x4866);

    // C1EC: STA $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.a);

    // C1EF: LDA $4868
    cpu.state_.a = cpu.read_memory(0x4868);

    // C1F2: STA $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.a);

    // C1F5: LDA $486F
    cpu.state_.a = cpu.read_memory(0x486F);

    // C1F8: STA $4AFC
    cpu.write_memory(0x4AFC, cpu.state_.a);

    // C1FB: LDA $4871
    cpu.state_.a = cpu.read_memory(0x4871);

    // C1FE: STA $4AFD
    cpu.write_memory(0x4AFD, cpu.state_.a);

    // C201: LDX #$4534
    cpu.state_.x = 0x4534;

    // C204: LDU #$4AFA
    cpu.state_.u = 0x4AFA;

    // C207: LDA #$03
    cpu.state_.a = 0x03;

    // C209: JSR $C6F9
    cpu.call_function(0xC6F9);

    // C20C: LDX #$455C
    cpu.state_.x = 0x455C;

    // C20F: JSR $C6D4
    cpu.call_function(0xC6D4);

    // C212: ORCC #$10
    cpu.state_.cc |= 0x10;

    // C214: LDU $4B06
    cpu.state_.u = cpu.read_memory_word(0x4B06);

    // C217: LDD $4B04
    cpu.state_.d = cpu.read_memory_word(0x4B04);

    // C21A: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // C21C: CMPD $4AFA
    // TODO: Convert CMPD $4AFA

    // C220: BHI $01FB
    // TODO: Convert BHI $01FB

    // C222: BCS $020E
    if (cpu.carry_flag()) cpu.state_.pc = 0xC232;

    // C224: CMPU $4AFC
    // TODO: Convert CMPU $4AFC

    // C228: BLS $020E
    // TODO: Convert BLS $020E

    // C22A: STD $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.d);

    // C22D: STU $4A00
    cpu.write_memory(0x4A00, cpu.state_.u);

}

} // namespace StarWars