#include "cpu_6809.h"

namespace StarWars {

void routine_e82b_ef7f_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e82b_ef7f.md
    // Address: 0xE82B_EF7F

    label_E82B:
    // E82B: LDB ,X+
    // TODO: Complex indexed addressing: ,X+

    // E82D: STX $48B1
    cpu.write_memory16(0x48B1, cpu.m_x);

    // E831: CMPB #$82
    cpu.compare_b(0x82);

    // E833: BCS $E83C
    if (cpu.carry_flag()) cpu.m_pc = 0xE83C;

    // E835: LDX #$3016
    cpu.m_x = 0x3016;

    // E838: ANDB #$7F
    cpu.m_b &= 0x7F;

    // E83A: BRA $E888
    goto label_E888;

    // E83C: CMPB #$74
    cpu.compare_b(0x74);

    // E83E: BNE $E845
    if (!cpu.zero_flag()) cpu.m_pc = 0xE845;

    // E840: LDX #$2FDE
    cpu.m_x = 0x2FDE;

    // E843: BRA $E888
    goto label_E888;

    // E845: CMPB #$80
    cpu.compare_b(0x80);

    // E847: BNE $E84F
    if (!cpu.zero_flag()) cpu.m_pc = 0xE84F;

    // E849: LDX #$3058
    cpu.m_x = 0x3058;

    // E84D: BRA $E888
    goto label_E888;

    // E84F: CMPB #$60
    cpu.compare_b(0x60);

    // E851: BCS $E858
    if (cpu.carry_flag()) cpu.m_pc = 0xE858;

    // E853: LDX #$2FA4
    cpu.m_x = 0x2FA4;

    // E856: BRA $E888
    goto label_E888;

    // E858: CMPB #$40
    cpu.compare_b(0x40);

    // E85A: BNE $E861
    if (!cpu.zero_flag()) cpu.m_pc = 0xE861;

    // E85C: LDX #$2FC2
    cpu.m_x = 0x2FC2;

    // E85F: BRA $E888
    goto label_E888;

    // E861: CMPB #$4E
    cpu.compare_b(0x4E);

    // E863: BNE $E86A
    if (!cpu.zero_flag()) cpu.m_pc = 0xE86A;

    // E865: LDX #$2FFE
    cpu.m_x = 0x2FFE;

    // E868: BRA $E888
    goto label_E888;

    // E86A: CMPB #$58
    cpu.compare_b(0x58);

    // E86C: BNE $E873
    if (!cpu.zero_flag()) cpu.m_pc = 0xE873;

    // E86E: LDX #$2FF6
    cpu.m_x = 0x2FF6;

    // E871: BRA $E888
    goto label_E888;

    // E873: CMPB #$5A
    cpu.compare_b(0x5A);

    // E875: BNE $E87C
    if (!cpu.zero_flag()) cpu.m_pc = 0xE87C;

    // E877: LDX #$3000
    cpu.m_x = 0x3000;

    // E87A: BRA $E888
    goto label_E888;

    // E87C: CMPB #$4A
    cpu.compare_b(0x4A);

    // E87E: BNE $E885
    if (!cpu.zero_flag()) cpu.m_pc = 0xE885;

    // E880: LDX #$300C
    cpu.m_x = 0x300C;

    // E883: BRA $E888
    goto label_E888;

    // E885: LDX #$2FF4
    cpu.m_x = 0x2FF4;

    label_E888:
    // E888: LDD B,X
    // TODO: Fix comma operator: LDD B,X

    // E88A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // E88C: LDX $48B1
    cpu.m_x = cpu.read_memory16(0x48B1);

    // E88F: TST -$1,X
    // TODO: Convert TST -$1,X

    // E891: BPL $E82B
    if (!cpu.negative_flag()) cpu.m_pc = 0xE82B;

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

    // E945: BRA $E929
    goto label_E929;

    // E947: BNE $E92B
    if (!cpu.zero_flag()) cpu.m_pc = 0xE92B;

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

    // E970: ADDD $E956,PCR
    // TODO: Fix comma operator: ADDD $E956,PCR

    // E973: JSR <$E3
    cpu.call_function(0xE3);

    // E975: LDX ,--S
    // TODO: Complex indexed addressing: ,--S

    // E977: ADDA $E3C6
    cpu.m_a += 0xE3C6;

    // E97A: ADDD [$E960,PCR]
    // TODO: Complex indexed addressing: [$E960,PCR]

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

    // E9D2: ANDB $CE8C,PCR
    // TODO: Fix comma operator: ANDB $CE8C,PCR

    // E9D6: ANDB ,U+
    // TODO: Complex indexed addressing: ,U+

    // E9D8: ANDB E,U
    // TODO: Complex indexed addressing: E,U

    // E9DA: ANDB [,W++]
    // TODO: Complex indexed addressing: [,W++]

    // E9DC: ANDB [,U]
    // TODO: Complex indexed addressing: [,U]

    // E9DE: ANDB [$E9C5,PCR]
    // TODO: Complex indexed addressing: [$E9C5,PCR]

    // E9E1: BITB ,S
    // TODO: Convert BITB ,S

    // E9E3: STU ,S
    // TODO: Handle indexed addressing: STU ,S

    // E9E5: STU ,S
    // TODO: Handle indexed addressing: STU ,S

    // E9E7: SUBB $E4FA
    cpu.m_b -= 0xE4FA;

    // E9EA: BITB $5,X
    // TODO: Convert BITB $5,X

