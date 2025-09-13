681e: b7 4b 14  STA    $4B14
6821: bb 4b 18  ADDA   $4B18
6824: 81 0f     CMPA   #$0F
6826: 23 02     BLS    $682A
6828: 86 0f     LDA    #$0F
682a: b7 4b 19  STA    $4B19
682d: 0c 41     INC    <$41
682f: 86 1f     LDA    #$1F
6831: 97 41     STA    <$41
6833: 86 00     LDA    #$00
6835: 97 dd     STA    <$DD
6837: 39        RTS
