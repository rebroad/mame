#include "cpu_6809.h"

namespace StarWars {

void routine_e7d3_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e7d3.md
    // Address: 0xE7D3

    // E7D3: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7D5: BCC $0009
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7E0;

    // E7D7: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7DA: BSR $0017
    // TODO: Convert BSR $0017

    // E7DD: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7E0: LDX #$EDA8
    cpu.m_x = 0xEDA8;

    // E7E5: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E7E7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E7EA: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7ED: LDX #$EA50
    cpu.m_x = 0xEA50;

    // E7F4: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // E7F6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E7F8: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E7FA: BRA $003E
    cpu.m_pc = 0xE83A;

    // E7FC: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E7FF: LDX #$EA50
    cpu.m_x = 0xEA50;

    // E806: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // E808: SUBD $48AF
    cpu.m_d -= 0x48AF;

    // E80B: ANDA #$1F
    cpu.m_a &= 0x1F;

    // E80D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E80F: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // E811: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E813: JSR $E821
    cpu.call_function(0xE821);

    // E816: LDD #$7200
    cpu.m_d = 0x7200;

    // E819: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E81B: LDD #$8040
    cpu.m_d = 0x8040;

    // E81E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E821: LDX #$E894
    cpu.m_x = 0xE894;

    // E824: LDB $48AE
    cpu.m_b = cpu.read_memory(0x48AE);

    // E829: LDX ,X
    // TODO: Complex indexed addressing: ,X

    // E82B: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // E82D: STX $48B1
    cpu.write_memory16(0x48B1, cpu.m_x);

    // E831: CMPB #$82
    cpu.compare_b(0x82);

    // E833: BCS $0069
    if (cpu.carry_flag()) cpu.m_pc = 0xE89E;

    // E835: LDX #$3016
    cpu.m_x = 0x3016;

    // E838: ANDB #$7F
    cpu.m_b &= 0x7F;

    // E83A: BRA $00B5
    cpu.m_pc = 0xE7F1;

    // E83C: CMPB #$74
    cpu.compare_b(0x74);

    // E83E: BNE $0072
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8B2;

    // E840: LDX #$2FDE
    cpu.m_x = 0x2FDE;

    // E843: BRA $00B5
    cpu.m_pc = 0xE7FA;

    // E845: CMPB #$80
    cpu.compare_b(0x80);

    // E847: BNE $007C
    if (!cpu.zero_flag()) cpu.m_pc = 0xE8C5;

    // E849: LDX #$3058
    cpu.m_x = 0x3058;

    // E84D: BRA $00B5
    cpu.m_pc = 0xE804;

    // E84F: CMPB #$60
    cpu.compare_b(0x60);

    // E851: BCS $0085
    if (cpu.carry_flag()) cpu.m_pc = 0xE7D8;

    // E853: LDX #$2FA4
    cpu.m_x = 0x2FA4;

    // E856: BRA $00B5
    cpu.m_pc = 0xE80D;

    // E858: CMPB #$40
    cpu.compare_b(0x40);

    // E85A: BNE $008E
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7EA;

    // E85C: LDX #$2FC2
    cpu.m_x = 0x2FC2;

    // E85F: BRA $00B5
    cpu.m_pc = 0xE816;

    // E861: CMPB #$4E
    cpu.compare_b(0x4E);

    // E863: BNE $0097
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7FC;

    // E865: LDX #$2FFE
    cpu.m_x = 0x2FFE;

    // E868: BRA $00B5
    cpu.m_pc = 0xE81F;

    // E86A: CMPB #$58
    cpu.compare_b(0x58);

    // E86C: BNE $00A0
    if (!cpu.zero_flag()) cpu.m_pc = 0xE80E;

    // E86E: LDX #$2FF6
    cpu.m_x = 0x2FF6;

    // E871: BRA $00B5
    cpu.m_pc = 0xE828;