    // E9EC: BITB $C,X
    // TODO: Convert BITB $C,X

    // E9EE: BITB $C,X
    // TODO: Convert BITB $C,X

    // E9F0: BITB $C,X
    // TODO: Convert BITB $C,X

    // E9F2: BITB $D,X
    // TODO: Convert BITB $D,X

    // E9F4: BITB -$B,X
    // TODO: Convert BITB -$B,X

    // E9F6: BITB $4,Y
    // TODO: Convert BITB $4,Y

    // E9F8: BITB -$A,Y
    // TODO: Convert BITB -$A,Y

    // E9FA: BITB $8,U
    // TODO: Convert BITB $8,U

    // E9FC: BITB -$A,U
    // TODO: Convert BITB -$A,U

    // E9FE: BITB $4,S
    // TODO: Convert BITB $4,S

    // EA00: BITB -$F,S
    // TODO: Convert BITB -$F,S

    // EA02: BITB -$2,S
    // TODO: Convert BITB -$2,S

    // EA04: BITB D,X
    // TODO: Convert BITB D,X

    // EA06: BITB [-$1B,X]
    // TODO: Convert BITB [-$1B,X]

    // EA09: BITA B,S
    // TODO: Convert BITA B,S

    // EA0B: SBCA $E5C8
    // TODO: Convert SBCA $E5C8

    // EA0E: BITB [F,U]
    // TODO: Convert BITB [F,U]

    // EA10: BITB $D014,PCR
    // TODO: Convert BITB $D014,PCR

    // EA14: LDB -$D,X
    // TODO: Fix comma operator: LDB -$D,X

    // EA16: LDB $5,Y
    // TODO: Fix comma operator: LDB $5,Y

    // EA18: LDB -$F,Y
    // TODO: Fix comma operator: LDB -$F,Y

    // EA1A: LDB -$2,Y
    // TODO: Fix comma operator: LDB -$2,Y

    // EA1C: LDB -$C,U
    // TODO: Fix comma operator: LDB -$C,U

    // EA1E: LDB $2,S
    // TODO: Fix comma operator: LDB $2,S

    // EA20: LDB -$D,S
    // TODO: Fix comma operator: LDB -$D,S

    // EA22: LDB [,X++]
    // TODO: Complex indexed addressing: [,X++]

    // EA24: LDB [W,X]
    // TODO: Complex indexed addressing: [W,X]

    // EA26: LDB W,Y
    // TODO: Complex indexed addressing: W,Y

    // EA28: LDB [A,Y]
    // TODO: Complex indexed addressing: [A,Y]

    // EA2A: LDB B,U
    // TODO: Fix comma operator: LDB B,U

    // EA2C: LDB ,W++
    // TODO: Complex indexed addressing: ,W++

    // EA2E: LDB [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // EA30: LDB A,S
    // TODO: Fix comma operator: LDB A,S

    // EA32: LDB $EA1B,PCR
    // TODO: Fix comma operator: LDB $EA1B,PCR

    // EA35: SBCB $E6F8
    // TODO: Convert SBCB $E6F8

    // EA38: LDB [$E70D]
    // TODO: Unrecognized operand: [$E70D]

    // EA3C: STB $7,Y
    // TODO: Handle indexed addressing: STB $7,Y

    // EA3E: STB $3,U
    // TODO: Handle indexed addressing: STB $3,U

    // EA40: LDU $9CFE
    cpu.m_u = cpu.read_memory16(0x9CFE);

    // EA43: INC [W,S]
    // TODO: Convert INC [W,S]

    // EA45: INC [W,S]
    // TODO: Convert INC [W,S]

    // EA47: ASL $FE84
    // TODO: Convert ASL $FE84

    // EA4A: LDU $A8FE
    cpu.m_u = cpu.read_memory16(0xA8FE);

    // EA4D: SUBB #$FF
    cpu.m_b -= 0xFF;

    // EA4F: CMPX $1F98
    cpu.compare_x(cpu.read_memory16(0x1F98));

    // EA52: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EA54: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // EA56: EXG U,A
    // TODO: Convert EXG U,A

    // EA58: TFR Y,D
    cpu.m_d = cpu.m_y;

    // EA5A: EXG X,S
    // TODO: Convert EXG X,S

    // EA5C: EXG U,D
    // TODO: Convert EXG U,D

    // EA5F: SUBB $1F98
    cpu.m_b -= 0x1F98;

    // EA62: NEG <$00
    // TODO: Convert NEG <$00

    // EA64: TFR B,A
    cpu.m_a = cpu.m_b;

    // EA66: NEG <$E0
    // TODO: Convert NEG <$E0

    // EA68: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EA6A: NEG <$E0
    // TODO: Convert NEG <$E0

    // EA6C: TFR B,A
    cpu.m_a = cpu.m_b;

    // EA6E: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA70: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // EA72: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA74: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // EA76: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA78: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // EA7A: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA7C: TFR D,A
    cpu.m_a = cpu.m_d;

    // EA7E: NEG <$E0
    // TODO: Convert NEG <$E0

    // EA80: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EA82: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA84: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EA86: NEG <$B0
    // TODO: Convert NEG <$B0

    // EA88: TFR A,inv
    cpu.m_inv = cpu.m_a;

    // EA8A: NEG <$E6
    // TODO: Convert NEG <$E6

    // EA8C: EXG inv,S
    // TODO: Convert EXG inv,S

