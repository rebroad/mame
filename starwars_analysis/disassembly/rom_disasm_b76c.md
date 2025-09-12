b76c: ee 84     LDU    ,X
b76e: bd b9 48  JSR    $B948
b771: 86 06     LDA    #$06
b773: a7 0c     STA    $C,X
b775: 86 18     LDA    #$18
b777: a7 0d     STA    $D,X
b779: cc 00 00  LDD    #$0000
b77c: a3 52     SUBD   -$E,U
b77e: bd cd 9c  JSR    $CD9C
b781: ed 06     STD    $6,X
b783: e3 48     ADDD   $8,U
b785: ed 84     STD    ,X
b787: cc 00 00  LDD    #$0000
b78a: a3 5a     SUBD   -$6,U
b78c: bd cd 9c  JSR    $CD9C
b78f: ed 08     STD    $8,X
b791: e3 4a     ADDD   $A,U
b793: ed 02     STD    $2,X
b795: cc 00 00  LDD    #$0000
b798: a3 42     SUBD   $2,U
b79a: bd cd 9c  JSR    $CD9C
b79d: ed 0a     STD    $A,X
b79f: e3 4c     ADDD   $C,U
b7a1: ed 04     STD    $4,X
b7a3: bd b8 3f  JSR    $B83F
b7a6: bd b9 48  JSR    $B948
b7a9: 86 07     LDA    #$07
b7ab: a7 0c     STA    $C,X
b7ad: 86 18     LDA    #$18
b7af: a7 0d     STA    $D,X
b7b1: ec 52     LDD    -$E,U
b7b3: bd cd 9c  JSR    $CD9C
b7b6: ed 06     STD    $6,X
b7b8: e3 48     ADDD   $8,U
b7ba: ed 84     STD    ,X
b7bc: ec 5a     LDD    -$6,U
b7be: bd cd 9c  JSR    $CD9C
b7c1: ed 08     STD    $8,X
b7c3: e3 4a     ADDD   $A,U
b7c5: ed 02     STD    $2,X
b7c7: ec 42     LDD    $2,U
b7c9: bd cd 9c  JSR    $CD9C
b7cc: ed 0a     STD    $A,X
b7ce: e3 4c     ADDD   $C,U
b7d0: ed 04     STD    $4,X
b7d2: bd b8 3f  JSR    $B83F
b7d5: bd b9 48  JSR    $B948
b7d8: 86 08     LDA    #$08
b7da: a7 0c     STA    $C,X
b7dc: 86 10     LDA    #$10
b7de: a7 0d     STA    $D,X
b7e0: ec 48     LDD    $8,U
b7e2: ed 84     STD    ,X
b7e4: ed 06     STD    $6,X
b7e6: ec 4a     LDD    $A,U
b7e8: ed 02     STD    $2,X
b7ea: ed 08     STD    $8,X
b7ec: ec 4c     LDD    $C,U
b7ee: ed 04     STD    $4,X
b7f0: ed 0a     STD    $A,X
b7f2: a6 06     LDA    $6,X
b7f4: c6 80     LDB    #$80
b7f6: 58        ASLB
b7f7: 49        ROLA
b7f8: 28 04     BVC    $0092
b7fa: 46        RORA
b7fb: 56        RORB
b7fc: 20 1e     BRA    $00B0
b7fe: 68 09     ASL    $9,X
b800: 69 08     ROL    $8,X
b802: 28 08     BVC    $00A0
b804: 66 08     ROR    $8,X
b806: 66 09     ROR    $9,X
b808: 47        ASRA
b809: 56        RORB
b80a: 20 10     BRA    $00B0
b80c: 68 0b     ASL    $B,X
b80e: 69 0a     ROL    $A,X
b810: 28 e4     BVC    $008A
b812: 66 0a     ROR    $A,X
b814: 66 0b     ROR    $B,X
b816: 67 08     ASR    $8,X
b818: 67 09     ASR    $9,X
b81a: 47        ASRA
b81b: 56        RORB
b81c: a3 84     SUBD   ,X
b81e: bd cd a0  JSR    $CDA0
b821: f6 47 03  LDB    $4703
b824: ed 06     STD    $6,X
b826: ec 08     LDD    $8,X
b828: a3 02     SUBD   $2,X
b82a: bd cd a0  JSR    $CDA0
b82d: f6 47 03  LDB    $4703
b830: ed 08     STD    $8,X
b832: ec 0a     LDD    $A,X
b834: a3 04     SUBD   $4,X
b836: bd cd a0  JSR    $CDA0
b839: f6 47 03  LDB    $4703
b83c: ed 0a     STD    $A,X
b83e: 39        RTS
b83f: ec 56     LDD    -$A,U
b841: e3 06     ADDD   $6,X
b843: ed 06     STD    $6,X
b845: ec 5e     LDD    -$2,U
b847: e3 08     ADDD   $8,X
b849: ed 08     STD    $8,X
b84b: ec 46     LDD    $6,U
b84d: e3 0a     ADDD   $A,X
b84f: ed 0a     STD    $A,X
b851: 39        RTS
b852: cc 00 01  LDD    #$0001
b855: dd 01     STD    <$01
b857: cc 02 03  LDD    #$0203
b85a: dd 03     STD    <$03
b85c: 20 0a     BRA    $00FC
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
b945: 25 f5     BCS    $01D0
b947: 39        RTS
b948: d6 a2     LDB    <$A2
b94a: 5c        INCB
b94b: c1 08     CMPB   #$08
b94d: 25 02     BCS    $01E5
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
b96b: fd ee 84  STD    >$0000
