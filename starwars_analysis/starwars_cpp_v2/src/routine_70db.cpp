#include "cpu_6809.h"

namespace StarWars {

void routine_70db_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_70db.md
    // Address: 0x70DB

    // 70DB: ORCC #$10
    cpu.state_.cc |= 0x10;

    // 70DD: LDD <$6B
    cpu.state_.d = cpu.read_memory_word(0x6B);

    // 70DF: STD <$7F
    cpu.write_memory(0x7F, cpu.state_.d);

    // 70E1: LDD <$74
    cpu.state_.d = cpu.read_memory_word(0x74);

    // 70E3: STD <$7D
    cpu.write_memory(0x7D, cpu.state_.d);

    // 70E5: LDD <$2F
    cpu.state_.d = cpu.read_memory_word(0x2F);

    // 70E7: STD <$7B
    cpu.write_memory(0x7B, cpu.state_.d);

    // 70E9: LDD <$2D
    cpu.state_.d = cpu.read_memory_word(0x2D);

    // 70EB: STD <$79
    cpu.write_memory(0x79, cpu.state_.d);

    // 70ED: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 70F0: LDA $7,X
    // TODO: Fix comma operator: LDA $7,X

    // 70F2: BPL $001A
    if (!cpu.negative_flag()) cpu.state_.pc = 0x710E;

    // 70F5: LDB #$80
    cpu.state_.b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $002C
    if (cpu.negative_flag()) cpu.state_.pc = 0x712B;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $002A
    // TODO: Convert BVC $002A

    // 7103: LDA #$7F
    cpu.state_.a = 0x7F;

    // 7105: BRA $0033
    cpu.state_.pc = 0x713A;

    // 7108: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 710A: BVC $0033
    // TODO: Convert BVC $0033

    // 710C: LDA #$81
    cpu.state_.a = 0x81;

    // 710E: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7111: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7113: BPL $003B
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7150;

    // 7116: CMPA #$4E
    cpu.compare_a(0x4E);

    // 7118: BCS $005F
    if (cpu.carry_flag()) cpu.state_.pc = 0x7179;

    // 711A: LDD #$3FC2
    cpu.state_.d = 0x3FC2;

    // 711D: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7120: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7122: BPL $0054
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7178;

    // 7124: ADDA #$4E
    cpu.state_.a += 0x4E;

    // 7126: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7128: LDD #$FA70
    cpu.state_.d = 0xFA70;

    // 712B: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 712F: SUBA #$4E
    cpu.state_.a -= 0x4E;

    // 7131: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7133: LDD #$0590
    cpu.state_.d = 0x0590;

    // 7136: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 713A: CMPA #$0E
    cpu.compare_a(0x0E);

    // 713C: BCS $0083
    if (cpu.carry_flag()) cpu.state_.pc = 0x71C1;

    // 713E: LDD #$3FFE
    cpu.state_.d = 0x3FFE;

    // 7141: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7144: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7146: BPL $0078
    if (!cpu.negative_flag()) cpu.state_.pc = 0x71C0;

    // 7148: ADDA #$0E
    cpu.state_.a += 0x0E;

    // 714A: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 714C: LDD #$FF00
    cpu.state_.d = 0xFF00;

    // 714F: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7153: SUBA #$0E
    cpu.state_.a -= 0x0E;

    // 7155: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7157: LDD #$0100
    cpu.state_.d = 0x0100;

    // 715A: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7160: LDA $486E
    cpu.state_.a = cpu.read_memory(0x486E);

    // 7163: BEQ $00A6
    if (cpu.zero_flag()) cpu.state_.pc = 0x720B;

    // 7165: JSR $71C4
    cpu.call_function(0x71C4);

    // 7168: LDA $486E
    cpu.state_.a = cpu.read_memory(0x486E);

    // 716B: BPL $009B
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7208;

    // 716D: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7170: SUBD $5022
    cpu.state_.d -= 0x5022;

    // 7173: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7177: LDB #$05
    cpu.state_.b = 0x05;

    // 7179: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 717C: LDA #$0E
    cpu.state_.a = 0x0E;

    // 717E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 7181: LDA $4877
    cpu.state_.a = cpu.read_memory(0x4877);

    // 7184: BEQ $00C7
    if (cpu.zero_flag()) cpu.state_.pc = 0x724D;

    // 7186: JSR $71C4
    cpu.call_function(0x71C4);

    // 7189: LDA $4877
    cpu.state_.a = cpu.read_memory(0x4877);

    // 718C: BPL $00BC
    if (!cpu.negative_flag()) cpu.state_.pc = 0x724A;

    // 718E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7191: SUBD $5022
    cpu.state_.d -= 0x5022;

    // 7194: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7198: LDB #$05
    cpu.state_.b = 0x05;

    // 719A: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 719D: LDA #$1C
    cpu.state_.a = 0x1C;

