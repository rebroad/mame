a849: 8e 49 4b     LDX    #$494B
a84c: 9f a8        STX    <$A8
a84e: a6 03        LDA    $3,X
a850: 27 0f        BEQ    $A861
a852: e6 04        LDB    $4,X
a854: 58           ASLB
a855: c1 16        CMPB   #$16
a857: 24 07        BCC    $A860
a859: ce a6 75     LDU    #$A675
a85c: ad d5        JSR    [B,U]
a85e: 20 01        BRA    $A861
a860: 3f           SWI
a861: 9e a8        LDX    <$A8
a863: 30 06        LEAX   $6,X
a865: 8c 49 6f     CMPX   #$496F
a868: 25 e2        BCS    $A84C
a86a: 39           RTS
a86b: 6a 05        DEC    $5,X
a86d: 2e 05        BGT    $A874
a86f: 5f           CLRB
a870: e7 03        STB    $3,X
a872: e7 05        STB    $5,X
a874: 39           RTS
a875: 6a 05        DEC    $5,X
a877: 2e 07        BGT    $A880
a879: 5f           CLRB
a87a: e7 03        STB    $3,X
a87c: e7 05        STB    $5,X
a87e: 20 26        BRA    $A8A6
a880: ee 84        LDU    ,X
a882: cc 00 00     LDD    #$0000
a885: a3 c4        SUBD   ,U
a887: bd cd a2     JSR    $CDA2
a88a: e3 c4        ADDD   ,U
a88c: ed c4        STD    ,U
a88e: cc 00 00     LDD    #$0000
a891: a3 42        SUBD   $2,U
a893: bd cd a2     JSR    $CDA2
a896: e3 42        ADDD   $2,U
a898: ed 42        STD    $2,U
a89a: cc 00 00     LDD    #$0000
a89d: a3 44        SUBD   $4,U
a89f: bd cd a2     JSR    $CDA2
a8a2: e3 44        ADDD   $4,U
a8a4: ed 44        STD    $4,U
a8a6: 39           RTS
a8a7: 6a 05        DEC    $5,X
a8a9: 2e 07        BGT    $A8B2
a8ab: 5f           CLRB
a8ac: e7 03        STB    $3,X
a8ae: e7 05        STB    $5,X
a8b0: 20 23        BRA    $A8D5
a8b2: ee 84        LDU    ,X
a8b4: ec c4        LDD    ,U
a8b6: bd cd a2     JSR    $CDA2
a8b9: e3 c4        ADDD   ,U
a8bb: 29 19        BVS    $A8D6
a8bd: ed c4        STD    ,U
a8bf: ec 42        LDD    $2,U
a8c1: bd cd a2     JSR    $CDA2
a8c4: e3 42        ADDD   $2,U
a8c6: 29 0e        BVS    $A8D6
a8c8: ed 42        STD    $2,U
a8ca: ec 44        LDD    $4,U
a8cc: bd cd a2     JSR    $CDA2
a8cf: e3 44        ADDD   $4,U
a8d1: 29 03        BVS    $A8D6
a8d3: ed 44        STD    $4,U
a8d5: 39           RTS
a8d6: 5f           CLRB
a8d7: e7 03        STB    $3,X
a8d9: 39           RTS
a8da: ee 84        LDU    ,X
a8dc: cc ff 00     LDD    #$FF00
a8df: e3 c4        ADDD   ,U
a8e1: ed c4        STD    ,U
a8e3: 7e aa 7d     JMP    $AA7D
a8e6: ee 84        LDU    ,X
a8e8: cc ff 00     LDD    #$FF00
a8eb: e3 c4        ADDD   ,U
a8ed: ed c4        STD    ,U
a8ef: cc ff 00     LDD    #$FF00
a8f2: e3 42        ADDD   $2,U
a8f4: ed 42        STD    $2,U
a8f6: 7e aa 7d     JMP    $AA7D
a8f9: ee 84        LDU    ,X
a8fb: cc ff 00     LDD    #$FF00
a8fe: e3 c4        ADDD   ,U
a900: ed c4        STD    ,U
a902: cc 01 00     LDD    #$0100
a905: e3 42        ADDD   $2,U
a907: ed 42        STD    $2,U
a909: 7e aa 7d     JMP    $AA7D
a90c: e6 c4        LDB    ,U
a90e: f0 50 98     SUBB   $5098
a911: 2b 0c        BMI    $A91F
a913: 4f           CLRA
a914: bd cd b5     JSR    $CDB5
a917: 43           COMA
a918: 50           NEGB
a919: 82 ff        SBCA   #$FF
a91b: e3 c4        ADDD   ,U
a91d: ed c4        STD    ,U
a91f: 39           RTS
a920: cc 00 00     LDD    #$0000
a923: b3 50 8e     SUBD   $508E
a926: bd cd a2     JSR    $CDA2
a929: f3 50 8e     ADDD   $508E
a92c: 2a 04        BPL    $A932
a92e: e3 42        ADDD   $2,U
a930: ed 42        STD    $2,U
a932: 39           RTS
a933: cc 00 00     LDD    #$0000
a936: b3 50 8e     SUBD   $508E
a939: bd cd a2     JSR    $CDA2
a93c: f3 50 8e     ADDD   $508E
a93f: 2b 04        BMI    $A945
a941: e3 42        ADDD   $2,U
a943: ed 42        STD    $2,U
a945: 39           RTS
a946: ee 84        LDU    ,X
a948: bd a9 33     JSR    $A933
a94b: bd a9 0c     JSR    $A90C
a94e: ec c4        LDD    ,U
a950: b3 50 98     SUBD   $5098
a953: e6 47        LDB    $7,U
a955: 3d           MUL
a956: 6d 46        TST    $6,U
a958: 26 04        BNE    $A95E
a95a: 43           COMA
a95b: 50           NEGB
a95c: 82 ff        SBCA   #$FF
a95e: f3 50 9a     ADDD   $509A
a961: a3 42        SUBD   $2,U
a963: c3 01 00     ADDD   #$0100
a966: 2b 10        BMI    $A978
a968: bd cd a2     JSR    $CDA2
a96b: 10 83 01 80  CMPD   #$0180
a96f: 2f 03        BLE    $A974
a971: cc 01 80     LDD    #$0180
a974: e3 42        ADDD   $2,U
a976: 20 0e        BRA    $A986
a978: bd cd 9e     JSR    $CD9E
a97b: 10 83 fe 80  CMPD   #$FE80
a97f: 2c 03        BGE    $A984
a981: cc fe 80     LDD    #$FE80
a984: e3 42        ADDD   $2,U
a986: ed 42        STD    $2,U
a988: fc 50 9c     LDD    $509C
a98b: c3 01 00     ADDD   #$0100
a98e: a3 44        SUBD   $4,U
a990: 2b 10        BMI    $A9A2
a992: bd cd a2     JSR    $CDA2
a995: 10 83 02 00  CMPD   #$0200
a999: 2f 03        BLE    $A99E
a99b: cc 02 00     LDD    #$0200
a99e: e3 44        ADDD   $4,U
a9a0: ed 44        STD    $4,U
a9a2: 39           RTS
a9a3: ee 84        LDU    ,X
a9a5: bd a9 20     JSR    $A920
a9a8: bd a9 0c     JSR    $A90C
a9ab: ec c4        LDD    ,U
a9ad: b3 50 98     SUBD   $5098
a9b0: e6 47        LDB    $7,U
a9b2: 3d           MUL
a9b3: 6d 46        TST    $6,U
a9b5: 27 04        BEQ    $A9BB
a9b7: 43           COMA
a9b8: 50           NEGB
a9b9: 82 ff        SBCA   #$FF
a9bb: f3 50 9a     ADDD   $509A
a9be: c3 ff 00     ADDD   #$FF00
a9c1: a3 42        SUBD   $2,U
a9c3: 2b 10        BMI    $A9D5
a9c5: bd cd 9e     JSR    $CD9E
a9c8: 10 83 01 80  CMPD   #$0180
a9cc: 2f 03        BLE    $A9D1
a9ce: cc 01 80     LDD    #$0180
a9d1: e3 42        ADDD   $2,U
a9d3: 20 0e        BRA    $A9E3
a9d5: bd cd a2     JSR    $CDA2
a9d8: 10 83 fe 80  CMPD   #$FE80
a9dc: 2c 03        BGE    $A9E1
a9de: cc fe 80     LDD    #$FE80
a9e1: e3 42        ADDD   $2,U
a9e3: ed 42        STD    $2,U
a9e5: fc 50 9c     LDD    $509C
a9e8: c3 01 00     ADDD   #$0100
a9eb: a3 44        SUBD   $4,U
a9ed: 2b 10        BMI    $A9FF
a9ef: bd cd a2     JSR    $CDA2
a9f2: 10 83 02 00  CMPD   #$0200
a9f6: 2f 03        BLE    $A9FB
a9f8: cc 02 00     LDD    #$0200
a9fb: e3 44        ADDD   $4,U
a9fd: ed 44        STD    $4,U
a9ff: 39           RTS
aa00: ee 84        LDU    ,X
aa02: cc ff 00     LDD    #$FF00
aa05: e3 c4        ADDD   ,U
aa07: ed c4        STD    ,U
aa09: fc 50 9c     LDD    $509C
aa0c: c3 00 80     ADDD   #$0080
aa0f: a3 44        SUBD   $4,U
aa11: 2b 10        BMI    $AA23
aa13: bd cd a2     JSR    $CDA2
aa16: 10 83 01 80  CMPD   #$0180
aa1a: 2f 03        BLE    $AA1F
aa1c: cc 01 80     LDD    #$0180
aa1f: e3 44        ADDD   $4,U
aa21: ed 44        STD    $4,U
aa23: 20 58        BRA    $AA7D
aa25: ee 84        LDU    ,X
aa27: cc ff 00     LDD    #$FF00
aa2a: e3 c4        ADDD   ,U
aa2c: ed c4        STD    ,U
aa2e: cc ff 00     LDD    #$FF00
aa31: e3 42        ADDD   $2,U
aa33: ed 42        STD    $2,U
aa35: fc 50 9c     LDD    $509C
aa38: c3 00 80     ADDD   #$0080
aa3b: a3 44        SUBD   $4,U
aa3d: 2b 10        BMI    $AA4F
aa3f: bd cd a2     JSR    $CDA2
aa42: 10 83 01 80  CMPD   #$0180
aa46: 2f 03        BLE    $AA4B
aa48: cc 01 80     LDD    #$0180
aa4b: e3 44        ADDD   $4,U
aa4d: ed 44        STD    $4,U
aa4f: 20 2c        BRA    $AA7D
aa51: ee 84        LDU    ,X
aa53: cc ff 00     LDD    #$FF00
aa56: e3 c4        ADDD   ,U
aa58: ed c4        STD    ,U
aa5a: cc 01 00     LDD    #$0100
aa5d: e3 42        ADDD   $2,U
aa5f: ed 42        STD    $2,U
aa61: fc 50 9c     LDD    $509C
aa64: c3 00 80     ADDD   #$0080
aa67: a3 44        SUBD   $4,U
aa69: 2b 10        BMI    $AA7B
aa6b: bd cd a2     JSR    $CDA2
aa6e: 10 83 01 80  CMPD   #$0180
aa72: 2f 03        BLE    $AA77
aa74: cc 01 80     LDD    #$0180
aa77: e3 44        ADDD   $4,U
aa79: ed 44        STD    $4,U
aa7b: 20 00        BRA    $AA7D
aa7d: a6 03        LDA    $3,X
aa7f: 85 02        BITA   #$02
aa81: 27 02        BEQ    $AA85
aa83: 6f 03        CLR    $3,X
aa85: 39           RTS
aa86: ee 84        LDU    ,X
aa88: bd a9 0c     JSR    $A90C
aa8b: fc 50 9c     LDD    $509C
aa8e: a3 44        SUBD   $4,U
aa90: 2b 07        BMI    $AA99
aa92: bd cd a0     JSR    $CDA0
aa95: e3 44        ADDD   $4,U
aa97: ed 44        STD    $4,U
aa99: b6 4b 19     LDA    $4B19
aa9c: 81 01        CMPA   #$01
aa9e: 25 05        BCS    $AAA5
aaa0: fc 50 9a     LDD    $509A
aaa3: 20 03        BRA    $AAA8
aaa5: cc fe 80     LDD    #$FE80
aaa8: a3 42        SUBD   $2,U
aaaa: 2b 07        BMI    $AAB3
aaac: bd cd a0     JSR    $CDA0
aaaf: e3 42        ADDD   $2,U
aab1: ed 42        STD    $2,U
aab3: 20 c8        BRA    $AA7D
aab5: ee 84        LDU    ,X
aab7: bd a9 0c     JSR    $A90C
aaba: fc 50 9c     LDD    $509C
aabd: a3 44        SUBD   $4,U
aabf: 2b 07        BMI    $AAC8
aac1: bd cd a0     JSR    $CDA0
aac4: e3 44        ADDD   $4,U
aac6: ed 44        STD    $4,U
aac8: b6 4b 19     LDA    $4B19
aacb: 81 01        CMPA   #$01
aacd: 25 05        BCS    $AAD4
aacf: fc 50 9a     LDD    $509A
aad2: 20 03        BRA    $AAD7
aad4: cc 01 80     LDD    #$0180
aad7: a3 42        SUBD   $2,U
aad9: 2a 07        BPL    $AAE2
aadb: bd cd a0     JSR    $CDA0
aade: e3 42        ADDD   $2,U
aae0: ed 42        STD    $2,U
aae2: 20 99        BRA    $AA7D
aae4: 8e 49 4b     LDX    #$494B
aae7: 9f a8        STX    <$A8
aae9: a6 03        LDA    $3,X
aaeb: 10 27 01 45  LBEQ   $AC34
aaef: 85 10        BITA   #$10
aaf1: 27 06        BEQ    $AAF9
aaf3: bd ac b1     JSR    $ACB1
aaf6: 7e ac 34     JMP    $AC34
aaf9: 85 04        BITA   #$04
aafb: 27 14        BEQ    $AB11
aafd: fc 50 98     LDD    $5098
ab00: fd 50 40     STD    $5040
ab03: fc 50 9a     LDD    $509A
ab06: fd 50 42     STD    $5042
ab09: fc 50 9c     LDD    $509C
ab0c: fd 50 44     STD    $5044
ab0f: 20 0c        BRA    $AB1D
ab11: cc 00 00     LDD    #$0000
ab14: fd 50 40     STD    $5040
ab17: fd 50 42     STD    $5042
ab1a: fd 50 44     STD    $5044
ab1d: 4f           CLRA
ab1e: e6 02        LDB    $2,X
ab20: fd 47 01     STD    $4701
ab23: 86 67        LDA    #$67
ab25: bd cd ba     JSR    $CDBA
ab28: fc 50 00     LDD    $5000
ab2b: 10 83 00 01  CMPD   #$0001
ab2f: 10 2f 00 f4  LBLE   $AC27
ab33: 10 83 7f 00  CMPD   #$7F00
ab37: 10 22 00 ec  LBHI   $AC27
ab3b: fd 47 04     STD    $4704
ab3e: fd 50 18     STD    $5018
ab41: fc 50 02     LDD    $5002
ab44: fd 50 1a     STD    $501A
ab47: 2a 04        BPL    $AB4D
ab49: 43           COMA
ab4a: 50           NEGB
ab4b: 82 ff        SBCA   #$FF
ab4d: b3 50 00     SUBD   $5000
ab50: 10 24 00 d3  LBCC   $AC27
ab54: fc 50 04     LDD    $5004
ab57: fd 50 1c     STD    $501C
ab5a: 2a 04        BPL    $AB60
ab5c: 43           COMA
ab5d: 50           NEGB
ab5e: 82 ff        SBCA   #$FF
ab60: b3 50 00     SUBD   $5000
ab63: 10 24 00 c0  LBCC   $AC27
ab67: bd cc f0     JSR    $CCF0
ab6a: 9e a8        LDX    <$A8
ab6c: a6 03        LDA    $3,X
ab6e: 85 03        BITA   #$03
ab70: 27 4e        BEQ    $ABC0
ab72: cc 00 80     LDD    #$0080
ab75: fd 50 02     STD    $5002
ab78: 86 86        LDA    #$86
ab7a: bd cd ba     JSR    $CDBA
ab7d: fc 50 02     LDD    $5002
ab80: c3 00 0a     ADDD   #$000A
ab83: dd 03        STD    <$03
ab85: dc d6        LDD    <$D6
ab87: 93 b3        SUBD   <$B3
ab89: 2a 04        BPL    $AB8F
ab8b: 43           COMA
ab8c: 50           NEGB
ab8d: 82 ff        SBCA   #$FF
ab8f: dd 01        STD    <$01
ab91: 93 03        SUBD   <$03
ab93: 2e 2b        BGT    $ABC0
ab95: dc d8        LDD    <$D8
ab97: 93 b5        SUBD   <$B5
ab99: 2a 04        BPL    $AB9F
ab9b: 43           COMA
ab9c: 50           NEGB
ab9d: 82 ff        SBCA   #$FF
ab9f: 10 93 03     CMPD   <$03
aba2: 2e 1c        BGT    $ABC0
aba4: d3 01        ADDD   <$01
aba6: dd 01        STD    <$01
aba8: dc 03        LDD    <$03
abaa: 44           LSRA
abab: 56           RORB
abac: d3 03        ADDD   <$03
abae: 93 01        SUBD   <$01
abb0: 2d 0e        BLT    $ABC0
abb2: fc 50 18     LDD    $5018
abb5: 10 93 cc     CMPD   <$CC
abb8: 24 06        BCC    $ABC0
abba: dd cc        STD    <$CC
abbc: 9e a8        LDX    <$A8
abbe: 9f ca        STX    <$CA
abc0: a6 03        LDA    $3,X
abc2: 85 01        BITA   #$01
abc4: 27 5c        BEQ    $AC22
abc6: fc 50 18     LDD    $5018
abc9: 58           ASLB
abca: 49           ROLA
abcb: 2b 55        BMI    $AC22
abcd: fe 50 86     LDU    $5086
abd0: 11 83 02 00  CMPU   #$0200
abd4: 2d 05        BLT    $ABDB
abd6: b3 50 86     SUBD   $5086
abd9: 20 03        BRA    $ABDE
abdb: 83 02 00     SUBD   #$0200
abde: 2f 05        BLE    $ABE5
abe0: 83 01 10     SUBD   #$0110
abe3: 2e 3d        BGT    $AC22
abe5: dc d6        LDD    <$D6
abe7: 2b 07        BMI    $ABF0
abe9: 83 01 c0     SUBD   #$01C0
abec: 2c 34        BGE    $AC22
abee: 20 05        BRA    $ABF5
abf0: 83 fe 40     SUBD   #$FE40
abf3: 2f 2d        BLE    $AC22
abf5: dc d8        LDD    <$D8
abf7: 2b 07        BMI    $AC00
abf9: 83 01 e0     SUBD   #$01E0
abfc: 2c 24        BGE    $AC22
abfe: 20 05        BRA    $AC05
ac00: 83 fe 60     SUBD   #$FE60
ac03: 2f 1d        BLE    $AC22
ac05: 9c ca        CMPX   <$CA
ac07: 26 0b        BNE    $AC14
ac09: 96 bc        LDA    <$BC
ac0b: 27 07        BEQ    $AC14
ac0d: bd ad 20     JSR    $AD20
ac10: 9e a8        LDX    <$A8
ac12: 20 0e        BRA    $AC22
ac14: bd ac e0     JSR    $ACE0
ac17: cc 80 40     LDD    #$8040
ac1a: ed a1        STD    ,Y++
ac1c: bd ac b1     JSR    $ACB1
ac1f: 7e ac 34     JMP    $AC34
ac22: bd ac 52     JSR    $AC52
ac25: 20 0d        BRA    $AC34
ac27: a6 03        LDA    $3,X
ac29: 85 01        BITA   #$01
ac2b: 27 04        BEQ    $AC31
ac2d: 86 00        LDA    #$00
ac2f: 20 01        BRA    $AC32
ac31: 4f           CLRA
ac32: a7 03        STA    $3,X
ac34: 9e a8        LDX    <$A8
ac36: 30 06        LEAX   $6,X
ac38: 8c 49 6f     CMPX   #$496F
ac3b: 10 25 fe a8  LBCS   $AAE7
ac3f: fc 50 98     LDD    $5098
ac42: fd 50 40     STD    $5040
ac45: fc 50 9a     LDD    $509A
ac48: fd 50 42     STD    $5042
ac4b: fc 50 9c     LDD    $509C
ac4e: fd 50 44     STD    $5044
ac51: 39           RTS
ac52: 9e a8        LDX    <$A8
ac54: 86 08        LDA    #$08
ac56: 97 01        STA    <$01
ac58: fc 50 18     LDD    $5018
ac5b: 0a 01        DEC    <$01
ac5d: 27 06        BEQ    $AC65
ac5f: 58           ASLB
ac60: 49           ROLA
ac61: 2a f8        BPL    $AC5B
ac63: 84 7f        ANDA   #$7F
ac65: 97 02        STA    <$02
ac67: a6 03        LDA    $3,X
ac69: 84 20        ANDA   #$20
ac6b: 26 0f        BNE    $AC7C
ac6d: 96 01        LDA    <$01
ac6f: 8a 70        ORA    #$70
ac71: d6 02        LDB    <$02
ac73: ed a1        STD    ,Y++
ac75: cc a0 15     LDD    #$A015
ac78: ed a1        STD    ,Y++
ac7a: 20 2a        BRA    $ACA6
ac7c: d6 02        LDB    <$02
ac7e: 96 01        LDA    <$01
ac80: 4c           INCA
ac81: 81 03        CMPA   #$03
ac83: 24 05        BCC    $AC8A
ac85: 86 03        LDA    #$03
ac87: 5f           CLRB
ac88: 20 07        BRA    $AC91
ac8a: 81 06        CMPA   #$06
ac8c: 25 03        BCS    $AC91
ac8e: 86 06        LDA    #$06
ac90: 5f           CLRB
ac91: 8a 70        ORA    #$70
ac93: ed a1        STD    ,Y++
ac95: e6 05        LDB    $5,X
ac97: 58           ASLB
ac98: 58           ASLB
ac99: 58           ASLB
ac9a: 58           ASLB
ac9b: ca 0f        ORB    #$0F
ac9d: 86 65        LDA    #$65
ac9f: ed a1        STD    ,Y++
aca1: cc a0 17     LDD    #$A017
aca4: ed a1        STD    ,Y++
aca6: cc 72 00     LDD    #$7200
aca9: ed a1        STD    ,Y++
acab: cc 80 40     LDD    #$8040
acae: ed a1        STD    ,Y++
acb0: 39           RTS
acb1: 9e a8        LDX    <$A8
acb3: ee 84        LDU    ,X
acb5: ec c4        LDD    ,U
acb7: ed a1        STD    ,Y++
acb9: ec 42        LDD    $2,U
acbb: ed a1        STD    ,Y++
acbd: a6 05        LDA    $5,X
acbf: c6 10        LDB    #$10
acc1: 3d           MUL
acc2: 86 70        LDA    #$70
acc4: ed a1        STD    ,Y++
acc6: e6 05        LDB    $5,X
acc8: 58           ASLB
acc9: 58           ASLB
acca: 58           ASLB
accb: 58           ASLB
accc: 86 67        LDA    #$67
acce: ed a1        STD    ,Y++
acd0: cc a0 17     LDD    #$A017
acd3: ed a1        STD    ,Y++
acd5: cc 72 00     LDD    #$7200
acd8: ed a1        STD    ,Y++
acda: cc 80 40     LDD    #$8040
acdd: ed a1        STD    ,Y++
acdf: 39           RTS
ace0: ee 84        LDU    ,X
ace2: ec 3c        LDD    -$4,Y
ace4: ed c4        STD    ,U
ace6: ec 3e        LDD    -$2,Y
ace8: ed 42        STD    $2,U
acea: 86 10        LDA    #$10
acec: a7 03        STA    $3,X
acee: 86 0f        LDA    #$0F
acf0: a7 05        STA    $5,X
acf2: 86 00        LDA    #$00
acf4: a7 04        STA    $4,X
acf6: bd 98 74     JSR    $9874
acf9: 96 63        LDA    <$63
acfb: 26 03        BNE    $AD00
acfd: b6 47 03     LDA    $4703
ad00: c6 20        LDB    #$20
ad02: 4d           TSTA
ad03: 2a 01        BPL    $AD06
ad05: 50           NEGB
ad06: d7 63        STB    <$63
ad08: bd bd f3     JSR    $BDF3
ad0b: b6 4b 37     LDA    $4B37
ad0e: 26 0f        BNE    $AD1F
ad10: 7c 4b 37     INC    $4B37
ad13: 96 60        LDA    <$60
ad15: 81 03        CMPA   #$03
ad17: 23 06        BLS    $AD1F
ad19: bd bd 21     JSR    $BD21
ad1c: bd bd e9     JSR    $BDE9
ad1f: 39           RTS
ad20: de ca        LDU    <$CA
ad22: a6 43        LDA    $3,U
ad24: 27 17        BEQ    $AD3D
ad26: 84 04        ANDA   #$04
ad28: 8a 20        ORA    #$20
ad2a: a7 43        STA    $3,U
ad2c: 86 0f        LDA    #$0F
ad2e: a7 45        STA    $5,U
ad30: 86 00        LDA    #$00
ad32: a7 44        STA    $4,U
ad34: bd be 07     JSR    $BE07
ad37: bd 98 01     JSR    $9801
ad3a: bd bd f8     JSR    $BDF8
ad3d: 39           RTS
ad3e: 86 01        LDA    #$01
ad40: 97 45        STA    <$45
ad42: fc 50 98     LDD    $5098
ad45: c3 01 00     ADDD   #$0100
ad48: dd 46        STD    <$46
ad4a: fc 50 9a     LDD    $509A
ad4d: dd 48        STD    <$48
ad4f: fc 50 9c     LDD    $509C
ad52: dd 4a        STD    <$4A
ad54: 8e 49 4b     LDX    #$494B
ad57: 9f ca        STX    <$CA
ad59: bd ad 20     JSR    $AD20
ad5c: 9e ca        LDX    <$CA
ad5e: 30 06        LEAX   $6,X
ad60: 8c 49 6f     CMPX   #$496F
ad63: 25 f2        BCS    $AD57
ad65: bd bd a3     JSR    $BDA3
ad68: bd bd d5     JSR    $BDD5
ad6b: 39           RTS
ad6c: 96 45        LDA    <$45
ad6e: 27 3e        BEQ    $ADAE
ad70: dc 46        LDD    <$46
ad72: c3 03 00     ADDD   #$0300
ad75: f3 50 86     ADDD   $5086
ad78: 10 93 96     CMPD   <$96
ad7b: 2b 02        BMI    $AD7F
ad7d: dc 96        LDD    <$96
ad7f: dd 46        STD    <$46
ad81: dc 96        LDD    <$96
ad83: 93 46        SUBD   <$46
ad85: 83 10 00     SUBD   #$1000
ad88: 10 93 4a     CMPD   <$4A
ad8b: 2c 02        BGE    $AD8F
ad8d: dd 4a        STD    <$4A
ad8f: dc 96        LDD    <$96
ad91: 93 46        SUBD   <$46
ad93: bd cd a0     JSR    $CDA0
ad96: 0d 48        TST    <$48
ad98: 2b 09        BMI    $ADA3
ad9a: 10 93 48     CMPD   <$48
ad9d: 2c 02        BGE    $ADA1
ad9f: dd 48        STD    <$48
ada1: 20 0b        BRA    $ADAE
ada3: 43           COMA
ada4: 50           NEGB
ada5: 82 ff        SBCA   #$FF
ada7: 10 93 48     CMPD   <$48
adaa: 2f 02        BLE    $ADAE
adac: dd 48        STD    <$48
adae: 39           RTS
adaf: 96 45        LDA    <$45
adb1: 27 20        BEQ    $ADD3
adb3: dc 46        LDD    <$46
adb5: fd 50 78     STD    $5078
adb8: dc 48        LDD    <$48
adba: c3 00 80     ADDD   #$0080
adbd: 7e adbd     JMP    $adbd
