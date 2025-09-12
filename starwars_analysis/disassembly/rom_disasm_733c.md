733c: bd 61 12  JSR    $6112
733f: 86 10     LDA    #$10
7341: bd ce 0c  JSR    $CE0C
7344: bd 71 60  JSR    $7160
7347: bd 76 1d  JSR    $761D
734a: bd 95 a7  JSR    $95A7
734d: bd b6 b9  JSR    $B6B9
7350: bd cd 80  JSR    $CD80
7353: bd 77 65  JSR    $7765
7356: bd ba 12  JSR    $BA12
7359: bd ae 60  JSR    $AE60
735c: bd 78 6a  JSR    $786A
735f: bd aa e4  JSR    $AAE4
7362: bd b3 2b  JSR    $B32B
7365: bd ae bd  JSR    $AEBD
7368: bd 98 b0  JSR    $98B0
736b: bd 61 2f  JSR    $612F
736e: 39        RTS
736f: bd 61 12  JSR    $6112
7372: 86 10     LDA    #$10
7374: bd ce 0c  JSR    $CE0C
7377: bd 71 60  JSR    $7160
737a: bd 76 1d  JSR    $761D
737d: bd 95 a7  JSR    $95A7
7380: bd b6 b9  JSR    $B6B9
7383: bd cd 80  JSR    $CD80
7386: bd 77 a4  JSR    $77A4
7389: bd 98 b0  JSR    $98B0
738c: bd 61 2f  JSR    $612F
738f: 39        RTS
7390: bd 61 12  JSR    $6112
7393: 86 10     LDA    #$10
7395: bd ce 0c  JSR    $CE0C
7398: bd 71 60  JSR    $7160
739b: bd 76 1d  JSR    $761D
739e: bd 76 8d  JSR    $768D
73a1: bd 95 a7  JSR    $95A7
73a4: bd b6 b9  JSR    $B6B9
73a7: bd cd 8c  JSR    $CD8C
73aa: bd ae 60  JSR    $AE60
73ad: bd aa e4  JSR    $AAE4
73b0: bd a2 14  JSR    $A214
73b3: bd b2 d2  JSR    $B2D2
73b6: bd ae bd  JSR    $AEBD
73b9: bd ba 12  JSR    $BA12
73bc: bd 98 b0  JSR    $98B0
73bf: bd 61 2f  JSR    $612F
73c2: 39        RTS
73c3: bd 61 12  JSR    $6112
73c6: 86 10     LDA    #$10
73c8: bd ce 0c  JSR    $CE0C
73cb: bd 71 60  JSR    $7160
73ce: bd 76 1d  JSR    $761D
73d1: bd 76 8d  JSR    $768D
73d4: bd 95 a7  JSR    $95A7
73d7: bd cd 8c  JSR    $CD8C
73da: bd aa e4  JSR    $AAE4
73dd: bd a2 14  JSR    $A214
73e0: bd 77 07  JSR    $7707
73e3: bd 98 b0  JSR    $98B0
73e6: bd 61 2f  JSR    $612F
73e9: 39        RTS
73ea: bd 61 12  JSR    $6112
73ed: 86 10     LDA    #$10
73ef: bd ce 0c  JSR    $CE0C
73f2: bd 71 60  JSR    $7160
73f5: bd 76 1d  JSR    $761D
73f8: bd 76 d3  JSR    $76D3
73fb: c6 4f     LDB    #$4F
73fd: bd e7 c7  JSR    $E7C7
7400: bd 95 a7  JSR    $95A7
7403: bd b6 b9  JSR    $B6B9
7406: bd cd 8c  JSR    $CD8C
7409: bd ba 12  JSR    $BA12
740c: bd 98 b0  JSR    $98B0
740f: bd 61 2f  JSR    $612F
7412: 39        RTS
7413: bd 61 12  JSR    $6112
7416: 86 10     LDA    #$10
7418: bd ce 0c  JSR    $CE0C
741b: bd 71 60  JSR    $7160
741e: bd 76 1d  JSR    $761D
7421: bd 76 d3  JSR    $76D3
7424: c6 4f     LDB    #$4F
7426: bd e7 c7  JSR    $E7C7
7429: bd 95 a7  JSR    $95A7
742c: bd b6 b9  JSR    $B6B9
742f: bd 85 9b  JSR    $859B
7432: bd ba 12  JSR    $BA12
7435: bd 98 b0  JSR    $98B0
7438: bd 61 2f  JSR    $612F
743b: 39        RTS
743c: bd 61 12  JSR    $6112
743f: 86 10     LDA    #$10
7441: bd ce 0c  JSR    $CE0C
7444: bd 71 60  JSR    $7160
7447: bd 76 1d  JSR    $761D
744a: b6 4b 0e  LDA    $4B0E
744d: 81 04     CMPA   #$04
744f: 22 13     BHI    $0128
7451: 96 98     LDA    <$98
7453: 26 05     BNE    $011E
7455: bd 76 d3  JSR    $76D3
7458: 20 0a     BRA    $0128
745a: cc 71 00  LDD    #$7100
745d: ed a1     STD    ,Y++
745f: c6 46     LDB    #$46
7461: bd e7 c7  JSR    $E7C7
7464: b6 4b 2d  LDA    $4B2D
7467: 26 28     BNE    $0155
7469: b6 4b 0e  LDA    $4B0E
746c: 81 08     CMPA   #$08
746e: 22 21     BHI    $0155
7470: 96 98     LDA    <$98
7472: 26 1d     BNE    $0155
7474: b6 4b 35  LDA    $4B35
7477: 26 18     BNE    $0155
7479: b6 4b 12  LDA    $4B12
747c: 26 04     BNE    $0146
747e: c6 4c     LDB    #$4C
7480: 20 0c     BRA    $0152
7482: 96 43     LDA    <$43
7484: 84 10     ANDA   #$10
7486: 26 04     BNE    $0150
7488: c6 4c     LDB    #$4C
748a: 20 02     BRA    $0152
748c: c6 4e     LDB    #$4E
748e: bd e7 c7  JSR    $E7C7
7491: b6 4b 2d  LDA    $4B2D
7494: 26 0f     BNE    $0169
7496: b6 48 95  LDA    $4895
7499: 27 0a     BEQ    $0169
749b: cc 71 00  LDD    #$7100
749e: ed a1     STD    ,Y++
74a0: c6 44     LDB    #$44
74a2: bd e7 c7  JSR    $E7C7
74a5: b6 4b 36  LDA    $4B36
74a8: 2d 0c     BLT    $017A
74aa: 26 07     BNE    $0177
74ac: c6 4f     LDB    #$4F
74ae: bd e7 c7  JSR    $E7C7
74b1: 20 03     BRA    $017A
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
74e6: 27 0a     BEQ    $01B6
74e8: cc 71 00  LDD    #$7100
74eb: ed a1     STD    ,Y++
74ed: c6 46     LDB    #$46
74ef: bd e7 c7  JSR    $E7C7
74f2: bd 95 a7  JSR    $95A7
74f5: bd 85 9b  JSR    $859B
74f8: bd aa e4  JSR    $AAE4
74fb: b6 4b 2d  LDA    $4B2D
74fe: 26 0f     BNE    $01D3
7500: b6 48 95  LDA    $4895
7503: 27 0a     BEQ    $01D3
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
753a: 2e 1e     BGT    $021E
