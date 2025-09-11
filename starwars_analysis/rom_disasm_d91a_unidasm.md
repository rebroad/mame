6000: ff 64 fd     STU    $64FD
6003: 47           ASRA
6004: 04 fd        LSR    <$FD
6006: 50           NEGB
6007: 18           X18
6008: fc 50 02     LDD    $5002
600b: fd 50 1a     STD    $501A
600e: fc 50 72     LDD    $5072
6011: b3 50 70     SUBD   $5070
6014: 10 24 ff 4e  LBCC   $5F66
6018: fc 50 04     LDD    $5004
601b: fd 50 1c     STD    $501C
601e: fc 50 74     LDD    $5074
6021: b3 50 70     SUBD   $5070
6024: 10 24 ff 3e  LBCC   $5F66
6028: 9e 64        LDX    <$64
602a: ec 88 15     LDD    $15,X
602d: 8a 10        ORA    #$10
602f: ed 88 15     STD    $15,X
6032: b6 4b 3b     LDA    $4B3B
6035: 26 21        BNE    $6058
6037: a6 04        LDA    $4,X
6039: 81 04        CMPA   #$04
603b: 26 1b        BNE    $6058
603d: 7c 4b 3b     INC    $4B3B
6040: b6 4b 14     LDA    $4B14
6043: 44           LSRA
6044: 25 0f        BCS    $6055
6046: b6 47 03     LDA    $4703
6049: 2a 05        BPL    $6050
604b: bd bd 5d     JSR    $BD5D
604e: 20 03        BRA    $6053
6050: bd bd 2b     JSR    $BD2B
6053: 20 03        BRA    $6058
6055: bd bd 1c     JSR    $BD1C
6058: a6 02        LDA    $2,X
605a: bd ce 18     JSR    $CE18
605d: bd cc f0     JSR    $CCF0
6060: cc 00 50     LDD    #$0050
6063: fd 50 02     STD    $5002
6066: 86 86        LDA    #$86
6068: bd cd ba     JSR    $CDBA
606b: fc 50 02     LDD    $5002
606e: c3 00 0a     ADDD   #$000A
6071: dd 01        STD    <$01
6073: dc d6        LDD    <$D6
6075: 93 b3        SUBD   <$B3
6077: 2a 04        BPL    $607D
6079: 43           COMA
607a: 50           NEGB
607b: 82 ff        SBCA   #$FF
607d: dd 05        STD    <$05
607f: dd 03        STD    <$03
6081: dc d8        LDD    <$D8
6083: 93 b5        SUBD   <$B5
6085: 2a 04        BPL    $608B
6087: 43           COMA
6088: 50           NEGB
6089: 82 ff        SBCA   #$FF
608b: dd 07        STD    <$07
608d: d3 03        ADDD   <$03
608f: dd 03        STD    <$03
6091: dc 05        LDD    <$05
6093: 93 01        SUBD   <$01
6095: 2e 1e        BGT    $60B5
6097: dc 07        LDD    <$07
6099: 93 01        SUBD   <$01
609b: 2e 18        BGT    $60B5
609d: dc 01        LDD    <$01
609f: 44           LSRA
60a0: 56           RORB
60a1: d3 01        ADDD   <$01
60a3: 93 03        SUBD   <$03
60a5: 2d 0e        BLT    $60B5
60a7: fc 50 18     LDD    $5018
60aa: 10 93 c4     CMPD   <$C4
60ad: 24 06        BCC    $60B5
60af: dd c4        STD    <$C4
60b1: 9e 64        LDX    <$64
60b3: 9f c2        STX    <$C2
60b5: dc 01        LDD    <$01
60b7: d3 01        ADDD   <$01
60b9: d3 01        ADDD   <$01
60bb: 93 03        SUBD   <$03
60bd: 25 10        BCS    $60CF
60bf: 9e 64        LDX    <$64
60c1: a6 03        LDA    $3,X
60c3: 81 01        CMPA   #$01
60c5: 26 08        BNE    $60CF
60c7: ec 88 15     LDD    $15,X
60ca: 8a 08        ORA    #$08
60cc: ed 88 15     STD    $15,X
60cf: 9e 64        LDX    <$64
60d1: e6 06        LDB    $6,X
60d3: ce 7a 08     LDU    #$7A08
60d6: 58           ASLB
60d7: ec c5        LDD    B,U
60d9: ed a1        STD    ,Y++
60db: 86 40        LDA    #$40
60dd: bd cd ba     JSR    $CDBA
60e0: e6 04        LDB    $4,X
60e2: bd cd 14     JSR    $CD14
60e5: bd cd 2c     JSR    $CD2C
60e8: cc 80 40     LDD    #$8040
60eb: ed a1        STD    ,Y++
60ed: 39           RTS
60ee: 62 80        XNC    ,X+
60f0: 67 30        ASR    -$10,Y
60f2: 62 80        XNC    ,X+
60f4: 67 30        ASR    -$10,Y
60f6: 62 80        XNC    ,X+
60f8: 67 40        ASR    $0,U
60fa: 62 80        XNC    ,X+
60fc: 67 40        ASR    $0,U
60fe: 62 80        XNC    ,X+
6100: 67 50        ASR    -$10,U
6102: 62 80        XNC    ,X+
6104: 67 50        ASR    -$10,U
6106: 62 80        XNC    ,X+
6108: 67 60        ASR    $0,S
610a: 62 80        XNC    ,X+
610c: 67 60        ASR    $0,S
610e: 62 80        XNC    ,X+
6110: 67 70        ASR    -$10,S
6112: 62 80        XNC    ,X+
6114: 67 70        ASR    -$10,S
6116: 62 80        XNC    ,X+
6118: 67 80        ASR    ,X+
611a: 62 80        XNC    ,X+
611c: 67 80        ASR    ,X+
611e: 62 80        XNC    ,X+
6120: 67 80        ASR    ,X+
6122: 62 80        XNC    ,X+
6124: 67 80        ASR    ,X+
6126: 62 80        XNC    ,X+
6128: 67 80        ASR    ,X+
612a: 67 c0        ASR    ,U+
612c: 67 c0        ASR    ,U+
612e: ce 50 90     LDU    #$5090
6131: bd cd c3     JSR    $CDC3
6134: cc 00 00     LDD    #$0000
6137: fd 50 98     STD    $5098
613a: fd 50 9a     STD    $509A
613d: fd 50 9c     STD    $509C
6140: cc 00 00     LDD    #$0000
6143: 97 62        STA    <$62
6145: 97 63        STA    <$63
6147: 97 31        STA    <$31
6149: 97 bc        STA    <$BC
614b: 97 b7        STA    <$B7
614d: 97 bd        STA    <$BD
614f: dd a3        STD    <$A3
6151: b7 48 78     STA    $4878
6154: b7 48 6e     STA    $486E
6157: b7 48 77     STA    $4877
615a: fd 48 74     STD    $4874
615d: fd 48 6b     STD    $486B
6160: 39           RTS
6161: f7 9c 02     STB    $9C02
6164: bb 5a 30     ADDA   $5A30
6167: 5f           CLRB
6168: ee 0d        LDU    $D,X
616a: a8 ff ff ff  EORA   [$FFFF]
616e: ff ff ff     STU    $FFFF
6171: ff ff ff     STU    $FFFF
6174: ff ff ff     STU    $FFFF
6177: ff ff ff     STU    $FFFF
617a: ff ff ff     STU    $FFFF
617d: ff ff ff     STU    $FFFF
6180: ff ff ff     STU    $FFFF
6183: ff ff ff     STU    $FFFF
6186: ff ff ff     STU    $FFFF
6189: ff ff ff     STU    $FFFF
618c: ff ff ff     STU    $FFFF
618f: ff ff ff     STU    $FFFF
6192: ff ff ff     STU    $FFFF
6195: ff ff ff     STU    $FFFF
6198: ff ff ff     STU    $FFFF
619b: ff ff ff     STU    $FFFF
619e: ff ff ff     STU    $FFFF
61a1: ff ff ff     STU    $FFFF
61a4: ff ff ff     STU    $FFFF
61a7: ff ff ff     STU    $FFFF
61aa: ff ff ff     STU    $FFFF
61ad: ff ff ff     STU    $FFFF
61b0: ff ff ff     STU    $FFFF
61b3: ff ff ff     STU    $FFFF
61b6: ff ff ff     STU    $FFFF
61b9: ff ff ff     STU    $FFFF
61bc: ff ff ff     STU    $FFFF
61bf: ff ff ff     STU    $FFFF
61c2: ff ff ff     STU    $FFFF
61c5: ff ff ff     STU    $FFFF
61c8: ff ff ff     STU    $FFFF
61cb: ff ff ff     STU    $FFFF
61ce: ff ff ff     STU    $FFFF
61d1: ff ff ff     STU    $FFFF
61d4: ff ff ff     STU    $FFFF
61d7: ff ff ff     STU    $FFFF
61da: ff ff ff     STU    $FFFF
61dd: ff 43 4f     STU    $434F
61e0: 50           NEGB
61e1: 59           ROLB
61e2: 52           XNCB
61e3: 49           ROLA
61e4: 47           ASRA
61e5: 48           ASLA
61e6: 54           LSRB
61e7: 20 31        BRA    $621A
61e9: 39           RTS
61ea: 38 33        XANDCC #$33
61ec: 20 41        BRA    $622F
61ee: 54           LSRB
61ef: 41           NEGA
61f0: 52           XNCB
61f1: 49           ROLA
61f2: b8 ad ba     EORA   $ADBA
61f5: b8 df ad     EORA   $DFAD
61f8: b6 a9 ba     LDA    $A9BA
61fb: ad be        JSR    [W,Y]
61fd: df bb        STU    <$BB
61ff: b6 bb df     LDA    $BBDF
6202: b6 ab 7e     LDA    $AB7E
6205: 08 82        ASL    <$82
6207: dc 82        LDD    <$82
6209: 86 82        LDA    #$82
620b: dc 7d        LDD    <$7D
620d: 42           XNCA
620e: 82 dc        SBCA   #$DC
6210: 81 e2        CMPA   #$E2
6212: 82 dc        SBCA   #$DC
6214: 81 c3        CMPA   #$C3
6216: 82 dc        SBCA   #$DC
6218: 82 67        SBCA   #$67
621a: 82 dc        SBCA   #$DC
621c: 82 01        SBCA   #$01
621e: 82 dc        SBCA   #$DC
6220: 81 e2        CMPA   #$E2
6222: 82 fa        SBCA   #$FA
6224: 7e 08 82     JMP    $0882
6227: dc 7d        LDD    <$7D
6229: 42           XNCA
622a: 82 c8        SBCA   #$C8
622c: 7d b1 82     TST    $B182
622f: c8 80        EORB   #$80
6231: c6 82        LDB    #$82
6233: dc 7f        LDD    <$7F
6235: 78 82 dc     ASL    $82DC
6238: 7f 97 82     CLR    $9782
623b: dc 81        LDD    <$81
623d: c3 82 d2     ADDD   #$82D2
6240: 7d b1 82     TST    $B182
6243: fa 7e 08     ORB    $7E08
6246: 82 dc        SBCA   #$DC
6248: 7c f8 82     INC    $F882
624b: c8 7d        EORB   #$7D
624d: ca 82        ORB    #$82
624f: dc 80        LDD    <$80
6251: 66 82        ROR    ,-X
6253: e6 80        LDB    ,X+
6255: 4d           TSTA
6256: 82 be        SBCA   #$BE
6258: 80 c6        SUBA   #$C6
625a: 82 c8        SBCA   #$C8
625c: 7e 3d 82     JMP    $3D82
625f: d2 82        SBCB   <$82
6261: 67 83        ASR    ,--X
6263: 25 7e        BCS    $62E3
6265: 08 82        ASL    <$82
6267: dc 7d        LDD    <$7D
6269: 5b           XDECB
626a: 82 c8        SBCA   #$C8
626c: 7e d8 82     JMP    $D882
626f: f0 7e 75     SUBB   $7E75
6272: 82 d2        SBCA   #$D2
6274: 81 35        CMPA   #$35
6276: 82 d2        SBCA   #$D2
6278: 82 26        SBCA   #$26
627a: 82 c8        SBCA   #$C8
627c: 7e d8 82     JMP    $D882
627f: f0 7e 75     SUBB   $7E75
6282: 83 25 7e     SUBD   #$257E
6285: 08 82        ASL    <$82
6287: dc 82        LDD    <$82
6289: 26 82        BNE    $620D
628b: c8 81        EORB   #$81
628d: 0a 82        DEC    <$82
628f: d2 80        SBCB   <$80
6291: 4d           TSTA
6292: 82 be        SBCA   #$BE
6294: 80 66        SUBA   #$66
6296: 82 e6        SBCA   #$E6
6298: 7e 3d 82     JMP    $3D82
629b: d2 7e        SBCB   <$7E
629d: 21 82        BRN    $6221
629f: d2 7c        SBCB   <$7C
62a1: d6 83        LDB    <$83
62a3: 25 7e        BCS    $6323
62a5: 08 82        ASL    <$82
62a7: dc 7d        LDD    <$7D
62a9: 5b           XDECB
62aa: 82 c8        SBCA   #$C8
62ac: 81 0a        CMPA   #$0A
62ae: 82 d2        SBCA   #$D2
62b0: 7f b9 82     CLR    $B982
62b3: c8 81        EORB   #$81
62b5: 35 82        PULS   A,PC
62b7: d2 7e        SBCB   <$7E
62b9: 75 82 d2     LSR    $82D2
62bc: 80 c6        SUBA   #$C6
62be: 82 c8        SBCA   #$C8
62c0: 7e d8 83     JMP    $D883
62c3: 25 7e        BCS    $6343
62c5: 08 82        ASL    <$82
62c7: dc 80        LDD    <$80
62c9: 25 82        BCS    $624D
62cb: f0 7d e3     SUBB   $7DE3
62ce: 82 e6        SBCA   #$E6
62d0: 7f 16 82     CLR    $1682
62d3: c8 7f        EORB   #$7F
62d5: b9 82 c8     ADCA   $82C8
62d8: 80 ee        SUBA   #$EE
62da: 82 be        SBCA   #$BE
62dc: 82 42        SBCA   #$42
62de: 82 c8        SBCA   #$C8
62e0: 7e 56 80     JMP    $5680
62e3: 7f 7e 08     CLR    $7E08
62e6: 82 dc        SBCA   #$DC
62e8: 7d 11 82     TST    $1182
62eb: d2 81        SBCB   <$81
62ed: a1 82        CMPA   ,-X
62ef: e6 7d        LDB    -$3,S
62f1: 80 82        SUBA   #$82
62f3: e6 80        LDB    ,X+
62f5: 03 82        COM    <$82
62f7: d2 7e        SBCB   <$7E
62f9: b9 82 d2     ADCA   $82D2
62fc: 7f 47 82     CLR    $4782
62ff: d2 7e        SBCB   <$7E
6301: f1 80 7f     CMPB   $807F
6304: 7e 08 82     JMP    $0882
6307: dc 7e        LDD    <$7E
6309: 9d 82        JSR    <$82
630b: f0 7f d2     SUBB   $7FD2
630e: 82 f0        SBCA   #$F0
6310: 80 9b        SUBA   #$9B
6312: 82 f0        SBCA   #$F0
6314: 81 76        CMPA   #$76
6316: 82 e6        SBCA   #$E6
6318: 82 a5        SBCA   #$A5
631a: 82 f0        SBCA   #$F0
631c: 81 a1        CMPA   #$A1
631e: 82 f0        SBCA   #$F0
6320: 82 01        SBCA   #$01
6322: 80 7f        SUBA   #$7F
6324: 7e 08 82     JMP    $0882
6327: dc 7d        LDD    <$7D
6329: 5b           XDECB
632a: 82 c8        SBCA   #$C8
632c: 7e d8 82     JMP    $D882
632f: f0 7f d2     SUBB   $7FD2
6332: 82 f0        SBCA   #$F0
6334: 82 a5        SBCA   #$A5
6336: 82 f0        SBCA   #$F0
6338: 7d 80 82     TST    $8082
633b: e6 81        LDB    ,X++
633d: a1 82        CMPA   ,-X
633f: f0 81 76     SUBB   $8176
6342: 80 7f        SUBA   #$7F
6344: 7e 08 82     JMP    $0882
6347: dc 7e        LDD    <$7E
6349: 9d 82        JSR    <$82
634b: f0 7f d2     SUBB   $7FD2
634e: 82 f0        SBCA   #$F0
6350: 81 54        CMPA   #$54
6352: 82 c8        SBCA   #$C8
6354: 7e b9 82     JMP    $B982
6357: d2 7f        SBCB   <$7F
6359: 47           ASRA
635a: 82 d2        SBCA   #$D2
635c: 7e f1 82     JMP    $F182
635f: be 7d 80     LDX    $7D80
6362: 80 7f        SUBA   #$7F
6364: 7e 08 82     JMP    $0882
6367: dc 7c        LDD    <$7C
6369: 9e 82        LDX    <$82
636b: d2 7c        SBCB   <$7C
636d: 9e 82        LDX    <$82
636f: f0 7c 9e     SUBB   $7C9E
6372: 82 d2        SBCA   #$D2
6374: 7c 9e 82     INC    $9E82
6377: f0 7c 9e     SUBB   $7C9E
637a: 82 d2        SBCA   #$D2
637c: 7c 9e 82     INC    $9E82
637f: f0 7c 9e     SUBB   $7C9E
6382: 80 7f        SUBA   #$7F
6384: 7d 11 7d     TST    $117D
6387: 80 7d        SUBA   #$7D
6389: e3 7e        ADDD   -$2,S
638b: 9d 7e        JSR    <$7E
638d: 75 7e b9     LSR    $7EB9
6390: 7e f1 7f     JMP    $F17F
6393: 47           ASRA
6394: 7f d2 80     CLR    $D280
6397: 03 80        COM    <$80
6399: 25 80        BCS    $631B
639b: 9b 80        ADDA   <$80
639d: ee 81        LDU    ,X++
639f: 54           LSRB
63a0: 81 76        CMPA   #$76
63a2: 81 a1        CMPA   #$A1
63a4: 82 a5        SBCA   #$A5
63a6: 7b 1e 7b     XDEC   $1E7B
63a9: 3e           XRES
63aa: 7b 5e 7b     XDEC   $5E7B
63ad: 7e 7b 9e     JMP    $7B9E
63b0: 7b be 7b     XDEC   $BE7B
63b3: de 7b        LDU    <$7B
63b5: fe 7c 1e     LDU    $7C1E
63b8: 7c 3e 7c     INC    $3E7C
63bb: 5e           XCLRB
63bc: 01 08        NEG    <$08
63be: 08 02        ASL    <$02
63c0: 00 03        NEG    <$03
63c2: 02 20        XNC    <$20
63c4: 20 01        BRA    $63C7
63c6: 03 30        COM    <$30
63c8: 01 02        NEG    <$02
63ca: 02 02        XNC    <$02
63cc: 80 8c        SUBA   #$8C
63ce: 02 38        XNC    <$38
63d0: 08 01        ASL    <$01
63d2: 00 00        NEG    <$00
63d4: 01 0e        NEG    <$0E
63d6: c2 01        SBCB   #$01
63d8: c0 00        SUBB   #$00
63da: 02 80        XNC    <$80
63dc: 80 05        SUBA   #$05
63de: 02 00        XNC    <$00
63e0: 00 02        NEG    <$02
63e2: 38 08        XANDCC #$08
63e4: 02 03        XNC    <$03
63e6: 03 02        COM    <$02
63e8: 80 b0        SUBA   #$B0
63ea: 02 0c        XNC    <$0C
63ec: 0c 02        INC    <$02
63ee: c2 c2        SBCB   #$C2
63f0: 02 00        XNC    <$00
63f2: 00 02        NEG    <$02
63f4: 08 08        ASL    <$08
63f6: 05 01        LSR    <$01
63f8: 00 00        NEG    <$00
63fa: 01 a0        NEG    <$A0
63fc: a0 01        SUBA   $1,X
63fe: 03 03        COM    <$03
