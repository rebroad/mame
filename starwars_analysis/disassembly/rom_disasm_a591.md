a591: 96 60        LDA    <$60
a593: 2d 1d        BLT    $0021
a595: 9e 64        LDX    <$64
a597: ce 49 c2     LDU    #$49C2
a59a: e6 06        LDB    $6,X
a59c: 33 c5        LEAU   B,U
a59e: a6 c4        LDA    ,U
a5a0: 85 04        BITA   #$04
a5a2: 26 0e        BNE    $0021
a5a4: a6 04        LDA    $4,X
a5a6: 81 02        CMPA   #$02
a5a8: 10 27 00 5c  LBEQ   $0077
a5ac: 10 22 00 a5  LBHI   $00C4
a5b0: 20 01        BRA    $0022
a5b2: 39           RTS
a5b3: cc 40 00     LDD    #$4000
a5b6: b3 50 7c     SUBD   $507C
a5b9: 58           ASLB
a5ba: 49           ROLA
a5bb: fd 50 00     STD    $5000
a5be: cc 29 40     LDD    #$2940
a5c1: fd 50 04     STD    $5004
a5c4: cc 02 d0     LDD    #$02D0
a5c7: fd 50 02     STD    $5002
a5ca: 86 86        LDA    #$86
a5cc: bd cd ba     JSR    $CDBA
a5cf: fc 50 04     LDD    $5004
a5d2: b3 50 44     SUBD   $5044
a5d5: 2c 07        BGE    $004D
a5d7: a6 c4        LDA    ,U
a5d9: 8a 08        ORA    #$08
a5db: a7 c4        STA    ,U
a5dd: 39           RTS
a5de: b3 50 02     SUBD   $5002
a5e1: 2f 06        BLE    $0058
a5e3: a6 c4        LDA    ,U
a5e5: 85 08        BITA   #$08
a5e7: 27 1e        BEQ    $0076
a5e9: a6 c4        LDA    ,U
a5eb: 84 f7        ANDA   #$F7
a5ed: a7 c4        STA    ,U
a5ef: b6 47 03     LDA    $4703
a5f2: 2a 03        BPL    $0066
a5f4: bd a7 b6     JSR    $A7B6
a5f7: b6 47 03     LDA    $4703
a5fa: 2a 03        BPL    $006E
a5fc: bd a7 c8     JSR    $A7C8
a5ff: b6 47 03     LDA    $4703
a602: 2a 03        BPL    $0076
a604: bd a7 bf     JSR    $A7BF
a607: 39           RTS
a608: cc 40 00     LDD    #$4000
a60b: b3 50 7c     SUBD   $507C
a60e: 58           ASLB
a60f: 49           ROLA
a610: fd 50 00     STD    $5000
a613: cc 29 40     LDD    #$2940
a616: fd 50 04     STD    $5004
a619: cc 02 d0     LDD    #$02D0
a61c: fd 50 02     STD    $5002
a61f: 86 86        LDA    #$86
a621: bd cd ba     JSR    $CDBA
a624: fc 50 04     LDD    $5004
a627: b3 50 44     SUBD   $5044
a62a: 2c 07        BGE    $00A2
a62c: a6 c4        LDA    ,U
a62e: 8a 08        ORA    #$08
a630: a7 c4        STA    ,U
a632: 39           RTS
a633: b3 50 02     SUBD   $5002
a636: 2f 06        BLE    $00AD
a638: a6 c4        LDA    ,U
a63a: 85 08        BITA   #$08
a63c: 27 16        BEQ    $00C3
a63e: a6 c4        LDA    ,U
a640: 84 f7        ANDA   #$F7
a642: a7 c4        STA    ,U
a644: b6 47 03     LDA    $4703
a647: 2a 03        BPL    $00BB
a649: bd a7 c8     JSR    $A7C8
a64c: b6 47 03     LDA    $4703
a64f: 2a 03        BPL    $00C3
a651: bd a7 bf     JSR    $A7BF
a654: 39           RTS
a655: 86 40        LDA    #$40
a657: b0 50 7c     SUBA   $507C
a65a: b1 47 03     CMPA   $4703
a65d: 25 15        BCS    $00E3
a65f: b6 47 03     LDA    $4703
a662: 81 50        CMPA   #$50
a664: 24 03        BCC    $00D8
a666: 7e a7 28     JMP    $A728
a669: b6 47 03     LDA    $4703
a66c: 2a 03        BPL    $00E0
a66e: 7e a7 28     JMP    $A728
a671: 7e a7 28     JMP    $A728
a674: 39           RTS
a675: a8 6b        EORA   $B,S
a677: a8 75        EORA   -$B,S
a679: a8 a7        EORA   E,Y
a67b: a8 da        EORA   [F,U]
a67d: a8 e6        EORA   A,S
a67f: a8 f9 aa 00  EORA   [-$5600,S]
a683: a9 46        ADCA   $6,U
a685: a9 a3        ADCA   ,--Y
a687: aa 86        ORA    A,X
a689: aa b5        ORA    [B,Y]
a68b: df a8        STU    <$A8
a68d: c6 40        LDB    #$40
a68f: e7 45        STB    $5,U
a691: c6 01        LDB    #$01
a693: e7 43        STB    $3,U
a695: c6 01        LDB    #$01
a697: e7 44        STB    $4,U
a699: b6 4b 3c     LDA    $4B3C
a69c: 2f 0d        BLE    $011A
a69e: bc 4b 32     CMPX   $4B32
a6a1: 26 08        BNE    $011A
a6a3: 7a 4b 3c     DEC    $4B3C
a6a6: 26 03        BNE    $011A
a6a8: bd bd 4e     JSR    $BD4E
a6ab: ee c4        LDU    ,U
a6ad: ae 84        LDX    ,X
a6af: ec 08        LDD    $8,X
a6b1: b3 50 98     SUBD   $5098
a6b4: ed c4        STD    ,U
a6b6: ec 0a        LDD    $A,X
a6b8: b3 50 9a     SUBD   $509A
a6bb: ed 42        STD    $2,U
a6bd: ec 0c        LDD    $C,X
a6bf: b3 50 9c     SUBD   $509C
a6c2: ed 44        STD    $4,U
a6c4: bd be 02     JSR    $BE02
a6c7: 39           RTS
a6c8: 49           ROLA
a6c9: 69 49        ROL    $9,U
a6cb: 69 49        ROL    $9,U
a6cd: 63 49        COM    $9,U
a6cf: 63 49        COM    $9,U
a6d1: 5d           TSTB
a6d2: 49           ROLA
a6d3: 5d           TSTB
a6d4: 49           ROLA
a6d5: 57           ASRB
a6d6: 49           ROLA
a6d7: 57           ASRB
a6d8: 49           ROLA
a6d9: 51           NEGB
a6da: 49           ROLA
a6db: 51           NEGB
a6dc: 49           ROLA
a6dd: 4b           XDECA
a6de: 49           ROLA
a6df: 4b           XDECA
a6e0: f6 4b 19     LDB    $4B19
a6e3: c1 0c        CMPB   #$0C
a6e5: 25 05        BCS    $015B
a6e7: 8e a6 de     LDX    #$A6DE
a6ea: 20 06        BRA    $0161
a6ec: 58           ASLB
a6ed: 8e a6 c8     LDX    #$A6C8
a6f0: ae 85        LDX    B,X
a6f2: 20 14        BRA    $0177
a6f4: f6 4b 19     LDB    $4B19
a6f7: c1 07        CMPB   #$07
a6f9: 23 02        BLS    $016C
a6fb: c6 07        LDB    #$07
a6fd: 58           ASLB
a6fe: 8e a7 18     LDX    #$A718
a701: ae 85        LDX    B,X
a703: 20 03        BRA    $0177
a705: 8e 49 4b     LDX    #$494B
a708: 9f a8        STX    <$A8
a70a: a6 03        LDA    $3,X
a70c: 27 09        BEQ    $0186
a70e: 30 06        LEAX   $6,X
a710: 8c 49 6f     CMPX   #$496F
a713: 25 f3        BCS    $0177
a715: 32 62        LEAS   $2,S
a717: 39           RTS
a718: 49           ROLA
a719: 69 49        ROL    $9,U
a71b: 69 49        ROL    $9,U
a71d: 63 49        COM    $9,U
a71f: 63 49        COM    $9,U
a721: 5d           TSTB
a722: 49           ROLA
a723: 5d           TSTB
a724: 49           ROLA
a725: 5d           TSTB
a726: 49           ROLA
a727: 57           ASRB
a728: bd a6 e0     JSR    $A6E0
a72b: 86 70        LDA    #$70
a72d: a7 05        STA    $5,X
a72f: 86 05        LDA    #$05
a731: a7 03        STA    $3,X
a733: de 64        LDU    <$64
a735: 9f 01        STX    <$01
a737: ec 42        LDD    $2,U
a739: b3 50 9a     SUBD   $509A
a73c: 2b 04        BMI    $01B1
a73e: 86 08        LDA    #$08
a740: 20 02        BRA    $01B3
a742: 86 07        LDA    #$07
a744: a7 04        STA    $4,X
a746: ae 84        LDX    ,X
a748: a6 c4        LDA    ,U
a74a: b0 50 98     SUBA   $5098
a74d: 84 80        ANDA   #$80
a74f: a8 c4        EORA   ,U
a751: e6 41        LDB    $1,U
a753: ed 84        STD    ,X
a755: ec 42        LDD    $2,U
a757: ed 02        STD    $2,X
a759: cc 02 00     LDD    #$0200
a75c: ed 04        STD    $4,X
a75e: ec 02        LDD    $2,X
a760: b3 50 9a     SUBD   $509A
a763: a7 06        STA    $6,X
a765: 2a 04        BPL    $01DA
a767: 43           COMA
a768: 50           NEGB
a769: 82 ff        SBCA   #$FF
a76b: fd 47 06     STD    $4706
a76e: ec 84        LDD    ,X
a770: b3 50 98     SUBD   $5098
a773: fd 47 04     STD    $4704
a776: cc 02 00     LDD    #$0200
a779: fd 47 06     STD    $4706
a77c: b6 47 00     LDA    $4700
a77f: 48           ASLA
a780: 48           ASLA
a781: 24 01        BCC    $01F3
a783: 4f           CLRA
a784: a7 07        STA    $7,X
a786: 96 7d        LDA    <$7D
a788: a8 06        EORA   $6,X
a78a: 2a 04        BPL    $01FF
a78c: 6f 06        CLR    $6,X
a78e: 20 22        BRA    $0221
a790: 96 96        LDA    <$00
