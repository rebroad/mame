#include "cpu_6809.h"

namespace StarWars {

void routine_859b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_859b.md
    // Address: 0x859B

    // 859B: LDA $5040
    cpu.state_.a = cpu.read_memory(0x5040);

    // 85A1: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // 85A3: CMPA $49BF
    cpu.compare_a(cpu.read_memory(0x49BF));

    // 85A6: BEQ $0043
    if (cpu.zero_flag()) cpu.state_.pc = 0x85EB;

    // 85A8: LDB $49BF
    cpu.state_.b = cpu.read_memory(0x49BF);

    // 85AB: STA $49BF
    cpu.write_memory(0x49BF, cpu.state_.a);

    // 85AE: LDX #$4989
    cpu.state_.x = 0x4989;

    // 85B1: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85B4: BCC $0022
    if (!cpu.carry_flag()) cpu.state_.pc = 0x85D8;

    // 85B6: BMI $0022
    if (cpu.negative_flag()) cpu.state_.pc = 0x85DA;

    // 85B8: INC $49C0
    // TODO: Convert INC $49C0

    // 85BB: BRA $0037
    cpu.state_.pc = 0x85F4;

    // 85BE: BNE $0018
    if (!cpu.zero_flag()) cpu.state_.pc = 0x85D8;

    // 85C0: LDX #$4999
    cpu.state_.x = 0x4999;

    // 85C3: LDA B,X
    // TODO: Fix comma operator: LDA B,X

    // 85C6: BCC $0034
    if (!cpu.carry_flag()) cpu.state_.pc = 0x85FC;

    // 85C8: BMI $0034
    if (cpu.negative_flag()) cpu.state_.pc = 0x85FE;

    // 85CA: INC $49C0
    // TODO: Convert INC $49C0

    // 85CD: BRA $0037
    cpu.state_.pc = 0x8606;

    // 85D0: BNE $002A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x85FC;

    // 85D2: LDA #$00
    cpu.state_.a = 0x00;

    // 85D4: LDX #$4989
    cpu.state_.x = 0x4989;

    // 85D7: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 85D9: LDX #$4999
    cpu.state_.x = 0x4999;

    // 85DC: STA B,X
    // TODO: Handle indexed addressing: STA B,X

    // 85DE: JSR $B3E4
    cpu.call_function(0xB3E4);

    // 85E1: JSR $85F9
    cpu.call_function(0x85F9);

    // 85E4: JSR $8735
    cpu.call_function(0x8735);

    // 85E7: JSR $86AE
    cpu.call_function(0x86AE);

    // 85EA: LDA <$95
    cpu.state_.a = cpu.read_memory(0x95);

    // 85EC: BEQ $0056
    if (cpu.zero_flag()) cpu.state_.pc = 0x8644;

    // 85EE: JSR $889F
    cpu.call_function(0x889F);

    // 85F1: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 85F3: BEQ $005D
    if (cpu.zero_flag()) cpu.state_.pc = 0x8652;

    // 85F5: JSR $88F5
    cpu.call_function(0x88F5);

    // 85F9: LDD #$0000
    cpu.state_.d = 0x0000;

    // 85FC: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 85FF: LDD #$6270
    cpu.state_.d = 0x6270;

    // 8602: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8604: LDU #$8696
    cpu.state_.u = 0x8696;

    // 8607: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 8609: BEQ $007D
    if (cpu.zero_flag()) cpu.state_.pc = 0x8688;

    // 860B: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 860D: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8610: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 8614: BHI $007D
    // TODO: Convert BHI $007D

    // 8616: BRA $0080
    cpu.state_.pc = 0x8598;

    // 8618: LDD #$7000
    cpu.state_.d = 0x7000;

    // 861B: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 861E: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 8620: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 8623: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 8625: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8628: LDD #$000F
    cpu.state_.d = 0x000F;

    // 862B: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 862E: LDA #$67
    cpu.state_.a = 0x67;

    // 8630: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8633: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8636: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 8639: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 863C: LDD #$0200
    cpu.state_.d = 0x0200;

    // 863F: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8642: LDD $507A
    cpu.state_.d = cpu.read_memory_word(0x507A);

    // 8645: SUBD $509A
    cpu.state_.d -= 0x509A;

    // 8648: BPL $00B3
    if (!cpu.negative_flag()) cpu.state_.pc = 0x85FD;

    // 864C: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 864E: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8652: BLE $00BC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x8610;

    // 8654: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 8657: LDD $507C
    cpu.state_.d = cpu.read_memory_word(0x507C);

    // 865A: SUBD $509C
    cpu.state_.d -= 0x509C;

    // 865D: BPL $00C8
    if (!cpu.negative_flag()) cpu.state_.pc = 0x8627;

    // 8661: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 8663: CMPD $5078
    // TODO: Convert CMPD $5078

    // 8667: BLE $00D1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x863A;

    // 8669: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 866C: LDD #$000F
    cpu.state_.d = 0x000F;

    // 866F: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8672: LDA #$67
    cpu.state_.a = 0x67;

    // 8674: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8677: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 867A: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 867D: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8680: LDD #$8040
    cpu.state_.d = 0x8040;

    // 8683: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8685: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8687: CMPU #$86AE
    // TODO: Convert CMPU #$86AE

