#include "cpu_6809.h"

namespace StarWars {

void routine_77a4_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_77a4.md
    // Address: 0x77A4

    // 77A4: LDD $5028
    cpu.state_.d = cpu.read_memory_word(0x5028);

    // 77A7: BLE $002F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x77D8;

    // 77A9: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 77AC: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // 77AF: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 77B3: BPL $0015
    if (!cpu.negative_flag()) cpu.state_.pc = 0x77CA;

    // 77B7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77B9: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77BC: BGE $002F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x77ED;

    // 77BE: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // 77C1: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // 77C5: BPL $0027
    if (!cpu.negative_flag()) cpu.state_.pc = 0x77EE;

    // 77C9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77CB: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77CE: BGE $002F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x77FF;

    // 77D0: JSR $77D4
    cpu.call_function(0x77D4);

    // 77D4: JSR $CCF0
    cpu.call_function(0xCCF0);

    // 77D7: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y

    // 77D9: STD <$05
    cpu.write_memory(0x05, cpu.state_.d);

    // 77DB: LDD -$2,Y
    // TODO: Fix comma operator: LDD -$2,Y

    // 77DD: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // 77DF: LDD <$56
    cpu.state_.d = cpu.read_memory_word(0x56);

    // 77E1: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // 77E3: LDU #$BD68
    cpu.state_.u = 0xBD68;

    // 77E6: JSR $7863
    cpu.call_function(0x7863);

    // 77E9: LDU #$BDA6
    cpu.state_.u = 0xBDA6;

    // 77EC: JSR $785B
    cpu.call_function(0x785B);

    // 77EF: LDU #$BDB2
    cpu.state_.u = 0xBDB2;

    // 77F2: JSR $785B
    cpu.call_function(0x785B);

    // 77F5: LDU #$BDDA
    cpu.state_.u = 0xBDDA;

    // 77F8: JSR $785B
    cpu.call_function(0x785B);

    // 77FB: LDU #$BE06
    cpu.state_.u = 0xBE06;

    // 77FE: JSR $785B
    cpu.call_function(0x785B);

    // 7801: LDD <$56
    cpu.state_.d = cpu.read_memory_word(0x56);

    // 7803: SUBA #$03
    cpu.state_.a -= 0x03;

    // 7805: CMPD #$7000
    // TODO: Convert CMPD #$7000

    // 7809: BCC $006A
    if (!cpu.carry_flag()) cpu.state_.pc = 0x7875;

    // 780B: LDD #$7000
    cpu.state_.d = 0x7000;

    // 780E: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // 7810: CMPA #$70
    cpu.compare_a(0x70);

    // 7812: BNE $0075
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7889;

    // 7814: LDD #$6660
    cpu.state_.d = 0x6660;

    // 7817: BRA $0078
    cpu.state_.pc = 0x7891;

    // 7819: LDD #$6630
    cpu.state_.d = 0x6630;

    // 781C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 781E: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 7821: BITA #$01
    // TODO: Convert BITA #$01

    // 7823: BNE $0086
    if (!cpu.zero_flag()) cpu.state_.pc = 0x78AB;

    // 7825: LDU #$B728
    cpu.state_.u = 0xB728;

    // 7828: BRA $0095
    cpu.state_.pc = 0x78BF;

    // 782A: LDU #$B73C
    cpu.state_.u = 0xB73C;

    // 782D: JSR $785B
    cpu.call_function(0x785B);

    // 7830: LDU #$B749
    cpu.state_.u = 0xB749;

    // 7833: JSR $785B
    cpu.call_function(0x785B);

    // 7836: LDU #$B754
    cpu.state_.u = 0xB754;

    // 7839: JSR $785B
    cpu.call_function(0x785B);

    // 783C: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 783F: BITA #$01
    // TODO: Convert BITA #$01

    // 7841: BNE $00A4
    if (!cpu.zero_flag()) cpu.state_.pc = 0x78E7;

    // 7843: LDU #$B75E
    cpu.state_.u = 0xB75E;

    // 7846: BRA $00B3
    cpu.state_.pc = 0x78FB;

    // 7848: LDU #$B770
    cpu.state_.u = 0xB770;

    // 784B: JSR $785B
    cpu.call_function(0x785B);

    // 784E: LDU #$B77C
    cpu.state_.u = 0xB77C;

    // 7851: JSR $785B
    cpu.call_function(0x785B);

    // 7854: LDU #$B788
    cpu.state_.u = 0xB788;

    // 7857: JSR $785B
    cpu.call_function(0x785B);

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