    // EA8E: NEG <$20
    // TODO: Convert NEG <$20

    // EA90: EXG S,S
    // TODO: Convert EXG S,S

    // EA92: NEG <$D8
    // TODO: Convert NEG <$D8

    // EA94: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EA96: NEG <$B4
    // TODO: Convert NEG <$B4

    // EA98: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EA9A: NEG <$90
    // TODO: Convert NEG <$90

    // EA9C: EXG S,S
    // TODO: Convert EXG S,S

    // EA9E: NEG <$48
    // TODO: Convert NEG <$48

    // EAA0: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAA2: NEG <$24
    // TODO: Convert NEG <$24

    // EAA4: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAA6: NEG <$00
    // TODO: Convert NEG <$00

    // EAA8: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAAA: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // EAAC: EXG S,S
    // TODO: Convert EXG S,S

    // EAAE: TFR B,S
    cpu.m_sp = cpu.m_b;

    // EAB0: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAB2: TFR inv,D
    cpu.m_d = cpu.m_inv;

    // EAB4: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAB6: TFR S,inv
    cpu.m_inv = cpu.m_sp;

    // EAB8: EXG S,S
    // TODO: Convert EXG S,S

    // EABA: TFR D,S
    cpu.m_sp = cpu.m_d;

    // EABC: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EABE: EXG inv,D
    // TODO: Convert EXG inv,D

    // EAC0: EXG S,S
    // TODO: Convert EXG S,S

    // EAC2: EXG B,A
    // TODO: Convert EXG B,A

    // EAC4: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EAC6: EXG inv,S
    // TODO: Convert EXG inv,S

    // EAC8: EXG PC,inv
    // TODO: Convert EXG PC,inv

    // EACA: EXG PC,D
    // TODO: Convert EXG PC,D

    // EACC: NEG <$54
    // TODO: Convert NEG <$54

    // EACE: NEG <$90
    // TODO: Convert NEG <$90

    // EAD0: NEG <$54
    // TODO: Convert NEG <$54

    // EAD2: NEG <$90
    // TODO: Convert NEG <$90

    // EAD4: NEG <$54
    // TODO: Convert NEG <$54

    // EAD6: NEG <$90
    // TODO: Convert NEG <$90

    // EAD8: NEG <$54
    // TODO: Convert NEG <$54

    // EADA: NEG <$90
    // TODO: Convert NEG <$90

    // EADC: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EADE: NEG <$18
    // TODO: Convert NEG <$18

    // EAE0: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAE2: NEG <$B4
    // TODO: Convert NEG <$B4

    // EAE4: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAE6: NEG <$78
    // TODO: Convert NEG <$78

    // EAE8: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAEA: NEG <$3C
    // TODO: Convert NEG <$3C

    // EAEC: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAEE: NEG <$00
    // TODO: Convert NEG <$00

    // EAF0: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAF2: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EAF4: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAF6: TFR A,A
    cpu.m_a = cpu.m_a;

    // EAF8: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAFA: EXG inv,A
    // TODO: Convert EXG inv,A

    // EAFC: EXG A,inv
    // TODO: Convert EXG A,inv

    // EAFE: EXG CC,Y
    // TODO: Convert EXG CC,Y

    // EB00: TFR Y,D
    cpu.m_d = cpu.m_y;

    // EB02: NEG <$54
    // TODO: Convert NEG <$54

    // EB04: EXG A,S
    // TODO: Convert EXG A,S

    // EB06: NEG <$2C
    // TODO: Convert NEG <$2C

    // EB08: TFR B,A
    cpu.m_a = cpu.m_b;

    // EB0A: NEG <$04
    // TODO: Convert NEG <$04

    // EB0C: EXG inv,S
    // TODO: Convert EXG inv,S

    // EB0E: NEG <$20
    // TODO: Convert NEG <$20

    // EB10: TFR DP,inv
    cpu.m_inv = cpu.m_dp;

    // EB12: TFR U,A
    cpu.m_a = cpu.m_u;

    // EB14: NEG <$E0
    // TODO: Convert NEG <$E0

    // EB16: NEG <$20
    // TODO: Convert NEG <$20

    // EB18: EXG Y,inv
    // TODO: Convert EXG Y,inv

    // EB1A: NEG <$C8
    // TODO: Convert NEG <$C8

    // EB1C: TFR DP,inv
    cpu.m_inv = cpu.m_dp;

    // EB1E: TFR inv,D
    cpu.m_d = cpu.m_inv;

    // EB20: NEG <$4C
    // TODO: Convert NEG <$4C

    // EB22: NEG <$C8
    // TODO: Convert NEG <$C8

    // EB24: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // EB26: EXG inv,D
    // TODO: Convert EXG inv,D

    // EB28: NEG <$58
    // TODO: Convert NEG <$58

    // EB2A: NEG <$00
    // TODO: Convert NEG <$00

    // EB2C: EXG X,S
    // TODO: Convert EXG X,S

    // EB2E: NEG <$00
    // TODO: Convert NEG <$00

    // EB30: TFR DP,D
    cpu.m_d = cpu.m_dp;

    // EB32: EXG S,A
    // TODO: Convert EXG S,A

    // EB34: NEG <$40
    // TODO: Convert NEG <$40

    // EB36: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // EB38: EXG B,D
    // TODO: Convert EXG B,D

    // EB3A: NEG <$54
    // TODO: Convert NEG <$54

    // EB3C: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // EB3E: NEG <$18
    // TODO: Convert NEG <$18

