b6b9: bd b6 c7  JSR    $B6C7
b6bc: bd b6 d7  JSR    $B6D7
b6bf: 39        RTS
b6c0: bd b6 cc  JSR    $B6CC
b6c3: bd b6 d7  JSR    $B6D7
b6c6: 39        RTS
b6c7: cc 63 80  LDD    #$6380
b6ca: ed a1     STD    ,Y++
b6cc: cc a0 12  LDD    #$A012
b6cf: ed a1     STD    ,Y++
b6d1: fc 32 fe  LDD    $32FE
b6d4: ed a1     STD    ,Y++
b6d6: 39        RTS
b6d7: 96 7d     LDA    <$7D
b6d9: 2a 01     BPL    $B6DC
b6db: 40        NEGA
b6dc: c6 6e     LDB    #$6E
b6de: 3d        MUL
b6df: d6 7d     LDB    <$7D
b6e1: 2a 01     BPL    $B6E4
b6e3: 40        NEGA
b6e4: 1f 89     TFR    A,B
b6e6: 1d        SEX
b6e7: fd 4b 1c  STD    $4B1C
b6ea: 84 1f     ANDA   #$1F
b6ec: ed 22     STD    $2,Y
b6ee: ed 28     STD    $8,Y
b6f0: ed 2e     STD    $E,Y
b6f2: ed a8 14  STD    $14,Y
b6f5: ed a8 1a  STD    $1A,Y
b6f8: 96 7f     LDA    <$7F
b6fa: 2a 01     BPL    $B6FD
b6fc: 40        NEGA
b6fd: c6 50     LDB    #$50
b6ff: 3d        MUL
b700: d6 7f     LDB    <$7F
b702: 2a 01     BPL    $B705
b704: 40        NEGA
b705: 1f 89     TFR    A,B
b707: 1d        SEX
b708: fd 4b 1e  STD    $4B1E
b70b: 84 1f     ANDA   #$1F
b70d: ed a4     STD    ,Y
b70f: ed 26     STD    $6,Y
b711: ed 2c     STD    $C,Y
b713: ed a8 12  STD    $12,Y
b716: ed a8 18  STD    $18,Y
b719: cc ba ac  LDD    #$BAAC
b71c: ed 24     STD    $4,Y
b71e: cc ba 0d  LDD    #$BA0D
b721: ed 2a     STD    $A,Y
b723: cc bb 33  LDD    #$BB33
b726: ed a8 10  STD    $10,Y
b729: cc ba e6  LDD    #$BAE6
b72c: ed a8 16  STD    $16,Y
b72f: cc ba 5a  LDD    #$BA5A
b732: ed a8 1c  STD    $1C,Y
b735: 31 a8 1e  LEAY   $1E,Y
b738: 39        RTS
b739: 86 00     LDA    #$00
b73b: a7 03     STA    $3,X
b73d: bd 8e 1c  JSR    $8E1C
b740: 34 50     PSHS   U,X
b742: bd b7 6c  JSR    $B76C
b745: 35 50     PULS   X,U
b747: 39        RTS
b748: b9 c0 b9  ADCA   $C0B9
b74b: c0 b9     SUBB   #$B9
b74d: c0 b9     SUBB   #$B9
b74f: c0 b9     SUBB   #$B9
b751: c0 b9     SUBB   #$B9
b753: c0 b9     SUBB   #$B9
b755: f9 b9 f9  ADCB   $B9F9
b758: b9 f9 ba  ADCA   $F9BA
b75b: a0 ba     SUBA   [F,Y]
b75d: a4 ba     ANDA   [F,Y]
b75f: a8 ba     EORA   [F,Y]
b761: ac ba     CMPX   [F,Y]
b763: b0 ba b4  SUBA   $BAB4
b766: bb 1a bb  ADDA   $1ABB
b769: 1e bb     EXG    DP,DP
b76b: 16 ee 84  LBRA   $A5F2
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
b7f8: 28 04     BVC    $B7FE
b7fa: 46        RORA
b7fb: 56        RORB
b7fc: 20 1e     BRA    $B81C
b7fe: 68 09     ASL    $9,X
b800: 69 08     ROL    $8,X
b802: 28 08     BVC    $B80C
b804: 66 08     ROR    $8,X
b806: 66 09     ROR    $9,X
b808: 47        ASRA
b809: 56        RORB
b80a: 20 10     BRA    $B81C
b80c: 68 0b     ASL    $B,X
b80e: 69 0a     ROL    $A,X
b810: 28 e4     BVC    $B7F6
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