    // E873: CMPB #$5A
    cpu.compare_b(0x5A);

    // E875: BNE $00A9
    if (!cpu.zero_flag()) cpu.m_pc = 0xE820;

    // E877: LDX #$3000
    cpu.m_x = 0x3000;

    // E87A: BRA $00B5
    cpu.m_pc = 0xE831;

    // E87C: CMPB #$4A
    cpu.compare_b(0x4A);

    // E87E: BNE $00B2
    if (!cpu.zero_flag()) cpu.m_pc = 0xE832;

    // E880: LDX #$300C
    cpu.m_x = 0x300C;

    // E883: BRA $00B5
    cpu.m_pc = 0xE83A;

    // E885: LDX #$2FF4
    cpu.m_x = 0x2FF4;

    // E888: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // E88A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E88C: LDX $48B1
    cpu.m_x = cpu.read_memory16(0x48B1);

    // E88F: TST -$1,X
    // TODO: Convert TST -$1,X

    // E891: BPL $0058
    if (!cpu.negative_flag()) cpu.m_pc = 0xE8EB;

    // E894: ADDB <$3F
    cpu.m_b += 0x3F;

    // E896: ADDB <$48
    cpu.m_b += 0x48;

    // E898: ADDB <$6C
    cpu.m_b += 0x6C;

    // E89A: ADDB <$80
    cpu.m_b += 0x80;

    // E89C: ADDB <$A8
    cpu.m_b += 0xA8;

    // E89E: ADDB <$A8
    cpu.m_b += 0xA8;

    // E8A0: ADDB <$B1
    cpu.m_b += 0xB1;

    // E8A2: ADDB <$BD
    cpu.m_b += 0xBD;

    // E8A4: ADDB <$C6
    cpu.m_b += 0xC6;

    // E8A6: ADDB <$D4
    cpu.m_b += 0xD4;

    // E8A8: ADDB <$E1
    cpu.m_b += 0xE1;

    // E8AA: ADDB <$EF
    cpu.m_b += 0xEF;

    // E8AC: LDD <$04
    cpu.m_d = cpu.read_memory16(0x04);

    // E8AE: LDD <$0B
    cpu.m_d = cpu.read_memory16(0x0B);

    // E8B0: LDD <$11
    cpu.m_d = cpu.read_memory16(0x11);

    // E8B2: LDD <$1C
    cpu.m_d = cpu.read_memory16(0x1C);

    // E8B4: LDD <$3B
    cpu.m_d = cpu.read_memory16(0x3B);

    // E8B6: LDD <$5E
    cpu.m_d = cpu.read_memory16(0x5E);

    // E8B8: LDD <$7D
    cpu.m_d = cpu.read_memory16(0x7D);

    // E8BA: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // E8BC: LDD <$C2
    cpu.m_d = cpu.read_memory16(0xC2);

    // E8BE: LDD <$E3
    cpu.m_d = cpu.read_memory16(0xE3);

    // E8C0: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // E8C2: STD <$12
    cpu.write_memory16(0x12, cpu.m_d);

    // E8C4: STD <$34
    cpu.write_memory16(0x34, cpu.m_d);

    // E8C6: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // E8C8: STD <$74
    cpu.write_memory16(0x74, cpu.m_d);

    // E8CA: STD <$93
    cpu.write_memory16(0x93, cpu.m_d);

    // E8CC: STD <$A6
    cpu.write_memory16(0xA6, cpu.m_d);

    // E8CE: STD <$C9
    cpu.write_memory16(0xC9, cpu.m_d);

    // E8D0: STD <$EA
    cpu.write_memory16(0xEA, cpu.m_d);

    // E8D2: STD <$FC
    cpu.write_memory16(0xFC, cpu.m_d);

    // E8D4: STD <$FD
    cpu.write_memory16(0xFD, cpu.m_d);

    // E8D6: STD <$FE
    cpu.write_memory16(0xFE, cpu.m_d);

