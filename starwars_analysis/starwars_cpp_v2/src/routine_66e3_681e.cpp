#include "cpu_6809.h"

namespace StarWars {

void routine_66e3_681e_impl(CPU6809& cpu) {
    // Converted from rom_disasm_66e3_681e.md
    // Address: 0x66E3_681E

    label_66E3:
    // 66E3: LDD $4AEC
    cpu.m_d = cpu.read_memory16(0x4AEC);
    // 66E6: BPL $6707
    if (!cpu.negative_flag()) cpu.m_pc = 0x6707;
    // 66E8: LDA #$0B
    cpu.m_a = 0x0B;
    // 66EA: STA <$41
    cpu.write_memory(0x41, cpu.m_a);
    // 66EC: LDU #$4AB6
    cpu.m_u = 0x4AB6;
    // 66EF: LDX #$4520
    cpu.m_x = 0x4520;
    // 66F2: LDA #$08
    cpu.m_a = 0x08;
    // 66F4: JSR $C6F9
    cpu.call_function(0xC6F9);
    // 66F7: LDU #$4A8E
    cpu.m_u = 0x4A8E;
    // 66FA: LDX #$4508
    cpu.m_x = 0x4508;
    // 66FD: LDA #$0B
    cpu.m_a = 0x0B;
    // 66FF: JSR $C6F9
    cpu.call_function(0xC6F9);
    // 6702: LDA #$01
    cpu.m_a = 0x01;
    // 6704: JSR $C2B3
    cpu.call_function(0xC2B3);
    // 6707: RTS 
    return;
    // 6708: INC <$41
    // TODO: Convert INC <$41
    // 670A: JSR $611E
    cpu.call_function(0x611E);
    // 670D: JSR $D91A
    cpu.call_function(0xD91A);
    // 6710: LDD #$0000
    cpu.m_d = 0x0000;
    // 6713: STD $4B0C
    cpu.write_memory16(0x4B0C, cpu.m_d);
    // 6716: STD $48AF
    cpu.write_memory16(0x48AF, cpu.m_d);
    // 6719: JSR $D9DC
    cpu.call_function(0xD9DC);
    // 671C: JSR $61B5
    cpu.call_function(0x61B5);
    // 671F: JSR $615A
    cpu.call_function(0x615A);
    // 6722: LDU #$5038
    cpu.m_u = 0x5038;
    // 6725: JSR $CDC3
    cpu.call_function(0xCDC3);
    // 6728: LDA $4B34
    cpu.m_a = cpu.read_memory(0x4B34);
    // 672B: CMPA #$FF
    cpu.compare_a(0xFF);
    // 672D: BNE $6737
    if (!cpu.zero_flag()) cpu.m_pc = 0x6737;
    // 672F: LDA $4B06
    cpu.m_a = cpu.read_memory(0x4B06);
    // 6732: STA $4B34
    cpu.write_memory(0x4B34, cpu.m_a);
    // 6735: BRA $6758
    goto label_6758;
    // 6737: LDA $4B06
    cpu.m_a = cpu.read_memory(0x4B06);
    // 673A: CMPA $4B34
    cpu.compare_a(cpu.read_memory(0x4B34));
    // 673D: BEQ $6758
    if (cpu.zero_flag()) cpu.m_pc = 0x6758;
    // 673F: STA $4B34
    cpu.write_memory(0x4B34, cpu.m_a);
    // 6742: JSR $C20C
    cpu.call_function(0xC20C);
    // 6745: LDA $4592
    cpu.m_a = cpu.read_memory(0x4592);
    // 6748: ANDA #$04
    cpu.m_a &= 0x04;
    // 674A: BNE $6758
    if (!cpu.zero_flag()) cpu.m_pc = 0x6758;
    // 674C: LDX #$6759
    cpu.m_x = 0x6759;
    // 674F: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);
    // 6752: LDB #$09
    cpu.m_b = 0x09;
    // 6754: MUL 
    // TODO: Convert MUL 
    // 6755: ASLA 
    cpu.m_a <<= 1;
    // 6756: JSR [A,X]
    // TODO: Complex indexed addressing: [A,X]
    label_6758:
    // 6758: RTS 
    return;
    // 6759: JSR $7BBD
    cpu.call_function(0x7BBD);
    // 675C: SUBA #$BD
    cpu.m_a -= 0xBD;
    // 675E: XSTX #$BD9E
    // TODO: Convert XSTX #$BD9E
    // 6761: JSR $ADBD
    cpu.call_function(0xADBD);
    // 6764: EORA [$0125,PCR]
    // TODO: Complex indexed addressing: [$0125,PCR]
    // 6768: ANDA <$BD
    cpu.m_a &= 0xBD;
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
    // 6786: RTS 
    return;
    // 6787: LDA #$05
    cpu.m_a = 0x05;
    // 6789: STA $4B0E
    cpu.write_memory(0x4B0E, cpu.m_a);
    // 678C: LDA #$FF
    cpu.m_a = 0xFF;
    // 678E: STA $4B34
    cpu.write_memory(0x4B34, cpu.m_a);
    // 6791: JSR $D91A
    cpu.call_function(0xD91A);
    // 6794: JSR $BD44
    cpu.call_function(0xBD44);
    // 6797: INC <$41
    // TODO: Convert INC <$41
    // 6799: RTS 
    return;
    // 679A: LDA #$0D
    cpu.m_a = 0x0D;
    // 679C: STA <$41
    cpu.write_memory(0x41, cpu.m_a);
    // 679E: LDD #$0000
    cpu.m_d = 0x0000;
    // 67A1: STD <$42
    cpu.write_memory16(0x42, cpu.m_d);
    // 67A3: STA <$DD
    cpu.write_memory(0xDD, cpu.m_a);
    // 67A5: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);
    // 67A8: ANDA #$03
    cpu.m_a &= 0x03;
    // 67AA: ADDA #$06
    cpu.m_a += 0x06;
    // 67AC: STA <$60
    cpu.write_memory(0x60, cpu.m_a);
    // 67AE: STA <$8E
    cpu.write_memory(0x8E, cpu.m_a);
    // 67B0: LDA $4593
    cpu.m_a = cpu.read_memory(0x4593);
    // 67B3: LSRA 
    cpu.m_a >>= 1;
    // 67B4: LSRA 
    cpu.m_a >>= 1;
    // 67B5: ANDA #$03
    cpu.m_a &= 0x03;
    // 67B7: STA $4B18
    cpu.write_memory(0x4B18, cpu.m_a);
    // 67BA: LDA #$00
    cpu.m_a = 0x00;
    // 67BC: STA $4B17
    cpu.write_memory(0x4B17, cpu.m_a);
    // 67BF: STA <$8B
    cpu.write_memory(0x8B, cpu.m_a);
    // 67C1: STA <$8C
    cpu.write_memory(0x8C, cpu.m_a);
    // 67C3: STA <$5C
    cpu.write_memory(0x5C, cpu.m_a);
    // 67C5: STA <$5D
    cpu.write_memory(0x5D, cpu.m_a);
    // 67C7: STA <$5E
    cpu.write_memory(0x5E, cpu.m_a);
    // 67C9: STA <$5F
    cpu.write_memory(0x5F, cpu.m_a);
    // 67CB: STA $4B2D
    cpu.write_memory(0x4B2D, cpu.m_a);
    // 67CE: STA $4B37
    cpu.write_memory(0x4B37, cpu.m_a);
    // 67D1: STA $4B35
    cpu.write_memory(0x4B35, cpu.m_a);
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
    // 67E4: RTS 
    return;
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
    // 6801: RTS 
    return;
    // 6802: JSR $7A5A
    cpu.call_function(0x7A5A);
    // 6805: LDX #$0008
    cpu.m_x = 0x0008;
    // 6808: LDA $4B15
    cpu.m_a = cpu.read_memory(0x4B15);
    // 680B: INCA 
    cpu.m_a++;
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
    // 681A: BLS $681E
    // TODO: Convert BLS $681E
    // 681C: LDA #$1F
    cpu.m_a = 0x1F;
    label_681E:
    // 681E: JMP $681e
    goto label_681E;
}

} // namespace StarWars