623c: 20 0d     BRA    $624B
623e: c1 60     CMPB   #$60
6240: 2d 09     BLT    $624B
6242: 86 0c     LDA    #$0C
6244: 91 41     CMPA   <$41
6246: 27 03     BEQ    $624B
6248: 4a        DECA
6249: 97 41     STA    <$41
624b: 7e 624b     JMP    $624b
