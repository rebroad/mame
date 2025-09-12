#include "cpu_6809.h"

namespace StarWars {

void routine_7519_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_7519.md
    // Address: 0x7519

    // 7519: JSR $6112
    cpu.call_function(0x6112);

    // 751C: LDA #$10
    cpu.state_.a = 0x10;

    // 751E: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7521: JSR $7160
    cpu.call_function(0x7160);

    // 7524: JSR $761D
    cpu.call_function(0x761D);

    // 7527: JSR $95A7
    cpu.call_function(0x95A7);

    // 752A: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 752D: JSR $CD80
    cpu.call_function(0xCD80);

    // 7530: LDB #$45
    cpu.state_.b = 0x45;

    // 7532: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7535: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 7538: CMPA #$02
    cpu.compare_a(0x02);

    // 753A: BGT $0041
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x757D;

    // 753C: LDB #$47
    cpu.state_.b = 0x47;

    // 753E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7541: LDB #$48
    cpu.state_.b = 0x48;

    // 7543: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7546: LDD #$0090
    cpu.state_.d = 0x0090;

    // 7549: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 754B: LDD #$0070
    cpu.state_.d = 0x0070;

    // 754E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7550: LDA <$8E
    cpu.state_.a = cpu.read_memory(0x8E);

    // 7552: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 7555: LDD #$8040
    cpu.state_.d = 0x8040;

    // 7558: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 755A: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 755D: CMPA #$01
    cpu.compare_a(0x01);

    // 755F: BGT $0083
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x75E4;

    // 7561: LDA $4845
    cpu.state_.a = cpu.read_memory(0x4845);

    // 7564: BEQ $0083
    if (cpu.zero_flag()) cpu.state_.pc = 0x75E9;

    // 7566: LDA $4592
    cpu.state_.a = cpu.read_memory(0x4592);

    // 7569: ANDA #$03
    cpu.state_.a &= 0x03;

    // 756B: BEQ $0083
    if (cpu.zero_flag()) cpu.state_.pc = 0x75F0;

    // 756D: LDB $4593
    cpu.state_.b = cpu.read_memory(0x4593);

    // 7570: ANDB #$03
    cpu.state_.b &= 0x03;

    // 7572: ADDB #$06
    cpu.state_.b += 0x06;

    // 7574: CMPB <$60
    cpu.compare_b(cpu.read_memory(0x60));

    // 7576: BHI $0063
    // TODO: Convert BHI $0063

    // 7578: LDB #$4A
    cpu.state_.b = 0x4A;

    // 757A: BRA $0080
    cpu.state_.pc = 0x75FC;

    // 757C: LDU #$A01A
    cpu.state_.u = 0xA01A;

    // 757F: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 7581: LDU #$0048
    cpu.state_.u = 0x0048;

    // 7584: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 7586: LDU #$1EC0
    cpu.state_.u = 0x1EC0;

    // 7589: STU ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.u);

    // 758B: LDB #$01
    cpu.state_.b = 0x01;

    // 758D: STB <$AD
    cpu.write_memory(0xAD, cpu.state_.b);

    // 758F: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 7592: LDD #$8040
    cpu.state_.d = 0x8040;

    // 7595: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7597: LDB #$49
    cpu.state_.b = 0x49;

    // 7599: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 759C: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 759F: CMPA #$00
    cpu.compare_a(0x00);

    // 75A1: BGT $0099
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x763C;

    // 75A3: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 75A6: BNE $0099
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7641;

    // 75A8: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 75AB: BEQ $0099
    if (cpu.zero_flag()) cpu.state_.pc = 0x7646;

    // 75AD: LDB #$4B
    cpu.state_.b = 0x4B;

    // 75AF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 75B2: JSR $98B0
    cpu.call_function(0x98B0);

    // 75B5: JSR $612F
    cpu.call_function(0x612F);

    // 75B9: JSR $6112
    cpu.call_function(0x6112);

    // 75BC: LDA #$10
    cpu.state_.a = 0x10;

    // 75BE: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 75C1: JSR $761D
    cpu.call_function(0x761D);

    // 75C4: LDA $4B36
    cpu.state_.a = cpu.read_memory(0x4B36);

    // 75C7: BLE $00B3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x767C;

    // 75C9: JSR $97C2
    cpu.call_function(0x97C2);

    // 75CC: JSR $95A7
    cpu.call_function(0x95A7);

    // 75CF: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 75D2: JSR $77A4
    cpu.call_function(0x77A4);

    // 75D5: JSR $612F
    cpu.call_function(0x612F);

    // 75D9: JSR $6112
    cpu.call_function(0x6112);

    // 75DC: LDA #$10
    cpu.state_.a = 0x10;

    // 75DE: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 75E1: JSR $761D
    cpu.call_function(0x761D);

    // 75E4: JSR $95A7
    cpu.call_function(0x95A7);

    // 75E7: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 75EA: LDD #$1F98
    cpu.state_.d = 0x1F98;

    // 75ED: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 75EF: LDD #$0000
    cpu.state_.d = 0x0000;

    // 75F2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 75F4: LDD #$7200
    cpu.state_.d = 0x7200;