    // E8D8: STD <$FF
    cpu.write_memory16(0xFF, cpu.m_d);

    // E8DA: LDU <$00
    cpu.m_u = cpu.read_memory16(0x00);

    // E8DC: LDU <$07
    cpu.m_u = cpu.read_memory16(0x07);

    // E8DE: LDU <$29
    cpu.m_u = cpu.read_memory16(0x29);

    // E8E0: LDU <$4B
    cpu.m_u = cpu.read_memory16(0x4B);

    // E8E2: LDU <$6D
    cpu.m_u = cpu.read_memory16(0x6D);

    // E8E4: LDU <$8F
    cpu.m_u = cpu.read_memory16(0x8F);

    // E8E6: LDU <$B1
    cpu.m_u = cpu.read_memory16(0xB1);

    // E8E8: LDU <$D3
    cpu.m_u = cpu.read_memory16(0xD3);

    // E8EA: LDU <$F5
    cpu.m_u = cpu.read_memory16(0xF5);

    // E8EC: STU <$17
    cpu.write_memory16(0x17, cpu.m_u);

    // E8EE: STU <$2A
    cpu.write_memory16(0x2A, cpu.m_u);

    // E8F0: STU <$4A
    cpu.write_memory16(0x4A, cpu.m_u);

    // E8F2: STU <$53
    cpu.write_memory16(0x53, cpu.m_u);

    // E8F4: STU <$57
    cpu.write_memory16(0x57, cpu.m_u);

    // E8F6: STU <$5D
    cpu.write_memory16(0x5D, cpu.m_u);

    // E8F8: STU <$61
    cpu.write_memory16(0x61, cpu.m_u);

    // E8FA: STU <$67
    cpu.write_memory16(0x67, cpu.m_u);

    // E8FC: STU <$6D
    cpu.write_memory16(0x6D, cpu.m_u);

    // E8FE: STU <$73
    cpu.write_memory16(0x73, cpu.m_u);

    // E900: STU <$73
    cpu.write_memory16(0x73, cpu.m_u);

    // E902: STU <$78
    cpu.write_memory16(0x78, cpu.m_u);

    // E904: STU <$80
    cpu.write_memory16(0x80, cpu.m_u);

    // E906: STU <$87
    cpu.write_memory16(0x87, cpu.m_u);

    // E908: STU <$8E
    cpu.write_memory16(0x8E, cpu.m_u);

    // E90A: STU <$AD
    cpu.write_memory16(0xAD, cpu.m_u);

    // E90C: STU <$C7
    cpu.write_memory16(0xC7, cpu.m_u);

    // E90E: STU <$DC
    cpu.write_memory16(0xDC, cpu.m_u);

    // E910: STU <$EF
    cpu.write_memory16(0xEF, cpu.m_u);

    // E912: STU <$EF
    cpu.write_memory16(0xEF, cpu.m_u);

    // E914: SUBB $A,X
    // TODO: Fix comma operator: SUBB $A,X

    // E916: SUBB -$5,X
    // TODO: Fix comma operator: SUBB -$5,X

    // E918: SUBB $1,Y
    // TODO: Fix comma operator: SUBB $1,Y

    // E91A: SUBB -$7,Y
    // TODO: Fix comma operator: SUBB -$7,Y

    // E91C: SUBB -$9,U
    // TODO: Fix comma operator: SUBB -$9,U

    // E91E: SUBB $9,S
    // TODO: Fix comma operator: SUBB $9,S

    // E920: SUBB -$3,S
    // TODO: Fix comma operator: SUBB -$3,S

    // E922: SUBB [,W]
    // TODO: Complex indexed addressing: [,W]

    // E924: SUBB F,Y
    // TODO: Complex indexed addressing: F,Y

    // E926: SUBB Illegal Postbyte
    // TODO: Unrecognized operand: Illegal Postbyte

