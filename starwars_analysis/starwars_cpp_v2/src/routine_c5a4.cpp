#include "cpu_6809.h"

namespace StarWars {

void routine_c5a4_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_c5a4.md
    // Address: 0xC5A4

    // C5A4: LDX #$C797
    cpu.state_.x = 0xC797;

    // C5A7: LDB A,X
    // TODO: Fix comma operator: LDB A,X

    // C5A9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5AC: ANDB #$07
    cpu.state_.b &= 0x07;

    // C5AE: LDX #$4590
    cpu.state_.x = 0x4590;

    // C5B3: LDB $4AFA
    cpu.state_.b = cpu.read_memory(0x4AFA);

    // C5B9: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5BC: ANDB #$03
    cpu.state_.b &= 0x03;

    // C5BE: LDU #$C737
    cpu.state_.u = 0xC737;

    // C5C1: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // C5C3: LDB $4AFA
    cpu.state_.b = cpu.read_memory(0x4AFA);

    // C5C8: STB $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.b);

    // C5CB: LDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5D1: STB $4AFB
    cpu.write_memory(0x4AFB, cpu.state_.b);

    // C5D4: LDB $1,X
    // TODO: Fix comma operator: LDB $1,X

    // C5D6: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // C5D8: ADDB $4AFB
    cpu.state_.b += 0x4AFB;

    // C5DB: DEC $4AFA
    // TODO: Convert DEC $4AFA

    // C5DE: BMI $003F
    if (cpu.negative_flag()) cpu.state_.pc = 0xC61F;

    // C5E1: BRA $0037
    cpu.state_.pc = 0xC61A;

    // C5E3: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C5E5: STB $4AF5
    cpu.write_memory(0x4AF5, cpu.state_.b);

    // C5E8: LDX #$C7F1
    cpu.state_.x = 0xC7F1;

    // C5EB: LEAX A,X
    // TODO: Fix comma operator: LEAX A,X

    // C5ED: ADDB ,X
    // TODO: Complex indexed addressing: ,X

    // C5EF: JMP $E7D3
    cpu.state_.pc = 0xE7D3;

    // C5F2: LDX #$4500
    cpu.state_.x = 0x4500;

    // C5F5: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C5F8: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // C5FA: STD ,U++
    cpu.write_memory(cpu.state_.u++, cpu.state_.d);

    // C5FC: CMPX #$4600
    cpu.compare_x(0x4600);

    // C5FF: BCS $0054
    if (cpu.carry_flag()) cpu.state_.pc = 0xC655;

    // C601: LDX #$4500
    cpu.state_.x = 0x4500;

    // C604: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C607: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C609: CMPX #$4600
    cpu.compare_x(0x4600);

    // C60C: BCS $0060
    if (cpu.carry_flag()) cpu.state_.pc = 0xC66E;

    // C60E: STA $46A0
    cpu.write_memory(0x46A0, cpu.state_.a);

    // C611: JSR $C688
    cpu.call_function(0xC688);

    // C614: JSR $C67A
    cpu.call_function(0xC67A);

    // C617: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C61A: LDX #$4500
    cpu.state_.x = 0x4500;

    // C61D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C620: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C622: CMPX #$4600
    cpu.compare_x(0x4600);

    // C625: BCS $0079
    if (cpu.carry_flag()) cpu.state_.pc = 0xC6A0;

    // C627: STA $46A0
    cpu.write_memory(0x46A0, cpu.state_.a);

    // C62A: JSR $C688
    cpu.call_function(0xC688);

    // C62D: JSR $C641
    cpu.call_function(0xC641);

    // C630: BNE $00B7
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC5E9;

    // C632: JSR $C67A
    cpu.call_function(0xC67A);

    // C635: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C638: JSR $C641
    cpu.call_function(0xC641);

    // C63B: BEQ $009C
    if (cpu.zero_flag()) cpu.state_.pc = 0xC5D9;

    // C63D: JMP $C65B
    cpu.state_.pc = 0xC65B;

    // C641: LDX #$4500
    cpu.state_.x = 0x4500;

    // C644: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C647: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C649: EORA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C64B: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C64D: BNE $00B6
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC605;

    // C64F: CMPX #$4600
    cpu.compare_x(0x4600);

    // C652: BCS $00A3
    if (cpu.carry_flag()) cpu.state_.pc = 0xC5F7;

    // C654: LDA #$01
    cpu.state_.a = 0x01;

    // C656: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.state_.a);

    // C65B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C65D: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // C65F: STD $4AF8
    cpu.write_memory(0x4AF8, cpu.state_.d);

