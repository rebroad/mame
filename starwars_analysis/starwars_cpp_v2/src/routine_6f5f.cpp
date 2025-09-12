#include "cpu_6809.h"

namespace StarWars {

void routine_6f5f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6f5f.md
    // Address: 0x6F5F

    // 6F5F: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F61: JSR $CDAB
    cpu.call_function(0xCDAB);

    // 6F64: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F67: LDD <$42
    cpu.m_d = cpu.read_memory16(0x42);

    // 6F69: JSR $CDA9
    cpu.call_function(0xCDA9);

    // 6F6C: STD <$89
    cpu.write_memory16(0x89, cpu.m_d);

    // 6F6F: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F72: ADDD $5098
    cpu.m_d += 0x5098;

    // 6F75: BVC $001E
    // TODO: Convert BVC $001E

    // 6F77: INC <$A7
    // TODO: Convert INC <$A7

    // 6F79: BVC $001E
    // TODO: Convert BVC $001E

    // 6F7B: DEC <$A7
    // TODO: Convert DEC <$A7

    // 6F7D: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 6F80: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 6F83: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6F86: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6F89: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // 6F8B: BPL $002F
    if (!cpu.negative_flag()) cpu.m_pc = 0x6FBC;

    // 6F90: TST <$7D
    // TODO: Convert TST <$7D

    // 6F92: BGE $0039
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x6FCD;

    // 6F96: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6F98: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6F9B: STD $508E
    cpu.write_memory16(0x508E, cpu.m_d);

    // 6F9E: ADDD $509A
    cpu.m_d += 0x509A;

    // 6FA1: STD $509A
    cpu.write_memory16(0x509A, cpu.m_d);

    // 6FA4: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);

    // 6FA7: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 6FAA: JSR $CDB1
    cpu.call_function(0xCDB1);

    // 6FAD: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // 6FAF: BPL $0053
    if (!cpu.negative_flag()) cpu.m_pc = 0x7004;

    // 6FB4: TST <$7F
    // TODO: Convert TST <$7F

    // 6FB6: BPL $005D
    if (!cpu.negative_flag()) cpu.m_pc = 0x7015;

    // 6FBA: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6FBC: JSR $CDA0
    cpu.call_function(0xCDA0);

    // 6FBF: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 6FC2: ADDD $509C
    cpu.m_d += 0x509C;

    // 6FC5: CMPD #$1C00
    // TODO: Convert CMPD #$1C00

    // 6FC9: BLE $0071
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x703C;

    // 6FCB: LDD #$1C00
    cpu.m_d = 0x1C00;

    // 6FCE: BRA $007A
    cpu.m_pc = 0x704A;

    // 6FD0: CMPD #$0200
    // TODO: Convert CMPD #$0200

    // 6FD4: BGE $007A
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7050;

    // 6FD6: LDD #$0200
    cpu.m_d = 0x0200;

    // 6FD9: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FDC: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);

    // 6FE0: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FE3: CMPD #$0380
    // TODO: Convert CMPD #$0380

    // 6FE7: BLE $0090
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6F79;

    // 6FE9: SUBD #$0180
    cpu.m_d -= 0x0180;

    // 6FEC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 6FEF: BRA $00A1
    cpu.m_pc = 0x6F92;

    // 6FF1: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);

    // 6FF4: CMPD #$F300
    // TODO: Convert CMPD #$F300

    // 6FF8: BLE $00A1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6F9B;

    // 6FFA: SUBD #$0100
    cpu.m_d -= 0x0100;

    // 6FFD: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 7000: LDD $5086
    cpu.m_d = cpu.read_memory16(0x5086);

    // 7003: ADDD $5098
    cpu.m_d += 0x5098;

    // 7006: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 7009: LDD #$0300
    cpu.m_d = 0x0300;

    // 700C: SUBD $5086
    cpu.m_d -= 0x5086;

    // 700F: JSR $CDA2
    cpu.call_function(0xCDA2);

    // 7012: ADDD $5086
    cpu.m_d += 0x5086;

    // 7015: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

    // 7018: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 701C: BCC $00C4
    if (!cpu.carry_flag()) cpu.m_pc = 0x6FE2;

    // 701E: LDD #$0BB8
    cpu.m_d = 0x0BB8;

    // 7021: BRA $00C7
    cpu.m_pc = 0x6FEA;