    // E928: SUBB D,U
    // TODO: Fix comma operator: SUBB D,U

    // E92A: SUBB ,-S
    // TODO: Complex indexed addressing: ,-S

    // E92C: SUBB [B,S]
    // TODO: Complex indexed addressing: [B,S]

    // E92E: CMPB $4,X
    // TODO: Fix comma operator: CMPB $4,X

    // E930: CMPB -$A,X
    // TODO: Fix comma operator: CMPB -$A,X

    // E932: CMPB $4,Y
    // TODO: Fix comma operator: CMPB $4,Y

    // E934: CMPB -$F,Y
    // TODO: Fix comma operator: CMPB -$F,Y

    // E936: CMPB $5,U
    // TODO: Fix comma operator: CMPB $5,U

    // E938: CMPB $3,S
    // TODO: Fix comma operator: CMPB $3,S

    // E93A: CMPB B,X
    // TODO: Fix comma operator: CMPB B,X

    // E93C: CMPB E,Y
    // TODO: Complex indexed addressing: E,Y

    // E93E: CMPB -$1F,U
    // TODO: Fix comma operator: CMPB -$1F,U

    // E941: EORB ,-S
    // TODO: Complex indexed addressing: ,-S

    // E943: LSR <$E2
    // TODO: Convert LSR <$E2

    // E945: BRA $0156
    cpu.m_pc = 0xE99D;

    // E947: BNE $0158
    if (!cpu.zero_flag()) cpu.m_pc = 0xE9A1;

    // E949: CWAI #$E2
    // TODO: Convert CWAI #$E2

    // E94C: SBCB -$C,U
    // TODO: Convert SBCB -$C,U

    // E94E: SBCB $4,S
    // TODO: Convert SBCB $4,S

    // E950: SBCB -$C,S
    // TODO: Convert SBCB -$C,S

    // E952: SBCB ,X+
    // TODO: Convert SBCB ,X+

    // E954: SBCB -$1D56,X
    // TODO: Convert SBCB -$1D56,X

    // E958: SBCB [D,Y]
    // TODO: Convert SBCB [D,Y]

    // E95A: SBCB [F,U]
    // TODO: Convert SBCB [F,U]

    // E95C: SBCB [-$1D,S]
    // TODO: Convert SBCB [-$1D,S]

    // E95F: TST <$E3
    // TODO: Convert TST <$E3

    // E962: ADDD $8,Y
    // TODO: Fix comma operator: ADDD $8,Y

    // E964: ADDD -$9,Y
    // TODO: Fix comma operator: ADDD -$9,Y

    // E966: ADDD $7,U
    // TODO: Fix comma operator: ADDD $7,U

    // E968: ADDD -$E,U
    // TODO: Fix comma operator: ADDD -$E,U

    // E96A: ADDD $1,S
    // TODO: Fix comma operator: ADDD $1,S

    // E96C: ADDD -$10,S
    // TODO: Fix comma operator: ADDD -$10,S

    // E96E: ADDD -$4,S
    // TODO: Fix comma operator: ADDD -$4,S

    // E970: ADDD $0183,PCR
    // TODO: Fix comma operator: ADDD $0183,PCR

    // E973: JSR <$E3
    cpu.call_function(0xE3);

    // E975: LDX ,--S
    // TODO: Complex indexed addressing: ,--S

    // E977: ADDA $E3C6
    cpu.m_a += 0xE3C6;

    // E97A: ADDD [$018D,PCR]
    // TODO: Complex indexed addressing: [$018D,PCR]

    // E97D: LDD $E405
    cpu.m_d = cpu.read_memory16(0xE405);

    // E980: ANDB $E,X
    // TODO: Fix comma operator: ANDB $E,X

    // E982: ANDB -$A,X
    // TODO: Fix comma operator: ANDB -$A,X

    // E984: ANDB -$2,X
    // TODO: Fix comma operator: ANDB -$2,X

