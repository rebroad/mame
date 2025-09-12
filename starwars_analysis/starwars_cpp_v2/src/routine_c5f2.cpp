#include "cpu_6809.h"

namespace StarWars {

void routine_c5f2_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c5f2.md
    // Address: 0xC5F2

    // C5F2: LDX #$4500
    cpu.m_x = 0x4500;

    // C5F5: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C5F8: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // C5FA: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // C5FC: CMPX #$4600
    cpu.compare_x(0x4600);

    // C5FF: BCS $0006
    if (cpu.carry_flag()) cpu.m_pc = 0xC607;

    // C601: LDX #$4500
    cpu.m_x = 0x4500;

    // C604: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C607: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C609: CMPX #$4600
    cpu.compare_x(0x4600);

    // C60C: BCS $0012
    if (cpu.carry_flag()) cpu.m_pc = 0xC620;

    // C60E: STA $46A0
    cpu.write_memory(0x46A0, cpu.m_a);

    // C611: JSR $C688
    cpu.call_function(0xC688);

    // C614: JSR $C67A
    cpu.call_function(0xC67A);

    // C617: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C61A: LDX #$4500
    cpu.m_x = 0x4500;

    // C61D: LDA ,X
    // TODO: Complex indexed addressing: ,X

    // C620: STA ,X+
    // TODO: Handle indexed addressing: STA ,X+

    // C622: CMPX #$4600
    cpu.compare_x(0x4600);

    // C625: BCS $002B
    if (cpu.carry_flag()) cpu.m_pc = 0xC652;

    // C627: STA $46A0
    cpu.write_memory(0x46A0, cpu.m_a);

    // C62A: JSR $C688
    cpu.call_function(0xC688);

    // C62D: JSR $C641
    cpu.call_function(0xC641);

    // C630: BNE $0069
    if (!cpu.zero_flag()) cpu.m_pc = 0xC69B;

    // C632: JSR $C67A
    cpu.call_function(0xC67A);

    // C635: JSR $C6B8
    cpu.call_function(0xC6B8);

    // C638: JSR $C641
    cpu.call_function(0xC641);

    // C63B: BEQ $004E
    if (cpu.zero_flag()) cpu.m_pc = 0xC68B;

    // C63D: JMP $C65B
    cpu.m_pc = 0xC65B;

    // C641: LDX #$4500
    cpu.m_x = 0x4500;

    // C644: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C647: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C649: EORA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C64B: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C64D: BNE $0068
    if (!cpu.zero_flag()) cpu.m_pc = 0xC6B7;

    // C64F: CMPX #$4600
    cpu.compare_x(0x4600);

    // C652: BCS $0055
    if (cpu.carry_flag()) cpu.m_pc = 0xC6A9;

    // C654: LDA #$01
    cpu.m_a = 0x01;

    // C656: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.m_a);

    // C65B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C65D: TFR X,D
    cpu.m_d = cpu.m_x;

    // C65F: STD $4AF8
    cpu.write_memory16(0x4AF8, cpu.m_d);

    // C662: LDA #$FF
    cpu.m_a = 0xFF;

    // C664: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.m_a);

    // C667: LDX #$4500
    cpu.m_x = 0x4500;

    // C66A: LDU #$4C00
    cpu.m_u = 0x4C00;

    // C66D: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // C66F: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // C671: CMPX #$4600
    cpu.compare_x(0x4600);

    // C674: BCS $007B
    if (cpu.carry_flag()) cpu.m_pc = 0xC6F1;

    // C676: TST $4AF7
    // TODO: Convert TST $4AF7

    // C67A: LDX #$4500
    cpu.m_x = 0x4500;

    // C67D: LDD #$0000
    cpu.m_d = 0x0000;

    // C680: STD ,X++
    cpu.write_memory16(cpu.m_x++, cpu.m_d);

    // C682: CMPX #$4600
    cpu.compare_x(0x4600);

    // C685: BCS $008E
    if (cpu.carry_flag()) cpu.m_pc = 0xC615;