    // 719F: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 71A2: LDA $4878
    cpu.state_.a = cpu.read_memory(0x4878);

    // 71A5: BEQ $00E8
    if (cpu.zero_flag()) cpu.state_.pc = 0x728F;

    // 71A7: JSR $71C4
    cpu.call_function(0x71C4);

    // 71AA: LDA $4878
    cpu.state_.a = cpu.read_memory(0x4878);

    // 71AD: BPL $00DD
    if (!cpu.negative_flag()) cpu.state_.pc = 0x728C;

    // 71AF: LDD #$0000
    cpu.state_.d = 0x0000;

    // 71B2: SUBD $5022
    cpu.state_.d -= 0x5022;

    // 71B5: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 71B9: LDB #$05
    cpu.state_.b = 0x05;

    // 71BB: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 71BE: LDA #$00
    cpu.state_.a = 0x00;

    // 71C0: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 71C4: BPL $00EC
    if (!cpu.negative_flag()) cpu.state_.pc = 0x72B2;

    // 71C7: LDB #$03
    cpu.state_.b = 0x03;

    // 71CA: LDX #$71DA
    cpu.state_.x = 0x71DA;

    // 71CE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // 71D0: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 71D3: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 71D6: ADDD #$4000
    cpu.state_.d += 0x4000;

    // 71D9: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 71DD: NEG <$12
    // TODO: Convert NEG <$12

    // 71DF: NEG <$00
    // TODO: Convert NEG <$00

    // 71E1: BCS $0108
    if (cpu.carry_flag()) cpu.state_.pc = 0x72EB;

    // 71E3: NEG <$37
    // TODO: Convert NEG <$37

    // 71E5: NEG <$00
    // TODO: Convert NEG <$00

    // 71E8: NEG <$00
    // TODO: Convert NEG <$00

    // 71EB: NEG <$00
    // TODO: Convert NEG <$00

    // 71ED: JMP $0,X
    // TODO: Fix comma operator: JMP $0,X

    // 71EF: NEG <$80
    // TODO: Convert NEG <$80

    // 71F1: NEG <$00
    // TODO: Convert NEG <$00

    // 71F3: SBCA <$FF
    // TODO: Convert SBCA <$FF

    // 71F5: NEG <$A5
    // TODO: Convert NEG <$A5

    // 71F7: STU >$00B7
    cpu.write_memory(0x00B7, cpu.state_.u);

    // 71FA: STU >$00C9
    cpu.write_memory(0x00C9, cpu.state_.u);

    // 71FD: STU >$00DB
    cpu.write_memory(0x00DB, cpu.state_.u);

    // 7200: STU >$00EE
    cpu.write_memory(0x00EE, cpu.state_.u);

    // 7203: LDU $0100
    cpu.state_.u = cpu.read_memory_word(0x0100);

    // 7206: LDU $0112
    cpu.state_.u = cpu.read_memory_word(0x0112);

    // 7209: LDU $0124
    cpu.state_.u = cpu.read_memory_word(0x0124);

    // 720C: STD $0137
    cpu.write_memory(0x0137, cpu.state_.d);

    // 720F: STD $0149
    cpu.write_memory(0x0149, cpu.state_.d);

    // 7212: STD $015B
    cpu.write_memory(0x015B, cpu.state_.d);

    // 7215: LDD $016E
    cpu.state_.d = cpu.read_memory_word(0x016E);

    // 7218: LDD $0180
    cpu.state_.d = cpu.read_memory_word(0x0180);

    // 721B: LDD $0192
    cpu.state_.d = cpu.read_memory_word(0x0192);

    // 721E: ADDB $01A4
    cpu.state_.b += 0x01A4;

    // 7221: ADDB $01B7
    cpu.state_.b += 0x01B7;

    // 7224: ORB $01C9
    cpu.state_.b |= 0x01C9;

    // 7227: ORB $01DB
    cpu.state_.b |= 0x01DB;

    // 722A: ADCB $01ED
    // TODO: Convert ADCB $01ED

    // 722D: ADCB $0200
    // TODO: Convert ADCB $0200

    // 7230: EORB $0212
    cpu.state_.b ^= 0x0212;

    // 7233: STB $0224
    cpu.write_memory(0x0224, cpu.state_.b);

    // 7236: STB $0237
    cpu.write_memory(0x0237, cpu.state_.b);

    // 7239: LDB $0249
    cpu.state_.b = cpu.read_memory(0x0249);

    // 723C: LDB $025B
    cpu.state_.b = cpu.read_memory(0x025B);

    // 723F: BITB $026D
    // TODO: Convert BITB $026D

    // 7242: ANDB $0280
    cpu.state_.b &= 0x0280;

    // 7245: ANDB $0292
    cpu.state_.b &= 0x0292;

    // 7248: ADDD $02A4
    cpu.state_.d += 0x02A4;

    // 724B: SBCB $02B6
    // TODO: Convert SBCB $02B6

