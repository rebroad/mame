#include "cpu_6809.h"

namespace StarWars {

void routine_624b_640e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_624b_640e.md
    // Address: 0x624B_640E

    // 624B: LDA $4591
    cpu.m_a = cpu.read_memory(0x4591);

    // 624E: ANDA #$03
    cpu.m_a &= 0x03;

    // 6250: BNE $6257
    if (!cpu.zero_flag()) cpu.m_pc = 0x6257;

    // 6252: LDA #$01
    cpu.m_a = 0x01;

    // 6254: STA $4814
    cpu.write_memory(0x4814, cpu.m_a);

    // 6257: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 625A: BEQ $6269
    if (cpu.zero_flag()) cpu.m_pc = 0x6269;

    // 625C: LDA <$AC
    cpu.m_a = cpu.read_memory(0xAC);

    // 625E: ANDA #$F0
    cpu.m_a &= 0xF0;

    // 6260: BEQ $6269
    if (cpu.zero_flag()) cpu.m_pc = 0x6269;

    // 6262: LDA #$19
    cpu.m_a = 0x19;

    // 6264: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6266: DEC $4814
    // TODO: Convert DEC $4814

    // 6269: LDA $481E
    cpu.m_a = cpu.read_memory(0x481E);

    // 626C: ANDA #$10
    cpu.m_a &= 0x10;

    // 626E: BNE $6274
    if (!cpu.zero_flag()) cpu.m_pc = 0x6274;

    // 6270: LDA #$01
    cpu.m_a = 0x01;

    // 6272: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 6275: ORCC #$10
    cpu.m_cc |= 0x10;

    // 6277: LDX #$4534
    cpu.m_x = 0x4534;

    // 627A: JSR $C6D4
    cpu.call_function(0xC6D4);

    // 627D: LDX #$4AFA
    cpu.m_x = 0x4AFA;

    // 6280: JSR $62D5
    cpu.call_function(0x62D5);

    // 6283: STA $4866
    cpu.write_memory(0x4866, cpu.m_a);

    // 6286: LDX #$4AFB
    cpu.m_x = 0x4AFB;

    // 6289: JSR $62D5
    cpu.call_function(0x62D5);

    // 628C: STA $4868
    cpu.write_memory(0x4868, cpu.m_a);

    // 628F: LDX #$4AFC
    cpu.m_x = 0x4AFC;

    // 6292: JSR $62D5
    cpu.call_function(0x62D5);

    // 6295: STA $486F
    cpu.write_memory(0x486F, cpu.m_a);

    // 6298: LDX #$4AFD
    cpu.m_x = 0x4AFD;

    // 629B: JSR $62D5
    cpu.call_function(0x62D5);

    // 629E: STA $4871
    cpu.write_memory(0x4871, cpu.m_a);

    // 62A1: ANDCC #$EF
    // TODO: Convert ANDCC #$EF

    // 62A3: LDA #$0B
    cpu.m_a = 0x0B;

    // 62A5: STA <$41
    cpu.write_memory(0x41, cpu.m_a);

    // 62A7: LDA #$FF
    cpu.m_a = 0xFF;

    // 62A9: STA $4B34
    cpu.write_memory(0x4B34, cpu.m_a);

    // 62AC: JSR $61B5
    cpu.call_function(0x61B5);

    // 62AF: JSR $615A
    cpu.call_function(0x615A);

    // 62B2: JSR $611E
    cpu.call_function(0x611E);

    // 62B5: JSR $61EC
    cpu.call_function(0x61EC);

    // 62B8: JSR $D91A
    cpu.call_function(0xD91A);

    // 62BB: LDA #$00
    cpu.m_a = 0x00;

    // 62BD: STA <$5C
    cpu.write_memory(0x5C, cpu.m_a);

    // 62BF: STA <$5D
    cpu.write_memory(0x5D, cpu.m_a);

    // 62C1: STA <$5E
    cpu.write_memory(0x5E, cpu.m_a);

    // 62C3: STA <$5F
    cpu.write_memory(0x5F, cpu.m_a);

    // 62C5: STA <$8B
    cpu.write_memory(0x8B, cpu.m_a);

    // 62C7: STA <$8C
    cpu.write_memory(0x8C, cpu.m_a);

    // 62C9: JSR $CC18
    cpu.call_function(0xCC18);

