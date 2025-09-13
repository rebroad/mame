640e: 20 48     BRA    $6458
6410: b6 48 14  LDA    $4814
6413: bb 48 12  ADDA   $4812
6416: 81 01     CMPA   #$01
6418: 26 04     BNE    $641E
641a: c6 0d     LDB    #$0D
641c: 20 02     BRA    $6420
641e: c6 0c     LDB    #$0C
6420: bd e7 c7  JSR    $E7C7
6423: cc 01 b0  LDD    #$01B0
6426: 84 1f     ANDA   #$1F
6428: ed a1     STD    ,Y++
642a: cc ff 80  LDD    #$FF80
642d: 7d 48 12  TST    $4812
6430: 27 03     BEQ    $6435
6432: 83 00 18  SUBD   #$0018
6435: 84 1f     ANDA   #$1F
6437: ed a1     STD    ,Y++
6439: b6 48 14  LDA    $4814
643c: 81 0a     CMPA   #$0A
643e: 25 02     BCS    $6442
6440: 8b 06     ADDA   #$06
6442: c6 02     LDB    #$02
6444: d7 ad     STB    <$AD
6446: bd e7 90  JSR    $E790
6449: b6 48 12  LDA    $4812
644c: 27 05     BEQ    $6453
644e: cc b8 f3  LDD    #$B8F3
6451: ed a1     STD    ,Y++
6453: cc 80 40  LDD    #$8040
6456: ed a1     STD    ,Y++
6458: 39        RTS
