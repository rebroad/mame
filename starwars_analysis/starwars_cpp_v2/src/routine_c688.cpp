#include "cpu_6809.h"

namespace StarWars {

void routine_c688_impl(CPU6809& cpu) {
    // Converted from rom_disasm_c688.md
    // Address: 0xC688

    // C688: LDX #$07D0
    cpu.m_x = 0x07D0;

    // C68B: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // C68D: BNE $0003
    if (!cpu.zero_flag()) cpu.m_pc = 0xC692;

    // C690: LDA $4AF7
    cpu.m_a = cpu.read_memory(0x4AF7);

    // C693: BEQ $002F
    if (cpu.zero_flag()) cpu.m_pc = 0xC6C4;

    // C695: CMPA #$01
    cpu.compare_a(0x01);

    // C697: BNE $0015
    if (!cpu.zero_flag()) cpu.m_pc = 0xC6AE;

    // C699: LDB #$9C
    cpu.m_b = 0x9C;

    // C69B: BRA $002C
    cpu.m_pc = 0xC6C9;

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

    // C6D1: BCS $0040
    if (cpu.carry_flag()) cpu.m_pc = 0xC713;

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

    // C6EF: BPL $0054
    if (!cpu.negative_flag()) cpu.m_pc = 0xC745;

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

    // C709: BPL $0074
    if (!cpu.negative_flag()) cpu.m_pc = 0xC77F;

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

    // C71A: BCS $0096
    if (cpu.carry_flag()) cpu.m_pc = 0xC6B2;

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

    // C72C: BEQ $00AC
    if (cpu.zero_flag()) cpu.m_pc = 0xC6DA;

    // C72E: ADDA #$04
    cpu.m_a += 0x04;

    // C732: BNE $00A6
    if (!cpu.zero_flag()) cpu.m_pc = 0xC6DA;

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

    // C7AA: BCS $014E
    if (cpu.carry_flag()) cpu.m_pc = 0xC7FA;

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

    // C7F1: LSR $787A
    // TODO: Convert LSR $787A

    // C7F4: JMP $868A
    cpu.m_pc = 0x868A;

    // C7F7: LDX #$9294
    cpu.m_x = 0x9294;

    // C7FA: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // C7FC: ORA <$7D
    cpu.m_a |= 0x7D;

    // C7FF: LDD $B,Y
    // TODO: Fix comma operator: LDD $B,Y

    // C801: CLR <$86
    cpu.write_memory(0x86, 0);

    // C804: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C807: LDD #$7200
    cpu.m_d = 0x7200;

    // C80A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C80C: LDD #$CA64
    cpu.m_d = 0xCA64;

    // C80F: BRA $0196
    cpu.m_pc = 0xC7A7;

    // C811: LDA #$3F
    cpu.m_a = 0x3F;

    // C813: JSR $D8DF
    cpu.call_function(0xD8DF);

    // C816: LDD #$7140
    cpu.m_d = 0x7140;

    // C819: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C81B: LDD #$CA78
    cpu.m_d = 0xCA78;

    // C81E: STD $4AF1
    cpu.write_memory16(0x4AF1, cpu.m_d);

    // C821: LDA #$00
    cpu.m_a = 0x00;

    // C823: STA $4AEA
    cpu.write_memory(0x4AEA, cpu.m_a);

    // C826: LDU $4AF1
    cpu.m_u = cpu.read_memory16(0x4AF1);

    // C829: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // C82B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C82D: LDD #$1F80
    cpu.m_d = 0x1F80;

    // C830: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C832: LDB $4AEA
    cpu.m_b = cpu.read_memory(0x4AEA);

    // C836: ADDB $4AEA
    cpu.m_b += 0x4AEA;

    // C839: LDX #$4AB6
    cpu.m_x = 0x4AB6;

    // C83D: CMPX $4AEC
    cpu.compare_x(cpu.read_memory16(0x4AEC));

    // C840: BNE $01BF
    if (!cpu.zero_flag()) cpu.m_pc = 0xC801;

    // C842: LDD #$6780
    cpu.m_d = 0x6780;

    // C845: BRA $01C2
    cpu.m_pc = 0xC809;

    // C847: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C84A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C84C: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // C84E: LDU #$3016
    cpu.m_u = 0x3016;

    // C851: TST $4AEC
    // TODO: Convert TST $4AEC

    // C854: BMI $01E9
    if (cpu.negative_flag()) cpu.m_pc = 0xC83F;

    // C856: LDA $4AEE
    cpu.m_a = cpu.read_memory(0x4AEE);

    // C859: CMPA #$00
    cpu.compare_a(0x00);

    // C85B: BNE $01E5
    if (!cpu.zero_flag()) cpu.m_pc = 0xC842;

    // C85D: LDA $4843
    cpu.m_a = cpu.read_memory(0x4843);

    // C860: ANDA #$01
    cpu.m_a &= 0x01;

    // C862: BNE $01E1
    if (!cpu.zero_flag()) cpu.m_pc = 0xC845;

    // C864: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // C867: BRA $01E3
    cpu.m_pc = 0xC84C;

    // C869: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86B: BRA $01E7
    cpu.m_pc = 0xC854;

    // C86D: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // C86F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // C871: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // C873: BNE $01FC
    if (!cpu.zero_flag()) cpu.m_pc = 0xC871;

    // C875: TST $4AEC
    // TODO: Convert TST $4AEC

    // C878: BMI $01F7
    if (cpu.negative_flag()) cpu.m_pc = 0xC871;

    // C87A: LDD $3054
    cpu.m_d = cpu.read_memory16(0x3054);

    // C87D: BRA $01FA
    cpu.m_pc = 0xC879;

    // C87F: LDD $3002
    cpu.m_d = cpu.read_memory16(0x3002);

    // C882: BRA $01FF
    cpu.m_pc = 0xC883;

    // C885: LDD A,U
    // TODO: Fix comma operator: LDD A,U

    // C887: STD $0,X
    // TODO: Handle indexed addressing: STD $0,X

}

} // namespace StarWars