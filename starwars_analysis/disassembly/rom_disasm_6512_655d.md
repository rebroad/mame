6512: 39        RTS
6513: bd d9 1a  JSR    $D91A
6516: 86 0a     LDA    #$0A
6518: b7 4a f6  STA    $4AF6
651b: 86 00     LDA    #$00
651d: b7 45 98  STA    $4598
6520: b7 4a f7  STA    $4AF7
6523: 86 03     LDA    #$03
6525: bd c2 c3  JSR    $C2C3
6528: 27 05     BEQ    $652F
652a: 86 03     LDA    #$03
652c: bd c3 69  JSR    $C369
652f: 0c 41     INC    <$41
6531: 39        RTS
6532: bd 61 12  JSR    $6112
6535: bd c4 50  JSR    $C450
6538: cc 67 80  LDD    #$6780
653b: ed a1     STD    ,Y++
653d: c6 66     LDB    #$66
653f: fb 4a f6  ADDB   $4AF6
6542: bd e7 d3  JSR    $E7D3
6545: b6 4a f6  LDA    $4AF6
6548: bd c5 a4  JSR    $C5A4
654b: bd c4 eb  JSR    $C4EB
654e: bd d9 23  JSR    $D923
6551: bd 61 2f  JSR    $612F
6554: 96 ac     LDA    <$AC
6556: 84 04     ANDA   #$04
6558: 27 03     BEQ    $655D
655a: 7e f2 61  JMP    $F261
655d: 7e 655d     JMP    $655d
