#include "cpu_6809.h"

namespace StarWars {

void routine_785b_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_785b.md
    // Address: 0x785B

    // 785B: LDD <$05
    cpu.state_.d = cpu.read_memory_word(0x05);

    // 785D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 785F: LDD <$03
    cpu.state_.d = cpu.read_memory_word(0x03);

    // 7861: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7863: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // 7865: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7867: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 786A: LDX #$4900
    cpu.state_.x = 0x4900;

    // 786D: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // 786F: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 7871: BEQ $001B
    if (cpu.zero_flag()) cpu.state_.pc = 0x788E;

    // 7873: JSR $7881
    cpu.call_function(0x7881);

    // 7876: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7878: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 787B: CMPX #$494B
    cpu.compare_x(0x494B);

    // 787E: BCS $0012
    if (cpu.carry_flag()) cpu.state_.pc = 0x7892;

    // 7881: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7884: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X

    // 7886: ADDB #$03
    cpu.state_.b += 0x03;

    // 7888: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // 788B: LDA #$67
    cpu.state_.a = 0x67;

    // 788D: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 7890: LDA $5000
    cpu.state_.a = cpu.read_memory(0x5000);

    // 7894: BVS $00AE
    // TODO: Convert BVS $00AE

    // 7896: LDA $5002
    cpu.state_.a = cpu.read_memory(0x5002);

    // 789A: BVS $00AE
    // TODO: Convert BVS $00AE

    // 789C: LDA $5004
    cpu.state_.a = cpu.read_memory(0x5004);

    // 78A0: BVS $00AE
    // TODO: Convert BVS $00AE

    // 78A2: LDD $5070
    cpu.state_.d = cpu.read_memory_word(0x5070);

    // 78A5: ADDD $5072
    cpu.state_.d += 0x5072;

    // 78A8: ADDD $5074
    cpu.state_.d += 0x5074;

    // 78AB: TFR D,U
    cpu.state_.u = cpu.state_.d;

    // 78AD: CMPU #$0900
    // TODO: Convert CMPU #$0900

    // 78B1: BHI $0060
    // TODO: Convert BHI $0060

    // 78B3: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78B6: ORA #$20
    cpu.state_.a |= 0x20;

    // 78B8: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78BB: CMPU #$0100
    // TODO: Convert CMPU #$0100

    // 78BF: BHI $006E
    // TODO: Convert BHI $006E

    // 78C1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78C4: ORA #$04
    cpu.state_.a |= 0x04;

    // 78C6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78C9: CMPU #$00A0
    // TODO: Convert CMPU #$00A0

    // 78CD: BHI $00A4
    // TODO: Convert BHI $00A4

    // 78CF: LDA $4B38
    cpu.state_.a = cpu.read_memory(0x4B38);

    // 78D2: BNE $0089
    if (!cpu.zero_flag()) cpu.state_.pc = 0x795D;

    // 78D4: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 78D6: STA $4B38
    cpu.write_memory(0x4B38, cpu.state_.a);

    // 78D9: JSR $BD08
    cpu.call_function(0xBD08);

    // 78DC: JSR $BDC6
    cpu.call_function(0xBDC6);

    // 78DF: STU $4B39
    cpu.write_memory(0x4B39, cpu.state_.u);

    // 78E2: BRA $00A2
    cpu.state_.pc = 0x7986;

    // 78E4: CMPA $2,X
    // TODO: Fix comma operator: CMPA $2,X

    // 78E6: BNE $00A2
    if (!cpu.zero_flag()) cpu.state_.pc = 0x798A;

    // 78E8: CMPU $4B39
    // TODO: Convert CMPU $4B39

    // 78EC: BGT $0098
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7986;

    // 78EE: STU $4B39
    cpu.write_memory(0x4B39, cpu.state_.u);

    // 78F1: BRA $00A2
    cpu.state_.pc = 0x7995;

    // 78F3: BCS $00A2
    if (cpu.carry_flag()) cpu.state_.pc = 0x7997;

    // 78F5: LDA #$FF
    cpu.state_.a = 0xFF;

    // 78F7: STA $4B39
    cpu.write_memory(0x4B39, cpu.state_.a);