    // EB40: TFR D,A
    cpu.m_a = cpu.m_d;

    // EB42: NEG <$DC
    // TODO: Convert NEG <$DC

    // EB44: TFR Y,D
    cpu.m_d = cpu.m_y;

    // EB46: NEG <$78
    // TODO: Convert NEG <$78

    // EB48: EXG inv,D
    // TODO: Convert EXG inv,D

    // EB4A: NEG <$00
    // TODO: Convert NEG <$00

    // EB4C: EXG inv,D
    // TODO: Convert EXG inv,D

    // EB4E: NEG <$3C
    // TODO: Convert NEG <$3C

    // EB50: TFR A,D
    cpu.m_d = cpu.m_a;

    // EB52: NEG <$80
    // TODO: Convert NEG <$80

    // EB54: NEG <$3A
    // TODO: Convert NEG <$3A

    // EB56: NEG <$BC
    // TODO: Convert NEG <$BC

    // EB58: EXG inv,S
    // TODO: Convert EXG inv,S

    // EB5A: NEG <$80
    // TODO: Convert NEG <$80

    // EB5C: EXG B,inv
    // TODO: Convert EXG B,inv

    // EB5E: NEG <$80
    // TODO: Convert NEG <$80

    // EB60: TFR Y,inv
    cpu.m_inv = cpu.m_y;

    // EB62: NEG <$9C
    // TODO: Convert NEG <$9C

    // EB64: TFR X,S
    cpu.m_sp = cpu.m_x;

    // EB66: NEG <$38
    // TODO: Convert NEG <$38

    // EB68: TFR Y,D
    cpu.m_d = cpu.m_y;

    // EB6A: NEG <$9C
    // TODO: Convert NEG <$9C

    // EB6C: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // EB6E: NEG <$C0
    // TODO: Convert NEG <$C0

    // EB70: TFR A,D
    cpu.m_d = cpu.m_a;

    // EB72: NEG <$90
    // TODO: Convert NEG <$90

    // EB74: EXG inv,D
    // TODO: Convert EXG inv,D

    // EB76: NEG <$48
    // TODO: Convert NEG <$48

    // EB78: EXG inv,D
    // TODO: Convert EXG inv,D

    // EB7A: NEG <$48
    // TODO: Convert NEG <$48

    // EB7C: TFR Y,D
    cpu.m_d = cpu.m_y;

    // EB7E: TFR inv,D
    cpu.m_d = cpu.m_inv;

    // EB80: TFR PC,D
    cpu.m_d = cpu.m_pc;

    // EB82: NEG <$80
    // TODO: Convert NEG <$80

    // EB84: TFR Y,inv
    cpu.m_inv = cpu.m_y;

    // EB86: NEG <$80
    // TODO: Convert NEG <$80

    // EB88: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // EB8A: NEG <$80
    // TODO: Convert NEG <$80

    // EB8C: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // EB8E: NEG <$50
    // TODO: Convert NEG <$50

    // EB90: NEG <$00
    // TODO: Convert NEG <$00

    // EB92: NEG <$00
    // TODO: Convert NEG <$00

    // EB94: NEG <$00
    // TODO: Convert NEG <$00

    // EB96: NEG <$00
    // TODO: Convert NEG <$00

    // EB98: NEG <$00
    // TODO: Convert NEG <$00

    // EB9A: NEG <$00
    // TODO: Convert NEG <$00

    // EB9C: NEG <$00
    // TODO: Convert NEG <$00

    // EB9E: NEG <$00
    // TODO: Convert NEG <$00

    // EBA0: NEG <$00
    // TODO: Convert NEG <$00

    // EBA2: NEG <$00
    // TODO: Convert NEG <$00

    // EBA4: NEG <$00
    // TODO: Convert NEG <$00

    // EBA6: NEG <$00
    // TODO: Convert NEG <$00

    // EBA8: NEG <$00
    // TODO: Convert NEG <$00

    // EBAA: NEG <$00
    // TODO: Convert NEG <$00

    // EBAC: NEG <$00
    // TODO: Convert NEG <$00

    // EBAE: NEG <$00
    // TODO: Convert NEG <$00

    // EBB0: NEG <$00
    // TODO: Convert NEG <$00

    // EBB2: NEG <$00
    // TODO: Convert NEG <$00

    // EBB4: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // EBB6: NEG <$E0
    // TODO: Convert NEG <$E0

    // EBB8: TFR Y,A
    cpu.m_a = cpu.m_y;

    // EBBA: NEG <$B8
    // TODO: Convert NEG <$B8

    // EBBC: EXG B,A
    // TODO: Convert EXG B,A

    // EBBE: NEG <$90
    // TODO: Convert NEG <$90

    // EBC0: EXG A,D
    // TODO: Convert EXG A,D

    // EBC2: NEG <$68
    // TODO: Convert NEG <$68

    // EBC4: EXG A,D
    // TODO: Convert EXG A,D

    // EBC6: NEG <$40
    // TODO: Convert NEG <$40

    // EBC8: EXG inv,D
    // TODO: Convert EXG inv,D

    // EBCA: NEG <$18
    // TODO: Convert NEG <$18

    // EBCC: NEG <$FA
    // TODO: Convert NEG <$FA

    // EBCE: NEG <$40
    // TODO: Convert NEG <$40

    // EBD0: EXG B,A
    // TODO: Convert EXG B,A

    // EBD2: NEG <$DC
    // TODO: Convert NEG <$DC