    // E986: ANDB -$1,X
    // TODO: Fix comma operator: ANDB -$1,X

    // E988: ANDB $0,Y
    // TODO: Fix comma operator: ANDB $0,Y

    // E98A: ANDB $1,Y
    // TODO: Fix comma operator: ANDB $1,Y

    // E98C: ANDB $2,Y
    // TODO: Fix comma operator: ANDB $2,Y

    // E98E: ANDB $3,Y
    // TODO: Fix comma operator: ANDB $3,Y

    // E990: ANDB $4,Y
    // TODO: Fix comma operator: ANDB $4,Y

    // E992: ANDB $8,Y
    // TODO: Fix comma operator: ANDB $8,Y

    // E994: ANDB -$F,Y
    // TODO: Fix comma operator: ANDB -$F,Y

    // E996: ANDB -$6,Y
    // TODO: Fix comma operator: ANDB -$6,Y

    // E998: ANDB $3,U
    // TODO: Fix comma operator: ANDB $3,U

    // E99A: ANDB $C,U
    // TODO: Fix comma operator: ANDB $C,U

    // E99C: ANDB -$B,U
    // TODO: Fix comma operator: ANDB -$B,U

    // E99E: ANDB -$B,U
    // TODO: Fix comma operator: ANDB -$B,U

    // E9A0: ANDB -$7,U
    // TODO: Fix comma operator: ANDB -$7,U

    // E9A2: ANDB -$6,U
    // TODO: Fix comma operator: ANDB -$6,U

    // E9A4: ANDB -$5,U
    // TODO: Fix comma operator: ANDB -$5,U

    // E9A6: ANDB -$4,U
    // TODO: Fix comma operator: ANDB -$4,U

    // E9A8: ANDB -$3,U
    // TODO: Fix comma operator: ANDB -$3,U

    // E9AA: ANDB $1,S
    // TODO: Fix comma operator: ANDB $1,S

    // E9AC: ANDB $9,S
    // TODO: Fix comma operator: ANDB $9,S

    // E9AE: ANDB $D,S
    // TODO: Fix comma operator: ANDB $D,S

    // E9B0: ANDB -$C,S
    // TODO: Fix comma operator: ANDB -$C,S

    // E9B2: ANDB -$B,S
    // TODO: Fix comma operator: ANDB -$B,S

    // E9B4: ANDB -$A,S
    // TODO: Fix comma operator: ANDB -$A,S

    // E9B6: ANDB -$9,S
    // TODO: Fix comma operator: ANDB -$9,S

    // E9B8: ANDB -$8,S
    // TODO: Fix comma operator: ANDB -$8,S

    // E9BA: ANDB -$5,S
    // TODO: Fix comma operator: ANDB -$5,S

    // E9BC: ANDB -$3,S
    // TODO: Fix comma operator: ANDB -$3,S

    // E9BE: ANDB -$1,S
    // TODO: Fix comma operator: ANDB -$1,S

    // E9C0: ANDB ,-X
    // TODO: Complex indexed addressing: ,-X

    // E9C2: ANDB ,X
    // TODO: Complex indexed addressing: ,X

    // E9C4: ANDB E,X
    // TODO: Complex indexed addressing: E,X

    // E9C6: ANDB -$1B74,X
    // TODO: Fix comma operator: ANDB -$1B74,X

    // E9CA: ANDB W,X
    // TODO: Complex indexed addressing: W,X

    // E9CC: ANDB [,X++]
    // TODO: Complex indexed addressing: [,X++]

    // E9CE: ANDB [F,X]
    // TODO: Complex indexed addressing: [F,X]

    // E9D0: ANDB ,-Y
    // TODO: Complex indexed addressing: ,-Y

    // E9D2: ANDB $0,X
    // TODO: Fix comma operator: ANDB $0,X

}

} // namespace StarWars