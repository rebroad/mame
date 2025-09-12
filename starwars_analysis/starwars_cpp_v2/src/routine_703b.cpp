#include "cpu_6809.h"

namespace StarWars {

void routine_703b_impl(CPU6809& cpu) {
    // Converted from rom_disasm_703b.md
    // Address: 0x703B

    // 703B: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 703E: ADDD $5098
    cpu.m_d += 0x5098;

    // 7041: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7044: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 7047: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 704A: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 704D: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 704F: BPL $7052
    if (!cpu.negative_flag()) cpu.m_pc = 0x7052;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $705B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x705B;

    // 7059: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 705B: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 705E: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 7061: ADDD $509A
    cpu.m_d += 0x509A;

    // 7064: CMPD #$01FF
    // TODO: Convert CMPD #$01FF

    // 7068: BLE $706D
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x706D;

    // 706A: LDD #$01FF
    cpu.m_d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $7076
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7076;

    // 7073: LDD #$FE01
    cpu.m_d = 0xFE01;

    // 7076: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 7079: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 707C: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7087: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 7089: BPL $708C
    if (!cpu.negative_flag()) cpu.m_pc = 0x708C;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $7096
    if (!cpu.negative_flag()) cpu.m_pc = 0x7096;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 70A1: ADDD $509C
    cpu.m_d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $70AD
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x70AD;

    // 70AA: LDD #$FEFF
    cpu.m_d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $70B6
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x70B6;

    // 70B3: LDD #$F201
    cpu.m_d = 0xF201;

    // 70B6: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 70B9: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 70BD: LDX #$4866
    cpu.m_x = 0x4866;

    // 70C0: JSR $70F0
    cpu.call_function(0x70F0);

    // 70C3: JSR $7111
    cpu.call_function(0x7111);

    // 70C6: BEQ $70CB
    if (cpu.zero_flag()) cpu.m_pc = 0x70CB;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.m_x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $70DA
    if (cpu.zero_flag()) cpu.m_pc = 0x70DA;

    // 70D7: JSR $CE3A
    cpu.call_function(0xCE3A);

    // 70DB: ORCC #$10
    cpu.m_cc |= 0x10;

    // 70DD: LDD <$6B
    cpu.m_d = cpu.read_memory16(0x6B);

    // 70DF: STD <$7F
    cpu.write_memory16(0x7F, cpu.m_d);

    // 70E1: LDD <$74
    cpu.m_d = cpu.read_memory16(0x74);

    // 70E3: STD <$7D
    cpu.write_memory16(0x7D, cpu.m_d);

    // 70E5: LDD <$2F
    cpu.m_d = cpu.read_memory16(0x2F);

    // 70E7: STD <$7B
    cpu.write_memory16(0x7B, cpu.m_d);

    // 70E9: LDD <$2D
    cpu.m_d = cpu.read_memory16(0x2D);

    // 70EB: STD <$79
    cpu.write_memory16(0x79, cpu.m_d);

    // 70ED: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 70F0: LDA $7,X
    // TODO: Fix comma operator: LDA $7,X

    // 70F2: BPL $70F5
    if (!cpu.negative_flag()) cpu.m_pc = 0x70F5;

    // 70F5: LDB #$80
    cpu.m_b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $7107
    if (cpu.negative_flag()) cpu.m_pc = 0x7107;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $7105
    // TODO: Convert BVC $7105

    // 7103: LDA #$7F
    cpu.m_a = 0x7F;

    // 7105: BRA $710E
    cpu.m_pc = 0x710E;

    // 7108: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 710A: BVC $710E
    // TODO: Convert BVC $710E

    // 710C: LDA #$81
    cpu.m_a = 0x81;

    // 710E: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7111: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7113: BPL $7116
    if (!cpu.negative_flag()) cpu.m_pc = 0x7116;

    // 7116: CMPA #$4E
    cpu.compare_a(0x4E);

    // 7118: BCS $713A
    if (cpu.carry_flag()) cpu.m_pc = 0x713A;

    // 711A: LDD #$3FC2
    cpu.m_d = 0x3FC2;

    // 711D: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 7120: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7122: BPL $712F
    if (!cpu.negative_flag()) cpu.m_pc = 0x712F;

    // 7124: ADDA #$4E
    cpu.m_a += 0x4E;

    // 7126: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7128: LDD #$FA70
    cpu.m_d = 0xFA70;

    // 712B: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 712F: SUBA #$4E
    cpu.m_a -= 0x4E;

    // 7131: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7133: LDD #$0590
    cpu.m_d = 0x0590;

    // 7136: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 713A: CMPA #$0E
    cpu.compare_a(0x0E);

    // 713C: BCS $715E
    if (cpu.carry_flag()) cpu.m_pc = 0x715E;

    // 713E: LDD #$3FFE
    cpu.m_d = 0x3FFE;

    // 7141: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 7144: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7146: BPL $7153
    if (!cpu.negative_flag()) cpu.m_pc = 0x7153;

    // 7148: ADDA #$0E
    cpu.m_a += 0x0E;

    // 714A: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 714C: LDD #$FF00
    cpu.m_d = 0xFF00;

    // 714F: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7153: SUBA #$0E
    cpu.m_a -= 0x0E;

    // 7155: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7157: LDD #$0100
    cpu.m_d = 0x0100;

    // 715A: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7160: LDA $486E
    cpu.m_a = cpu.read_memory(0x486E);

    // 7163: BEQ $7181
    if (cpu.zero_flag()) cpu.m_pc = 0x7181;

    // 7165: JSR $71C4
    cpu.call_function(0x71C4);

    // 7168: LDA $486E
    cpu.m_a = cpu.read_memory(0x486E);

    // 716B: BPL $7176
    if (!cpu.negative_flag()) cpu.m_pc = 0x7176;

    // 716D: LDD #$0000
    cpu.m_d = 0x0000;

    // 7170: SUBD $5022
    cpu.m_d -= 0x5022;

    // 7173: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7177: LDB #$05
    cpu.m_b = 0x05;

    // 7179: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 717C: LDA #$0E
    cpu.m_a = 0x0E;

    // 717E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 7181: LDA $4877
    cpu.m_a = cpu.read_memory(0x4877);

    // 7184: BEQ $71A2
    if (cpu.zero_flag()) cpu.m_pc = 0x71A2;

    // 7186: JSR $71C4
    cpu.call_function(0x71C4);

    // 7189: LDA $4877
    cpu.m_a = cpu.read_memory(0x4877);

    // 718C: BPL $7197
    if (!cpu.negative_flag()) cpu.m_pc = 0x7197;

    // 718E: LDD #$0000
    cpu.m_d = 0x0000;

    // 7191: SUBD $5022
    cpu.m_d -= 0x5022;

    // 7194: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7198: LDB #$05
    cpu.m_b = 0x05;

    // 719A: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 719D: LDA #$1C
    cpu.m_a = 0x1C;

    // 719F: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 71A2: LDA $4878
    cpu.m_a = cpu.read_memory(0x4878);

    // 71A5: BEQ $71C3
    if (cpu.zero_flag()) cpu.m_pc = 0x71C3;

    // 71A7: JSR $71C4
    cpu.call_function(0x71C4);

    // 71AA: LDA $4878
    cpu.m_a = cpu.read_memory(0x4878);

    // 71AD: BPL $71B8
    if (!cpu.negative_flag()) cpu.m_pc = 0x71B8;

    // 71AF: LDD #$0000
    cpu.m_d = 0x0000;

    // 71B2: SUBD $5022
    cpu.m_d -= 0x5022;

    // 71B5: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 71B9: LDB #$05
    cpu.m_b = 0x05;

    // 71BB: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 71BE: LDA #$00
    cpu.m_a = 0x00;

    // 71C0: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 71C4: BPL $71C7
    if (!cpu.negative_flag()) cpu.m_pc = 0x71C7;

    // 71C7: LDB #$03
    cpu.m_b = 0x03;

    // 71CA: LDX #$71DA
    cpu.m_x = 0x71DA;

    // 71CE: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // 71D0: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 71D3: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 71D6: ADDD #$4000
    cpu.m_d += 0x4000;

    // 71D9: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 71DD: NEG <$12
    // TODO: Convert NEG <$12

    // 71DF: NEG <$00
    // TODO: Convert NEG <$00

    // 71E1: BCS $71E3
    if (cpu.carry_flag()) cpu.m_pc = 0x71E3;

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
    cpu.write_memory16(0x00B7, cpu.m_u);

    // 71FA: STU >$00C9
    cpu.write_memory16(0x00C9, cpu.m_u);

    // 71FD: STU >$00DB
    cpu.write_memory16(0x00DB, cpu.m_u);

    // 7200: STU >$00EE
    cpu.write_memory16(0x00EE, cpu.m_u);

    // 7203: LDU $0100
    cpu.m_u = cpu.read_memory16(0x0100);

    // 7206: LDU $0112
    cpu.m_u = cpu.read_memory16(0x0112);

    // 7209: LDU $0124
    cpu.m_u = cpu.read_memory16(0x0124);

    // 720C: STD $0137
    cpu.write_memory16(0x0137, cpu.m_d);

    // 720F: STD $0149
    cpu.write_memory16(0x0149, cpu.m_d);

    // 7212: STD $015B
    cpu.write_memory16(0x015B, cpu.m_d);

    // 7215: LDD $016E
    cpu.m_d = cpu.read_memory16(0x016E);

    // 7218: LDD $0180
    cpu.m_d = cpu.read_memory16(0x0180);

    // 721B: LDD $0192
    cpu.m_d = cpu.read_memory16(0x0192);

    // 721E: ADDB $01A4
    cpu.m_b += 0x01A4;

    // 7221: ADDB $01B7
    cpu.m_b += 0x01B7;

    // 7224: ORB $01C9
    cpu.m_b |= 0x01C9;

    // 7227: ORB $01DB
    cpu.m_b |= 0x01DB;

    // 722A: ADCB $01ED
    // TODO: Convert ADCB $01ED

    // 722D: ADCB $0200
    // TODO: Convert ADCB $0200

    // 7230: EORB $0212
    cpu.m_b ^= 0x0212;

    // 7233: STB $0224
    cpu.write_memory(0x0224, cpu.m_b);

    // 7236: STB $0237
    cpu.write_memory(0x0237, cpu.m_b);

    // 7239: LDB $0200
    cpu.m_b = cpu.read_memory(0x0200);

}

} // namespace StarWars