    // EBD4: EXG inv,A
    // TODO: Convert EXG inv,A

    // EBD6: NEG <$B4
    // TODO: Convert NEG <$B4

    // EBD8: EXG inv,A
    // TODO: Convert EXG inv,A

    // EBDA: NEG <$78
    // TODO: Convert NEG <$78

    // EBDC: EXG PC,D
    // TODO: Convert EXG PC,D

    // EBDE: NEG <$50
    // TODO: Convert NEG <$50

    // EBE0: TFR D,A
    cpu.m_a = cpu.m_d;

    // EBE2: NEG <$00
    // TODO: Convert NEG <$00

    // EBE4: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // EBE6: NEG <$F4
    // TODO: Convert NEG <$F4

    // EBE8: EXG B,A
    // TODO: Convert EXG B,A

    // EBEA: NEG <$C2
    // TODO: Convert NEG <$C2

    // EBEC: EXG B,A
    // TODO: Convert EXG B,A

    // EBEE: NEG <$90
    // TODO: Convert NEG <$90

    // EBF0: EXG A,D
    // TODO: Convert EXG A,D

    // EBF2: NEG <$5E
    // TODO: Convert NEG <$5E

    // EBF4: EXG inv,A
    // TODO: Convert EXG inv,A

    // EBF6: NEG <$2C
    // TODO: Convert NEG <$2C

    // EBF8: EXG B,A
    // TODO: Convert EXG B,A

    // EBFA: NEG <$FA
    // TODO: Convert NEG <$FA

    // EBFC: EXG B,A
    // TODO: Convert EXG B,A

    // EBFE: NEG <$C8
    // TODO: Convert NEG <$C8

    // EC00: EXG inv,D
    // TODO: Convert EXG inv,D

    // EC02: NEG <$96
    // TODO: Convert NEG <$96

    // EC04: EXG A,D
    // TODO: Convert EXG A,D

    // EC06: NEG <$64
    // TODO: Convert NEG <$64

    // EC08: EXG inv,A
    // TODO: Convert EXG inv,A

    // EC0A: NEG <$00
    // TODO: Convert NEG <$00

    // EC0C: EXG inv,A
    // TODO: Convert EXG inv,A

    // EC0E: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // EC10: EXG inv,A
    // TODO: Convert EXG inv,A

    // EC12: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // EC14: EXG inv,A
    // TODO: Convert EXG inv,A

    // EC16: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // EC18: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // EC1A: EXG inv,S
    // TODO: Convert EXG inv,S

    // EC1C: EXG B,D
    // TODO: Convert EXG B,D

    // EC1E: EXG CC,Y
    // TODO: Convert EXG CC,Y

    // EC20: NEG <$48
    // TODO: Convert NEG <$48

    // EC22: NEG <$C2
    // TODO: Convert NEG <$C2

    // EC24: NEG <$48
    // TODO: Convert NEG <$48

    // EC26: NEG <$C2
    // TODO: Convert NEG <$C2

    // EC28: NEG <$48
    // TODO: Convert NEG <$48

    // EC2A: NEG <$C2
    // TODO: Convert NEG <$C2

    // EC2C: NEG <$48
    // TODO: Convert NEG <$48

    // EC2E: NEG <$C2
    // TODO: Convert NEG <$C2

    // EC30: NEG <$48
    // TODO: Convert NEG <$48

    // EC32: NEG <$90
    // TODO: Convert NEG <$90

    // EC34: NEG <$48
    // TODO: Convert NEG <$48

    // EC36: NEG <$90
    // TODO: Convert NEG <$90

    // EC38: NEG <$48
    // TODO: Convert NEG <$48

    // EC3A: NEG <$5E
    // TODO: Convert NEG <$5E

    // EC3C: NEG <$48
    // TODO: Convert NEG <$48

    // EC3E: NEG <$5E
    // TODO: Convert NEG <$5E

    // EC40: NEG <$48
    // TODO: Convert NEG <$48

    // EC42: NEG <$5E
    // TODO: Convert NEG <$5E

    // EC44: NEG <$48
    // TODO: Convert NEG <$48

    // EC46: NEG <$5E
    // TODO: Convert NEG <$5E

    // EC48: NEG <$48
    // TODO: Convert NEG <$48

    // EC4A: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC4C: NEG <$48
    // TODO: Convert NEG <$48

    // EC4E: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC50: NEG <$48
    // TODO: Convert NEG <$48

    // EC52: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC54: NEG <$48
    // TODO: Convert NEG <$48

    // EC56: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC58: NEG <$48
    // TODO: Convert NEG <$48

    // EC5A: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC5C: NEG <$48
    // TODO: Convert NEG <$48

    // EC5E: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC60: NEG <$48
    // TODO: Convert NEG <$48

    // EC62: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC64: NEG <$48
    // TODO: Convert NEG <$48

    // EC66: NEG <$2C
    // TODO: Convert NEG <$2C

    // EC68: NEG <$48
    // TODO: Convert NEG <$48

    // EC6A: NEG <$FA
    // TODO: Convert NEG <$FA

    // EC6C: NEG <$48
    // TODO: Convert NEG <$48

    // EC6E: NEG <$FA
    // TODO: Convert NEG <$FA

    // EC70: NEG <$48
    // TODO: Convert NEG <$48

    // EC72: NEG <$FA
    // TODO: Convert NEG <$FA

    // EC74: NEG <$48
    // TODO: Convert NEG <$48

