#include "cpu_6809.h"

namespace StarWars {

void routine_add4_impl(CPU6809& cpu) {
    // Converted from rom_disasm_add4.md
    // Address: 0xADD4

    // ADD4: LDD #$000F
    cpu.m_d = 0x000F;

    // ADD7: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // ADDA: LDA #$67
    cpu.m_a = 0x67;

    // ADDC: JSR $CDBA
    cpu.call_function(0xCDBA);

    // ADDF: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADE2: SUBD #$E000
    cpu.m_d -= 0xE000;

    // ADE5: BGT $0017
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADFE;

    // ADE7: LDA #$00
    cpu.m_a = 0x00;

    // ADE9: STA <$45
    cpu.write_memory(0x45, cpu.m_a);

    // ADEB: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // ADEE: CMPD #$0001
    // TODO: Convert CMPD #$0001

    // ADF2: BLT $008B
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAD7F;

    // ADF4: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // ADF7: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // ADFA: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // ADFD: BPL $002F
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE2E;

    // AE01: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE03: SUBD $5000
    cpu.m_d -= 0x5000;

    // AE06: BGE $008B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAD93;

    // AE08: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // AE0B: BPL $003D
    if (!cpu.negative_flag()) cpu.m_pc = 0xAE4A;

    // AE0F: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AE11: SUBD $5000
    cpu.m_d -= 0x5000;

    // AE14: BGE $008B
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADA1;

    // AE16: LDD $4700
    cpu.m_d = cpu.read_memory16(0x4700);

    // AE19: STD $5000
    cpu.write_memory16(0x5000, cpu.m_d);

    // AE1C: LDA #$86
    cpu.m_a = 0x86;

    // AE1E: JSR $CDBA
    cpu.call_function(0xCDBA);

    // AE21: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // AE24: ADDD #$FF98
    cpu.m_d += 0xFF98;

    // AE27: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AE29: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE2B: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // AE2E: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AE30: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE32: LDD #$63FF
    cpu.m_d = 0x63FF;

    // AE35: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE37: LDA #$06
    cpu.m_a = 0x06;

    // AE39: STA <$01
    cpu.write_memory(0x01, cpu.m_a);

    // AE3B: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // AE3E: DEC <$01
    // TODO: Convert DEC <$01

    // AE40: BEQ $0074
    if (cpu.zero_flag()) cpu.m_pc = 0xAEB6;

    // AE44: BPL $006A
    if (!cpu.negative_flag()) cpu.m_pc = 0xAEB0;

    // AE46: ANDA #$7F
    cpu.m_a &= 0x7F;

    // AE48: LDB <$01
    cpu.m_b = cpu.read_memory(0x01);

    // AE4A: ORB #$70
    cpu.m_b |= 0x70;

    // AE4C: STB ,Y+
    // TODO: Handle indexed addressing: STB ,Y+

    // AE4E: STA ,Y+
    // TODO: Handle indexed addressing: STA ,Y+

    // AE50: LDD #$A016
    cpu.m_d = 0xA016;

    // AE53: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE55: LDD #$7200
    cpu.m_d = 0x7200;

    // AE58: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE5A: LDD #$8040
    cpu.m_d = 0x8040;

    // AE5D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AE60: LDA <$BD
    cpu.m_a = cpu.read_memory(0xBD);

    // AE62: BLE $009A
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xADFE;

    // AE64: DEC <$BD
    // TODO: Convert DEC <$BD

    // AE66: LDA #$00
    cpu.m_a = 0x00;

    // AE68: STA <$B7
    cpu.write_memory(0xB7, cpu.m_a);

    // AE6A: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE6C: BRA $009E
    cpu.m_pc = 0xAE0C;

    // AE6E: LDA #$00
    cpu.m_a = 0x00;

    // AE70: STA <$BD
    cpu.write_memory(0xBD, cpu.m_a);

    // AE72: LDA #$00
    cpu.m_a = 0x00;

    // AE74: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE76: ORCC #$10
    cpu.m_cc |= 0x10;

    // AE78: LDA <$31
    cpu.m_a = cpu.read_memory(0x31);

    // AE7A: BEQ $00B3
    if (cpu.zero_flag()) cpu.m_pc = 0xAE2F;

    // AE7C: INC $4B1B
    // TODO: Convert INC $4B1B

    // AE7F: CLR <$BD
    cpu.write_memory(0xBD, 0);

    // AE81: LDB #$08
    cpu.m_b = 0x08;

    // AE83: STB <$B7
    cpu.write_memory(0xB7, cpu.m_b);

    // AE85: CLR <$31
    cpu.write_memory(0x31, 0);

    // AE87: LDA <$B7
    cpu.m_a = cpu.read_memory(0xB7);

    // AE89: BLE $00CB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAE56;

    // AE8B: DEC <$B7
    // TODO: Convert DEC <$B7

    // AE8D: STA <$BC
    cpu.write_memory(0xBC, cpu.m_a);

    // AE8F: LDD <$74
    cpu.m_d = cpu.read_memory16(0x74);

    // AE91: STD <$B8
    cpu.write_memory16(0xB8, cpu.m_d);

    // AE93: LDD <$6B
    cpu.m_d = cpu.read_memory16(0x6B);

    // AE95: STD <$BA
    cpu.write_memory16(0xBA, cpu.m_d);

    // AE97: LDD <$2D
    cpu.m_d = cpu.read_memory16(0x2D);

    // AE99: STD <$B3
    cpu.write_memory16(0xB3, cpu.m_d);

    // AE9B: LDD <$2F
    cpu.m_d = cpu.read_memory16(0x2F);

    // AE9D: STD <$B5
    cpu.write_memory16(0xB5, cpu.m_d);

    // AE9F: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // AEA1: LDA <$B7
    cpu.m_a = cpu.read_memory(0xB7);

    // AEA3: CMPA #$07
    cpu.compare_a(0x07);

    // AEA5: BNE $00DE
    if (!cpu.zero_flag()) cpu.m_pc = 0xAE85;

    // AEA7: LDA $4B36
    cpu.m_a = cpu.read_memory(0x4B36);

    // AEAA: BNE $00DB
    if (!cpu.zero_flag()) cpu.m_pc = 0xAE87;

    // AEAC: DEC $4B36
    // TODO: Convert DEC $4B36

    // AEAF: JSR $BE16
    cpu.call_function(0xBE16);

    // AEB2: LDA #$FF
    cpu.m_a = 0xFF;

    // AEB4: STA <$C4
    cpu.write_memory(0xC4, cpu.m_a);

    // AEB6: STA <$C8
    cpu.write_memory(0xC8, cpu.m_a);

    // AEB8: STA <$CC
    cpu.write_memory(0xCC, cpu.m_a);

    // AEBA: STA <$D0
    cpu.write_memory(0xD0, cpu.m_a);

    // AEBD: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);

    // AEBF: ORA <$BD
    cpu.m_a |= 0xBD;

    // AEC1: BNE $00F0
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEB3;

    // AEC4: LDA $4B1B
    cpu.m_a = cpu.read_memory(0x4B1B);

    // AEC7: ANDA #$01
    cpu.m_a &= 0x01;

    // AEC9: BEQ $0151
    if (cpu.zero_flag()) cpu.m_pc = 0xAF1C;

    // AECB: LDD #$FF98
    cpu.m_d = 0xFF98;

    // AECE: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AED1: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AED3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AED5: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AED7: SUBD #$0000
    cpu.m_d -= 0x0000;

    // AEDA: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AEDD: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AEDF: LDD #$FE7A
    cpu.m_d = 0xFE7A;

    // AEE2: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AEE5: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AEE7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AEE9: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AEEB: SUBD #$FE7A
    cpu.m_d -= 0xFE7A;

    // AEEE: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AEF1: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AEF3: LDB #$00
    cpu.m_b = 0x00;

    // AEF5: JSR $AF87
    cpu.call_function(0xAF87);

    // AEF8: LDD #$FDFB
    cpu.m_d = 0xFDFB;

    // AEFB: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AEFE: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF00: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF02: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF04: SUBD #$FE63
    cpu.m_d -= 0xFE63;

    // AF07: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF0A: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF0C: LDD #$FE75
    cpu.m_d = 0xFE75;

    // AF0F: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF12: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF14: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF16: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF18: SUBD #$FE75
    cpu.m_d -= 0xFE75;

    // AF1B: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF1E: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF20: LDB #$08
    cpu.m_b = 0x08;

    // AF22: JSR $AF87
    cpu.call_function(0xAF87);

    // AF25: LDA $4B1B
    cpu.m_a = cpu.read_memory(0x4B1B);

    // AF28: ANDA #$01
    cpu.m_a &= 0x01;

    // AF2A: BNE $01B2
    if (!cpu.zero_flag()) cpu.m_pc = 0xAEDE;

    // AF2C: LDD #$FDFB
    cpu.m_d = 0xFDFB;

    // AF2F: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AF32: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF34: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF36: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF38: SUBD #$FE63
    cpu.m_d -= 0xFE63;

    // AF3B: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF3E: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF40: LDD #$018B
    cpu.m_d = 0x018B;

    // AF43: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF46: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF48: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF4A: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF4C: SUBD #$018B
    cpu.m_d -= 0x018B;

    // AF4F: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF52: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF54: LDB #$00
    cpu.m_b = 0x00;

    // AF56: JSR $AF87
    cpu.call_function(0xAF87);

    // AF59: LDD #$FF98
    cpu.m_d = 0xFF98;

    // AF5C: ADDD $4B1E
    cpu.m_d += 0x4B1E;

    // AF5F: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF61: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF63: LDD <$B5
    cpu.m_d = cpu.read_memory16(0xB5);

    // AF65: SUBD #$0000
    cpu.m_d -= 0x0000;

    // AF68: SUBD $4B1E
    cpu.m_d -= 0x4B1E;

    // AF6B: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AF6D: LDD #$0186
    cpu.m_d = 0x0186;

    // AF70: ADDD $4B1C
    cpu.m_d += 0x4B1C;

    // AF73: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AF75: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF77: LDD <$B3
    cpu.m_d = cpu.read_memory16(0xB3);

    // AF79: SUBD #$0186
    cpu.m_d -= 0x0186;

    // AF7C: SUBD $4B1C
    cpu.m_d -= 0x4B1C;

    // AF7F: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AF81: LDB #$08
    cpu.m_b = 0x08;

    // AF83: JSR $AF87
    cpu.call_function(0xAF87);

    // AF87: LDU #$B04F
    cpu.m_u = 0xB04F;

    // AF8A: LEAU B,U
    // TODO: Fix comma operator: LEAU B,U

    // AF8C: LDA <$BD
    cpu.m_a = cpu.read_memory(0xBD);

    // AF8E: BLE $01C6
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAF56;

    // AF90: LDB #$3F
    cpu.m_b = 0x3F;

    // AF93: LDA #$63
    cpu.m_a = 0x63;

    // AF95: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AF97: JMP $AFEF
    cpu.m_pc = 0xAFEF;

    // AF9A: LDX #$4C00
    cpu.m_x = 0x4C00;

    // AF9D: LDD ,U++
    cpu.m_d = cpu.read_memory16(cpu.m_u++);

    // AF9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFA1: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);

    // AFA3: BMI $01D4
    if (cpu.negative_flag()) cpu.m_pc = 0xAF79;

    // AFA5: ADDD #$0001
    cpu.m_d += 0x0001;

    // AFAA: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFAE: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFB0: ADDD <$03
    cpu.m_d += 0x03;

    // AFB2: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // AFB4: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFB6: ANDA #$1F
    cpu.m_a &= 0x1F;

    // AFB8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFBA: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);

    // AFBC: BMI $01ED
    if (cpu.negative_flag()) cpu.m_pc = 0xAFAB;

    // AFBE: ADDD #$0001
    cpu.m_d += 0x0001;

    // AFC3: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // AFC7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // AFC9: ADDD <$01
    cpu.m_d += 0x01;

    // AFCB: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // AFCD: LDD ,Y
    // TODO: Complex indexed addressing: ,Y

    // AFCF: ORA #$E0
    cpu.m_a |= 0xE0;

    // AFD1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // AFD3: LDD <$00
    cpu.m_d = cpu.read_memory16(0x00);

}

} // namespace StarWars