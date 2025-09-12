#include "cpu_6809.h"

namespace StarWars {

void routine_6005_impl(CPU6809& cpu) {
    // Converted from rom_disasm_6005.md
    // Address: 0x6005

    // 6005: LDX #$0000
    cpu.m_x = 0x0000;

    // 6008: LDD #$F800
    cpu.m_d = 0xF800;

    // 600B: LDA #$48
    cpu.m_a = 0x48;

    // 600D: TFR A,DP
    cpu.m_dp = cpu.m_a;

    // 600F: LSR <$3D
    // TODO: Convert LSR <$3D

    // 6011: BCC $0000
    if (!cpu.carry_flag()) cpu.m_pc = 0x6013;

    // 6013: CMPS #$4FFF
    // TODO: Convert CMPS #$4FFF

    // 6017: BEQ $0015
    if (cpu.zero_flag()) cpu.m_pc = 0x602E;

    // 601A: LDA <$28
    cpu.m_a = cpu.read_memory(0x28);

    // 601C: BNE $002A
    if (!cpu.zero_flag()) cpu.m_pc = 0x6048;

    // 601E: LDA $4824
    cpu.m_a = cpu.read_memory(0x4824);

    // 6021: ANDA #$80
    cpu.m_a &= 0x80;

    // 6023: BNE $002A
    if (!cpu.zero_flag()) cpu.m_pc = 0x604F;

    // 6025: LDA <$31
    cpu.m_a = cpu.read_memory(0x31);

    // 6027: BITA #$80
    // TODO: Convert BITA #$80

    // 6029: BEQ $0000
    if (cpu.zero_flag()) cpu.m_pc = 0x602B;

    // 602B: ANDA #$7F
    cpu.m_a &= 0x7F;

    // 602D: STA <$31
    cpu.write_memory(0x31, cpu.m_a);

    // 602F: JSR $60BE
    cpu.call_function(0x60BE);

    // 6032: LDA <$3F
    cpu.m_a = cpu.read_memory(0x3F);

    // 6034: BMI $002D
    if (cpu.negative_flag()) cpu.m_pc = 0x6063;

    // 6036: LDA <$41
    cpu.m_a = cpu.read_memory(0x41);

    // 6038: CMPA #$3D
    cpu.compare_a(0x3D);

    // 603A: BCC $0035
    if (!cpu.carry_flag()) cpu.m_pc = 0x6071;

    // 603D: LDX #$6044
    cpu.m_x = 0x6044;

    // 6040: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]

    // 6042: BRA $0000
    cpu.m_pc = 0x6044;

    // 6044: XNC -$B,S
    // TODO: Convert XNC -$B,S

    // 6046: LSR ,-S
    // TODO: Convert LSR ,-S

    // 6048: LSR [,S++]
    // TODO: Convert LSR [,S++]

    // 604A: LSR -$D,X
    // TODO: Convert LSR -$D,X

    // 604C: LSR -$E,Y
    // TODO: Convert LSR -$E,Y

    // 604E: ASR $8,X
    // TODO: Convert ASR $8,X

    // 6050: ASR $B,S
    // TODO: Convert ASR $B,S

    // 6052: XNC ,S
    // TODO: Convert XNC ,S

    // 6054: COM $6,X
    // TODO: Convert COM $6,X

    // 6056: COM $6,Y
    // TODO: Convert COM $6,Y

    // 6058: COM $8,U
    // TODO: Convert COM $8,U

    // 605A: LSR -$7,U
    // TODO: Convert LSR -$7,U

    // 605C: LSR ,--X
    // TODO: Convert LSR ,--X

    // 605E: LSR $C,S
    // TODO: Convert LSR $C,S

    // 6060: LSR [$6670]
    // TODO: Convert LSR [$6670]

    // 6064: ROR $00CF,PCR
    // TODO: Convert ROR $00CF,PCR

    // 6068: TST -$C,U
    // TODO: Convert TST -$C,U

    // 606A: TST ,X+
    // TODO: Convert TST ,X+

    // 606C: TST A,X
    // TODO: Convert TST A,X

    // 606E: TST [B,X]
    // TODO: Convert TST [B,X]

    // 6070: TST [$67,X]
    // TODO: Convert TST [$67,X]

    // 6073: ASL <$67
    // TODO: Convert ASL <$67

    // 6075: XDEC $7,S
    // TODO: Convert XDEC $7,S

    // 6077: XSTA #$67
    // TODO: Convert XSTA #$67

    // 6079: ORA <$67
    cpu.m_a |= 0x67;

    // 607B: BITB $7,S
    // TODO: Convert BITB $7,S

    // 607D: STD $6802
    cpu.write_memory16(0x6802, cpu.m_d);

    // 6080: ASL $F,Y
    // TODO: Convert ASL $F,Y

    // 6082: ASL -$8,Y
    // TODO: Convert ASL -$8,Y

    // 6084: ASL -$7,U
    // TODO: Convert ASL -$7,U

    // 6086: ASL [,W++]
    // TODO: Convert ASL [,W++]

    // 6088: ASL [B,U]
    // TODO: Convert ASL [B,U]

    // 608A: ROL -$E,X
    // TODO: Convert ROL -$E,X

    // 608C: ROL -$D,Y
    // TODO: Convert ROL -$D,Y

    // 608E: ROL -$D,U
    // TODO: Convert ROL -$D,U

    // 6090: ROL $8,S
    // TODO: Convert ROL $8,S

    // 6092: DEC -$10,U
    // TODO: Convert DEC -$10,U

    // 6094: DEC -$2,S
    // TODO: Convert DEC -$2,S

    // 6096: ROL $69F4,Y
    // TODO: Convert ROL $69F4,Y

    // 609A: DEC -$10,U
    // TODO: Convert DEC -$10,U

    // 609C: DEC $6AAB,X
    // TODO: Convert DEC $6AAB,X

    // 60A0: DEC [$6B22]
    // TODO: Convert DEC [$6B22]

    // 60A4: XDEC -$E,Y
    // TODO: Convert XDEC -$E,Y

    // 60A6: DEC [$6B1D]
    // TODO: Convert DEC [$6B1D]

    // 60AA: XDEC [D,U]
    // TODO: Convert XDEC [D,U]

    // 60AC: XDEC [,S++]
    // TODO: Convert XDEC [,S++]

    // 60AE: INC -$A,S
    // TODO: Convert INC -$A,S

    // 60B0: INC ,X
    // TODO: Convert INC ,X

    // 60B2: INC [A,Y]
    // TODO: Convert INC [A,Y]

    // 60B4: INC ,U
    // TODO: Convert INC ,U

    // 60B6: INC ,S++
    // TODO: Convert INC ,S++

    // 60B8: INC ,--W
    // TODO: Convert INC ,--W

    // 60BA: TST $C,X
    // TODO: Convert TST $C,X

    // 60BC: TST -$B,X
    // TODO: Convert TST -$B,X

    // 60BE: INC <$43
    // TODO: Convert INC <$43

    // 60C0: BNE $00C5
    if (!cpu.zero_flag()) cpu.m_pc = 0x6087;

    // 60C2: INC <$42
    // TODO: Convert INC <$42

    // 60C4: BNE $00C5
    if (!cpu.zero_flag()) cpu.m_pc = 0x608B;

    // 60C6: LDA #$80
    cpu.m_a = 0x80;

    // 60C8: STA <$42
    cpu.write_memory(0x42, cpu.m_a);

    // 60CA: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60CD: BNE $00CF
    if (!cpu.zero_flag()) cpu.m_pc = 0x609E;

    // 60CF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60D2: BRA $00EF
    cpu.m_pc = 0x60C3;

    // 60D4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60D7: BNE $00DF
    if (!cpu.zero_flag()) cpu.m_pc = 0x60B8;

    // 60D9: JSR $BD12
    cpu.call_function(0xBD12);

    // 60DC: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 60DF: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60E2: BRA $00EF
    cpu.m_pc = 0x60D3;

    // 60E4: LDA $4B31
    cpu.m_a = cpu.read_memory(0x4B31);

    // 60E7: CMPA $4814
    cpu.compare_a(cpu.read_memory(0x4814));

    // 60EA: BCC $00EF
    if (!cpu.carry_flag()) cpu.m_pc = 0x60DB;

    // 60EC: JSR $BD03
    cpu.call_function(0xBD03);

    // 60EF: LDA #$FF
    cpu.m_a = 0xFF;

    // 60F1: STA $4B31
    cpu.write_memory(0x4B31, cpu.m_a);

    // 60F4: JSR $70DB
    cpu.call_function(0x70DB);

    // 60F7: LDA <$AB
    cpu.m_a = cpu.read_memory(0xAB);

    // 60F9: STA <$AA
    cpu.write_memory(0xAA, cpu.m_a);

    // 60FB: LDA <$21
    cpu.m_a = cpu.read_memory(0x21);

    // 60FD: ANDA #$30
    cpu.m_a &= 0x30;

    // 60FF: PSHS A
    // TODO: Convert PSHS A

    // 6101: LDA <$1E
    cpu.m_a = cpu.read_memory(0x1E);

    // 6103: ANDA #$CF
    cpu.m_a &= 0xCF;

    // 6105: ORA ,S+
    // TODO: Complex indexed addressing: ,S+

    // 6107: ANDA #$F4
    cpu.m_a &= 0xF4;

    // 6109: STA <$AB
    cpu.write_memory(0xAB, cpu.m_a);

    // 610B: EORA <$AA
    cpu.m_a ^= 0xAA;

    // 610D: ANDA <$AA
    cpu.m_a &= 0xAA;

    // 610F: STA <$AC
    cpu.write_memory(0xAC, cpu.m_a);

    // 6112: LDA <$3F
    cpu.m_a = cpu.read_memory(0x3F);

    // 6114: LDB #$70
    cpu.m_b = 0x70;

    // 6116: TFR D,Y
    cpu.m_y = cpu.m_d;

    // 6118: LDD #$B99E
    cpu.m_d = 0xB99E;

    // 611B: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 611E: LDX #$CEDE
    cpu.m_x = 0xCEDE;

    // 6121: LDU #$2800
    cpu.m_u = 0x2800;

    // 6124: LDD ,X++
    cpu.m_d = cpu.read_memory16(cpu.m_x++);

    // 6126: STD ,U++
    cpu.write_memory16(cpu.m_u++, cpu.m_d);

    // 6128: CMPU #$3000
    // TODO: Convert CMPU #$3000

    // 612C: BCS $011F
    if (cpu.carry_flag()) cpu.m_pc = 0x614D;

    // 612F: LDD #$8040
    cpu.m_d = 0x8040;

    // 6132: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6134: LDD #$2020
    cpu.m_d = 0x2020;

    // 6137: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 6139: STD ,Y+
    // TODO: Handle indexed addressing: STD ,Y+

    // 613B: TFR Y,D
    cpu.m_d = cpu.m_y;

    // 613D: SUBA <$3F
    cpu.m_a -= 0x3F;

    // 613F: SUBA #$14
    cpu.m_a -= 0x14;

    // 6141: BCS $0150
    if (cpu.carry_flag()) cpu.m_pc = 0x6193;

    // 6143: JSR $611E
    cpu.call_function(0x611E);

    // 6146: LDD #$2020
    cpu.m_d = 0x2020;

    // 6149: STD $13FE
    cpu.write_memory16(0x13FE, cpu.m_d);

    // 614C: STD $13FC
    cpu.write_memory16(0x13FC, cpu.m_d);

    // 614F: STD $27FE
    cpu.write_memory16(0x27FE, cpu.m_d);

    // 6152: STD $27FC
    cpu.write_memory16(0x27FC, cpu.m_d);

    // 6155: LDA #$FF
    cpu.m_a = 0xFF;

    // 6157: STA <$3F
    cpu.write_memory(0x3F, cpu.m_a);

    // 615A: JSR $6161
    cpu.call_function(0x6161);

    // 615D: JSR $7A48
    cpu.call_function(0x7A48);

    // 6161: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 6164: SUBA $4703
    cpu.m_a -= 0x4703;

    // 6167: BNE $016C
    if (!cpu.zero_flag()) cpu.m_pc = 0x61D5;

    // 6169: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);

    // 616C: LDA #$80
    cpu.m_a = 0x80;

    // 616E: STA $4685
    cpu.write_memory(0x4685, cpu.m_a);

    // 6171: LDA #$80
    cpu.m_a = 0x80;

    // 6173: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 6175: LDX #$4900
    cpu.m_x = 0x4900;

    // 6178: LDU #$50F0
    cpu.m_u = 0x50F0;

    // 617B: LDB #$1C
    cpu.m_b = 0x1C;

    // 617D: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 617F: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 6181: LEAU $20,U
    // TODO: Fix comma operator: LEAU $20,U

    // 6184: ADDB #$04
    cpu.m_b += 0x04;

    // 6186: LEAX $19,X
    // TODO: Fix comma operator: LEAX $19,X

    // 6189: CMPX #$494B
    cpu.compare_x(0x494B);

    // 618C: BCS $0178
    if (cpu.carry_flag()) cpu.m_pc = 0x6206;

    // 618E: LDX #$494B
    cpu.m_x = 0x494B;

    // 6191: LDU #$5160
    cpu.m_u = 0x5160;

    // 6194: LDB #$2C
    cpu.m_b = 0x2C;

    // 6196: STU ,X
    // TODO: Handle indexed addressing: STU ,X

    // 6198: STB $2,X
    // TODO: Handle indexed addressing: STB $2,X

    // 619A: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X

    // 619C: LEAU $8,U
    // TODO: Fix comma operator: LEAU $8,U

    // 619E: ADDB #$01
    cpu.m_b += 0x01;

    // 61A0: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X

    // 61A2: CMPX #$496F
    cpu.compare_x(0x496F);

    // 61A5: BCS $0191
    if (cpu.carry_flag()) cpu.m_pc = 0x6138;

    // 61A7: JSR $8ED6
    cpu.call_function(0x8ED6);

    // 61AA: LDB #$04
    cpu.m_b = 0x04;

    // 61AC: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 61AF: LDB #$07
    cpu.m_b = 0x07;

    // 61B1: JSR $CCCC
    cpu.call_function(0xCCCC);

    // 61B5: LDD #$0000
    cpu.m_d = 0x0000;

    // 61B8: STD $501E
    cpu.write_memory16(0x501E, cpu.m_d);

    // 61BB: LDD #$4000
    cpu.m_d = 0x4000;

    // 61BE: STD $5020
    cpu.write_memory16(0x5020, cpu.m_d);

    // 61C1: LDD #$E000
    cpu.m_d = 0xE000;

    // 61C4: STD $5026
    cpu.write_memory16(0x5026, cpu.m_d);

    // 61C7: LDD #$0080
    cpu.m_d = 0x0080;

    // 61CA: STD $506A
    cpu.write_memory16(0x506A, cpu.m_d);

    // 61CD: LDD #$0040
    cpu.m_d = 0x0040;

    // 61D0: STD $5068
    cpu.write_memory16(0x5068, cpu.m_d);

    // 61D3: LDD #$021F
    cpu.m_d = 0x021F;

    // 61D6: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // 61D9: LDD #$3FF7
    cpu.m_d = 0x3FF7;

    // 61DC: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // 61DF: LDD #$4000
    cpu.m_d = 0x4000;

    // 61E2: STD $506C
    cpu.write_memory16(0x506C, cpu.m_d);

    // 61E5: LDD #$0200
    cpu.m_d = 0x0200;

    // 61E8: STD $4706
    cpu.write_memory16(0x4706, cpu.m_d);

    // 61EC: LDA #$80
    cpu.m_a = 0x80;

    // 61EE: STA <$83
    cpu.write_memory(0x83, cpu.m_a);

    // 61F0: LDX #$5C60
    cpu.m_x = 0x5C60;

    // 61F3: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 61F6: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // 61F9: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // 61FC: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

    // 61FF: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // 6202: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);

}

} // namespace StarWars