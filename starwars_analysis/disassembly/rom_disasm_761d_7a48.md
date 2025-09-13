761d: cc b9 f2     LDD    #$B9F2
7620: ed a1        STD    ,Y++
7622: cc 62 80     LDD    #$6280
7625: ed a1        STD    ,Y++
7627: cc 01 e0     LDD    #$01E0
762a: ed a1        STD    ,Y++
762c: cc 1e 20     LDD    #$1E20
762f: ed a1        STD    ,Y++
7631: 86 06        LDA    #$06
7633: 97 ad        STA    <$AD
7635: 8e 48 5c     LDX    #$485C
7638: bd e7 64     JSR    $E764
763b: cc 80 40     LDD    #$8040
763e: ed a1        STD    ,Y++
7640: f6 4b 2c     LDB    $4B2C
7643: 27 29        BEQ    $766E
7645: c0 08        SUBB   #$08
7647: c1 20        CMPB   #$20
7649: 24 02        BCC    $764D
764b: c6 00        LDB    #$00
764d: f7 4b 2c     STB    $4B2C
7650: 54           LSRB
7651: 86 66        LDA    #$66
7653: ed a1        STD    ,Y++
7655: cc 01 b0     LDD    #$01B0
7658: ed a1        STD    ,Y++
765a: cc 1e 50     LDD    #$1E50
765d: ed a1        STD    ,Y++
765f: 86 05        LDA    #$05
7661: 97 ad        STA    <$AD
7663: 8e 4b 28     LDX    #$4B28
7666: bd e7 72     JSR    $E772
7669: cc 80 40     LDD    #$8040
766c: ed a1        STD    ,Y++
766e: cc 62 80     LDD    #$6280
7671: ed a1        STD    ,Y++
7673: cc 02 10     LDD    #$0210
7676: ed a1        STD    ,Y++
7678: cc 01 38     LDD    #$0138
767b: ed a1        STD    ,Y++
767d: 86 01        LDA    #$01
767f: 97 ad        STA    <$AD
7681: b6 4b 16     LDA    $4B16
7684: bd e7 90     JSR    $E790
7687: cc 80 40     LDD    #$8040
768a: ed a1        STD    ,Y++
768c: 39           RTS
768d: b6 4b 13     LDA    $4B13
7690: 2f 6a        BLE    $76FC
7692: b6 4b 1a     LDA    $4B1A
7695: 27 3c        BEQ    $76D3
7697: 96 43        LDA    <$43
7699: 84 30        ANDA   #$30
769b: 27 31        BEQ    $76CE
769d: c6 40        LDB    #$40
769f: bd e7 c7     JSR    $E7C7
76a2: cc 62 80     LDD    #$6280
76a5: ed a1        STD    ,Y++
76a7: cc 01 80     LDD    #$0180
76aa: ed a1        STD    ,Y++
76ac: cc 1e d0     LDD    #$1ED0
76af: ed a1        STD    ,Y++
76b1: 86 04        LDA    #$04
76b3: 97 ad        STA    <$AD
76b5: b6 4b 2e     LDA    $4B2E
76b8: bd e7 90     JSR    $E790
76bb: b6 4b 2f     LDA    $4B2F
76be: bd e7 90     JSR    $E790
76c1: b6 4b 30     LDA    $4B30
76c4: bd e7 90     JSR    $E790
76c7: cc 80 40     LDD    #$8040
76ca: ed a1        STD    ,Y++
76cc: 20 05        BRA    $76D3
76ce: c6 43        LDB    #$43
76d0: bd e7 c7     JSR    $E7C7
76d3: b6 4b 13     LDA    $4B13
76d6: 2f 24        BLE    $76FC
76d8: cc 00 41     LDD    #$0041
76db: bd e7 c7     JSR    $E7C7
76de: cc 62 80     LDD    #$6280
76e1: ed a1        STD    ,Y++
76e3: cc 01 98     LDD    #$0198
76e6: ed a1        STD    ,Y++
76e8: cc 01 68     LDD    #$0168
76eb: ed a1        STD    ,Y++
76ed: 86 01        LDA    #$01
76ef: 97 ad        STA    <$AD
76f1: b6 4b 1a     LDA    $4B1A
76f4: bd e7 90     JSR    $E790
76f7: cc 80 40     LDD    #$8040
76fa: ed a1        STD    ,Y++
76fc: b6 4b 35     LDA    $4B35
76ff: 27 05        BEQ    $7706
7701: c6 42        LDB    #$42
7703: bd e7 c7     JSR    $E7C7
7706: 39           RTS
7707: b6 4b 0f     LDA    $4B0F
770a: 81 20        CMPA   #$20
770c: 23 02        BLS    $7710
770e: 86 20        LDA    #$20
7710: c6 06        LDB    #$06
7712: 3d           MUL
7713: 50           NEGB
7714: cb c0        ADDB   #$C0
7716: 86 70        LDA    #$70
7718: ed a1        STD    ,Y++
771a: c6 04        LDB    #$04
771c: bd e7 c7     JSR    $E7C7
771f: 39           RTS
7720: fd 4a d7     STD    $4AD7
7723: cc 00 00     LDD    #$0000
7726: fd 4a d4     STD    $4AD4
7729: b7 4a d6     STA    $4AD6
772c: 78 4a d8     ASL    $4AD8
772f: 79 4a d7     ROL    $4AD7
7732: b6 4a d6     LDA    $4AD6
7735: b9 4a d6     ADCA   $4AD6
7738: 19           DAA
7739: b7 4a d6     STA    $4AD6
773c: b6 4a d5     LDA    $4AD5
773f: b9 4a d5     ADCA   $4AD5
7742: 19           DAA
7743: b7 4a d5     STA    $4AD5
7746: 79 4a d4     ROL    $4AD4
7749: 30 1f        LEAX   -$1,X
774b: 26 df        BNE    $772C
774d: 39           RTS
774e: b7 4a d7     STA    $4AD7
7751: 84 f0        ANDA   #$F0
7753: c6 a0        LDB    #$A0
7755: 3d           MUL
7756: f6 4a d7     LDB    $4AD7
7759: c4 0f        ANDB   #$0F
775b: f7 4a d7     STB    $4AD7
775e: bb 4a d7     ADDA   $4AD7
7761: b7 4a d7     STA    $4AD7
7764: 39           RTS
7765: fc 50 28     LDD    $5028
7768: 2f 39        BLE    $77A3
776a: fd 47 04     STD    $4704
776d: fc 50 2a     LDD    $502A
7770: fd 50 02     STD    $5002
7773: 4d           TSTA
7774: 2a 04        BPL    $777A
7776: 43           COMA
7777: 50           NEGB
7778: 82 ff        SBCA   #$FF
777a: b3 50 28     SUBD   $5028
777d: 2c 24        BGE    $77A3
777f: fc 50 2c     LDD    $502C
7782: fd 50 04     STD    $5004
7785: 4d           TSTA
7786: 2a 04        BPL    $778C
7788: 43           COMA
7789: 50           NEGB
778a: 82 ff        SBCA   #$FF
778c: b3 50 28     SUBD   $5028
778f: 2c 12        BGE    $77A3
7791: bd cc f0     JSR    $CCF0
7794: cc 73 00     LDD    #$7300
7797: ed a1        STD    ,Y++
7799: cc be 50     LDD    #$BE50
779c: ed a1        STD    ,Y++
779e: cc 72 00     LDD    #$7200
77a1: ed a1        STD    ,Y++
77a3: 39           RTS
77a4: fc 50 28     LDD    $5028
77a7: 2f 2a        BLE    $77D3
77a9: fd 47 04     STD    $4704
77ac: fc 50 2a     LDD    $502A
77af: fd 50 02     STD    $5002
77b2: 4d           TSTA
77b3: 2a 04        BPL    $77B9
77b5: 43           COMA
77b6: 50           NEGB
77b7: 82 ff        SBCA   #$FF
77b9: b3 50 28     SUBD   $5028
77bc: 2c 15        BGE    $77D3
77be: fc 50 2c     LDD    $502C
77c1: fd 50 04     STD    $5004
77c4: 4d           TSTA
77c5: 2a 04        BPL    $77CB
77c7: 43           COMA
77c8: 50           NEGB
77c9: 82 ff        SBCA   #$FF
77cb: b3 50 28     SUBD   $5028
77ce: 2c 03        BGE    $77D3
77d0: bd 77 d4     JSR    $77D4
77d3: 39           RTS
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
7809: 24 03        BCC    $780E
780b: cc 70 00     LDD    #$7000
780e: dd 01        STD    <$01
7810: 81 70        CMPA   #$70
7812: 26 05        BNE    $7819
7814: cc 66 60     LDD    #$6660
7817: 20 03        BRA    $781C
7819: cc 66 30     LDD    #$6630
781c: ed a1        STD    ,Y++
781e: b6 4b 14     LDA    $4B14
7821: 85 01        BITA   #$01
7823: 26 05        BNE    $782A
7825: ce b7 28     LDU    #$B728
7828: 20 0f        BRA    $7839
782a: ce b7 3c     LDU    #$B73C
782d: bd 78 5b     JSR    $785B
7830: ce b7 49     LDU    #$B749
7833: bd 78 5b     JSR    $785B
7836: ce b7 54     LDU    #$B754
7839: bd 78 5b     JSR    $785B
783c: b6 4b 14     LDA    $4B14
783f: 85 01        BITA   #$01
7841: 26 05        BNE    $7848
7843: ce b7 5e     LDU    #$B75E
7846: 20 0f        BRA    $7857
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
7871: 27 03        BEQ    $7876
7873: bd 78 81     JSR    $7881
7876: 9e 64        LDX    <$64
7878: 30 88 19     LEAX   $19,X
787b: 8c 49 4b     CMPX   #$494B
787e: 25 ed        BCS    $786D
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
7894: 29 73        BVS    $7909
7896: b6 50 02     LDA    $5002
7899: 48           ASLA
789a: 29 6d        BVS    $7909
789c: b6 50 04     LDA    $5004
789f: 48           ASLA
78a0: 29 67        BVS    $7909
78a2: fc 50 70     LDD    $5070
78a5: f3 50 72     ADDD   $5072
78a8: f3 50 74     ADDD   $5074
78ab: 1f 03        TFR    D,U
78ad: 11 83 09 00  CMPU   #$0900
78b1: 22 08        BHI    $78BB
78b3: ec 88 15     LDD    $15,X
78b6: 8a 20        ORA    #$20
78b8: ed 88 15     STD    $15,X
78bb: 11 83 01 00  CMPU   #$0100
78bf: 22 08        BHI    $78C9
78c1: ec 88 15     LDD    $15,X
78c4: 8a 04        ORA    #$04
78c6: ed 88 15     STD    $15,X
78c9: 11 83 00 a0  CMPU   #$00A0
78cd: 22 30        BHI    $78FF
78cf: b6 4b 38     LDA    $4B38
78d2: 26 10        BNE    $78E4
78d4: a6 02        LDA    $2,X
78d6: b7 4b 38     STA    $4B38
78d9: bd bd 08     JSR    $BD08
78dc: bd bd c6     JSR    $BDC6
78df: ff 4b 39     STU    $4B39
78e2: 20 19        BRA    $78FD
78e4: a1 02        CMPA   $2,X
78e6: 26 15        BNE    $78FD
78e8: 11 b3 4b 39  CMPU   $4B39
78ec: 2e 05        BGT    $78F3
78ee: ff 4b 39     STU    $4B39
78f1: 20 0a        BRA    $78FD
78f3: 25 08        BCS    $78FD
78f5: 86 ff        LDA    #$FF
78f7: b7 4b 39     STA    $4B39
78fa: bd bd da     JSR    $BDDA
78fd: 20 0a        BRA    $7909
78ff: a6 02        LDA    $2,X
7901: b1 4b 38     CMPA   $4B38
7904: 26 03        BNE    $7909
7906: 7f 4b 38     CLR    $4B38
7909: fc 50 00     LDD    $5000
790c: 10 83 00 10  CMPD   #$0010
7910: 10 2f ff 6c  LBLE   $7880
7914: 10 83 7f 00  CMPD   #$7F00
7918: 10 22 ff 64  LBHI   $7880
791c: fd 47 04     STD    $4704
791f: fd 50 18     STD    $5018
7922: fc 50 02     LDD    $5002
7925: fd 50 1a     STD    $501A
7928: fc 50 72     LDD    $5072
792b: b3 50 70     SUBD   $5070
792e: 10 24 ff 4e  LBCC   $7880
7932: fc 50 04     LDD    $5004
7935: fd 50 1c     STD    $501C
7938: fc 50 74     LDD    $5074
793b: b3 50 70     SUBD   $5070
793e: 10 24 ff 3e  LBCC   $7880
7942: 9e 64        LDX    <$64
7944: ec 88 15     LDD    $15,X
7947: 8a 10        ORA    #$10
7949: ed 88 15     STD    $15,X
794c: b6 4b 3b     LDA    $4B3B
794f: 26 21        BNE    $7972
7951: a6 04        LDA    $4,X
7953: 81 04        CMPA   #$04
7955: 26 1b        BNE    $7972
7957: 7c 4b 3b     INC    $4B3B
795a: b6 4b 14     LDA    $4B14
795d: 44           LSRA
795e: 25 0f        BCS    $796F
7960: b6 47 03     LDA    $4703
7963: 2a 05        BPL    $796A
7965: bd bd 5d     JSR    $BD5D
7968: 20 03        BRA    $796D
796a: bd bd 2b     JSR    $BD2B
796d: 20 03        BRA    $7972
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
7991: 2a 04        BPL    $7997
7993: 43           COMA
7994: 50           NEGB
7995: 82 ff        SBCA   #$FF
7997: dd 05        STD    <$05
7999: dd 03        STD    <$03
799b: dc d8        LDD    <$D8
799d: 93 b5        SUBD   <$B5
799f: 2a 04        BPL    $79A5
79a1: 43           COMA
79a2: 50           NEGB
79a3: 82 ff        SBCA   #$FF
79a5: dd 07        STD    <$07
79a7: d3 03        ADDD   <$03
79a9: dd 03        STD    <$03
79ab: dc 05        LDD    <$05
79ad: 93 01        SUBD   <$01
79af: 2e 1e        BGT    $79CF
79b1: dc 07        LDD    <$07
79b3: 93 01        SUBD   <$01
79b5: 2e 18        BGT    $79CF
79b7: dc 01        LDD    <$01
79b9: 44           LSRA
79ba: 56           RORB
79bb: d3 01        ADDD   <$01
79bd: 93 03        SUBD   <$03
79bf: 2d 0e        BLT    $79CF
79c1: fc 50 18     LDD    $5018
79c4: 10 93 c4     CMPD   <$C4
79c7: 24 06        BCC    $79CF
79c9: dd c4        STD    <$C4
79cb: 9e 64        LDX    <$64
79cd: 9f c2        STX    <$C2
79cf: dc 01        LDD    <$01
79d1: d3 01        ADDD   <$01
79d3: d3 01        ADDD   <$01
79d5: 93 03        SUBD   <$03
79d7: 25 10        BCS    $79E9
79d9: 9e 64        LDX    <$64
79db: a6 03        LDA    $3,X
79dd: 81 01        CMPA   #$01
79df: 26 08        BNE    $79E9
79e1: ec 88 15     LDD    $15,X
79e4: 8a 08        ORA    #$08
79e6: ed 88 15     STD    $15,X
79e9: 9e 64        LDX    <$64
79eb: e6 06        LDB    $6,X
79ed: ce 7a 08     LDU    #$7A08
79f0: 58           ASLB
79f1: ec c5        LDD    B,U
79f3: ed a1        STD    ,Y++
79f5: 86 40        LDA    #$40
79f7: bd cd ba     JSR    $CDBA
79fa: e6 04        LDB    $4,X
79fc: bd cd 14     JSR    $CD14
79ff: bd cd 2c     JSR    $CD2C
7a02: cc 80 40     LDD    #$8040
7a05: ed a1        STD    ,Y++
7a07: 39           RTS
7a08: 62 80        XNC    ,X+
7a0a: 67 30        ASR    -$10,Y
7a0c: 62 80        XNC    ,X+
7a0e: 67 30        ASR    -$10,Y
7a10: 62 80        XNC    ,X+
7a12: 67 40        ASR    $0,U
7a14: 62 80        XNC    ,X+
7a16: 67 40        ASR    $0,U
7a18: 62 80        XNC    ,X+
7a1a: 67 50        ASR    -$10,U
7a1c: 62 80        XNC    ,X+
7a1e: 67 50        ASR    -$10,U
7a20: 62 80        XNC    ,X+
7a22: 67 60        ASR    $0,S
7a24: 62 80        XNC    ,X+
7a26: 67 60        ASR    $0,S
7a28: 62 80        XNC    ,X+
7a2a: 67 70        ASR    -$10,S
7a2c: 62 80        XNC    ,X+
7a2e: 67 70        ASR    -$10,S
7a30: 62 80        XNC    ,X+
7a32: 67 80        ASR    ,X+
7a34: 62 80        XNC    ,X+
7a36: 67 80        ASR    ,X+
7a38: 62 80        XNC    ,X+
7a3a: 67 80        ASR    ,X+
7a3c: 62 80        XNC    ,X+
7a3e: 67 80        ASR    ,X+
7a40: 62 80        XNC    ,X+
7a42: 67 80        ASR    ,X+
7a44: 67 c0        ASR    ,U+
7a46: 67 c0        ASR    ,U+
7a48: 7e 7a48     JMP    $7a48
