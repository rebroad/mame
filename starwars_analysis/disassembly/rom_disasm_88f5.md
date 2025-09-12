88f5: cc 62 80     LDD    #$6280
88f8: ed a1        STD    ,Y++
88fa: 96 92        LDA    <$92
88fc: 27 52        BEQ    $005B
88fe: dc 93        LDD    <$93
8900: fd 50 78     STD    $5078
8903: b3 50 98     SUBD   $5098
8906: 83 70 00     SUBD   #$7000
8909: 2b 06        BMI    $001C
890b: 43           COMA
890c: 50           NEGB
890d: 82 ff        SBCA   #$FF
890f: 20 03        BRA    $001F
8911: cc 00 00     LDD    #$0000
8914: fd 50 7c     STD    $507C
8917: cc fc 00     LDD    #$FC00
891a: fd 50 7a     STD    $507A
891d: cc 00 0f     LDD    #$000F
8920: fd 47 01     STD    $4701
8923: 86 67        LDA    #$67
8925: bd cd ba     JSR    $CDBA
8928: fc 50 00     LDD    $5000
892b: fd 47 04     STD    $4704
892e: bd cc e4     JSR    $CCE4
8931: cc 04 00     LDD    #$0400
8934: fd 50 7a     STD    $507A
8937: cc 00 0f     LDD    #$000F
893a: fd 47 01     STD    $4701
893d: 86 67        LDA    #$67
893f: bd cd ba     JSR    $CDBA
8942: fc 50 00     LDD    $5000
8945: fd 47 04     STD    $4704
8948: bd cc fc     JSR    $CCFC
894b: cc 80 40     LDD    #$8040
894e: ed a1        STD    ,Y++
8950: 39           RTS
8951: bd 89 81     JSR    $8981
8954: 0c 4d        INC    <$4D
8956: 7e 89 d3     JMP    $89D3
8959: bd 89 93     JSR    $8993
895c: 0a 4d        DEC    <$4D
895e: 7e 89 d3     JMP    $89D3
8961: bd 89 93     JSR    $8993
8964: 0a 4e        DEC    <$4E
8966: 7e 89 c8     JMP    $89C8
8969: bd 89 81     JSR    $8981
896c: 0c 4e        INC    <$4E
896e: 7e 89 c8     JMP    $89C8
8971: bd 89 81     JSR    $8981
8974: 0a 4f        DEC    <$4F
8976: 7e 89 de     JMP    $89DE
8979: bd 89 93     JSR    $8993
897c: 0c 4f        INC    <$4F
897e: 7e 89 de     JMP    $89DE
8981: 86 14        LDA    #$14
8983: ce 89 a8     LDU    #$89A8
8986: 33 c6        LEAU   A,U
8988: ec c4        LDD    ,U
898a: fd 50 22     STD    $5022
898d: ec 42        LDD    $2,U
898f: fd 50 24     STD    $5024
8992: 39           RTS
8993: 86 14        LDA    #$14
8995: ce 89 a8     LDU    #$89A8
8998: 33 c6        LEAU   A,U
899a: cc 00 00     LDD    #$0000
899d: a3 c4        SUBD   ,U
899f: fd 50 22     STD    $5022
89a2: ec 42        LDD    $2,U
89a4: fd 50 24     STD    $5024
89a7: 39           RTS
89a8: 00 b5        NEG    <$B5
89aa: 3f           SWI
89ab: ff 01 00     STU    $0100
89ae: 3f           SWI
89af: fe 01 6a     LDU    $016A
89b2: 3f           SWI
89b3: fc 02 1f     LDD    $021F
89b6: 3f           SWI
89b7: f7 03 df     STB    $03DF
89ba: 3f           SWI
89bb: e2 04        SBCB   $4,X
89bd: ff 3f ce     STU    $3FCE
89c0: 05 90        LSR    <$90
89c2: 3f           SWI
89c3: c2 05        SBCB   #$05
89c5: 90 3f        SUBA   <$3F
89c7: c2 4f        SBCB   #$4F
89c9: e6 02        LDB    $2,X
89cb: fd 47 01     STD    $4701
89ce: 86 00        LDA    #$00
89d0: 7e cd ba     JMP    $CDBA
89d3: 4f           CLRA
89d4: e6 02        LDB    $2,X
89d6: fd 47 01     STD    $4701
89d9: 86 0e        LDA    #$0E
89db: 7e cd ba     JMP    $CDBA
89de: 4f           CLRA
89df: e6 02        LDB    $2,X
89e1: fd 47 01     STD    $4701
89e4: 86 1c        LDA    #$1C
89e6: 7e cd ba     JMP    $CDBA
89e9: ec 50        LDD    -$10,U
89eb: bd cd 9e     JSR    $CD9E
89ee: e3 56        ADDD   -$A,U
89f0: ed 56        STD    -$A,U
89f2: ec 58        LDD    -$8,U
89f4: bd cd 9e     JSR    $CD9E
89f7: e3 5e        ADDD   -$2,U
89f9: ed 5e        STD    -$2,U
89fb: ec c4        LDD    ,U
89fd: bd cd 9e     JSR    $CD9E
8a00: e3 46        ADDD   $6,U
8a02: ed 46        STD    $6,U
8a04: 39           RTS
8a05: ec 50        LDD    -$10,U
8a07: bd cd 9c     JSR    $CD9C
8a0a: e3 56        ADDD   -$A,U
8a0c: ed 56        STD    -$A,U
8a0e: ec 58        LDD    -$8,U
8a10: bd cd 9c     JSR    $CD9C
8a13: e3 5e        ADDD   -$2,U
8a15: ed 5e        STD    -$2,U
8a17: ec c4        LDD    ,U
8a19: bd cd 9c     JSR    $CD9C
8a1c: e3 46        ADDD   $6,U
8a1e: ed 46        STD    $6,U
8a20: 39           RTS
8a21: ec 54        LDD    -$C,U
8a23: bd cd 9c     JSR    $CD9C
8a26: e3 56        ADDD   -$A,U
8a28: ed 56        STD    -$A,U
8a2a: ec 5c        LDD    -$4,U
8a2c: bd cd 9c     JSR    $CD9C
8a2f: e3 5e        ADDD   -$2,U
8a31: ed 5e        STD    -$2,U
8a33: ec 44        LDD    $4,U
8a35: bd cd 9c     JSR    $CD9C
8a38: e3 46        ADDD   $6,U
8a3a: ed 46        STD    $6,U
8a3c: 39           RTS
8a3d: ec 54        LDD    -$C,U
8a3f: bd cd 9e     JSR    $CD9E
8a42: e3 56        ADDD   -$A,U
8a44: ed 56        STD    -$A,U
8a46: ec 5c        LDD    -$4,U
8a48: bd cd 9e     JSR    $CD9E
8a4b: e3 5e        ADDD   -$2,U
8a4d: ed 5e        STD    -$2,U
8a4f: ec 44        LDD    $4,U
8a51: bd cd 9e     JSR    $CD9E
8a54: e3 46        ADDD   $6,U
8a56: ed 46        STD    $6,U
8a58: 39           RTS
8a59: cc 00 00     LDD    #$0000
8a5c: a3 54        SUBD   -$C,U
8a5e: bd cd 9c     JSR    $CD9C
8a61: e3 56        ADDD   -$A,U
8a63: ed 56        STD    -$A,U
8a65: cc 00 00     LDD    #$0000
8a68: a3 5c        SUBD   -$4,U
8a6a: bd cd 9c     JSR    $CD9C
8a6d: e3 5e        ADDD   -$2,U
8a6f: ed 5e        STD    -$2,U
8a71: cc 00 00     LDD    #$0000
8a74: a3 44        SUBD   $4,U
8a76: bd cd 9c     JSR    $CD9C
8a79: e3 46        ADDD   $6,U
8a7b: ed 46        STD    $6,U
8a7d: 39           RTS
8a7e: cc 00 00     LDD    #$0000
8a81: a3 54        SUBD   -$C,U
8a83: bd cd 9e     JSR    $CD9E
8a86: e3 56        ADDD   -$A,U
8a88: ed 56        STD    -$A,U
8a8a: cc 00 00     LDD    #$0000
8a8d: a3 5c        SUBD   -$4,U
8a8f: bd cd 9e     JSR    $CD9E
8a92: e3 5e        ADDD   -$2,U
8a94: ed 5e        STD    -$2,U
8a96: cc 00 00     LDD    #$0000
8a99: a3 44        SUBD   $4,U
8a9b: bd cd 9e     JSR    $CD9E
8a9e: e3 46        ADDD   $6,U
8aa0: ed 46        STD    $6,U
8aa2: 39           RTS
8aa3: 54           LSRB
8aa4: cd           XHCF
8aa5: e5 2d        BITB   $D,Y
8aa7: 3f           SWI
8aa8: 14           XHCF
8aa9: 12           NOP
8aaa: cd           XHCF
8aab: 69 f6        ROL    [A,S]
8aad: ad 33        JSR    -$D,Y
8aaf: aa 28        ORA    $8,Y
8ab1: a6 0b        LDA    $B,X
8ab3: f7 58 d1     STB    $58D1
8ab6: ec 56        LDD    -$A,U
8ab8: e3 48        ADDD   $8,U
8aba: 29 02        BVS    $01C9
8abc: ed 48        STD    $8,U
8abe: ec 5e        LDD    -$2,U
8ac0: e3 4a        ADDD   $A,U
8ac2: 29 02        BVS    $01D1
8ac4: ed 4a        STD    $A,U
8ac6: ec 4c        LDD    $C,U
8ac8: e3 46        ADDD   $6,U
8aca: 29 02        BVS    $01D9
8acc: ed 4c        STD    $C,U
8ace: 39           RTS
8acf: 9e c2        LDX    <$C2
8ad1: a6 03        LDA    $3,X
8ad3: 81 01        CMPA   #$01
8ad5: 26 04        BNE    $01E6
8ad7: a6 06        LDA    $6,X
8ad9: 27 01        BEQ    $01E7
8adb: 39           RTS
8adc: bd ce 45     JSR    $CE45
8adf: a6 03        LDA    $3,X
8ae1: 81 01        CMPA   #$01
8ae3: 26 08        BNE    $01F8
8ae5: ec 88 15     LDD    $15,X
8ae8: ca 01        ORB    #$01
8aea: ed 88 15     STD    $15,X
8aed: 9e c2        LDX    <$C2
8aef: 6c 08        INC    $8,X
8af1: 6a 07        DEC    $7,X
8af3: 10 2f cc 62  LBLE   $0202
