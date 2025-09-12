#include "cpu_6809.h"

namespace StarWars {

void routine_743c_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_743c.md
    // Address: 0x743C

    // 743C: JSR $6112
    cpu.call_function(0x6112);

    // 743F: LDA #$10
    cpu.state_.a = 0x10;

    // 7441: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7444: JSR $7160
    cpu.call_function(0x7160);

    // 7447: JSR $761D
    cpu.call_function(0x761D);

    // 744A: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 744D: CMPA #$04
    cpu.compare_a(0x04);

    // 744F: BHI $0028
    // TODO: Convert BHI $0028

    // 7451: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7453: BNE $001E
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7473;

    // 7455: JSR $76D3
    cpu.call_function(0x76D3);

    // 7458: BRA $0028
    cpu.state_.pc = 0x7482;

    // 745A: LDD #$7100
    cpu.state_.d = 0x7100;

    // 745D: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 745F: LDB #$46
    cpu.state_.b = 0x46;

    // 7461: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7464: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 7467: BNE $0055
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74BE;

    // 7469: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 746C: CMPA #$08
    cpu.compare_a(0x08);

    // 746E: BHI $0055
    // TODO: Convert BHI $0055

    // 7470: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7472: BNE $0055
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74C9;

    // 7474: LDA $4B35
    cpu.state_.a = cpu.read_memory(0x4B35);

    // 7477: BNE $0055
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74CE;

    // 7479: LDA $4B12
    cpu.state_.a = cpu.read_memory(0x4B12);

    // 747C: BNE $0046
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74C4;

    // 747E: LDB #$4C
    cpu.state_.b = 0x4C;

    // 7480: BRA $0052
    cpu.state_.pc = 0x74D4;

    // 7482: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 7484: ANDA #$10
    cpu.state_.a &= 0x10;

    // 7486: BNE $0050
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74D8;

    // 7488: LDB #$4C
    cpu.state_.b = 0x4C;

    // 748A: BRA $0052
    cpu.state_.pc = 0x74DE;

    // 748C: LDB #$4E
    cpu.state_.b = 0x4E;

    // 748E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7491: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 7494: BNE $0069
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74FF;

    // 7496: LDA $4895
    cpu.state_.a = cpu.read_memory(0x4895);

    // 7499: BEQ $0069
    if (cpu.zero_flag()) cpu.state_.pc = 0x7504;

    // 749B: LDD #$7100
    cpu.state_.d = 0x7100;

    // 749E: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 74A0: LDB #$44
    cpu.state_.b = 0x44;

    // 74A2: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74A5: LDA $4B36
    cpu.state_.a = cpu.read_memory(0x4B36);

    // 74A8: BLT $007A
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7524;

    // 74AA: BNE $0077
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7523;

    // 74AC: LDB #$4F
    cpu.state_.b = 0x4F;

    // 74AE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74B1: BRA $007A
    cpu.state_.pc = 0x752D;

    // 74B3: JSR $97C2
    cpu.call_function(0x97C2);

    // 74B6: JSR $95A7
    cpu.call_function(0x95A7);

    // 74B9: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 74BC: JSR $859B
    cpu.call_function(0x859B);

    // 74BF: JSR $AE60
    cpu.call_function(0xAE60);

    // 74C2: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 74C5: JSR $B071
    cpu.call_function(0xB071);

    // 74C8: JSR $AEBD
    cpu.call_function(0xAEBD);

    // 74CB: JSR $ADAF
    cpu.call_function(0xADAF);

    // 74CE: JSR $98B0
    cpu.call_function(0x98B0);

    // 74D1: JSR $612F
    cpu.call_function(0x612F);

    // 74D5: JSR $6112
    cpu.call_function(0x6112);

    // 74D8: LDA #$10
    cpu.state_.a = 0x10;

    // 74DA: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 74DD: JSR $7160
    cpu.call_function(0x7160);

    // 74E0: JSR $761D
    cpu.call_function(0x761D);

    // 74E3: LDA $4B3E
    cpu.state_.a = cpu.read_memory(0x4B3E);

    // 74E6: BEQ $00B6
    if (cpu.zero_flag()) cpu.state_.pc = 0x749E;

    // 74E8: LDD #$7100
    cpu.state_.d = 0x7100;

    // 74EB: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 74ED: LDB #$46
    cpu.state_.b = 0x46;

    // 74EF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74F2: JSR $95A7
    cpu.call_function(0x95A7);

    // 74F5: JSR $859B
    cpu.call_function(0x859B);

    // 74F8: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 74FB: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 74FE: BNE $00D3
    if (!cpu.zero_flag()) cpu.state_.pc = 0x74D3;

    // 7500: LDA $4895
    cpu.state_.a = cpu.read_memory(0x4895);

    // 7503: BEQ $00D3
    if (cpu.zero_flag()) cpu.state_.pc = 0x74D8;

    // 7505: LDD #$7100
    cpu.state_.d = 0x7100;

    // 7508: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 750A: LDB #$44
    cpu.state_.b = 0x44;

    // 750C: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 750F: JSR $7707
    cpu.call_function(0x7707);

    // 7512: JSR $98B0
    cpu.call_function(0x98B0);

    // 7515: JSR $612F
    cpu.call_function(0x612F);

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

    // 753A: BGT $011E
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x755A;

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

    // 755F: BGT $0160
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x75C1;

    // 7561: LDA $4845
    cpu.state_.a = cpu.read_memory(0x4845);

    // 7564: BEQ $0160
    if (cpu.zero_flag()) cpu.state_.pc = 0x75C6;

    // 7566: LDA $4592
    cpu.state_.a = cpu.read_memory(0x4592);

    // 7569: ANDA #$03
    cpu.state_.a &= 0x03;

    // 756B: BEQ $0160
    if (cpu.zero_flag()) cpu.state_.pc = 0x75CD;

    // 756D: LDB $4593
    cpu.state_.b = cpu.read_memory(0x4593);

    // 7570: ANDB #$03
    cpu.state_.b &= 0x03;

    // 7572: ADDB #$06
    cpu.state_.b += 0x06;

    // 7574: CMPB <$60
    cpu.compare_b(cpu.read_memory(0x60));

    // 7576: BHI $0140
    // TODO: Convert BHI $0140

    // 7578: LDB #$4A
    cpu.state_.b = 0x4A;

    // 757A: BRA $015D
    cpu.state_.pc = 0x75D9;

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

    // 75A1: BGT $0176
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7619;

    // 75A3: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 75A6: BNE $0176
    if (!cpu.zero_flag()) cpu.state_.pc = 0x761E;

    // 75A8: LDB $4B15
    cpu.state_.b = cpu.read_memory(0x4B15);

    // 75AB: BEQ $0176
    if (cpu.zero_flag()) cpu.state_.pc = 0x7623;

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

    // 75C7: BLE $0190
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7559;

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

    // 763B: LDD #$0000
    cpu.state_.d = 0x0000;

}

} // namespace StarWars