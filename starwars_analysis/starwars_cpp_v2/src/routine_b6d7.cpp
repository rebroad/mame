#include "cpu_6809.h"

namespace StarWars {

void routine_b6d7_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_b6d7.md
    // Address: 0xB6D7

    // B6D7: LDA <$7D
    cpu.state_.a = cpu.read_memory(0x7D);

    // B6D9: BPL $0005
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB6E0;

    // B6DC: LDB #$6E
    cpu.state_.b = 0x6E;

    // B6DF: LDB <$7D
    cpu.state_.b = cpu.read_memory(0x7D);

    // B6E1: BPL $000D
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB6F0;

    // B6E4: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // B6E7: STD $4B1C
    cpu.write_memory(0x4B1C, cpu.state_.d);

    // B6EA: ANDA #$1F
    cpu.state_.a &= 0x1F;

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
    cpu.state_.a = cpu.read_memory(0x7F);

    // B6FA: BPL $0026
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB722;

    // B6FD: LDB #$50
    cpu.state_.b = 0x50;

    // B700: LDB <$7F
    cpu.state_.b = cpu.read_memory(0x7F);

    // B702: BPL $002E
    if (!cpu.negative_flag()) cpu.state_.pc = 0xB732;

    // B705: TFR A,B
    cpu.state_.b = cpu.state_.a;

    // B708: STD $4B1E
    cpu.write_memory(0x4B1E, cpu.state_.d);

    // B70B: ANDA #$1F
    cpu.state_.a &= 0x1F;

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
    cpu.state_.d = 0xBAAC;

    // B71C: STD $4,Y
    // TODO: Handle indexed addressing: STD $4,Y

    // B71E: LDD #$BA0D
    cpu.state_.d = 0xBA0D;

    // B721: STD $A,Y
    // TODO: Handle indexed addressing: STD $A,Y

    // B723: LDD #$BB33
    cpu.state_.d = 0xBB33;

    // B726: STD $10,Y
    // TODO: Handle indexed addressing: STD $10,Y

    // B729: LDD #$BAE6
    cpu.state_.d = 0xBAE6;

    // B72C: STD $16,Y
    // TODO: Handle indexed addressing: STD $16,Y

    // B72F: LDD #$BA5A
    cpu.state_.d = 0xBA5A;

    // B732: STD $1C,Y
    // TODO: Handle indexed addressing: STD $1C,Y

    // B735: LEAY $1E,Y
    // TODO: Fix comma operator: LEAY $1E,Y

    // B739: LDA #$00
    cpu.state_.a = 0x00;

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
    cpu.state_.b -= 0xB9;

    // B74D: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B74F: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B751: SUBB #$B9
    cpu.state_.b -= 0xB9;

    // B753: SUBB #$B9
    cpu.state_.b -= 0xB9;

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
    cpu.state_.a -= 0xBAB4;

    // B766: ADDA $1ABB
    cpu.state_.a += 0x1ABB;

    // B769: EXG DP,DP
    // TODO: Convert EXG DP,DP

    // B76B: LBRA $EF1B
    // TODO: Convert LBRA $EF1B

    // B76E: JSR $B948
    cpu.call_function(0xB948);

    // B771: LDA #$06
    cpu.state_.a = 0x06;

    // B773: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B775: LDA #$18
    cpu.state_.a = 0x18;

    // B777: STA $D,X
    // TODO: Handle indexed addressing: STA $D,X

    // B779: LDD #$0000
    cpu.state_.d = 0x0000;

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
    cpu.state_.d = 0x0000;

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
    cpu.state_.d = 0x0000;

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
    cpu.state_.a = 0x07;

    // B7AB: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B7AD: LDA #$18
    cpu.state_.a = 0x18;

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
    cpu.state_.a = 0x08;

    // B7DA: STA $C,X
    // TODO: Handle indexed addressing: STA $C,X

    // B7DC: LDA #$10
    cpu.state_.a = 0x10;

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
    cpu.state_.b = 0x80;

    // B7F8: BVC $0127
    // TODO: Convert BVC $0127

    // B7FC: BRA $0145
    cpu.state_.pc = 0xB843;

    // B7FE: ASL $9,X
    // TODO: Convert ASL $9,X

    // B800: ROL $8,X
    // TODO: Convert ROL $8,X

    // B802: BVC $0135
    // TODO: Convert BVC $0135

    // B804: ROR $8,X
    // TODO: Convert ROR $8,X

    // B806: ROR $9,X
    // TODO: Convert ROR $9,X

    // B80A: BRA $0145
    cpu.state_.pc = 0xB851;

    // B80C: ASL $B,X
    // TODO: Convert ASL $B,X

    // B80E: ROL $A,X
    // TODO: Convert ROL $A,X

    // B810: BVC $011F
    // TODO: Convert BVC $011F

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
    cpu.state_.b = cpu.read_memory(0x4703);

    // B824: STD $6,X
    // TODO: Handle indexed addressing: STD $6,X

    // B826: LDD $8,X
    // TODO: Fix comma operator: LDD $8,X

    // B828: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // B82A: JSR $CDA0
    cpu.call_function(0xCDA0);

    // B82D: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

    // B830: STD $8,X
    // TODO: Handle indexed addressing: STD $8,X

    // B832: LDD $A,X
    // TODO: Fix comma operator: LDD $A,X

    // B834: SUBD $4,X
    // TODO: Fix comma operator: SUBD $4,X

    // B836: JSR $CDA0
    cpu.call_function(0xCDA0);

    // B839: LDB $4703
    cpu.state_.b = cpu.read_memory(0x4703);

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
    cpu.state_.d = 0x0001;

    // B855: STD <$01
    cpu.write_memory(0x01, cpu.state_.d);

    // B857: LDD #$0203
    cpu.state_.d = 0x0203;

    // B85A: STD <$03
    cpu.write_memory(0x03, cpu.state_.d);

    // B85C: BRA $0191
    cpu.state_.pc = 0xB7EF;

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

    // B8D5: LDB $4700
    cpu.state_.b = cpu.read_memory(0x4700);

}

} // namespace StarWars