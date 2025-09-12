#include "cpu_6809.h"

namespace StarWars {

void routine_7720_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_7720.md
    // Address: 0x7720

    // 7720: STD $4AD7
    cpu.write_memory(0x4AD7, cpu.state_.d);

    // 7723: LDD #$0000
    cpu.state_.d = 0x0000;

    // 7726: STD $4AD4
    cpu.write_memory(0x4AD4, cpu.state_.d);

    // 7729: STA $4AD6
    cpu.write_memory(0x4AD6, cpu.state_.a);

    // 772C: ASL $4AD8
    // TODO: Convert ASL $4AD8

    // 772F: ROL $4AD7
    // TODO: Convert ROL $4AD7

    // 7732: LDA $4AD6
    cpu.state_.a = cpu.read_memory(0x4AD6);

    // 7735: ADCA $4AD6
    // TODO: Convert ADCA $4AD6

    // 7739: STA $4AD6
    cpu.write_memory(0x4AD6, cpu.state_.a);

    // 773C: LDA $4AD5
    cpu.state_.a = cpu.read_memory(0x4AD5);

    // 773F: ADCA $4AD5
    // TODO: Convert ADCA $4AD5

    // 7743: STA $4AD5
    cpu.write_memory(0x4AD5, cpu.state_.a);

    // 7746: ROL $4AD4
    // TODO: Convert ROL $4AD4

    // 7749: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // 774B: BNE $000C
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7759;

    // 774E: STA $4AD7
    cpu.write_memory(0x4AD7, cpu.state_.a);

    // 7751: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // 7753: LDB #$A0
    cpu.state_.b = 0xA0;

    // 7756: LDB $4AD7
    cpu.state_.b = cpu.read_memory(0x4AD7);

    // 7759: ANDB #$0F
    cpu.state_.b &= 0x0F;

    // 775B: STB $4AD7
    cpu.write_memory(0x4AD7, cpu.state_.b);

    // 775E: ADDA $4AD7
    cpu.state_.a += 0x4AD7;

    // 7761: STA $4AD7
    cpu.write_memory(0x4AD7, cpu.state_.a);

    // 7765: LDD $5028
    cpu.state_.d = cpu.read_memory_word(0x5028);

    // 7768: BLE $0083
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x76ED;

    // 776A: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 776D: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // 7770: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 7774: BPL $005A
    if (!cpu.negative_flag()) cpu.state_.pc = 0x77D0;

    // 7778: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 777A: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 777D: BGE $0083
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7702;

    // 777F: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // 7782: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // 7786: BPL $006C
    if (!cpu.negative_flag()) cpu.state_.pc = 0x77F4;

    // 778A: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 778C: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 778F: BGE $0083
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7714;

    // 7791: JSR $CCF0
    cpu.call_function(0xCCF0);

    // 7794: LDD #$7300
    cpu.state_.d = 0x7300;

    // 7797: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7799: LDD #$BE50
    cpu.state_.d = 0xBE50;

    // 779C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 779E: LDD #$7200
    cpu.state_.d = 0x7200;

    // 77A1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 77A4: LDD $5028
    cpu.state_.d = cpu.read_memory_word(0x5028);

    // 77A7: BLE $00B3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x775C;

    // 77A9: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 77AC: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // 77AF: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 77B3: BPL $0099
    if (!cpu.negative_flag()) cpu.state_.pc = 0x774E;

    // 77B7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77B9: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77BC: BGE $00B3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7771;

    // 77BE: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // 77C1: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // 77C5: BPL $00AB
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7772;

    // 77C9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77CB: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77CE: BGE $00B3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7783;

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

    // 7809: BCC $00EE
    if (!cpu.carry_flag()) cpu.state_.pc = 0x77F9;

    // 780B: LDD #$7000
    cpu.state_.d = 0x7000;

    // 780E: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // 7810: CMPA #$70
    cpu.compare_a(0x70);

    // 7812: BNE $00F9
    if (!cpu.zero_flag()) cpu.state_.pc = 0x780D;

    // 7814: LDD #$6660
    cpu.state_.d = 0x6660;

    // 7817: BRA $00FC
    cpu.state_.pc = 0x7815;