    // EC76: NEG <$FA
    // TODO: Convert NEG <$FA

    // EC78: NEG <$48
    // TODO: Convert NEG <$48

    // EC7A: NEG <$C8
    // TODO: Convert NEG <$C8

    // EC7C: NEG <$48
    // TODO: Convert NEG <$48

    // EC7E: NEG <$C8
    // TODO: Convert NEG <$C8

    // EC80: NEG <$48
    // TODO: Convert NEG <$48

    // EC82: NEG <$C8
    // TODO: Convert NEG <$C8

    // EC84: NEG <$48
    // TODO: Convert NEG <$48

    // EC86: NEG <$C8
    // TODO: Convert NEG <$C8

    // EC88: NEG <$48
    // TODO: Convert NEG <$48

    // EC8A: NEG <$96
    // TODO: Convert NEG <$96

    // EC8C: NEG <$48
    // TODO: Convert NEG <$48

    // EC8E: NEG <$96
    // TODO: Convert NEG <$96

    // EC90: NEG <$48
    // TODO: Convert NEG <$48

    // EC92: NEG <$96
    // TODO: Convert NEG <$96

    // EC94: NEG <$48
    // TODO: Convert NEG <$48

    // EC96: NEG <$96
    // TODO: Convert NEG <$96

    // EC98: NEG <$48
    // TODO: Convert NEG <$48

    // EC9A: NEG <$64
    // TODO: Convert NEG <$64

    // EC9C: NEG <$48
    // TODO: Convert NEG <$48

    // EC9E: NEG <$64
    // TODO: Convert NEG <$64

    // ECA0: NEG <$48
    // TODO: Convert NEG <$48

    // ECA2: NEG <$00
    // TODO: Convert NEG <$00

    // ECA4: NEG <$48
    // TODO: Convert NEG <$48

    // ECA6: NEG <$00
    // TODO: Convert NEG <$00

    // ECA8: NEG <$48
    // TODO: Convert NEG <$48

    // ECAA: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // ECAC: NEG <$48
    // TODO: Convert NEG <$48

    // ECAE: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // ECB0: NEG <$48
    // TODO: Convert NEG <$48

    // ECB2: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ECB4: NEG <$48
    // TODO: Convert NEG <$48

    // ECB6: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ECB8: NEG <$48
    // TODO: Convert NEG <$48

    // ECBA: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ECBC: NEG <$48
    // TODO: Convert NEG <$48

    // ECBE: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ECC0: NEG <$B2
    // TODO: Convert NEG <$B2

    // ECC2: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ECC4: NEG <$B2
    // TODO: Convert NEG <$B2

    // ECC6: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ECC8: TFR A,D
    cpu.m_d = cpu.m_a;

    // ECCA: NEG <$90
    // TODO: Convert NEG <$90

    // ECCC: EXG inv,S
    // TODO: Convert EXG inv,S

    // ECCE: NEG <$2C
    // TODO: Convert NEG <$2C

    // ECD0: NEG <$64
    // TODO: Convert NEG <$64

    // ECD2: NEG <$2C
    // TODO: Convert NEG <$2C

    // ECD4: TFR DP,D
    cpu.m_d = cpu.m_dp;

    // ECD6: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ECD8: TFR B,A
    cpu.m_a = cpu.m_b;

    // ECDA: NEG <$C8
    // TODO: Convert NEG <$C8

    // ECDC: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ECDE: NEG <$96
    // TODO: Convert NEG <$96

    // ECE0: TFR CC,S
    cpu.m_sp = cpu.m_cc;

    // ECE2: NEG <$64
    // TODO: Convert NEG <$64

    // ECE4: TFR B,A
    cpu.m_a = cpu.m_b;

    // ECE6: NEG <$32
    // TODO: Convert NEG <$32

    // ECE8: TFR A,inv
    cpu.m_inv = cpu.m_a;

    // ECEA: NEG <$00
    // TODO: Convert NEG <$00

    // ECEC: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // ECEE: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // ECF0: TFR B,A
    cpu.m_a = cpu.m_b;

    // ECF2: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ECF4: EXG DP,inv
    // TODO: Convert EXG DP,inv

    // ECF6: NEG <$FA
    // TODO: Convert NEG <$FA

    // ECF8: NEG <$64
    // TODO: Convert NEG <$64

    // ECFA: NEG <$FA
    // TODO: Convert NEG <$FA

    // ECFC: TFR DP,D
    cpu.m_d = cpu.m_dp;

    // ECFE: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED00: TFR A,inv
    cpu.m_inv = cpu.m_a;

    // ED02: TFR D,inv
    cpu.m_inv = cpu.m_d;

    // ED04: TFR DP,D
    cpu.m_d = cpu.m_dp;

    // ED06: EXG inv,S
    // TODO: Convert EXG inv,S

    // ED08: TFR DP,inv
    cpu.m_inv = cpu.m_dp;

    // ED0A: EXG inv,S
    // TODO: Convert EXG inv,S

    // ED0C: NEG <$E4
    // TODO: Convert NEG <$E4

    // ED0E: NEG <$D2
    // TODO: Convert NEG <$D2

    // ED10: TFR PC,D
    cpu.m_d = cpu.m_pc;

    // ED12: NEG <$C2
    // TODO: Convert NEG <$C2

    // ED14: TFR Y,inv
    cpu.m_inv = cpu.m_y;

    // ED16: NEG <$00
    // TODO: Convert NEG <$00

