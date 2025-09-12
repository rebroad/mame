#include "cpu_6809.h"

namespace StarWars {

void routine_6761_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6761.md
    // Address: 0x6761

    // 6761: JSR $ADBD
    cpu.call_function(0xADBD);

    // 6764: EORA [$99C4,PCR]
    // TODO: Complex indexed addressing: [$99C4,PCR]

    // 6768: ANDA <$BD
    cpu.state_.a &= 0xBD;

    // 676A: BITA #$BD
    // TODO: Convert BITA #$BD

    // 676C: NEG -$E,X
    // TODO: Convert NEG -$E,X

    // 676E: JSR $CD80
    cpu.call_function(0xCD80);

    // 6771: JSR $D9FA
    cpu.call_function(0xD9FA);

    // 6774: JSR $D985
    cpu.call_function(0xD985);

    // 6777: JSR $63D5
    cpu.call_function(0x63D5);

    // 677A: JSR $761D
    cpu.call_function(0x761D);

    // 677D: JSR $612F
    cpu.call_function(0x612F);

    // 6780: JSR $6DA5
    cpu.call_function(0x6DA5);

    // 6783: JSR $622D
    cpu.call_function(0x622D);

    // 6787: LDA #$05
    cpu.state_.a = 0x05;

    // 6789: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.a);

    // 678C: LDA #$FF
    cpu.state_.a = 0xFF;

    // 678E: STA $4B34
    cpu.write_memory(0x4B34, cpu.state_.a);

    // 6791: JSR $D91A
    cpu.call_function(0xD91A);

    // 6794: JSR $BD44
    cpu.call_function(0xBD44);

    // 6797: INC <$41
    // TODO: Convert INC <$41

    // 679A: LDA #$0D
    cpu.state_.a = 0x0D;

    // 679C: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 679E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 67A1: STD <$42
    cpu.write_memory(0x42, cpu.state_.d);

    // 67A3: STA <$DD
    cpu.write_memory(0xDD, cpu.state_.a);

    // 67A5: LDA $4593
    cpu.state_.a = cpu.read_memory(0x4593);

    // 67A8: ANDA #$03
    cpu.state_.a &= 0x03;

    // 67AA: ADDA #$06
    cpu.state_.a += 0x06;

    // 67AC: STA <$60
    cpu.write_memory(0x60, cpu.state_.a);

    // 67AE: STA <$8E
    cpu.write_memory(0x8E, cpu.state_.a);

    // 67B0: LDA $4593
    cpu.state_.a = cpu.read_memory(0x4593);

    // 67B5: ANDA #$03
    cpu.state_.a &= 0x03;

    // 67B7: STA $4B18
    cpu.write_memory(0x4B18, cpu.state_.a);

    // 67BA: LDA #$00
    cpu.state_.a = 0x00;

    // 67BC: STA $4B17
    cpu.write_memory(0x4B17, cpu.state_.a);

    // 67BF: STA <$8B
    cpu.write_memory(0x8B, cpu.state_.a);

    // 67C1: STA <$8C
    cpu.write_memory(0x8C, cpu.state_.a);

    // 67C3: STA <$5C
    cpu.write_memory(0x5C, cpu.state_.a);

    // 67C5: STA <$5D
    cpu.write_memory(0x5D, cpu.state_.a);

    // 67C7: STA <$5E
    cpu.write_memory(0x5E, cpu.state_.a);

    // 67C9: STA <$5F
    cpu.write_memory(0x5F, cpu.state_.a);

    // 67CB: STA $4B2D
    cpu.write_memory(0x4B2D, cpu.state_.a);

    // 67CE: STA $4B37
    cpu.write_memory(0x4B37, cpu.state_.a);

    // 67D1: STA $4B35
    cpu.write_memory(0x4B35, cpu.state_.a);

    // 67D4: ORCC #$10
    cpu.state_.cc |= 0x10;

    // 67D6: INC $486F
    // TODO: Convert INC $486F

    // 67D9: INC $4866
    // TODO: Convert INC $4866

    // 67DC: INC $4871
    // TODO: Convert INC $4871

    // 67DF: INC $4868
    // TODO: Convert INC $4868

    // 67E2: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 67E5: JSR $61B5
    cpu.call_function(0x61B5);

    // 67E8: JSR $615A
    cpu.call_function(0x615A);

    // 67EB: JSR $61EC
    cpu.call_function(0x61EC);

    // 67EE: LDA #$C0
    cpu.state_.a = 0xC0;

    // 67F0: STA $5080
    cpu.write_memory(0x5080, cpu.state_.a);

