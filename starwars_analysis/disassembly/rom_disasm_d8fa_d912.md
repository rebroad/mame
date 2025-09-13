d8fa: a1 84        CMPA   ,X
d8fc: 26 14        BNE    $D912
d8fe: fe 4a d9     LDU    $4AD9
d901: 11 83 4a 52  CMPU   #$4A52
d905: 23 0b        BLS    $D912
d907: 33 5f        LEAU   -$1,U
d909: a6 c4        LDA    ,U
d90b: a7 84        STA    ,X
d90d: ff 4a d9     STU    $4AD9
d910: 30 c4        LEAX   ,U
d912: 7e d912     JMP    $d912
