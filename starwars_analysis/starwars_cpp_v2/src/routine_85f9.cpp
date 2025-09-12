#include "cpu_6809.h"

namespace StarWars {

void routine_85f9_impl(CPU6809& cpu) {
    // Converted from rom_disasm_85f9.md
    // Address: 0x85F9

    // 85F9: LDD #$0000
    cpu.m_d = 0x0000;

    // 85FC: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 85FF: LDD #$6270
    cpu.m_d = 0x6270;

    // 8602: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 8604: LDU #$8696
    cpu.m_u = 0x8696;

    // 8607: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 8609: BEQ $8618
    if (cpu.zero_flag()) cpu.m_pc = 0x8618;

    // 860B: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 860D: SUBD $5098
    cpu.m_d -= 0x5098;

    // 8610: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 8614: BHI $8618
    // TODO: Convert BHI $8618

    // 8616: BRA $861B
    cpu.m_pc = 0x861B;

    // 8618: LDD #$7000
    cpu.m_d = 0x7000;

    // 861B: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 861E: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8620: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 8623: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8625: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 8628: LDD #$000F
    cpu.m_d = 0x000F;

    // 862B: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 862E: LDA #$67
    cpu.m_a = 0x67;

    // 8630: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8633: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 8636: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 8639: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 863C: LDD #$0200
    cpu.m_d = 0x0200;

    // 863F: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8642: LDD $507A
    cpu.m_d = cpu.read_memory16(0x507A);

    // 8645: SUBD $509A
    cpu.m_d -= 0x509A;

    // 8648: BPL $864E
    if (!cpu.negative_flag()) cpu.m_pc = 0x864E;

    // 864C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 864E: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8652: BLE $8657
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x8657;

    // 8654: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 8657: LDD $507C
    cpu.m_d = cpu.read_memory16(0x507C);

    // 865A: SUBD $509C
    cpu.m_d -= 0x509C;

    // 865D: BPL $8663
    if (!cpu.negative_flag()) cpu.m_pc = 0x8663;

    // 8661: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 8663: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8667: BLE $866C
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x866C;

    // 8669: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 866C: LDD #$000F
    cpu.m_d = 0x000F;

    // 866F: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8672: LDA #$67
    cpu.m_a = 0x67;

    // 8674: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8677: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 867A: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 867D: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8680: LDD #$8040
    cpu.m_d = 0x8040;

    // 8683: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 8685: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8687: CMPU #$86AE
    // TODO: Convert CMPU #$86AE

    // 868B: LBCS $8607
    // TODO: Convert LBCS $8607

    // 868F: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // 8692: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 8696: LDD >$0000
    cpu.m_d = cpu.read_memory16(0x0000);

    // 8699: NEG <$04
    // TODO: Convert NEG <$04

    // 869B: NEG <$00
    // TODO: Convert NEG <$00

    // 869D: NEG <$FC
    // TODO: Convert NEG <$FC

    // 869F: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A1: NEG <$FE
    // TODO: Convert NEG <$FE

    // 86A3: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A5: NEG <$02
    // TODO: Convert NEG <$02

    // 86A7: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86A9: NEG <$04
    // TODO: Convert NEG <$04

    // 86AB: NEG <$F0
    // TODO: Convert NEG <$F0

    // 86AD: NEG <$CC
    // TODO: Convert NEG <$CC

    // 86AF: NEG <$00
    // TODO: Convert NEG <$00

    // 86B1: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 86B4: LDD #$6250
    cpu.m_d = 0x6250;

    // 86B7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 86B9: LDU #$8725
    cpu.m_u = 0x8725;

    // 86BC: LDA <$92
    cpu.m_a = cpu.read_memory(0x92);

    // 86BE: BEQ $86CD
    if (cpu.zero_flag()) cpu.m_pc = 0x86CD;

    // 86C0: LDD <$93
    cpu.m_d = cpu.read_memory16(0x93);

    // 86C2: SUBD $5098
    cpu.m_d -= 0x5098;

    // 86C5: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 86C9: BHI $86CD
    // TODO: Convert BHI $86CD

    // 86CB: BRA $86D0
    cpu.m_pc = 0x86D0;

    // 86CD: LDD #$7000
    cpu.m_d = 0x7000;

    // 86D0: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 86D3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 86D5: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 86D8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 86DA: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 86DD: LDD #$000F
    cpu.m_d = 0x000F;

    // 86E0: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 86E3: LDA #$67
    cpu.m_a = 0x67;

    // 86E5: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 86E8: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 86EB: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 86EE: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 86F1: BRA $8711
    cpu.m_pc = 0x8711;

    // 86F3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 86F5: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 86F8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 86FA: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 86FD: LDD #$000F
    cpu.m_d = 0x000F;

    // 8700: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // 8703: LDA #$67
    cpu.m_a = 0x67;

    // 8705: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8708: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // 870B: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // 870E: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8711: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8713: CMPU #$8735
    // TODO: Convert CMPU #$8735

    // 8717: BCS $86F3
    if (cpu.carry_flag()) cpu.m_pc = 0x86F3;

    // 8719: LDD #$8040
    cpu.m_d = 0x8040;

    // 871C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 871E: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // 8721: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);

    // 8725: LDD >$0000
    cpu.m_d = cpu.read_memory16(0x0000);

    // 8728: NEG <$FC
    // TODO: Convert NEG <$FC

    // 872A: NEG <$F0
    // TODO: Convert NEG <$F0

    // 872C: NEG <$04
    // TODO: Convert NEG <$04

    // 872E: NEG <$F0
    // TODO: Convert NEG <$F0

    // 8730: NEG <$04
    // TODO: Convert NEG <$04

    // 8732: NEG <$00
    // TODO: Convert NEG <$00

    // 8734: NEG <$FE
    // TODO: Convert NEG <$FE

    // 8737: STX A,S
    // TODO: Handle indexed addressing: STX A,S

    // 8739: ANDB #$C1
    cpu.m_b &= 0xC1;

    // 873B: COM <$26
    // TODO: Convert COM <$26

    // 873D: NEG <$39
    // TODO: Convert NEG <$39

    // 873F: CMPB #$01
    cpu.compare_b(0x01);

    // 8741: BNE $8748
    if (!cpu.zero_flag()) cpu.m_pc = 0x8748;

    // 8743: LDD #$0800
    cpu.m_d = 0x0800;

    // 8746: BRA $874B
    cpu.m_pc = 0x874B;

    // 8748: LDD #$1000
    cpu.m_d = 0x1000;

    // 874B: ADDD $49B1
    cpu.m_d += 0x49B1;

    // 874E: SUBD $5040
    cpu.m_d -= 0x5040;

    // 8751: BPL $8786
    if (!cpu.negative_flag()) cpu.m_pc = 0x8786;

    // 8753: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8755: CMPB #$01
    cpu.compare_b(0x01);

    // 8757: BNE $875E
    if (!cpu.zero_flag()) cpu.m_pc = 0x875E;

    // 8759: LDD #$0800
    cpu.m_d = 0x0800;

    // 875C: BRA $8761
    cpu.m_pc = 0x8761;

    // 875E: LDD #$1000
    cpu.m_d = 0x1000;

    // 8761: ADDD $49B1
    cpu.m_d += 0x49B1;

    // 8764: STD $49B1
    cpu.write_memory16(0x49B1, cpu.m_d);

    // 8767: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8769: STU $49AF
    cpu.write_memory16(0x49AF, cpu.m_u);

    // 876C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 876E: CMPB #$03
    cpu.compare_b(0x03);

    // 8770: BNE $8773
    if (!cpu.zero_flag()) cpu.m_pc = 0x8773;

    // 8773: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8775: CMPB #$05
    cpu.compare_b(0x05);

    // 8777: BNE $8783
    if (!cpu.zero_flag()) cpu.m_pc = 0x8783;

    // 8779: LDU $49A9
    cpu.m_u = cpu.read_memory16(0x49A9);

    // 877C: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 877E: STU $49A9
    cpu.write_memory16(0x49A9, cpu.m_u);

    // 8781: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8783: STU $49AF
    cpu.write_memory16(0x49AF, cpu.m_u);

    // 8786: LDD #$6260
    cpu.m_d = 0x6260;

    // 8789: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 878B: JSR $83CE
    cpu.call_function(0x83CE);

    // 878E: LDD $49A9
    cpu.m_d = cpu.read_memory16(0x49A9);

    // 8791: STD $49AD
    cpu.write_memory16(0x49AD, cpu.m_d);

    // 8794: LDD $49AF
    cpu.m_d = cpu.read_memory16(0x49AF);

    // 8797: STD $49B9
    cpu.write_memory16(0x49B9, cpu.m_d);

    // 879A: LDD $49B1
    cpu.m_d = cpu.read_memory16(0x49B1);

    // 879D: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);

    // 87A0: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87A3: LDD #$FC00
    cpu.m_d = 0xFC00;

    // 87A6: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 87A9: JSR $87CB
    cpu.call_function(0x87CB);

    // 87AC: LDD $49A9
    cpu.m_d = cpu.read_memory16(0x49A9);

    // 87AF: STD $49AD
    cpu.write_memory16(0x49AD, cpu.m_d);

    // 87B2: LDD $49AF
    cpu.m_d = cpu.read_memory16(0x49AF);

    // 87B5: STD $49B9
    cpu.write_memory16(0x49B9, cpu.m_d);

    // 87B8: LDD $49B1
    cpu.m_d = cpu.read_memory16(0x49B1);

    // 87BB: STD $49BB
    cpu.write_memory16(0x49BB, cpu.m_d);

    // 87BE: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87C1: LDD #$0400
    cpu.m_d = 0x0400;

    // 87C4: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // 87C7: JSR $87CB
    cpu.call_function(0x87CB);

    // 87CB: LDD $49BB
    cpu.m_d = cpu.read_memory16(0x49BB);

    // 87CE: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // 87D1: SUBD $5040
    cpu.m_d -= 0x5040;

    // 87D4: LBMI $8866
    // TODO: Convert LBMI $8866

    // 87D8: CMPD #$0800
    // TODO: Convert CMPD #$0800

    // 87DC: BGE $87F5
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x87F5;

    // 87E2: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 87E4: ADDD $5044
    cpu.m_d += 0x5044;

    // 87E7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // 87EB: BGE $87F0
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x87F0;

    // 87ED: LDD #$F000
    cpu.m_d = 0xF000;

    // 87F0: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // 87F3: BRA $8801
    cpu.m_pc = 0x8801;

    // 87F5: LDD $49BB
    cpu.m_d = cpu.read_memory16(0x49BB);

    // 87F8: STD >$0000
    cpu.write_memory16(0x0000, cpu.m_d);

}

} // namespace StarWars