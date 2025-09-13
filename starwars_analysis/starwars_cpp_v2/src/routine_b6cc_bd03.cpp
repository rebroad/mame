#include "cpu_6809.h"

namespace StarWars {

void routine_b6cc_bd03_impl(CPU6809& cpu) {
    // Converted from rom_disasm_b6cc_bd03.md
    // Address: 0xB6CC_BD03

    // B6CC: LDD #$A012
    cpu.m_d = 0xA012;

    // B6CF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B6D1: LDD $32FE
    cpu.m_d = cpu.read_memory16(0x32FE);

    // B6D4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // B6D7: LDA <$7D
    cpu.m_a = cpu.read_memory(0x7D);

    // B6D9: BPL $B6DC
    if (!cpu.negative_flag()) cpu.m_pc = 0xB6DC;

    // B6DC: LDB #$6E
    cpu.m_b = 0x6E;

    // B6DF: LDB <$7D
    cpu.m_b = cpu.read_memory(0x7D);

    // B6E1: BPL $B6E4
    if (!cpu.negative_flag()) cpu.m_pc = 0xB6E4;

    // B6E4: TFR A,B
    cpu.m_b = cpu.m_a;

    // B6E7: STD $4B1C
    cpu.write_memory16(0x4B1C, cpu.m_d);

    // B6EA: ANDA #$1F
    cpu.m_a &= 0x1F;

    // B6EC: STD $2,Y
    // TODO: Handle indexed addressing: STD $2,Y

    // B6EE: STD $8,Y
    // TODO: Handle indexed addressing: STD $8,Y

    // B6F0: STD $E,Y
    // TODO: Handle indexed addressing: STD $E,Y

    // B6F2: STD $14,Y
    // TODO: Handle indexed addressing: STD $14,Y

    // B6F5: STD $1A,Y
    // TODO: Handle indexed addressing: STD $1A,Y

    // B6F8: LDA <$7F
    cpu.m_a = cpu.read_memory(0x7F);

    // B6FA: BPL $B6FD
    if (!cpu.negative_flag()) cpu.m_pc = 0xB6FD;

    // B6FD: LDB #$50
    cpu.m_b = 0x50;

    // B700: LDB <$7F
    cpu.m_b = cpu.read_memory(0x7F);

    // B702: BPL $B705
    if (!cpu.negative_flag()) cpu.m_pc = 0xB705;

    // B705: TFR A,B
    cpu.m_b = cpu.m_a;

    // B708: STD $4B1E
    cpu.write_memory16(0x4B1E, cpu.m_d);

    // B70B: ANDA #$1F
    cpu.m_a &= 0x1F;

    // B70D: STD ,Y
    // TODO: Handle indexed addressing: STD ,Y

    // B70F: STD $6,Y
    // TODO: Handle indexed addressing: STD $6,Y

    // B711: STD $C,Y
    // TODO: Handle indexed addressing: STD $C,Y

    // B713: STD $12,Y
    // TODO: Handle indexed addressing: STD $12,Y

    // B716: STD $18,Y
    // TODO: Handle indexed addressing: STD $18,Y

    // B719: LDD #$BAAC
    cpu.m_d = 0xBAAC;

    // B71C: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y

    // B71E: LDD #$BA0D
    cpu.m_d = 0xBA0D;

    // B721: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y

    // B723: LDD #$BB33
    cpu.m_d = 0xBB33;

    // B726: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y

    // B729: LDD #$BAE6
    cpu.m_d = 0xBAE6;

    // B72C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y

    // B72F: LDD #$BA5A
    cpu.m_d = 0xBA5A;

    // B732: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y

    // B735: LEAY $1E,Y
    // TODO: Fix comma operator: LEAY $1E,Y

    // B739: LDA #$00
    cpu.m_a = 0x00;

    // B73B: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X

    // B73D: JSR $8E1C
    cpu.call_function(0x8E1C);

    // B740: PSHS U,X
    // TODO: Convert PSHS U,X

    // B742: JSR $B76C
    cpu.call_function(0xB76C);

    // B745: PULS X,U
    // TODO: Convert PULS X,U

    // B748: ADCA $C0B9
    // TODO: Convert ADCA $C0B9

    // B74B: SUBB #$B9
    cpu.m_b -= 0xB9;

    // B74D: SUBB #$B9
    cpu.m_b -= 0xB9;

    // B74F: SUBB #$B9
    cpu.m_b -= 0xB9;

    // B751: SUBB #$B9
    cpu.m_b -= 0xB9;

    // B753: SUBB #$B9
    cpu.m_b -= 0xB9;

    // B755: ADCB $B9F9
    // TODO: Convert ADCB $B9F9

    // B758: ADCA $F9BA
    // TODO: Convert ADCA $F9BA

    // B75B: SUBA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B75D: ANDA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B75F: EORA [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B761: CMPX [F,Y]
    // TODO: Complex indexed addressing: [F,Y]

    // B763: SUBA $BAB4
    cpu.m_a -= 0xBAB4;

    // B766: ADDA $1ABB
    cpu.m_a += 0x1ABB;

    // B769: EXG DP,DP
    // TODO: Convert EXG DP,DP

    // B76B: LBRA $A5F2
    // TODO: Convert LBRA $A5F2

    // B76E: JSR $B948
    cpu.call_function(0xB948);

    // B771: LDA #$06
    cpu.m_a = 0x06;

    // B773: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B775: LDA #$18
    cpu.m_a = 0x18;

    // B777: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B779: LDD #$0000
    cpu.m_d = 0x0000;

    // B77C: SUBD -$E,U
    // TODO: Fix comma operator: SUBD -$E,U

    // B77E: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B781: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B783: ADDD $8,U
    // TODO: Fix comma operator: ADDD $8,U

    // B785: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B787: LDD #$0000
    cpu.m_d = 0x0000;

    // B78A: SUBD -$6,U
    // TODO: Fix comma operator: SUBD -$6,U

    // B78C: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B78F: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B791: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // B793: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B795: LDD #$0000
    cpu.m_d = 0x0000;

    // B798: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U

    // B79A: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B79D: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B79F: ADDD $C,U
    // TODO: Fix comma operator: ADDD $C,U

    // B7A1: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B7A3: JSR $B83F
    cpu.call_function(0xB83F);

    // B7A6: JSR $B948
    cpu.call_function(0xB948);

    // B7A9: LDA #$07
    cpu.m_a = 0x07;

    // B7AB: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B7AD: LDA #$18
    cpu.m_a = 0x18;

    // B7AF: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B7B1: LDD -$E,U
    // TODO: Fix comma operator: LDD -$E,U

    // B7B3: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B7B6: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B7B8: ADDD $8,U
    // TODO: Fix comma operator: ADDD $8,U

    // B7BA: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B7BC: LDD -$6,U
    // TODO: Fix comma operator: LDD -$6,U

    // B7BE: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B7C1: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B7C3: ADDD $A,U
    // TODO: Fix comma operator: ADDD $A,U

    // B7C5: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B7C7: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U

    // B7C9: JSR $CD9C
    cpu.call_function(0xCD9C);

    // B7CC: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B7CE: ADDD $C,U
    // TODO: Fix comma operator: ADDD $C,U

    // B7D0: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B7D2: JSR $B83F
    cpu.call_function(0xB83F);

    // B7D5: JSR $B948
    cpu.call_function(0xB948);

    // B7D8: LDA #$08
    cpu.m_a = 0x08;

    // B7DA: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B7DC: LDA #$10
    cpu.m_a = 0x10;

    // B7DE: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B7E0: LDD $8,U
    // TODO: Fix comma operator: LDD $8,U

    // B7E2: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B7E4: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B7E6: LDD $A,U
    // TODO: Fix comma operator: LDD $A,U

    // B7E8: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B7EA: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B7EC: LDD $C,U
    // TODO: Fix comma operator: LDD $C,U

    // B7EE: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B7F0: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B7F2: LDA $6,X
    // TODO: Fix comma operator: LDA $6,X

    // B7F4: LDB #$80
    cpu.m_b = 0x80;

    // B7F8: BVC $B7FE
    // TODO: Convert BVC $B7FE

    // B7FC: BRA $B81C
    goto label_B81C;

    // B7FE: ASL $9,X
    // TODO: Convert ASL $9,X

    // B800: ROL $8,X
    // TODO: Convert ROL $8,X

    // B802: BVC $B80C
    // TODO: Convert BVC $B80C

    // B804: ROR $8,X
    // TODO: Convert ROR $8,X

    // B806: ROR $9,X
    // TODO: Convert ROR $9,X

    // B80A: BRA $B81C
    goto label_B81C;

    // B80C: ASL $B,X
    // TODO: Convert ASL $B,X

    // B80E: ROL $A,X
    // TODO: Convert ROL $A,X

    // B810: BVC $B7F6
    // TODO: Convert BVC $B7F6

    // B812: ROR $A,X
    // TODO: Convert ROR $A,X

    // B814: ROR $B,X
    // TODO: Convert ROR $B,X

    // B816: ASR $8,X
    // TODO: Convert ASR $8,X

    // B818: ASR $9,X
    // TODO: Convert ASR $9,X

    // B81C: SUBD ,X
    // TODO: Complex indexed addressing: ,X

    // B81E: JSR $CDA0
    cpu.call_function(0xCDA0);

    // B821: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B824: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B826: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // B828: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // B82A: JSR $CDA0
    cpu.call_function(0xCDA0);

    // B82D: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B830: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B832: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B834: SUBD $4,X
    // TODO: Fix comma operator: SUBD $4,X

    // B836: JSR $CDA0
    cpu.call_function(0xCDA0);

    // B839: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B83C: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B83F: LDD -$A,U
    // TODO: Fix comma operator: LDD -$A,U

    // B841: ADDD $6,X
    // TODO: Fix comma operator: ADDD $6,X

    // B843: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B845: LDD -$2,U
    // TODO: Fix comma operator: LDD -$2,U

    // B847: ADDD $8,X
    // TODO: Fix comma operator: ADDD $8,X

    // B849: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B84B: LDD $6,U
    // TODO: Fix comma operator: LDD $6,U

    // B84D: ADDD $A,X
    // TODO: Fix comma operator: ADDD $A,X

    // B84F: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B852: LDD #$0001
    cpu.m_d = 0x0001;

    // B855: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B857: LDD #$0203
    cpu.m_d = 0x0203;

    // B85A: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B85C: BRA $B868
    goto label_B868;

    // B85E: LDD #$0304
    cpu.m_d = 0x0304;

    // B861: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);

    // B863: LDD #$0502
    cpu.m_d = 0x0502;

    // B866: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);

    // B868: JSR $B948
    cpu.call_function(0xB948);

    // B86B: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);

    // B86D: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B86F: LDA #$20
    cpu.m_a = 0x20;

    // B871: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B873: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // B876: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B878: LDD $501A
    cpu.m_d = cpu.read_memory16(0x501A);

    // B87B: ADDA #$FE
    cpu.m_a += 0xFE;

    // B87D: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B87F: LDD $501C
    cpu.m_d = cpu.read_memory16(0x501C);

    // B882: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B884: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // B887: ADDA #$7F
    cpu.m_a += 0x7F;

    // B889: SUBD $5018
    cpu.m_d -= 0x5018;

    // B88C: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B88F: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B892: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B894: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // B897: ADDA #$C1
    cpu.m_a += 0xC1;

    // B899: SUBD $501A
    cpu.m_d -= 0x501A;

    // B89C: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B89F: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B8A2: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B8A4: LDA <$04
    cpu.m_a = cpu.read_memory(0x04);

    // B8A6: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B8A9: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B8AC: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B8AE: JSR $B948
    cpu.call_function(0xB948);

    // B8B1: LDA <$02
    cpu.m_a = cpu.read_memory(0x02);

    // B8B3: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B8B5: LDA #$20
    cpu.m_a = 0x20;

    // B8B7: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B8B9: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // B8BC: ADDA #$02
    cpu.m_a += 0x02;

    // B8BE: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B8C0: LDD $501A
    cpu.m_d = cpu.read_memory16(0x501A);

    // B8C3: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B8C5: LDD $501C
    cpu.m_d = cpu.read_memory16(0x501C);

    // B8C8: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B8CA: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // B8CD: ADDA #$7F
    cpu.m_a += 0x7F;

    // B8CF: SUBD $5018
    cpu.m_d -= 0x5018;

    // B8D2: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B8D5: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B8D8: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B8DA: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // B8DD: SUBD $501A
    cpu.m_d -= 0x501A;

    // B8E0: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B8E3: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B8E6: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B8E8: LDA <$04
    cpu.m_a = cpu.read_memory(0x04);

    // B8EA: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B8ED: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B8F0: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B8F2: JSR $B948
    cpu.call_function(0xB948);

    // B8F5: LDA <$03
    cpu.m_a = cpu.read_memory(0x03);

    // B8F7: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B8F9: LDA #$20
    cpu.m_a = 0x20;

    // B8FB: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B8FD: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);

    // B900: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B902: LDD $501A
    cpu.m_d = cpu.read_memory16(0x501A);

    // B905: ADDA #$02
    cpu.m_a += 0x02;

    // B907: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B909: LDD $501C
    cpu.m_d = cpu.read_memory16(0x501C);

    // B90C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B90E: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);

    // B911: ADDA #$7F
    cpu.m_a += 0x7F;

    // B913: SUBD $5018
    cpu.m_d -= 0x5018;

    // B916: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B919: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B91C: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B91E: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);

    // B921: ADDA #$3F
    cpu.m_a += 0x3F;

    // B923: SUBD $501A
    cpu.m_d -= 0x501A;

    // B926: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B929: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B92C: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B92E: LDA <$04
    cpu.m_a = cpu.read_memory(0x04);

    // B930: LDB $4703
    cpu.m_b = cpu.read_memory(0x4703);

    // B933: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B936: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B939: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B93C: LDA #$00
    cpu.m_a = 0x00;

    // B93E: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B940: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B942: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B945: BCS $B93C
    if (cpu.carry_flag()) cpu.m_pc = 0xB93C;

    // B948: LDB <$A2
    cpu.m_b = cpu.read_memory(0xA2);

    // B94B: CMPB #$08
    cpu.compare_b(0x08);

    // B94D: BCS $B951
    if (cpu.carry_flag()) cpu.m_pc = 0xB951;

    // B94F: LDB #$00
    cpu.m_b = 0x00;

    // B951: STB <$A2
    cpu.write_memory(0xA2, cpu.m_b);

    // B953: LDA #$0E
    cpu.m_a = 0x0E;

    // B956: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B959: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X

    // B95C: LDD #$14BD
    cpu.m_d = 0x14BD;

    // B95F: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // B962: LDD #$3C8C
    cpu.m_d = 0x3C8C;

    // B965: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // B968: LDD #$0018
    cpu.m_d = 0x0018;

    // B96B: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B96E: LDA #$00
    cpu.m_a = 0x00;

    // B970: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B973: LDD #$0590
    cpu.m_d = 0x0590;

    // B976: STD $5022
    cpu.write_memory16(0x5022, cpu.m_d);

    // B979: LDD #$3FC2
    cpu.m_d = 0x3FC2;

    // B97C: STD $5024
    cpu.write_memory16(0x5024, cpu.m_d);

    // B97F: LDD #$0018
    cpu.m_d = 0x0018;

    // B982: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // B985: LDA #$0E
    cpu.m_a = 0x0E;

    // B987: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B98B: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B98E: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B990: BEQ $B9A1
    if (cpu.zero_flag()) cpu.m_pc = 0xB9A1;

    // B992: DEC $D,X
    // TODO: Convert DEC $D,X

    // B994: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // B996: CMPB #$09
    cpu.compare_b(0x09);

    // B998: BCS $B99B
    if (cpu.carry_flag()) cpu.m_pc = 0xB99B;

    // B99B: LDU #$B748
    cpu.m_u = 0xB748;

    // B99F: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // B9A1: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9A3: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9A6: BCS $B98E
    if (cpu.carry_flag()) cpu.m_pc = 0xB98E;

    // B9A8: LDX #$49E2
    cpu.m_x = 0x49E2;

    // B9AB: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B9AD: BEQ $B9B2
    if (cpu.zero_flag()) cpu.m_pc = 0xB9B2;

    // B9AF: JMP $B95C
    goto label_B95C;

    // B9B2: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9B4: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9B7: BCS $B9AB
    if (cpu.carry_flag()) cpu.m_pc = 0xB9AB;

    // B9B9: LDU #$50D0
    cpu.m_u = 0x50D0;

    // B9BC: JSR $CDC3
    cpu.call_function(0xCDC3);

    // B9C0: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9C2: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9C4: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B9C6: LDD #$0000
    cpu.m_d = 0x0000;

    // B9C9: SUBD $6,X
    // TODO: Fix comma operator: SUBD $6,X

    // B9CB: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B9CE: ADDD $6,X
    // TODO: Fix comma operator: ADDD $6,X

    // B9D0: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B9D2: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // B9D4: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // B9D6: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B9D8: LDD #$0000
    cpu.m_d = 0x0000;

    // B9DB: SUBD $8,X
    // TODO: Fix comma operator: SUBD $8,X

    // B9DD: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B9E0: ADDD $8,X
    // TODO: Fix comma operator: ADDD $8,X

    // B9E2: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B9E4: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // B9E6: ADDD $A,X
    // TODO: Fix comma operator: ADDD $A,X

    // B9E8: BVS $B9F1
    // TODO: Convert BVS $B9F1

    // B9EA: BGE $B9EF
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xB9EF;

    // B9EC: LDD #$0000
    cpu.m_d = 0x0000;

    // B9EF: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B9F1: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B9F3: SUBD #$00C8
    cpu.m_d -= 0x00C8;

    // B9F6: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9FB: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9FD: BVS $BA01
    // TODO: Convert BVS $BA01

    // B9FF: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // BA01: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // BA03: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // BA05: BVS $BA09
    // TODO: Convert BVS $BA09

    // BA07: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // BA09: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // BA0B: ADDD $4,X
    // TODO: Fix comma operator: ADDD $4,X

    // BA0D: BVS $BA11
    // TODO: Convert BVS $BA11

    // BA0F: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // BA12: LDA #$18
    cpu.m_a = 0x18;

    // BA14: JSR $CE18
    cpu.call_function(0xCE18);

    // BA17: LDA #$40
    cpu.m_a = 0x40;

    // BA19: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA1C: LDX #$49E2
    cpu.m_x = 0x49E2;

    // BA1F: STX <$64
    cpu.write_memory16(0x64, cpu.m_x);

    // BA21: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // BA23: BEQ $BA28
    if (cpu.zero_flag()) cpu.m_pc = 0xBA28;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.m_x = cpu.read_memory16(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $BA1F
    if (cpu.carry_flag()) cpu.m_pc = 0xBA1F;

    // BA32: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BA34: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // BA37: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BA39: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // BA3C: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // BA3E: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // BA41: LDD #$000F
    cpu.m_d = 0x000F;

    // BA44: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // BA47: LDA #$67
    cpu.m_a = 0x67;

    // BA49: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA4C: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // BA4F: BMI $BA9D
    if (cpu.negative_flag()) cpu.m_pc = 0xBA9D;

    // BA51: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);

    // BA54: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // BA57: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);

    // BA5A: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);

    // BA5D: BPL $BA63
    if (!cpu.negative_flag()) cpu.m_pc = 0xBA63;

    // BA61: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA63: SUBD $5018
    cpu.m_d -= 0x5018;

    // BA66: BGE $BA9D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xBA9D;

    // BA68: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);

    // BA6B: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // BA6E: BPL $BA74
    if (!cpu.negative_flag()) cpu.m_pc = 0xBA74;

    // BA72: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // BA76: SUBD $5018
    cpu.m_d -= 0x5018;

    // BA79: BGE $BA9D
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xBA9D;

    // BA7B: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // BA7D: CMPB #$09
    cpu.compare_b(0x09);

    // BA7F: BCS $BA82
    if (cpu.carry_flag()) cpu.m_pc = 0xBA82;

    // BA82: LDU #$B75A
    cpu.m_u = 0xB75A;

    // BA86: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // BA88: JSR $CCD8
    cpu.call_function(0xCCD8);

    // BA8B: JSR $CD20
    cpu.call_function(0xCD20);

    // BA8E: JSR $CD2C
    cpu.call_function(0xCD2C);

    // BA91: LDD #$7200
    cpu.m_d = 0x7200;

    // BA94: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BA96: LDD #$8040
    cpu.m_d = 0x8040;

    // BA99: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BA9B: BRA $BA9F
    goto label_BA9F;

    // BA9D: CLR $D,X
    // TODO: Fix comma operator: CLR $D,X

    // BAA0: LDA #$14
    cpu.m_a = 0x14;

    // BAA2: BRA $BABE
    goto label_BABE;

    // BAA4: LDA #$15
    cpu.m_a = 0x15;

    // BAA6: BRA $BABE
    goto label_BABE;

    // BAA8: LDA #$16
    cpu.m_a = 0x16;

    // BAAA: BRA $BABE
    goto label_BABE;

    // BAAC: LDA #$11
    cpu.m_a = 0x11;

    // BAAE: BRA $BAB8
    goto label_BAB8;

    // BAB0: LDA #$12
    cpu.m_a = 0x12;

    // BAB2: BRA $BAB8
    goto label_BAB8;

    // BAB4: LDA #$13
    cpu.m_a = 0x13;

    // BAB6: BRA $BAB8
    goto label_BAB8;

    // BAB8: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // BABA: LDA #$67
    cpu.m_a = 0x67;

    // BABC: BRA $BAC2
    goto label_BAC2;

    // BABE: STA <$DC
    cpu.write_memory(0xDC, cpu.m_a);

    // BAC0: LDA #$64
    cpu.m_a = 0x64;

    // BAC2: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BAC4: CMPB #$07
    cpu.compare_b(0x07);

    // BAC6: BHI $BACE
    // TODO: Convert BHI $BACE

    // BACC: BRA $BAD0
    goto label_BAD0;

    // BACE: LDB #$80
    cpu.m_b = 0x80;

    // BAD0: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BAD2: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BAD4: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);

    // BAD7: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BAD9: STD $507A
    cpu.write_memory16(0x507A, cpu.m_d);

    // BADC: LDD #$0000
    cpu.m_d = 0x0000;

    // BADF: STD $507C
    cpu.write_memory16(0x507C, cpu.m_d);

    // BAE2: LDD #$000F
    cpu.m_d = 0x000F;

    // BAE5: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);

    // BAE8: LDD $501C
    cpu.m_d = cpu.read_memory16(0x501C);

    // BAEB: PSHS U,X,D
    // TODO: Convert PSHS U,X,D

    // BAED: LDU $501A
    cpu.m_u = cpu.read_memory16(0x501A);

    // BAF0: LDX $5018
    cpu.m_x = cpu.read_memory16(0x5018);

    // BAF3: LDA #$67
    cpu.m_a = 0x67;

    // BAF5: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BAF8: STX $5018
    cpu.write_memory16(0x5018, cpu.m_x);

    // BAFB: STU $501A
    cpu.write_memory16(0x501A, cpu.m_u);

    // BAFE: PULS D,X,U
    // TODO: Convert PULS D,X,U

    // BB00: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);

    // BB03: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);

    // BB06: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);

    // BB09: JSR $CCF0
    cpu.call_function(0xCCF0);

    // BB0C: LDA #$72
    cpu.m_a = 0x72;

    // BB0E: LDB $5018
    cpu.m_b = cpu.read_memory(0x5018);

    // BB13: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BB16: LDB #$03
    cpu.m_b = 0x03;

    // BB18: BRA $BB22
    goto label_BB22;

    // BB1A: LDB #$01
    cpu.m_b = 0x01;

    // BB1C: BRA $BB22
    goto label_BB22;

    // BB1E: LDB #$02
    cpu.m_b = 0x02;

    // BB20: BRA $BB22
    goto label_BB22;

    // BB22: STB <$DC
    cpu.write_memory(0xDC, cpu.m_b);

    // BB24: LDB $D,X
    // TODO: Fix comma operator: LDB $D,X

    // BB26: CMPB #$1F
    cpu.compare_b(0x1F);

    // BB28: BLS $BB2F
    // TODO: Convert BLS $BB2F

    // BB2A: LDD #$A018
    cpu.m_d = 0xA018;

    // BB2D: BRA $BB35
    goto label_BB35;

    // BB2F: LDU #$BB3B
    cpu.m_u = 0xBB3B;

    // BB33: LDD B,U
    // TODO: Fix comma operator: LDD B,U

    // BB35: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BB37: JSR $CCF0
    cpu.call_function(0xCCF0);

    // BB3B: XNC -$10,Y
    // TODO: Convert XNC -$10,Y

    // BB3D: XNC -$10,Y
    // TODO: Convert XNC -$10,Y

    // BB3F: XNC $0,U
    // TODO: Convert XNC $0,U

    // BB41: XNC $0,U
    // TODO: Convert XNC $0,U

    // BB43: XNC -$10,U
    // TODO: Convert XNC -$10,U

    // BB45: XNC -$10,U
    // TODO: Convert XNC -$10,U

    // BB47: XNC $0,S
    // TODO: Convert XNC $0,S

    // BB49: XNC $0,S
    // TODO: Convert XNC $0,S

    // BB4B: XNC -$10,S
    // TODO: Convert XNC -$10,S

    // BB4D: XNC -$10,S
    // TODO: Convert XNC -$10,S

    // BB4F: XNC ,X+
    // TODO: Convert XNC ,X+

    // BB51: XNC ,X+
    // TODO: Convert XNC ,X+

    // BB53: XNC [,W]
    // TODO: Convert XNC [,W]

    // BB55: XNC [,W]
    // TODO: Convert XNC [,W]

    // BB57: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB59: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB5B: ASR ,X+
    // TODO: Convert ASR ,X+

    // BB5D: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB5F: ASR [,W]
    // TODO: Convert ASR [,W]

    // BB61: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB63: ASR ,Y+
    // TODO: Convert ASR ,Y+

    // BB65: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB67: ASR ,U+
    // TODO: Convert ASR ,U+

    // BB69: XNC ,Y+
    // TODO: Convert XNC ,Y+

    // BB6B: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB6D: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB6F: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB71: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB73: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB75: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB77: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB79: ROR ,Y+
    // TODO: Convert ROR ,Y+

    // BB7B: LDA #$01
    cpu.m_a = 0x01;

    // BB7D: STA <$A1
    cpu.write_memory(0xA1, cpu.m_a);

    // BB7F: LDD #$0001
    cpu.m_d = 0x0001;

    // BB82: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BB85: LDA <$A1
    cpu.m_a = cpu.read_memory(0xA1);

    // BB88: LDX #$BB8E
    cpu.m_x = 0xBB8E;

    // BB8B: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]

    // BB8E: ADDA $8DBB
    cpu.m_a += 0x8DBB;

    // BB91: EORA <$BB
    cpu.m_a ^= 0xBB;

    // BB93: ADDA $BC1E
    cpu.m_a += 0xBC1E;

    // BB96: CMPX $85CC
    cpu.compare_x(cpu.read_memory16(0x85CC));

    // BB99: LSR ,X+
    // TODO: Convert LSR ,X+

    // BB9B: LDU #$76F0
    cpu.m_u = 0x76F0;

    // BB9E: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BBA0: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBA3: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBA5: ADDD #$0002
    cpu.m_d += 0x0002;

    // BBA8: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBAA: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBAE: BCC $BBBA
    if (!cpu.carry_flag()) cpu.m_pc = 0xBBBA;

    // BBB0: LDD #$0001
    cpu.m_d = 0x0001;

    // BBB3: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBB5: INC <$A1
    // TODO: Convert INC <$A1

    // BBB7: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BBBB: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BBBD: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BBC0: LDU #$76F0
    cpu.m_u = 0x76F0;

    // BBC3: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBC6: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBC8: ADDD #$0002
    cpu.m_d += 0x0002;

    // BBCB: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BBCD: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BBD1: BCC $BC0B
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC0B;

    // BBD3: LDB #$3F
    cpu.m_b = 0x3F;

    // BBD5: SUBB <$A0
    cpu.m_b -= 0xA0;

    // BBD8: TFR D,X
    cpu.m_x = cpu.m_d;

    // BBDA: LDD #$64FF
    cpu.m_d = 0x64FF;

    // BBDD: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BBE0: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBEA: BMI $BBEF
    if (cpu.negative_flag()) cpu.m_pc = 0xBBEF;

    // BBED: ORB #$80
    cpu.m_b |= 0x80;

    // BBEF: ADDD #$7670
    cpu.m_d += 0x7670;

    // BBF3: BMI $BBF8
    if (cpu.negative_flag()) cpu.m_pc = 0xBBF8;

    // BBF6: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BBF8: TFR D,U
    cpu.m_u = cpu.m_d;

    // BBFA: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BBFE: ANDB #$07
    cpu.m_b &= 0x07;

    // BC00: EORB #$07
    cpu.m_b ^= 0x07;

    // BC03: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC05: LDD #$64FF
    cpu.m_d = 0x64FF;

    // BC08: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC0B: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC0D: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC11: BCS $BC1D
    if (cpu.carry_flag()) cpu.m_pc = 0xBC1D;

    // BC13: LDD #$0001
    cpu.m_d = 0x0001;

    // BC16: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC18: INC <$A1
    // TODO: Convert INC <$A1

    // BC1A: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC1E: LDX <$9F
    cpu.m_x = cpu.read_memory16(0x9F);

    // BC20: LDD #$67FF
    cpu.m_d = 0x67FF;

    // BC23: LDU #$7670
    cpu.m_u = 0x7670;

    // BC26: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC29: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC2B: ADDD #$0003
    cpu.m_d += 0x0003;

    // BC2E: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC30: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC34: BCC $BC43
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC43;

    // BC36: LDB #$3F
    cpu.m_b = 0x3F;

    // BC38: SUBB <$A0
    cpu.m_b -= 0xA0;

    // BC3B: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC3D: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BC40: JSR $BCAE
    cpu.call_function(0xBCAE);

    // BC43: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC45: CMPD #$003F
    // TODO: Convert CMPD #$003F

    // BC49: BCC $BC72
    if (!cpu.carry_flag()) cpu.m_pc = 0xBC72;

    // BC53: BMI $BC58
    if (cpu.negative_flag()) cpu.m_pc = 0xBC58;

    // BC56: ORB #$80
    cpu.m_b |= 0x80;

    // BC58: ADDD #$7670
    cpu.m_d += 0x7670;

    // BC5C: BMI $BC61
    if (cpu.negative_flag()) cpu.m_pc = 0xBC61;

    // BC5F: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BC61: TFR D,U
    cpu.m_u = cpu.m_d;

    // BC63: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC65: ANDB #$0F
    cpu.m_b &= 0x0F;

    // BC67: EORB #$0F
    cpu.m_b ^= 0x0F;

    // BC6A: TFR D,X
    cpu.m_x = cpu.m_d;

    // BC6C: LDD #$61FF
    cpu.m_d = 0x61FF;

    // BC6F: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BC72: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC74: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // BC78: BCS $BC84
    if (cpu.carry_flag()) cpu.m_pc = 0xBC84;

    // BC7A: LDD #$0080
    cpu.m_d = 0x0080;

    // BC7D: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC7F: INC <$A1
    // TODO: Convert INC <$A1

    // BC81: JSR $BDB7
    cpu.call_function(0xBDB7);

    // BC85: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC87: SUBD #$0004
    cpu.m_d -= 0x0004;

    // BC8A: STD <$9F
    cpu.write_memory16(0x9F, cpu.m_d);

    // BC8C: CMPD #$0008
    // TODO: Convert CMPD #$0008

    // BC90: BCS $BCA9
    if (cpu.carry_flag()) cpu.m_pc = 0xBCA9;

    // BC92: ADDD #$7500
    cpu.m_d += 0x7500;

    // BC95: TFR D,U
    cpu.m_u = cpu.m_d;

    // BC97: LDD <$9F
    cpu.m_d = cpu.read_memory16(0x9F);

    // BC9B: ANDB #$3F
    cpu.m_b &= 0x3F;

    // BC9D: EORB #$3F
    cpu.m_b ^= 0x3F;

    // BC9F: TFR D,X
    cpu.m_x = cpu.m_d;

    // BCA1: LDD #$67FF
    cpu.m_d = 0x67FF;

    // BCA4: JSR $BCC8
    cpu.call_function(0xBCC8);

    // BCA7: BRA $BCAD
    goto label_BCAD;

    // BCA9: LDA #$00
    cpu.m_a = 0x00;

    // BCAB: STA <$A1
    cpu.write_memory(0xA1, cpu.m_a);

    // BCAE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCB0: LDD #$1F98
    cpu.m_d = 0x1F98;

    // BCB3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCB5: LDD #$0000
    cpu.m_d = 0x0000;

    // BCB8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCBA: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // BCBC: LDD #$BD69
    cpu.m_d = 0xBD69;

    // BCBF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCC1: LEAU -$2,U
    // TODO: Fix comma operator: LEAU -$2,U

    // BCC3: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCC5: BNE $BCB0
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCB0;

    // BCC8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCCA: LDD #$1F98
    cpu.m_d = 0x1F98;

    // BCCD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCCF: LDD #$0000
    cpu.m_d = 0x0000;

    // BCD2: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCD4: STU ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_u);

    // BCD6: LDD #$BD69
    cpu.m_d = 0xBD69;

    // BCD9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // BCDB: TFR U,D
    cpu.m_d = cpu.m_u;

    // BCDD: SUBD #$0004
    cpu.m_d -= 0x0004;

    // BCE0: ANDB #$7F
    cpu.m_b &= 0x7F;

    // BCE2: TFR D,U
    cpu.m_u = cpu.m_d;

    // BCE4: LEAX -$1,X
    // TODO: Fix comma operator: LEAX -$1,X

    // BCE6: BNE $BCCA
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCCA;

    // BCE9: LDB #$0E
    cpu.m_b = 0x0E;

    // BCEB: TST $4401
    // TODO: Convert TST $4401

    // BCEE: BPL $BCF5
    if (!cpu.negative_flag()) cpu.m_pc = 0xBCF5;

    // BCF1: BNE $BCEB
    if (!cpu.zero_flag()) cpu.m_pc = 0xBCEB;

    // BCF3: LDA #$00
    cpu.m_a = 0x00;

    // BCF5: STA $4400
    cpu.write_memory(0x4400, cpu.m_a);

    // BCF9: LDA #$01
    cpu.m_a = 0x01;

    // BCFB: JMP $BCE9
    goto label_BCE9;

    // BCFE: LDA #$02
    cpu.m_a = 0x02;

    // BD00: JMP $BCE9
    goto label_BCE9;

    // BD03: JMP $bd03
    goto label_BD03;

}

} // namespace StarWars