    // ED18: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED1A: NEG <$90
    // TODO: Convert NEG <$90

    // ED1C: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // ED1E: NEG <$5E
    // TODO: Convert NEG <$5E

    // ED20: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // ED22: NEG <$2C
    // TODO: Convert NEG <$2C

    // ED24: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED26: NEG <$FA
    // TODO: Convert NEG <$FA

    // ED28: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED2A: NEG <$C8
    // TODO: Convert NEG <$C8

    // ED2C: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED2E: NEG <$96
    // TODO: Convert NEG <$96

    // ED30: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED32: NEG <$64
    // TODO: Convert NEG <$64

    // ED34: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED36: NEG <$32
    // TODO: Convert NEG <$32

    // ED38: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED3A: NEG <$00
    // TODO: Convert NEG <$00

    // ED3C: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // ED3E: TFR inv,inv
    cpu.m_inv = cpu.m_inv;

    // ED40: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED42: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED44: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED46: TFR D,inv
    cpu.m_inv = cpu.m_d;

    // ED48: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED4A: EXG inv,S
    // TODO: Convert EXG inv,S

    // ED4C: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED4E: EXG CC,Y
    // TODO: Convert EXG CC,Y

    // ED50: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED52: EXG inv,D
    // TODO: Convert EXG inv,D

    // ED54: TFR inv,S
    cpu.m_sp = cpu.m_inv;

    // ED56: TFR inv,CC
    cpu.m_cc = cpu.m_inv;

    // ED58: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // ED5A: NEG <$90
    // TODO: Convert NEG <$90

    // ED5C: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // ED5E: NEG <$C8
    // TODO: Convert NEG <$C8

    // ED60: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // ED62: NEG <$5E
    // TODO: Convert NEG <$5E

    // ED64: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED66: NEG <$C8
    // TODO: Convert NEG <$C8

    // ED68: EXG B,A
    // TODO: Convert EXG B,A

    // ED6A: NEG <$13
    // TODO: Convert NEG <$13

    // ED6C: TFR inv,A
    cpu.m_a = cpu.m_inv;

    // ED6E: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED70: TFR S,S
    cpu.m_sp = cpu.m_sp;

    // ED72: EXG inv,S
    // TODO: Convert EXG inv,S

    // ED74: TFR CC,S
    cpu.m_sp = cpu.m_cc;

    // ED76: NEG <$64
    // TODO: Convert NEG <$64

    // ED78: TFR PC,D
    cpu.m_d = cpu.m_pc;

    // ED7A: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED7C: TFR A,inv
    cpu.m_inv = cpu.m_a;

    // ED7E: NEG <$FA
    // TODO: Convert NEG <$FA

    // ED80: TFR DP,inv
    cpu.m_inv = cpu.m_dp;

    // ED82: NEG <$BE
    // TODO: Convert NEG <$BE

    // ED84: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED86: NEG <$BE
    // TODO: Convert NEG <$BE

    // ED88: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED8A: TFR U,A
    cpu.m_a = cpu.m_u;

    // ED8C: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED8E: TFR D,inv
    cpu.m_inv = cpu.m_d;

    // ED90: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED92: EXG inv,S
    // TODO: Convert EXG inv,S

    // ED94: TFR B,inv
    cpu.m_inv = cpu.m_b;

    // ED96: EXG CC,Y
    // TODO: Convert EXG CC,Y

    // ED98: TFR PC,inv
    cpu.m_inv = cpu.m_pc;

    // ED9A: NEG <$2C
    // TODO: Convert NEG <$2C

    // ED9C: EXG inv,inv
    // TODO: Convert EXG inv,inv

    // ED9E: EXG U,inv
    // TODO: Convert EXG U,inv

    // EDA0: EXG DP,S
    // TODO: Convert EXG DP,S

    // EDA2: EXG U,inv
    // TODO: Convert EXG U,inv

    // EDA4: EXG inv,A
    // TODO: Convert EXG inv,A

    // EDA6: TFR D,inv
    cpu.m_inv = cpu.m_d;

    // EDA8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EDAA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EDAC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EDAE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EDB0: LSR [$6380]
    // TODO: Convert LSR [$6380]

    // EDB4: NEG ,X+
    // TODO: Convert NEG ,X+

    // EDB6: ROR ,X+
    // TODO: Convert ROR ,X+

    // EDB8: ROR ,X+
    // TODO: Convert ROR ,X+

    // EDBA: ROR ,X+
    // TODO: Convert ROR ,X+

    // EDBC: ROR ,X+
    // TODO: Convert ROR ,X+

    // EDBE: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EDC0: ASR ,X+
    // TODO: Convert ASR ,X+

    // EDC2: ASR ,X+
    // TODO: Convert ASR ,X+

    // EDC4: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EDC6: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDC8: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDCA: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDCC: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDCE: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDD0: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDD2: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDD4: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDD6: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDD8: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDDA: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDDC: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDDE: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDE0: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDE2: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDE4: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDE6: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDE8: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDEA: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDEC: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDEE: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDF0: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDF2: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDF4: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDF6: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDF8: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDFA: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDFC: LSR ,X+
    // TODO: Convert LSR ,X+

    // EDFE: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE00: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE02: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE04: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE06: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE08: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE0A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE0C: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE0E: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE10: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE12: NEG ,X+
    // TODO: Convert NEG ,X+

    // EE14: NEG ,X+
    // TODO: Convert NEG ,X+

