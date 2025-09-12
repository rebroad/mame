#include "cpu_6809.h"

namespace StarWars {

void routine_64cd_impl(StarWarsCPU& cpu) {
    // Converted from rom_disasm_64cd.md
    // Address: 0x64CD

    // 64CD: LDB #$00
    cpu.state_.b = 0x00;

    // 64CF: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D2: LDB #$01
    cpu.state_.b = 0x01;

    // 64D4: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64D7: LDB #$02
    cpu.state_.b = 0x02;

    // 64D9: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64DC: LDB #$03
    cpu.state_.b = 0x03;

    // 64DE: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 64E2: JSR $D91A
    cpu.call_function(0xD91A);

    // 64E5: LDD #$0000
    cpu.state_.d = 0x0000;

    // 64E8: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 64EB: STD $48AF
    cpu.write_memory(0x48AF, cpu.state_.d);

    // 64EE: INC <$41
    // TODO: Convert INC <$41

    // 64F1: JSR $6112
    cpu.call_function(0x6112);

    // 64F4: JSR $BE20
    cpu.call_function(0xBE20);

    // 64F7: JSR $D923
    cpu.call_function(0xD923);

    // 64FA: JSR $612F
    cpu.call_function(0x612F);

    // 64FD: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // 64FF: ANDA #$04
    cpu.state_.a &= 0x04;

    // 6501: BEQ $003A
    if (cpu.zero_flag()) cpu.state_.pc += 0x003A;

    // 6503: LDA #$03
    cpu.state_.a = 0x03;

    // 6505: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6507: LDA $481E
    cpu.state_.a = cpu.read_memory(0x481E);

    // 650A: ANDA #$10
    cpu.state_.a &= 0x10;

    // 650C: BEQ $0045
    if (cpu.zero_flag()) cpu.state_.pc += 0x0045;

    // 650E: LDA #$05
    cpu.state_.a = 0x05;

    // 6510: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 6513: JSR $D91A
    cpu.call_function(0xD91A);

    // 6516: LDA #$0A
    cpu.state_.a = 0x0A;

    // 6518: STA $4AF6
    cpu.write_memory(0x4AF6, cpu.state_.a);

    // 651B: LDA #$00
    cpu.state_.a = 0x00;

    // 651D: STA $4598
    cpu.write_memory(0x4598, cpu.state_.a);

    // 6520: STA $4AF7
    cpu.write_memory(0x4AF7, cpu.state_.a);

    // 6523: LDA #$03
    cpu.state_.a = 0x03;

    // 6525: JSR $C2C3
    cpu.call_function(0xC2C3);

    // 6528: BEQ $0062
    if (cpu.zero_flag()) cpu.state_.pc += 0x0062;

    // 652A: LDA #$03
    cpu.state_.a = 0x03;

    // 652C: JSR $C369
    cpu.call_function(0xC369);

    // 652F: INC <$41
    // TODO: Convert INC <$41

    // 6532: JSR $6112
    cpu.call_function(0x6112);

    // 6535: JSR $C450
    cpu.call_function(0xC450);

    // 6538: LDD #$6780
    cpu.state_.d = 0x6780;

    // 653B: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 653D: LDB #$66
    cpu.state_.b = 0x66;

    // 653F: ADDB $4AF6
    cpu.state_.b += 0x4AF6;

    // 6542: JSR $E7D3
    cpu.call_function(0xE7D3);

    // 6545: LDA $4AF6
    cpu.state_.a = cpu.read_memory(0x4AF6);

    // 6548: JSR $C5A4
    cpu.call_function(0xC5A4);

    // 654B: JSR $C4EB
    cpu.call_function(0xC4EB);

    // 654E: JSR $D923
    cpu.call_function(0xD923);

    // 6551: JSR $612F
    cpu.call_function(0x612F);

    // 6554: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // 6556: ANDA #$04
    cpu.state_.a &= 0x04;

    // 6558: BEQ $0090
    if (cpu.zero_flag()) cpu.state_.pc += 0x0090;

    // 655A: JMP $F261
    cpu.state_.pc = 0xF261;

    // 655D: LDA $481E
    cpu.state_.a = cpu.read_memory(0x481E);

    // 6560: ANDA #$10
    cpu.state_.a &= 0x10;

    // 6562: BEQ $009E
    if (cpu.zero_flag()) cpu.state_.pc += 0x009E;

    // 6564: JSR $D91A
    cpu.call_function(0xD91A);

    // 6567: LDA #$05
    cpu.state_.a = 0x05;

    // 6569: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 656C: LDD #$0100
    cpu.state_.d = 0x0100;

    // 656F: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6572: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6575: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 6578: STD $48AF
    cpu.write_memory(0x48AF, cpu.state_.d);

    // 657B: LDD #$6480
    cpu.state_.d = 0x6480;

    // 657E: STD $4B10
    cpu.write_memory(0x4B10, cpu.state_.d);

    // 6581: JSR $D91A
    cpu.call_function(0xD91A);

    // 6584: LDB #$2C
    cpu.state_.b = 0x2C;

    // 6586: TFR B,A
    cpu.state_.a = cpu.state_.b;

    // 6588: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 658C: CMPB #$3A
    cpu.compare_b(0x3A);

    // 658E: BCS $00B9
    if (cpu.carry_flag()) cpu.state_.pc += 0x00B9;

    // 6590: INC <$41
    // TODO: Convert INC <$41

    // 6593: NEG <$64
    // TODO: Convert NEG <$64

    // 6595: LDU $70FE
    cpu.state_.u = cpu.read_memory_word(0x70FE);

    // 6598: ANDB <$00
    cpu.state_.b &= 0x00;

    // 659A: NEG <$00
    // TODO: Convert NEG <$00

    // 659C: LSR $1,X
    // TODO: Convert LSR $1,X

    // 659E: SUBA <$FC
    cpu.state_.a -= 0xFC;

    // 65A1: JMP <$83
    cpu.state_.pc = 0x83;

    // 65A3: NEG <$01
    // TODO: Convert NEG <$01

    // 65A5: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 65A8: BPL $00F0
    if (!cpu.negative_flag()) cpu.state_.pc += 0x00F0;

    // 65AA: LDA #$00
    cpu.state_.a = 0x00;

    // 65AC: STA $4B15
    cpu.write_memory(0x4B15, cpu.state_.a);

    // 65AF: LDA #$1B
    cpu.state_.a = 0x1B;

    // 65B1: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 65B3: CLR $481B
    cpu.write_memory(0x481B, 0);

    // 65B6: CLR $481A
    cpu.write_memory(0x481A, 0);

    // 65B9: CLR $4819
    cpu.write_memory(0x4819, 0);

    // 65BD: JSR $6112
    cpu.call_function(0x6112);

    // 65C0: LDX #$6593
    cpu.state_.x = 0x6593;

    // 65C3: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // 65C5: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // 65C7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65C9: LDD ,X++
    cpu.state_.d = cpu.read_memory_word(cpu.state_.x++);

    // 65CB: ANDA #$1F
    cpu.state_.a &= 0x1F;

    // 65CD: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65CF: LDD #$7200
    cpu.state_.d = 0x7200;

    // 65D2: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65D4: LDD #$BE50
    cpu.state_.d = 0xBE50;

    // 65D7: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65D9: CMPX #$659F
    cpu.compare_x(0x659F);

    // 65DC: BCS $00F6
    if (cpu.carry_flag()) cpu.state_.pc += 0x00F6;

    // 65DE: LDA <$DD
    cpu.state_.a = cpu.read_memory(0xDD);

    // 65E0: BPL $011A
    if (!cpu.negative_flag()) cpu.state_.pc += 0x011A;

    // 65E2: LDD #$6380
    cpu.state_.d = 0x6380;

    // 65E5: BRA $011D
    cpu.state_.pc += 0x011D;

    // 65E7: LDD #$6680
    cpu.state_.d = 0x6680;

    // 65EA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65EC: JSR $B6C0
    cpu.call_function(0xB6C0);

    // 65EF: JSR $D923
    cpu.call_function(0xD923);

    // 65F2: LDD #$00C8
    cpu.state_.d = 0x00C8;

    // 65F5: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65F7: LDD #$1FF0
    cpu.state_.d = 0x1FF0;

    // 65FA: STD ,Y++
    cpu.write_memory(cpu.state_.y++, cpu.state_.d);

    // 65FC: LDD $4B0E
    cpu.state_.d = cpu.read_memory_word(0x4B0E);

    // 6605: CMPA #$0A
    cpu.compare_a(0x0A);

    // 6607: BCS $013E
    if (cpu.carry_flag()) cpu.state_.pc += 0x013E;

    // 6609: ADDA #$06
    cpu.state_.a += 0x06;

    // 660B: JSR $E790
    cpu.call_function(0xE790);

    // 660E: JSR $612F
    cpu.call_function(0x612F);

    // 6611: LDA #$FF
    cpu.state_.a = 0xFF;

    // 6613: STA <$DD
    cpu.write_memory(0xDD, cpu.state_.a);

    // 6615: LDX #$6593
    cpu.state_.x = 0x6593;

    // 6618: LDD <$7B
    cpu.state_.d = cpu.read_memory_word(0x7B);

    // 661A: ADDD #$FF98
    cpu.state_.d += 0xFF98;

    // 661D: SUBD ,X
    // TODO: Complex indexed addressing: ,X

    // 6620: BPL $0159
    if (!cpu.negative_flag()) cpu.state_.pc += 0x0159;

    // 6624: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 6626: STD $4AFA
    cpu.write_memory(0x4AFA, cpu.state_.d);

    // 6629: CMPD #$0048
    // TODO: Convert CMPD #$0048

    // 662D: BCC $019B
    if (!cpu.carry_flag()) cpu.state_.pc += 0x019B;

    // 662F: LDD <$79
    cpu.state_.d = cpu.read_memory_word(0x79);

    // 6631: SUBD $2,X
    // TODO: Fix comma operator: SUBD $2,X

    // 6634: BPL $016D
    if (!cpu.negative_flag()) cpu.state_.pc += 0x016D;

    // 6638: SBCA #$FF
    // TODO: Convert SBCA #$FF

    // 663A: CMPD #$0034
    // TODO: Convert CMPD #$0034

    // 663E: BCC $019B
    if (!cpu.carry_flag()) cpu.state_.pc += 0x019B;

    // 6640: ADDD $4AFA
    cpu.state_.d += 0x4AFA;

    // 6643: CMPD #$0050
    // TODO: Convert CMPD #$0050

    // 6647: BCC $019B
    if (!cpu.carry_flag()) cpu.state_.pc += 0x019B;

    // 6649: TFR X,D
    cpu.state_.d = cpu.state_.x;

    // 664B: SUBD #$6593
    cpu.state_.d -= 0x6593;

    // 664F: STB <$DD
    cpu.write_memory(0xDD, cpu.state_.b);

    // 6651: STB $4B15
    cpu.write_memory(0x4B15, cpu.state_.b);

    // 6654: LDA <$AC
    cpu.state_.a = cpu.read_memory(0xAC);

    // 6656: ANDA #$F0
    cpu.state_.a &= 0xF0;

    // 6658: BEQ $019A
    if (cpu.zero_flag()) cpu.state_.pc += 0x019A;

    // 665A: LDA #$1B
    cpu.state_.a = 0x1B;

    // 665C: STA <$41
    cpu.write_memory(0x41, cpu.state_.a);

    // 665E: CLR $481B
    cpu.write_memory(0x481B, 0);

    // 6661: CLR $481A
    cpu.write_memory(0x481A, 0);

    // 6664: CLR $4819
    cpu.write_memory(0x4819, 0);

    // 6668: LEAX $4,X
    // TODO: Fix comma operator: LEAX $4,X

    // 666A: CMPX #$659F
    cpu.compare_x(0x659F);

    // 666D: BCS $014B
    if (cpu.carry_flag()) cpu.state_.pc += 0x014B;

    // 6670: LDD #$0000
    cpu.state_.d = 0x0000;

    // 6673: STD $4B0E
    cpu.write_memory(0x4B0E, cpu.state_.d);

    // 6676: STD $4B0C
    cpu.write_memory(0x4B0C, cpu.state_.d);

    // 6679: STD $48AF
    cpu.write_memory(0x48AF, cpu.state_.d);

    // 667C: LDD #$6180
    cpu.state_.d = 0x6180;

    // 667F: STD $4B10
    cpu.write_memory(0x4B10, cpu.state_.d);

    // 6682: JSR $D91A
    cpu.call_function(0xD91A);

    // 6685: LDA #$3A
    cpu.state_.a = 0x3A;

    // 6687: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 668A: LDA #$3B
    cpu.state_.a = 0x3B;

    // 668C: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 668F: LDA #$3C
    cpu.state_.a = 0x3C;

    // 6691: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 6694: LDA #$3D
    cpu.state_.a = 0x3D;

    // 6696: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 6699: LDA #$3E
    cpu.state_.a = 0x3E;

    // 669B: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 669E: LDA #$3D
    cpu.state_.a = 0x3D;

    // 66A0: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 66A3: JSR $BD80
    cpu.call_function(0xBD80);

    // 66A6: JSR $CC38
    cpu.call_function(0xCC38);

    // 66A9: INC <$41
    // TODO: Convert INC <$41

    // 66AC: JSR $6112
    cpu.call_function(0x6112);

    // 66AF: JSR $761D
    cpu.call_function(0x761D);

    // 66B2: JSR $63D5
    cpu.call_function(0x63D5);

    // 66B5: JSR $C7FD
    cpu.call_function(0xC7FD);

    // 66B8: JSR $D923
    cpu.call_function(0xD923);

    // 66BB: JSR $612F
    cpu.call_function(0x612F);

    // 66BE: JSR $CAF3
    cpu.call_function(0xCAF3);

    // 66C1: LDA $481E
    cpu.state_.a = cpu.read_memory(0x481E);

    // 66C4: ANDA #$10
    cpu.state_.a &= 0x10;

    // 66C6: BNE $0201
    if (!cpu.zero_flag()) cpu.state_.pc += 0x0201;

    // 66C8: LDD #$0300
    cpu.state_.d = 0x0300;

    // 66CB: STD $4B00
    cpu.write_memory(0x4B00, cpu.state_.d);

}

} // namespace StarWars