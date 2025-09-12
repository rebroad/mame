aae4: 8e 49 4b     LDX    #$494B
aae7: 9f a8        STX    <$A8
aae9: a6 03        LDA    $3,X
aaeb: 10 27 01 45  LBEQ   $0150
aaef: 85 10        BITA   #$10
aaf1: 27 06        BEQ    $0015
aaf3: bd ac b1     JSR    $ACB1
aaf6: 7e ac 34     JMP    $AC34
aaf9: 85 04        BITA   #$04
aafb: 27 14        BEQ    $002D
aafd: fc 50 98     LDD    $5098
ab00: fd 50 40     STD    $5040
ab03: fc 50 9a     LDD    $509A
ab06: fd 50 42     STD    $5042
ab09: fc 50 9c     LDD    $509C
ab0c: fd 50 44     STD    $5044
ab0f: 20 0c        BRA    $0039
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
ab2f: 10 2f 00 f4  LBLE   $0143
ab33: 10 83 7f 00  CMPD   #$7F00
ab37: 10 22 00 ec  LBHI   $0143
ab3b: fd 47 04     STD    $4704
ab3e: fd 50 18     STD    $5018
ab41: fc 50 02     LDD    $5002
ab44: fd 50 1a     STD    $501A
ab47: 2a 04        BPL    $0069
ab49: 43           COMA
ab4a: 50           NEGB
ab4b: 82 ff        SBCA   #$FF
ab4d: b3 50 00     SUBD   $5000
ab50: 10 24 00 d3  LBCC   $0143
ab54: fc 50 04     LDD    $5004
ab57: fd 50 1c     STD    $501C
ab5a: 2a 04        BPL    $007C
ab5c: 43           COMA
ab5d: 50           NEGB
ab5e: 82 ff        SBCA   #$FF
ab60: b3 50 00     SUBD   $5000
ab63: 10 24 00 c0  LBCC   $0143
ab67: bd cc f0     JSR    $CCF0
ab6a: 9e a8        LDX    <$A8
ab6c: a6 03        LDA    $3,X
ab6e: 85 03        BITA   #$03
ab70: 27 4e        BEQ    $00DC
ab72: cc 00 80     LDD    #$0080
ab75: fd 50 02     STD    $5002
ab78: 86 86        LDA    #$86
ab7a: bd cd ba     JSR    $CDBA
ab7d: fc 50 02     LDD    $5002
ab80: c3 00 0a     ADDD   #$000A
ab83: dd 03        STD    <$03
ab85: dc d6        LDD    <$D6
ab87: 93 b3        SUBD   <$B3
ab89: 2a 04        BPL    $00AB
ab8b: 43           COMA
ab8c: 50           NEGB
ab8d: 82 ff        SBCA   #$FF
ab8f: dd 01        STD    <$01
ab91: 93 03        SUBD   <$03
ab93: 2e 2b        BGT    $00DC
ab95: dc d8        LDD    <$D8
ab97: 93 b5        SUBD   <$B5
ab99: 2a 04        BPL    $00BB
ab9b: 43           COMA
ab9c: 50           NEGB
ab9d: 82 ff        SBCA   #$FF
ab9f: 10 93 03     CMPD   <$03
aba2: 2e 1c        BGT    $00DC
aba4: d3 01        ADDD   <$01
aba6: dd 01        STD    <$01
aba8: dc 03        LDD    <$03
abaa: 44           LSRA
abab: 56           RORB
abac: d3 03        ADDD   <$03
abae: 93 01        SUBD   <$01
abb0: 2d 0e        BLT    $00DC
abb2: fc 50 18     LDD    $5018
abb5: 10 93 cc     CMPD   <$CC
abb8: 24 06        BCC    $00DC
abba: dd cc        STD    <$CC
abbc: 9e a8        LDX    <$A8
abbe: 9f ca        STX    <$CA
abc0: a6 03        LDA    $3,X
abc2: 85 01        BITA   #$01
abc4: 27 5c        BEQ    $013E
abc6: fc 50 18     LDD    $5018
abc9: 58           ASLB
abca: 49           ROLA
abcb: 2b 55        BMI    $013E
abcd: fe 50 86     LDU    $5086
abd0: 11 83 02 00  CMPU   #$0200
abd4: 2d 05        BLT    $00F7
abd6: b3 50 86     SUBD   $5086
abd9: 20 03        BRA    $00FA
abdb: 83 02 00     SUBD   #$0200
abde: 2f 05        BLE    $0101
abe0: 83 01 10     SUBD   #$0110
abe3: 2e 3d        BGT    $013E
abe5: dc d6        LDD    <$D6
abe7: 2b 07        BMI    $010C
abe9: 83 01 c0     SUBD   #$01C0
abec: 2c 34        BGE    $013E
abee: 20 05        BRA    $0111
abf0: 83 fe 40     SUBD   #$FE40
abf3: 2f 2d        BLE    $013E
abf5: dc d8        LDD    <$D8
abf7: 2b 07        BMI    $011C
abf9: 83 01 e0     SUBD   #$01E0
abfc: 2c 24        BGE    $013E
abfe: 20 05        BRA    $0121
ac00: 83 fe 60     SUBD   #$FE60
ac03: 2f 1d        BLE    $013E
ac05: 9c ca        CMPX   <$CA
ac07: 26 0b        BNE    $0130
ac09: 96 bc        LDA    <$BC
ac0b: 27 07        BEQ    $0130
ac0d: bd ad 20     JSR    $AD20
ac10: 9e a8        LDX    <$A8
ac12: 20 0e        BRA    $013E
ac14: bd ac e0     JSR    $ACE0
ac17: cc 80 40     LDD    #$8040
ac1a: ed a1        STD    ,Y++
ac1c: bd ac b1     JSR    $ACB1
ac1f: 7e ac 34     JMP    $AC34
ac22: bd ac 52     JSR    $AC52
ac25: 20 0d        BRA    $0150
ac27: a6 03        LDA    $3,X
ac29: 85 01        BITA   #$01
ac2b: 27 04        BEQ    $014D
ac2d: 86 00        LDA    #$00
ac2f: 20 01        BRA    $014E
ac31: 4f           CLRA
ac32: a7 03        STA    $3,X
ac34: 9e a8        LDX    <$A8
ac36: 30 06        LEAX   $6,X
ac38: 8c 49 6f     CMPX   #$496F
ac3b: 10 25 fe a8  LBCS   $0003
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
ac5d: 27 06        BEQ    $0181
ac5f: 58           ASLB
ac60: 49           ROLA
ac61: 2a f8        BPL    $0177
ac63: 84 7f        ANDA   #$7F
ac65: 97 02        STA    <$02
ac67: a6 03        LDA    $3,X
ac69: 84 20        ANDA   #$20
ac6b: 26 0f        BNE    $0198
ac6d: 96 01        LDA    <$01
ac6f: 8a 70        ORA    #$70
ac71: d6 02        LDB    <$02
ac73: ed a1        STD    ,Y++
ac75: cc a0 15     LDD    #$A015
ac78: ed a1        STD    ,Y++
ac7a: 20 2a        BRA    $01C2
ac7c: d6 02        LDB    <$02
ac7e: 96 01        LDA    <$01
ac80: 4c           INCA
ac81: 81 03        CMPA   #$03
ac83: 24 05        BCC    $01A6
ac85: 86 03        LDA    #$03
ac87: 5f           CLRB
ac88: 20 07        BRA    $01AD
ac8a: 81 06        CMPA   #$06
ac8c: 25 03        BCS    $01AD
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
