add4: cc 00 0f  LDD    #$000F
add7: fd 47 01  STD    $4701
adda: 86 67     LDA    #$67
addc: bd cd ba  JSR    $CDBA
addf: fc 50 00  LDD    $5000
ade2: 83 e0 00  SUBD   #$E000
ade5: 2e 04     BGT    $ADEB
ade7: 86 00     LDA    #$00
ade9: 97 45     STA    <$45
adeb: 7e adeb     JMP    $adeb
