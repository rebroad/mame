#include "cpu_6809.h"

namespace StarWars {

void routine_73ea_impl(CPU6809& cpu) {
    // Converted from rom_disasm_73ea.md
    // Address: 0x73EA

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

    // 744F: BHI $007A
    // TODO: Convert BHI $007A

    // 7451: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // 7453: BNE $0070
    if (!cpu.zero_flag()) cpu.m_pc = 0x74C5;

    // 7455: JSR $76D3
    cpu.call_function(0x76D3);

    // 7458: BRA $007A
    cpu.m_pc = 0x74D4;

    // 745A: LDD #$7100
    cpu.m_d = 0x7100;

    // 745D: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 745F: LDB #$46
    cpu.m_b = 0x46;

    // 7461: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7464: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 7467: BNE $00A7
    if (!cpu.zero_flag()) cpu.m_pc = 0x7410;

    // 7469: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 746C: CMPA #$08
    cpu.compare_a(0x08);

    // 746E: BHI $00A7
    // TODO: Convert BHI $00A7

    // 7470: LDA <$98
    cpu.m_a = cpu.read_memory(0x98);

    // 7472: BNE $00A7
    if (!cpu.zero_flag()) cpu.m_pc = 0x741B;

    // 7474: LDA $4B35
    cpu.m_a = cpu.read_memory(0x4B35);

    // 7477: BNE $00A7
    if (!cpu.zero_flag()) cpu.m_pc = 0x7420;

    // 7479: LDA $4B12
    cpu.m_a = cpu.read_memory(0x4B12);

    // 747C: BNE $0098
    if (!cpu.zero_flag()) cpu.m_pc = 0x7416;

    // 747E: LDB #$4C
    cpu.m_b = 0x4C;

    // 7480: BRA $00A4
    cpu.m_pc = 0x7426;

    // 7482: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 7484: ANDA #$10
    cpu.m_a &= 0x10;

    // 7486: BNE $00A2
    if (!cpu.zero_flag()) cpu.m_pc = 0x742A;

    // 7488: LDB #$4C
    cpu.m_b = 0x4C;

    // 748A: BRA $00A4
    cpu.m_pc = 0x7430;

    // 748C: LDB #$4E
    cpu.m_b = 0x4E;

    // 748E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7491: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 7494: BNE $00BB
    if (!cpu.zero_flag()) cpu.m_pc = 0x7451;

    // 7496: LDA $4895
    cpu.m_a = cpu.read_memory(0x4895);

    // 7499: BEQ $00BB
    if (cpu.zero_flag()) cpu.m_pc = 0x7456;

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

    // 74A8: BLT $00CC
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x7476;

    // 74AA: BNE $00C9
    if (!cpu.zero_flag()) cpu.m_pc = 0x7475;

    // 74AC: LDB #$4F
    cpu.m_b = 0x4F;

    // 74AE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74B1: BRA $00CC
    cpu.m_pc = 0x747F;

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
    cpu.m_a = 0x10;

    // 74DA: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 74DD: JSR $7160
    cpu.call_function(0x7160);

    // 74E0: JSR $761D
    cpu.call_function(0x761D);

    // 74E3: LDA $4B3E
    cpu.m_a = cpu.read_memory(0x4B3E);

    // 74E6: BEQ $0108
    if (cpu.zero_flag()) cpu.m_pc = 0x74F0;

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

    // 74FE: BNE $0125
    if (!cpu.zero_flag()) cpu.m_pc = 0x7525;

    // 7500: LDA $4895
    cpu.m_a = cpu.read_memory(0x4895);

    // 7503: BEQ $0125
    if (cpu.zero_flag()) cpu.m_pc = 0x752A;

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

    // 753A: BGT $0170
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x75AC;

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

    // 755F: BGT $01B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x7513;

    // 7561: LDA $4845
    cpu.m_a = cpu.read_memory(0x4845);

    // 7564: BEQ $01B2
    if (cpu.zero_flag()) cpu.m_pc = 0x7518;

    // 7566: LDA $4592
    cpu.m_a = cpu.read_memory(0x4592);

    // 7569: ANDA #$03
    cpu.m_a &= 0x03;

    // 756B: BEQ $01B2
    if (cpu.zero_flag()) cpu.m_pc = 0x751F;

    // 756D: LDB $4593
    cpu.m_b = cpu.read_memory(0x4593);

    // 7570: ANDB #$03
    cpu.m_b &= 0x03;

    // 7572: ADDB #$06
    cpu.m_b += 0x06;

    // 7574: CMPB <$60
    cpu.compare_b(cpu.read_memory(0x60));

    // 7576: BHI $0192
    // TODO: Convert BHI $0192

    // 7578: LDB #$4A
    cpu.m_b = 0x4A;

    // 757A: BRA $01AF
    cpu.m_pc = 0x752B;

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

    // 7599: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 759C: LDA $4B0E
    cpu.m_a = cpu.read_memory(0x4B0E);

    // 759F: CMPA #$00
    cpu.compare_a(0x00);

    // 75A1: BGT $01C8
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0x756B;

    // 75A3: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 75A6: BNE $01C8
    if (!cpu.zero_flag()) cpu.m_pc = 0x7570;

    // 75A8: LDB $4B15
    cpu.m_b = cpu.read_memory(0x4B15);

    // 75AB: BEQ $01C8
    if (cpu.zero_flag()) cpu.m_pc = 0x7575;

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

    // 75C7: BLE $01E2
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x75AB;

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

}

} // namespace StarWars