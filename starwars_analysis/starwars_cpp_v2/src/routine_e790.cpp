#include "cpu_6809.h"

namespace StarWars {

void routine_e790_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e790.md
    // Address: 0xE790

    // E790: TFR A,B
    cpu.m_b = cpu.m_a;

    // E795: ANDB #$1E
    cpu.m_b &= 0x1E;

    // E797: BNE $E7A2
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7A2;

    // E799: TST <$AD
    // TODO: Convert TST <$AD

    // E79B: BLE $E7A2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE7A2;

    // E79D: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);

    // E7A0: BRA $E7A9
    cpu.m_pc = 0xE7A9;

    // E7A2: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // E7A4: LDU #$3004
    cpu.m_u = 0x3004;

    // E7A7: LDU B,U
    // TODO: Fix comma operator: LDU B,U

    // E7A9: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7AB: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // E7AE: ANDA #$1E
    cpu.m_a &= 0x1E;

    // E7B0: BNE $E7BB
    if (!cpu.zero_flag()) cpu.m_pc = 0xE7BB;

    // E7B2: TST <$AD
    // TODO: Convert TST <$AD

    // E7B4: BLE $E7BB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE7BB;

    // E7B6: LDU $3002
    cpu.m_u = cpu.read_memory16(0x3002);

    // E7B9: BRA $E7C2
    cpu.m_pc = 0xE7C2;

    // E7BB: CLR <$AD
    cpu.write_memory(0xAD, 0);

    // E7BD: LDU #$3004
    cpu.m_u = 0x3004;

    // E7C0: LDU A,U
    // TODO: Fix comma operator: LDU A,U

    // E7C2: DEC <$AD
    // TODO: Convert DEC <$AD

    // E7C4: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // E7C7: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7C9: BCC $E7D2
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7D2;

    // E7CB: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7CE: BSR $E7DD
    // TODO: Convert BSR $E7DD

    // E7D0: BSR $E7EA
    // TODO: Convert BSR $E7EA

    // E7D3: CMPB #$D6
    cpu.compare_b(0xD6);

    // E7D5: BCC $E7DC
    if (!cpu.carry_flag()) cpu.m_pc = 0xE7DC;

    // E7D7: STB $48AE
    cpu.write_memory(0x48AE, cpu.m_b);

    // E7DA: BSR $E7EA
    // TODO: Convert BSR $E7EA

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

    // E7FA: BRA $E811
    cpu.m_pc = 0xE811;

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

    // E833: BCS $E83C
    if (cpu.carry_flag()) cpu.m_pc = 0xE83C;

    // E835: LDX #$3016
    cpu.m_x = 0x3016;

    // E838: ANDB #$7F
    cpu.m_b &= 0x7F;

    // E83A: BRA $E888
    cpu.m_pc = 0xE888;

    // E83C: CMPB #$74
    cpu.compare_b(0x74);

    // E83E: BNE $E845
    if (!cpu.zero_flag()) cpu.m_pc = 0xE845;

    // E840: LDX #$2FDE
    cpu.m_x = 0x2FDE;

    // E843: BRA $E888
    cpu.m_pc = 0xE888;

    // E845: CMPB #$80
    cpu.compare_b(0x80);

    // E847: BNE $E84F
    if (!cpu.zero_flag()) cpu.m_pc = 0xE84F;

    // E849: LDX #$3058
    cpu.m_x = 0x3058;

    // E84D: BRA $E888
    cpu.m_pc = 0xE888;

    // E84F: CMPB #$60
    cpu.compare_b(0x60);

    // E851: BCS $E858
    if (cpu.carry_flag()) cpu.m_pc = 0xE858;

    // E853: LDX #$2FA4
    cpu.m_x = 0x2FA4;

    // E856: BRA $E888
    cpu.m_pc = 0xE888;

    // E858: CMPB #$40
    cpu.compare_b(0x40);

    // E85A: BNE $E861
    if (!cpu.zero_flag()) cpu.m_pc = 0xE861;

    // E85C: LDX #$2FC2
    cpu.m_x = 0x2FC2;

    // E85F: BRA $E888
    cpu.m_pc = 0xE888;

    // E861: CMPB #$4E
    cpu.compare_b(0x4E);

    // E863: BNE $E86A
    if (!cpu.zero_flag()) cpu.m_pc = 0xE86A;

    // E865: LDX #$2FFE
    cpu.m_x = 0x2FFE;

    // E868: BRA $E888
    cpu.m_pc = 0xE888;

    // E86A: CMPB #$58
    cpu.compare_b(0x58);

    // E86C: BNE $E873
    if (!cpu.zero_flag()) cpu.m_pc = 0xE873;

    // E86E: LDX #$2FF6
    cpu.m_x = 0x2FF6;

    // E871: BRA $E888
    cpu.m_pc = 0xE888;

    // E873: CMPB #$5A
    cpu.compare_b(0x5A);

    // E875: BNE $E87C
    if (!cpu.zero_flag()) cpu.m_pc = 0xE87C;

    // E877: LDX #$3000
    cpu.m_x = 0x3000;

    // E87A: BRA $E888
    cpu.m_pc = 0xE888;

    // E87C: CMPB #$4A
    cpu.compare_b(0x4A);

    // E87E: BNE $E885
    if (!cpu.zero_flag()) cpu.m_pc = 0xE885;

    // E880: LDX #$300C
    cpu.m_x = 0x300C;

    // E883: BRA $E888
    cpu.m_pc = 0xE888;

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
    cpu.m_pc = 0xE929;

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

}

} // namespace StarWars