    // 78FA: JSR $BDDA
    cpu.call_function(0xBDDA);

    // 78FD: BRA $00AE
    cpu.state_.pc = 0x79AD;

    // 78FF: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 7901: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));

    // 7904: BNE $00AE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x79B4;

    // 7906: CLR $4B38
    cpu.write_memory(0x4B38, 0);

    // 7909: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 790C: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 7910: LBLE $0025
    // TODO: Convert LBLE $0025

    // 7914: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // 7918: LBHI $0025
    // TODO: Convert LBHI $0025

    // 791C: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 791F: STD $5018
    cpu.write_memory(0x5018, cpu.state_.d);

    // 7922: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 7925: STD $501A
    cpu.write_memory(0x501A, cpu.state_.d);

    // 7928: LDD $5072
    cpu.state_.d = cpu.read_memory_word(0x5072);

    // 792B: SUBD $5070
    cpu.state_.d -= 0x5070;

    // 792E: LBCC $0025
    // TODO: Convert LBCC $0025

    // 7932: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // 7935: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // 7938: LDD $5074
    cpu.state_.d = cpu.read_memory_word(0x5074);

    // 793B: SUBD $5070
    cpu.state_.d -= 0x5070;

    // 793E: LBCC $0025
    // TODO: Convert LBCC $0025

    // 7942: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7944: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 7947: ORA #$10
    cpu.state_.a |= 0x10;

    // 7949: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 794C: LDA $4B3B
    cpu.state_.a = cpu.read_memory(0x4B3B);

    // 794F: BNE $0117
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7A68;

    // 7951: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // 7953: CMPA #$04
    cpu.compare_a(0x04);

    // 7955: BNE $0117
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7A6E;

    // 7957: INC $4B3B
    // TODO: Convert INC $4B3B

    // 795A: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 795E: BCS $0114
    if (cpu.carry_flag()) cpu.state_.pc = 0x7A74;

    // 7960: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 7963: BPL $010F
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7A74;

    // 7965: JSR $BD5D
    cpu.call_function(0xBD5D);

    // 7968: BRA $0112
    cpu.state_.pc = 0x7A7C;

    // 796A: JSR $BD2B
    cpu.call_function(0xBD2B);

    // 796D: BRA $0117
    cpu.state_.pc = 0x7A86;

    // 796F: JSR $BD1C
    cpu.call_function(0xBD1C);

    // 7972: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 7974: JSR $CE18
    cpu.call_function(0xCE18);

    // 7977: JSR $CCF0
    cpu.call_function(0xCCF0);

    // 797A: LDD #$0050
    cpu.state_.d = 0x0050;

    // 797D: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 7980: LDA #$86
    cpu.state_.a = 0x86;

    // 7982: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 7985: LDD $5002
    cpu.state_.d = cpu.read_memory_word(0x5002);

    // 7988: ADDD #$000A
    cpu.state_.d += 0x000A;

    // 798B: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // 798D: LDD <$D6
    cpu.state_.d = cpu.read_memory_word(0xD6);

    // 798F: SUBD <$B3
    cpu.state_.d -= 0xB3;

    // 7991: BPL $013C
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7ACF;

    // 7995: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 7997: STD <$05
    cpu.write_memory(0x05, cpu.state_.d);

    // 7999: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // 799B: LDD <$D8
    cpu.state_.d = cpu.read_memory_word(0xD8);

    // 799D: SUBD <$B5
    cpu.state_.d -= 0xB5;

    // 799F: BPL $014A
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7AEB;

    // 79A3: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 79A5: STD <$07
    cpu.write_memory(0x07, cpu.state_.d);

    // 79A7: ADDD <$03
    cpu.state_.d += 0x03;

    // 79A9: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // 79AB: LDD <$05
    cpu.state_.d = cpu.read_memory_word(0x05);

    // 79AD: SUBD <$01
    cpu.state_.d -= 0x01;

    // 79AF: BGT $0174
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7B25;

    // 79B1: LDD <$07
    cpu.state_.d = cpu.read_memory_word(0x07);

    // 79B3: SUBD <$01
    cpu.state_.d -= 0x01;

