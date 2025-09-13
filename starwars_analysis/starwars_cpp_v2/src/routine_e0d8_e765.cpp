#include "cpu_6809.h"

namespace StarWars {

void routine_e0d8_e765_impl(CPU6809& cpu) {
    // Converted from rom_disasm_e0d8_e765.md
    // Address: 0xE0D8_E765

    // E0D9: BRA $E12E
    goto label_E12E;

    // E0E1: EORB #$53
    cpu.m_b ^= 0x53;

    // E0EA: BRA $E143
    goto label_E143;

    // E0EF: BRA $E133
    goto label_E133;

    // E0F4: ADDD <$53
    cpu.m_d += 0x53;

    // E0FA: BRA $E142
    goto label_E142;

    // E103: ADDD <$53
    cpu.m_d += 0x53;

    // E109: BRA $E15F
    goto label_E15F;

    // E10D: BRA $E155
    goto label_E155;

    // E115: ADDD <$41
    cpu.m_d += 0x41;

    // E11B: BRA $E160
    goto label_E160;

    // E123: ADDD <$55
    cpu.m_d += 0x55;

    // E127: BRA $E17D
    goto label_E17D;

    // E12B: BRA $E173
    goto label_E173;

    // E130: BITB #$20
    // TODO: Convert BITB #$20

    // E135: BRA $E18C
    goto label_E18C;

    // E13B: BRA $E191
    goto label_E191;

    // E13F: BRA $E187
    goto label_E187;

    // E144: BITB #$4F
    // TODO: Convert BITB #$4F

    // E148: BLT $E1A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xE1A1;

    // E14C: BRA $E199
    goto label_E199;

    // E153: BRA $E19E
    goto label_E19E;

    // E156: BRA $E19F
    goto label_E19F;

    // E15B: BRA $E19F
    goto label_E19F;

    label_E15F:
    // E15F: BRA $E1A9
    goto label_E1A9;

    // E162: ADDD <$50
    cpu.m_d += 0x50;

    // E16B: BRA $E1B6
    goto label_E1B6;

    // E16E: BRA $E1B6
    goto label_E1B6;

    label_E173:
    // E173: BRA $E1CC
    goto label_E1CC;

    // E17A: BRA $E1D0
    goto label_E1D0;

    // E17E: BRA $E1C6
    goto label_E1C6;

    // E184: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U

    // E188: BRA $E1CF
    goto label_E1CF;

    // E18F: BEQ $E1E4
    if (cpu.zero_flag()) cpu.m_pc = 0xE1E4;

    label_E191:
    // E191: BRA $E1D7
    goto label_E1D7;

    // E197: BRA $E1EC
    goto label_E1EC;

    // E19C: BGE $E1BE
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1BE;

    // E1A3: BRA $E1F9
    goto label_E1F9;

    // E1A6: BITB #$43
    // TODO: Convert BITB #$43

    // E1AE: BRA $E1FF
    goto label_E1FF;

    // E1B1: BRA $E1F7
    goto label_E1F7;

    // E1B7: BRA $E20F
    goto label_E20F;

    // E1BD: BGE $E1DF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1DF;

    // E1C4: BRA $E21A
    goto label_E21A;

    // E1C7: BITB #$52
    // TODO: Convert BITB #$52

    // E1CD: BRA $E21F
    goto label_E21F;

    // E1D4: BGT $E1F6
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE1F6;

    // E1D6: BRA $E231
    goto label_E231;

    // E1DA: BRA $E229
    goto label_E229;

    // E1DF: BRA $E22B
    goto label_E22B;

    // E1E4: BRA $E23A
    goto label_E23A;

    // E1E7: BITB #$52
    // TODO: Convert BITB #$52

    // E1F1: BRA $E247
    goto label_E247;

    // E1F4: BRA $E249
    goto label_E249;

    label_E1F9:
    // E1F9: BRA $E24F
    goto label_E24F;

    // E1FD: BRA $E244
    goto label_E244;

    // E204: LDX -$C,U
    // TODO: Fix comma operator: LDX -$C,U

    // E208: BRA $E250
    goto label_E250;

    // E20E: BRA $E267
    goto label_E267;

    // E213: BRA $E257
    goto label_E257;

    // E216: BRA $E26F
    goto label_E26F;

    // E21B: BRA $E276
    goto label_E276;

    label_E21F:
    // E21F: LDX $1,U
    // TODO: Fix comma operator: LDX $1,U

    // E225: ADDD <$41
    cpu.m_d += 0x41;

    // E230: BRA $E27B
    goto label_E27B;

    // E23B: LDU #$4155
    cpu.m_u = 0x4155;

    // E23F: BRA $E284
    goto label_E284;

    label_E244:
    // E244: ADDD <$4C
    cpu.m_d += 0x4C;

    label_E249:
    // E249: BRA $E298
    goto label_E298;

    // E24E: BRA $E293
    goto label_E293;

    // E253: ADDD <$52
    cpu.m_d += 0x52;

    // E259: BRA $E2A8
    goto label_E2A8;

    // E25E: BRA $E2A3
    goto label_E2A3;

    // E263: ADDD <$54
    cpu.m_d += 0x54;

    // E269: BRA $E2AE
    goto label_E2AE;

    label_E26F:
    // E26F: BRA $E2C1
    goto label_E2C1;

    // E273: ANDB #$47
    cpu.m_b &= 0x47;

    // E279: BRA $E2CB
    goto label_E2CB;

    // E27F: ANDB #$48
    cpu.m_b &= 0x48;

    label_E284:
    // E284: BRA $E2DD
    goto label_E2DD;

    // E288: BITB #$54
    // TODO: Convert BITB #$54

    // E28E: BRA $E2D7
    goto label_E2D7;

    label_E293:
    // E293: BRA $E2E9
    goto label_E2E9;

    label_E298:
    // E298: BRA $E2BA
    goto label_E2BA;

    // E29A: BRA $E2BC
    goto label_E2BC;

    // E29C: BRA $E2BE
    goto label_E2BE;

    // E29E: BRA $E2C0
    goto label_E2C0;

    // E2A0: BRA $E2C2
    goto label_E2C2;

    // E2A2: BRA $E2F7
    goto label_E2F7;

    // E2A9: ADDD <$41
    cpu.m_d += 0x41;

    // E2B1: BRA $E2FA
    goto label_E2FA;

    // E2B6: BRA $E30C
    goto label_E30C;

    label_E2BA:
    // E2BA: BITB #$54
    // TODO: Convert BITB #$54

    label_E2C0:
    // E2C0: BRA $E316
    goto label_E316;

    // E2C5: BRA $E316
    goto label_E316;

    // E2C8: BRA $E2EA
    goto label_E2EA;

    // E2CA: BRA $E2EC
    goto label_E2EC;

    // E2CC: BRA $E2EE
    goto label_E2EE;

    // E2CE: BRA $E2F0
    goto label_E2F0;

    // E2D0: BRA $E2F2
    goto label_E2F2;

    // E2D2: BRA $E327
    goto label_E327;

    // E2D9: ADDD <$50
    cpu.m_d += 0x50;

    // E2E4: BRA $E335
    goto label_E335;

    // E2E7: BRA $E339
    goto label_E339;

    label_E2EC:
    // E2EC: BRA $E30E
    goto label_E30E;

    label_E2EE:
    // E2EE: BRA $E310
    goto label_E310;

    label_E2F0:
    // E2F0: BRA $E342
    goto label_E342;

    label_E2F7:
    // E2F7: ANDB <$48
    cpu.m_b &= 0x48;

    // E2FF: BRA $E350
    goto label_E350;

    // E302: BRA $E34B
    goto label_E34B;

    // E307: BRA $E35D
    goto label_E35D;

    label_E30C:
    // E30C: ADDD <$47
    cpu.m_d += 0x47;

    // E311: BRA $E362
    goto label_E362;

    // E318: ADDD <$56
    cpu.m_d += 0x56;

    // E31E: BRA $E36F
    goto label_E36F;

    // E321: BRA $E364
    goto label_E364;

    // E323: BRA $E368
    goto label_E368;

    label_E327:
    // E327: LDU #$4C45
    cpu.m_u = 0x4C45;

    // E32C: BRA $E37B
    goto label_E37B;

    // E331: BRA $E389
    goto label_E389;

    // E336: BITB #$52
    // TODO: Convert BITB #$52

    // E33C: BRA $E38B
    goto label_E38B;

    // E341: BRA $E399
    goto label_E399;

    // E346: BITB #$42
    // TODO: Convert BITB #$42

    // E34C: BRA $E38F
    goto label_E38F;

    // E351: SBCB <$53
    // TODO: Convert SBCB <$53

    // E35A: BRA $E3AF
    goto label_E3AF;

    // E360: ANDB #$50
    cpu.m_b &= 0x50;

    // E365: BRA $E3AB
    goto label_E3AB;

    label_E36F:
    // E36F: ADCB <$42
    // TODO: Convert ADCB <$42

    // E375: BRA $E3CA
    goto label_E3CA;

    label_E37B:
    // E37B: ANDB #$4D
    cpu.m_b &= 0x4D;

    // E381: BRA $E3CC
    goto label_E3CC;

    // E384: BRA $E3C7
    goto label_E3C7;

    label_E38B:
    // E38B: ANDB <$52
    cpu.m_b &= 0x52;

    // E391: BRA $E3DB
    goto label_E3DB;

    // E396: BRA $E3EB
    goto label_E3EB;

    // E39C: ADDD <$52
    cpu.m_d += 0x52;

    // E3A2: BRA $E3F8
    goto label_E3F8;

    // E3A9: BRA $E3F4
    goto label_E3F4;

    // E3AD: XSTU #$5245
    // TODO: Convert XSTU #$5245

    // E3B3: BRA $E404
    goto label_E404;

    // E3BA: ADDD <$54
    cpu.m_d += 0x54;

    // E3BF: BRA $E40F
    goto label_E40F;

    // E3C8: BGE $E40E
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE40E;

    // E3CD: BRA $E423
    goto label_E423;

    // E3D0: BRA $E425
    goto label_E425;

    // E3D7: BRA $E422
    goto label_E422;

    // E3E0: BRA $E42E
    goto label_E42E;

    // E3E5: BRA $E42D
    goto label_E42D;

    // E3EA: BRA $E440
    goto label_E440;

    // E3ED: BRA $E432
    goto label_E432;

    label_E3F4:
    // E3F4: BRA $E449
    goto label_E449;

    // E3FB: XSTB #$46
    // TODO: Convert XSTB #$46

    // E400: BRA $E452
    goto label_E452;

    label_E404:
    // E404: ADCB <$32
    // TODO: Convert ADCB <$32

    label_E406:
    // E406: BRA $E44B
    goto label_E44B;

    // E40D: ADDD <$31
    cpu.m_d += 0x31;

    label_E40F:
    // E40F: BRA $E454
    goto label_E454;

    // E415: ANDB <$25
    cpu.m_b &= 0x25;

    // E417: BRA $E45C
    goto label_E45C;

    // E41D: ANDB <$B1
    cpu.m_b &= 0xB1;

    // E41F: SBCA $B1B4
    // TODO: Convert SBCA $B1B4

    label_E422:
    // E422: BITA $B64E
    // TODO: Convert BITA $B64E

    // E427: BITB #$32
    // TODO: Convert BITB #$32

    // E429: BRA $E472
    goto label_E472;

    // E42F: BRA $E3E2
    goto label_E3E2;

    // E431: PSHS Y
    // TODO: Convert PSHS Y

    // E438: BRA $E3EB
    goto label_E3EB;

    // E43A: PSHS Y
    // TODO: Convert PSHS Y

    // E441: BRA $E3F5
    goto label_E3F5;

    // E443: PULS Y
    // TODO: Convert PULS Y

    // E44A: BRA $E3FD
    goto label_E3FD;

    // E44C: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y

    // E453: BRA $E406
    goto label_E406;

    // E458: BITB #$B6
    // TODO: Convert BITB #$B6

    // E45A: STA $B8B9
    cpu.write_memory(0xB8B9, cpu.m_a);

    // E460: ADCB <$4D
    // TODO: Convert ADCB <$4D

    // E468: BITB #$48
    // TODO: Convert BITB #$48

    // E46C: ANDB #$48
    cpu.m_b &= 0x48;

    // E473: ANDB <$B0
    cpu.m_b &= 0xB0;

    // E475: CMPA $B2B3
    cpu.compare_a(cpu.read_memory(0xB2B3));

    // E47A: ADDD <$4E
    cpu.m_d += 0x4E;

    // E47C: XSTU #$4ECF
    // TODO: Convert XSTU #$4ECF

    // E481: ADDD <$4E
    cpu.m_d += 0x4E;

    // E483: XSTU #$5945
    // TODO: Convert XSTU #$5945

    // E486: ADDD <$4E
    cpu.m_d += 0x4E;

    // E488: XSTU #$5945
    // TODO: Convert XSTU #$5945

    // E48B: ADDD <$4E
    cpu.m_d += 0x4E;

    // E48D: XSTU #$5945
    // TODO: Convert XSTU #$5945

    // E490: ADDD <$4E
    cpu.m_d += 0x4E;

    // E493: BRA $E4DA
    goto label_E4DA;

    // E499: ADDD <$45
    cpu.m_d += 0x45;

    // E49F: BRA $E4E2
    goto label_E4E2;

    // E4A1: ANDB <$53
    cpu.m_b &= 0x53;

    // E4A8: BRA $E4FE
    goto label_E4FE;

    // E4AC: ANDB <$4C
    cpu.m_b &= 0x4C;

    // E4B1: BRA $E4F9
    goto label_E4F9;

    // E4B5: BITB #$52
    // TODO: Convert BITB #$52

    // E4BB: BRA $E503
    goto label_E503;

    // E4BF: BITB #$53
    // TODO: Convert BITB #$53

    // E4C5: BRA $E478
    goto label_E478;

    // E4CB: BRA $E521
    goto label_E521;

    // E4CF: ANDB <$53
    cpu.m_b &= 0x53;

    // E4D7: BRA $E51C
    goto label_E51C;

    // E4DB: LDU #$4C45
    cpu.m_u = 0x4C45;

    // E4E0: BRA $E525
    goto label_E525;

    // E4E4: LDU #$5249
    cpu.m_u = 0x5249;

    // E4EA: BRA $E52F
    goto label_E52F;

    // E4EE: LDU #$A04C
    cpu.m_u = 0xA04C;

    // E4F4: BRA $E54A
    goto label_E54A;

    label_E4F9:
    // E4F9: SBCB #$52
    // TODO: Convert SBCB #$52

    // E4FF: BRA $E555
    goto label_E555;

    // E504: SBCB #$53
    // TODO: Convert SBCB #$53

    // E50A: BRA $E4BE
    goto label_E4BE;

    // E50C: SUBA -$10,U
    // TODO: Fix comma operator: SUBA -$10,U

    // E510: BRA $E566
    goto label_E566;

    // E514: ANDB <$48
    cpu.m_b &= 0x48;

    // E51D: BRA $E564
    goto label_E564;

    // E523: ADDD <$4E
    cpu.m_d += 0x4E;

    // E526: BRA $E56D
    goto label_E56D;

    // E52D: BRA $E573
    goto label_E573;

    // E535: ANDB #$50
    cpu.m_b &= 0x50;

    // E53D: BRA $E591
    goto label_E591;

    // E541: BRA $E584
    goto label_E584;

    // E544: BRA $E578
    goto label_E578;

    // E547: EORB #$4D
    cpu.m_b ^= 0x4D;

    // E54C: BRA $E5A0
    goto label_E5A0;

    // E550: BRA $E593
    goto label_E593;

    // E553: BRA $E58A
    goto label_E58A;

    label_E555:
    // E555: LDB #$4D
    cpu.m_b = 0x4D;

    // E55A: BRA $E5AE
    goto label_E5AE;

    // E55E: BRA $E5A1
    goto label_E5A1;

    // E561: BRA $E598
    goto label_E598;

    // E563: EORB #$56
    cpu.m_b ^= 0x56;

    label_E566:
    // E566: BRA $E5BA
    goto label_E5BA;

    // E56A: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E56E: BRA $E5A3
    goto label_E5A3;

    // E570: LDD #$5647
    cpu.m_d = 0x5647;

    label_E573:
    // E573: BRA $E5C7
    goto label_E5C7;

    // E577: LEAY $0,Y
    // TODO: Fix comma operator: LEAY $0,Y

    // E57B: BRA $E5B0
    goto label_E5B0;

    // E580: BRA $E5D4
    goto label_E5D4;

    label_E584:
    // E584: LEAS $0,Y
    // TODO: Fix comma operator: LEAS $0,Y

    // E588: BRA $E5BD
    goto label_E5BD;

    label_E58A:
    // E58A: SUBB <$56
    cpu.m_b -= 0x56;

    // E58D: BRA $E5E1
    goto label_E5E1;

    label_E591:
    // E591: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y

    // E595: BRA $E5CB
    goto label_E5CB;

    // E597: LDD #$5647
    cpu.m_d = 0x5647;

    // E59A: BRA $E5EE
    goto label_E5EE;

    // E59E: PSHS Y
    // TODO: Convert PSHS Y

    // E5A2: BRA $E5D8
    goto label_E5D8;

    // E5A7: BRA $E5FB
    goto label_E5FB;

    // E5AB: PULS Y
    // TODO: Convert PULS Y

    // E5AF: BRA $E5E5
    goto label_E5E5;

    // E5B1: SUBB <$4E
    cpu.m_b -= 0x4E;

    // E5B5: BRA $E60D
    goto label_E60D;

    // E5BE: BRA $E612
    goto label_E612;

    // E5C2: BRA $E605
    goto label_E605;

    // E5C5: BRA $E5F8
    goto label_E5F8;

    label_E5C7:
    // E5C7: BITB #$50
    // TODO: Convert BITB #$50

    // E5CF: BRA $E623
    goto label_E623;

    // E5D3: LEAX $0,Y
    // TODO: Fix comma operator: LEAX $0,Y

    // E5D7: BRA $E60A
    goto label_E60A;

    // E5D9: LDB #$50
    cpu.m_b = 0x50;

    label_E5E1:
    // E5E1: BRA $E635
    goto label_E635;

    label_E5E5:
    // E5E5: LEAY $0,Y
    // TODO: Fix comma operator: LEAY $0,Y

    // E5E9: BRA $E61C
    goto label_E61C;

    // E5EC: ORB #$50
    cpu.m_b |= 0x50;

    // E5F4: BRA $E648
    goto label_E648;

    label_E5F8:
    // E5F8: LEAS $0,Y
    // TODO: Fix comma operator: LEAS $0,Y

    // E5FC: BRA $E62F
    goto label_E62F;

    // E5FF: ADDB #$50
    cpu.m_b += 0x50;

    // E607: BRA $E65B
    goto label_E65B;

    // E60B: LEAU $0,Y
    // TODO: Fix comma operator: LEAU $0,Y

    // E60F: BRA $E642
    goto label_E642;

    label_E612:
    // E612: LDD #$5052
    cpu.m_d = 0x5052;

    // E61A: BRA $E66E
    goto label_E66E;

    // E61E: PSHS Y
    // TODO: Convert PSHS Y

    // E622: BRA $E655
    goto label_E655;

    // E627: BRA $E67B
    goto label_E67B;

    // E62B: BRA $E66E
    goto label_E66E;

    // E62E: BRA $E661
    goto label_E661;

    // E630: LDD #$4D41
    cpu.m_d = 0x4D41;

    // E638: BRA $E68E
    goto label_E68E;

    // E63D: ADDD <$42
    cpu.m_d += 0x42;

    // E641: BRA $E690
    goto label_E690;

    // E649: BRA $E69D
    goto label_E69D;

    // E64F: BRA $E69D
    goto label_E69D;

    // E653: BITB #$44
    // TODO: Convert BITB #$44

    label_E65B:
    // E65B: BRA $E6A2
    goto label_E6A2;

    label_E661:
    // E661: ADDD <$4E
    cpu.m_d += 0x4E;

    // E664: BRA $E6AA
    goto label_E6AA;

    // E66C: BRA $E6B3
    goto label_E6B3;

    // E672: ADDD <$4F
    cpu.m_d += 0x4F;

    // E676: BRA $E6CB
    goto label_E6CB;

    // E679: BRA $E69B
    goto label_E69B;

    label_E67B:
    // E67B: BRA $E69D
    goto label_E69D;

    // E680: BRA $E6C6
    goto label_E6C6;

    // E684: BRA $E6CA
    goto label_E6CA;

    // E688: BRA $E6D3
    goto label_E6D3;

    // E68B: BRA $E6D2
    goto label_E6D2;

    label_E690:
    // E690: SBCB <$4D
    // TODO: Convert SBCB <$4D

    // E697: BRA $E6DE
    goto label_E6DE;

    label_E69D:
    // E69D: ADDD <$4E
    cpu.m_d += 0x4E;

    // E6A0: BRA $E6EF
    goto label_E6EF;

    // E6A7: BRA $E6EE
    goto label_E6EE;

    // E6AD: ADDD <$42
    cpu.m_d += 0x42;

    // E6B1: BRA $E707
    goto label_E707;

    // E6B5: ANDB <$41
    cpu.m_b &= 0x41;

    // E6BB: BRA $E711
    goto label_E711;

    // E6BF: BRA $E703
    goto label_E703;

    // E6C4: ADDD <$53
    cpu.m_d += 0x53;

    label_E6CA:
    // E6CA: BRA $E720
    goto label_E720;

    // E6CE: ANDB <$4C
    cpu.m_b &= 0x4C;

    // E6D4: SBCB <$4C
    // TODO: Convert SBCB <$4C

    // E6DB: BRA $E71E
    goto label_E71E;

    // E6DF: BRA $E723
    goto label_E723;

    // E6E5: ADCB <$30
    // TODO: Convert ADCB <$30

    // E6E7: BGT $E709
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE709;

    // E6EB: LDB #$31
    cpu.m_b = 0x31;

    // E6ED: BGT $E70F
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE70F;

    // E6F2: LEAS $E,Y
    // TODO: Fix comma operator: LEAS $E,Y

    // E6F4: BRA $E742
    goto label_E742;

    // E6F7: STB <$33
    cpu.write_memory(0x33, cpu.m_b);

    // E6F9: BGT $E71B
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xE71B;

    // E6FE: EORB #$49
    cpu.m_b ^= 0x49;

    // E708: BRA $E75E
    goto label_E75E;

    // E70C: ANDB <$50
    cpu.m_b &= 0x50;

    // E712: BRA $E755
    goto label_E755;

    // E716: BRA $E75B
    goto label_E75B;

    // E71B: BRA $E771
    goto label_E771;

    label_E71E:
    // E71E: BRA $E763
    goto label_E763;

    // E726: BITB #$50
    // TODO: Convert BITB #$50

    // E72C: BRA $E76F
    goto label_E76F;

    // E730: BRA $E775
    goto label_E775;

    // E735: BRA $E77D
    goto label_E77D;

    // E739: BRA $E78E
    goto label_E78E;

    // E73E: BRA $E794
    goto label_E794;

    label_E742:
    // E742: ANDB <$50
    cpu.m_b &= 0x50;

    // E747: BRA $E79B
    goto label_E79B;

    // E74D: BRA $E795
    goto label_E795;

    // E752: BRA $E7A8
    goto label_E7A8;

    label_E755:
    // E755: BRA $E7A7
    goto label_E7A7;

    // E75D: BRA $E7B1
    goto label_E7B1;

    label_E763:
    // E763: ADDD <$A6
    cpu.m_d += 0xA6;

    // E765: JMP $e764
    goto label_E764;

}

} // namespace StarWars