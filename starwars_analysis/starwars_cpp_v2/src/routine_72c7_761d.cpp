#include "cpu_6809.h"

namespace StarWars {

void routine_72c7_761d_impl(CPU6809& cpu) {
    // Converted from rom_disasm_72c7_761d.md
    // Address: 0x72C7_761D

    label_72C7:
    // 72C7: JSR $6112
    cpu.call_function(0x6112);

    // 72CA: LDA #$10
    cpu.m_a = 0x10;

    // 72CC: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 72CF: JSR $7160
    cpu.call_function(0x7160);

    // 72D2: JSR $761D
    cpu.call_function(0x761D);

    // 72D5: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 72D8: BNE $72F0
    if (!cpu.zero_flag()) cpu.m_pc = 0x72F0;

    // 72DA: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 72DD: CMPD #$00A0
    // TODO: Convert CMPD #$00A0

    // 72E1: BCC $72F0
    if (!cpu.carry_flag()) cpu.m_pc = 0x72F0;

    // 72E3: ANDB #$10
    cpu.m_b &= 0x10;

    // 72E5: BNE $72EB
    if (!cpu.zero_flag()) cpu.m_pc = 0x72EB;

    // 72E7: LDB #$4C
    cpu.m_b = 0x4C;

    // 72E9: BRA $72ED
    goto label_72ED;

    // 72EB: LDB #$4D
    cpu.m_b = 0x4D;

    label_72ED:
    // 72ED: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 72F0: JSR $95A7
    cpu.call_function(0x95A7);

    // 72F3: JSR $7765
    cpu.call_function(0x7765);

    // 72F6: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 72F9: JSR $CD80
    cpu.call_function(0xCD80);

    // 72FC: JSR $BA12
    cpu.call_function(0xBA12);

    // 72FF: JSR $AE60
    cpu.call_function(0xAE60);

    // 7302: JSR $786A
    cpu.call_function(0x786A);

    // 7305: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 7308: JSR $B32B
    cpu.call_function(0xB32B);

    // 730B: JSR $AEBD
    cpu.call_function(0xAEBD);

    // 730E: JSR $98B0
    cpu.call_function(0x98B0);

    // 7311: JSR $612F
    cpu.call_function(0x612F);

    // 7315: JSR $6112
    cpu.call_function(0x6112);

    // 7318: LDA #$10
    cpu.m_a = 0x10;

    // 731A: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 731D: JSR $7160
    cpu.call_function(0x7160);

    // 7320: JSR $761D
    cpu.call_function(0x761D);

    // 7323: JSR $95A7
    cpu.call_function(0x95A7);

    // 7326: JSR $CD80
    cpu.call_function(0xCD80);

    // 7329: JSR $BA12
    cpu.call_function(0xBA12);

    // 732C: JSR $786A
    cpu.call_function(0x786A);

    // 732F: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 7332: JSR $7707
    cpu.call_function(0x7707);

    // 7335: JSR $98B0
    cpu.call_function(0x98B0);

    // 7338: JSR $612F
    cpu.call_function(0x612F);

    // 733C: JSR $6112
    cpu.call_function(0x6112);

    // 733F: LDA #$10
    cpu.m_a = 0x10;

    // 7341: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7344: JSR $7160
    cpu.call_function(0x7160);

    // 7347: JSR $761D
    cpu.call_function(0x761D);

    // 734A: JSR $95A7
    cpu.call_function(0x95A7);

    // 734D: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 7350: JSR $CD80
    cpu.call_function(0xCD80);

    // 7353: JSR $7765
    cpu.call_function(0x7765);

    // 7356: JSR $BA12
    cpu.call_function(0xBA12);

    // 7359: JSR $AE60
    cpu.call_function(0xAE60);

    // 735C: JSR $786A
    cpu.call_function(0x786A);

    // 735F: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 7362: JSR $B32B
    cpu.call_function(0xB32B);

    // 7365: JSR $AEBD
    cpu.call_function(0xAEBD);

    // 7368: JSR $98B0
    cpu.call_function(0x98B0);

    // 736B: JSR $612F
    cpu.call_function(0x612F);

    // 736F: JSR $6112
    cpu.call_function(0x6112);

    // 7372: LDA #$10
    cpu.m_a = 0x10;

    // 7374: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7377: JSR $7160
    cpu.call_function(0x7160);

    // 737A: JSR $761D
    cpu.call_function(0x761D);

    // 737D: JSR $95A7
    cpu.call_function(0x95A7);

    // 7380: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 7383: JSR $CD80
    cpu.call_function(0xCD80);

    // 7386: JSR $77A4
    cpu.call_function(0x77A4);

    // 7389: JSR $98B0
    cpu.call_function(0x98B0);

    // 738C: JSR $612F
    cpu.call_function(0x612F);

    // 7390: JSR $6112
    cpu.call_function(0x6112);

    // 7393: LDA #$10
    cpu.m_a = 0x10;

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
    cpu.m_a = 0x10;

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
    cpu.m_a = 0x10;

    // 73EF: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 73F2: JSR $7160
    cpu.call_function(0x7160);

    // 73F5: JSR $761D
    cpu.call_function(0x761D);

    // 73F8: JSR $76D3
    cpu.call_function(0x76D3);

    // 73FB: LDB #$4F
    cpu.m_b = 0x4F;

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
    cpu.m_a = 0x10;

    // 7418: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 741B: JSR $7160
    cpu.call_function(0x7160);

    // 741E: JSR $761D
    cpu.call_function(0x761D);

    // 7421: JSR $76D3
    cpu.call_function(0x76D3);

    // 7424: LDB #$4F
    cpu.m_b = 0x4F;

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
    cpu.m_a = 0x10;

    // 7441: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 7444: JSR $7160
    cpu.call_function(0x7160);

    // 7447: JSR $761D
    cpu.call_function(0x761D);

    // 744A: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 744D: CMPA #$04
    cpu.compare_a(0x04);

    // 744F: BHI $7464
    // TODO: Convert BHI $7464

    // 7451: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // 7453: BNE $745A
    if (!cpu.zero_flag()) cpu.m_pc = 0x745A;

    // 7455: JSR $76D3
    cpu.call_function(0x76D3);

    // 7458: BRA $7464
    goto label_7464;

    // 745A: LDD #$7100
    cpu.m_d = 0x7100;

    // 745D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 745F: LDB #$46
    cpu.m_b = 0x46;

    // 7461: JSR $E7C7
    cpu.call_function(0xE7C7);

    label_7464:
    // 7464: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 7467: BNE $7491
    if (!cpu.zero_flag()) cpu.m_pc = 0x7491;

    // 7469: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 746C: CMPA #$08
    cpu.compare_a(0x08);

    // 746E: BHI $7491
    // TODO: Convert BHI $7491

    // 7470: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // 7472: BNE $7491
    if (!cpu.zero_flag()) cpu.m_pc = 0x7491;

    // 7474: LDA $4B35
    cpu.m_a = cpu.read_memory(0x4B35);

    // 7477: BNE $7491
    if (!cpu.zero_flag()) cpu.m_pc = 0x7491;

    // 7479: LDA $4B12
    cpu.m_a = cpu.read_memory(0x4B12);

    // 747C: BNE $7482
    if (!cpu.zero_flag()) cpu.m_pc = 0x7482;

    // 747E: LDB #$4C
    cpu.m_b = 0x4C;

    // 7480: BRA $748E
    goto label_748E;

    // 7482: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 7484: ANDA #$10
    cpu.m_a &= 0x10;

    // 7486: BNE $748C
    if (!cpu.zero_flag()) cpu.m_pc = 0x748C;

    // 7488: LDB #$4C
    cpu.m_b = 0x4C;

    // 748A: BRA $748E
    goto label_748E;

    // 748C: LDB #$4E
    cpu.m_b = 0x4E;

    label_748E:
    // 748E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7491: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 7494: BNE $74A5
    if (!cpu.zero_flag()) cpu.m_pc = 0x74A5;

    // 7496: LDA $4895
    cpu.m_a = cpu.read_memory(0x4895);

    // 7499: BEQ $74A5
    if (cpu.zero_flag()) cpu.m_pc = 0x74A5;

    // 749B: LDD #$7100
    cpu.m_d = 0x7100;

    // 749E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 74A0: LDB #$44
    cpu.m_b = 0x44;

    // 74A2: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74A5: LDA $4B36
    cpu.m_a = cpu.read_memory(0x4B36);

    // 74A8: BLT $74B6
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x74B6;

    // 74AA: BNE $74B3
    if (!cpu.zero_flag()) cpu.m_pc = 0x74B3;

    // 74AC: LDB #$4F
    cpu.m_b = 0x4F;

    // 74AE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74B1: BRA $74B6
    goto label_74B6;

    // 74B3: JSR $97C2
    cpu.call_function(0x97C2);

    label_74B6:
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
    cpu.m_a = 0x10;

    // 74DA: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 74DD: JSR $7160
    cpu.call_function(0x7160);

    // 74E0: JSR $761D
    cpu.call_function(0x761D);

    // 74E3: LDA $4B3E
    cpu.m_a = cpu.read_memory(0x4B3E);

    // 74E6: BEQ $74F2
    if (cpu.zero_flag()) cpu.m_pc = 0x74F2;

    // 74E8: LDD #$7100
    cpu.m_d = 0x7100;

    // 74EB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 74ED: LDB #$46
    cpu.m_b = 0x46;

    // 74EF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74F2: JSR $95A7
    cpu.call_function(0x95A7);

    // 74F5: JSR $859B
    cpu.call_function(0x859B);

    // 74F8: JSR $AAE4
    cpu.call_function(0xAAE4);

    // 74FB: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 74FE: BNE $750F
    if (!cpu.zero_flag()) cpu.m_pc = 0x750F;

    // 7500: LDA $4895
    cpu.m_a = cpu.read_memory(0x4895);

    // 7503: BEQ $750F
    if (cpu.zero_flag()) cpu.m_pc = 0x750F;

    // 7505: LDD #$7100
    cpu.m_d = 0x7100;

    // 7508: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 750A: LDB #$44
    cpu.m_b = 0x44;

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
    cpu.m_a = 0x10;

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
    cpu.m_b = 0x45;

    // 7532: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7535: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 7538: CMPA #$02
    cpu.compare_a(0x02);

    // 753A: BGT $755A
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x755A;

    // 753C: LDB #$47
    cpu.m_b = 0x47;

    // 753E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7541: LDB #$48
    cpu.m_b = 0x48;

    // 7543: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7546: LDD #$0090
    cpu.m_d = 0x0090;

    // 7549: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 754B: LDD #$0070
    cpu.m_d = 0x0070;

    // 754E: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 7550: LDA <$8E
    cpu.m_a = cpu.read_memory(0x8E);

    // 7552: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 7555: LDD #$8040
    cpu.m_d = 0x8040;

    // 7558: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 755A: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 755D: CMPA #$01
    cpu.compare_a(0x01);

    // 755F: BGT $759C
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x759C;

    // 7561: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 7564: BEQ $759C
    if (cpu.zero_flag()) cpu.m_pc = 0x759C;

    // 7566: LDA $4592
    cpu.m_a = cpu.read_memory(0x4592);

    // 7569: ANDA #$03
    cpu.m_a &= 0x03;

    // 756B: BEQ $759C
    if (cpu.zero_flag()) cpu.m_pc = 0x759C;

    // 756D: LDB $4593
    cpu.m_b = cpu.read_memory(0x4593);

    // 7570: ANDB #$03
    cpu.m_b &= 0x03;

    // 7572: ADDB #$06
    cpu.m_b += 0x06;

    // 7574: CMPB <$60
    cpu.compare_b(cpu.read_memory(0x60));

    // 7576: BHI $757C
    // TODO: Convert BHI $757C

    // 7578: LDB #$4A
    cpu.m_b = 0x4A;

    // 757A: BRA $7599
    goto label_7599;

    // 757C: LDU #$A01A
    cpu.m_u = 0xA01A;

    // 757F: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 7581: LDU #$0048
    cpu.m_u = 0x0048;

    // 7584: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 7586: LDU #$1EC0
    cpu.m_u = 0x1EC0;

    // 7589: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // 758B: LDB #$01
    cpu.m_b = 0x01;

    // 758D: STB <$AD
    cpu.write_memory(0xAD, cpu.m_b);

    // 758F: JSR $E7AD
    cpu.call_function(0xE7AD);

    // 7592: LDD #$8040
    cpu.m_d = 0x8040;

    // 7595: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 7597: LDB #$49
    cpu.m_b = 0x49;

    label_7599:
    // 7599: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 759C: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 759F: CMPA #$00
    cpu.compare_a(0x00);

    // 75A1: BGT $75B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x75B2;

    // 75A3: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 75A6: BNE $75B2
    if (!cpu.zero_flag()) cpu.m_pc = 0x75B2;

    // 75A8: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);

    // 75AB: BEQ $75B2
    if (cpu.zero_flag()) cpu.m_pc = 0x75B2;

    // 75AD: LDB #$4B
    cpu.m_b = 0x4B;

    // 75AF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 75B2: JSR $98B0
    cpu.call_function(0x98B0);

    // 75B5: JSR $612F
    cpu.call_function(0x612F);

    // 75B9: JSR $6112
    cpu.call_function(0x6112);

    // 75BC: LDA #$10
    cpu.m_a = 0x10;

    // 75BE: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 75C1: JSR $761D
    cpu.call_function(0x761D);

    // 75C4: LDA $4B36
    cpu.m_a = cpu.read_memory(0x4B36);

    // 75C7: BLE $75CC
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x75CC;

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
    cpu.m_a = 0x10;

    // 75DE: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 75E1: JSR $761D
    cpu.call_function(0x761D);

    // 75E4: JSR $95A7
    cpu.call_function(0x95A7);

    // 75E7: JSR $B6B9
    cpu.call_function(0xB6B9);

    // 75EA: LDD #$1F98
    cpu.m_d = 0x1F98;

    // 75ED: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 75EF: LDD #$0000
    cpu.m_d = 0x0000;

    // 75F2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 75F4: LDD #$7200
    cpu.m_d = 0x7200;

    // 75F7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 75F9: LDD #$BE50
    cpu.m_d = 0xBE50;

    // 75FC: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 75FE: LDD #$7200
    cpu.m_d = 0x7200;

    // 7601: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

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

    label_761D:
    // 761D: JMP $761d
    goto label_761D;

}

} // namespace StarWars