    // C688: LDX #$07D0
    cpu.m_x = 0x07D0;

    // C68B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C68D: BNE $0099
    if (!cpu.zero_flag()) cpu.m_pc = 0xC628;

    // C690: LDA $4AF7
    cpu.m_a = cpu.read_memory(0x4AF7);

    // C693: BEQ $00C5
    if (cpu.zero_flag()) cpu.m_pc = 0xC65A;

    // C695: CMPA #$01
    cpu.compare_a(0x01);

    // C697: BNE $00AB
    if (!cpu.zero_flag()) cpu.m_pc = 0xC644;

    // C699: LDB #$9C
    cpu.m_b = 0x9C;

    // C69B: BRA $00C2
    cpu.m_pc = 0xC65F;

    // C69D: LDD #$1F6A
    cpu.m_d = 0x1F6A;

    // C6A0: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C6A2: LDD #$01A4
    cpu.m_d = 0x01A4;

    // C6A5: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C6A7: LDA $4AF9
    cpu.m_a = cpu.read_memory(0x4AF9);

    // C6AA: JSR $E790
    cpu.call_function(0xE790);

    // C6AD: LDD #$8040
    cpu.m_d = 0x8040;

    // C6B0: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C6B2: LDB #$9D
    cpu.m_b = 0x9D;

    // C6B4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // C6B8: LDA #$FF
    cpu.m_a = 0xFF;

    // C6BA: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);

    // C6BD: JSR $6005
    cpu.call_function(0x6005);

    // C6C0: LDA #$00
    cpu.m_a = 0x00;

    // C6C2: STA $4687
    cpu.write_memory(0x4687, cpu.m_a);

    // C6C5: LDU #$0000
    cpu.m_u = 0x0000;

    // C6C8: JSR $6005
    cpu.call_function(0x6005);

    // C6CB: LEAU $1,U
    // TODO: Fix comma operator: LEAU $1,U

    // C6CD: CMPU #$0020
    // TODO: Convert CMPU #$0020

    // C6D1: BCS $00D6
    if (cpu.carry_flag()) cpu.m_pc = 0xC6A9;

    // C6D4: LDU #$4AFA
    cpu.m_u = 0x4AFA;

    // C6D7: LDA #$03
    cpu.m_a = 0x03;

    // C6D9: STA $4B02
    cpu.write_memory(0x4B02, cpu.m_a);

    // C6DC: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E2: STA ,U
    // TODO: Handle indexed addressing: STA ,U

    // C6E4: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C6E6: ANDA #$0F
    cpu.m_a &= 0x0F;

    // C6E8: ADDA ,U
    // TODO: Complex indexed addressing: ,U

    // C6EA: STA ,U+
    // TODO: Handle indexed addressing: STA ,U+

    // C6EC: DEC $4B02
    // TODO: Convert DEC $4B02

    // C6EF: BPL $00EA
    if (!cpu.negative_flag()) cpu.m_pc = 0xC6DB;

    // C6F1: LEAX -$8,X
    // TODO: Fix comma operator: LEAX -$8,X

    // C6F4: LDU #$4AFA
    cpu.m_u = 0x4AFA;

    // C6F7: LDA #$02
    cpu.m_a = 0x02;

    // C6F9: STA $4B02
    cpu.write_memory(0x4B02, cpu.m_a);

    // C6FC: LDA ,U+
    // TODO: Complex indexed addressing: ,U+

    // C6FE: STA $1,X
    // TODO: Handle indexed addressing: STA $1,X

    // C704: STA ,X++
    cpu.write_memory(cpu.m_x++, cpu.m_a);

    // C706: DEC $4B02
    // TODO: Convert DEC $4B02

    // C709: BPL $010A
    if (!cpu.negative_flag()) cpu.m_pc = 0xC715;

    // C70B: LEAX -$6,X
    // TODO: Fix comma operator: LEAX -$6,X

    // C70E: LDB #$00
    cpu.m_b = 0x00;

    // C710: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // C712: TFR A,B
    cpu.m_b = cpu.m_a;

