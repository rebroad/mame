#include "cpu_6809.h"

namespace StarWars {

void routine_7390_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_7390.md
    // Address: 0x7390

    // 7390: JSR $6112
    cpu.call_function(0x6112);

    // 7393: LDA #$10
    cpu.state_.a = 0x10;

    // 7395: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7398: JSR $7160
    cpu.call_function(0x7160);

    // 739B: JSR $761D
    cpu.call_function(0x761D);

    // 739E: JSR $768D
    cpu.call_function(0x768D);

    // 73A1: JSR $95A7
    cpu.call_function(0x95A7);

    // 73A4: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 73A7: JSR $CD8C
    cpu.call_function(0xCD8C);

    // 73AA: JSR $AE60
    cpu.call_function(0xAE60);

    // 73AD: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 73B0: JSR $A214
    cpu.call_function(0xA214);

    // 73B3: JSR $B2D2
    cpu.call_function(0xB2D2);

    // 73B6: JSR $AEBD
    cpu.call_function(0xAEBD);

    // 73B9: JSR $BA12
    cpu.call_function(0xBA12);

    // 73BC: JSR $98B0
    cpu.call_function(0x98B0);

    // 73BF: JSR $612F
    cpu.call_function(0x612F);

    // 73C3: JSR $6112
    cpu.call_function(0x6112);

    // 73C6: LDA #$10
    cpu.state_.a = 0x10;

    // 73C8: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 73CB: JSR $7160
    cpu.call_function(0x7160);

    // 73CE: JSR $761D
    cpu.call_function(0x761D);

    // 73D1: JSR $768D
    cpu.call_function(0x768D);

    // 73D4: JSR $95A7
    cpu.call_function(0x95A7);

    // 73D7: JSR $CD8C
    cpu.call_function(0xCD8C);

    // 73DA: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 73DD: JSR $A214
    cpu.call_function(0xA214);

    // 73E0: JSR $7707
    cpu.call_function(0x7707);

    // 73E3: JSR $98B0
    cpu.call_function(0x98B0);

    // 73E6: JSR $612F
    cpu.call_function(0x612F);

    // 73EA: JSR $6112
    cpu.call_function(0x6112);

    // 73ED: LDA #$10
    cpu.state_.a = 0x10;

    // 73EF: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 73F2: JSR $7160
    cpu.call_function(0x7160);

    // 73F5: JSR $761D
    cpu.call_function(0x761D);

    // 73F8: JSR $76D3
    cpu.call_function(0x76D3);

    // 73FB: LDB #$4F
    cpu.state_.b = 0x4F;

    // 73FD: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7400: JSR $95A7
    cpu.call_function(0x95A7);

    // 7403: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 7406: JSR $CD8C
    cpu.call_function(0xCD8C);

    // 7409: JSR $BA12
    cpu.call_function(0xBA12);

    // 740C: JSR $98B0
    cpu.call_function(0x98B0);

    // 740F: JSR $612F
    cpu.call_function(0x612F);

    // 7413: JSR $6112
    cpu.call_function(0x6112);

    // 7416: LDA #$10
    cpu.state_.a = 0x10;

    // 7418: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 741B: JSR $7160
    cpu.call_function(0x7160);

    // 741E: JSR $761D
    cpu.call_function(0x761D);

    // 7421: JSR $76D3
    cpu.call_function(0x76D3);

    // 7424: LDB #$4F
    cpu.state_.b = 0x4F;

    // 7426: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7429: JSR $95A7
    cpu.call_function(0x95A7);

    // 742C: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 742F: JSR $859B
    cpu.call_function(0x859B);

    // 7432: JSR $BA12
    cpu.call_function(0xBA12);

    // 7435: JSR $98B0
    cpu.call_function(0x98B0);

    // 7438: JSR $612F
    cpu.call_function(0x612F);

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

    // 744F: BHI $00D4
    // TODO: Convert BHI $00D4

