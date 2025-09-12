#include "cpu_6809.h"

namespace StarWars {

void routine_868a_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_868a.md
    // Address: 0x868A

    // 868A: LDX -$10,X
    // TODO: Fix comma operator: LDX -$10,X

    // 868C: BCS $0003
    if (cpu.carry_flag()) cpu.state_.pc += 0x0003;

    // 868E: ASL $FC50
    // TODO: Convert ASL $FC50

    // 8691: EORA <$FD
    cpu.state_.a ^= 0xFD;

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

    // 86BE: BEQ $0043
    if (cpu.zero_flag()) cpu.state_.pc += 0x0043;

    // 86C0: LDD <$93
    cpu.state_.d = cpu.read_memory_word(0x93);

    // 86C2: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 86C5: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 86C9: BHI $0043
    // TODO: Convert BHI $0043

    // 86CB: BRA $0046
    cpu.state_.pc += 0x0046;

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

    // 86F1: BRA $0087
    cpu.state_.pc += 0x0087;

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

    // 8717: BCS $0069
    if (cpu.carry_flag()) cpu.state_.pc += 0x0069;

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

    // 8741: BNE $00BE
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00BE;

    // 8743: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8746: BRA $00C1
    cpu.state_.pc += 0x00C1;

    // 8748: LDD #$1000
    cpu.state_.d = 0x1000;

    // 874B: ADDD $49B1
    cpu.state_.d += 0x49B1;

    // 874E: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 8751: BPL $00FC
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00FC;

    // 8753: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8755: CMPB #$01
    cpu.compare_b(0x01);

    // 8757: BNE $00D4
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00D4;

    // 8759: LDD #$0800
    cpu.state_.d = 0x0800;

    // 875C: BRA $00D7
    cpu.state_.pc += 0x00D7;

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

    // 8770: BNE $00E9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00E9;

    // 8773: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8775: CMPB #$05
    cpu.compare_b(0x05);

    // 8777: BNE $00F9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00F9;

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

    // 879A: LDD $49B1
    cpu.state_.d = cpu.read_memory_word(0x49B1);

    // 879D: STD $49BB
    cpu.write_memory(0x49BB, cpu.state_.d);

    // 87A0: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87A3: LDD #$FC00
    cpu.state_.d = 0xFC00;

    // 87A6: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 87A9: JSR $87CB
    cpu.call_function(0x87CB);

    // 87AC: LDD $49A9
    cpu.state_.d = cpu.read_memory_word(0x49A9);

    // 87AF: STD $49AD
    cpu.write_memory(0x49AD, cpu.state_.d);

    // 87B2: LDD $49AF
    cpu.state_.d = cpu.read_memory_word(0x49AF);

    // 87B5: STD $49B9
    cpu.write_memory(0x49B9, cpu.state_.d);

    // 87B8: LDD $49B1
    cpu.state_.d = cpu.read_memory_word(0x49B1);

    // 87BB: STD $49BB
    cpu.write_memory(0x49BB, cpu.state_.d);

    // 87BE: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87C1: LDD #$0400
    cpu.state_.d = 0x0400;

    // 87C4: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // 87C7: JSR $87CB
    cpu.call_function(0x87CB);

    // 87CB: LDD $49BB
    cpu.state_.d = cpu.read_memory_word(0x49BB);

    // 87CE: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87D1: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 87D4: LBMI $01DC
    // TODO: Convert LBMI $01DC

    // 87D8: CMPD #$0800
    // TODO: Convert CMPD #$0800

    // 87DC: BGE $016B
    // TODO: Convert BGE $016B

    // 87E2: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 87E4: ADDD $5044
    cpu.state_.d += 0x5044;

    // 87E7: CMPD #$F000
    // TODO: Convert CMPD #$F000

    // 87EB: BGE $0166
    // TODO: Convert BGE $0166

    // 87ED: LDD #$F000
    cpu.state_.d = 0xF000;

    // 87F0: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 87F3: BRA $0177
    cpu.state_.pc += 0x0177;

    // 87F5: LDD $49BB
    cpu.state_.d = cpu.read_memory_word(0x49BB);

    // 87F8: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // 87FB: LDD #$F000
    cpu.state_.d = 0xF000;

    // 87FE: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 8801: LDA <$92
    cpu.state_.a = cpu.read_memory(0x92);

    // 8803: BEQ $0184
    if (cpu.zero_flag()) cpu.state_.pc += 0x0184;

    // 8805: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // 8808: SUBD <$93
    cpu.state_.d -= 0x93;

    // 880A: LBPL $0214
    // TODO: Convert LBPL $0214

    // 880E: LDD $5078
    cpu.state_.d = cpu.read_memory_word(0x5078);

    // 8811: SUBD $5098
    cpu.state_.d -= 0x5098;

    // 8814: SUBD #$7000
    cpu.state_.d -= 0x7000;

    // 8817: LBPL $0214
    // TODO: Convert LBPL $0214

    // 881B: LDD #$000F
    cpu.state_.d = 0x000F;

    // 881E: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8821: LDA #$67
    cpu.state_.a = 0x67;

    // 8823: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8826: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 8829: BPL $01A5
    if (!cpu.negative_flag()) cpu.state_.pc += 0x01A5;

    // 882D: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 882F: SUBD $5000
    cpu.state_.d -= 0x5000;

    // 8832: BGT $01DC
    // TODO: Convert BGT $01DC

    // 8834: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 8837: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 883A: LDD #$0000
    cpu.state_.d = 0x0000;

    // 883D: STD <$D6
    cpu.write_memory(0xD6, cpu.state_.d);

    // 883F: LDD #$0068
    cpu.state_.d = 0x0068;

    // 8842: STD <$D8
    cpu.write_memory(0xD8, cpu.state_.d);

    // 8844: JSR $CD08
    cpu.call_function(0xCD08);

    // 8847: LDD #$0000
    cpu.state_.d = 0x0000;

    // 884A: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // 884D: LDD #$000F
    cpu.state_.d = 0x000F;

    // 8850: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 8853: LDA #$67
    cpu.state_.a = 0x67;

    // 8855: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 8858: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 885B: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 885E: JSR $CCFC
    cpu.call_function(0xCCFC);

    // 8861: LDD #$8040
    cpu.state_.d = 0x8040;

    // 8864: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 8866: LDU $49B9
    cpu.state_.u = cpu.read_memory_word(0x49B9);

    // 8869: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 886B: CMPB #$01
    cpu.compare_b(0x01);

    // 886D: BNE $01EA
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01EA;

    // 886F: LDD #$0800
    cpu.state_.d = 0x0800;

    // 8872: BRA $01ED
    cpu.state_.pc += 0x01ED;

    // 8874: LDD #$1000
    cpu.state_.d = 0x1000;

    // 8877: ADDD $49BB
    cpu.state_.d += 0x49BB;

    // 887A: STD $49BB
    cpu.write_memory(0x49BB, cpu.state_.d);

    // 887D: SUBD $5040
    cpu.state_.d -= 0x5040;

    // 8880: BMI $0214
    if (cpu.negative_flag()) cpu.state_.pc += 0x0214;

    // 8882: LEAU $3,U
    // TODO: Fix comma operator: LEAU $3,U

    // 8884: LDB ,U
    // TODO: Complex indexed addressing: ,U

    // 8886: CMPB #$03
    cpu.compare_b(0x03);

    // 8888: BEQ $0214
    if (cpu.zero_flag()) cpu.state_.pc += 0x0214;

}

} // namespace StarWars