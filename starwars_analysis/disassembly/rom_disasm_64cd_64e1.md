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
6567: 86 05        LDA    #$05
6569: 97 41        STA    <$41
656b: 39           RTS
656c: cc 01 00     LDD    #$0100
656f: fd 4b 0e     STD    $4B0E
6572: cc 00 00     LDD    #$0000
6575: fd 4b 0c     STD    $4B0C
6578: fd 48 af     STD    $48AF
657b: cc 64 80     LDD    #$6480
657e: fd 4b 10     STD    $4B10
6581: bd d9 1a     JSR    $D91A
6584: c6 2c        LDB    #$2C
6586: 1f 98        TFR    B,A
6588: bd d8 df     JSR    $D8DF
658b: 5c           INCB
658c: c1 3a        CMPB   #$3A
658e: 25 f6        BCS    $6586
6590: 0c 41        INC    <$41
6592: 39           RTS
6593: 00 64        NEG    <$64
6595: fe 70 fe     LDU    $70FE
6598: d4 00        ANDB   <$00
659a: 00 00        NEG    <$00
659c: 64 01        LSR    $1,X
659e: 90 fc        SUBA   <$FC
65a0: 4b           XDECA
65a1: 0e 83        JMP    <$83
65a3: 00 01        NEG    <$01
65a5: fd 4b 0e     STD    $4B0E
65a8: 2a 13        BPL    $65BD
65aa: 86 00        LDA    #$00
65ac: b7 4b 15     STA    $4B15
65af: 86 1b        LDA    #$1B
65b1: 97 41        STA    <$41
65b3: 7f 48 1b     CLR    $481B
65b6: 7f 48 1a     CLR    $481A
65b9: 7f 48 19     CLR    $4819
65bc: 39           RTS
65bd: bd 61 12     JSR    $6112
65c0: 8e 65 93     LDX    #$6593
65c3: ec 81        LDD    ,X++
65c5: 84 1f        ANDA   #$1F
65c7: ed a1        STD    ,Y++
65c9: ec 81        LDD    ,X++
65cb: 84 1f        ANDA   #$1F
65cd: ed a1        STD    ,Y++
65cf: cc 72 00     LDD    #$7200
65d2: ed a1        STD    ,Y++
65d4: cc be 50     LDD    #$BE50
65d7: ed a1        STD    ,Y++
65d9: 8c 65 9f     CMPX   #$659F
65dc: 25 e5        BCS    $65C3
65de: 96 dd        LDA    <$DD
65e0: 2a 05        BPL    $65E7
65e2: cc 63 80     LDD    #$6380
65e5: 20 03        BRA    $65EA
65e7: cc 66 80     LDD    #$6680
65ea: ed a1        STD    ,Y++
65ec: bd b6 c0     JSR    $B6C0
65ef: bd d9 23     JSR    $D923
65f2: cc 00 c8     LDD    #$00C8
65f5: ed a1        STD    ,Y++
65f7: cc 1f f0     LDD    #$1FF0
65fa: ed a1        STD    ,Y++
65fc: fc 4b 0e     LDD    $4B0E
65ff: 58           ASLB
6600: 49           ROLA
6601: 58           ASLB
6602: 49           ROLA
6603: 58           ASLB
6604: 49           ROLA
6605: 81 0a        CMPA   #$0A
6607: 25 02        BCS    $660B
6609: 8b 06        ADDA   #$06
660b: bd e7 90     JSR    $E790
660e: bd 61 2f     JSR    $612F
6611: 86 ff        LDA    #$FF
6613: 97 dd        STA    <$DD
6615: 8e 65 93     LDX    #$6593
6618: dc 7b        LDD    <$7B
661a: c3 ff 98     ADDD   #$FF98
661d: a3 84        SUBD   ,X
661f: 4d           TSTA
6620: 2a 04        BPL    $6626
6622: 43           COMA
6623: 50           NEGB
6624: 82 ff        SBCA   #$FF
6626: fd 4a fa     STD    $4AFA
6629: 10 83 00 48  CMPD   #$0048
662d: 24 39        BCC    $6668
662f: dc 79        LDD    <$79
6631: a3 02        SUBD   $2,X
6633: 4d           TSTA
6634: 2a 04        BPL    $663A
6636: 43           COMA
6637: 50           NEGB
6638: 82 ff        SBCA   #$FF
663a: 10 83 00 34  CMPD   #$0034
663e: 24 28        BCC    $6668
6640: f3 4a fa     ADDD   $4AFA
6643: 10 83 00 50  CMPD   #$0050
6647: 24 1f        BCC    $6668
6649: 1f 10        TFR    X,D
664b: 83 65 93     SUBD   #$6593
664e: 54           LSRB
664f: d7 dd        STB    <$DD
6651: f7 4b 15     STB    $4B15
6654: 96 ac        LDA    <$AC
6656: 84 f0        ANDA   #$F0
6658: 27 0d        BEQ    $6667
665a: 86 1b        LDA    #$1B
665c: 97 41        STA    <$41
665e: 7f 48 1b     CLR    $481B
6661: 7f 48 1a     CLR    $481A
6664: 7f 48 19     CLR    $4819
6667: 39           RTS
6668: 30 04        LEAX   $4,X
666a: 8c 65 9f     CMPX   #$659F
666d: 25 a9        BCS    $6618
666f: 39           RTS
6670: cc 00 00     LDD    #$0000
6673: fd 4b 0e     STD    $4B0E
6676: fd 4b 0c     STD    $4B0C
6679: fd 48 af     STD    $48AF
667c: cc 61 80     LDD    #$6180
667f: fd 4b 10     STD    $4B10
6682: bd d9 1a     JSR    $D91A
6685: 86 3a        LDA    #$3A
6687: bd d8 df     JSR    $D8DF
668a: 86 3b        LDA    #$3B
668c: bd d8 df     JSR    $D8DF
668f: 86 3c        LDA    #$3C
6691: bd d8 df     JSR    $D8DF
6694: 86 3d        LDA    #$3D
6696: bd d8 df     JSR    $D8DF
6699: 86 3e        LDA    #$3E
669b: bd d8 df     JSR    $D8DF
669e: 86 3d        LDA    #$3D
66a0: bd d8 df     JSR    $D8DF
66a3: bd bd 80     JSR    $BD80
66a6: bd cc 38     JSR    $CC38
66a9: 0c 41        INC    <$41
66ab: 39           RTS
66ac: bd 61 12     JSR    $6112
66af: bd 76 1d     JSR    $761D
66b2: bd 63 d5     JSR    $63D5
66b5: bd c7 fd     JSR    $C7FD
66b8: bd d9 23     JSR    $D923
66bb: bd 61 2f     JSR    $612F
66be: bd ca f3     JSR    $CAF3
66c1: b6 48 1e     LDA    $481E
66c4: 84 10        ANDA   #$10
66c6: 26 06        BNE    $66CE
66c8: cc 03 00     LDD    #$0300
66cb: fd 4b 00     STD    $4B00
