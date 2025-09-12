#include "cpu_6809.h"

namespace StarWars {

void routine_6f6f_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6f6f.md
    // Address: 0x6F6F

    // 6F6F: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6F72: ADDD $5098
    cpu.state_.d += 0x5098;

    // 6F75: BVC $000E
    // TODO: Convert BVC $000E

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $000E
    // TODO: Convert BVC $000E

    // 6F7B: DEC <$A7
    // TODO: Convert DEC <$A7

    // 6F7D: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 6F80: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 6F83: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6F86: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6F89: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // 6F8B: BPL $001F
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6FAC;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $0029
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x6FBD;

    // 6F96: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6F98: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6F9B: STD $508E
    cpu.write_memory(0x508E, cpu.state_.d);

    // 6F9E: ADDD $509A
    cpu.state_.d += 0x509A;

    // 6FA1: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 6FA4: STD $5042
    cpu.write_memory(0x5042, cpu.state_.d);

    // 6FA7: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6FAA: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6FAD: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // 6FAF: BPL $0043
    if (!cpu.negative_flag()) cpu.state_.pc = 0x6FF4;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $004D
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7005;

    // 6FBA: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6FBC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6FBF: STD $5096
    cpu.write_memory(0x5096, cpu.state_.d);

    // 6FC2: ADDD $509C
    cpu.state_.d += 0x509C;

    // 6FC5: CMPD #$1C00
    // TODO: Convert CMPD #$1C00

    // 6FC9: BLE $0061
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x702C;

    // 6FCB: LDD #$1C00
    cpu.state_.d = 0x1C00;

    // 6FCE: BRA $006A
    cpu.state_.pc = 0x703A;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $006A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7040;

    // 6FD6: LDD #$0200
    cpu.state_.d = 0x0200;

    // 6FD9: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 6FDC: STD $5044
    cpu.write_memory(0x5044, cpu.state_.d);

    // 6FE0: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FE3: CMPD #$0380
    // TODO: Convert CMPD #$0380

    // 6FE7: BLE $0080
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F69;

    // 6FE9: SUBD #$0180
    cpu.state_.d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 6FEF: BRA $0091
    cpu.state_.pc = 0x6F82;

    // 6FF1: LDD $509C
    cpu.state_.d = cpu.read_memory_word(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $0091
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x6F8B;

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

    // 701C: BCC $00B4
    if (!cpu.carry_flag()) cpu.state_.pc = 0x6FD2;

    // 701E: LDD #$0BB8
    cpu.state_.d = 0x0BB8;

    // 7021: BRA $00B7
    cpu.state_.pc = 0x6FDA;

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

    // 704F: BPL $00E3
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7034;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $00EC
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7043;

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

    // 7068: BLE $00FE
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7068;

    // 706A: LDD #$01FF
    cpu.state_.d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $0107
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x707A;

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

    // 7089: BPL $011D
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70A8;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $0127
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70B9;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory(0x5096, cpu.state_.d);

    // 70A1: ADDD $509C
    cpu.state_.d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $013E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x70E8;

    // 70AA: LDD #$FEFF
    cpu.state_.d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $0147
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x70FA;

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

    // 70C6: BEQ $015C
    if (cpu.zero_flag()) cpu.state_.pc = 0x7124;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.state_.x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $016B
    if (cpu.zero_flag()) cpu.state_.pc = 0x7142;

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

    // 70F2: BPL $0186
    if (!cpu.negative_flag()) cpu.state_.pc = 0x707A;

    // 70F5: LDB #$80
    cpu.state_.b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $0198
    if (cpu.negative_flag()) cpu.state_.pc = 0x7097;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $0196
    // TODO: Convert BVC $0196

    // 7103: LDA #$7F
    cpu.state_.a = 0x7F;

    // 7105: BRA $019F
    cpu.state_.pc = 0x70A6;

    // 7108: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 710A: BVC $019F
    // TODO: Convert BVC $019F

    // 710C: LDA #$81
    cpu.state_.a = 0x81;

    // 710E: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7111: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7113: BPL $01A7
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70BC;

    // 7116: CMPA #$4E
    cpu.compare_a(0x4E);

    // 7118: BCS $01CB
    if (cpu.carry_flag()) cpu.state_.pc = 0x70E5;

    // 711A: LDD #$3FC2
    cpu.state_.d = 0x3FC2;

    // 711D: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7120: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7122: BPL $01C0
    if (!cpu.negative_flag()) cpu.state_.pc = 0x70E4;

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

    // 713C: BCS $01EF
    if (cpu.carry_flag()) cpu.state_.pc = 0x712D;

    // 713E: LDD #$3FFE
    cpu.state_.d = 0x3FFE;

    // 7141: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // 7144: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7146: BPL $01E4
    if (!cpu.negative_flag()) cpu.state_.pc = 0x712C;

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

    // 7163: BEQ $0212
    if (cpu.zero_flag()) cpu.state_.pc = 0x7177;

    // 7165: JSR $71C4
    cpu.call_function(0x71C4);

    // 7168: LDA $486E
    cpu.state_.a = cpu.read_memory(0x486E);

    // 716B: BPL $0207
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7174;

    // 716D: LDD #$0000
    cpu.state_.d = 0x0000;

}

} // namespace StarWars