    // 868B: LBCS $006C
    // TODO: Convert LBCS $006C

    // 868F: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8692: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 8696: LDD >$0000
    cpu.state_.d = cpu.read_memory_word(0x0000);

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
    cpu.write_memory(0x5040, cpu.state_.d);

    // 86B4: LDD #$6250
    cpu.state_.d = 0x6250;

    // 86B7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 86B9: LDU #$8725
    cpu.state_.u = 0x8725;

    // 86BC: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 86BE: BEQ $0132
    if (cpu.zero_flag()) cpu.state_.pc = 0x86F2;

    // 86C0: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 86C2: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 86C5: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 86C9: BHI $0132
    // TODO: Convert BHI $0132

    // 86CB: BRA $0135
    cpu.state_.pc = 0x8702;

    // 86CD: LDD #$7000
    cpu.state_.d = 0x7000;

    // 86D0: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 86D3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 86D5: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 86D8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 86DA: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 86DD: LDD #$000F
    cpu.state_.d = 0x000F;

    // 86E0: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 86E3: LDA #$67
    cpu.state_.a = 0x67;

    // 86E5: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 86E8: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 86EB: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 86EE: JSR $CCE4
    cpu.call_function(0xCCE4);

    // 86F1: BRA $0176
    cpu.state_.pc = 0x8769;

    // 86F3: LDD ,U
    // TODO: Complex indexed addressing: ,U

    // 86F5: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 86F8: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // 86FA: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 86FD: LDD #$000F
    cpu.state_.d = 0x000F;

    // 8700: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8703: LDA #$67
    cpu.state_.a = 0x67;

    // 8705: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8708: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 870B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 870E: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8711: LEAU $4,U
    // TODO: Fix comma operator: LEAU $4,U

    // 8713: CMPU #$8735
    // TODO: Convert CMPU #$8735

    // 8717: BCS $0158
    if (cpu.carry_flag()) cpu.state_.pc = 0x8771;

    // 8719: LDD #$8040
    cpu.state_.d = 0x8040;

    // 871C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 871E: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // 8721: STD $5040
    cpu.write_memory(0x5040, cpu.state_.d);

    // 8725: LDD >$0000
    cpu.state_.d = cpu.read_memory_word(0x0000);

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
    cpu.state_.b &= 0xC1;

    // 873B: COM <$26
    // TODO: Convert COM <$26

    // 873D: NEG <$39
    // TODO: Convert NEG <$39

    // 873F: CMPB #$01
    cpu.compare_b(0x01);

    // 8741: BNE $01AD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x86F0;

    // 8743: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8746: BRA $01B0
    cpu.state_.pc = 0x86F8;

    // 8748: LDD #$1000
    cpu.state_.d = 0x1000;

    // 874B: ADDD $49B1
    cpu.state_.d += 0x49B1;

    // 874E: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 8751: BPL $01EB
    if (!cpu.negative_flag()) cpu.state_.pc = 0x873E;

    // 8753: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8755: CMPB #$01
    cpu.compare_b(0x01);

    // 8757: BNE $01C3
    if (!cpu.zero_flag()) cpu.state_.pc = 0x871C;

    // 8759: LDD #$0800
    cpu.state_.d = 0x0800;

    // 875C: BRA $01C6
    cpu.state_.pc = 0x8724;

    // 875E: LDD #$1000
    cpu.state_.d = 0x1000;

    // 8761: ADDD $49B1
    cpu.state_.d += 0x49B1;

    // 8764: STD $49B1
    cpu.write_memory(0x49B1, cpu.state_.d);

    // 8767: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8769: STU $49AF
    cpu.write_memory(0x49AF, cpu.state_.u);

    // 876C: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 876E: CMPB #$03
    cpu.compare_b(0x03);

    // 8770: BNE $01D8
    if (!cpu.zero_flag()) cpu.state_.pc = 0x874A;

    // 8773: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8775: CMPB #$05
    cpu.compare_b(0x05);

    // 8777: BNE $01E8
    if (!cpu.zero_flag()) cpu.state_.pc = 0x8761;

    // 8779: LDU $49A9
    cpu.state_.u = cpu.read_memory_word(0x49A9);

    // 877C: LEAU $2,U
    // TODO: Fix comma operator: LEAU $2,U

    // 877E: STU $49A9
    cpu.write_memory(0x49A9, cpu.state_.u);

    // 8781: LDU ,U
    // TODO: Complex indexed addressing: ,U

    // 8783: STU $49AF
    cpu.write_memory(0x49AF, cpu.state_.u);

    // 8786: LDD #$6260
    cpu.state_.d = 0x6260;

    // 8789: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 878B: JSR $83CE
    cpu.call_function(0x83CE);

    // 878E: LDD $49A9
    cpu.state_.d = cpu.read_memory_word(0x49A9);

    // 8791: STD $49AD
    cpu.write_memory(0x49AD, cpu.state_.d);

    // 8794: LDD $49AF
    cpu.state_.d = cpu.read_memory_word(0x49AF);

    // 8797: STD $49B9
    cpu.write_memory(0x49B9, cpu.state_.d);

    // 879A: LDD >$0000
    cpu.state_.d = cpu.read_memory_word(0x0000);

}

} // namespace StarWars