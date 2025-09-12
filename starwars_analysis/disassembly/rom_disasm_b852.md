b852: cc 00 01  LDD    #$0001
b855: dd 01     STD    <$01
b857: cc 02 03  LDD    #$0203
b85a: dd 03     STD    <$03
b85c: 20 0a     BRA    $B868
b85e: cc 03 04  LDD    #$0304
b861: dd 01     STD    <$01
b863: cc 05 02  LDD    #$0502
b866: dd 03     STD    <$03
b868: bd b9 48  JSR    $B948
b86b: 96 01     LDA    <$01
b86d: a7 0c     STA    $C,X
b86f: 86 20     LDA    #$20
b871: a7 0d     STA    $D,X
b873: fc 50 18  LDD    $5018
b876: ed 84     STD    ,X
b878: fc 50 1a  LDD    $501A
b87b: 8b fe     ADDA   #$FE
b87d: ed 02     STD    $2,X
b87f: fc 50 1c  LDD    $501C
b882: ed 04     STD    $4,X
b884: fc 50 98  LDD    $5098
b887: 8b 7f     ADDA   #$7F
b889: b3 50 18  SUBD   $5018
b88c: bd cd 9e  JSR    $CD9E
b88f: f6 47 03  LDB    $4703
b892: ed 06     STD    $6,X
b894: fc 50 9a  LDD    $509A
b897: 8b c1     ADDA   #$C1
b899: b3 50 1a  SUBD   $501A
b89c: bd cd 9e  JSR    $CD9E
b89f: f6 47 03  LDB    $4703
b8a2: ed 08     STD    $8,X
b8a4: 96 04     LDA    <$04
b8a6: f6 47 03  LDB    $4703
b8a9: bd cd b5  JSR    $CDB5
b8ac: ed 0a     STD    $A,X
b8ae: bd b9 48  JSR    $B948
b8b1: 96 02     LDA    <$02
b8b3: a7 0c     STA    $C,X
b8b5: 86 20     LDA    #$20
b8b7: a7 0d     STA    $D,X
b8b9: fc 50 18  LDD    $5018
b8bc: 8b 02     ADDA   #$02
b8be: ed 84     STD    ,X
b8c0: fc 50 1a  LDD    $501A
b8c3: ed 02     STD    $2,X
b8c5: fc 50 1c  LDD    $501C
b8c8: ed 04     STD    $4,X
b8ca: fc 50 98  LDD    $5098
b8cd: 8b 7f     ADDA   #$7F
b8cf: b3 50 18  SUBD   $5018
b8d2: bd cd 9e  JSR    $CD9E
b8d5: f6 47 03  LDB    $4703
b8d8: ed 06     STD    $6,X
b8da: fc 50 9a  LDD    $509A
b8dd: b3 50 1a  SUBD   $501A
b8e0: bd cd 9e  JSR    $CD9E
b8e3: f6 47 03  LDB    $4703
b8e6: ed 08     STD    $8,X
b8e8: 96 04     LDA    <$04
b8ea: f6 47 03  LDB    $4703
b8ed: bd cd b5  JSR    $CDB5
b8f0: ed 0a     STD    $A,X
b8f2: bd b9 48  JSR    $B948
b8f5: 96 03     LDA    <$03
b8f7: a7 0c     STA    $C,X
b8f9: 86 20     LDA    #$20
b8fb: a7 0d     STA    $D,X
b8fd: fc 50 18  LDD    $5018
b900: ed 84     STD    ,X
b902: fc 50 1a  LDD    $501A
b905: 8b 02     ADDA   #$02
b907: ed 02     STD    $2,X
b909: fc 50 1c  LDD    $501C
b90c: ed 04     STD    $4,X
b90e: fc 50 98  LDD    $5098
b911: 8b 7f     ADDA   #$7F
b913: b3 50 18  SUBD   $5018
b916: bd cd 9e  JSR    $CD9E
b919: f6 47 03  LDB    $4703
b91c: ed 06     STD    $6,X
b91e: fc 50 9a  LDD    $509A
b921: 8b 3f     ADDA   #$3F
b923: b3 50 1a  SUBD   $501A
b926: bd cd 9e  JSR    $CD9E
b929: f6 47 03  LDB    $4703
b92c: ed 08     STD    $8,X
b92e: 96 04     LDA    <$04
b930: f6 47 03  LDB    $4703
b933: bd cd b5  JSR    $CDB5
b936: ed 0a     STD    $A,X
b938: 39        RTS
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
ba51: fd 00 00  STD    >$0000
