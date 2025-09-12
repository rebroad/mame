77d4: bd cc f0     JSR    $CCF0
77d7: ec 3c        LDD    -$4,Y
77d9: dd 05        STD    <$05
77db: ec 3e        LDD    -$2,Y
77dd: dd 03        STD    <$03
77df: dc 56        LDD    <$56
77e1: dd 01        STD    <$01
77e3: ce bd 68     LDU    #$BD68
77e6: bd 78 63     JSR    $7863
77e9: ce bd a6     LDU    #$BDA6
77ec: bd 78 5b     JSR    $785B
77ef: ce bd b2     LDU    #$BDB2
77f2: bd 78 5b     JSR    $785B
77f5: ce bd da     LDU    #$BDDA
77f8: bd 78 5b     JSR    $785B
77fb: ce be 06     LDU    #$BE06
77fe: bd 78 5b     JSR    $785B
7801: dc 56        LDD    <$56
7803: 80 03        SUBA   #$03
7805: 10 83 70 00  CMPD   #$7000
7809: 24 03        BCC    $003A
780b: cc 70 00     LDD    #$7000
780e: dd 01        STD    <$01
7810: 81 70        CMPA   #$70
7812: 26 05        BNE    $0045
7814: cc 66 60     LDD    #$6660
7817: 20 03        BRA    $0048
7819: cc 66 30     LDD    #$6630
781c: ed a1        STD    ,Y++
781e: b6 4b 14     LDA    $4B14
7821: 85 01        BITA   #$01
7823: 26 05        BNE    $0056
7825: ce b7 28     LDU    #$B728
7828: 20 0f        BRA    $0065
782a: ce b7 3c     LDU    #$B73C
782d: bd 78 5b     JSR    $785B
7830: ce b7 49     LDU    #$B749
7833: bd 78 5b     JSR    $785B
7836: ce b7 54     LDU    #$B754
7839: bd 78 5b     JSR    $785B
783c: b6 4b 14     LDA    $4B14
783f: 85 01        BITA   #$01
7841: 26 05        BNE    $0074
7843: ce b7 5e     LDU    #$B75E
7846: 20 0f        BRA    $0083
7848: ce b7 70     LDU    #$B770
784b: bd 78 5b     JSR    $785B
784e: ce b7 7c     LDU    #$B77C
7851: bd 78 5b     JSR    $785B
7854: ce b7 88     LDU    #$B788
7857: bd 78 5b     JSR    $785B
785a: 39           RTS
785b: dc 05        LDD    <$05
785d: ed a1        STD    ,Y++
785f: dc 03        LDD    <$03
7861: ed a1        STD    ,Y++
7863: dc 01        LDD    <$01
7865: ed a1        STD    ,Y++
7867: ef a1        STU    ,Y++
7869: 39           RTS
786a: 8e 49 00     LDX    #$4900
786d: 9f 64        STX    <$64
786f: a6 03        LDA    $3,X
7871: 27 03        BEQ    $00A2
7873: bd 78 81     JSR    $7881
7876: 9e 64        LDX    <$64
7878: 30 88 19     LEAX   $19,X
787b: 8c 49 4b     CMPX   #$494B
787e: 25 ed        BCS    $0099
7880: 39           RTS
7881: 9e 64        LDX    <$64
7883: 4f           CLRA
7884: e6 02        LDB    $2,X
7886: cb 03        ADDB   #$03
7888: fd 47 01     STD    $4701
788b: 86 67        LDA    #$67
788d: bd cd ba     JSR    $CDBA
7890: b6 50 00     LDA    $5000
7893: 48           ASLA
7894: 29 73        BVS    $0135
7896: b6 50 02     LDA    $5002
7899: 48           ASLA
789a: 29 6d        BVS    $0135
789c: b6 50 04     LDA    $5004
789f: 48           ASLA
78a0: 29 67        BVS    $0135
78a2: fc 50 70     LDD    $5070
78a5: f3 50 72     ADDD   $5072
78a8: f3 50 74     ADDD   $5074
78ab: 1f 03        TFR    D,U
78ad: 11 83 09 00  CMPU   #$0900
78b1: 22 08        BHI    $00E7
78b3: ec 88 15     LDD    $15,X
78b6: 8a 20        ORA    #$20
78b8: ed 88 15     STD    $15,X
78bb: 11 83 01 00  CMPU   #$0100
78bf: 22 08        BHI    $00F5
78c1: ec 88 15     LDD    $15,X
78c4: 8a 04        ORA    #$04
78c6: ed 88 15     STD    $15,X
78c9: 11 83 00 a0  CMPU   #$00A0
78cd: 22 30        BHI    $012B
78cf: b6 4b 38     LDA    $4B38
78d2: 26 10        BNE    $0110
78d4: a6 02        LDA    $2,X
78d6: b7 4b 38     STA    $4B38
78d9: bd bd 08     JSR    $BD08
78dc: bd bd c6     JSR    $BDC6
78df: ff 4b 39     STU    $4B39
78e2: 20 19        BRA    $0129
78e4: a1 02        CMPA   $2,X
78e6: 26 15        BNE    $0129
78e8: 11 b3 4b 39  CMPU   $4B39
78ec: 2e 05        BGT    $011F
78ee: ff 4b 39     STU    $4B39
78f1: 20 0a        BRA    $0129
78f3: 25 08        BCS    $0129
78f5: 86 ff        LDA    #$FF
78f7: b7 4b 39     STA    $4B39
78fa: bd bd da     JSR    $BDDA
78fd: 20 0a        BRA    $0135
78ff: a6 02        LDA    $2,X
7901: b1 4b 38     CMPA   $4B38
7904: 26 03        BNE    $0135
7906: 7f 4b 38     CLR    $4B38
7909: fc 50 00     LDD    $5000
790c: 10 83 00 10  CMPD   #$0010
7910: 10 2f ff 6c  LBLE   $00AC
7914: 10 83 7f 00  CMPD   #$7F00
7918: 10 22 ff 64  LBHI   $00AC
791c: fd 47 04     STD    $4704
791f: fd 50 18     STD    $5018
7922: fc 50 02     LDD    $5002
7925: fd 50 1a     STD    $501A
7928: fc 50 72     LDD    $5072
792b: b3 50 70     SUBD   $5070
792e: 10 24 ff 4e  LBCC   $00AC
7932: fc 50 04     LDD    $5004
7935: fd 50 1c     STD    $501C
7938: fc 50 74     LDD    $5074
793b: b3 50 70     SUBD   $5070
793e: 10 24 ff 3e  LBCC   $00AC
7942: 9e 64        LDX    <$64
7944: ec 88 15     LDD    $15,X
7947: 8a 10        ORA    #$10
7949: ed 88 15     STD    $15,X
794c: b6 4b 3b     LDA    $4B3B
794f: 26 21        BNE    $019E
7951: a6 04        LDA    $4,X
7953: 81 04        CMPA   #$04
7955: 26 1b        BNE    $019E
7957: 7c 4b 3b     INC    $4B3B
795a: b6 4b 14     LDA    $4B14
795d: 44           LSRA
795e: 25 0f        BCS    $019B
7960: b6 47 03     LDA    $4703
7963: 2a 05        BPL    $0196
7965: bd bd 5d     JSR    $BD5D
7968: 20 03        BRA    $0199
796a: bd bd 2b     JSR    $BD2B
796d: 20 03        BRA    $019E
796f: bd bd 1c     JSR    $BD1C
7972: a6 02        LDA    $2,X
7974: bd ce 18     JSR    $CE18
7977: bd cc f0     JSR    $CCF0
797a: cc 00 50     LDD    #$0050
797d: fd 50 02     STD    $5002
7980: 86 86        LDA    #$86
7982: bd cd ba     JSR    $CDBA
7985: fc 50 02     LDD    $5002
7988: c3 00 0a     ADDD   #$000A
798b: dd 01        STD    <$01
798d: dc d6        LDD    <$D6
798f: 93 b3        SUBD   <$B3
7991: 2a 04        BPL    $01C3
7993: 43           COMA
7994: 50           NEGB
7995: 82 ff        SBCA   #$FF
7997: dd 05        STD    <$05
7999: dd 03        STD    <$03
799b: dc d8        LDD    <$D8
799d: 93 b5        SUBD   <$B5
799f: 2a 04        BPL    $01D1
79a1: 43           COMA
79a2: 50           NEGB
79a3: 82 ff        SBCA   #$FF
79a5: dd 07        STD    <$07
79a7: d3 03        ADDD   <$03
79a9: dd 03        STD    <$03
79ab: dc 05        LDD    <$05
79ad: 93 01        SUBD   <$01
79af: 2e 1e        BGT    $01FB
79b1: dc 07        LDD    <$07
79b3: 93 01        SUBD   <$01
79b5: 2e 18        BGT    $01FB
79b7: dc 01        LDD    <$01
79b9: 44           LSRA
79ba: 56           RORB
79bb: d3 01        ADDD   <$01
79bd: 93 03        SUBD   <$03
79bf: 2d 0e        BLT    $01FB
79c1: fc 50 18     LDD    $5018
79c4: 10 93 c4     CMPD   <$C4
79c7: 24 06        BCC    $01FB
79c9: dd c4        STD    <$C4
79cb: 9e 64        LDX    <$64
79cd: 9f c2        STX    <$C2
79cf: dc 01        LDD    <$01
79d1: d3 01        ADDD   <$01
79d3: d3 bd        ADDD   <$00