    // 7023: LDD #$F448
    cpu.m_d = 0xF448;

    // 7026: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 7029: LDD #$3EEB
    cpu.m_d = 0x3EEB;

    // 702C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 702F: JSR $CE24
    cpu.call_function(0xCE24);

    // 7032: LDD #$0000
    cpu.m_d = 0x0000;

    // 7035: SUBD <$A3
    cpu.m_d -= 0xA3;

    // 7037: JSR $6E70
    cpu.call_function(0x6E70);

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

    // 704F: BPL $00F3
    if (!cpu.negative_flag()) cpu.m_pc = 0x7044;

    // 7053: TST <$7D
    // TODO: Convert TST <$7D

    // 7055: BGE $00FC
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7053;

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

    // 7068: BLE $010E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7078;

    // 706A: LDD #$01FF
    cpu.m_d = 0x01FF;

    // 706D: CMPD #$FE01
    // TODO: Convert CMPD #$FE01

    // 7071: BGE $0117
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x708A;

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

    // 7089: BPL $012D
    if (!cpu.negative_flag()) cpu.m_pc = 0x70B8;

    // 708E: TST <$7F
    // TODO: Convert TST <$7F

    // 7090: BPL $0137
    if (!cpu.negative_flag()) cpu.m_pc = 0x70C9;

    // 7094: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 709E: STD $5096
    cpu.write_memory16(0x5096, cpu.m_d);

    // 70A1: ADDD $509C
    cpu.m_d += 0x509C;

    // 70A4: CMPD #$FEFF
    // TODO: Convert CMPD #$FEFF

    // 70A8: BLE $014E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x70F8;

    // 70AA: LDD #$FEFF
    cpu.m_d = 0xFEFF;

    // 70AD: CMPD #$F201
    // TODO: Convert CMPD #$F201

    // 70B1: BGE $0157
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x710A;

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

    // 70C6: BEQ $016C
    if (cpu.zero_flag()) cpu.m_pc = 0x7134;

    // 70C8: JSR $CE2F
    cpu.call_function(0xCE2F);

    // 70CC: LDX #$486F
    cpu.m_x = 0x486F;

    // 70CF: JSR $70F0
    cpu.call_function(0x70F0);

    // 70D2: JSR $7111
    cpu.call_function(0x7111);

    // 70D5: BEQ $017B
    if (cpu.zero_flag()) cpu.m_pc = 0x7152;

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

    // 70F2: BPL $0196
    if (!cpu.negative_flag()) cpu.m_pc = 0x708A;

    // 70F5: LDB #$80
    cpu.m_b = 0x80;

    // 70FB: LDB $7,X
    // TODO: Fix comma operator: LDB $7,X

    // 70FD: BMI $01A8
    if (cpu.negative_flag()) cpu.m_pc = 0x70A7;

    // 70FF: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 7101: BVC $01A6
    // TODO: Convert BVC $01A6

    // 7103: LDA #$7F
    cpu.m_a = 0x7F;

    // 7105: BRA $01AF
    cpu.m_pc = 0x70B6;

    // 7108: ADDA $8,X
    // TODO: Fix comma operator: ADDA $8,X

    // 710A: BVC $01AF
    // TODO: Convert BVC $01AF

    // 710C: LDA #$81
    cpu.m_a = 0x81;

    // 710E: STA $8,X
    // TODO: Handle indexed addressing: STA $8,X

    // 7111: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7113: BPL $01B7
    if (!cpu.negative_flag()) cpu.m_pc = 0x70CC;

    // 7116: CMPA #$4E
    cpu.compare_a(0x4E);

    // 7118: BCS $01DB
    if (cpu.carry_flag()) cpu.m_pc = 0x70F5;

    // 711A: LDD #$3FC2
    cpu.m_d = 0x3FC2;

    // 711D: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 7120: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7122: BPL $01D0
    if (!cpu.negative_flag()) cpu.m_pc = 0x70F4;

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

    // 713C: BCS $01FF
    if (cpu.carry_flag()) cpu.m_pc = 0x713D;

    // 713E: LDD #$3FFE
    cpu.m_d = 0x3FFE;

    // 7141: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 7144: LDA $8,X
    // TODO: Fix comma operator: LDA $8,X

    // 7146: BPL $01F4
    if (!cpu.negative_flag()) cpu.m_pc = 0x713C;

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

}

} // namespace StarWars