    // 724E: CMPB $02C9
    cpu.compare_b(cpu.read_memory(0x02C9));

    // 7251: SUBB $02DB
    cpu.state_.b -= 0x02DB;

    // 7254: SUBB $02ED
    cpu.state_.b -= 0x02ED;

    // 7257: STU $2,X
    // TODO: Handle indexed addressing: STU $2,X

    // 7259: STU $EE03
    cpu.write_memory(0xEE03, cpu.state_.u);

    // 725D: STD $3,X
    // TODO: Handle indexed addressing: STD $3,X

    // 725F: BCC $0172
    if (!cpu.carry_flag()) cpu.state_.pc = 0x73D3;

    // 7261: COM <$36
    // TODO: Convert COM <$36

    // 7263: ADDB $3,X
    // TODO: Fix comma operator: ADDB $3,X

    // 7266: ORB $3,X
    // TODO: Fix comma operator: ORB $3,X

    // 7269: ADCB $3,X
    // TODO: Convert ADCB $3,X

    // 726B: TST $037F,S
    // TODO: Convert TST $037F,S

    // 726F: EORB $3,X
    // TODO: Fix comma operator: EORB $3,X

    // 7271: CMPA <$E7
    cpu.compare_a(cpu.read_memory(0xE7));

    // 7273: COM <$A4
    // TODO: Convert COM <$A4

    // 7275: BITB $3,X
    // TODO: Convert BITB $3,X

    // 7277: LDA $E403
    cpu.state_.a = cpu.read_memory(0xE403);

    // 727A: EORB #$E3
    cpu.state_.b ^= 0xE3;

    // 727C: COM <$DA
    // TODO: Convert COM <$DA

    // 727E: SBCB $3,X
    // TODO: Convert SBCB $3,X

    // 7280: STD ,S++
    cpu.write_memory(cpu.state_.s++, cpu.state_.d);

    // 7282: COM <$FF
    // TODO: Convert COM <$FF

    // 7284: SUBB $4,X
    // TODO: Fix comma operator: SUBB $4,X

    // 7286: STU <$04
    cpu.write_memory(0x04, cpu.state_.u);

    // 7289: BLS $018E
    // TODO: Convert BLS $018E

    // 728B: LSR <$36
    // TODO: Convert LSR <$36

    // 728D: STD <$04
    cpu.write_memory(0x04, cpu.state_.d);

    // 7290: ADDB <$04
    cpu.state_.b += 0x04;

    // 7293: ORB <$04
    cpu.state_.b |= 0x04;

    // 7295: INC [$047F,U]
    // TODO: Convert INC [$047F,U]

    // 7299: EORB <$04
    cpu.state_.b ^= 0x04;

    // 729B: CMPA <$D6
    cpu.compare_a(cpu.read_memory(0xD6));

    // 729D: LSR <$A3
    // TODO: Convert LSR <$A3

    // 729F: BITB <$04
    // TODO: Convert BITB <$04

    // 72A1: BITA $D404
    // TODO: Convert BITA $D404

    // 72A4: EORB #$D2
    cpu.state_.b ^= 0xD2;

    // 72A6: LSR <$DA
    // TODO: Convert LSR <$DA

    // 72A8: CMPB <$04
    cpu.compare_b(cpu.read_memory(0x04));

    // 72AA: LDD ,W++
    // TODO: Complex indexed addressing: ,W++

    // 72AC: LSR <$FE
    // TODO: Convert LSR <$FE

    // 72AE: LDU #$0510
    cpu.state_.u = 0x0510;

    // 72B2: LSR <$23
    // TODO: Convert LSR <$23

    // 72B4: ADDB #$05
    cpu.state_.b += 0x05;

    // 72B6: PULS A,DP,U,PC
    // TODO: Convert PULS A,DP,U,PC

    // 72B8: LSR <$47
    // TODO: Convert LSR <$47

    // 72BA: EORB #$05
    cpu.state_.b ^= 0x05;

    // 72BD: XSTB #$05
    // TODO: Convert XSTB #$05

    // 72BF: INC B,U
    // TODO: Convert INC B,U

    // 72C1: LSR <$7E
    // TODO: Convert LSR <$7E

    // 72C3: ANDB #$05
    cpu.state_.b &= 0x05;

    // 72C5: SUBA <$C2
    cpu.state_.a -= 0xC2;

    // 72C7: JSR $6112
    cpu.call_function(0x6112);

    // 72CA: LDA #$10
    cpu.state_.a = 0x10;

    // 72CC: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 72CF: JSR $7160
    cpu.call_function(0x7160);

    // 72D2: JSR $761D
    cpu.call_function(0x761D);

    // 72D5: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 72D8: BNE $0215
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74EF;

    // 72DA: LDD >$0000
    cpu.state_.d = cpu.read_memory_word(0x0000);

}

} // namespace StarWars