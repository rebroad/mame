#include "cpu_6809.h"

namespace StarWars {

void routine_a849_adbd_impl(CPU6809& cpu) {
    // Converted from rom_disasm_a849_adbd.md
    // Address: 0xA849_ADBD

    label_A849:
    // A849: LDX #$494B
    cpu.m_x = 0x494B;
    // A84C: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);
    // A84E: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // A850: BEQ $A861
    if (cpu.zero_flag()) cpu.m_pc = 0xA861;
    // A852: LDB $4,X
    // TODO: Fix comma operator: LDB $4,X
    // A854: ASLB 
    cpu.m_b <<= 1;
    // A855: CMPB #$16
    cpu.compare_b(0x16);
    // A857: BCC $A860
    if (!cpu.carry_flag()) cpu.m_pc = 0xA860;
    // A859: LDU #$A675
    cpu.m_u = 0xA675;
    // A85C: JSR [B,U]
    // TODO: Complex indexed addressing: [B,U]
    // A85E: BRA $A861
    goto label_A861;
    // A860: SWI 
    // TODO: Convert SWI 
    label_A861:
    // A861: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // A863: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X
    // A865: CMPX #$496F
    cpu.compare_x(0x496F);
    // A868: BCS $A84C
    if (cpu.carry_flag()) cpu.m_pc = 0xA84C;
    // A86A: RTS 
    return;
    // A86B: DEC $5,X
    // TODO: Convert DEC $5,X
    // A86D: BGT $A874
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA874;
    // A86F: CLRB 
    cpu.m_b = 0;
    // A870: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X
    // A872: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X
    // A874: RTS 
    return;
    // A875: DEC $5,X
    // TODO: Convert DEC $5,X
    // A877: BGT $A880
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA880;
    // A879: CLRB 
    cpu.m_b = 0;
    // A87A: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X
    // A87C: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X
    // A87E: BRA $A8A6
    goto label_A8A6;
    // A880: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A882: LDD #$0000
    cpu.m_d = 0x0000;
    // A885: SUBD ,U
    // TODO: Complex indexed addressing: ,U
    // A887: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A88A: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A88C: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A88E: LDD #$0000
    cpu.m_d = 0x0000;
    // A891: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U
    // A893: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A896: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A898: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A89A: LDD #$0000
    cpu.m_d = 0x0000;
    // A89D: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // A89F: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A8A2: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // A8A4: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    label_A8A6:
    // A8A6: RTS 
    return;
    // A8A7: DEC $5,X
    // TODO: Convert DEC $5,X
    // A8A9: BGT $A8B2
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA8B2;
    // A8AB: CLRB 
    cpu.m_b = 0;
    // A8AC: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X
    // A8AE: STB $5,X
    // TODO: Handle indexed addressing: STB $5,X
    // A8B0: BRA $A8D5
    goto label_A8D5;
    // A8B2: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A8B4: LDD ,U
    // TODO: Complex indexed addressing: ,U
    // A8B6: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A8B9: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A8BB: BVS $A8D6
    // TODO: Convert BVS $A8D6
    // A8BD: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A8BF: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U
    // A8C1: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A8C4: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A8C6: BVS $A8D6
    // TODO: Convert BVS $A8D6
    // A8C8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A8CA: LDD $4,U
    // TODO: Fix comma operator: LDD $4,U
    // A8CC: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A8CF: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // A8D1: BVS $A8D6
    // TODO: Convert BVS $A8D6
    // A8D3: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    label_A8D5:
    // A8D5: RTS 
    return;
    // A8D6: CLRB 
    cpu.m_b = 0;
    // A8D7: STB $3,X
    // TODO: Handle indexed addressing: STB $3,X
    // A8D9: RTS 
    return;
    // A8DA: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A8DC: LDD #$FF00
    cpu.m_d = 0xFF00;
    // A8DF: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A8E1: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A8E3: JMP $AA7D
    goto label_AA7D;
    // A8E6: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A8E8: LDD #$FF00
    cpu.m_d = 0xFF00;
    // A8EB: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A8ED: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A8EF: LDD #$FF00
    cpu.m_d = 0xFF00;
    // A8F2: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A8F4: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A8F6: JMP $AA7D
    goto label_AA7D;
    // A8F9: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A8FB: LDD #$FF00
    cpu.m_d = 0xFF00;
    // A8FE: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A900: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A902: LDD #$0100
    cpu.m_d = 0x0100;
    // A905: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A907: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A909: JMP $AA7D
    goto label_AA7D;
    // A90C: LDB ,U
    // TODO: Complex indexed addressing: ,U
    // A90E: SUBB $5098
    cpu.m_b -= 0x5098;
    // A911: BMI $A91F
    if (cpu.negative_flag()) cpu.m_pc = 0xA91F;
    // A913: CLRA 
    cpu.m_a = 0;
    // A914: JSR $CDB5
    cpu.call_function(0xCDB5);
    // A917: COMA 
    cpu.m_a = ~cpu.m_a;
    // A918: NEGB 
    cpu.m_b = -cpu.m_b;
    // A919: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // A91B: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // A91D: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // A91F: RTS 
    return;
    // A920: LDD #$0000
    cpu.m_d = 0x0000;
    // A923: SUBD $508E
    cpu.m_d -= 0x508E;
    // A926: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A929: ADDD $508E
    cpu.m_d += 0x508E;
    // A92C: BPL $A932
    if (!cpu.negative_flag()) cpu.m_pc = 0xA932;
    // A92E: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A930: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A932: RTS 
    return;
    // A933: LDD #$0000
    cpu.m_d = 0x0000;
    // A936: SUBD $508E
    cpu.m_d -= 0x508E;
    // A939: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A93C: ADDD $508E
    cpu.m_d += 0x508E;
    // A93F: BMI $A945
    if (cpu.negative_flag()) cpu.m_pc = 0xA945;
    // A941: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A943: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A945: RTS 
    return;
    // A946: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A948: JSR $A933
    cpu.call_function(0xA933);
    // A94B: JSR $A90C
    cpu.call_function(0xA90C);
    // A94E: LDD ,U
    // TODO: Complex indexed addressing: ,U
    // A950: SUBD $5098
    cpu.m_d -= 0x5098;
    // A953: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U
    // A955: MUL 
    // TODO: Convert MUL 
    // A956: TST $6,U
    // TODO: Convert TST $6,U
    // A958: BNE $A95E
    if (!cpu.zero_flag()) cpu.m_pc = 0xA95E;
    // A95A: COMA 
    cpu.m_a = ~cpu.m_a;
    // A95B: NEGB 
    cpu.m_b = -cpu.m_b;
    // A95C: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // A95E: ADDD $509A
    cpu.m_d += 0x509A;
    // A961: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U
    // A963: ADDD #$0100
    cpu.m_d += 0x0100;
    // A966: BMI $A978
    if (cpu.negative_flag()) cpu.m_pc = 0xA978;
    // A968: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A96B: CMPD #$0180
    // TODO: Convert CMPD #$0180
    // A96F: BLE $A974
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA974;
    // A971: LDD #$0180
    cpu.m_d = 0x0180;
    // A974: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A976: BRA $A986
    goto label_A986;
    // A978: JSR $CD9E
    cpu.call_function(0xCD9E);
    // A97B: CMPD #$FE80
    // TODO: Convert CMPD #$FE80
    // A97F: BGE $A984
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA984;
    // A981: LDD #$FE80
    cpu.m_d = 0xFE80;
    // A984: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    label_A986:
    // A986: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A988: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // A98B: ADDD #$0100
    cpu.m_d += 0x0100;
    // A98E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // A990: BMI $A9A2
    if (cpu.negative_flag()) cpu.m_pc = 0xA9A2;
    // A992: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A995: CMPD #$0200
    // TODO: Convert CMPD #$0200
    // A999: BLE $A99E
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA99E;
    // A99B: LDD #$0200
    cpu.m_d = 0x0200;
    // A99E: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // A9A0: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // A9A2: RTS 
    return;
    // A9A3: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // A9A5: JSR $A920
    cpu.call_function(0xA920);
    // A9A8: JSR $A90C
    cpu.call_function(0xA90C);
    // A9AB: LDD ,U
    // TODO: Complex indexed addressing: ,U
    // A9AD: SUBD $5098
    cpu.m_d -= 0x5098;
    // A9B0: LDB $7,U
    // TODO: Fix comma operator: LDB $7,U
    // A9B2: MUL 
    // TODO: Convert MUL 
    // A9B3: TST $6,U
    // TODO: Convert TST $6,U
    // A9B5: BEQ $A9BB
    if (cpu.zero_flag()) cpu.m_pc = 0xA9BB;
    // A9B7: COMA 
    cpu.m_a = ~cpu.m_a;
    // A9B8: NEGB 
    cpu.m_b = -cpu.m_b;
    // A9B9: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // A9BB: ADDD $509A
    cpu.m_d += 0x509A;
    // A9BE: ADDD #$FF00
    cpu.m_d += 0xFF00;
    // A9C1: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U
    // A9C3: BMI $A9D5
    if (cpu.negative_flag()) cpu.m_pc = 0xA9D5;
    // A9C5: JSR $CD9E
    cpu.call_function(0xCD9E);
    // A9C8: CMPD #$0180
    // TODO: Convert CMPD #$0180
    // A9CC: BLE $A9D1
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9D1;
    // A9CE: LDD #$0180
    cpu.m_d = 0x0180;
    // A9D1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // A9D3: BRA $A9E3
    goto label_A9E3;
    // A9D5: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A9D8: CMPD #$FE80
    // TODO: Convert CMPD #$FE80
    // A9DC: BGE $A9E1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xA9E1;
    // A9DE: LDD #$FE80
    cpu.m_d = 0xFE80;
    // A9E1: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    label_A9E3:
    // A9E3: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // A9E5: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // A9E8: ADDD #$0100
    cpu.m_d += 0x0100;
    // A9EB: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // A9ED: BMI $A9FF
    if (cpu.negative_flag()) cpu.m_pc = 0xA9FF;
    // A9EF: JSR $CDA2
    cpu.call_function(0xCDA2);
    // A9F2: CMPD #$0200
    // TODO: Convert CMPD #$0200
    // A9F6: BLE $A9FB
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xA9FB;
    // A9F8: LDD #$0200
    cpu.m_d = 0x0200;
    // A9FB: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // A9FD: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // A9FF: RTS 
    return;
    // AA00: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // AA02: LDD #$FF00
    cpu.m_d = 0xFF00;
    // AA05: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // AA07: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // AA09: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AA0C: ADDD #$0080
    cpu.m_d += 0x0080;
    // AA0F: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // AA11: BMI $AA23
    if (cpu.negative_flag()) cpu.m_pc = 0xAA23;
    // AA13: JSR $CDA2
    cpu.call_function(0xCDA2);
    // AA16: CMPD #$0180
    // TODO: Convert CMPD #$0180
    // AA1A: BLE $AA1F
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA1F;
    // AA1C: LDD #$0180
    cpu.m_d = 0x0180;
    // AA1F: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // AA21: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // AA23: BRA $AA7D
    goto label_AA7D;
    // AA25: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // AA27: LDD #$FF00
    cpu.m_d = 0xFF00;
    // AA2A: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // AA2C: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // AA2E: LDD #$FF00
    cpu.m_d = 0xFF00;
    // AA31: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // AA33: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // AA35: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AA38: ADDD #$0080
    cpu.m_d += 0x0080;
    // AA3B: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // AA3D: BMI $AA4F
    if (cpu.negative_flag()) cpu.m_pc = 0xAA4F;
    // AA3F: JSR $CDA2
    cpu.call_function(0xCDA2);
    // AA42: CMPD #$0180
    // TODO: Convert CMPD #$0180
    // AA46: BLE $AA4B
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA4B;
    // AA48: LDD #$0180
    cpu.m_d = 0x0180;
    // AA4B: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // AA4D: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // AA4F: BRA $AA7D
    goto label_AA7D;
    // AA51: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // AA53: LDD #$FF00
    cpu.m_d = 0xFF00;
    // AA56: ADDD ,U
    // TODO: Complex indexed addressing: ,U
    // AA58: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // AA5A: LDD #$0100
    cpu.m_d = 0x0100;
    // AA5D: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // AA5F: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // AA61: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AA64: ADDD #$0080
    cpu.m_d += 0x0080;
    // AA67: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // AA69: BMI $AA7B
    if (cpu.negative_flag()) cpu.m_pc = 0xAA7B;
    // AA6B: JSR $CDA2
    cpu.call_function(0xCDA2);
    // AA6E: CMPD #$0180
    // TODO: Convert CMPD #$0180
    // AA72: BLE $AA77
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAA77;
    // AA74: LDD #$0180
    cpu.m_d = 0x0180;
    // AA77: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // AA79: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // AA7B: BRA $AA7D
    goto label_AA7D;
    label_AA7D:
    // AA7D: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // AA7F: BITA #$02
    // TODO: Convert BITA #$02
    // AA81: BEQ $AA85
    if (cpu.zero_flag()) cpu.m_pc = 0xAA85;
    // AA83: CLR $3,X
    // TODO: Fix comma operator: CLR $3,X
    // AA85: RTS 
    return;
    // AA86: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // AA88: JSR $A90C
    cpu.call_function(0xA90C);
    // AA8B: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AA8E: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // AA90: BMI $AA99
    if (cpu.negative_flag()) cpu.m_pc = 0xAA99;
    // AA92: JSR $CDA0
    cpu.call_function(0xCDA0);
    // AA95: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // AA97: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // AA99: LDA $4B19
    cpu.m_a = cpu.read_memory(0x4B19);
    // AA9C: CMPA #$01
    cpu.compare_a(0x01);
    // AA9E: BCS $AAA5
    if (cpu.carry_flag()) cpu.m_pc = 0xAAA5;
    // AAA0: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);
    // AAA3: BRA $AAA8
    goto label_AAA8;
    // AAA5: LDD #$FE80
    cpu.m_d = 0xFE80;
    label_AAA8:
    // AAA8: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U
    // AAAA: BMI $AAB3
    if (cpu.negative_flag()) cpu.m_pc = 0xAAB3;
    // AAAC: JSR $CDA0
    cpu.call_function(0xCDA0);
    // AAAF: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // AAB1: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // AAB3: BRA $AA7D
    goto label_AA7D;
    // AAB5: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // AAB7: JSR $A90C
    cpu.call_function(0xA90C);
    // AABA: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AABD: SUBD $4,U
    // TODO: Fix comma operator: SUBD $4,U
    // AABF: BMI $AAC8
    if (cpu.negative_flag()) cpu.m_pc = 0xAAC8;
    // AAC1: JSR $CDA0
    cpu.call_function(0xCDA0);
    // AAC4: ADDD $4,U
    // TODO: Fix comma operator: ADDD $4,U
    // AAC6: STD $4,U
    // TODO: Handle indexed addressing: STD $4,U
    // AAC8: LDA $4B19
    cpu.m_a = cpu.read_memory(0x4B19);
    // AACB: CMPA #$01
    cpu.compare_a(0x01);
    // AACD: BCS $AAD4
    if (cpu.carry_flag()) cpu.m_pc = 0xAAD4;
    // AACF: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);
    // AAD2: BRA $AAD7
    goto label_AAD7;
    // AAD4: LDD #$0180
    cpu.m_d = 0x0180;
    label_AAD7:
    // AAD7: SUBD $2,U
    // TODO: Fix comma operator: SUBD $2,U
    // AAD9: BPL $AAE2
    if (!cpu.negative_flag()) cpu.m_pc = 0xAAE2;
    // AADB: JSR $CDA0
    cpu.call_function(0xCDA0);
    // AADE: ADDD $2,U
    // TODO: Fix comma operator: ADDD $2,U
    // AAE0: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // AAE2: BRA $AA7D
    goto label_AA7D;
    // AAE4: LDX #$494B
    cpu.m_x = 0x494B;
    // AAE7: STX <$A8
    cpu.write_memory16(0xA8, cpu.m_x);
    // AAE9: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // AAEB: LBEQ $AC34
    // TODO: Convert LBEQ $AC34
    // AAEF: BITA #$10
    // TODO: Convert BITA #$10
    // AAF1: BEQ $AAF9
    if (cpu.zero_flag()) cpu.m_pc = 0xAAF9;
    // AAF3: JSR $ACB1
    cpu.call_function(0xACB1);
    // AAF6: JMP $AC34
    goto label_AC34;
    // AAF9: BITA #$04
    // TODO: Convert BITA #$04
    // AAFB: BEQ $AB11
    if (cpu.zero_flag()) cpu.m_pc = 0xAB11;
    // AAFD: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);
    // AB00: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);
    // AB03: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);
    // AB06: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);
    // AB09: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AB0C: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);
    // AB0F: BRA $AB1D
    goto label_AB1D;
    // AB11: LDD #$0000
    cpu.m_d = 0x0000;
    // AB14: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);
    // AB17: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);
    // AB1A: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);
    label_AB1D:
    // AB1D: CLRA 
    cpu.m_a = 0;
    // AB1E: LDB $2,X
    // TODO: Fix comma operator: LDB $2,X
    // AB20: STD $4701
    cpu.write_memory16(0x4701, cpu.m_d);
    // AB23: LDA #$67
    cpu.m_a = 0x67;
    // AB25: JSR $CDBA
    cpu.call_function(0xCDBA);
    // AB28: LDD $5000
    cpu.m_d = cpu.read_memory16(0x5000);
    // AB2B: CMPD #$0001
    // TODO: Convert CMPD #$0001
    // AB2F: LBLE $AC27
    // TODO: Convert LBLE $AC27
    // AB33: CMPD #$7F00
    // TODO: Convert CMPD #$7F00
    // AB37: LBHI $AC27
    // TODO: Convert LBHI $AC27
    // AB3B: STD $4704
    cpu.write_memory16(0x4704, cpu.m_d);
    // AB3E: STD $5018
    cpu.write_memory16(0x5018, cpu.m_d);
    // AB41: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);
    // AB44: STD $501A
    cpu.write_memory16(0x501A, cpu.m_d);
    // AB47: BPL $AB4D
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB4D;
    // AB49: COMA 
    cpu.m_a = ~cpu.m_a;
    // AB4A: NEGB 
    cpu.m_b = -cpu.m_b;
    // AB4B: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // AB4D: SUBD $5000
    cpu.m_d -= 0x5000;
    // AB50: LBCC $AC27
    // TODO: Convert LBCC $AC27
    // AB54: LDD $5004
    cpu.m_d = cpu.read_memory16(0x5004);
    // AB57: STD $501C
    cpu.write_memory16(0x501C, cpu.m_d);
    // AB5A: BPL $AB60
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB60;
    // AB5C: COMA 
    cpu.m_a = ~cpu.m_a;
    // AB5D: NEGB 
    cpu.m_b = -cpu.m_b;
    // AB5E: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // AB60: SUBD $5000
    cpu.m_d -= 0x5000;
    // AB63: LBCC $AC27
    // TODO: Convert LBCC $AC27
    // AB67: JSR $CCF0
    cpu.call_function(0xCCF0);
    // AB6A: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // AB6C: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // AB6E: BITA #$03
    // TODO: Convert BITA #$03
    // AB70: BEQ $ABC0
    if (cpu.zero_flag()) cpu.m_pc = 0xABC0;
    // AB72: LDD #$0080
    cpu.m_d = 0x0080;
    // AB75: STD $5002
    cpu.write_memory16(0x5002, cpu.m_d);
    // AB78: LDA #$86
    cpu.m_a = 0x86;
    // AB7A: JSR $CDBA
    cpu.call_function(0xCDBA);
    // AB7D: LDD $5002
    cpu.m_d = cpu.read_memory16(0x5002);
    // AB80: ADDD #$000A
    cpu.m_d += 0x000A;
    // AB83: STD <$03
    cpu.write_memory16(0x03, cpu.m_d);
    // AB85: LDD <$D6
    cpu.m_d = cpu.read_memory16(0xD6);
    // AB87: SUBD <$B3
    cpu.m_d -= 0xB3;
    // AB89: BPL $AB8F
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB8F;
    // AB8B: COMA 
    cpu.m_a = ~cpu.m_a;
    // AB8C: NEGB 
    cpu.m_b = -cpu.m_b;
    // AB8D: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // AB8F: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);
    // AB91: SUBD <$03
    cpu.m_d -= 0x03;
    // AB93: BGT $ABC0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xABC0;
    // AB95: LDD <$D8
    cpu.m_d = cpu.read_memory16(0xD8);
    // AB97: SUBD <$B5
    cpu.m_d -= 0xB5;
    // AB99: BPL $AB9F
    if (!cpu.negative_flag()) cpu.m_pc = 0xAB9F;
    // AB9B: COMA 
    cpu.m_a = ~cpu.m_a;
    // AB9C: NEGB 
    cpu.m_b = -cpu.m_b;
    // AB9D: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // AB9F: CMPD <$03
    // TODO: Convert CMPD <$03
    // ABA2: BGT $ABC0
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xABC0;
    // ABA4: ADDD <$01
    cpu.m_d += 0x01;
    // ABA6: STD <$01
    cpu.write_memory16(0x01, cpu.m_d);
    // ABA8: LDD <$03
    cpu.m_d = cpu.read_memory16(0x03);
    // ABAA: LSRA 
    cpu.m_a >>= 1;
    // ABAB: RORB 
    cpu.m_b = (cpu.m_b >> 1) | (cpu.carry_flag() ? 0x80 : 0);
    // ABAC: ADDD <$03
    cpu.m_d += 0x03;
    // ABAE: SUBD <$01
    cpu.m_d -= 0x01;
    // ABB0: BLT $ABC0
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABC0;
    // ABB2: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);
    // ABB5: CMPD <$CC
    // TODO: Convert CMPD <$CC
    // ABB8: BCC $ABC0
    if (!cpu.carry_flag()) cpu.m_pc = 0xABC0;
    // ABBA: STD <$CC
    cpu.write_memory16(0xCC, cpu.m_d);
    // ABBC: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // ABBE: STX <$CA
    cpu.write_memory16(0xCA, cpu.m_x);
    // ABC0: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // ABC2: BITA #$01
    // TODO: Convert BITA #$01
    // ABC4: BEQ $AC22
    if (cpu.zero_flag()) cpu.m_pc = 0xAC22;
    // ABC6: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);
    // ABC9: ASLB 
    cpu.m_b <<= 1;
    // ABCA: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // ABCB: BMI $AC22
    if (cpu.negative_flag()) cpu.m_pc = 0xAC22;
    // ABCD: LDU $5086
    cpu.m_u = cpu.read_memory16(0x5086);
    // ABD0: CMPU #$0200
    // TODO: Convert CMPU #$0200
    // ABD4: BLT $ABDB
    if (cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABDB;
    // ABD6: SUBD $5086
    cpu.m_d -= 0x5086;
    // ABD9: BRA $ABDE
    goto label_ABDE;
    // ABDB: SUBD #$0200
    cpu.m_d -= 0x0200;
    label_ABDE:
    // ABDE: BLE $ABE5
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xABE5;
    // ABE0: SUBD #$0110
    cpu.m_d -= 0x0110;
    // ABE3: BGT $AC22
    if (!cpu.zero_flag() && cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;
    // ABE5: LDD <$D6
    cpu.m_d = cpu.read_memory16(0xD6);
    // ABE7: BMI $ABF0
    if (cpu.negative_flag()) cpu.m_pc = 0xABF0;
    // ABE9: SUBD #$01C0
    cpu.m_d -= 0x01C0;
    // ABEC: BGE $AC22
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;
    // ABEE: BRA $ABF5
    goto label_ABF5;
    // ABF0: SUBD #$FE40
    cpu.m_d -= 0xFE40;
    // ABF3: BLE $AC22
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAC22;
    label_ABF5:
    // ABF5: LDD <$D8
    cpu.m_d = cpu.read_memory16(0xD8);
    // ABF7: BMI $AC00
    if (cpu.negative_flag()) cpu.m_pc = 0xAC00;
    // ABF9: SUBD #$01E0
    cpu.m_d -= 0x01E0;
    // ABFC: BGE $AC22
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAC22;
    // ABFE: BRA $AC05
    goto label_AC05;
    // AC00: SUBD #$FE60
    cpu.m_d -= 0xFE60;
    // AC03: BLE $AC22
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xAC22;
    label_AC05:
    // AC05: CMPX <$CA
    cpu.compare_x(cpu.read_memory16(0xCA));
    // AC07: BNE $AC14
    if (!cpu.zero_flag()) cpu.m_pc = 0xAC14;
    // AC09: LDA <$BC
    cpu.m_a = cpu.read_memory(0xBC);
    // AC0B: BEQ $AC14
    if (cpu.zero_flag()) cpu.m_pc = 0xAC14;
    // AC0D: JSR $AD20
    cpu.call_function(0xAD20);
    // AC10: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // AC12: BRA $AC22
    goto label_AC22;
    // AC14: JSR $ACE0
    cpu.call_function(0xACE0);
    // AC17: LDD #$8040
    cpu.m_d = 0x8040;
    // AC1A: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AC1C: JSR $ACB1
    cpu.call_function(0xACB1);
    // AC1F: JMP $AC34
    goto label_AC34;
    label_AC22:
    // AC22: JSR $AC52
    cpu.call_function(0xAC52);
    // AC25: BRA $AC34
    goto label_AC34;
    // AC27: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // AC29: BITA #$01
    // TODO: Convert BITA #$01
    // AC2B: BEQ $AC31
    if (cpu.zero_flag()) cpu.m_pc = 0xAC31;
    // AC2D: LDA #$00
    cpu.m_a = 0x00;
    // AC2F: BRA $AC32
    goto label_AC32;
    // AC31: CLRA 
    cpu.m_a = 0;
    label_AC32:
    // AC32: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X
    label_AC34:
    // AC34: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // AC36: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X
    // AC38: CMPX #$496F
    cpu.compare_x(0x496F);
    // AC3B: LBCS $AAE7
    // TODO: Convert LBCS $AAE7
    // AC3F: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);
    // AC42: STD $5040
    cpu.write_memory16(0x5040, cpu.m_d);
    // AC45: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);
    // AC48: STD $5042
    cpu.write_memory16(0x5042, cpu.m_d);
    // AC4B: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AC4E: STD $5044
    cpu.write_memory16(0x5044, cpu.m_d);
    // AC51: RTS 
    return;
    // AC52: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // AC54: LDA #$08
    cpu.m_a = 0x08;
    // AC56: STA <$01
    cpu.write_memory(0x01, cpu.m_a);
    // AC58: LDD $5018
    cpu.m_d = cpu.read_memory16(0x5018);
    // AC5B: DEC <$01
    // TODO: Convert DEC <$01
    // AC5D: BEQ $AC65
    if (cpu.zero_flag()) cpu.m_pc = 0xAC65;
    // AC5F: ASLB 
    cpu.m_b <<= 1;
    // AC60: ROLA 
    cpu.m_a = (cpu.m_a << 1) | (cpu.carry_flag() ? 1 : 0);
    // AC61: BPL $AC5B
    if (!cpu.negative_flag()) cpu.m_pc = 0xAC5B;
    // AC63: ANDA #$7F
    cpu.m_a &= 0x7F;
    // AC65: STA <$02
    cpu.write_memory(0x02, cpu.m_a);
    // AC67: LDA $3,X
    // TODO: Fix comma operator: LDA $3,X
    // AC69: ANDA #$20
    cpu.m_a &= 0x20;
    // AC6B: BNE $AC7C
    if (!cpu.zero_flag()) cpu.m_pc = 0xAC7C;
    // AC6D: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);
    // AC6F: ORA #$70
    cpu.m_a |= 0x70;
    // AC71: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);
    // AC73: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AC75: LDD #$A015
    cpu.m_d = 0xA015;
    // AC78: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AC7A: BRA $ACA6
    goto label_ACA6;
    // AC7C: LDB <$02
    cpu.m_b = cpu.read_memory(0x02);
    // AC7E: LDA <$01
    cpu.m_a = cpu.read_memory(0x01);
    // AC80: INCA 
    cpu.m_a++;
    // AC81: CMPA #$03
    cpu.compare_a(0x03);
    // AC83: BCC $AC8A
    if (!cpu.carry_flag()) cpu.m_pc = 0xAC8A;
    // AC85: LDA #$03
    cpu.m_a = 0x03;
    // AC87: CLRB 
    cpu.m_b = 0;
    // AC88: BRA $AC91
    goto label_AC91;
    // AC8A: CMPA #$06
    cpu.compare_a(0x06);
    // AC8C: BCS $AC91
    if (cpu.carry_flag()) cpu.m_pc = 0xAC91;
    // AC8E: LDA #$06
    cpu.m_a = 0x06;
    // AC90: CLRB 
    cpu.m_b = 0;
    label_AC91:
    // AC91: ORA #$70
    cpu.m_a |= 0x70;
    // AC93: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // AC95: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X
    // AC97: ASLB 
    cpu.m_b <<= 1;
    // AC98: ASLB 
    cpu.m_b <<= 1;
    // AC99: ASLB 
    cpu.m_b <<= 1;
    // AC9A: ASLB 
    cpu.m_b <<= 1;
    // AC9B: ORB #$0F
    cpu.m_b |= 0x0F;
    // AC9D: LDA #$65
    cpu.m_a = 0x65;
    // AC9F: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACA1: LDD #$A017
    cpu.m_d = 0xA017;
    // ACA4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    label_ACA6:
    // ACA6: LDD #$7200
    cpu.m_d = 0x7200;
    // ACA9: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACAB: LDD #$8040
    cpu.m_d = 0x8040;
    // ACAE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACB0: RTS 
    return;
    // ACB1: LDX <$A8
    cpu.m_x = cpu.read_memory16(0xA8);
    // ACB3: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // ACB5: LDD ,U
    // TODO: Complex indexed addressing: ,U
    // ACB7: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACB9: LDD $2,U
    // TODO: Fix comma operator: LDD $2,U
    // ACBB: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACBD: LDA $5,X
    // TODO: Fix comma operator: LDA $5,X
    // ACBF: LDB #$10
    cpu.m_b = 0x10;
    // ACC1: MUL 
    // TODO: Convert MUL 
    // ACC2: LDA #$70
    cpu.m_a = 0x70;
    // ACC4: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACC6: LDB $5,X
    // TODO: Fix comma operator: LDB $5,X
    // ACC8: ASLB 
    cpu.m_b <<= 1;
    // ACC9: ASLB 
    cpu.m_b <<= 1;
    // ACCA: ASLB 
    cpu.m_b <<= 1;
    // ACCB: ASLB 
    cpu.m_b <<= 1;
    // ACCC: LDA #$67
    cpu.m_a = 0x67;
    // ACCE: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACD0: LDD #$A017
    cpu.m_d = 0xA017;
    // ACD3: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACD5: LDD #$7200
    cpu.m_d = 0x7200;
    // ACD8: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACDA: LDD #$8040
    cpu.m_d = 0x8040;
    // ACDD: STD ,Y++
    cpu.write_memory16(cpu.m_y++, cpu.m_d);
    // ACDF: RTS 
    return;
    // ACE0: LDU ,X
    // TODO: Complex indexed addressing: ,X
    // ACE2: LDD -$4,Y
    // TODO: Fix comma operator: LDD -$4,Y
    // ACE4: STD ,U
    // TODO: Handle indexed addressing: STD ,U
    // ACE6: LDD -$2,Y
    // TODO: Fix comma operator: LDD -$2,Y
    // ACE8: STD $2,U
    // TODO: Handle indexed addressing: STD $2,U
    // ACEA: LDA #$10
    cpu.m_a = 0x10;
    // ACEC: STA $3,X
    // TODO: Handle indexed addressing: STA $3,X
    // ACEE: LDA #$0F
    cpu.m_a = 0x0F;
    // ACF0: STA $5,X
    // TODO: Handle indexed addressing: STA $5,X
    // ACF2: LDA #$00
    cpu.m_a = 0x00;
    // ACF4: STA $4,X
    // TODO: Handle indexed addressing: STA $4,X
    // ACF6: JSR $9874
    cpu.call_function(0x9874);
    // ACF9: LDA <$63
    cpu.m_a = cpu.read_memory(0x63);
    // ACFB: BNE $AD00
    if (!cpu.zero_flag()) cpu.m_pc = 0xAD00;
    // ACFD: LDA $4703
    cpu.m_a = cpu.read_memory(0x4703);
    // AD00: LDB #$20
    cpu.m_b = 0x20;
    // AD02: TSTA 
    cpu.test_a();
    // AD03: BPL $AD06
    if (!cpu.negative_flag()) cpu.m_pc = 0xAD06;
    // AD05: NEGB 
    cpu.m_b = -cpu.m_b;
    // AD06: STB <$63
    cpu.write_memory(0x63, cpu.m_b);
    // AD08: JSR $BDF3
    cpu.call_function(0xBDF3);
    // AD0B: LDA $4B37
    cpu.m_a = cpu.read_memory(0x4B37);
    // AD0E: BNE $AD1F
    if (!cpu.zero_flag()) cpu.m_pc = 0xAD1F;
    // AD10: INC $4B37
    // TODO: Convert INC $4B37
    // AD13: LDA <$60
    cpu.m_a = cpu.read_memory(0x60);
    // AD15: CMPA #$03
    cpu.compare_a(0x03);
    // AD17: BLS $AD1F
    // TODO: Convert BLS $AD1F
    // AD19: JSR $BD21
    cpu.call_function(0xBD21);
    // AD1C: JSR $BDE9
    cpu.call_function(0xBDE9);
    // AD1F: RTS 
    return;
    label_AD20:
    // AD20: LDU <$CA
    cpu.m_u = cpu.read_memory16(0xCA);
    // AD22: LDA $3,U
    // TODO: Fix comma operator: LDA $3,U
    // AD24: BEQ $AD3D
    if (cpu.zero_flag()) cpu.m_pc = 0xAD3D;
    // AD26: ANDA #$04
    cpu.m_a &= 0x04;
    // AD28: ORA #$20
    cpu.m_a |= 0x20;
    // AD2A: STA $3,U
    // TODO: Handle indexed addressing: STA $3,U
    // AD2C: LDA #$0F
    cpu.m_a = 0x0F;
    // AD2E: STA $5,U
    // TODO: Handle indexed addressing: STA $5,U
    // AD30: LDA #$00
    cpu.m_a = 0x00;
    // AD32: STA $4,U
    // TODO: Handle indexed addressing: STA $4,U
    // AD34: JSR $BE07
    cpu.call_function(0xBE07);
    // AD37: JSR $9801
    cpu.call_function(0x9801);
    // AD3A: JSR $BDF8
    cpu.call_function(0xBDF8);
    // AD3D: RTS 
    return;
    // AD3E: LDA #$01
    cpu.m_a = 0x01;
    // AD40: STA <$45
    cpu.write_memory(0x45, cpu.m_a);
    // AD42: LDD $5098
    cpu.m_d = cpu.read_memory16(0x5098);
    // AD45: ADDD #$0100
    cpu.m_d += 0x0100;
    // AD48: STD <$46
    cpu.write_memory16(0x46, cpu.m_d);
    // AD4A: LDD $509A
    cpu.m_d = cpu.read_memory16(0x509A);
    // AD4D: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);
    // AD4F: LDD $509C
    cpu.m_d = cpu.read_memory16(0x509C);
    // AD52: STD <$4A
    cpu.write_memory16(0x4A, cpu.m_d);
    // AD54: LDX #$494B
    cpu.m_x = 0x494B;
    // AD57: STX <$CA
    cpu.write_memory16(0xCA, cpu.m_x);
    // AD59: JSR $AD20
    cpu.call_function(0xAD20);
    // AD5C: LDX <$CA
    cpu.m_x = cpu.read_memory16(0xCA);
    // AD5E: LEAX $6,X
    // TODO: Fix comma operator: LEAX $6,X
    // AD60: CMPX #$496F
    cpu.compare_x(0x496F);
    // AD63: BCS $AD57
    if (cpu.carry_flag()) cpu.m_pc = 0xAD57;
    // AD65: JSR $BDA3
    cpu.call_function(0xBDA3);
    // AD68: JSR $BDD5
    cpu.call_function(0xBDD5);
    // AD6B: RTS 
    return;
    // AD6C: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);
    // AD6E: BEQ $ADAE
    if (cpu.zero_flag()) cpu.m_pc = 0xADAE;
    // AD70: LDD <$46
    cpu.m_d = cpu.read_memory16(0x46);
    // AD72: ADDD #$0300
    cpu.m_d += 0x0300;
    // AD75: ADDD $5086
    cpu.m_d += 0x5086;
    // AD78: CMPD <$96
    // TODO: Convert CMPD <$96
    // AD7B: BMI $AD7F
    if (cpu.negative_flag()) cpu.m_pc = 0xAD7F;
    // AD7D: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);
    // AD7F: STD <$46
    cpu.write_memory16(0x46, cpu.m_d);
    // AD81: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);
    // AD83: SUBD <$46
    cpu.m_d -= 0x46;
    // AD85: SUBD #$1000
    cpu.m_d -= 0x1000;
    // AD88: CMPD <$4A
    // TODO: Convert CMPD <$4A
    // AD8B: BGE $AD8F
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xAD8F;
    // AD8D: STD <$4A
    cpu.write_memory16(0x4A, cpu.m_d);
    // AD8F: LDD <$96
    cpu.m_d = cpu.read_memory16(0x96);
    // AD91: SUBD <$46
    cpu.m_d -= 0x46;
    // AD93: JSR $CDA0
    cpu.call_function(0xCDA0);
    // AD96: TST <$48
    // TODO: Convert TST <$48
    // AD98: BMI $ADA3
    if (cpu.negative_flag()) cpu.m_pc = 0xADA3;
    // AD9A: CMPD <$48
    // TODO: Convert CMPD <$48
    // AD9D: BGE $ADA1
    if (cpu.negative_flag() == cpu.overflow_flag()) cpu.m_pc = 0xADA1;
    // AD9F: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);
    // ADA1: BRA $ADAE
    goto label_ADAE;
    // ADA3: COMA 
    cpu.m_a = ~cpu.m_a;
    // ADA4: NEGB 
    cpu.m_b = -cpu.m_b;
    // ADA5: SBCA #$FF
    // TODO: Convert SBCA #$FF
    // ADA7: CMPD <$48
    // TODO: Convert CMPD <$48
    // ADAA: BLE $ADAE
    if (cpu.zero_flag() || cpu.negative_flag() != cpu.overflow_flag()) cpu.m_pc = 0xADAE;
    // ADAC: STD <$48
    cpu.write_memory16(0x48, cpu.m_d);
    label_ADAE:
    // ADAE: RTS 
    return;
    // ADAF: LDA <$45
    cpu.m_a = cpu.read_memory(0x45);
    // ADB1: BEQ $ADD3
    if (cpu.zero_flag()) cpu.m_pc = 0xADD3;
    // ADB3: LDD <$46
    cpu.m_d = cpu.read_memory16(0x46);
    // ADB5: STD $5078
    cpu.write_memory16(0x5078, cpu.m_d);
    // ADB8: LDD <$48
    cpu.m_d = cpu.read_memory16(0x48);
    // ADBA: ADDD #$0080
    cpu.m_d += 0x0080;
    label_ADBD:
    // ADBD: JMP $adbd
    goto label_ADBD;
}

} // namespace StarWars