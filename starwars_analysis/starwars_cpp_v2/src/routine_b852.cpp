#include "cpu_6809.h"

namespace StarWars {

void routine_b852_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b852.md
    // Address: 0xB852

    // B852: LDD #$0001
    cpu.state_.d = 0x0001;

    // B855: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B857: LDD #$0203
    cpu.state_.d = 0x0203;

    // B85A: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B85C: BRA $0016
    cpu.state_.pc += 0x0016;

    // B85E: LDD #$0304
    cpu.state_.d = 0x0304;

    // B861: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B863: LDD #$0502
    cpu.state_.d = 0x0502;

    // B866: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B868: JSR $B948
    cpu.call_function(0xB948);

    // B86B: LDA <$01
    cpu.state_.a = cpu.read_memory(0x01);

    // B86D: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B86F: LDA #$20
    cpu.state_.a = 0x20;

    // B871: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B873: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // B876: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B878: LDD $501A
    cpu.state_.d = cpu.read_memory_word(0x501A);

    // B87B: ADDA #$FE
    cpu.state_.a += 0xFE;

    // B87D: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B87F: LDD $501C
    cpu.state_.d = cpu.read_memory_word(0x501C);

    // B882: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B884: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // B887: ADDA #$7F
    cpu.state_.a += 0x7F;

    // B889: SUBD $5018
    cpu.state_.d -= 0x5018;

    // B88C: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B88F: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B892: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B894: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // B897: ADDA #$C1
    cpu.state_.a += 0xC1;

    // B899: SUBD $501A
    cpu.state_.d -= 0x501A;

    // B89C: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B89F: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B8A2: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B8A4: LDA <$04
    cpu.state_.a = cpu.read_memory(0x04);

    // B8A6: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B8A9: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B8AC: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B8AE: JSR $B948
    cpu.call_function(0xB948);

    // B8B1: LDA <$02
    cpu.state_.a = cpu.read_memory(0x02);

    // B8B3: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B8B5: LDA #$20
    cpu.state_.a = 0x20;

    // B8B7: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B8B9: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // B8BC: ADDA #$02
    cpu.state_.a += 0x02;

    // B8BE: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B8C0: LDD $501A
    cpu.state_.d = cpu.read_memory_word(0x501A);

    // B8C3: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B8C5: LDD $501C
    cpu.state_.d = cpu.read_memory_word(0x501C);

    // B8C8: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B8CA: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // B8CD: ADDA #$7F
    cpu.state_.a += 0x7F;

    // B8CF: SUBD $5018
    cpu.state_.d -= 0x5018;

    // B8D2: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B8D5: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B8D8: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B8DA: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // B8DD: SUBD $501A
    cpu.state_.d -= 0x501A;

    // B8E0: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B8E3: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B8E6: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B8E8: LDA <$04
    cpu.state_.a = cpu.read_memory(0x04);

    // B8EA: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B8ED: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B8F0: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B8F2: JSR $B948
    cpu.call_function(0xB948);

    // B8F5: LDA <$03
    cpu.state_.a = cpu.read_memory(0x03);

    // B8F7: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B8F9: LDA #$20
    cpu.state_.a = 0x20;

    // B8FB: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B8FD: LDD $5018
    cpu.state_.d = cpu.read_memory_word(0x5018);

    // B900: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B902: LDD $501A
    cpu.state_.d = cpu.read_memory_word(0x501A);

    // B905: ADDA #$02
    cpu.state_.a += 0x02;

    // B907: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // B909: LDD $501C
    cpu.state_.d = cpu.read_memory_word(0x501C);

    // B90C: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B90E: LDD $5098
    cpu.state_.d = cpu.read_memory_word(0x5098);

    // B911: ADDA #$7F
    cpu.state_.a += 0x7F;

    // B913: SUBD $5018
    cpu.state_.d -= 0x5018;

    // B916: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B919: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B91C: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B91E: LDD $509A
    cpu.state_.d = cpu.read_memory_word(0x509A);

    // B921: ADDA #$3F
    cpu.state_.a += 0x3F;

    // B923: SUBD $501A
    cpu.state_.d -= 0x501A;

    // B926: JSR $CD9E
    cpu.call_function(0xCD9E);

    // B929: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B92C: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B92E: LDA <$04
    cpu.state_.a = cpu.read_memory(0x04);

    // B930: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B933: JSR $CDB5
    cpu.call_function(0xCDB5);

    // B936: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B939: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B93C: LDA #$00
    cpu.state_.a = 0x00;

    // B93E: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B940: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B942: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B945: BCS $00EA
    if (cpu.carry_flag()) cpu.state_.pc += 0x00EA;

    // B948: LDB <$A2
    cpu.state_.b = cpu.read_memory(0xA2);

    // B94B: CMPB #$08
    cpu.compare_b(0x08);

    // B94D: BCS $00FF
    if (cpu.carry_flag()) cpu.state_.pc += 0x00FF;

    // B94F: LDB #$00
    cpu.state_.b = 0x00;

    // B951: STB <$A2
    cpu.write_memory(0xA2, cpu.state_.b);

    // B953: LDA #$0E
    cpu.state_.a = 0x0E;

    // B956: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B959: LEAX D,X
    // TODO: Fix comma operator: LEAX D,X

    // B95C: LDD #$14BD
    cpu.state_.d = 0x14BD;

    // B95F: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // B962: LDD #$3C8C
    cpu.state_.d = 0x3C8C;

    // B965: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // B968: LDD #$0018
    cpu.state_.d = 0x0018;

    // B96B: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B96E: LDA #$00
    cpu.state_.a = 0x00;

    // B970: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B973: LDD #$0590
    cpu.state_.d = 0x0590;

