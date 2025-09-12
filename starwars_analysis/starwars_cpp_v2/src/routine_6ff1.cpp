#include "cpu_6809.h"

namespace StarWars {

void routine_6ff1_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6ff1.md
    // Address: 0x6FF1

    // 6FF1: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $000F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7009;

    // 6FFA: SUBD #$0100
    cpu.state_.d -= 0x0100;

    // 6FFD: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 7000: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 7003: ADDD $5098
    cpu.state_.d += 0x5098;

    // 7006: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7009: LDD #$0300
    cpu.state_.d = 0x0300;

    // 700C: SUBD $5086
    cpu.state_.d -= 0x5086;

    // 700F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // 7012: ADDD $5086
    cpu.state_.d += 0x5086;

    // 7015: STD $5086
    cpu.write_memory(0x5086, cpu.state_.d);

    // 7018: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 701C: BCC $0032
    if (!cpu.carry_flag()) cpu.state_.pc = 0x7050;

    // 701E: LDD #$0BB8
    cpu.state_.d = 0x0BB8;

    // 7021: BRA $0035
    cpu.state_.pc = 0x7058;

    // 7023: LDD #$F448
    cpu.state_.d = 0xF448;

    // 7026: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // 7029: LDD #$3EEB
    cpu.state_.d = 0x3EEB;

    // 702C: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 702F: JSR $CE24
    cpu.call_function(0xCE24);

    // 7032: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7035: SUBD <$A3
    cpu.state_.d -= 0xA3;

    // 7037: JSR $6E70
    cpu.call_function(0x6E70);

    // 703B: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 703E: ADDD $5098
    cpu.state_.d += 0x5098;

    // 7041: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7044: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 7047: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 704A: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 704D: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 704F: BPL $0061
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70B2;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $006A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x70C1;

    // 7059: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 705B: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 705E: STD $508E
    cpu.write_memory(0x508E, cpu.state_.d);

    // 7061: ADDD $509A
    cpu.state_.d += 0x509A;

    // 7064: CMPD #$01FF
    // TODO: Convert CMPD #$01FF

    // 7068: BLE $007C
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x70E6;

    // 706A: LDD #$01FF
    cpu.state_.d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $0085
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6FF8;

    // 7073: LDD #$FE01
    cpu.state_.d = 0xFE01;

    // 7076: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 7079: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // 707C: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 7087: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // 7089: BPL $009B
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7026;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $00A5
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7037;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory(0x5096, cpu.state_.d);

    // 70A1: ADDD $509C
    cpu.state_.d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $00BC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7066;

    // 70AA: LDD #$FEFF
    cpu.state_.d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $00C5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7078;

    // 70B3: LDD #$F201
    cpu.state_.d = 0xF201;

    // 70B6: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 70B9: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // 70BD: LDX #$4866
    cpu.state_.x = 0x4866;

    // 70C0: JSR $70F0
    cpu.call_function(0x70F0);

    // 70C3: JSR $7111
    cpu.call_function(0x7111);

    // 70C6: BEQ $00DA
    if (cpu.zero_flag()) cpu.state_.pc = 0x70A2;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.state_.x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $00E9
    if (cpu.zero_flag()) cpu.state_.pc = 0x70C0;

    // 70D7: JSR $CE3A
    cpu.call_function(0xCE3A);

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

    // 70F2: BPL $0104
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70F8;

    // 70F5: LDB #$80
    cpu.state_.b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $0116
    if (cpu.negative_flag()) cpu.state_.pc = 0x7115;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $0114
    // TODO: Convert BVC $0114

    // 7103: LDA #$7F
    cpu.state_.a = 0x7F;

    // 7105: BRA $011D
    cpu.state_.pc = 0x7124;

    // 7108: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 710A: BVC $011D
    // TODO: Convert BVC $011D

    // 710C: LDA #$81
    cpu.state_.a = 0x81;

    // 710E: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7111: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7113: BPL $0125
    if (!cpu.negative_flag()) cpu.state_.pc = 0x713A;

    // 7116: CMPA #$4E
    cpu.compare_a(0x4E);

    // 7118: BCS $0149
    if (cpu.carry_flag()) cpu.state_.pc = 0x7163;

    // 711A: LDD #$3FC2
    cpu.state_.d = 0x3FC2;

    // 711D: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7120: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7122: BPL $013E
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7162;

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

    // 713C: BCS $016D
    if (cpu.carry_flag()) cpu.state_.pc = 0x71AB;

    // 713E: LDD #$3FFE
    cpu.state_.d = 0x3FFE;

    // 7141: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7144: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7146: BPL $0162
    if (!cpu.negative_flag()) cpu.state_.pc = 0x71AA;

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

    // 7163: BEQ $0190
    if (cpu.zero_flag()) cpu.state_.pc = 0x70F5;

    // 7165: JSR $71C4
    cpu.call_function(0x71C4);

    // 7168: LDA $486E
    cpu.state_.a = cpu.read_memory(0x486E);

    // 716B: BPL $0185
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70F2;

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

    // 7184: BEQ $01B1
    if (cpu.zero_flag()) cpu.state_.pc = 0x7137;

    // 7186: JSR $71C4
    cpu.call_function(0x71C4);

    // 7189: LDA $4877
    cpu.state_.a = cpu.read_memory(0x4877);

    // 718C: BPL $01A6
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7134;

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

    // 71A5: BEQ $01D2
    if (cpu.zero_flag()) cpu.state_.pc = 0x7179;

    // 71A7: JSR $71C4
    cpu.call_function(0x71C4);

    // 71AA: LDA $4878
    cpu.state_.a = cpu.read_memory(0x4878);

    // 71AD: BPL $01C7
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7176;

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

    // 71C4: BPL $01D6
    if (!cpu.negative_flag()) cpu.state_.pc = 0x719C;

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

    // 71E1: BCS $01F2
    if (cpu.carry_flag()) cpu.state_.pc = 0x71D5;

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

}

} // namespace StarWars