    // 7819: LDD #$6630
    cpu.state_.d = 0x6630;

    // 781C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 781E: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 7821: BITA #$01
    // TODO: Convert BITA #$01

    // 7823: BNE $010A
    if (!cpu.zero_flag()) cpu.state_.pc = 0x782F;

    // 7825: LDU #$B728
    cpu.state_.u = 0xB728;

    // 7828: BRA $0119
    cpu.state_.pc = 0x7843;

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

    // 7841: BNE $0128
    if (!cpu.zero_flag()) cpu.state_.pc = 0x786B;

    // 7843: LDU #$B75E
    cpu.state_.u = 0xB75E;

    // 7846: BRA $0137
    cpu.state_.pc = 0x787F;

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

    // 7871: BEQ $0156
    if (cpu.zero_flag()) cpu.state_.pc = 0x78C9;

    // 7873: JSR $7881
    cpu.call_function(0x7881);

    // 7876: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7878: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 787B: CMPX #$494B
    cpu.compare_x(0x494B);

    // 787E: BCS $014D
    if (cpu.carry_flag()) cpu.state_.pc = 0x78CD;

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

    // 7894: BVS $01E9
    // TODO: Convert BVS $01E9

    // 7896: LDA $5002
    cpu.state_.a = cpu.read_memory(0x5002);

    // 789A: BVS $01E9
    // TODO: Convert BVS $01E9

    // 789C: LDA $5004
    cpu.state_.a = cpu.read_memory(0x5004);

    // 78A0: BVS $01E9
    // TODO: Convert BVS $01E9

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

    // 78B1: BHI $019B
    // TODO: Convert BHI $019B

    // 78B3: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78B6: ORA #$20
    cpu.state_.a |= 0x20;

    // 78B8: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78BB: CMPU #$0100
    // TODO: Convert CMPU #$0100

    // 78BF: BHI $01A9
    // TODO: Convert BHI $01A9

    // 78C1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X

    // 78C4: ORA #$04
    cpu.state_.a |= 0x04;

    // 78C6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X

    // 78C9: CMPU #$00A0
    // TODO: Convert CMPU #$00A0

    // 78CD: BHI $01DF
    // TODO: Convert BHI $01DF

    // 78CF: LDA $4B38
    cpu.state_.a = cpu.read_memory(0x4B38);

    // 78D2: BNE $01C4
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7898;

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

    // 78E2: BRA $01DD
    cpu.state_.pc = 0x78C1;

    // 78E4: CMPA $2,X
    // TODO: Fix comma operator: CMPA $2,X

    // 78E6: BNE $01DD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x78C5;

    // 78E8: CMPU $4B39
    // TODO: Convert CMPU $4B39

    // 78EC: BGT $01D3
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x78C1;

    // 78EE: STU $4B39
    cpu.write_memory(0x4B39, cpu.state_.u);

    // 78F1: BRA $01DD
    cpu.state_.pc = 0x78D0;

    // 78F3: BCS $01DD
    if (cpu.carry_flag()) cpu.state_.pc = 0x78D2;

    // 78F5: LDA #$FF
    cpu.state_.a = 0xFF;

    // 78F7: STA $4B39
    cpu.write_memory(0x4B39, cpu.state_.a);

    // 78FA: JSR $BDDA
    cpu.call_function(0xBDDA);

    // 78FD: BRA $01E9
    cpu.state_.pc = 0x78E8;

    // 78FF: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X

    // 7901: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));

    // 7904: BNE $01E9
    if (!cpu.zero_flag()) cpu.state_.pc = 0x78EF;

    // 7906: CLR $4B38
    cpu.write_memory(0x4B38, 0);

    // 7909: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // 790C: CMPD #$0010
    // TODO: Convert CMPD #$0010

    // 7910: LBLE $0160
    // TODO: Convert LBLE $0160

    // 7914: CMPD #$7F00
    // TODO: Convert CMPD #$7F00

    // 7918: LBHI $0160
    // TODO: Convert LBHI $0160

    // 791C: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 791F: STD >$0000
    cpu.write_memory(0x0000, cpu.state_.d);

}

} // namespace StarWars