    // C718: CMPA #$0A
    cpu.compare_a(0x0A);

    // C71A: BCS $012C
    if (cpu.carry_flag()) cpu.m_pc = 0xC748;

    // C71C: LDA #$09
    cpu.m_a = 0x09;

    // C71E: JSR $E7AD
    cpu.call_function(0xE7AD);

    // C721: LDA #$B8
    cpu.m_a = 0xB8;

    // C723: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C725: LDA #$DF
    cpu.m_a = 0xDF;

    // C727: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // C72A: ANDB #$0F
    cpu.m_b &= 0x0F;

    // C72C: BEQ $0142
    if (cpu.zero_flag()) cpu.m_pc = 0xC770;

    // C72E: ADDA #$04
    cpu.m_a += 0x04;

    // C732: BNE $013C
    if (!cpu.zero_flag()) cpu.m_pc = 0xC770;

    // C734: JMP $E790
    cpu.m_pc = 0xE790;

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
    cpu.m_a -= 0x0949;

    // C79D: ADCA #$C1
    // TODO: Convert ADCA #$C1

    // C79F: ANDB ,U
    // TODO: Complex indexed addressing: ,U

    // C7A1: ANDA ,X
    // TODO: Complex indexed addressing: ,X

    // C7A3: NEG <$05
    // TODO: Convert NEG <$05

    // C7A5: DEC <$10
    // TODO: Convert DEC <$10

    // C7A8: ORCC #$20
    cpu.m_cc |= 0x20;

    // C7AA: BCS $01E4
    if (cpu.carry_flag()) cpu.m_pc = 0xC790;

    // C7AC: LEAX -$B,Y
    // TODO: Fix comma operator: LEAX -$B,Y

    // C7B5: NEG $0,X
    // TODO: Convert NEG $0,X

    // C7B7: ASL <$34
    // TODO: Convert ASL <$34

    // C7B9: SUBA <$98
    cpu.m_a -= 0x98;

    // C7BB: NEG <$B8
    // TODO: Convert NEG <$B8

    // C7BD: NEG <$90
    // TODO: Convert NEG <$90

    // C7BF: NEG <$68
    // TODO: Convert NEG <$68

    // C7C1: NEG <$18
    // TODO: Convert NEG <$18

    // C7C3: NEG <$40
    // TODO: Convert NEG <$40

    // C7C5: NEG <$B4
    // TODO: Convert NEG <$B4

    // C7C7: NEG <$50
    // TODO: Convert NEG <$50

    // C7C9: NEG <$DC
    // TODO: Convert NEG <$DC

    // C7CB: NEG <$78
    // TODO: Convert NEG <$78

    // C7CD: EXG inv,DP
    // TODO: Convert EXG inv,DP

    // C7CF: EXG B,A
    // TODO: Convert EXG B,A

    // C7D1: EXG inv,PC
    // TODO: Convert EXG inv,PC

    // C7D3: EXG inv,Y
    // TODO: Convert EXG inv,Y

    // C7D5: TFR X,inv
    cpu.m_inv = cpu.m_x;

    // C7D7: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // C7D9: TFR inv,B
    cpu.m_b = cpu.m_inv;

    // C7DB: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // C7DD: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // C7DF: EXG inv,DP
    // TODO: Convert EXG inv,DP

    // C7E1: EXG B,A
    // TODO: Convert EXG B,A

    // C7E3: EXG inv,PC
    // TODO: Convert EXG inv,PC

    // C7E5: EXG inv,Y
    // TODO: Convert EXG inv,Y

    // C7E7: TFR X,inv
    cpu.m_inv = cpu.m_x;

    // C7E9: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // C7EB: TFR inv,B
    cpu.m_b = cpu.m_inv;

    // C7ED: TFR CC,inv
    cpu.m_inv = cpu.m_cc;

    // C7EF: TFR inv,U
    cpu.m_u = cpu.m_inv;

    // C7F1: LSR >$0000
    // TODO: Convert LSR >$0000

}

} // namespace StarWars