    // EE16: NEG ,X+
    // TODO: Convert NEG ,X+

    // EE18: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE1A: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE1C: ROR ,X+
    // TODO: Convert ROR ,X+

    // EE1E: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE20: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE22: NEG ,X+
    // TODO: Convert NEG ,X+

    // EE24: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE26: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE28: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE2A: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE2C: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE2E: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE30: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE32: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE34: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE36: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE38: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE3A: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE3C: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE3E: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE40: ASR ,X+
    // TODO: Convert ASR ,X+

    // EE42: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE44: LSR ,X+
    // TODO: Convert LSR ,X+

    // EE46: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE48: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    // EE4A: NEG <$00
    // TODO: Convert NEG <$00

    // EE4C: NEG <$00
    // TODO: Convert NEG <$00

    // EE4E: NEG <$00
    // TODO: Convert NEG <$00

    // EE50: NEG <$00
    // TODO: Convert NEG <$00

    // EE52: NEG <$00
    // TODO: Convert NEG <$00

    // EE54: NEG <$00
    // TODO: Convert NEG <$00

    // EE56: NEG <$00
    // TODO: Convert NEG <$00

    // EE58: NEG <$00
    // TODO: Convert NEG <$00

    // EE5A: ASR ,X+
    // TODO: Convert ASR ,X+

    // EE5C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE5E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE60: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE62: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE64: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE66: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE68: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE6A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE6C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE6E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE70: ASR ,X+
    // TODO: Convert ASR ,X+

    // EE72: ASR ,X+
    // TODO: Convert ASR ,X+

    // EE74: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE76: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE78: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE7A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE7C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE7E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE80: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE82: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE84: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE86: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE88: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE8A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE8C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE8E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE90: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE92: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE94: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE96: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE98: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE9A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE9C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EE9E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEA0: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEA2: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEA4: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEA6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEA8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEAA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEAC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEAE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEB0: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEB2: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEB4: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEB6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEB8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEBA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEBC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEBE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEC0: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEC2: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEC4: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEC6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEC8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EECA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EECC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EECE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EED0: XNC ,X+
    // TODO: Convert XNC ,X+

    // EED2: XNC ,X+
    // TODO: Convert XNC ,X+

    // EED4: XNC ,X+
    // TODO: Convert XNC ,X+

    // EED6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EED8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEDA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEDC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEDE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEE0: LSR ,X+
    // TODO: Convert LSR ,X+

    // EEE2: LSR ,X+
    // TODO: Convert LSR ,X+

    // EEE4: ASR ,X+
    // TODO: Convert ASR ,X+

    // EEE6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEE8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEEA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEEC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEEE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEF0: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEF2: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEF4: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEF6: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEF8: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEFA: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEFC: XNC ,X+
    // TODO: Convert XNC ,X+

    // EEFE: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF00: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF02: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF04: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF06: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF08: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF0A: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF0C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF0E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF10: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF12: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF14: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF16: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF18: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF1A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF1C: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF1E: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF20: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF22: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF24: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF26: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF28: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF2A: XNC ,X+
    // TODO: Convert XNC ,X+

    // EF2C: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF2E: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF30: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF32: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF34: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF36: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF38: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF3A: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF3C: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF3E: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF40: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF42: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF44: ASR $0,X
    // TODO: Convert ASR $0,X

    // EF46: ASR -$10,X
    // TODO: Convert ASR -$10,X

    // EF48: ASR $0,Y
    // TODO: Convert ASR $0,Y

    // EF4A: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF4C: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF4E: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF50: ASR ,X+
    // TODO: Convert ASR ,X+

    // EF52: SUBA -$6,X
    // TODO: Fix comma operator: SUBA -$6,X

    label_EF54:
    // EF54: BRA $EF54
    goto label_EF54;

    // EF56: LDX $A,S
    // TODO: Fix comma operator: LDX $A,S

    // EF58: CMPX #$6000
    cpu.compare_x(0x6000);

    // EF5B: BCC $EF5E
    if (!cpu.carry_flag()) cpu.m_pc = 0xEF5E;

    // EF5E: CMPX #$EF54
    cpu.compare_x(0xEF54);

    // EF61: BCS $EF64
    if (cpu.carry_flag()) cpu.m_pc = 0xEF64;

    // EF64: LDA #$48
    cpu.m_a = 0x48;

    // EF66: TFR A,DP
    cpu.m_dp = cpu.m_a;

    // EF68: STA $4640
    cpu.write_memory(0x4640, cpu.m_a);

    // EF6B: LDA <$00
    cpu.m_a = cpu.read_memory(0x00);

    // EF6D: CMPA #$3F
    cpu.compare_a(0x3F);

    // EF6F: BEQ $EF72
    if (cpu.zero_flag()) cpu.m_pc = 0xEF72;

    // EF72: DEC <$3E
    // TODO: Convert DEC <$3E

    // EF74: BPL $EF7F
    if (!cpu.negative_flag()) cpu.m_pc = 0xEF7F;

    // EF76: LDA #$0B
    cpu.m_a = 0x0B;

    // EF78: STA <$3E
    cpu.write_memory(0x3E, cpu.m_a);

    // EF7A: INC <$3D
    // TODO: Convert INC <$3D

    // EF7C: BVC $EF7F
    // TODO: Convert BVC $EF7F

    label_EF7F:
    // EF7F: JMP $ef7f
    goto label_EF7F;

}

} // namespace StarWars