    // 75F7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 75F9: LDD #$BE50
    cpu.state_.d = 0xBE50;

    // 75FC: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 75FE: LDD #$7200
    cpu.state_.d = 0x7200;

    // 7601: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7603: JSR $BB85
    cpu.call_function(0xBB85);

    // 7606: JSR $612F
    cpu.call_function(0x612F);

    // 760A: JSR $6112
    cpu.call_function(0x6112);

    // 760D: JSR $761D
    cpu.call_function(0x761D);

    // 7610: JSR $95A7
    cpu.call_function(0x95A7);

    // 7613: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 7616: JSR $BB85
    cpu.call_function(0xBB85);

    // 7619: JSR $612F
    cpu.call_function(0x612F);

    // 761D: LDD #$B9F2
    cpu.state_.d = 0xB9F2;

    // 7620: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7622: LDD #$6280
    cpu.state_.d = 0x6280;

    // 7625: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7627: LDD #$01E0
    cpu.state_.d = 0x01E0;

    // 762A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 762C: LDD #$1E20
    cpu.state_.d = 0x1E20;

    // 762F: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7631: LDA #$06
    cpu.state_.a = 0x06;

    // 7633: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 7635: LDX #$485C
    cpu.state_.x = 0x485C;

    // 7638: JSR $E764
    cpu.call_function(0xE764);

    // 763B: LDD #$8040
    cpu.state_.d = 0x8040;

    // 763E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7640: LDB $4B2C
    cpu.state_.b = cpu.read_memory(0x4B2C);

    // 7643: BEQ $0155
    if (cpu.zero_flag()) cpu.state_.pc = 0x779A;

    // 7645: SUBB #$08
    cpu.state_.b -= 0x08;

    // 7647: CMPB #$20
    cpu.compare_b(0x20);

    // 7649: BCC $0134
    if (!cpu.carry_flag()) cpu.state_.pc = 0x777F;

    // 764B: LDB #$00
    cpu.state_.b = 0x00;

    // 764D: STB $4B2C
    cpu.write_memory(0x4B2C, cpu.state_.b);

    // 7651: LDA #$66
    cpu.state_.a = 0x66;

    // 7653: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7655: LDD #$01B0
    cpu.state_.d = 0x01B0;

    // 7658: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 765A: LDD #$1E50
    cpu.state_.d = 0x1E50;

    // 765D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 765F: LDA #$05
    cpu.state_.a = 0x05;

    // 7661: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 7663: LDX #$4B28
    cpu.state_.x = 0x4B28;

    // 7666: JSR $E772
    cpu.call_function(0xE772);

    // 7669: LDD #$8040
    cpu.state_.d = 0x8040;

    // 766C: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 766E: LDD #$6280
    cpu.state_.d = 0x6280;

    // 7671: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7673: LDD #$0210
    cpu.state_.d = 0x0210;

    // 7676: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 7678: LDD #$0138
    cpu.state_.d = 0x0138;

    // 767B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 767D: LDA #$01
    cpu.state_.a = 0x01;

    // 767F: STA <$AD
    cpu.write_memory(0xAD, cpu.state_.a);

    // 7681: LDA $4B16
    cpu.state_.a = cpu.read_memory(0x4B16);

    // 7684: JSR $E790
    cpu.call_function(0xE790);

    // 7687: LDD #$8040
    cpu.state_.d = 0x8040;

    // 768A: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 768D: LDA $4B13
    cpu.state_.a = cpu.read_memory(0x4B13);

    // 7690: BLE $01E3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7875;

    // 7692: LDA $4B1A
    cpu.state_.a = cpu.read_memory(0x4B1A);

    // 7695: BEQ $01BA
    if (cpu.zero_flag()) cpu.state_.pc = 0x7851;

    // 7697: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 7699: ANDA #$30
    cpu.state_.a &= 0x30;

    // 769B: BEQ $01B5
    if (cpu.zero_flag()) cpu.state_.pc = 0x7852;

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

    // 76CC: BRA $01BA
    cpu.state_.pc = 0x7888;

    // 76CE: LDB #$43
    cpu.state_.b = 0x43;

    // 76D0: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 76D3: LDA $4B13
    cpu.state_.a = cpu.read_memory(0x4B13);

    // 76D6: BLE $01E3
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x78BB;

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

    // 76FF: BEQ $01ED
    if (cpu.zero_flag()) cpu.state_.pc = 0x78EE;

    // 7701: LDB #$42
    cpu.state_.b = 0x42;

    // 7703: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7707: LDA $4B0F
    cpu.state_.a = cpu.read_memory(0x4B0F);

    // 770A: CMPA #$20
    cpu.compare_a(0x20);

    // 770C: BLS $01F7
    // TODO: Convert BLS $01F7

    // 770E: LDA #$20
    cpu.state_.a = 0x20;

    // 7710: LDB #$06
    cpu.state_.b = 0x06;

    // 7714: ADDB #$C0
    cpu.state_.b += 0xC0;

    // 7716: LDA #$70
    cpu.state_.a = 0x70;

    // 7718: STD $0,X
    // TODO: Handle indexed addressing: STD $0,X

}

} // namespace StarWars