    // 79B5: BGT $0174
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7B2B;

    // 79B7: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // 79BB: ADDD <$01
    cpu.state_.d += 0x01;

    // 79BD: SUBD <$03
    cpu.state_.d -= 0x03;

    // 79BF: BLT $0174
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7B35;

    // 79C1: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // 79C4: CMPD <$C4
    // TODO: Convert CMPD <$C4

    // 79C7: BCC $0174
    if (!cpu.carry_flag()) cpu.state_.pc = 0x7B3D;

    // 79C9: STD <$C4
    cpu.write_memory(0xC4, cpu.state_.d);

    // 79CB: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 79CD: STX <$C2
    cpu.write_memory(0xC2, cpu.state_.x);

    // 79CF: LDD <$01
    cpu.state_.d = cpu.read_memory_word(0x01);

    // 79D1: ADDD <$01
    cpu.state_.d += 0x01;

    // 79D3: ADDD <$01
    cpu.state_.d += 0x01;

    // 79D5: SUBD <$03
    cpu.state_.d -= 0x03;

    // 79D7: BCS $018E
    if (cpu.carry_flag()) cpu.state_.pc = 0x7B67;

    // 79D9: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 79DB: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 79DD: CMPA #$01
    cpu.compare_a(0x01);

    // 79DF: BNE $018E
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7B6F;

    // 79E1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 79E4: ORA #$08
    cpu.state_.a |= 0x08;

    // 79E6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 79E9: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 79EB: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X

    // 79ED: LDU #$7A08
    cpu.state_.u = 0x7A08;

    // 79F1: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // 79F3: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 79F5: LDA #$40
    cpu.state_.a = 0x40;

    // 79F7: JSR $CDBA
    cpu.call_function(0xCDBA);

    // 79FA: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X

    // 79FC: JSR $CD14
    cpu.call_function(0xCD14);

    // 79FF: JSR $CD2C
    cpu.call_function(0xCD2C);

    // 7A02: LDD #$8040
    cpu.state_.d = 0x8040;

    // 7A05: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7A08: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A0A: ASR -$10,Y
    // TODO: Convert ASR -$10,Y

    // 7A0C: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A0E: ASR -$10,Y
    // TODO: Convert ASR -$10,Y

    // 7A10: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A12: ASR $0,U
    // TODO: Convert ASR $0,U

    // 7A14: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A16: ASR $0,U
    // TODO: Convert ASR $0,U

    // 7A18: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A1A: ASR -$10,U
    // TODO: Convert ASR -$10,U

    // 7A1C: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A1E: ASR -$10,U
    // TODO: Convert ASR -$10,U

    // 7A20: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A22: ASR $0,S
    // TODO: Convert ASR $0,S

    // 7A24: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A26: ASR $0,S
    // TODO: Convert ASR $0,S

    // 7A28: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A2A: ASR -$10,S
    // TODO: Convert ASR -$10,S

    // 7A2C: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A2E: ASR -$10,S
    // TODO: Convert ASR -$10,S

    // 7A30: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A32: ASR ,X+
    // TODO: Convert ASR ,X+

    // 7A34: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A36: ASR ,X+
    // TODO: Convert ASR ,X+

    // 7A38: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A3A: ASR ,X+
    // TODO: Convert ASR ,X+

    // 7A3C: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A3E: ASR ,X+
    // TODO: Convert ASR ,X+

    // 7A40: XNC ,X+
    // TODO: Convert XNC ,X+

    // 7A42: ASR ,X+
    // TODO: Convert ASR ,X+

    // 7A44: ASR ,U+
    // TODO: Convert ASR ,U+

    // 7A46: ASR ,U+
    // TODO: Convert ASR ,U+

    // 7A48: LDU #$5090
    cpu.state_.u = 0x5090;

    // 7A4B: JSR $CDC3
    cpu.call_function(0xCDC3);

    // 7A4E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7A51: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 7A54: STD $509A
    cpu.write_memory(0x509A, cpu.state_.d);

    // 7A57: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 7A5A: LDD #$0000
    cpu.state_.d = 0x0000;

}

} // namespace StarWars