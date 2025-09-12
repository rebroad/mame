#include "cpu_6809.h"

namespace StarWars {

void routine_72c7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_72c7.md
    // Address: 0x72C7

    // 72C7: JSR $6112
    cpu.call_function(0x6112);

    // 72CA: LDA #$10
    cpu.state_.a = 0x10;

    // 72CC: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 72CF: JSR $7160
    cpu.call_function(0x7160);

    // 72D2: JSR $761D
    cpu.call_function(0x761D);

    // 72D5: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 72D8: BNE $0029
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7303;

    // 72DA: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 72DD: CMPD #$00A0
    // TODO: Convert CMPD #$00A0

    // 72E1: BCC $0029
    if (!cpu.carry_flag()) cpu.state_.pc = 0x730C;

    // 72E3: ANDB #$10
    cpu.state_.b &= 0x10;

    // 72E5: BNE $0024
    if (!cpu.zero_flag()) cpu.state_.pc = 0x730B;

    // 72E7: LDB #$4C
    cpu.state_.b = 0x4C;

    // 72E9: BRA $0026
    cpu.state_.pc = 0x7311;

    // 72EB: LDB #$4D
    cpu.state_.b = 0x4D;

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
    cpu.state_.a = 0x10;

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
    cpu.state_.a = 0x10;

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
    cpu.state_.a = 0x10;

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

    // 744F: BHI $019D
    // TODO: Convert BHI $019D

    // 7451: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7453: BNE $0193
    if (!cpu.zero_flag()) cpu.state_.pc = 0x73E8;

    // 7455: JSR $76D3
    cpu.call_function(0x76D3);

    // 7458: BRA $019D
    cpu.state_.pc = 0x73F7;

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

    // 7467: BNE $01CA
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7433;

    // 7469: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 746C: CMPA #$08
    cpu.compare_a(0x08);

    // 746E: BHI $01CA
    // TODO: Convert BHI $01CA

    // 7470: LDA <$98
    cpu.state_.a = cpu.read_memory(0x98);

    // 7472: BNE $01CA
    if (!cpu.zero_flag()) cpu.state_.pc = 0x743E;

    // 7474: LDA $4B35
    cpu.state_.a = cpu.read_memory(0x4B35);

    // 7477: BNE $01CA
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7443;

    // 7479: LDA $4B12
    cpu.state_.a = cpu.read_memory(0x4B12);

    // 747C: BNE $01BB
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7439;

    // 747E: LDB #$4C
    cpu.state_.b = 0x4C;

    // 7480: BRA $01C7
    cpu.state_.pc = 0x7449;

    // 7482: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 7484: ANDA #$10
    cpu.state_.a &= 0x10;

    // 7486: BNE $01C5
    if (!cpu.zero_flag()) cpu.state_.pc = 0x744D;

    // 7488: LDB #$4C
    cpu.state_.b = 0x4C;

    // 748A: BRA $01C7
    cpu.state_.pc = 0x7453;

    // 748C: LDB #$4E
    cpu.state_.b = 0x4E;

    // 748E: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 7491: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 7494: BNE $01DE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7474;

    // 7496: LDA $4895
    cpu.state_.a = cpu.read_memory(0x4895);

    // 7499: BEQ $01DE
    if (cpu.zero_flag()) cpu.state_.pc = 0x7479;

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

    // 74A8: BLT $01EF
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x7499;

    // 74AA: BNE $01EC
    if (!cpu.zero_flag()) cpu.state_.pc = 0x7498;

    // 74AC: LDB #$4F
    cpu.state_.b = 0x4F;

    // 74AE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 74B1: BRA $01EF
    cpu.state_.pc = 0x74A2;

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

    // 74C5: JSR $B000
    cpu.call_function(0xB000);

}

} // namespace StarWars