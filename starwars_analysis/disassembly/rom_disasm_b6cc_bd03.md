b6cc: cc a0 12     LDD    #$A012
b6cf: ed a1        STD    ,Y++
b6d1: fc 32 fe     LDD    $32FE
b6d4: ed a1        STD    ,Y++
b6d6: 39           RTS
b6d7: 96 7d        LDA    <$7D
b6d9: 2a 01        BPL    $B6DC
b6db: 40           NEGA
b6dc: c6 6e        LDB    #$6E
b6de: 3d           MUL
b6df: d6 7d        LDB    <$7D
b6e1: 2a 01        BPL    $B6E4
b6e3: 40           NEGA
b6e4: 1f 89        TFR    A,B
b6e6: 1d           SEX
b6e7: fd 4b 1c     STD    $4B1C
b6ea: 84 1f        ANDA   #$1F
b6ec: ed 22        STD    $2,Y
b6ee: ed 28        STD    $8,Y
b6f0: ed 2e        STD    $E,Y
b6f2: ed a8 14     STD    $14,Y
b6f5: ed a8 1a     STD    $1A,Y
b6f8: 96 7f        LDA    <$7F
b6fa: 2a 01        BPL    $B6FD
b6fc: 40           NEGA
b6fd: c6 50        LDB    #$50
b6ff: 3d           MUL
b700: d6 7f        LDB    <$7F
b702: 2a 01        BPL    $B705
b704: 40           NEGA
b705: 1f 89        TFR    A,B
b707: 1d           SEX
b708: fd 4b 1e     STD    $4B1E
b70b: 84 1f        ANDA   #$1F
b70d: ed a4        STD    ,Y
b70f: ed 26        STD    $6,Y
b711: ed 2c        STD    $C,Y
b713: ed a8 12     STD    $12,Y
b716: ed a8 18     STD    $18,Y
b719: cc ba ac     LDD    #$BAAC
b71c: ed 24        STD    $4,Y
b71e: cc ba 0d     LDD    #$BA0D
b721: ed 2a        STD    $A,Y
b723: cc bb 33     LDD    #$BB33
b726: ed a8 10     STD    $10,Y
b729: cc ba e6     LDD    #$BAE6
b72c: ed a8 16     STD    $16,Y
b72f: cc ba 5a     LDD    #$BA5A
b732: ed a8 1c     STD    $1C,Y
b735: 31 a8 1e     LEAY   $1E,Y
b738: 39           RTS
b739: 86 00        LDA    #$00
b73b: a7 03        STA    $3,X
b73d: bd 8e 1c     JSR    $8E1C
b740: 34 50        PSHS   U,X
b742: bd b7 6c     JSR    $B76C
b745: 35 50        PULS   X,U
b747: 39           RTS
b748: b9 c0 b9     ADCA   $C0B9
b74b: c0 b9        SUBB   #$B9
b74d: c0 b9        SUBB   #$B9
b74f: c0 b9        SUBB   #$B9
b751: c0 b9        SUBB   #$B9
b753: c0 b9        SUBB   #$B9
b755: f9 b9 f9     ADCB   $B9F9
b758: b9 f9 ba     ADCA   $F9BA
b75b: a0 ba        SUBA   [F,Y]
b75d: a4 ba        ANDA   [F,Y]
b75f: a8 ba        EORA   [F,Y]
b761: ac ba        CMPX   [F,Y]
b763: b0 ba b4     SUBA   $BAB4
b766: bb 1a bb     ADDA   $1ABB
b769: 1e bb        EXG    DP,DP
b76b: 16 ee 84     LBRA   $A5F2
b76e: bd b9 48     JSR    $B948
b771: 86 06        LDA    #$06
b773: a7 0c        STA    $C,X
b775: 86 18        LDA    #$18
b777: a7 0d        STA    $D,X
b779: cc 00 00     LDD    #$0000
b77c: a3 52        SUBD   -$E,U
b77e: bd cd 9c     JSR    $CD9C
b781: ed 06        STD    $6,X
b783: e3 48        ADDD   $8,U
b785: ed 84        STD    ,X
b787: cc 00 00     LDD    #$0000
b78a: a3 5a        SUBD   -$6,U
b78c: bd cd 9c     JSR    $CD9C
b78f: ed 08        STD    $8,X
b791: e3 4a        ADDD   $A,U
b793: ed 02        STD    $2,X
b795: cc 00 00     LDD    #$0000
b798: a3 42        SUBD   $2,U
b79a: bd cd 9c     JSR    $CD9C
b79d: ed 0a        STD    $A,X
b79f: e3 4c        ADDD   $C,U
b7a1: ed 04        STD    $4,X
b7a3: bd b8 3f     JSR    $B83F
b7a6: bd b9 48     JSR    $B948
b7a9: 86 07        LDA    #$07
b7ab: a7 0c        STA    $C,X
b7ad: 86 18        LDA    #$18
b7af: a7 0d        STA    $D,X
b7b1: ec 52        LDD    -$E,U
b7b3: bd cd 9c     JSR    $CD9C
b7b6: ed 06        STD    $6,X
b7b8: e3 48        ADDD   $8,U
b7ba: ed 84        STD    ,X
b7bc: ec 5a        LDD    -$6,U
b7be: bd cd 9c     JSR    $CD9C
b7c1: ed 08        STD    $8,X
b7c3: e3 4a        ADDD   $A,U
b7c5: ed 02        STD    $2,X
b7c7: ec 42        LDD    $2,U
b7c9: bd cd 9c     JSR    $CD9C
b7cc: ed 0a        STD    $A,X
b7ce: e3 4c        ADDD   $C,U
b7d0: ed 04        STD    $4,X
b7d2: bd b8 3f     JSR    $B83F
b7d5: bd b9 48     JSR    $B948
b7d8: 86 08        LDA    #$08
b7da: a7 0c        STA    $C,X
b7dc: 86 10        LDA    #$10
b7de: a7 0d        STA    $D,X
b7e0: ec 48        LDD    $8,U
b7e2: ed 84        STD    ,X
b7e4: ed 06        STD    $6,X
b7e6: ec 4a        LDD    $A,U
b7e8: ed 02        STD    $2,X
b7ea: ed 08        STD    $8,X
b7ec: ec 4c        LDD    $C,U
b7ee: ed 04        STD    $4,X
b7f0: ed 0a        STD    $A,X
b7f2: a6 06        LDA    $6,X
b7f4: c6 80        LDB    #$80
b7f6: 58           ASLB
b7f7: 49           ROLA
b7f8: 28 04        BVC    $B7FE
b7fa: 46           RORA
b7fb: 56           RORB
b7fc: 20 1e        BRA    $B81C
b7fe: 68 09        ASL    $9,X
b800: 69 08        ROL    $8,X
b802: 28 08        BVC    $B80C
b804: 66 08        ROR    $8,X
b806: 66 09        ROR    $9,X
b808: 47           ASRA
b809: 56           RORB
b80a: 20 10        BRA    $B81C
b80c: 68 0b        ASL    $B,X
b80e: 69 0a        ROL    $A,X
b810: 28 e4        BVC    $B7F6
b812: 66 0a        ROR    $A,X
b814: 66 0b        ROR    $B,X
b816: 67 08        ASR    $8,X
b818: 67 09        ASR    $9,X
b81a: 47           ASRA
b81b: 56           RORB
b81c: a3 84        SUBD   ,X
b81e: bd cd a0     JSR    $CDA0
b821: f6 47 03     LDB    $4703
b824: ed 06        STD    $6,X
b826: ec 08        LDD    $8,X
b828: a3 02        SUBD   $2,X
b82a: bd cd a0     JSR    $CDA0
b82d: f6 47 03     LDB    $4703
b830: ed 08        STD    $8,X
b832: ec 0a        LDD    $A,X
b834: a3 04        SUBD   $4,X
b836: bd cd a0     JSR    $CDA0
b839: f6 47 03     LDB    $4703
b83c: ed 0a        STD    $A,X
b83e: 39           RTS
b83f: ec 56        LDD    -$A,U
b841: e3 06        ADDD   $6,X
b843: ed 06        STD    $6,X
b845: ec 5e        LDD    -$2,U
b847: e3 08        ADDD   $8,X
b849: ed 08        STD    $8,X
b84b: ec 46        LDD    $6,U
b84d: e3 0a        ADDD   $A,X
b84f: ed 0a        STD    $A,X
b851: 39           RTS
b852: cc 00 01     LDD    #$0001
b855: dd 01        STD    <$01
b857: cc 02 03     LDD    #$0203
b85a: dd 03        STD    <$03
b85c: 20 0a        BRA    $B868
b85e: cc 03 04     LDD    #$0304
b861: dd 01        STD    <$01
b863: cc 05 02     LDD    #$0502
b866: dd 03        STD    <$03
b868: bd b9 48     JSR    $B948
b86b: 96 01        LDA    <$01
b86d: a7 0c        STA    $C,X
b86f: 86 20        LDA    #$20
b871: a7 0d        STA    $D,X
b873: fc 50 18     LDD    $5018
b876: ed 84        STD    ,X
b878: fc 50 1a     LDD    $501A
b87b: 8b fe        ADDA   #$FE
b87d: ed 02        STD    $2,X
b87f: fc 50 1c     LDD    $501C
b882: ed 04        STD    $4,X
b884: fc 50 98     LDD    $5098
b887: 8b 7f        ADDA   #$7F
b889: b3 50 18     SUBD   $5018
b88c: bd cd 9e     JSR    $CD9E
b88f: f6 47 03     LDB    $4703
b892: ed 06        STD    $6,X
b894: fc 50 9a     LDD    $509A
b897: 8b c1        ADDA   #$C1
b899: b3 50 1a     SUBD   $501A
b89c: bd cd 9e     JSR    $CD9E
b89f: f6 47 03     LDB    $4703
b8a2: ed 08        STD    $8,X
b8a4: 96 04        LDA    <$04
b8a6: f6 47 03     LDB    $4703
b8a9: bd cd b5     JSR    $CDB5
b8ac: ed 0a        STD    $A,X
b8ae: bd b9 48     JSR    $B948
b8b1: 96 02        LDA    <$02
b8b3: a7 0c        STA    $C,X
b8b5: 86 20        LDA    #$20
b8b7: a7 0d        STA    $D,X
b8b9: fc 50 18     LDD    $5018
b8bc: 8b 02        ADDA   #$02
b8be: ed 84        STD    ,X
b8c0: fc 50 1a     LDD    $501A
b8c3: ed 02        STD    $2,X
b8c5: fc 50 1c     LDD    $501C
b8c8: ed 04        STD    $4,X
b8ca: fc 50 98     LDD    $5098
b8cd: 8b 7f        ADDA   #$7F
b8cf: b3 50 18     SUBD   $5018
b8d2: bd cd 9e     JSR    $CD9E
b8d5: f6 47 03     LDB    $4703
b8d8: ed 06        STD    $6,X
b8da: fc 50 9a     LDD    $509A
b8dd: b3 50 1a     SUBD   $501A
b8e0: bd cd 9e     JSR    $CD9E
b8e3: f6 47 03     LDB    $4703
b8e6: ed 08        STD    $8,X
b8e8: 96 04        LDA    <$04
b8ea: f6 47 03     LDB    $4703
b8ed: bd cd b5     JSR    $CDB5
b8f0: ed 0a        STD    $A,X
b8f2: bd b9 48     JSR    $B948
b8f5: 96 03        LDA    <$03
b8f7: a7 0c        STA    $C,X
b8f9: 86 20        LDA    #$20
b8fb: a7 0d        STA    $D,X
b8fd: fc 50 18     LDD    $5018
b900: ed 84        STD    ,X
b902: fc 50 1a     LDD    $501A
b905: 8b 02        ADDA   #$02
b907: ed 02        STD    $2,X
b909: fc 50 1c     LDD    $501C
b90c: ed 04        STD    $4,X
b90e: fc 50 98     LDD    $5098
b911: 8b 7f        ADDA   #$7F
b913: b3 50 18     SUBD   $5018
b916: bd cd 9e     JSR    $CD9E
b919: f6 47 03     LDB    $4703
b91c: ed 06        STD    $6,X
b91e: fc 50 9a     LDD    $509A
b921: 8b 3f        ADDA   #$3F
b923: b3 50 1a     SUBD   $501A
b926: bd cd 9e     JSR    $CD9E
b929: f6 47 03     LDB    $4703
b92c: ed 08        STD    $8,X
b92e: 96 04        LDA    <$04
b930: f6 47 03     LDB    $4703
b933: bd cd b5     JSR    $CDB5
b936: ed 0a        STD    $A,X
b938: 39           RTS
b939: 8e 49 e2     LDX    #$49E2
b93c: 86 00        LDA    #$00
b93e: a7 0d        STA    $D,X
b940: 30 0e        LEAX   $E,X
b942: 8c 4a 52     CMPX   #$4A52
b945: 25 f5        BCS    $B93C
b947: 39           RTS
b948: d6 a2        LDB    <$A2
b94a: 5c           INCB
b94b: c1 08        CMPB   #$08
b94d: 25 02        BCS    $B951
b94f: c6 00        LDB    #$00
b951: d7 a2        STB    <$A2
b953: 86 0e        LDA    #$0E
b955: 3d           MUL
b956: 8e 49 e2     LDX    #$49E2
b959: 30 8b        LEAX   D,X
b95b: 39           RTS
b95c: cc 14 bd     LDD    #$14BD
b95f: fd 50 22     STD    $5022
b962: cc 3c 8c     LDD    #$3C8C
b965: fd 50 24     STD    $5024
b968: cc 00 18     LDD    #$0018
b96b: fd 47 01     STD    $4701
b96e: 86 00        LDA    #$00
b970: bd cd ba     JSR    $CDBA
b973: cc 05 90     LDD    #$0590
b976: fd 50 22     STD    $5022
b979: cc 3f c2     LDD    #$3FC2
b97c: fd 50 24     STD    $5024
b97f: cc 00 18     LDD    #$0018
b982: fd 47 01     STD    $4701
b985: 86 0e        LDA    #$0E
b987: bd cd ba     JSR    $CDBA
b98a: 39           RTS
b98b: 8e 49 e2     LDX    #$49E2
b98e: a6 0d        LDA    $D,X
b990: 27 0f        BEQ    $B9A1
b992: 6a 0d        DEC    $D,X
b994: e6 0c        LDB    $C,X
b996: c1 09        CMPB   #$09
b998: 25 01        BCS    $B99B
b99a: 3f           SWI
b99b: ce b7 48     LDU    #$B748
b99e: 58           ASLB
b99f: ad d5        JSR    [B,U]
b9a1: 30 0e        LEAX   $E,X
b9a3: 8c 4a 52     CMPX   #$4A52
b9a6: 25 e6        BCS    $B98E
b9a8: 8e 49 e2     LDX    #$49E2
b9ab: a6 0d        LDA    $D,X
b9ad: 27 03        BEQ    $B9B2
b9af: 7e b9 5c     JMP    $B95C
b9b2: 30 0e        LEAX   $E,X
b9b4: 8c 4a 52     CMPX   #$4A52
b9b7: 25 f2        BCS    $B9AB
b9b9: ce 50 d0     LDU    #$50D0
b9bc: bd cd c3     JSR    $CDC3
b9bf: 39           RTS
b9c0: ec 06        LDD    $6,X
b9c2: e3 84        ADDD   ,X
b9c4: ed 84        STD    ,X
b9c6: cc 00 00     LDD    #$0000
b9c9: a3 06        SUBD   $6,X
b9cb: bd cd 9e     JSR    $CD9E
b9ce: e3 06        ADDD   $6,X
b9d0: ed 06        STD    $6,X
b9d2: ec 08        LDD    $8,X
b9d4: e3 02        ADDD   $2,X
b9d6: ed 02        STD    $2,X
b9d8: cc 00 00     LDD    #$0000
b9db: a3 08        SUBD   $8,X
b9dd: bd cd 9e     JSR    $CD9E
b9e0: e3 08        ADDD   $8,X
b9e2: ed 08        STD    $8,X
b9e4: ec 04        LDD    $4,X
b9e6: e3 0a        ADDD   $A,X
b9e8: 29 07        BVS    $B9F1
b9ea: 2c 03        BGE    $B9EF
b9ec: cc 00 00     LDD    #$0000
b9ef: ed 04        STD    $4,X
b9f1: ec 0a        LDD    $A,X
b9f3: 83 00 c8     SUBD   #$00C8
b9f6: ed 0a        STD    $A,X
b9f8: 39           RTS
b9f9: ec 06        LDD    $6,X
b9fb: e3 84        ADDD   ,X
b9fd: 29 02        BVS    $BA01
b9ff: ed 84        STD    ,X
ba01: ec 08        LDD    $8,X
ba03: e3 02        ADDD   $2,X
ba05: 29 02        BVS    $BA09
ba07: ed 02        STD    $2,X
ba09: ec 0a        LDD    $A,X
ba0b: e3 04        ADDD   $4,X
ba0d: 29 02        BVS    $BA11
ba0f: ed 04        STD    $4,X
ba11: 39           RTS
ba12: 86 18        LDA    #$18
ba14: bd ce 18     JSR    $CE18
ba17: 86 40        LDA    #$40
ba19: bd cd ba     JSR    $CDBA
ba1c: 8e 49 e2     LDX    #$49E2
ba1f: 9f 64        STX    <$64
ba21: a6 0d        LDA    $D,X
ba23: 27 03        BEQ    $BA28
ba25: bd ba 32     JSR    $BA32
ba28: 9e 64        LDX    <$64
ba2a: 30 0e        LEAX   $E,X
ba2c: 8c 4a 52     CMPX   #$4A52
ba2f: 25 ee        BCS    $BA1F
ba31: 39           RTS
ba32: ec 84        LDD    ,X
ba34: fd 50 78     STD    $5078
ba37: ec 02        LDD    $2,X
ba39: fd 50 7a     STD    $507A
ba3c: ec 04        LDD    $4,X
ba3e: fd 50 7c     STD    $507C
ba41: cc 00 0f     LDD    #$000F
ba44: fd 47 01     STD    $4701
ba47: 86 67        LDA    #$67
ba49: bd cd ba     JSR    $CDBA
ba4c: fc 50 00     LDD    $5000
ba4f: 2b 4c        BMI    $BA9D
ba51: fd 50 18     STD    $5018
ba54: fd 47 04     STD    $4704
ba57: fc 50 02     LDD    $5002
ba5a: fd 50 1a     STD    $501A
ba5d: 2a 04        BPL    $BA63
ba5f: 43           COMA
ba60: 50           NEGB
ba61: 82 ff        SBCA   #$FF
ba63: b3 50 18     SUBD   $5018
ba66: 2c 35        BGE    $BA9D
ba68: fc 50 04     LDD    $5004
ba6b: fd 50 1c     STD    $501C
ba6e: 2a 04        BPL    $BA74
ba70: 43           COMA
ba71: 50           NEGB
ba72: 82 ff        SBCA   #$FF
ba74: 44           LSRA
ba75: 56           RORB
ba76: b3 50 18     SUBD   $5018
ba79: 2c 22        BGE    $BA9D
ba7b: e6 0c        LDB    $C,X
ba7d: c1 09        CMPB   #$09
ba7f: 25 01        BCS    $BA82
ba81: 3f           SWI
ba82: ce b7 5a     LDU    #$B75A
ba85: 58           ASLB
ba86: ad d5        JSR    [B,U]
ba88: bd cc d8     JSR    $CCD8
ba8b: bd cd 20     JSR    $CD20
ba8e: bd cd 2c     JSR    $CD2C
ba91: cc 72 00     LDD    #$7200
ba94: ed a1        STD    ,Y++
ba96: cc 80 40     LDD    #$8040
ba99: ed a1        STD    ,Y++
ba9b: 20 02        BRA    $BA9F
ba9d: 6f 0d        CLR    $D,X
ba9f: 39           RTS
baa0: 86 14        LDA    #$14
baa2: 20 1a        BRA    $BABE
baa4: 86 15        LDA    #$15
baa6: 20 16        BRA    $BABE
baa8: 86 16        LDA    #$16
baaa: 20 12        BRA    $BABE
baac: 86 11        LDA    #$11
baae: 20 08        BRA    $BAB8
bab0: 86 12        LDA    #$12
bab2: 20 04        BRA    $BAB8
bab4: 86 13        LDA    #$13
bab6: 20 00        BRA    $BAB8
bab8: 97 dc        STA    <$DC
baba: 86 67        LDA    #$67
babc: 20 04        BRA    $BAC2
babe: 97 dc        STA    <$DC
bac0: 86 64        LDA    #$64
bac2: e6 0d        LDB    $D,X
bac4: c1 07        CMPB   #$07
bac6: 22 06        BHI    $BACE
bac8: 58           ASLB
bac9: 58           ASLB
baca: 58           ASLB
bacb: 58           ASLB
bacc: 20 02        BRA    $BAD0
bace: c6 80        LDB    #$80
bad0: ed a1        STD    ,Y++
bad2: ec 84        LDD    ,X
bad4: fd 50 78     STD    $5078
bad7: ec 02        LDD    $2,X
bad9: fd 50 7a     STD    $507A
badc: cc 00 00     LDD    #$0000
badf: fd 50 7c     STD    $507C
bae2: cc 00 0f     LDD    #$000F
bae5: fd 47 01     STD    $4701
bae8: fc 50 1c     LDD    $501C
baeb: 34 56        PSHS   U,X,D
baed: fe 50 1a     LDU    $501A
baf0: be 50 18     LDX    $5018
baf3: 86 67        LDA    #$67
baf5: bd cd ba     JSR    $CDBA
baf8: bf 50 18     STX    $5018
bafb: ff 50 1a     STU    $501A
bafe: 35 56        PULS   D,X,U
bb00: fd 50 1c     STD    $501C
bb03: fc 50 00     LDD    $5000
bb06: fd 47 04     STD    $4704
bb09: bd cc f0     JSR    $CCF0
bb0c: 86 72        LDA    #$72
bb0e: f6 50 18     LDB    $5018
bb11: 58           ASLB
bb12: 58           ASLB
bb13: ed a1        STD    ,Y++
bb15: 39           RTS
bb16: c6 03        LDB    #$03
bb18: 20 08        BRA    $BB22
bb1a: c6 01        LDB    #$01
bb1c: 20 04        BRA    $BB22
bb1e: c6 02        LDB    #$02
bb20: 20 00        BRA    $BB22
bb22: d7 dc        STB    <$DC
bb24: e6 0d        LDB    $D,X
bb26: c1 1f        CMPB   #$1F
bb28: 23 05        BLS    $BB2F
bb2a: cc a0 18     LDD    #$A018
bb2d: 20 06        BRA    $BB35
bb2f: ce bb 3b     LDU    #$BB3B
bb32: 58           ASLB
bb33: ec c5        LDD    B,U
bb35: ed a1        STD    ,Y++
bb37: bd cc f0     JSR    $CCF0
bb3a: 39           RTS
bb3b: 62 30        XNC    -$10,Y
bb3d: 62 30        XNC    -$10,Y
bb3f: 62 40        XNC    $0,U
bb41: 62 40        XNC    $0,U
bb43: 62 50        XNC    -$10,U
bb45: 62 50        XNC    -$10,U
bb47: 62 60        XNC    $0,S
bb49: 62 60        XNC    $0,S
bb4b: 62 70        XNC    -$10,S
bb4d: 62 70        XNC    -$10,S
bb4f: 62 80        XNC    ,X+
bb51: 62 80        XNC    ,X+
bb53: 62 90        XNC    [,W]
bb55: 62 90        XNC    [,W]
bb57: 62 a0        XNC    ,Y+
bb59: 62 a0        XNC    ,Y+
bb5b: 67 80        ASR    ,X+
bb5d: 62 a0        XNC    ,Y+
bb5f: 67 90        ASR    [,W]
bb61: 62 a0        XNC    ,Y+
bb63: 67 a0        ASR    ,Y+
bb65: 62 a0        XNC    ,Y+
bb67: 67 c0        ASR    ,U+
bb69: 62 a0        XNC    ,Y+
bb6b: 66 a0        ROR    ,Y+
bb6d: 66 a0        ROR    ,Y+
bb6f: 66 a0        ROR    ,Y+
bb71: 66 a0        ROR    ,Y+
bb73: 66 a0        ROR    ,Y+
bb75: 66 a0        ROR    ,Y+
bb77: 66 a0        ROR    ,Y+
bb79: 66 a0        ROR    ,Y+
bb7b: 86 01        LDA    #$01
bb7d: 97 a1        STA    <$A1
bb7f: cc 00 01     LDD    #$0001
bb82: dd 9f        STD    <$9F
bb84: 39           RTS
bb85: 96 a1        LDA    <$A1
bb87: 48           ASLA
bb88: 8e bb 8e     LDX    #$BB8E
bb8b: ad 96        JSR    [A,X]
bb8d: 39           RTS
bb8e: bb 8d bb     ADDA   $8DBB
bb91: 98 bb        EORA   <$BB
bb93: bb bc 1e     ADDA   $BC1E
bb96: bc 85 cc     CMPX   $85CC
bb99: 64 80        LSR    ,X+
bb9b: ce 76 f0     LDU    #$76F0
bb9e: 9e 9f        LDX    <$9F
bba0: bd bc ae     JSR    $BCAE
bba3: dc 9f        LDD    <$9F
bba5: c3 00 02     ADDD   #$0002
bba8: dd 9f        STD    <$9F
bbaa: 10 83 00 3f  CMPD   #$003F
bbae: 24 0a        BCC    $BBBA
bbb0: cc 00 01     LDD    #$0001
bbb3: dd 9f        STD    <$9F
bbb5: 0c a1        INC    <$A1
bbb7: bd bd b7     JSR    $BDB7
bbba: 39           RTS
bbbb: 9e 9f        LDX    <$9F
bbbd: cc 61 ff     LDD    #$61FF
bbc0: ce 76 f0     LDU    #$76F0
bbc3: bd bc ae     JSR    $BCAE
bbc6: dc 9f        LDD    <$9F
bbc8: c3 00 02     ADDD   #$0002
bbcb: dd 9f        STD    <$9F
bbcd: 10 83 00 3f  CMPD   #$003F
bbd1: 24 38        BCC    $BC0B
bbd3: c6 3f        LDB    #$3F
bbd5: d0 a0        SUBB   <$A0
bbd7: 4f           CLRA
bbd8: 1f 01        TFR    D,X
bbda: cc 64 ff     LDD    #$64FF
bbdd: bd bc ae     JSR    $BCAE
bbe0: dc 9f        LDD    <$9F
bbe2: 58           ASLB
bbe3: 49           ROLA
bbe4: 58           ASLB
bbe5: 49           ROLA
bbe6: 58           ASLB
bbe7: 49           ROLA
bbe8: 43           COMA
bbe9: 53           COMB
bbea: 2b 03        BMI    $BBEF
bbec: 4a           DECA
bbed: ca 80        ORB    #$80
bbef: c3 76 70     ADDD   #$7670
bbf2: 5d           TSTB
bbf3: 2b 03        BMI    $BBF8
bbf5: 4a           DECA
bbf6: c4 7f        ANDB   #$7F
bbf8: 1f 03        TFR    D,U
bbfa: dc 9f        LDD    <$9F
bbfc: 54           LSRB
bbfd: 54           LSRB
bbfe: c4 07        ANDB   #$07
bc00: c8 07        EORB   #$07
bc02: 5c           INCB
bc03: 1f 01        TFR    D,X
bc05: cc 64 ff     LDD    #$64FF
bc08: bd bc c8     JSR    $BCC8
bc0b: dc 9f        LDD    <$9F
bc0d: 10 83 00 3f  CMPD   #$003F
bc11: 25 0a        BCS    $BC1D
bc13: cc 00 01     LDD    #$0001
bc16: dd 9f        STD    <$9F
bc18: 0c a1        INC    <$A1
bc1a: bd bd b7     JSR    $BDB7
bc1d: 39           RTS
bc1e: 9e 9f        LDX    <$9F
bc20: cc 67 ff     LDD    #$67FF
bc23: ce 76 70     LDU    #$7670
bc26: bd bc ae     JSR    $BCAE
bc29: dc 9f        LDD    <$9F
bc2b: c3 00 03     ADDD   #$0003
bc2e: dd 9f        STD    <$9F
bc30: 10 83 00 3f  CMPD   #$003F
bc34: 24 0d        BCC    $BC43
bc36: c6 3f        LDB    #$3F
bc38: d0 a0        SUBB   <$A0
bc3a: 4f           CLRA
bc3b: 1f 01        TFR    D,X
bc3d: cc 61 ff     LDD    #$61FF
bc40: bd bc ae     JSR    $BCAE
bc43: dc 9f        LDD    <$9F
bc45: 10 83 00 3f  CMPD   #$003F
bc49: 24 27        BCC    $BC72
bc4b: 58           ASLB
bc4c: 49           ROLA
bc4d: 58           ASLB
bc4e: 49           ROLA
bc4f: 58           ASLB
bc50: 49           ROLA
bc51: 43           COMA
bc52: 53           COMB
bc53: 2b 03        BMI    $BC58
bc55: 4a           DECA
bc56: ca 80        ORB    #$80
bc58: c3 76 70     ADDD   #$7670
bc5b: 5d           TSTB
bc5c: 2b 03        BMI    $BC61
bc5e: 4a           DECA
bc5f: c4 7f        ANDB   #$7F
bc61: 1f 03        TFR    D,U
bc63: dc 9f        LDD    <$9F
bc65: c4 0f        ANDB   #$0F
bc67: c8 0f        EORB   #$0F
bc69: 5c           INCB
bc6a: 1f 01        TFR    D,X
bc6c: cc 61 ff     LDD    #$61FF
bc6f: bd bc c8     JSR    $BCC8
bc72: dc 9f        LDD    <$9F
bc74: 10 83 00 50  CMPD   #$0050
bc78: 25 0a        BCS    $BC84
bc7a: cc 00 80     LDD    #$0080
bc7d: dd 9f        STD    <$9F
bc7f: 0c a1        INC    <$A1
bc81: bd bd b7     JSR    $BDB7
bc84: 39           RTS
bc85: dc 9f        LDD    <$9F
bc87: 83 00 04     SUBD   #$0004
bc8a: dd 9f        STD    <$9F
bc8c: 10 83 00 08  CMPD   #$0008
bc90: 25 17        BCS    $BCA9
bc92: c3 75 00     ADDD   #$7500
bc95: 1f 03        TFR    D,U
bc97: dc 9f        LDD    <$9F
bc99: 44           LSRA
bc9a: 56           RORB
bc9b: c4 3f        ANDB   #$3F
bc9d: c8 3f        EORB   #$3F
bc9f: 1f 01        TFR    D,X
bca1: cc 67 ff     LDD    #$67FF
bca4: bd bc c8     JSR    $BCC8
bca7: 20 04        BRA    $BCAD
bca9: 86 00        LDA    #$00
bcab: 97 a1        STA    <$A1
bcad: 39           RTS
bcae: ed a1        STD    ,Y++
bcb0: cc 1f 98     LDD    #$1F98
bcb3: ed a1        STD    ,Y++
bcb5: cc 00 00     LDD    #$0000
bcb8: ed a1        STD    ,Y++
bcba: ef a1        STU    ,Y++
bcbc: cc bd 69     LDD    #$BD69
bcbf: ed a1        STD    ,Y++
bcc1: 33 5e        LEAU   -$2,U
bcc3: 30 1f        LEAX   -$1,X
bcc5: 26 e9        BNE    $BCB0
bcc7: 39           RTS
bcc8: ed a1        STD    ,Y++
bcca: cc 1f 98     LDD    #$1F98
bccd: ed a1        STD    ,Y++
bccf: cc 00 00     LDD    #$0000
bcd2: ed a1        STD    ,Y++
bcd4: ef a1        STU    ,Y++
bcd6: cc bd 69     LDD    #$BD69
bcd9: ed a1        STD    ,Y++
bcdb: 1f 30        TFR    U,D
bcdd: 83 00 04     SUBD   #$0004
bce0: c4 7f        ANDB   #$7F
bce2: 1f 03        TFR    D,U
bce4: 30 1f        LEAX   -$1,X
bce6: 26 e2        BNE    $BCCA
bce8: 39           RTS
bce9: c6 0e        LDB    #$0E
bceb: 7d 44 01     TST    $4401
bcee: 2a 05        BPL    $BCF5
bcf0: 5a           DECB
bcf1: 26 f8        BNE    $BCEB
bcf3: 86 00        LDA    #$00
bcf5: b7 44 00     STA    $4400
bcf8: 39           RTS
bcf9: 86 01        LDA    #$01
bcfb: 7e bc e9     JMP    $BCE9
bcfe: 86 02        LDA    #$02
bd00: 7e bc e9     JMP    $BCE9
bd03: 7e bd03     JMP    $bd03