    // C662: LDA #$FF
    cpu.state_.a = 0xFF;

    // C664: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.state_.a);

    // C667: LDX #$4500
    cpu.state_.x = 0x4500;

    // C66A: LDU #$4C00
    cpu.state_.u = 0x4C00;

    // C66D: LDD ,U++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.u++);

    // C66F: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C671: CMPX #$4600
    cpu.compare_x(0x4600);

    // C674: BCS $00C9
    if (cpu.carry_flag()) cpu.state_.pc = 0xC63F;

    // C676: TST $4AF7
    // TODO: Convert TST $4AF7

    // C67A: LDX #$4500
    cpu.state_.x = 0x4500;

    // C67D: LDD #$0000
    cpu.state_.d = 0x0000;

    // C680: STD ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.d);

    // C682: CMPX #$4600
    cpu.compare_x(0x4600);

    // C685: BCS $00DC
    if (cpu.carry_flag()) cpu.state_.pc = 0xC663;

    // C688: LDX #$07D0
    cpu.state_.x = 0x07D0;

    // C68B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C68D: BNE $00E7
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC676;

    // C690: LDA $4AF7
    cpu.state_.a = cpu.read_memory(0x4AF7);

    // C693: BEQ $0113
    if (cpu.zero_flag()) cpu.state_.pc = 0xC6A8;

    // C695: CMPA #$01
    cpu.compare_a(0x01);

    // C697: BNE $00F9
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC692;

    // C699: LDB #$9C
    cpu.state_.b = 0x9C;

    // C69B: BRA $0110
    cpu.state_.pc = 0xC6AD;

    // C69D: LDD #$1F6A
    cpu.state_.d = 0x1F6A;

    // C6A0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6A2: LDD #$01A4
    cpu.state_.d = 0x01A4;

    // C6A5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6A7: LDA $4AF9
    cpu.state_.a = cpu.read_memory(0x4AF9);

    // C6AA: JSR $E790
    cpu.call_function(0xE790);

    // C6AD: LDD #$8040
    cpu.state_.d = 0x8040;

    // C6B0: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // C6B2: LDB #$9D
    cpu.state_.b = 0x9D;

    // C6B4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C6B8: LDA #$FF
    cpu.state_.a = 0xFF;

    // C6BA: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // C6BD: JSR $6005
    cpu.call_function(0x6005);

    // C6C0: LDA #$00
    cpu.state_.a = 0x00;

    // C6C2: STA $4687
    cpu.write_memory(0x4687, cpu.state_.a);

    // C6C5: LDU #$0000
    cpu.state_.u = 0x0000;

    // C6C8: JSR $6005
    cpu.call_function(0x6005);

    // C6CB: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // C6CD: CMPU #$0020
    // TODO: Convert CMPU #$0020

    // C6D1: BCS $0124
    if (cpu.carry_flag()) cpu.state_.pc = 0xC6F7;

    // C6D4: LDU #$4AFA
    cpu.state_.u = 0x4AFA;

    // C6D7: LDA #$03
    cpu.state_.a = 0x03;

    // C6D9: STA $4B02
    cpu.write_memory(0x4B02, cpu.state_.a);

    // C6DC: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E2: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // C6E4: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E6: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // C6E8: ADDA ,U
    // TODO: Complex indexed addressing: ,U

    // C6EA: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+

    // C6EC: DEC $4B02
    // TODO: Convert DEC $4B02

    // C6EF: BPL $0138
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC729;

    // C6F1: LEAX -$8,X
    // TODO: Fix comma operator: LEAX -$8,X

    // C6F4: LDU #$4AFA
    cpu.state_.u = 0x4AFA;

    // C6F7: LDA #$02
    cpu.state_.a = 0x02;

    // C6F9: STA $4B02
    cpu.write_memory(0x4B02, cpu.state_.a);

    // C6FC: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C6FE: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C704: STA ,X++
    cpu.write_memory(cpu.state_.x++, cpu.state_.a);

    // C706: DEC $4B02
    // TODO: Convert DEC $4B02

    // C709: BPL $0158
    if (!cpu.negative_flag()) cpu.state_.pc = 0xC763;

    // C70B: LEAX -$6,X
    // TODO: Fix comma operator: LEAX -$6,X

    // C70E: LDB #$00
    cpu.state_.b = 0x00;

    // C710: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // C712: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // C718: CMPA #$0A
    cpu.compare_a(0x0A);

    // C71A: BCS $017A
    if (cpu.carry_flag()) cpu.state_.pc = 0xC796;