    // 67F3: STA $508A
    cpu.write_memory(0x508A, cpu.state_.a);

    // 67F6: LDA #$00
    cpu.state_.a = 0x00;

    // 67F8: STA $4813
    cpu.write_memory(0x4813, cpu.state_.a);

    // 67FB: INC <$41
    // TODO: Convert INC <$41

    // 67FD: LDA #$1D
    cpu.state_.a = 0x1D;

    // 67FF: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6802: JSR $7A5A
    cpu.call_function(0x7A5A);

    // 6805: LDX #$0008
    cpu.state_.x = 0x0008;

    // 6808: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 680C: JSR $7720
    cpu.call_function(0x7720);

    // 680F: LDA $4AD6
    cpu.state_.a = cpu.read_memory(0x4AD6);

    // 6812: STA $4B16
    cpu.write_memory(0x4B16, cpu.state_.a);

    // 6815: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 6818: CMPA #$1F
    cpu.compare_a(0x1F);

    // 681A: BLS $00BD
    // TODO: Convert BLS $00BD

    // 681C: LDA #$1F
    cpu.state_.a = 0x1F;

    // 681E: STA $4B14
    cpu.write_memory(0x4B14, cpu.state_.a);

    // 6821: ADDA $4B18
    cpu.state_.a += 0x4B18;

    // 6824: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6826: BLS $00C9
    // TODO: Convert BLS $00C9

    // 6828: LDA #$0F
    cpu.state_.a = 0x0F;

    // 682A: STA $4B19
    cpu.write_memory(0x4B19, cpu.state_.a);

    // 682D: INC <$41
    // TODO: Convert INC <$41

    // 682F: LDA #$1F
    cpu.state_.a = 0x1F;

    // 6831: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6833: LDA #$00
    cpu.state_.a = 0x00;

    // 6835: STA <$DD
    cpu.write_memory(0xDD, cpu.state_.a);

    // 6838: JSR $6161
    cpu.call_function(0x6161);

    // 683B: JSR $B939
    cpu.call_function(0xB939);

    // 683E: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6841: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6844: STA $4B3B
    cpu.write_memory(0x4B3B, cpu.state_.a);

    // 6847: LDA #$09
    cpu.state_.a = 0x09;

    // 6849: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.state_.a);

    // 684C: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 684F: BNE $00F6
    if (!cpu.zero_flag()) cpu.state_.pc += 0x00F6;

    // 6851: LDD #$0027
    cpu.state_.d = 0x0027;

    // 6854: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6857: INC <$41
    // TODO: Convert INC <$41

    // 6859: JSR $72C7
    cpu.call_function(0x72C7);

    // 685C: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 685E: LBMI $0515
    // TODO: Convert LBMI $0515

    // 6862: JSR $A849
    cpu.call_function(0xA849);

    // 6865: JSR $9898
    cpu.call_function(0x9898);

    // 6868: JSR $B98B
    cpu.call_function(0xB98B);

    // 686B: JSR $9890
    cpu.call_function(0x9890);

    // 686E: JSR $9558
    cpu.call_function(0x9558);

    // 6871: JSR $8B6D
    cpu.call_function(0x8B6D);

    // 6874: JSR $70DB
    cpu.call_function(0x70DB);

    // 6877: JSR $6DD2
    cpu.call_function(0x6DD2);

    // 687A: LDA #$10
    cpu.state_.a = 0x10;

    // 687C: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 687F: JSR $6F5F
    cpu.call_function(0x6F5F);

    // 6882: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 6885: ADDD #$0001
    cpu.state_.d += 0x0001;

    // 6888: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 688B: CMPD #$0028
    // TODO: Convert CMPD #$0028

    // 688F: BNE $0145
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0145;

    // 6891: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 6894: CMPA #$03
    cpu.compare_a(0x03);

    // 6896: BLT $0140
    // TODO: Convert BLT $0140

    // 6898: ANDA #$01
    cpu.state_.a &= 0x01;

    // 689A: BEQ $0140
    if (cpu.zero_flag()) cpu.state_.pc += 0x0140;

    // 689C: JSR $BD85
    cpu.call_function(0xBD85);

    // 689F: BRA $0143
    cpu.state_.pc += 0x0143;

    // 68A1: JSR $BDA8
    cpu.call_function(0xBDA8);

    // 68A4: BRA $0165
    cpu.state_.pc += 0x0165;

    // 68A6: CMPD #$00C8
    // TODO: Convert CMPD #$00C8

    // 68AA: BNE $0150
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0150;

    // 68AC: JSR $BDAD
    cpu.call_function(0xBDAD);

