#include "cpu_6809.h"

namespace StarWars {

void routine_b579_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b579.md
    // Address: 0xB579

    // B579: LDA #$00
    cpu.state_.a = 0x00;

    // B57B: STA $49BD
    cpu.write_memory(0x49BD, cpu.state_.a);

    // B57E: LDA $49C0
    cpu.state_.a = cpu.read_memory(0x49C0);

    // B581: STA $49BE
    cpu.write_memory(0x49BE, cpu.state_.a);

    // B584: LDA #$88
    cpu.state_.a = 0x88;

    // B586: STA $49C1
    cpu.write_memory(0x49C1, cpu.state_.a);

    // B589: LDB $5040
    cpu.state_.b = cpu.read_memory(0x5040);

    // B58F: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // B591: LDX #$4999
    cpu.state_.x = 0x4999;

    // B595: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B597: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // B59A: ANDA #$F8
    cpu.state_.a &= 0xF8;

    // B59C: ADDA #$04
    cpu.state_.a += 0x04;

    // B59E: LDB #$00
    cpu.state_.b = 0x00;

    // B5A0: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // B5A3: LDD #$0400
    cpu.state_.d = 0x0400;

    // B5A6: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // B5A9: LDD #$F200
    cpu.state_.d = 0xF200;

    // B5AC: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // B5AF: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B5B1: CMPX #$49A9
    cpu.compare_x(0x49A9);

    // B5B4: BCS $0040
    if (cpu.carry_flag()) cpu.state_.pc = 0xB5F6;

    // B5B6: LEAX -$10,X
    // TODO: Fix comma operator: LEAX -$10,X

    // B5B9: LDA ,X+
    // TODO: Complex indexed addressing: ,X+

    // B5BB: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // B5BD: STA <$9E
    cpu.write_memory(0x9E, cpu.state_.a);

    // B5BF: ANDA #$03
    cpu.state_.a &= 0x03;

    // B5C1: CMPA <$9C
    cpu.compare_a(cpu.read_memory(0x9C));

    // B5C3: LBNE $00D7
    // TODO: Convert LBNE $00D7

    // B5C7: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B5C9: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B5CB: LDD #$000F
    cpu.state_.d = 0x000F;

    // B5CE: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B5D1: LDA #$67
    cpu.state_.a = 0x67;

    // B5D3: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B5D6: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B5D8: CMPA #$02
    cpu.compare_a(0x02);

    // B5DA: BNE $0076
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB652;

    // B5DC: INC $49BD
    // TODO: Convert INC $49BD

    // B5DF: LDB $49BE
    cpu.state_.b = cpu.read_memory(0x49BE);

    // B5E3: LDX #$B6B3
    cpu.state_.x = 0xB6B3;

    // B5E6: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // B5E8: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B5EA: LDA $49C1
    cpu.state_.a = cpu.read_memory(0x49C1);

    // B5ED: STA -$1,Y
    // TODO: Handle indexed addressing: STA -$1,Y

    // B5EF: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B5F2: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B5F5: CMPD #$1000
    // TODO: Convert CMPD #$1000

    // B5F9: BGT $00D1
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB6CC;

    // B5FB: LDA <$9D
    cpu.state_.a = cpu.read_memory(0x9D);

    // B5FD: CMPA #$0E
    cpu.compare_a(0x0E);

    // B5FF: BNE $00CC
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB6CD;

    // B601: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // B604: SUBD #$0000
    cpu.state_.d -= 0x0000;

    // B607: BLT $00D7
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB6E0;

    // B609: LDD $5042
    cpu.state_.d = cpu.read_memory_word(0x5042);

    // B60C: BLT $00CC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB6DA;

    // B60E: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B611: ADDD #$0200
    cpu.state_.d += 0x0200;

    // B614: SUBD $5044
    cpu.state_.d -= 0x5044;

    // B617: BLT $00CC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB6E5;

    // B619: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B61C: BGT $00CC
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0xB6EA;

    // B61E: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B621: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B624: SUBD #$0400
    cpu.state_.d -= 0x0400;

    // B627: BHI $00CC
    // TODO: Convert BHI $00CC

    // B629: LDA #$0F
    cpu.state_.a = 0x0F;

