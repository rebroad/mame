#include "cpu_6809.h"

namespace StarWars {

void routine_6864_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_6864.md
    // Address: 0x6864

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

    // 688F: BNE $0042
    if (!cpu.zero_flag()) cpu.state_.pc = 0x68D3;

    // 6891: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 6894: CMPA #$03
    cpu.compare_a(0x03);

    // 6896: BLT $003D
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x68D5;

    // 6898: ANDA #$01
    cpu.state_.a &= 0x01;

    // 689A: BEQ $003D
    if (cpu.zero_flag()) cpu.state_.pc = 0x68D9;

    // 689C: JSR $BD85
    cpu.call_function(0xBD85);

    // 689F: BRA $0040
    cpu.state_.pc = 0x68E1;

    // 68A1: JSR $BDA8
    cpu.call_function(0xBDA8);

    // 68A4: BRA $0062
    cpu.state_.pc = 0x6908;

    // 68A6: CMPD #$00C8
    // TODO: Convert CMPD #$00C8

    // 68AA: BNE $004D
    if (!cpu.zero_flag()) cpu.state_.pc = 0x68F9;

    // 68AC: JSR $BDAD
    cpu.call_function(0xBDAD);

    // 68AF: BRA $0062
    cpu.state_.pc = 0x6913;

    // 68B1: CMPD #$0190
    // TODO: Convert CMPD #$0190

    // 68B5: BNE $0058
    if (!cpu.zero_flag()) cpu.state_.pc = 0x690F;

    // 68B7: JSR $BD8A
    cpu.call_function(0xBD8A);

    // 68BA: BRA $0062
    cpu.state_.pc = 0x691E;

    // 68BC: CMPD #$01A4
    // TODO: Convert CMPD #$01A4

    // 68C0: BCS $0062
    if (cpu.carry_flag()) cpu.state_.pc = 0x6924;

    // 68C2: LDA #$21
    cpu.state_.a = 0x21;

    // 68C4: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 68C6: LDA <$E6
    cpu.state_.a = cpu.read_memory(0xE6);

    // 68C8: CMPA #$03
    cpu.compare_a(0x03);

    // 68CA: BCC $006B
    if (!cpu.carry_flag()) cpu.state_.pc = 0x6937;

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

    // 68DA: LBMI $0412
    // TODO: Convert LBMI $0412

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

    // 6903: BNE $00AD
    if (!cpu.zero_flag()) cpu.state_.pc = 0x68B2;

    // 6905: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6908: CMPX #$494B
    cpu.compare_x(0x494B);

    // 690B: BCS $009D
    if (cpu.carry_flag()) cpu.state_.pc = 0x68AA;

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

    // 691F: BNE $00C6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x68E7;

    // 6921: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 6924: CMPA #$04
    cpu.compare_a(0x04);

    // 6926: BNE $00C6
    if (!cpu.zero_flag()) cpu.state_.pc = 0x68EE;

    // 6928: BRA $00CC
    cpu.state_.pc = 0x68F6;

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

    // 694C: BLT $00EE
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.state_.pc = 0x693C;

    // 694E: LDA #$25
    cpu.state_.a = 0x25;

    // 6950: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6953: LDA $4B2D
    cpu.state_.a = cpu.read_memory(0x4B2D);

    // 6956: BNE $00FE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6956;

    // 6958: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 695B: CMPA #$04
    cpu.compare_a(0x04);

    // 695D: BNE $00FE
    if (!cpu.zero_flag()) cpu.state_.pc = 0x695D;

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
    cpu.state_.b = cpu.read_memory(0x58);

    // 697E: ADDD <$56
    cpu.state_.d += 0x56;

    // 6980: ANDB #$7F
    cpu.state_.b &= 0x7F;

    // 6982: STD <$56
    cpu.write_memory(0x56, cpu.state_.d);

    // 6984: CMPD #$7310
    // TODO: Convert CMPD #$7310

    // 6988: BHI $0133
    // TODO: Convert BHI $0133

    // 698A: LDA $4B14
    cpu.state_.a = cpu.read_memory(0x4B14);

    // 698D: BNE $012F
    if (!cpu.zero_flag()) cpu.state_.pc = 0x69BE;

    // 698F: LDA #$27
    cpu.state_.a = 0x27;

    // 6991: BRA $0131
    cpu.state_.pc = 0x69C4;

    // 6993: LDA #$29
    cpu.state_.a = 0x29;

    // 6995: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6997: LDD <$58
    cpu.state_.d = cpu.read_memory_word(0x58);

    // 6999: ADDD #$0060
    cpu.state_.d += 0x0060;

    // 699C: STD <$58
    cpu.write_memory(0x58, cpu.state_.d);

    // 699E: LDA <$83
    cpu.state_.a = cpu.read_memory(0x83);

    // 69A0: SUBA #$02
    cpu.state_.a -= 0x02;

    // 69A2: BHI $0142
    // TODO: Convert BHI $0142

    // 69A4: LDA #$00
    cpu.state_.a = 0x00;

    // 69A6: STA <$83
    cpu.write_memory(0x83, cpu.state_.a);

    // 69A9: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 69AD: CMPA #$1F
    cpu.compare_a(0x1F);

    // 69AF: BCS $014F
    if (cpu.carry_flag()) cpu.state_.pc = 0x6A00;

