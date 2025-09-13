98b0: d6 62     LDB    <$62
98b2: c4 03     ANDB   #$03
98b4: 27 14     BEQ    $98CA
98b6: cc 71 00  LDD    #$7100
98b9: ed a1     STD    ,Y++
98bb: cc 67 ff  LDD    #$67FF
98be: ed a1     STD    ,Y++
98c0: cc b9 b3  LDD    #$B9B3
98c3: ed a1     STD    ,Y++
98c5: cc 72 00  LDD    #$7200
98c8: ed a1     STD    ,Y++
98ca: 39        RTS