    // B62B: STA <$DC
    cpu.write_memory(0xDC, cpu.state_.a);

    // B62D: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // B62F: BLT $00BE
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0xB6EF;

    // B631: JSR $9874
    cpu.call_function(0x9874);

    // B634: JSR $BDB2
    cpu.call_function(0xBDB2);

    // B637: LDA <$63
    cpu.state_.a = cpu.read_memory(0x63);

    // B639: BNE $00CC
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB707;

    // B63B: LDA #$4E
    cpu.state_.a = 0x4E;

    // B63D: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B640: BPL $00CA
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB70C;

    // B643: STA <$63
    cpu.write_memory(0x63, cpu.state_.a);

    // B645: JSR $CD5C
    cpu.call_function(0xCD5C);

    // B648: BRA $00D4
    cpu.state_.pc = 0xB71E;

    // B64A: JSR $CD50
    cpu.call_function(0xCD50);

    // B64D: JSR $CD74
    cpu.call_function(0xCD74);

    // B650: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // B653: ADDD #$0400
    cpu.state_.d += 0x0400;

    // B656: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // B659: LDA <$9E
    cpu.state_.a = cpu.read_memory(0x9E);

    // B65D: LBNE $0044
    // TODO: Convert LBNE $0044

    // B661: LDA <$9C
    cpu.state_.a = cpu.read_memory(0x9C);

    // B663: CMPA #$02
    cpu.compare_a(0x02);

    // B665: BNE $0126
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB78D;

    // B667: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // B669: LDA -$0011,X
    // TODO: Fix comma operator: LDA -$0011,X

    // B66E: BCC $00FE
    if (!cpu.carry_flag()) cpu.state_.pc = 0xB76E;

    // B670: BMI $00FE
    if (cpu.negative_flag()) cpu.state_.pc = 0xB770;

    // B672: INC $49BD
    // TODO: Convert INC $49BD

    // B675: BRA $0101
    cpu.state_.pc = 0xB778;

    // B678: BNE $00F4
    if (!cpu.zero_flag()) cpu.state_.pc = 0xB76E;

    // B67A: LDA $49BD
    cpu.state_.a = cpu.read_memory(0x49BD);

    // B67D: BEQ $0126
    if (cpu.zero_flag()) cpu.state_.pc = 0xB7A5;

    // B67F: LDA $49BE
    cpu.state_.a = cpu.read_memory(0x49BE);

    // B683: CMPA #$03
    cpu.compare_a(0x03);

    // B685: BCS $0110
    if (cpu.carry_flag()) cpu.state_.pc = 0xB797;

    // B687: LDA #$00
    cpu.state_.a = 0x00;

    // B689: STA $49BE
    cpu.write_memory(0x49BE, cpu.state_.a);

    // B68C: LDA $49C1
    cpu.state_.a = cpu.read_memory(0x49C1);

    // B68F: SUBA #$08
    cpu.state_.a -= 0x08;

    // B691: CMPA #$40
    cpu.compare_a(0x40);

    // B693: BCC $011E
    if (!cpu.carry_flag()) cpu.state_.pc = 0xB7B3;

    // B695: LDA #$40
    cpu.state_.a = 0x40;

    // B697: STA $49C1
    cpu.write_memory(0x49C1, cpu.state_.a);

    // B69A: LDA #$00
    cpu.state_.a = 0x00;

    // B69C: STA $49BD
    cpu.write_memory(0x49BD, cpu.state_.a);

    // B69F: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // B6A2: ADDD #$0800
    cpu.state_.d += 0x0800;

    // B6A5: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // B6A8: SUBD $5040
    cpu.state_.d -= 0x5040;

    // B6AB: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // B6AE: LBCS $0030
    // TODO: Convert LBCS $0030

    // B6B3: ROR ,X+
    // TODO: Convert ROR ,X+

    // B6B5: COM ,X+
    // TODO: Convert COM ,X+

    // B6B7: LSR ,X+
    // TODO: Convert LSR ,X+

    // B6B9: JSR $B6C7
    cpu.call_function(0xB6C7);

    // B6BC: JSR $B6D7
    cpu.call_function(0xB6D7);

