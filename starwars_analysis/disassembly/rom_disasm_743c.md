743c: bd 61 12  JSR    $6112
743f: 86 10     LDA    #$10
7441: bd ce 0c  JSR    $CE0C
7444: bd 71 60  JSR    $7160
7447: bd 76 1d  JSR    $761D
744a: b6 4b 0e  LDA    $4B0E
744d: 81 04     CMPA   #$04
744f: 22 13     BHI    $7464
7451: 96 98     LDA    <$98
7453: 26 05     BNE    $745A
7455: bd 76 d3  JSR    $76D3
7458: 20 0a     BRA    $7464
745a: cc 71 00  LDD    #$7100
745d: ed a1     STD    ,Y++
745f: c6 46     LDB    #$46
7461: bd e7 c7  JSR    $E7C7
7464: b6 4b 2d  LDA    $4B2D
7467: 26 28     BNE    $7491
7469: b6 4b 0e  LDA    $4B0E
746c: 81 08     CMPA   #$08
746e: 22 21     BHI    $7491
7470: 96 98     LDA    <$98
7472: 26 1d     BNE    $7491
7474: b6 4b 35  LDA    $4B35
7477: 26 18     BNE    $7491
7479: b6 4b 12  LDA    $4B12
747c: 26 04     BNE    $7482
747e: c6 4c     LDB    #$4C
7480: 20 0c     BRA    $748E
7482: 96 43     LDA    <$43
7484: 84 10     ANDA   #$10
7486: 26 04     BNE    $748C
7488: c6 4c     LDB    #$4C
748a: 20 02     BRA    $748E
748c: c6 4e     LDB    #$4E
748e: bd e7 c7  JSR    $E7C7
7491: b6 4b 2d  LDA    $4B2D
7494: 26 0f     BNE    $74A5
7496: b6 48 95  LDA    $4895
7499: 27 0a     BEQ    $74A5
749b: cc 71 00  LDD    #$7100
749e: ed a1     STD    ,Y++
74a0: c6 44     LDB    #$44
74a2: bd e7 c7  JSR    $E7C7
74a5: b6 4b 36  LDA    $4B36
74a8: 2d 0c     BLT    $74B6
74aa: 26 07     BNE    $74B3
74ac: c6 4f     LDB    #$4F
74ae: bd e7 c7  JSR    $E7C7
74b1: 20 03     BRA    $74B6
74b3: bd 97 c2  JSR    $97C2
74b6: bd 95 a7  JSR    $95A7
74b9: bd b6 b9  JSR    $B6B9
74bc: bd 85 9b  JSR    $859B
74bf: bd ae 60  JSR    $AE60
74c2: bd aa e4  JSR    $AAE4
74c5: bd b0 71  JSR    $B071
74c8: bd ae bd  JSR    $AEBD
74cb: bd ad af  JSR    $ADAF
74ce: bd 98 b0  JSR    $98B0
74d1: bd 61 2f  JSR    $612F
74d4: 39        RTS
74d5: bd 61 12  JSR    $6112
74d8: 86 10     LDA    #$10
74da: bd ce 0c  JSR    $CE0C
74dd: bd 71 60  JSR    $7160
74e0: bd 76 1d  JSR    $761D
74e3: b6 4b 3e  LDA    $4B3E
74e6: 27 0a     BEQ    $74F2
74e8: cc 71 00  LDD    #$7100
74eb: ed a1     STD    ,Y++
74ed: c6 46     LDB    #$46
74ef: bd e7 c7  JSR    $E7C7
74f2: bd 95 a7  JSR    $95A7
74f5: bd 85 9b  JSR    $859B
74f8: bd aa e4  JSR    $AAE4
74fb: b6 4b 2d  LDA    $4B2D
74fe: 26 0f     BNE    $750F
7500: b6 48 95  LDA    $4895
7503: 27 0a     BEQ    $750F
7505: cc 71 00  LDD    #$7100
7508: ed a1     STD    ,Y++
750a: c6 44     LDB    #$44
750c: bd e7 c7  JSR    $E7C7
750f: bd 77 07  JSR    $7707
7512: bd 98 b0  JSR    $98B0
7515: bd 61 2f  JSR    $612F
7518: 39        RTS
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
753a: 2e 1e     BGT    $755A
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
755f: 2e 3b     BGT    $759C
7561: b6 48 45  LDA    $4845
7564: 27 36     BEQ    $759C
7566: b6 45 92  LDA    $4592
7569: 84 03     ANDA   #$03
756b: 27 2f     BEQ    $759C
756d: f6 45 93  LDB    $4593
7570: c4 03     ANDB   #$03
7572: cb 06     ADDB   #$06
7574: d1 60     CMPB   <$60
7576: 22 04     BHI    $757C
7578: c6 4a     LDB    #$4A
757a: 20 1d     BRA    $7599
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
75a1: 2e 0f     BGT    $75B2
75a3: b6 4b 2d  LDA    $4B2D
75a6: 26 0a     BNE    $75B2
75a8: f6 4b 15  LDB    $4B15
75ab: 27 05     BEQ    $75B2
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
75c7: 2f 03     BLE    $75CC
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
763b: cc 00 00  LDD    #$0000
