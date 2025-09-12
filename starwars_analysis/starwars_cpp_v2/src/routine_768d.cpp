#include "cpu_6809.h"

namespace StarWars {

void routine_768d_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_768d.md
    // Address: 0x768D

    // 768D: LDA $4B13
    cpu.state_.a = cpu.read_memory(0x4B13);

    // 7690: BLE $006F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7701;

    // 7692: LDA $4B1A
    cpu.state_.a = cpu.read_memory(0x4B1A);

    // 7695: BEQ $0046
    if (cpu.zero_flag()) cpu.state_.pc = 0x76DD;

    // 7697: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 7699: ANDA #$30
    cpu.state_.a &= 0x30;

    // 769B: BEQ $0041
    if (cpu.zero_flag()) cpu.state_.pc = 0x76DE;

    // 769D: LDB #$40
    cpu.state_.b = 0x40;

    // 769F: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 76A2: LDD #$6280
    cpu.state_.d = 0x6280;

    // 76A5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76A7: LDD #$0180
    cpu.state_.d = 0x0180;

    // 76AA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76AC: LDD #$1ED0
    cpu.state_.d = 0x1ED0;

    // 76AF: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76B1: LDA #$04
    cpu.state_.a = 0x04;

    // 76B3: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 76B5: LDA $4B2E
    cpu.state_.a = cpu.read_memory(0x4B2E);

    // 76B8: JSR $E790
    cpu.call_function(0xE790);

    // 76BB: LDA $4B2F
    cpu.state_.a = cpu.read_memory(0x4B2F);

    // 76BE: JSR $E790
    cpu.call_function(0xE790);

    // 76C1: LDA $4B30
    cpu.state_.a = cpu.read_memory(0x4B30);

    // 76C4: JSR $E790
    cpu.call_function(0xE790);

    // 76C7: LDD #$8040
    cpu.state_.d = 0x8040;

    // 76CA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76CC: BRA $0046
    cpu.state_.pc = 0x7714;

    // 76CE: LDB #$43
    cpu.state_.b = 0x43;

    // 76D0: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 76D3: LDA $4B13
    cpu.state_.a = cpu.read_memory(0x4B13);

    // 76D6: BLE $006F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7747;

    // 76D8: LDD #$0041
    cpu.state_.d = 0x0041;

    // 76DB: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 76DE: LDD #$6280
    cpu.state_.d = 0x6280;

    // 76E1: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76E3: LDD #$0198
    cpu.state_.d = 0x0198;

    // 76E6: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76E8: LDD #$0168
    cpu.state_.d = 0x0168;

    // 76EB: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76ED: LDA #$01
    cpu.state_.a = 0x01;

    // 76EF: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 76F1: LDA $4B1A
    cpu.state_.a = cpu.read_memory(0x4B1A);

    // 76F4: JSR $E790
    cpu.call_function(0xE790);

    // 76F7: LDD #$8040
    cpu.state_.d = 0x8040;

    // 76FA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 76FC: LDA $4B35
    cpu.state_.a = cpu.read_memory(0x4B35);

    // 76FF: BEQ $0079
    if (cpu.zero_flag()) cpu.state_.pc = 0x777A;

    // 7701: LDB #$42
    cpu.state_.b = 0x42;

    // 7703: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7707: LDA $4B0F
    cpu.state_.a = cpu.read_memory(0x4B0F);

    // 770A: CMPA #$20
    cpu.compare_a(0x20);

    // 770C: BLS $0083
    // TODO: Convert BLS $0083

    // 770E: LDA #$20
    cpu.state_.a = 0x20;

    // 7710: LDB #$06
    cpu.state_.b = 0x06;

    // 7714: ADDB #$C0
    cpu.state_.b += 0xC0;

    // 7716: LDA #$70
    cpu.state_.a = 0x70;

    // 7718: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 771A: LDB #$04
    cpu.state_.b = 0x04;

    // 771C: JSR $E7C7
    cpu.call_function(0xE7C7);

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

    // 774B: BNE $009F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x76EC;

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

    // 7768: BLE $0116
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7780;

    // 776A: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 776D: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // 7770: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 7774: BPL $00ED
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7763;

    // 7778: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 777A: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 777D: BGE $0116
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7795;

    // 777F: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // 7782: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // 7786: BPL $00FF
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7787;

    // 778A: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 778C: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 778F: BGE $0116
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x77A7;

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

    // 77A7: BLE $0146
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x77EF;

    // 77A9: STD $4704
    cpu.write_memory(0x4704, cpu.state_.d);

    // 77AC: LDD $502A
    cpu.state_.d = cpu.read_memory_word(0x502A);

    // 77AF: STD $5002
    cpu.write_memory(0x5002, cpu.state_.d);

    // 77B3: BPL $012C
    if (!cpu.negative_flag()) cpu.state_.pc = 0x77E1;

    // 77B7: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77B9: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77BC: BGE $0146
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7804;

    // 77BE: LDD $502C
    cpu.state_.d = cpu.read_memory_word(0x502C);

    // 77C1: STD $5004
    cpu.write_memory(0x5004, cpu.state_.d);

    // 77C5: BPL $013E
    if (!cpu.negative_flag()) cpu.state_.pc = 0x7805;

    // 77C9: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 77CB: SUBD $5028
    cpu.state_.d -= 0x5028;

    // 77CE: BGE $0146
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7816;

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

    // 7809: BCC $0181
    if (!cpu.carry_flag()) cpu.state_.pc = 0x778C;

    // 780B: LDD #$7000
    cpu.state_.d = 0x7000;

    // 780E: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // 7810: CMPA #$70
    cpu.compare_a(0x70);

    // 7812: BNE $018C
    if (!cpu.zero_flag()) cpu.state_.pc = 0x77A0;

    // 7814: LDD #$6660
    cpu.state_.d = 0x6660;

    // 7817: BRA $018F
    cpu.state_.pc = 0x77A8;

    // 7819: LDD #$6630
    cpu.state_.d = 0x6630;

    // 781C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 781E: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 7821: BITA #$01
    // TODO: Convert BITA #$01

    // 7823: BNE $019D
    if (!cpu.zero_flag()) cpu.state_.pc = 0x77C2;

    // 7825: LDU #$B728
    cpu.state_.u = 0xB728;

    // 7828: BRA $01AC
    cpu.state_.pc = 0x77D6;

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

    // 7841: BNE $01BB
    if (!cpu.zero_flag()) cpu.state_.pc = 0x77FE;

    // 7843: LDU #$B75E
    cpu.state_.u = 0xB75E;

    // 7846: BRA $01CA
    cpu.state_.pc = 0x7812;

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

    // 7871: BEQ $01E9
    if (cpu.zero_flag()) cpu.state_.pc = 0x785C;

    // 7873: JSR $7881
    cpu.call_function(0x7881);

    // 7876: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // 7878: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 787B: CMPX #$494B
    cpu.compare_x(0x494B);

    // 787E: BCS $01E0
    if (cpu.carry_flag()) cpu.state_.pc = 0x7860;

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

}

} // namespace StarWars