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