    // B976: STD $5022
    cpu.write_memory(0x5022, cpu.state_.d);

    // B979: LDD #$3FC2
    cpu.state_.d = 0x3FC2;

    // B97C: STD $5024
    cpu.write_memory(0x5024, cpu.state_.d);

    // B97F: LDD #$0018
    cpu.state_.d = 0x0018;

    // B982: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // B985: LDA #$0E
    cpu.state_.a = 0x0E;

    // B987: JSR $CDBA
    cpu.call_function(0xCDBA);

    // B98B: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B98E: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B990: BEQ $014F
    if (cpu.zero_flag()) cpu.state_.pc += 0x014F;

    // B992: DEC $D,X
    // TODO: Convert DEC $D,X

    // B994: LDB $C,X
    // TODO: Fix comma operator: LDB $C,X

    // B996: CMPB #$09
    cpu.compare_b(0x09);

    // B998: BCS $0149
    if (cpu.carry_flag()) cpu.state_.pc += 0x0149;

    // B99B: LDU #$B748
    cpu.state_.u = 0xB748;

    // B99F: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]

    // B9A1: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9A3: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9A6: BCS $013C
    if (cpu.carry_flag()) cpu.state_.pc += 0x013C;

    // B9A8: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // B9AB: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // B9AD: BEQ $0160
    if (cpu.zero_flag()) cpu.state_.pc += 0x0160;

    // B9AF: JMP $B95C
    cpu.state_.pc = 0xB95C;

    // B9B2: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // B9B4: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // B9B7: BCS $0159
    if (cpu.carry_flag()) cpu.state_.pc += 0x0159;

    // B9B9: LDU #$50D0
    cpu.state_.u = 0x50D0;

    // B9BC: JSR $CDC3
    cpu.call_function(0xCDC3);

    // B9C0: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9C2: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9C4: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // B9C6: LDD #$0000
    cpu.state_.d = 0x0000;

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
    cpu.state_.d = 0x0000;

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

    // B9E8: BVS $019F
    // TODO: Convert BVS $019F

    // B9EA: BGE $019D
    // TODO: Convert BGE $019D

    // B9EC: LDD #$0000
    cpu.state_.d = 0x0000;

    // B9EF: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // B9F1: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B9F3: SUBD #$00C8
    cpu.state_.d -= 0x00C8;

    // B9F6: STD $A,X
    // TODO: Handle indexed addressing: STD $A,X

    // B9F9: LDD $6,X
    // TODO: Fix comma operator: LDD $6,X

    // B9FB: ADDD ,X
    // TODO: Complex indexed addressing: ,X

    // B9FD: BVS $01AF
    // TODO: Convert BVS $01AF

    // B9FF: STD ,X
    // TODO: Handle indexed addressing: STD ,X

    // BA01: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // BA03: ADDD $2,X
    // TODO: Fix comma operator: ADDD $2,X

    // BA05: BVS $01B7
    // TODO: Convert BVS $01B7

    // BA07: STD $2,X
    // TODO: Handle indexed addressing: STD $2,X

    // BA09: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // BA0B: ADDD $4,X
    // TODO: Fix comma operator: ADDD $4,X

    // BA0D: BVS $01BF
    // TODO: Convert BVS $01BF

    // BA0F: STD $4,X
    // TODO: Handle indexed addressing: STD $4,X

    // BA12: LDA #$18
    cpu.state_.a = 0x18;

    // BA14: JSR $CE18
    cpu.call_function(0xCE18);

    // BA17: LDA #$40
    cpu.state_.a = 0x40;

    // BA19: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA1C: LDX #$49E2
    cpu.state_.x = 0x49E2;

    // BA1F: STX <$64
    cpu.write_memory(0x64, cpu.state_.x);

    // BA21: LDA $D,X
    // TODO: Fix comma operator: LDA $D,X

    // BA23: BEQ $01D6
    if (cpu.zero_flag()) cpu.state_.pc += 0x01D6;

    // BA25: JSR $BA32
    cpu.call_function(0xBA32);

    // BA28: LDX <$64
    cpu.state_.x = cpu.read_memory_word(0x64);

    // BA2A: LEAX $E,X
    // TODO: Fix comma operator: LEAX $E,X

    // BA2C: CMPX #$4A52
    cpu.compare_x(0x4A52);

    // BA2F: BCS $01CD
    if (cpu.carry_flag()) cpu.state_.pc += 0x01CD;

    // BA32: LDD ,X
    // TODO: Complex indexed addressing: ,X

    // BA34: STD $5078
    cpu.write_memory(0x5078, cpu.state_.d);

    // BA37: LDD $2,X
    // TODO: Fix comma operator: LDD $2,X

    // BA39: STD $507A
    cpu.write_memory(0x507A, cpu.state_.d);

    // BA3C: LDD $4,X
    // TODO: Fix comma operator: LDD $4,X

    // BA3E: STD $507C
    cpu.write_memory(0x507C, cpu.state_.d);

    // BA41: LDD #$000F
    cpu.state_.d = 0x000F;

    // BA44: STD $4701
    cpu.write_memory(0x4701, cpu.state_.d);

    // BA47: LDA #$67
    cpu.state_.a = 0x67;

    // BA49: JSR $CDBA
    cpu.call_function(0xCDBA);

    // BA4C: LDD $5000
    cpu.state_.d = cpu.read_memory_word(0x5000);

    // BA4F: BMI $024B
    if (cpu.negative_flag()) cpu.state_.pc += 0x024B;

    // BA51: STD >$0000
    cpu.write_memory(0x0000, cpu.state_.d);

}

} // namespace StarWars