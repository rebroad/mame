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