    // 7871: BEQ $00D2
    if (cpu.zero_flag()) cpu.state_.pc = 0x7945;

    // 7873: JSR $7881
    cpu.call_function(0x7881);

    // 7876: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7878: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 787B: CMPX #$494B
    cpu.compare_x(0x494B);

    // 787E: BCS $00C9
    if (cpu.carry_flag()) cpu.state_.pc = 0x7949;

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

    // 7894: BVS $0165
    // TODO: Convert BVS $0165

    // 7896: LDA $5002
    cpu.state_.a = cpu.read_memory(0x5002);

    // 789A: BVS $0165
    // TODO: Convert BVS $0165

    // 789C: LDA $5004
    cpu.state_.a = cpu.read_memory(0x5004);

    // 78A0: BVS $0165
    // TODO: Convert BVS $0165

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

    // 78B1: BHI $0117
    // TODO: Convert BHI $0117

    // 78B3: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78B6: ORA #$20
    cpu.state_.a |= 0x20;

    // 78B8: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78BB: CMPU #$0100
    // TODO: Convert CMPU #$0100

    // 78BF: BHI $0125
    // TODO: Convert BHI $0125

    // 78C1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78C4: ORA #$04
    cpu.state_.a |= 0x04;

    // 78C6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78C9: CMPU #$00A0
    // TODO: Convert CMPU #$00A0

    // 78CD: BHI $015B
    // TODO: Convert BHI $015B

    // 78CF: LDA $4B38
    cpu.state_.a = cpu.read_memory(0x4B38);

    // 78D2: BNE $0140
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7A14;

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

    // 78E2: BRA $0159
    cpu.state_.pc = 0x7A3D;

    // 78E4: CMPA $2,X
    // TODO: Fix comma operator: CMPA $2,X

    // 78E6: BNE $0159
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7A41;

    // 78E8: CMPU $4B39
    // TODO: Convert CMPU $4B39

    // 78EC: BGT $014F
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7A3D;

    // 78EE: STU $4B39
    cpu.write_memory(0x4B39, cpu.state_.u);

    // 78F1: BRA $0159
    cpu.state_.pc = 0x7A4C;

    // 78F3: BCS $0159
    if (cpu.carry_flag()) cpu.state_.pc = 0x7A4E;

    // 78F5: LDA #$FF
    cpu.state_.a = 0xFF;

    // 78F7: STA $4B39
    cpu.write_memory(0x4B39, cpu.state_.a);

    // 78FA: JSR $BDDA
    cpu.call_function(0xBDDA);

    // 78FD: BRA $0165
    cpu.state_.pc = 0x7A64;

    // 78FF: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 7901: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));

    // 7904: BNE $0165
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7A6B;

    // 7906: CLR $4B38
    cpu.write_memory(0x4B38, 0);

    // 7909: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 790C: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 7910: LBLE $00DC
    // TODO: Convert LBLE $00DC

    // 7914: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // 7918: LBHI $00DC
    // TODO: Convert LBHI $00DC

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

    // 792E: LBCC $00DC
    // TODO: Convert LBCC $00DC

    // 7932: LDD $5004
    cpu.state_.d = cpu.read_memory_word(0x5004);

    // 7935: STD $501C
    cpu.write_memory(0x501C, cpu.state_.d);

    // 7938: LDD $5074
    cpu.state_.d = cpu.read_memory_word(0x5074);

    // 793B: SUBD $5070
    cpu.state_.d -= 0x5070;

    // 793E: LBCC $00DC
    // TODO: Convert LBCC $00DC

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

    // 794F: BNE $01CE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7B1F;

    // 7951: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X

    // 7953: CMPA #$04
    cpu.compare_a(0x04);

    // 7955: BNE $01CE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7B25;

    // 7957: INC $4B3B
    // TODO: Convert INC $4B3B

    // 795A: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 795E: BCS $01CB
    if (cpu.carry_flag()) cpu.state_.pc = 0x7B2B;

    // 7960: LDA $4703
    cpu.state_.a = cpu.read_memory(0x4703);

    // 7963: BPL $01C6
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7B2B;

    // 7965: JSR $BD5D
    cpu.call_function(0xBD5D);

    // 7968: BRA $01C9
    cpu.state_.pc = 0x7B33;

    // 796A: JSR $BD2B
    cpu.call_function(0xBD2B);

    // 796D: BRA $01CE
    cpu.state_.pc = 0x7B3D;

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

    // 7991: BPL $01F3
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7B86;

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

    // 799F: BPL $0201
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7BA2;

    // 79A3: SBCA #$00
    // TODO: Convert SBCA #$00

}

} // namespace StarWars