#include "cpu_6809.h"

namespace StarWars {

void routine_6819_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6819.md
    // Address: 0x6819

    // 6819: TFR Y,U
    cpu.m_u = cpu.m_y;

    // 681B: XNC <$86
    // TODO: Convert XNC <$86

    // 681D: TFR DP,inv
    cpu.m_inv = cpu.m_dp;

    // 6821: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 6824: CMPA #$0F
    cpu.compare_a(0x0F);

    // 6826: BLS $682A
    // TODO: Convert BLS $682A

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

    // 684F: BNE $6857
    if (!cpu.zero_flag()) cpu.m_pc = 0x6857;

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

    // 685E: LBMI $6C76
    // TODO: Convert LBMI $6C76

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

    // 688F: BNE $68A6
    if (!cpu.zero_flag()) cpu.m_pc = 0x68A6;

    // 6891: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 6894: CMPA #$03
    cpu.compare_a(0x03);

    // 6896: BLT $68A1
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x68A1;

    // 6898: ANDA #$01
    cpu.m_a &= 0x01;

    // 689A: BEQ $68A1
    if (cpu.zero_flag()) cpu.m_pc = 0x68A1;

    // 689C: JSR $BD85
    cpu.call_function(0xBD85);

    // 689F: BRA $68A4
    cpu.m_pc = 0x68A4;

    // 68A1: JSR $BDA8
    cpu.call_function(0xBDA8);

    // 68A4: BRA $68C6
    cpu.m_pc = 0x68C6;

    // 68A6: CMPD #$00C8
    // TODO: Convert CMPD #$00C8

    // 68AA: BNE $68B1
    if (!cpu.zero_flag()) cpu.m_pc = 0x68B1;

    // 68AC: JSR $BDAD
    cpu.call_function(0xBDAD);

    // 68AF: BRA $68C6
    cpu.m_pc = 0x68C6;

    // 68B1: CMPD #$0190
    // TODO: Convert CMPD #$0190

    // 68B5: BNE $68BC
    if (!cpu.zero_flag()) cpu.m_pc = 0x68BC;

    // 68B7: JSR $BD8A
    cpu.call_function(0xBD8A);

    // 68BA: BRA $68C6
    cpu.m_pc = 0x68C6;

    // 68BC: CMPD #$01A4
    // TODO: Convert CMPD #$01A4

    // 68C0: BCS $68C6
    if (cpu.carry_flag()) cpu.m_pc = 0x68C6;

    // 68C2: LDA #$21
    cpu.m_a = 0x21;

    // 68C4: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 68C6: LDA <$E6
    cpu.m_a = cpu.read_memory(0xE6);

    // 68C8: CMPA #$03
    cpu.compare_a(0x03);

    // 68CA: BCC $68CF
    if (!cpu.carry_flag()) cpu.m_pc = 0x68CF;

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

    // 68DA: LBMI $6C76
    // TODO: Convert LBMI $6C76

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

    // 6903: BNE $6911
    if (!cpu.zero_flag()) cpu.m_pc = 0x6911;

    // 6905: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6908: CMPX #$494B
    cpu.compare_x(0x494B);

    // 690B: BCS $6901
    if (cpu.carry_flag()) cpu.m_pc = 0x6901;

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

    // 691F: BNE $692A
    if (!cpu.zero_flag()) cpu.m_pc = 0x692A;

    // 6921: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 6924: CMPA #$04
    cpu.compare_a(0x04);

    // 6926: BNE $692A
    if (!cpu.zero_flag()) cpu.m_pc = 0x692A;

    // 6928: BRA $6930
    cpu.m_pc = 0x6930;

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

    // 694C: BLT $6952
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0x6952;

    // 694E: LDA #$25
    cpu.m_a = 0x25;

    // 6950: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6953: LDA $4B2D
    cpu.m_a = cpu.read_memory(0x4B2D);

    // 6956: BNE $6962
    if (!cpu.zero_flag()) cpu.m_pc = 0x6962;

    // 6958: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 695B: CMPA #$04
    cpu.compare_a(0x04);

    // 695D: BNE $6962
    if (!cpu.zero_flag()) cpu.m_pc = 0x6962;

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

    // 6988: BHI $6997
    // TODO: Convert BHI $6997

    // 698A: LDA $4B14
    cpu.m_a = cpu.read_memory(0x4B14);

    // 698D: BNE $6993
    if (!cpu.zero_flag()) cpu.m_pc = 0x6993;

    // 698F: LDA #$27
    cpu.m_a = 0x27;

    // 6991: BRA $6995
    cpu.m_pc = 0x6995;

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

    // 69A2: BHI $69A6
    // TODO: Convert BHI $69A6

    // 69A4: LDA #$00
    cpu.m_a = 0x00;

    // 69A6: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 69A9: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);

    // 69AD: CMPA #$1F
    cpu.compare_a(0x1F);

    // 69AF: BCS $69B3
    if (cpu.carry_flag()) cpu.m_pc = 0x69B3;

    // 69B1: LDA #$1F
    cpu.m_a = 0x1F;

    // 69B3: STA $4B13
    cpu.write_memory(0x4B13, cpu.m_a);

    // 69B6: ADDA $4B18
    cpu.m_a += 0x4B18;

    // 69B9: CMPA #$0F
    cpu.compare_a(0x0F);

    // 69BB: BLS $69BF
    // TODO: Convert BLS $69BF

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

    // 69D6: STD $5098
    cpu.write_memory16(0x5098, cpu.m_d);

    // 69D9: LDD #$2000
    cpu.m_d = 0x2000;

    // 69DC: STD $509C
    cpu.write_memory16(0x509C, cpu.m_d);

    // 69DF: LDA #$00
    cpu.m_a = 0x00;

    // 69E1: STA <$A7
    cpu.write_memory(0xA7, cpu.m_a);

    // 69E3: STA $4B35
    cpu.write_memory(0x4B35, cpu.m_a);

    // 69E6: STA $4B3D
    cpu.write_memory(0x4B3D, cpu.m_a);

    // 69E9: LDA #$00
    cpu.m_a = 0x00;

    // 69EB: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.m_a);

    // 69EE: JSR $BD94
    cpu.call_function(0xBD94);

    // 69F1: INC <$41
    // TODO: Convert INC <$41

    // 69F4: JSR $7390
    cpu.call_function(0x7390);

    // 69F7: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);

    // 69F9: LBMI $6CB6
    // TODO: Convert LBMI $6CB6

    // 69FD: JSR $A849
    cpu.call_function(0xA849);

    // 6A00: JSR $9890
    cpu.call_function(0x9890);

    // 6A03: JSR $9558
    cpu.call_function(0x9558);

    // 6A06: JSR $B98B
    cpu.call_function(0xB98B);

    // 6A09: JSR $70DB
    cpu.call_function(0x70DB);

    // 6A0C: JSR $6E22
    cpu.call_function(0x6E22);

    // 6A0F: LDA #$10
    cpu.m_a = 0x10;

    // 6A11: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6A14: JSR $6F6F
    cpu.call_function(0x6F6F);

    // 6A17: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

}

} // namespace StarWars