a68b: df a8     STU    <$A8
a68d: c6 40     LDB    #$40
a68f: e7 45     STB    $5,U
a691: c6 01     LDB    #$01
a693: e7 43     STB    $3,U
a695: c6 01     LDB    #$01
a697: e7 44     STB    $4,U
a699: b6 4b 3c  LDA    $4B3C
a69c: 2f 0d     BLE    $A6AB
a69e: bc 4b 32  CMPX   $4B32
a6a1: 26 08     BNE    $A6AB
a6a3: 7a 4b 3c  DEC    $4B3C
a6a6: 26 03     BNE    $A6AB
a6a8: bd bd 4e  JSR    $BD4E
a6ab: ee c4     LDU    ,U
a6ad: ae 84     LDX    ,X
a6af: ec 08     LDD    $8,X
a6b1: b3 50 98  SUBD   $5098
a6b4: ed c4     STD    ,U
a6b6: ec 0a     LDD    $A,X
a6b8: b3 50 9a  SUBD   $509A
a6bb: ed 42     STD    $2,U
a6bd: ec 0c     LDD    $C,X
a6bf: b3 50 9c  SUBD   $509C
a6c2: ed 44     STD    $4,U
a6c4: bd be 02  JSR    $BE02
a6c7: 39        RTS
a6c8: 49        ROLA
a6c9: 69 49     ROL    $9,U
a6cb: 69 49     ROL    $9,U
a6cd: 63 49     COM    $9,U
a6cf: 63 49     COM    $9,U
a6d1: 5d        TSTB
a6d2: 49        ROLA
a6d3: 5d        TSTB
a6d4: 49        ROLA
a6d5: 57        ASRB
a6d6: 49        ROLA
a6d7: 57        ASRB
a6d8: 49        ROLA
a6d9: 51        NEGB
a6da: 49        ROLA
a6db: 51        NEGB
a6dc: 49        ROLA
a6dd: 4b        XDECA
a6de: 49        ROLA
a6df: 4b        XDECA
a6e0: f6 4b 19  LDB    $4B19
a6e3: c1 0c     CMPB   #$0C
a6e5: 25 05     BCS    $A6EC
a6e7: 8e a6 de  LDX    #$A6DE
a6ea: 20 06     BRA    $A6F2
a6ec: 58        ASLB
a6ed: 8e a6 c8  LDX    #$A6C8
a6f0: ae 85     LDX    B,X
a6f2: 20 14     BRA    $A708
a6f4: f6 4b 19  LDB    $4B19
a6f7: c1 07     CMPB   #$07
a6f9: 23 02     BLS    $A6FD
a6fb: c6 07     LDB    #$07
a6fd: 58        ASLB
a6fe: 8e a7 18  LDX    #$A718
a701: ae 85     LDX    B,X
a703: 20 03     BRA    $A708
a705: 8e 49 4b  LDX    #$494B
a708: 9f a8     STX    <$A8
a70a: a6 03     LDA    $3,X
a70c: 27 09     BEQ    $A717
a70e: 30 06     LEAX   $6,X
a710: 8c 49 6f  CMPX   #$496F
a713: 25 f3     BCS    $A708
a715: 32 62     LEAS   $2,S
a717: 39        RTS
a718: 49        ROLA
a719: 69 49     ROL    $9,U
a71b: 69 49     ROL    $9,U
a71d: 63 49     COM    $9,U
a71f: 63 49     COM    $9,U
a721: 5d        TSTB
a722: 49        ROLA
a723: 5d        TSTB
a724: 49        ROLA
a725: 5d        TSTB
a726: 49        ROLA
a727: 57        ASRB
a728: bd a6 e0  JSR    $A6E0
a72b: 86 70     LDA    #$70
a72d: a7 05     STA    $5,X
a72f: 86 05     LDA    #$05
a731: a7 03     STA    $3,X
a733: de 64     LDU    <$64
a735: 9f 01     STX    <$01
a737: ec 42     LDD    $2,U
a739: b3 50 9a  SUBD   $509A
a73c: 2b 04     BMI    $A742
a73e: 86 08     LDA    #$08
a740: 20 02     BRA    $A744
a742: 86 07     LDA    #$07
a744: a7 04     STA    $4,X
a746: ae 84     LDX    ,X
a748: a6 c4     LDA    ,U
a74a: b0 50 98  SUBA   $5098
a74d: 84 80     ANDA   #$80
a74f: a8 c4     EORA   ,U
a751: e6 41     LDB    $1,U
a753: ed 84     STD    ,X
a755: ec 42     LDD    $2,U
a757: ed 02     STD    $2,X
a759: cc 02 00  LDD    #$0200
a75c: ed 04     STD    $4,X
a75e: ec 02     LDD    $2,X
a760: b3 50 9a  SUBD   $509A
a763: a7 06     STA    $6,X
a765: 2a 04     BPL    $A76B
a767: 43        COMA
a768: 50        NEGB
a769: 82 ff     SBCA   #$FF
a76b: fd 47 06  STD    $4706
a76e: ec 84     LDD    ,X
a770: b3 50 98  SUBD   $5098
a773: fd 47 04  STD    $4704
a776: cc 02 00  LDD    #$0200
a779: fd 47 06  STD    $4706
a77c: b6 47 00  LDA    $4700
a77f: 48        ASLA
a780: 48        ASLA
a781: 24 01     BCC    $A784
a783: 4f        CLRA
a784: a7 07     STA    $7,X
a786: 96 7d     LDA    <$7D
a788: a8 06     EORA   $6,X
a78a: 2a 04     BPL    $A790
a78c: 6f 06     CLR    $6,X
a78e: 20 22     BRA    $A7B2
a790: 96 7d     LDA    <$7D
a792: 2a 01     BPL    $A795
a794: 40        NEGA
a795: 48        ASLA
a796: a1 07     CMPA   $7,X
a798: 22 04     BHI    $A79E
a79a: 6f 06     CLR    $6,X
a79c: 20 14     BRA    $A7B2
a79e: 86 ff     LDA    #$FF
a7a0: a7 06     STA    $6,X
a7a2: 9e 01     LDX    <$01
a7a4: a6 04     LDA    $4,X
a7a6: 81 08     CMPA   #$08
a7a8: 26 04     BNE    $A7AE
a7aa: 86 07     LDA    #$07
a7ac: 20 02     BRA    $A7B0
a7ae: 86 08     LDA    #$08
a7b0: a7 04     STA    $4,X
a7b2: bd be 11  JSR    $BE11
a7b5: 39        RTS
a7b6: bd a7 05  JSR    $A705
a7b9: 86 03     LDA    #$03
a7bb: a7 04     STA    $4,X
a7bd: 20 12     BRA    $A7D1
a7bf: bd a7 05  JSR    $A705
a7c2: 86 04     LDA    #$04
a7c4: a7 04     STA    $4,X
a7c6: 20 09     BRA    $A7D1
a7c8: bd a7 05  JSR    $A705
a7cb: 86 05     LDA    #$05
a7cd: a7 04     STA    $4,X
a7cf: 20 00     BRA    $A7D1
a7d1: 86 70     LDA    #$70
a7d3: a7 05     STA    $5,X
a7d5: 86 05     LDA    #$05
a7d7: a7 03     STA    $3,X
a7d9: de 64     LDU    <$64
a7db: ae 84     LDX    ,X
a7dd: a6 c4     LDA    ,U
a7df: b0 50 98  SUBA   $5098
a7e2: 84 80     ANDA   #$80
a7e4: a8 c4     EORA   ,U
a7e6: e6 41     LDB    $1,U
a7e8: ed 84     STD    ,X
a7ea: ec 42     LDD    $2,U
a7ec: ed 02     STD    $2,X
a7ee: fc 50 44  LDD    $5044
a7f1: ed 04     STD    $4,X
a7f3: bd be 11  JSR    $BE11
a7f6: 39        RTS
a7f7: 96 95     LDA    <$95
a7f9: 27 05     BEQ    $A800
a7fb: bd a7 05  JSR    $A705
a7fe: 20 03     BRA    $A803
a800: bd a6 f4  JSR    $A6F4
a803: 86 09     LDA    #$09
a805: a7 04     STA    $4,X
a807: ee 84     LDU    ,X
a809: 20 14     BRA    $A81F
a80b: 96 95     LDA    <$95
a80d: 27 05     BEQ    $A814
a80f: bd a7 05  JSR    $A705
a812: 20 03     BRA    $A817
a814: bd a6 f4  JSR    $A6F4
a817: 86 0a     LDA    #$0A
a819: a7 04     STA    $4,X
a81b: ee 84     LDU    ,X
a81d: 20 00     BRA    $A81F
a81f: fc 50 78  LDD    $5078
a822: ed c4     STD    ,U
a824: fc 50 7a  LDD    $507A
a827: ed 42     STD    $2,U
a829: fc 50 7c  LDD    $507C
a82c: ed 44     STD    $4,U
a82e: 86 40     LDA    #$40
a830: a7 05     STA    $5,X
a832: 86 05     LDA    #$05
a834: a7 03     STA    $3,X
a836: b6 47 03  LDA    $4703
a839: 44        LSRA
a83a: f6 50 7c  LDB    $507C
a83d: c1 fc     CMPB   #$FC
a83f: 2d 02     BLT    $A843
a841: 86 00     LDA    #$00
a843: a7 46     STA    $6,U
a845: bd be 11  JSR    $BE11
a848: 39        RTS
a849: 8e 49 4b  LDX    #$494B
a84c: 9f a8     STX    <$A8
a84e: a6 03     LDA    $3,X
a850: 27 0f     BEQ    $A861
a852: e6 04     LDB    $4,X
a854: 58        ASLB
a855: c1 16     CMPB   #$16
a857: 24 07     BCC    $A860
a859: ce a6 75  LDU    #$A675
a85c: ad d5     JSR    [B,U]
a85e: 20 01     BRA    $A861
a860: 3f        SWI
a861: 9e a8     LDX    <$A8
a863: 30 06     LEAX   $6,X
a865: 8c 49 6f  CMPX   #$496F
a868: 25 e2     BCS    $A84C
a86a: 39        RTS
a86b: 6a 05     DEC    $5,X
a86d: 2e 05     BGT    $A874
a86f: 5f        CLRB
a870: e7 03     STB    $3,X
a872: e7 05     STB    $5,X
a874: 39        RTS
a875: 6a 05     DEC    $5,X
a877: 2e 07     BGT    $A880
a879: 5f        CLRB
a87a: e7 03     STB    $3,X
a87c: e7 05     STB    $5,X
a87e: 20 26     BRA    $A8A6
a880: ee 84     LDU    ,X
a882: cc 00 00  LDD    #$0000
a885: a3 c4     SUBD   ,U
a887: bd cd a2  JSR    $CDA2
a88a: e3 00     ADDD   $0,X