    // B6C0: JSR $B6CC
    cpu.call_function(0xB6CC);

    // B6C3: JSR $B6D7
    cpu.call_function(0xB6D7);

    // B6C7: LDD #$6380
    cpu.state_.d = 0x6380;

    // B6CA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B6CC: LDD #$A012
    cpu.state_.d = 0xA012;

    // B6CF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B6D1: LDD $32FE
    cpu.state_.d = cpu.read_memory_word(0x32FE);

    // B6D4: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // B6D7: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // B6D9: BPL $0163
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB83E;

    // B6DC: LDB #$6E
    cpu.state_.b = 0x6E;

    // B6DF: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // B6E1: BPL $016B
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB84E;

    // B6E4: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // B6E7: STD $4B1C
    cpu.write_memory(0x4B1C, cpu.state_.d);

    // B6EA: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // B6EC: STD $2,Y
    // TODO: Handle indexed addressing: STD $2,Y

    // B6EE: STD $8,Y
    // TODO: Handle indexed addressing: STD $8,Y

    // B6F0: STD $E,Y
    // TODO: Handle indexed addressing: STD $E,Y

    // B6F2: STD $14,Y
    // TODO: Handle indexed addressing: STD $14,Y

    // B6F5: STD $1A,Y
    // TODO: Handle indexed addressing: STD $1A,Y

    // B6F8: LDA <$7F
    cpu.state_.a = cpu.read_memory(0x7F);

    // B6FA: BPL $0184
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB880;

    // B6FD: LDB #$50
    cpu.state_.b = 0x50;

    // B700: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // B702: BPL $018C
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB890;

    // B705: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // B708: STD $4B1E
    cpu.write_memory(0x4B1E, cpu.state_.d);

    // B70B: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // B70D: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // B70F: STD $6,Y
    // TODO: Handle indexed addressing: STD $6,Y

    // B711: STD $C,Y
    // TODO: Handle indexed addressing: STD $C,Y

    // B713: STD $12,Y
    // TODO: Handle indexed addressing: STD $12,Y

    // B716: STD $18,Y
    // TODO: Handle indexed addressing: STD $18,Y

    // B719: LDD #$BAAC
    cpu.state_.d = 0xBAAC;

    // B71C: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y

    // B71E: LDD #$BA0D
    cpu.state_.d = 0xBA0D;

    // B721: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y

    // B723: LDD #$BB33
    cpu.state_.d = 0xBB33;

    // B726: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y

    // B729: LDD #$BAE6
    cpu.state_.d = 0xBAE6;

    // B72C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y

    // B72F: LDD #$BA5A
    cpu.state_.d = 0xBA5A;

    // B732: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y

    // B735: LEAY $1E,Y
    // TODO: Fix comma operator: LEAY $1E,Y

    // B739: LDA #$00
    cpu.state_.a = 0x00;

    // B73B: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // B73D: JSR $8E1C
    cpu.call_function(0x8E1C);

    // B740: PSHS U,X
    // TODO: Convert PSHS U,X

    // B742: JSR $B76C
    cpu.call_function(0xB76C);

    // B745: PULS X,U
    // TODO: Convert PULS X,U

    // B748: ADCA $C0B9
    // TODO: Convert ADCA $C0B9

    // B74B: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B74D: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B74F: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B751: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B753: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B755: ADCB $B9F9
    // TODO: Convert ADCB $B9F9

    // B758: ADCA $F9BA
    // TODO: Convert ADCA $F9BA

    // B75B: SUBA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B75D: ANDA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B75F: EORA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B761: CMPX [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B763: SUBA $BAB4
    cpu.state_.a -= 0xBAB4;

    // B766: ADDA $1ABB
    cpu.state_.a += 0x1ABB;

    // B769: EXG DP,DP
    // TODO: Convert EXG DP,DP

    // B76B: LBRA $F079
    // TODO: Convert LBRA $F079

    // B76E: JSR $B948
    cpu.call_function(0xB948);

    // B771: LDA #$06
    cpu.state_.a = 0x06;

    // B773: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B775: LDA #$18
    cpu.state_.a = 0x18;

    // B777: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

}

} // namespace StarWars