    // 68AF: BRA $0165
    cpu.state_.pc += 0x0165;

    // 68B1: CMPD #$0190
    // TODO: Convert CMPD #$0190

    // 68B5: BNE $015B
    if (!cpu.zero_flag()) cpu.state_.pc += 0x015B;

    // 68B7: JSR $BD8A
    cpu.call_function(0xBD8A);

    // 68BA: BRA $0165
    cpu.state_.pc += 0x0165;

    // 68BC: CMPD #$01A4
    // TODO: Convert CMPD #$01A4

    // 68C0: BCS $0165
    if (cpu.carry_flag()) cpu.state_.pc += 0x0165;

    // 68C2: LDA #$21
    cpu.state_.a = 0x21;

    // 68C4: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 68C6: LDA <$E6
    cpu.state_.a = cpu.read_memory(0xE6);

    // 68C8: CMPA #$03
    cpu.compare_a(0x03);

    // 68CA: BCC $016E
    if (!cpu.carry_flag()) cpu.state_.pc += 0x016E;

    // 68CC: JSR $8F7B
    cpu.call_function(0x8F7B);

    // 68D0: INC $4B3B
    // TODO: Convert INC $4B3B

    // 68D3: INC <$41
    // TODO: Convert INC <$41

    // 68D5: JSR $72C7
    cpu.call_function(0x72C7);

    // 68D8: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 68DA: LBMI $0515
    // TODO: Convert LBMI $0515

    // 68DE: JSR $A849
    cpu.call_function(0xA849);

    // 68E1: JSR $9898
    cpu.call_function(0x9898);

    // 68E4: JSR $B98B
    cpu.call_function(0xB98B);

    // 68E7: JSR $9890
    cpu.call_function(0x9890);

    // 68EA: JSR $9558
    cpu.call_function(0x9558);

    // 68ED: JSR $8B86
    cpu.call_function(0x8B86);

    // 68F0: JSR $70DB
    cpu.call_function(0x70DB);

    // 68F3: JSR $6DFA
    cpu.call_function(0x6DFA);

    // 68F6: LDA #$10
    cpu.state_.a = 0x10;

    // 68F8: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 68FB: JSR $6F5F
    cpu.call_function(0x6F5F);

    // 68FE: LDX #$4900
    cpu.state_.x = 0x4900;

    // 6901: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6903: BNE $01B0
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01B0;

    // 6905: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6908: CMPX #$494B
    cpu.compare_x(0x494B);

    // 690B: BCS $01A0
    if (cpu.carry_flag()) cpu.state_.pc += 0x01A0;

    // 690D: LDA #$23
    cpu.state_.a = 0x23;

    // 690F: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6912: LDD #$7780
    cpu.state_.d = 0x7780;

    // 6915: STD <$56
    cpu.write_memory(0x56, cpu.state_.d);

    // 6917: LDD #$0100
    cpu.state_.d = 0x0100;

    // 691A: STD <$58
    cpu.write_memory(0x58, cpu.state_.d);

    // 691C: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 691F: BNE $01C9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01C9;

    // 6921: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 6924: CMPA #$04
    cpu.compare_a(0x04);

    // 6926: BNE $01C9
    if (!cpu.zero_flag()) cpu.state_.pc += 0x01C9;

    // 6928: BRA $01CF
    cpu.state_.pc += 0x01CF;

    // 692A: JSR $BD67
    cpu.call_function(0xBD67);

    // 692D: JSR $BDEE
    cpu.call_function(0xBDEE);

    // 6930: INC <$41
    // TODO: Convert INC <$41

    // 6933: JSR $733C
    cpu.call_function(0x733C);

    // 6936: JSR $B98B
    cpu.call_function(0xB98B);

    // 6939: JSR $9890
    cpu.call_function(0x9890);

    // 693C: JSR $9558
    cpu.call_function(0x9558);

    // 693F: JSR $6DD2
    cpu.call_function(0x6DD2);

    // 6942: JSR $6F67
    cpu.call_function(0x6F67);

    // 6945: LDD $5080
    cpu.state_.d = cpu.read_memory_word(0x5080);

    // 6948: CMPD #$3F00
    // TODO: Convert CMPD #$3F00

    // 694C: BLT $01F1
    // TODO: Convert BLT $01F1

    // 694E: LDA #$25
    cpu.state_.a = 0x25;

    // 6950: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6953: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 6956: BNE $0201
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0201;

    // 6958: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 695B: CMPA #$04
    cpu.compare_a(0x04);

    // 695D: BNE $0201
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0201;

    // 695F: JSR $BD00
    cpu.call_function(0xBD00);

}

} // namespace StarWars