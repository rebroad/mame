#include "cpu_6809.h"

namespace StarWars {

void routine_67d4_impl(CPU6809& cpu) {
    // Converted from rom_disasm_67d4.md
    // Address: 0x67D4

    // 67D4: ORCC #$10
    cpu.m_cc |= 0x10;

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
    cpu.m_a = 0xC0;

    // 67F0: STA $5080
    cpu.write_memory(0x5080, cpu.m_a);

    // 67F3: STA $508A
    cpu.write_memory(0x508A, cpu.m_a);

    // 67F6: LDA #$00
    cpu.m_a = 0x00;

    // 67F8: STA $4813
    cpu.write_memory(0x4813, cpu.m_a);

    // 67FB: INC <$41
    // TODO: Convert INC <$41

    // 67FD: LDA #$1D
    cpu.m_a = 0x1D;

    // 67FF: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6802: JSR $7A5A
    cpu.call_function(0x7A5A);

    // 6805: LDX #$0008
    cpu.m_x = 0x0008;

    // 6808: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 680C: JSR $7720
    cpu.call_function(0x7720);

    // 680F: LDA $4AD6
    cpu.m_a = cpu.read_memory(0x4AD6);

    // 6812: STA $4B16
    cpu.write_memory(0x4B16, cpu.m_a);

    // 6815: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6818: CMPA #$1F
    cpu.compare_a(0x1F);

    // 681A: BLS $004A
    // TODO: Convert BLS $004A

    // 681C: LDA #$1F
    cpu.m_a = 0x1F;

    // 681E: STA $4B14
    cpu.write_memory(0x4B14, cpu.m_a);

    // 6821: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 6824: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6826: BLS $0056
    // TODO: Convert BLS $0056

    // 6828: LDA #$0F
    cpu.m_a = 0x0F;

    // 682A: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);

    // 682D: INC <$41
    // TODO: Convert INC <$41

    // 682F: LDA #$1F
    cpu.m_a = 0x1F;

    // 6831: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6833: LDA #$00
    cpu.m_a = 0x00;

    // 6835: STA <$DD
    cpu.write_memory(0xDD, cpu.m_a);

    // 6838: JSR $6161
    cpu.call_function(0x6161);

    // 683B: JSR $B939
    cpu.call_function(0xB939);

    // 683E: LDD #$0000
    cpu.m_d = 0x0000;

    // 6841: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6844: STA $4B3B
    cpu.write_memory(0x4B3B, cpu.m_a);

    // 6847: LDA #$09
    cpu.m_a = 0x09;

    // 6849: STA $4B3C
    cpu.write_memory(0x4B3C, cpu.m_a);

    // 684C: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 684F: BNE $0083
    if (!cpu.zero_flag()) cpu.m_pc = 0x67D4;

    // 6851: LDD #$0027
    cpu.m_d = 0x0027;

    // 6854: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6857: INC <$41
    // TODO: Convert INC <$41

    // 6859: JSR $72C7
    cpu.call_function(0x72C7);

    // 685C: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 685E: LBMI $04A2
    // TODO: Convert LBMI $04A2

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
    cpu.m_a = 0x10;

    // 687C: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 687F: JSR $6F5F
    cpu.call_function(0x6F5F);

    // 6882: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6885: ADDD #$0001
    cpu.m_d += 0x0001;

    // 6888: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 688B: CMPD #$0028
    // TODO: Convert CMPD #$0028

    // 688F: BNE $00D2
    if (!cpu.zero_flag()) cpu.m_pc = 0x6863;

    // 6891: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6894: CMPA #$03
    cpu.compare_a(0x03);

    // 6896: BLT $00CD
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6865;

    // 6898: ANDA #$01
    cpu.m_a &= 0x01;

    // 689A: BEQ $00CD
    if (cpu.zero_flag()) cpu.m_pc = 0x6869;

    // 689C: JSR $BD85
    cpu.call_function(0xBD85);

    // 689F: BRA $00D0
    cpu.m_pc = 0x6871;

    // 68A1: JSR $BDA8
    cpu.call_function(0xBDA8);

    // 68A4: BRA $00F2
    cpu.m_pc = 0x6898;

    // 68A6: CMPD #$00C8
    // TODO: Convert CMPD #$00C8

    // 68AA: BNE $00DD
    if (!cpu.zero_flag()) cpu.m_pc = 0x6889;

    // 68AC: JSR $BDAD
    cpu.call_function(0xBDAD);

    // 68AF: BRA $00F2
    cpu.m_pc = 0x68A3;

    // 68B1: CMPD #$0190
    // TODO: Convert CMPD #$0190

    // 68B5: BNE $00E8
    if (!cpu.zero_flag()) cpu.m_pc = 0x689F;

    // 68B7: JSR $BD8A
    cpu.call_function(0xBD8A);

    // 68BA: BRA $00F2
    cpu.m_pc = 0x68AE;

    // 68BC: CMPD #$01A4
    // TODO: Convert CMPD #$01A4

    // 68C0: BCS $00F2
    if (cpu.carry_flag()) cpu.m_pc = 0x68B4;

    // 68C2: LDA #$21
    cpu.m_a = 0x21;

    // 68C4: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 68C6: LDA <$E6
    cpu.m_a = cpu.read_memory(0xE6);

    // 68C8: CMPA #$03
    cpu.compare_a(0x03);

    // 68CA: BCC $00FB
    if (!cpu.carry_flag()) cpu.m_pc = 0x68C7;

    // 68CC: JSR $8F7B
    cpu.call_function(0x8F7B);

    // 68D0: INC $4B3B
    // TODO: Convert INC $4B3B

    // 68D3: INC <$41
    // TODO: Convert INC <$41

    // 68D5: JSR $72C7
    cpu.call_function(0x72C7);

    // 68D8: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 68DA: LBMI $04A2
    // TODO: Convert LBMI $04A2

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
    cpu.m_a = 0x10;

    // 68F8: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 68FB: JSR $6F5F
    cpu.call_function(0x6F5F);

    // 68FE: LDX #$4900
    cpu.m_x = 0x4900;

    // 6901: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X

    // 6903: BNE $013D
    if (!cpu.zero_flag()) cpu.m_pc = 0x6942;

    // 6905: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6908: CMPX #$494B
    cpu.compare_x(0x494B);

    // 690B: BCS $012D
    if (cpu.carry_flag()) cpu.m_pc = 0x693A;

    // 690D: LDA #$23
    cpu.m_a = 0x23;

    // 690F: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6912: LDD #$7780
    cpu.m_d = 0x7780;

    // 6915: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6917: LDD #$0100
    cpu.m_d = 0x0100;

    // 691A: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 691C: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 691F: BNE $0156
    if (!cpu.zero_flag()) cpu.m_pc = 0x6977;

    // 6921: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 6924: CMPA #$04
    cpu.compare_a(0x04);

    // 6926: BNE $0156
    if (!cpu.zero_flag()) cpu.m_pc = 0x697E;

    // 6928: BRA $015C
    cpu.m_pc = 0x6986;

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
    cpu.m_d = cpu.read_memory16(0x5080);

    // 6948: CMPD #$3F00
    // TODO: Convert CMPD #$3F00

    // 694C: BLT $017E
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x69CC;

    // 694E: LDA #$25
    cpu.m_a = 0x25;

    // 6950: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6953: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 6956: BNE $018E
    if (!cpu.zero_flag()) cpu.m_pc = 0x68E6;

    // 6958: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 695B: CMPA #$04
    cpu.compare_a(0x04);

    // 695D: BNE $018E
    if (!cpu.zero_flag()) cpu.m_pc = 0x68ED;

    // 695F: JSR $BD53
    cpu.call_function(0xBD53);

    // 6962: JSR $BE0C
    cpu.call_function(0xBE0C);

    // 6965: INC <$41
    // TODO: Convert INC <$41

    // 6968: JSR $736F
    cpu.call_function(0x736F);

    // 696B: JSR $9898
    cpu.call_function(0x9898);

    // 696E: JSR $9890
    cpu.call_function(0x9890);

    // 6971: JSR $9558
    cpu.call_function(0x9558);

    // 6974: JSR $6DD2
    cpu.call_function(0x6DD2);

    // 6977: JSR $6F67
    cpu.call_function(0x6F67);

    // 697A: LDB <$58
    cpu.m_b = cpu.read_memory(0x58);

    // 697E: ADDD <$56
    cpu.m_d += 0x56;

    // 6980: ANDB #$7F
    cpu.m_b &= 0x7F;

    // 6982: STD <$56
    cpu.write_memory16(0x56, cpu.m_d);

    // 6984: CMPD #$7310
    // TODO: Convert CMPD #$7310

    // 6988: BHI $01C3
    // TODO: Convert BHI $01C3

    // 698A: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 698D: BNE $01BF
    if (!cpu.zero_flag()) cpu.m_pc = 0x694E;

    // 698F: LDA #$27
    cpu.m_a = 0x27;

    // 6991: BRA $01C1
    cpu.m_pc = 0x6954;

    // 6993: LDA #$29
    cpu.m_a = 0x29;

    // 6995: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6997: LDD <$58
    cpu.m_d = cpu.read_memory16(0x58);

    // 6999: ADDD #$0060
    cpu.m_d += 0x0060;

    // 699C: STD <$58
    cpu.write_memory16(0x58, cpu.m_d);

    // 699E: LDA <$83
    cpu.m_a = cpu.read_memory(0x83);

    // 69A0: SUBA #$02
    cpu.m_a -= 0x02;

    // 69A2: BHI $01D2
    // TODO: Convert BHI $01D2

    // 69A4: LDA #$00
    cpu.m_a = 0x00;

    // 69A6: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 69A9: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 69AD: CMPA #$1F
    cpu.compare_a(0x1F);

    // 69AF: BCS $01DF
    if (cpu.carry_flag()) cpu.m_pc = 0x6990;

    // 69B1: LDA #$1F
    cpu.m_a = 0x1F;

    // 69B3: STA $4B13
    cpu.write_memory(0x4B13, cpu.m_a);

    // 69B6: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 69B9: CMPA #$0F
    cpu.compare_a(0x0F);

    // 69BB: BLS $01EB
    // TODO: Convert BLS $01EB

    // 69BD: LDA #$0F
    cpu.m_a = 0x0F;

    // 69BF: STA $4B19
    cpu.write_memory(0x4B19, cpu.m_a);

    // 69C2: JSR $615A
    cpu.call_function(0x615A);

    // 69C5: JSR $620F
    cpu.call_function(0x620F);

    // 69C8: JSR $A1CE
    cpu.call_function(0xA1CE);

    // 69CB: JSR $B939
    cpu.call_function(0xB939);

    // 69CE: LDD #$0100
    cpu.m_d = 0x0100;

    // 69D1: STD $5086
    cpu.write_memory16(0x5086, cpu.m_d);

}

} // namespace StarWars