    // 69B1: LDA #$1F
    cpu.state_.a = 0x1F;

    // 69B3: STA $4B13
    cpu.write_memory(0x4B13, cpu.state_.a);

    // 69B6: ADDA $4B18
    cpu.state_.a += 0x4B18;

    // 69B9: CMPA #$0F
    cpu.compare_a(0x0F);

    // 69BB: BLS $015B
    // TODO: Convert BLS $015B

    // 69BD: LDA #$0F
    cpu.state_.a = 0x0F;

    // 69BF: STA $4B19
    cpu.write_memory(0x4B19, cpu.state_.a);

    // 69C2: JSR $615A
    cpu.call_function(0x615A);

    // 69C5: JSR $620F
    cpu.call_function(0x620F);

    // 69C8: JSR $A1CE
    cpu.call_function(0xA1CE);

    // 69CB: JSR $B939
    cpu.call_function(0xB939);

    // 69CE: LDD #$0100
    cpu.state_.d = 0x0100;

    // 69D1: STD $5086
    cpu.write_memory(0x5086, cpu.state_.d);

    // 69D6: STD $5098
    cpu.write_memory(0x5098, cpu.state_.d);

    // 69D9: LDD #$2000
    cpu.state_.d = 0x2000;

    // 69DC: STD $509C
    cpu.write_memory(0x509C, cpu.state_.d);

    // 69DF: LDA #$00
    cpu.state_.a = 0x00;

    // 69E1: STA <$A7
    cpu.write_memory(0xA7, cpu.state_.a);

    // 69E3: STA $4B35
    cpu.write_memory(0x4B35, cpu.state_.a);

    // 69E6: STA $4B3D
    cpu.write_memory(0x4B3D, cpu.state_.a);

    // 69E9: LDA #$00
    cpu.state_.a = 0x00;

    // 69EB: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.a);

    // 69EE: JSR $BD94
    cpu.call_function(0xBD94);

    // 69F1: INC <$41
    // TODO: Convert INC <$41

    // 69F4: JSR $7390
    cpu.call_function(0x7390);

    // 69F7: LDA <$60
    cpu.state_.a = cpu.read_memory(0x60);

    // 69F9: LBMI $0452
    // TODO: Convert LBMI $0452

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
    cpu.state_.a = 0x10;

    // 6A11: JSR $CE0C
    cpu.call_function(0xCE0C);

    // 6A14: JSR $6F6F
    cpu.call_function(0x6F6F);

    // 6A17: LDD $5086
    cpu.state_.d = cpu.read_memory_word(0x5086);

    // 6A1A: ADDD #$0001
    cpu.state_.d += 0x0001;

    // 6A1D: CMPD #$0400
    // TODO: Convert CMPD #$0400

    // 6A21: BHI $01C2
    // TODO: Convert BHI $01C2

    // 6A23: STD $5086
    cpu.write_memory(0x5086, cpu.state_.d);

    // 6A26: LDA <$43
    cpu.state_.a = cpu.read_memory(0x43);

    // 6A28: ANDA #$0F
    cpu.state_.a &= 0x0F;

    // 6A2A: BNE $01D5
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6A01;

    // 6A2C: LDA $4B0E
    cpu.state_.a = cpu.read_memory(0x4B0E);

    // 6A2F: CMPA #$0E
    cpu.compare_a(0x0E);

    // 6A31: BNE $01D2
    if (!cpu.zero_flag()) cpu.state_.pc = 0x6A05;

    // 6A33: JSR $BD99
    cpu.call_function(0xBD99);

    // 6A36: INC $4B0E
    // TODO: Convert INC $4B0E

    // 6A39: LDA <$A7
    cpu.state_.a = cpu.read_memory(0xA7);

    // 6A3B: CMPA #$05
    cpu.compare_a(0x05);

    // 6A3D: BCS $01EB
    if (cpu.carry_flag()) cpu.state_.pc = 0x6A2A;

    // 6A3F: LDA #$01
    cpu.state_.a = 0x01;

    // 6A41: STA $4B3D
    cpu.write_memory(0x4B3D, cpu.state_.a);

    // 6A44: LDA $5098
    cpu.state_.a = cpu.read_memory(0x5098);

    // 6A47: CMPA #$80
    cpu.compare_a(0x80);

    // 6A49: BCC $01EB
    if (!cpu.carry_flag()) cpu.state_.pc = 0x6A36;

    // 6A4B: LDA #$2B
    cpu.state_.a = 0x2B;

    // 6A4D: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6A50: LDA #$00
    cpu.state_.a = 0x00;

    // 6A52: STA <$98
    cpu.write_memory(0x98, cpu.state_.a);

    // 6A54: STA $4B36
    cpu.write_memory(0x4B36, cpu.state_.a);

    // 6A57: LDA $4B15
    cpu.state_.a = cpu.read_memory(0x4B15);

    // 6A5A: CMPA #$1F
    cpu.compare_a(0x1F);

    // 6A5C: BLS $01FC
    // TODO: Convert BLS $01FC

    // 6A5E: LDA #$1F
    cpu.state_.a = 0x1F;

    // 6A60: STA $4B12
    cpu.write_memory(0x4B12, cpu.state_.a);

    // 6A63: ADDA >$0000
    cpu.state_.a += 0x0000;

}

} // namespace StarWars