    // 7451: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7453: BNE $00CA
    if (!cpu.zero_flag()) cpu.state_.pc = 0x751F;

    // 7455: JSR $76D3
    cpu.call_function(0x76D3);

    // 7458: BRA $00D4
    cpu.state_.pc = 0x752E;

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

    // 7467: BNE $0101
    if (!cpu.zero_flag()) cpu.state_.pc = 0x756A;

    // 7469: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 746C: CMPA #$08
    cpu.compare_a(0x08);

    // 746E: BHI $0101
    // TODO: Convert BHI $0101

    // 7470: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7472: BNE $0101
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7575;

    // 7474: LDA $4B35
    cpu.state_.a = cpu.read_memory(0x4B35);

    // 7477: BNE $0101
    if (!cpu.zero_flag()) cpu.state_.pc = 0x757A;

    // 7479: LDA $4B12
    cpu.state_.a = cpu.read_memory(0x4B12);

    // 747C: BNE $00F2
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7570;

    // 747E: LDB #$4C
    cpu.state_.b = 0x4C;

    // 7480: BRA $00FE
    cpu.state_.pc = 0x7580;

    // 7482: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 7484: ANDA #$10
    cpu.state_.a &= 0x10;

    // 7486: BNE $00FC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7584;

    // 7488: LDB #$4C
    cpu.state_.b = 0x4C;

    // 748A: BRA $00FE
    cpu.state_.pc = 0x758A;

    // 748C: LDB #$4E
    cpu.state_.b = 0x4E;

    // 748E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7491: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 7494: BNE $0115
    if (!cpu.zero_flag()) cpu.state_.pc = 0x75AB;

    // 7496: LDA $4895
    cpu.state_.a = cpu.read_memory(0x4895);

    // 7499: BEQ $0115
    if (cpu.zero_flag()) cpu.state_.pc = 0x75B0;

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

    // 74A8: BLT $0126
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x75D0;

    // 74AA: BNE $0123
    if (!cpu.zero_flag()) cpu.state_.pc = 0x75CF;

    // 74AC: LDB #$4F
    cpu.state_.b = 0x4F;

    // 74AE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74B1: BRA $0126
    cpu.state_.pc = 0x75D9;

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

    // 74E6: BEQ $0162
    if (cpu.zero_flag()) cpu.state_.pc = 0x764A;

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

    // 74FE: BNE $017F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x767F;

    // 7500: LDA $4895
    cpu.state_.a = cpu.read_memory(0x4895);

    // 7503: BEQ $017F
    if (cpu.zero_flag()) cpu.state_.pc = 0x7684;

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

    // 753A: BGT $01CA
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x7706;

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

    // 755F: BGT $020C
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.state_.pc = 0x776D;

    // 7561: LDA $4845
    cpu.state_.a = cpu.read_memory(0x4845);

    // 7564: BEQ $020C
    if (cpu.zero_flag()) cpu.state_.pc = 0x7772;

    // 7566: LDA $4592
    cpu.state_.a = cpu.read_memory(0x4592);

    // 7569: ANDA #$03
    cpu.state_.a &= 0x03;

    // 756B: BEQ $020C
    if (cpu.zero_flag()) cpu.state_.pc = 0x7779;

    // 756D: LDB $4593
    cpu.state_.b = cpu.read_memory(0x4593);

    // 7570: ANDB #$03
    cpu.state_.b &= 0x03;

    // 7572: ADDB #$06
    cpu.state_.b += 0x06;

    // 7574: CMPB <$60
    cpu.compare_b(cpu.read_memory(0x60));

    // 7576: BHI $01EC
    // TODO: Convert BHI $01EC

    // 7578: LDB #$4A
    cpu.state_.b = 0x4A;

    // 757A: BRA $0209
    cpu.state_.pc = 0x7785;

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

    // 758F: JSR >$0000
    cpu.call_function(0x0000);

}

} // namespace StarWars