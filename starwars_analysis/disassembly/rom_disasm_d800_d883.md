d800: 0a 0b        DEC    <$0B
d802: 86 00        LDA    #$00
d804: a7 84        STA    ,X
d806: a7 03        STA    $3,X
d808: a6 03        LDA    $3,X
d80a: 27 54        BEQ    $D860
d80c: 6a 03        DEC    $3,X
d80e: 27 1f        BEQ    $D82F
d810: 20 4e        BRA    $D860
d812: 81 1b        CMPA   #$1B
d814: 24 08        BCC    $D81E
d816: a6 84        LDA    ,X
d818: 8b 20        ADDA   #$20
d81a: 24 d3        BCC    $D7EF
d81c: 26 04        BNE    $D822
d81e: 86 1f        LDA    #$1F
d820: 20 cd        BRA    $D7EF
d822: 86 1f        LDA    #$1F
d824: a7 84        STA    ,X
d826: e6 03        LDB    $3,X
d828: 86 78        LDA    #$78
d82a: a7 03        STA    $3,X
d82c: 5d           TSTB
d82d: 27 31        BEQ    $D860
d82f: 4f           CLRA
d830: 8c 48 0d     CMPX   #$480D
d833: 25 1e        BCS    $D853
d835: 27 14        BEQ    $D84B
d837: 96 09        LDA    <$09
d839: 84 0c        ANDA   #$0C
d83b: 44           LSRA
d83c: 44           LSRA
d83d: 27 14        BEQ    $D853
d83f: 8b 02        ADDA   #$02
d841: 20 10        BRA    $D853
d843: ff 04 08     STU    $0408
d846: 08 0a        ASL    <$0A
d848: ff ff ff     STU    $FFFF
d84b: 96 09        LDA    <$09
d84d: 84 10        ANDA   #$10
d84f: 27 02        BEQ    $D853
d851: 86 01        LDA    #$01
d853: 4c           INCA
d854: 1f 89        TFR    A,B
d856: db 13        ADDB   <$13
d858: d7 13        STB    <$13
d85a: 9b 12        ADDA   <$12
d85c: 97 12        STA    <$12
d85e: 6c 09        INC    $9,X
d860: 30 1f        LEAX   -$1,X
d862: 8c 48 0c     CMPX   #$480C
d865: 10 2c ff 65  LBGE   $D7CE
d869: 96 09        LDA    <$09
d86b: 44           LSRA
d86c: 44           LSRA
d86d: 44           LSRA
d86e: 44           LSRA
d86f: 44           LSRA
d870: d6 13        LDB    <$13
d872: 58           ASLB
d873: 8e d8 43     LDX    #$D843
d876: e0 86        SUBB   A,X
d878: 25 11        BCS    $D88B
d87a: 08 13        ASL    <$13
d87c: 56           RORB
d87d: 81 03        CMPA   #$03
d87f: 27 04        BEQ    $D885
d881: cb 80        ADDB   #$80
d883: 7e d882     JMP    $d882
