#include "cpu_6809.h"

namespace StarWars {

void routine_761d_7a48_impl(CPU6809& cpu) {
    // Converted from rom_disasm_761d_7a48.md
    // Address: 0x761D_7A48

    label_761D:
    // 761D: LDD #$B9F2
    cpu.m_d = 0xB9F2;
    // 7620: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7622: LDD #$6280
    cpu.m_d = 0x6280;
    // 7625: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7627: LDD #$01E0
    cpu.m_d = 0x01E0;
    // 762A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 762C: LDD #$1E20
    cpu.m_d = 0x1E20;
    // 762F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7631: LDA #$06
    cpu.m_a = 0x06;
    // 7633: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 7635: LDX #$485C
    cpu.m_x = 0x485C;
    // 7638: JSR $E764
    cpu.call_function(0xE764);
    // 763B: LDD #$8040
    cpu.m_d = 0x8040;
    // 763E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7640: LDB $4B2C
    cpu.m_b = cpu.read_memory(0x4B2C);
    // 7643: BEQ $766E
    if (cpu.zero_flag()) cpu.m_pc = 0x766E;
    // 7645: SUBB #$08
    cpu.m_b -= 0x08;
    // 7647: CMPB #$20
    cpu.compare_b(0x20);
    // 7649: BCC $764D
    if (!cpu.carry_flag()) cpu.m_pc = 0x764D;
    // 764B: LDB #$00
    cpu.m_b = 0x00;
    // 764D: STB $4B2C
    cpu.write_memory(0x4B2C, cpu.m_b);
    // 7650: LSRB 
    cpu.m_b >>= 1;
    // 7651: LDA #$66
    cpu.m_a = 0x66;
    // 7653: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7655: LDD #$01B0
    cpu.m_d = 0x01B0;
    // 7658: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 765A: LDD #$1E50
    cpu.m_d = 0x1E50;
    // 765D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 765F: LDA #$05
    cpu.m_a = 0x05;
    // 7661: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 7663: LDX #$4B28
    cpu.m_x = 0x4B28;
    // 7666: JSR $E772
    cpu.call_function(0xE772);
    // 7669: LDD #$8040
    cpu.m_d = 0x8040;
    // 766C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 766E: LDD #$6280
    cpu.m_d = 0x6280;
    // 7671: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7673: LDD #$0210
    cpu.m_d = 0x0210;
    // 7676: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7678: LDD #$0138
    cpu.m_d = 0x0138;
    // 767B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 767D: LDA #$01
    cpu.m_a = 0x01;
    // 767F: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 7681: LDA $4B16
    cpu.m_a = cpu.read_memory(0x4B16);
    // 7684: JSR $E790
    cpu.call_function(0xE790);
    // 7687: LDD #$8040
    cpu.m_d = 0x8040;
    // 768A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 768C: RTS 
    return;
    // 768D: LDA $4B13
    cpu.m_a = cpu.read_memory(0x4B13);
    // 7690: BLE $76FC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x76FC;
    // 7692: LDA $4B1A
    cpu.m_a = cpu.read_memory(0x4B1A);
    // 7695: BEQ $76D3
    if (cpu.zero_flag()) cpu.m_pc = 0x76D3;
    // 7697: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);
    // 7699: ANDA #$30
    cpu.m_a &= 0x30;
    // 769B: BEQ $76CE
    if (cpu.zero_flag()) cpu.m_pc = 0x76CE;
    // 769D: LDB #$40
    cpu.m_b = 0x40;
    // 769F: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 76A2: LDD #$6280
    cpu.m_d = 0x6280;
    // 76A5: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76A7: LDD #$0180
    cpu.m_d = 0x0180;
    // 76AA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76AC: LDD #$1ED0
    cpu.m_d = 0x1ED0;
    // 76AF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76B1: LDA #$04
    cpu.m_a = 0x04;
    // 76B3: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 76B5: LDA $4B2E
    cpu.m_a = cpu.read_memory(0x4B2E);
    // 76B8: JSR $E790
    cpu.call_function(0xE790);
    // 76BB: LDA $4B2F
    cpu.m_a = cpu.read_memory(0x4B2F);
    // 76BE: JSR $E790
    cpu.call_function(0xE790);
    // 76C1: LDA $4B30
    cpu.m_a = cpu.read_memory(0x4B30);
    // 76C4: JSR $E790
    cpu.call_function(0xE790);
    // 76C7: LDD #$8040
    cpu.m_d = 0x8040;
    // 76CA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76CC: BRA $76D3
    goto label_76D3;
    // 76CE: LDB #$43
    cpu.m_b = 0x43;
    // 76D0: JSR $E7C7
    cpu.call_function(0xE7C7);
    label_76D3:
    // 76D3: LDA $4B13
    cpu.m_a = cpu.read_memory(0x4B13);
    // 76D6: BLE $76FC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x76FC;
    // 76D8: LDD #$0041
    cpu.m_d = 0x0041;
    // 76DB: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 76DE: LDD #$6280
    cpu.m_d = 0x6280;
    // 76E1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76E3: LDD #$0198
    cpu.m_d = 0x0198;
    // 76E6: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76E8: LDD #$0168
    cpu.m_d = 0x0168;
    // 76EB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76ED: LDA #$01
    cpu.m_a = 0x01;
    // 76EF: STA <$AD
    cpu.write_memory(0xAD, cpu.m_a);
    // 76F1: LDA $4B1A
    cpu.m_a = cpu.read_memory(0x4B1A);
    // 76F4: JSR $E790
    cpu.call_function(0xE790);
    // 76F7: LDD #$8040
    cpu.m_d = 0x8040;
    // 76FA: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 76FC: LDA $4B35
    cpu.m_a = cpu.read_memory(0x4B35);
    // 76FF: BEQ $7706
    if (cpu.zero_flag()) cpu.m_pc = 0x7706;
    // 7701: LDB #$42
    cpu.m_b = 0x42;
    // 7703: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 7706: RTS 
    return;
    // 7707: LDA $4B0F
    cpu.m_a = cpu.read_memory(0x4B0F);
    // 770A: CMPA #$20
    cpu.compare_a(0x20);
    // 770C: BLS $7710
    // TODO: Convert BLS $7710
    // 770E: LDA #$20
    cpu.m_a = 0x20;
    // 7710: LDB #$06
    cpu.m_b = 0x06;
    // 7712: MUL 
    // TODO: Convert MUL 
    // 7713: NEGB 
    cpu.m_b = -cpu.m_b;
    // 7714: ADDB #$C0
    cpu.m_b += 0xC0;
    // 7716: LDA #$70
    cpu.m_a = 0x70;
    // 7718: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 771A: LDB #$04
    cpu.m_b = 0x04;
    // 771C: JSR $E7C7
    cpu.call_function(0xE7C7);
    // 771F: RTS 
    return;
    // 7720: STD $4AD7
    cpu.write_memory16(0x4AD7, cpu.m_d);
    // 7723: LDD #$0000
    cpu.m_d = 0x0000;
    // 7726: STD $4AD4
    cpu.write_memory16(0x4AD4, cpu.m_d);
    // 7729: STA $4AD6
    cpu.write_memory(0x4AD6, cpu.m_a);
    // 772C: ASL $4AD8
    // TODO: Convert ASL $4AD8
    // 772F: ROL $4AD7
    // TODO: Convert ROL $4AD7
    // 7732: LDA $4AD6
    cpu.m_a = cpu.read_memory(0x4AD6);
    // 7735: ADCA $4AD6
    // TODO: Convert ADCA $4AD6
    // 7738: DAA 
    // TODO: Convert DAA 
    // 7739: STA $4AD6
    cpu.write_memory(0x4AD6, cpu.m_a);
    // 773C: LDA $4AD5
    cpu.m_a = cpu.read_memory(0x4AD5);
    // 773F: ADCA $4AD5
    // TODO: Convert ADCA $4AD5
    // 7742: DAA 
    // TODO: Convert DAA 
    // 7743: STA $4AD5
    cpu.write_memory(0x4AD5, cpu.m_a);
    // 7746: ROL $4AD4
    // TODO: Convert ROL $4AD4
    // 7749: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X
    // 774B: BNE $772C
    if (!cpu.zero_flag()) cpu.m_pc = 0x772C;
    // 774D: RTS 
    return;
    // 774E: STA $4AD7
    cpu.write_memory(0x4AD7, cpu.m_a);
    // 7751: ANDA #$F0
    cpu.m_a &= 0xF0;
    // 7753: LDB #$A0
    cpu.m_b = 0xA0;
    // 7755: MUL 
    // TODO: Convert MUL 
    // 7756: LDB $4AD7
    cpu.m_b = cpu.read_memory(0x4AD7);
    // 7759: ANDB #$0F
    cpu.m_b &= 0x0F;
    // 775B: STB $4AD7
    cpu.write_memory(0x4AD7, cpu.m_b);
    // 775E: ADDA $4AD7
    cpu.m_a += 0x4AD7;
    // 7761: STA $4AD7
    cpu.write_memory(0x4AD7, cpu.m_a);
    // 7764: RTS 
    return;
    // 7765: LDD $5028
    cpu.m_d = cpu.read_memory16(0x5028);
    // 7768: BLE $77A3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x77A3;
    // 776A: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // 776D: LDD $502A
    cpu.m_d = cpu.read_memory16(0x502A);
    // 7770: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);
    // 7773: TSTA 
    cpu.test_a();
    // 7774: BPL $777A
    if (!cpu.negative_flag()) cpu.m_pc = 0x777A;
    // 7776: COMA 
    cpu.m_a = ~cpu.m_a;
    // 7777: NEGB 
    cpu.m_b = -cpu.m_b;
    // 7778: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 777A: SUBD $5028
    cpu.m_d -= 0x5028;
    // 777D: BGE $77A3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x77A3;
    // 777F: LDD $502C
    cpu.m_d = cpu.read_memory16(0x502C);
    // 7782: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);
    // 7785: TSTA 
    cpu.test_a();
    // 7786: BPL $778C
    if (!cpu.negative_flag()) cpu.m_pc = 0x778C;
    // 7788: COMA 
    cpu.m_a = ~cpu.m_a;
    // 7789: NEGB 
    cpu.m_b = -cpu.m_b;
    // 778A: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 778C: SUBD $5028
    cpu.m_d -= 0x5028;
    // 778F: BGE $77A3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x77A3;
    // 7791: JSR $CCF0
    cpu.call_function(0xCCF0);
    // 7794: LDD #$7300
    cpu.m_d = 0x7300;
    // 7797: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7799: LDD #$BE50
    cpu.m_d = 0xBE50;
    // 779C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 779E: LDD #$7200
    cpu.m_d = 0x7200;
    // 77A1: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 77A3: RTS 
    return;
    // 77A4: LDD $5028
    cpu.m_d = cpu.read_memory16(0x5028);
    // 77A7: BLE $77D3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x77D3;
    // 77A9: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // 77AC: LDD $502A
    cpu.m_d = cpu.read_memory16(0x502A);
    // 77AF: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);
    // 77B2: TSTA 
    cpu.test_a();
    // 77B3: BPL $77B9
    if (!cpu.negative_flag()) cpu.m_pc = 0x77B9;
    // 77B5: COMA 
    cpu.m_a = ~cpu.m_a;
    // 77B6: NEGB 
    cpu.m_b = -cpu.m_b;
    // 77B7: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 77B9: SUBD $5028
    cpu.m_d -= 0x5028;
    // 77BC: BGE $77D3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x77D3;
    // 77BE: LDD $502C
    cpu.m_d = cpu.read_memory16(0x502C);
    // 77C1: STD $5004
    cpu.write_memory16(0x5004, cpu.m_d);
    // 77C4: TSTA 
    cpu.test_a();
    // 77C5: BPL $77CB
    if (!cpu.negative_flag()) cpu.m_pc = 0x77CB;
    // 77C7: COMA 
    cpu.m_a = ~cpu.m_a;
    // 77C8: NEGB 
    cpu.m_b = -cpu.m_b;
    // 77C9: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 77CB: SUBD $5028
    cpu.m_d -= 0x5028;
    // 77CE: BGE $77D3
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x77D3;
    // 77D0: JSR $77D4
    cpu.call_function(0x77D4);
    // 77D3: RTS 
    return;
    // 77D4: JSR $CCF0
    cpu.call_function(0xCCF0);
    // 77D7: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y
    // 77D9: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);
    // 77DB: LDD -$2,Y
    // TODO: Fix comma operator: LDD -$2,Y
    // 77DD: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);
    // 77DF: LDD <$56
    cpu.m_d = cpu.read_memory16(0x56);
    // 77E1: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);
    // 77E3: LDU #$BD68
    cpu.m_u = 0xBD68;
    // 77E6: JSR $7863
    cpu.call_function(0x7863);
    // 77E9: LDU #$BDA6
    cpu.m_u = 0xBDA6;
    // 77EC: JSR $785B
    cpu.call_function(0x785B);
    // 77EF: LDU #$BDB2
    cpu.m_u = 0xBDB2;
    // 77F2: JSR $785B
    cpu.call_function(0x785B);
    // 77F5: LDU #$BDDA
    cpu.m_u = 0xBDDA;
    // 77F8: JSR $785B
    cpu.call_function(0x785B);
    // 77FB: LDU #$BE06
    cpu.m_u = 0xBE06;
    // 77FE: JSR $785B
    cpu.call_function(0x785B);
    // 7801: LDD <$56
    cpu.m_d = cpu.read_memory16(0x56);
    // 7803: SUBA #$03
    cpu.m_a -= 0x03;
    // 7805: CMPD #$7000
    // TODO: Convert CMPD #$7000
    // 7809: BCC $780E
    if (!cpu.carry_flag()) cpu.m_pc = 0x780E;
    // 780B: LDD #$7000
    cpu.m_d = 0x7000;
    // 780E: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);
    // 7810: CMPA #$70
    cpu.compare_a(0x70);
    // 7812: BNE $7819
    if (!cpu.zero_flag()) cpu.m_pc = 0x7819;
    // 7814: LDD #$6660
    cpu.m_d = 0x6660;
    // 7817: BRA $781C
    goto label_781C;
    // 7819: LDD #$6630
    cpu.m_d = 0x6630;
    label_781C:
    // 781C: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 781E: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);
    // 7821: BITA #$01
    // TODO: Convert BITA #$01
    // 7823: BNE $782A
    if (!cpu.zero_flag()) cpu.m_pc = 0x782A;
    // 7825: LDU #$B728
    cpu.m_u = 0xB728;
    // 7828: BRA $7839
    goto label_7839;
    // 782A: LDU #$B73C
    cpu.m_u = 0xB73C;
    // 782D: JSR $785B
    cpu.call_function(0x785B);
    // 7830: LDU #$B749
    cpu.m_u = 0xB749;
    // 7833: JSR $785B
    cpu.call_function(0x785B);
    // 7836: LDU #$B754
    cpu.m_u = 0xB754;
    label_7839:
    // 7839: JSR $785B
    cpu.call_function(0x785B);
    // 783C: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);
    // 783F: BITA #$01
    // TODO: Convert BITA #$01
    // 7841: BNE $7848
    if (!cpu.zero_flag()) cpu.m_pc = 0x7848;
    // 7843: LDU #$B75E
    cpu.m_u = 0xB75E;
    // 7846: BRA $7857
    goto label_7857;
    // 7848: LDU #$B770
    cpu.m_u = 0xB770;
    // 784B: JSR $785B
    cpu.call_function(0x785B);
    // 784E: LDU #$B77C
    cpu.m_u = 0xB77C;
    // 7851: JSR $785B
    cpu.call_function(0x785B);
    // 7854: LDU #$B788
    cpu.m_u = 0xB788;
    label_7857:
    // 7857: JSR $785B
    cpu.call_function(0x785B);
    // 785A: RTS 
    return;
    // 785B: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);
    // 785D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 785F: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);
    // 7861: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7863: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);
    // 7865: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7867: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);
    // 7869: RTS 
    return;
    // 786A: LDX #$4900
    cpu.m_x = 0x4900;
    // 786D: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);
    // 786F: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // 7871: BEQ $7876
    if (cpu.zero_flag()) cpu.m_pc = 0x7876;
    // 7873: JSR $7881
    cpu.call_function(0x7881);
    // 7876: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 7878: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X
    // 787B: CMPX #$494B
    cpu.compare_x(0x494B);
    // 787E: BCS $786D
    if (cpu.carry_flag()) cpu.m_pc = 0x786D;
    // 7880: RTS 
    return;
    // 7881: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 7883: CLRA 
    cpu.m_a = 0;
    // 7884: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X
    // 7886: ADDB #$03
    cpu.m_b += 0x03;
    // 7888: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // 788B: LDA #$67
    cpu.m_a = 0x67;
    // 788D: JSR $CDBA
    cpu.call_function(0xCDBA);
    // 7890: LDA $5000
    cpu.m_a = cpu.read_memory(0x5000);
    // 7893: ASLA 
    cpu.m_a <<= 1;
    // 7894: BVS $7909
    // TODO: Convert BVS $7909
    // 7896: LDA $5002
    cpu.m_a = cpu.read_memory(0x5002);
    // 7899: ASLA 
    cpu.m_a <<= 1;
    // 789A: BVS $7909
    // TODO: Convert BVS $7909
    // 789C: LDA $5004
    cpu.m_a = cpu.read_memory(0x5004);
    // 789F: ASLA 
    cpu.m_a <<= 1;
    // 78A0: BVS $7909
    // TODO: Convert BVS $7909
    // 78A2: LDD $5070
    cpu.m_d = cpu.read_memory16(0x5070);
    // 78A5: ADDD $5072
    cpu.m_d += 0x5072;
    // 78A8: ADDD $5074
    cpu.m_d += 0x5074;
    // 78AB: TFR D,U
    cpu.m_u = cpu.m_d;
    // 78AD: CMPU #$0900
    // TODO: Convert CMPU #$0900
    // 78B1: BHI $78BB
    // TODO: Convert BHI $78BB
    // 78B3: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X
    // 78B6: ORA #$20
    cpu.m_a |= 0x20;
    // 78B8: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X
    // 78BB: CMPU #$0100
    // TODO: Convert CMPU #$0100
    // 78BF: BHI $78C9
    // TODO: Convert BHI $78C9
    // 78C1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X
    // 78C4: ORA #$04
    cpu.m_a |= 0x04;
    // 78C6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X
    // 78C9: CMPU #$00A0
    // TODO: Convert CMPU #$00A0
    // 78CD: BHI $78FF
    // TODO: Convert BHI $78FF
    // 78CF: LDA $4B38
    cpu.m_a = cpu.read_memory(0x4B38);
    // 78D2: BNE $78E4
    if (!cpu.zero_flag()) cpu.m_pc = 0x78E4;
    // 78D4: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X
    // 78D6: STA $4B38
    cpu.write_memory(0x4B38, cpu.m_a);
    // 78D9: JSR $BD08
    cpu.call_function(0xBD08);
    // 78DC: JSR $BDC6
    cpu.call_function(0xBDC6);
    // 78DF: STU $4B39
    cpu.write_memory16(0x4B39, cpu.m_u);
    // 78E2: BRA $78FD
    goto label_78FD;
    // 78E4: CMPA $2,X
    // TODO: Fix comma operator: CMPA $2,X
    // 78E6: BNE $78FD
    if (!cpu.zero_flag()) cpu.m_pc = 0x78FD;
    // 78E8: CMPU $4B39
    // TODO: Convert CMPU $4B39
    // 78EC: BGT $78F3
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x78F3;
    // 78EE: STU $4B39
    cpu.write_memory16(0x4B39, cpu.m_u);
    // 78F1: BRA $78FD
    goto label_78FD;
    // 78F3: BCS $78FD
    if (cpu.carry_flag()) cpu.m_pc = 0x78FD;
    // 78F5: LDA #$FF
    cpu.m_a = 0xFF;
    // 78F7: STA $4B39
    cpu.write_memory(0x4B39, cpu.m_a);
    // 78FA: JSR $BDDA
    cpu.call_function(0xBDDA);
    label_78FD:
    // 78FD: BRA $7909
    goto label_7909;
    // 78FF: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X
    // 7901: CMPA $4B38
    cpu.compare_a(cpu.read_memory(0x4B38));
    // 7904: BNE $7909
    if (!cpu.zero_flag()) cpu.m_pc = 0x7909;
    // 7906: CLR $4B38
    cpu.write_memory(0x4B38, 0);
    label_7909:
    // 7909: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // 790C: CMPD #$0010
    // TODO: Convert CMPD #$0010
    // 7910: LBLE $7880
    // TODO: Convert LBLE $7880
    // 7914: CMPD #$7F00
    // TODO: Convert CMPD #$7F00
    // 7918: LBHI $7880
    // TODO: Convert LBHI $7880
    // 791C: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // 791F: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);
    // 7922: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);
    // 7925: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);
    // 7928: LDD $5072
    cpu.m_d = cpu.read_memory16(0x5072);
    // 792B: SUBD $5070
    cpu.m_d -= 0x5070;
    // 792E: LBCC $7880
    // TODO: Convert LBCC $7880
    // 7932: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);
    // 7935: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);
    // 7938: LDD $5074
    cpu.m_d = cpu.read_memory16(0x5074);
    // 793B: SUBD $5070
    cpu.m_d -= 0x5070;
    // 793E: LBCC $7880
    // TODO: Convert LBCC $7880
    // 7942: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 7944: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X
    // 7947: ORA #$10
    cpu.m_a |= 0x10;
    // 7949: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X
    // 794C: LDA $4B3B
    cpu.m_a = cpu.read_memory(0x4B3B);
    // 794F: BNE $7972
    if (!cpu.zero_flag()) cpu.m_pc = 0x7972;
    // 7951: LDA $4,X
    // TODO: Fix comma operator: LDA $4,X
    // 7953: CMPA #$04
    cpu.compare_a(0x04);
    // 7955: BNE $7972
    if (!cpu.zero_flag()) cpu.m_pc = 0x7972;
    // 7957: INC $4B3B
    // TODO: Convert INC $4B3B
    // 795A: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);
    // 795D: LSRA 
    cpu.m_a >>= 1;
    // 795E: BCS $796F
    if (cpu.carry_flag()) cpu.m_pc = 0x796F;
    // 7960: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);
    // 7963: BPL $796A
    if (!cpu.negative_flag()) cpu.m_pc = 0x796A;
    // 7965: JSR $BD5D
    cpu.call_function(0xBD5D);
    // 7968: BRA $796D
    goto label_796D;
    // 796A: JSR $BD2B
    cpu.call_function(0xBD2B);
    label_796D:
    // 796D: BRA $7972
    goto label_7972;
    // 796F: JSR $BD1C
    cpu.call_function(0xBD1C);
    label_7972:
    // 7972: LDA $2,X
    // TODO: Fix comma operator: LDA $2,X
    // 7974: JSR $CE18
    cpu.call_function(0xCE18);
    // 7977: JSR $CCF0
    cpu.call_function(0xCCF0);
    // 797A: LDD #$0050
    cpu.m_d = 0x0050;
    // 797D: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);
    // 7980: LDA #$86
    cpu.m_a = 0x86;
    // 7982: JSR $CDBA
    cpu.call_function(0xCDBA);
    // 7985: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);
    // 7988: ADDD #$000A
    cpu.m_d += 0x000A;
    // 798B: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);
    // 798D: LDD <$D6
    cpu.m_d = cpu.read_memory16(0xD6);
    // 798F: SUBD <$B3
    cpu.m_d -= 0xB3;
    // 7991: BPL $7997
    if (!cpu.negative_flag()) cpu.m_pc = 0x7997;
    // 7993: COMA 
    cpu.m_a = ~cpu.m_a;
    // 7994: NEGB 
    cpu.m_b = -cpu.m_b;
    // 7995: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 7997: STD <$05
    cpu.write_memory16(0x05, cpu.m_d);
    // 7999: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);
    // 799B: LDD <$D8
    cpu.m_d = cpu.read_memory16(0xD8);
    // 799D: SUBD <$B5
    cpu.m_d -= 0xB5;
    // 799F: BPL $79A5
    if (!cpu.negative_flag()) cpu.m_pc = 0x79A5;
    // 79A1: COMA 
    cpu.m_a = ~cpu.m_a;
    // 79A2: NEGB 
    cpu.m_b = -cpu.m_b;
    // 79A3: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // 79A5: STD <$07
    cpu.write_memory16(0x07, cpu.m_d);
    // 79A7: ADDD <$03
    cpu.m_d += 0x03;
    // 79A9: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);
    // 79AB: LDD <$05
    cpu.m_d = cpu.read_memory16(0x05);
    // 79AD: SUBD <$01
    cpu.m_d -= 0x01;
    // 79AF: BGT $79CF
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x79CF;
    // 79B1: LDD <$07
    cpu.m_d = cpu.read_memory16(0x07);
    // 79B3: SUBD <$01
    cpu.m_d -= 0x01;
    // 79B5: BGT $79CF
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x79CF;
    // 79B7: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);
    // 79B9: LSRA 
    cpu.m_a >>= 1;
    // 79BA: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // 79BB: ADDD <$01
    cpu.m_d += 0x01;
    // 79BD: SUBD <$03
    cpu.m_d -= 0x03;
    // 79BF: BLT $79CF
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x79CF;
    // 79C1: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);
    // 79C4: CMPD <$C4
    // TODO: Convert CMPD <$C4
    // 79C7: BCC $79CF
    if (!cpu.carry_flag()) cpu.m_pc = 0x79CF;
    // 79C9: STD <$C4
    cpu.write_memory16(0xC4, cpu.m_d);
    // 79CB: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 79CD: STX <$C2
    cpu.write_memory16(0xC2, cpu.m_x);
    // 79CF: LDD <$01
    cpu.m_d = cpu.read_memory16(0x01);
    // 79D1: ADDD <$01
    cpu.m_d += 0x01;
    // 79D3: ADDD <$01
    cpu.m_d += 0x01;
    // 79D5: SUBD <$03
    cpu.m_d -= 0x03;
    // 79D7: BCS $79E9
    if (cpu.carry_flag()) cpu.m_pc = 0x79E9;
    // 79D9: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 79DB: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // 79DD: CMPA #$01
    cpu.compare_a(0x01);
    // 79DF: BNE $79E9
    if (!cpu.zero_flag()) cpu.m_pc = 0x79E9;
    // 79E1: LDD $15,X
    // TODO: Fix comma operator: LDD $15,X
    // 79E4: ORA #$08
    cpu.m_a |= 0x08;
    // 79E6: STD $15,X
    // TODO: Handle indexed addressing: STD $15,X
    // 79E9: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);
    // 79EB: LDB $6,X
    // TODO: Fix comma operator: LDB $6,X
    // 79ED: LDU #$7A08
    cpu.m_u = 0x7A08;
    // 79F0: ASLB 
    cpu.m_b <<= 1;
    // 79F1: LDD B,U
    // TODO: Fix comma operator: LDD B,U
    // 79F3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 79F5: LDA #$40
    cpu.m_a = 0x40;
    // 79F7: JSR $CDBA
    cpu.call_function(0xCDBA);
    // 79FA: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X
    // 79FC: JSR $CD14
    cpu.call_function(0xCD14);
    // 79FF: JSR $CD2C
    cpu.call_function(0xCD2C);
    // 7A02: LDD #$8040
    cpu.m_d = 0x8040;
    // 7A05: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // 7A07: RTS 
    return;
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
    label_7A48:
    // 7A48: JMP $7a48
    goto label_7A48;
}

} // namespace StarWars