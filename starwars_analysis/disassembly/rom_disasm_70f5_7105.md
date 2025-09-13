70f5: c6 80  LDB    #$80
70f7: 3d     MUL
70f8: 12     NOP
70f9: 12     NOP
70fa: 12     NOP
70fb: e6 07  LDB    $7,X
70fd: 2b 08  BMI    $7107
70ff: ab 08  ADDA   $8,X
7101: 28 02  BVC    $7105
7103: 86 7f  LDA    #$7F
7105: 7e 7105     JMP    $7105
