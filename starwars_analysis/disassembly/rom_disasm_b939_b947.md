b939: 8e 49 e2  LDX    #$49E2
b93c: 86 00     LDA    #$00
b93e: a7 0d     STA    $D,X
b940: 30 0e     LEAX   $E,X
b942: 8c 4a 52  CMPX   #$4A52
b945: 25 f5     BCS    $B93C
b947: 39        RTS
b948: d6 a2     LDB    <$A2
b94a: 5c        INCB
b94b: c1 08     CMPB   #$08
b94d: 25 02     BCS    $B951
b94f: c6 00     LDB    #$00
b951: d7 a2     STB    <$A2
b953: 86 0e     LDA    #$0E
b955: 3d        MUL
b956: 8e 49 e2  LDX    #$49E2
b959: 30 8b     LEAX   D,X
b95b: 39        RTS
b95c: cc 14 bd  LDD    #$14BD
b95f: fd 50 22  STD    $5022
b962: cc 3c 8c  LDD    #$3C8C
b965: fd 50 24  STD    $5024
b968: cc 00 18  LDD    #$0018
b96b: fd 47 01  STD    $4701
b96e: 86 00     LDA    #$00
b970: bd cd ba  JSR    $CDBA
b973: cc 05 90  LDD    #$0590
b976: fd 50 22  STD    $5022
b979: cc 3f c2  LDD    #$3FC2
b97c: fd 50 24  STD    $5024
b97f: cc 00 18  LDD    #$0018
b982: fd 47 01  STD    $4701
b985: 86 0e     LDA    #$0E
b987: bd cd ba  JSR    $CDBA
b98a: 39        RTS
b98b: 8e 49 e2  LDX    #$49E2
b98e: a6 0d     LDA    $D,X
b990: 27 0f     BEQ    $B9A1
b992: 6a 0d     DEC    $D,X
b994: e6 0c     LDB    $C,X
b996: c1 09     CMPB   #$09
b998: 25 01     BCS    $B99B
b99a: 3f        SWI
b99b: ce b7 48  LDU    #$B748
b99e: 58        ASLB
b99f: ad d5     JSR    [B,U]
b9a1: 30 0e     LEAX   $E,X
b9a3: 8c 4a 52  CMPX   #$4A52
b9a6: 25 e6     BCS    $B98E
b9a8: 8e 49 e2  LDX    #$49E2
b9ab: a6 0d     LDA    $D,X
b9ad: 27 03     BEQ    $B9B2
b9af: 7e b9 5c  JMP    $B95C
b9b2: 30 0e     LEAX   $E,X
b9b4: 8c 4a 52  CMPX   #$4A52
b9b7: 25 f2     BCS    $B9AB
b9b9: ce 50 d0  LDU    #$50D0
b9bc: bd cd c3  JSR    $CDC3
b9bf: 39        RTS
b9c0: ec 06     LDD    $6,X
b9c2: e3 84     ADDD   ,X
b9c4: ed 84     STD    ,X
b9c6: cc 00 00  LDD    #$0000
b9c9: a3 06     SUBD   $6,X
b9cb: bd cd 9e  JSR    $CD9E
b9ce: e3 06     ADDD   $6,X
b9d0: ed 06     STD    $6,X
b9d2: ec 08     LDD    $8,X
b9d4: e3 02     ADDD   $2,X
b9d6: ed 02     STD    $2,X
b9d8: cc 00 00  LDD    #$0000
b9db: a3 08     SUBD   $8,X
b9dd: bd cd 9e  JSR    $CD9E
b9e0: e3 08     ADDD   $8,X
b9e2: ed 08     STD    $8,X
b9e4: ec 04     LDD    $4,X
b9e6: e3 0a     ADDD   $A,X
b9e8: 29 07     BVS    $B9F1
b9ea: 2c 03     BGE    $B9EF
b9ec: cc 00 00  LDD    #$0000
b9ef: ed 04     STD    $4,X
b9f1: ec 0a     LDD    $A,X
b9f3: 83 00 c8  SUBD   #$00C8
b9f6: ed 0a     STD    $A,X
b9f8: 39        RTS
b9f9: ec 06     LDD    $6,X
b9fb: e3 84     ADDD   ,X
b9fd: 29 02     BVS    $BA01
b9ff: ed 84     STD    ,X
ba01: ec 08     LDD    $8,X
ba03: e3 02     ADDD   $2,X
ba05: 29 02     BVS    $BA09
ba07: ed 02     STD    $2,X
ba09: ec 0a     LDD    $A,X
ba0b: e3 04     ADDD   $4,X
ba0d: 29 02     BVS    $BA11
ba0f: ed 04     STD    $4,X
ba11: 39        RTS
ba12: 86 18     LDA    #$18
ba14: bd ce 18  JSR    $CE18
ba17: 86 40     LDA    #$40
ba19: bd cd ba  JSR    $CDBA
ba1c: 8e 49 e2  LDX    #$49E2
ba1f: 9f 64     STX    <$64
ba21: a6 0d     LDA    $D,X
ba23: 27 03     BEQ    $BA28
ba25: bd ba 32  JSR    $BA32
ba28: 9e 64     LDX    <$64
ba2a: 30 0e     LEAX   $E,X
ba2c: 8c 4a 52  CMPX   #$4A52
ba2f: 25 ee     BCS    $BA1F
ba31: 39        RTS
ba32: ec 84     LDD    ,X
ba34: fd 50 78  STD    $5078
ba37: ec 02     LDD    $2,X
ba39: fd 50 7a  STD    $507A
ba3c: ec 04     LDD    $4,X
ba3e: fd 50 7c  STD    $507C
ba41: cc 00 0f  LDD    #$000F
ba44: fd 47 01  STD    $4701
ba47: 86 67     LDA    #$67
ba49: bd cd ba  JSR    $CDBA
ba4c: fc 50 00  LDD    $5000
ba4f: 2b 4c     BMI    $BA9D
ba51: fd 50 18  STD    $5018
ba54: fd 47 04  STD    $4704
ba57: fc 50 02  LDD    $5002
ba5a: fd 50 1a  STD    $501A
ba5d: 2a 04     BPL    $BA63
ba5f: 43        COMA
ba60: 50        NEGB
ba61: 82 ff     SBCA   #$FF
ba63: b3 50 18  SUBD   $5018
ba66: 2c 35     BGE    $BA9D
ba68: fc 50 04  LDD    $5004
ba6b: fd 50 1c  STD    $501C
ba6e: 2a 04     BPL    $BA74
ba70: 43        COMA
ba71: 50        NEGB
ba72: 82 ff     SBCA   #$FF
ba74: 44        LSRA
ba75: 56        RORB
ba76: b3 50 18  SUBD   $5018
ba79: 2c 22     BGE    $BA9D
ba7b: e6 0c     LDB    $C,X
ba7d: c1 09     CMPB   #$09
ba7f: 25 01     BCS    $BA82
ba81: 3f        SWI
ba82: ce b7 5a  LDU    #$B75A
ba85: 58        ASLB
ba86: ad d5     JSR    [B,U]
ba88: bd cc d8  JSR    $CCD8
ba8b: bd cd 20  JSR    $CD20
ba8e: bd cd 2c  JSR    $CD2C
ba91: cc 72 00  LDD    #$7200
ba94: ed a1     STD    ,Y++
ba96: cc 80 40  LDD    #$8040
ba99: ed a1     STD    ,Y++
ba9b: 20 02     BRA    $BA9F
ba9d: 6f 0d     CLR    $D,X
ba9f: 39        RTS
baa0: 86 14     LDA    #$14
baa2: 20 1a     BRA    $BABE
baa4: 86 15     LDA    #$15
baa6: 20 16     BRA    $BABE
baa8: 86 16     LDA    #$16
baaa: 20 12     BRA    $BABE
baac: 86 11     LDA    #$11
baae: 20 08     BRA    $BAB8
bab0: 86 12     LDA    #$12
bab2: 20 04     BRA    $BAB8
bab4: 86 13     LDA    #$13
bab6: 20 00     BRA    $BAB8
bab8: 97 dc     STA    <$DC
baba: 86 67     LDA    #$67
babc: 20 04     BRA    $BAC2
babe: 97 dc     STA    <$DC
bac0: 86 64     LDA    #$64
bac2: e6 0d     LDB    $D,X
bac4: c1 07     CMPB   #$07
bac6: 22 06     BHI    $BACE
bac8: 58        ASLB
bac9: 58        ASLB
baca: 58        ASLB
bacb: 58        ASLB
bacc: 20 02     BRA    $BAD0
bace: c6 80     LDB    #$80
bad0: ed a1     STD    ,Y++
bad2: ec 84     LDD    ,X
bad4: fd 50 78  STD    $5078
bad7: ec 02     LDD    $2,X
bad9: fd 50 7a  STD    $507A
badc: cc 00 00  LDD    #$0000
badf: fd 50 7c  STD    $507C
bae2: cc 00 0f  LDD    #$000F
bae5: fd 47 01  STD    $4701
bae8: fc 50 1c  LDD    $501C
baeb: 34 56     PSHS   U,X,D
baed: fe 50 1a  LDU    $501A
baf0: be 50 18  LDX    $5018
baf3: 86 67     LDA    #$67
baf5: bd cd ba  JSR    $CDBA
baf8: bf 50 18  STX    $5018
bafb: ff 50 1a  STU    $501A
bafe: 35 56     PULS   D,X,U
bb00: fd 50 1c  STD    $501C
bb03: fc 50 00  LDD    $5000
bb06: fd 47 04  STD    $4704
bb09: bd cc f0  JSR    $CCF0
bb0c: 86 72     LDA    #$72
bb0e: f6 50 18  LDB    $5018
bb11: 58        ASLB
bb12: 58        ASLB
bb13: ed a1     STD    ,Y++
bb15: 39        RTS
bb16: c6 03     LDB    #$03
bb18: 20 08     BRA    $BB22
bb1a: c6 01     LDB    #$01
bb1c: 20 04     BRA    $BB22
bb1e: c6 02     LDB    #$02
bb20: 20 00     BRA    $BB22
bb22: d7 dc     STB    <$DC
bb24: e6 0d     LDB    $D,X
bb26: c1 1f     CMPB   #$1F
bb28: 23 05     BLS    $BB2F
bb2a: cc a0 18  LDD    #$A018
bb2d: 20 06     BRA    $BB35
bb2f: ce bb 3b  LDU    #$BB3B
bb32: 58        ASLB
bb33: ec c5     LDD    B,U
bb35: ed a1     STD    ,Y++
bb37: bd cc 00  JSR    $CC00
