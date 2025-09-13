6368: fc 4b 0e     LDD    $4B0E
636b: 83 00 01     SUBD   #$0001
636e: fd 4b 0e     STD    $4B0E
6371: c4 07        ANDB   #$07
6373: 26 28        BNE    $639D
6375: b6 4a db     LDA    $4ADB
6378: 2b 03        BMI    $637D
637a: bd d8 df     JSR    $D8DF
637d: b6 4a db     LDA    $4ADB
6380: 81 12        CMPA   #$12
6382: 26 0a        BNE    $638E
6384: b6 45 93     LDA    $4593
6387: 84 03        ANDA   #$03
6389: 8b 1f        ADDA   #$1F
638b: bd d8 df     JSR    $D8DF
638e: b6 4a db     LDA    $4ADB
6391: 8b 01        ADDA   #$01
6393: b1 4a dc     CMPA   $4ADC
6396: 25 02        BCS    $639A
6398: 86 80        LDA    #$80
639a: b7 4a db     STA    $4ADB
639d: fc 4b 0c     LDD    $4B0C
63a0: 83 00 08     SUBD   #$0008
63a3: 2a 03        BPL    $63A8
63a5: cc 00 00     LDD    #$0000
63a8: fd 4b 0c     STD    $4B0C
63ab: fc 4b 0e     LDD    $4B0E
63ae: 10 83 00 c0  CMPD   #$00C0
63b2: 24 12        BCC    $63C6
63b4: f6 4b 11     LDB    $4B11
63b7: c0 01        SUBB   #$01
63b9: c1 10        CMPB   #$10
63bb: 24 06        BCC    $63C3
63bd: cc 00 00     LDD    #$0000
63c0: fd 4b 0e     STD    $4B0E
63c3: f7 4b 11     STB    $4B11
63c6: fc 4b 0c     LDD    $4B0C
63c9: fd 48 af     STD    $48AF
63cc: fc 4b 10     LDD    $4B10
63cf: ed a1        STD    ,Y++
63d1: bd d9 42     JSR    $D942
63d4: 39           RTS
63d5: b6 48 14     LDA    $4814
63d8: 26 11        BNE    $63EB
63da: 96 43        LDA    <$43
63dc: 84 10        ANDA   #$10
63de: 26 04        BNE    $63E4
63e0: c6 06        LDB    #$06
63e2: 20 02        BRA    $63E6
63e4: c6 05        LDB    #$05
63e6: bd e7 c7     JSR    $E7C7
63e9: 20 05        BRA    $63F0
63eb: c6 0b        LDB    #$0B
63ed: bd e7 c7     JSR    $E7C7
63f0: b6 48 14     LDA    $4814
63f3: 26 1b        BNE    $6410
63f5: b6 48 12     LDA    $4812
63f8: 27 0a        BEQ    $6404
63fa: 96 43        LDA    <$43
63fc: 84 10        ANDA   #$10
63fe: 27 04        BEQ    $6404
6400: 20 0e        BRA    $6410
6402: 20 0a        BRA    $640E
6404: f6 45 91     LDB    $4591
6407: c4 03        ANDB   #$03
6409: cb 07        ADDB   #$07
640b: bd e7 c7     JSR    $E7C7
640e: 20 48        BRA    $6458
6410: b6 48 14     LDA    $4814
6413: bb 48 12     ADDA   $4812
6416: 81 01        CMPA   #$01
6418: 26 04        BNE    $641E
641a: c6 0d        LDB    #$0D
641c: 20 02        BRA    $6420
641e: c6 0c        LDB    #$0C
6420: bd e7 c7     JSR    $E7C7
6423: cc 01 b0     LDD    #$01B0
6426: 84 1f        ANDA   #$1F
6428: ed a1        STD    ,Y++
642a: cc ff 80     LDD    #$FF80
642d: 7d 48 12     TST    $4812
6430: 27 03        BEQ    $6435
6432: 83 00 18     SUBD   #$0018
6435: 84 1f        ANDA   #$1F
6437: ed a1        STD    ,Y++
6439: b6 48 14     LDA    $4814
643c: 81 0a        CMPA   #$0A
643e: 25 02        BCS    $6442
6440: 8b 06        ADDA   #$06
6442: c6 02        LDB    #$02
6444: d7 ad        STB    <$AD
6446: bd e7 90     JSR    $E790
6449: b6 48 12     LDA    $4812
644c: 27 05        BEQ    $6453
644e: cc b8 f3     LDD    #$B8F3
6451: ed a1        STD    ,Y++
6453: cc 80 40     LDD    #$8040
6456: ed a1        STD    ,Y++
6458: 39           RTS
6459: cc 00 00     LDD    #$0000
645c: fd 4b 0c     STD    $4B0C
645f: fd 48 af     STD    $48AF
6462: cc 01 00     LDD    #$0100
6465: fd 4b 0e     STD    $4B0E
6468: cc 61 80     LDD    #$6180
646b: fd 4b 10     STD    $4B10
646e: bd d9 1a     JSR    $D91A
6471: bd 61 b5     JSR    $61B5
6474: bd 61 5a     JSR    $615A
6477: ce 50 38     LDU    #$5038
647a: bd cd c3     JSR    $CDC3
647d: bd cc 38     JSR    $CC38
6480: 0c 41        INC    <$41
6482: 39           RTS
6483: bd 61 12     JSR    $6112
6486: bd 64 cd     JSR    $64CD
6489: bd cd 80     JSR    $CD80
648c: bd 76 1d     JSR    $761D
648f: bd 63 d5     JSR    $63D5
6492: fc 4b 0e     LDD    $4B0E
6495: 10 83 00 50  CMPD   #$0050
6499: 24 0e        BCC    $64A9
649b: f6 4b 11     LDB    $4B11
649e: c0 01        SUBB   #$01
64a0: c1 f0        CMPB   #$F0
64a2: 25 02        BCS    $64A6
64a4: c6 00        LDB    #$00
64a6: f7 4b 11     STB    $4B11
64a9: fc 4b 10     LDD    $4B10
64ac: ed a1        STD    ,Y++
64ae: bd c7 fd     JSR    $C7FD
64b1: bd d9 23     JSR    $D923
64b4: bd 61 2f     JSR    $612F
64b7: bd 6d ca     JSR    $6DCA
64ba: fc 4b 0e     LDD    $4B0E
64bd: 83 00 01     SUBD   #$0001
64c0: fd 4b 0e     STD    $4B0E
64c3: 2a 04        BPL    $64C9
64c5: 86 05        LDA    #$05
64c7: 97 41        STA    <$41
64c9: bd 62 2d     JSR    $622D
64cc: 39           RTS
64cd: c6 00        LDB    #$00
64cf: bd e7 c7     JSR    $E7C7
64d2: c6 01        LDB    #$01
64d4: bd e7 c7     JSR    $E7C7
64d7: c6 02        LDB    #$02
64d9: bd e7 c7     JSR    $E7C7
64dc: c6 03        LDB    #$03
64de: bd e7 c7     JSR    $E7C7
64e1: 39           RTS
64e2: bd d9 1a     JSR    $D91A
64e5: cc 00 00     LDD    #$0000
64e8: fd 4b 0c     STD    $4B0C
64eb: fd 48 af     STD    $48AF
64ee: 0c 41        INC    <$41
64f0: 39           RTS
64f1: bd 61 12     JSR    $6112
64f4: bd be 20     JSR    $BE20
64f7: bd d9 23     JSR    $D923
64fa: bd 61 2f     JSR    $612F
64fd: 96 ac        LDA    <$AC
64ff: 84 04        ANDA   #$04
6501: 27 04        BEQ    $6507
6503: 86 03        LDA    #$03
6505: 97 41        STA    <$41
6507: b6 48 1e     LDA    $481E
650a: 84 10        ANDA   #$10
650c: 27 04        BEQ    $6512
650e: 86 05        LDA    #$05
6510: 97 41        STA    <$41
6512: 39           RTS
6513: bd d9 1a     JSR    $D91A
6516: 86 0a        LDA    #$0A
6518: b7 4a f6     STA    $4AF6
651b: 86 00        LDA    #$00
651d: b7 45 98     STA    $4598
6520: b7 4a f7     STA    $4AF7
6523: 86 03        LDA    #$03
6525: bd c2 c3     JSR    $C2C3
6528: 27 05        BEQ    $652F
652a: 86 03        LDA    #$03
652c: bd c3 69     JSR    $C369
652f: 0c 41        INC    <$41
6531: 39           RTS
6532: bd 61 12     JSR    $6112
6535: bd c4 50     JSR    $C450
6538: cc 67 80     LDD    #$6780
653b: ed a1        STD    ,Y++
653d: c6 66        LDB    #$66
653f: fb 4a f6     ADDB   $4AF6
6542: bd e7 d3     JSR    $E7D3
6545: b6 4a f6     LDA    $4AF6
6548: bd c5 a4     JSR    $C5A4
654b: bd c4 eb     JSR    $C4EB
654e: bd d9 23     JSR    $D923
6551: bd 61 2f     JSR    $612F
6554: 96 ac        LDA    <$AC
6556: 84 04        ANDA   #$04
6558: 27 03        BEQ    $655D
655a: 7e f2 61     JMP    $F261
655d: b6 48 1e     LDA    $481E
6560: 84 10        ANDA   #$10
6562: 27 07        BEQ    $656B
6564: bd d9 1a     JSR    $D91A
6567: 86 00        LDA    #$00
