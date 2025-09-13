9898: 96 43     LDA    <$43
989a: 84 00     ANDA   #$00
989c: 26 11     BNE    $98AF
989e: 8e 49 00  LDX    #$4900
98a1: 6a 06     DEC    $6,X
98a3: 2a 02     BPL    $98A7
98a5: 6f 06     CLR    $6,X
98a7: 30 88 19  LEAX   $19,X
98aa: 8c 49 4b  CMPX   #$494B
98ad: 25 f2     BCS    $98A1
98af: 39        RTS