    // 62CC: LDA #$FF
    cpu.m_a = 0xFF;

    // 62CE: STA $4AEC
    cpu.write_memory(0x4AEC, cpu.m_a);

    // 62D1: STA $4818
    cpu.write_memory(0x4818, cpu.m_a);

    // 62D5: LDA #$40
    cpu.m_a = 0x40;

    // 62D7: CMPA ,X
    // TODO: Complex indexed addressing: ,X

    // 62D9: BLS $62E3
    // TODO: Convert BLS $62E3

    // 62DB: SUBA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E1: ADDA ,X
    // TODO: Complex indexed addressing: ,X

    // 62E4: LDD #$0000
    cpu.m_d = 0x0000;

    // 62E7: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 62EA: LDD #$0200
    cpu.m_d = 0x0200;

    // 62ED: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 62F0: LDA #$0F
    cpu.m_a = 0x0F;

    // 62F2: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 62F5: LDA #$1F
    cpu.m_a = 0x1F;

    // 62F7: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.m_a);

    // 62FA: LDD #$6480
    cpu.m_d = 0x6480;

    // 62FD: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);

    // 6300: JSR $D91A
    cpu.call_function(0xD91A);

    // 6303: INC <$41
    // TODO: Convert INC <$41

    // 6306: JSR $6112
    cpu.call_function(0x6112);

    // 6309: JSR $761D
    cpu.call_function(0x761D);

    // 630C: JSR $63D5
    cpu.call_function(0x63D5);

    // 630F: JSR $6368
    cpu.call_function(0x6368);

    // 6312: JSR $CD80
    cpu.call_function(0xCD80);

    // 6315: JSR $612F
    cpu.call_function(0x612F);

    // 6318: JSR $6DB6
    cpu.call_function(0x6DB6);

    // 631B: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 631E: BPL $6322
    if (!cpu.negative_flag()) cpu.m_pc = 0x6322;

    // 6320: INC <$41
    // TODO: Convert INC <$41

    // 6322: JSR $622D
    cpu.call_function(0x622D);

    // 6326: LDD #$03C0
    cpu.m_d = 0x03C0;

    // 6329: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 632C: LDD #$0200
    cpu.m_d = 0x0200;

    // 632F: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6332: LDA #$23
    cpu.m_a = 0x23;

    // 6334: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 6337: LDA #$2C
    cpu.m_a = 0x2C;

    // 6339: STA $4ADC
    cpu.write_memory(0x4ADC, cpu.m_a);

    // 633C: LDD #$6580
    cpu.m_d = 0x6580;

    // 633F: STD $4B10
    cpu.write_memory16(0x4B10, cpu.m_d);

    // 6342: JSR $D91A
    cpu.call_function(0xD91A);

    // 6345: INC <$41
    // TODO: Convert INC <$41

    // 6348: JSR $6112
    cpu.call_function(0x6112);

    // 634B: JSR $761D
    cpu.call_function(0x761D);

    // 634E: JSR $63D5
    cpu.call_function(0x63D5);

    // 6351: JSR $6368
    cpu.call_function(0x6368);

    // 6354: JSR $CD80
    cpu.call_function(0xCD80);

    // 6357: JSR $612F
    cpu.call_function(0x612F);

    // 635A: JSR $6DC0
    cpu.call_function(0x6DC0);

    // 635D: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 6360: BPL $6364
    if (!cpu.negative_flag()) cpu.m_pc = 0x6364;

    // 6362: INC <$41
    // TODO: Convert INC <$41

    // 6364: JSR $622D
    cpu.call_function(0x622D);

    // 6368: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 636B: SUBD #$0001
    cpu.m_d -= 0x0001;

    // 636E: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 6371: ANDB #$07
    cpu.m_b &= 0x07;

    // 6373: BNE $639D
    if (!cpu.zero_flag()) cpu.m_pc = 0x639D;

    // 6375: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6378: BMI $637D
    if (cpu.negative_flag()) cpu.m_pc = 0x637D;

    // 637A: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 637D: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6380: CMPA #$12
    cpu.compare_a(0x12);

    // 6382: BNE $638E
    if (!cpu.zero_flag()) cpu.m_pc = 0x638E;

    // 6384: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);

    // 6387: ANDA #$03
    cpu.m_a &= 0x03;

    // 6389: ADDA #$1F
    cpu.m_a += 0x1F;

