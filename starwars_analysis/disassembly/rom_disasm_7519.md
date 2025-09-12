7519: bd 61 12  JSR    $6112
751c: 86 10     LDA    #$10
751e: bd ce 0c  JSR    $CE0C
7521: bd 71 60  JSR    $7160
7524: bd 76 1d  JSR    $761D
7527: bd 95 a7  JSR    $95A7
752a: bd b6 b9  JSR    $B6B9
752d: bd cd 80  JSR    $CD80
7530: c6 45     LDB    #$45
7532: bd e7 c7  JSR    $E7C7
7535: b6 4b 0e  LDA    $4B0E
7538: 81 02     CMPA   #$02
753a: 2e 1e     BGT    $0041
753c: c6 47     LDB    #$47
753e: bd e7 c7  JSR    $E7C7
7541: c6 48     LDB    #$48
7543: bd e7 c7  JSR    $E7C7
7546: cc 00 90  LDD    #$0090
7549: ed a1     STD    ,Y++
754b: cc 00 70  LDD    #$0070
754e: ed a1     STD    ,Y++
7550: 96 8e     LDA    <$8E
7552: bd e7 ad  JSR    $E7AD
7555: cc 80 40  LDD    #$8040
7558: ed a1     STD    ,Y++
755a: b6 4b 0e  LDA    $4B0E
755d: 81 01     CMPA   #$01
755f: 2e 3b     BGT    $0083
7561: b6 48 45  LDA    $4845
7564: 27 36     BEQ    $0083
7566: b6 45 92  LDA    $4592
7569: 84 03     ANDA   #$03
756b: 27 2f     BEQ    $0083
756d: f6 45 93  LDB    $4593
7570: c4 03     ANDB   #$03
7572: cb 06     ADDB   #$06
7574: d1 60     CMPB   <$60
7576: 22 04     BHI    $0063
7578: c6 4a     LDB    #$4A
757a: 20 1d     BRA    $0080
757c: ce a0 1a  LDU    #$A01A
757f: ef a1     STU    ,Y++
7581: ce 00 48  LDU    #$0048
7584: ef a1     STU    ,Y++
7586: ce 1e c0  LDU    #$1EC0
7589: ef a1     STU    ,Y++
758b: c6 01     LDB    #$01
758d: d7 ad     STB    <$AD
758f: bd e7 ad  JSR    $E7AD
7592: cc 80 40  LDD    #$8040
7595: ed a1     STD    ,Y++
7597: c6 49     LDB    #$49
7599: bd e7 c7  JSR    $E7C7
759c: b6 4b 0e  LDA    $4B0E
759f: 81 00     CMPA   #$00
75a1: 2e 0f     BGT    $0099
75a3: b6 4b 2d  LDA    $4B2D
75a6: 26 0a     BNE    $0099
75a8: f6 4b 15  LDB    $4B15
75ab: 27 05     BEQ    $0099
75ad: c6 4b     LDB    #$4B
75af: bd e7 c7  JSR    $E7C7
75b2: bd 98 b0  JSR    $98B0
75b5: bd 61 2f  JSR    $612F
75b8: 39        RTS
75b9: bd 61 12  JSR    $6112
75bc: 86 10     LDA    #$10
75be: bd ce 0c  JSR    $CE0C
75c1: bd 76 1d  JSR    $761D
75c4: b6 4b 36  LDA    $4B36
75c7: 2f 03     BLE    $00B3
75c9: bd 97 c2  JSR    $97C2
75cc: bd 95 a7  JSR    $95A7
75cf: bd b6 b9  JSR    $B6B9
75d2: bd 77 a4  JSR    $77A4
75d5: bd 61 2f  JSR    $612F
75d8: 39        RTS
75d9: bd 61 12  JSR    $6112
75dc: 86 10     LDA    #$10
75de: bd ce 0c  JSR    $CE0C
75e1: bd 76 1d  JSR    $761D
75e4: bd 95 a7  JSR    $95A7
75e7: bd b6 b9  JSR    $B6B9
75ea: cc 1f 98  LDD    #$1F98
75ed: ed a1     STD    ,Y++
75ef: cc 00 00  LDD    #$0000
75f2: ed a1     STD    ,Y++
75f4: cc 72 00  LDD    #$7200
75f7: ed a1     STD    ,Y++
75f9: cc be 50  LDD    #$BE50
75fc: ed a1     STD    ,Y++
75fe: cc 72 00  LDD    #$7200
7601: ed a1     STD    ,Y++
7603: bd bb 85  JSR    $BB85
7606: bd 61 2f  JSR    $612F
7609: 39        RTS
760a: bd 61 12  JSR    $6112
760d: bd 76 1d  JSR    $761D
7610: bd 95 a7  JSR    $95A7
7613: bd b6 b9  JSR    $B6B9
7616: bd bb 85  JSR    $BB85
7619: bd 61 2f  JSR    $612F
761c: 39        RTS
761d: cc b9 f2  LDD    #$B9F2
7620: ed a1     STD    ,Y++
7622: cc 62 80  LDD    #$6280
7625: ed a1     STD    ,Y++
7627: cc 01 e0  LDD    #$01E0
762a: ed a1     STD    ,Y++
762c: cc 1e 20  LDD    #$1E20
762f: ed a1     STD    ,Y++
7631: 86 06     LDA    #$06
7633: 97 ad     STA    <$AD
7635: 8e 48 5c  LDX    #$485C
7638: bd e7 64  JSR    $E764
763b: cc 80 40  LDD    #$8040
763e: ed a1     STD    ,Y++
7640: f6 4b 2c  LDB    $4B2C
7643: 27 29     BEQ    $0155
7645: c0 08     SUBB   #$08
7647: c1 20     CMPB   #$20
7649: 24 02     BCC    $0134
764b: c6 00     LDB    #$00
764d: f7 4b 2c  STB    $4B2C
7650: 54        LSRB
7651: 86 66     LDA    #$66
7653: ed a1     STD    ,Y++
7655: cc 01 b0  LDD    #$01B0
7658: ed a1     STD    ,Y++
765a: cc 1e 50  LDD    #$1E50
765d: ed a1     STD    ,Y++
765f: 86 05     LDA    #$05
7661: 97 ad     STA    <$AD
7663: 8e 4b 28  LDX    #$4B28
7666: bd e7 72  JSR    $E772
7669: cc 80 40  LDD    #$8040
766c: ed a1     STD    ,Y++
766e: cc 62 80  LDD    #$6280
7671: ed a1     STD    ,Y++
7673: cc 02 10  LDD    #$0210
7676: ed a1     STD    ,Y++
7678: cc 01 38  LDD    #$0138
767b: ed a1     STD    ,Y++
767d: 86 01     LDA    #$01
767f: 97 ad     STA    <$AD
7681: b6 4b 16  LDA    $4B16
7684: bd e7 90  JSR    $E790
7687: cc 80 40  LDD    #$8040
768a: ed a1     STD    ,Y++
768c: 39        RTS
768d: b6 4b 13  LDA    $4B13
7690: 2f 6a     BLE    $01E3
7692: b6 4b 1a  LDA    $4B1A
7695: 27 3c     BEQ    $01BA
7697: 96 43     LDA    <$43
7699: 84 30     ANDA   #$30
769b: 27 31     BEQ    $01B5
769d: c6 40     LDB    #$40
769f: bd e7 c7  JSR    $E7C7
76a2: cc 62 80  LDD    #$6280
76a5: ed a1     STD    ,Y++
76a7: cc 01 80  LDD    #$0180
76aa: ed a1     STD    ,Y++
76ac: cc 1e d0  LDD    #$1ED0
76af: ed a1     STD    ,Y++
76b1: 86 04     LDA    #$04
76b3: 97 ad     STA    <$AD
76b5: b6 4b 2e  LDA    $4B2E
76b8: bd e7 90  JSR    $E790
76bb: b6 4b 2f  LDA    $4B2F
76be: bd e7 90  JSR    $E790
76c1: b6 4b 30  LDA    $4B30
76c4: bd e7 90  JSR    $E790
76c7: cc 80 40  LDD    #$8040
76ca: ed a1     STD    ,Y++
76cc: 20 05     BRA    $01BA
76ce: c6 43     LDB    #$43
76d0: bd e7 c7  JSR    $E7C7
76d3: b6 4b 13  LDA    $4B13
76d6: 2f 24     BLE    $01E3
76d8: cc 00 41  LDD    #$0041
76db: bd e7 c7  JSR    $E7C7
76de: cc 62 80  LDD    #$6280
76e1: ed a1     STD    ,Y++
76e3: cc 01 98  LDD    #$0198
76e6: ed a1     STD    ,Y++
76e8: cc 01 68  LDD    #$0168
76eb: ed a1     STD    ,Y++
76ed: 86 01     LDA    #$01
76ef: 97 ad     STA    <$AD
76f1: b6 4b 1a  LDA    $4B1A
76f4: bd e7 90  JSR    $E790
76f7: cc 80 40  LDD    #$8040
76fa: ed a1     STD    ,Y++
76fc: b6 4b 35  LDA    $4B35
76ff: 27 05     BEQ    $01ED
7701: c6 42     LDB    #$42
7703: bd e7 c7  JSR    $E7C7
7706: 39        RTS
7707: b6 4b 0f  LDA    $4B0F
770a: 81 20     CMPA   #$20
770c: 23 02     BLS    $01F7
770e: 86 20     LDA    #$20
7710: c6 06     LDB    #$06
7712: 3d        MUL
7713: 50        NEGB
7714: cb c0     ADDB   #$C0
7716: 86 70     LDA    #$70
7718: ed bd     STD    $0,X