    // C71C: LDA #$09
    cpu.state_.a = 0x09;

    // C71E: JSR $E7AD
    cpu.call_function(0xE7AD);

    // C721: LDA #$B8
    cpu.state_.a = 0xB8;

    // C723: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C725: LDA #$DF
    cpu.state_.a = 0xDF;

    // C727: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C72A: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // C72C: BEQ $0190
    if (cpu.zero_flag()) cpu.state_.pc = 0xC6BE;

    // C72E: ADDA #$04
    cpu.state_.a += 0x04;

    // C732: BNE $018A
    if (!cpu.zero_flag()) cpu.state_.pc = 0xC6BE;

    // C734: JMP $E790
    cpu.state_.pc = 0xE790;

    // C737: NEG <$03
    // TODO: Convert NEG <$03

    // C739: ASR <$0F
    // TODO: Convert ASR <$0F

    // C73B: ASL <$00
    // TODO: Convert ASL <$00

    // C73D: ASL <$00
    // TODO: Convert ASL <$00

    // C73F: ASL <$00
    // TODO: Convert ASL <$00

    // C741: ASL <$00
    // TODO: Convert ASL <$00

    // C743: NEG <$00
    // TODO: Convert NEG <$00

    // C745: NEG <$00
    // TODO: Convert NEG <$00

    // C747: NEG <$00
    // TODO: Convert NEG <$00

    // C749: NEG <$00
    // TODO: Convert NEG <$00

    // C74B: NEG <$00
    // TODO: Convert NEG <$00

    // C74D: NEG <$00
    // TODO: Convert NEG <$00

    // C74F: NEG <$00
    // TODO: Convert NEG <$00

    // C751: NEG <$00
    // TODO: Convert NEG <$00

    // C753: NEG <$00
    // TODO: Convert NEG <$00

    // C755: NEG <$00
    // TODO: Convert NEG <$00

    // C757: NEG <$00
    // TODO: Convert NEG <$00

    // C759: NEG <$00
    // TODO: Convert NEG <$00

    // C75B: NEG <$00
    // TODO: Convert NEG <$00

    // C75D: NEG <$00
    // TODO: Convert NEG <$00

    // C75F: NEG <$00
    // TODO: Convert NEG <$00

    // C761: NEG <$00
    // TODO: Convert NEG <$00

    // C763: NEG <$00
    // TODO: Convert NEG <$00

    // C765: NEG <$00
    // TODO: Convert NEG <$00

    // C767: NEG <$00
    // TODO: Convert NEG <$00

    // C769: NEG <$00
    // TODO: Convert NEG <$00

    // C76B: NEG <$00
    // TODO: Convert NEG <$00

    // C76D: NEG <$00
    // TODO: Convert NEG <$00

    // C76F: NEG <$00
    // TODO: Convert NEG <$00

    // C771: NEG <$00
    // TODO: Convert NEG <$00

    // C773: NEG <$00
    // TODO: Convert NEG <$00

    // C775: NEG <$00
    // TODO: Convert NEG <$00

    // C777: NEG <$00
    // TODO: Convert NEG <$00

    // C779: NEG <$00
    // TODO: Convert NEG <$00

    // C77B: NEG <$00
    // TODO: Convert NEG <$00

    // C77D: NEG <$00
    // TODO: Convert NEG <$00

    // C77F: NEG <$00
    // TODO: Convert NEG <$00

    // C781: NEG <$00
    // TODO: Convert NEG <$00

    // C783: NEG <$00
    // TODO: Convert NEG <$00

    // C785: NEG <$00
    // TODO: Convert NEG <$00

    // C787: NEG <$00
    // TODO: Convert NEG <$00

    // C789: NEG <$00
    // TODO: Convert NEG <$00

    // C78B: NEG <$00
    // TODO: Convert NEG <$00

    // C78D: NEG <$00
    // TODO: Convert NEG <$00

    // C78F: NEG <$00
    // TODO: Convert NEG <$00

    // C791: NEG <$00
    // TODO: Convert NEG <$00

    // C793: NEG <$00
    // TODO: Convert NEG <$00

    // C795: NEG <$00
    // TODO: Convert NEG <$00

    // C797: ASL <$80
    // TODO: Convert ASL <$80

    // C79A: SUBA $0949
    cpu.state_.a -= 0x0949;

    // C79D: ADCA #$C1
    // TODO: Convert ADCA #$C1

    // C79F: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C7A1: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // C7A3: NEG <$00
    // TODO: Convert NEG <$00

}

} // namespace StarWars