    // 638B: JSR $D8DF
    cpu.call_function(0xD8DF);

    // 638E: LDA $4ADB
    cpu.m_a = cpu.read_memory(0x4ADB);

    // 6391: ADDA #$01
    cpu.m_a += 0x01;

    // 6393: CMPA $4ADC
    cpu.compare_a(cpu.read_memory(0x4ADC));

    // 6396: BCS $639A
    if (cpu.carry_flag()) cpu.m_pc = 0x639A;

    // 6398: LDA #$80
    cpu.m_a = 0x80;

    // 639A: STA $4ADB
    cpu.write_memory(0x4ADB, cpu.m_a);

    // 639D: LDD $4B0C
    cpu.m_d = cpu.read_memory16(0x4B0C);

    // 63A0: SUBD #$0008
    cpu.m_d -= 0x0008;

    // 63A3: BPL $63A8
    if (!cpu.negative_flag()) cpu.m_pc = 0x63A8;

    // 63A5: LDD #$0000
    cpu.m_d = 0x0000;

    // 63A8: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);

    // 63AB: LDD $4B0E
    cpu.m_d = cpu.read_memory16(0x4B0E);

    // 63AE: CMPD #$00C0
    // TODO: Convert CMPD #$00C0

    // 63B2: BCC $63C6
    if (!cpu.carry_flag()) cpu.m_pc = 0x63C6;

    // 63B4: LDB $4B11
    cpu.m_b = cpu.read_memory(0x4B11);

    // 63B7: SUBB #$01
    cpu.m_b -= 0x01;

    // 63B9: CMPB #$10
    cpu.compare_b(0x10);

    // 63BB: BCC $63C3
    if (!cpu.carry_flag()) cpu.m_pc = 0x63C3;

    // 63BD: LDD #$0000
    cpu.m_d = 0x0000;

    // 63C0: STD $4B0E
    cpu.write_memory16(0x4B0E, cpu.m_d);

    // 63C3: STB $4B11
    cpu.write_memory(0x4B11, cpu.m_b);

    // 63C6: LDD $4B0C
    cpu.m_d = cpu.read_memory16(0x4B0C);

    // 63C9: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);

    // 63CC: LDD $4B10
    cpu.m_d = cpu.read_memory16(0x4B10);

    // 63CF: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);

    // 63D1: JSR $D942
    cpu.call_function(0xD942);

    // 63D5: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 63D8: BNE $63EB
    if (!cpu.zero_flag()) cpu.m_pc = 0x63EB;

    // 63DA: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 63DC: ANDA #$10
    cpu.m_a &= 0x10;

    // 63DE: BNE $63E4
    if (!cpu.zero_flag()) cpu.m_pc = 0x63E4;

    // 63E0: LDB #$06
    cpu.m_b = 0x06;

    // 63E2: BRA $63E6
    goto label_63E6;

    // 63E4: LDB #$05
    cpu.m_b = 0x05;

    // 63E6: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63E9: BRA $63F0
    goto label_63F0;

    // 63EB: LDB #$0B
    cpu.m_b = 0x0B;

    // 63ED: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 63F0: LDA $4814
    cpu.m_a = cpu.read_memory(0x4814);

    // 63F3: BNE $6410
    if (!cpu.zero_flag()) cpu.m_pc = 0x6410;

    // 63F5: LDA $4812
    cpu.m_a = cpu.read_memory(0x4812);

    // 63F8: BEQ $6404
    if (cpu.zero_flag()) cpu.m_pc = 0x6404;

    // 63FA: LDA <$43
    cpu.m_a = cpu.read_memory(0x43);

    // 63FC: ANDA #$10
    cpu.m_a &= 0x10;

    // 63FE: BEQ $6404
    if (cpu.zero_flag()) cpu.m_pc = 0x6404;

    // 6400: BRA $6410
    goto label_6410;

    // 6402: BRA $640E
    goto label_640E;

    // 6404: LDB $4591
    cpu.m_b = cpu.read_memory(0x4591);

    // 6407: ANDB #$03
    cpu.m_b &= 0x03;

    // 6409: ADDB #$07
    cpu.m_b += 0x07;

    // 640B: JSR $E7C7
    cpu.call_function(0xE7C7);

    // 640E: JMP $640e
    goto label_640E;

}

} // namespace StarWars