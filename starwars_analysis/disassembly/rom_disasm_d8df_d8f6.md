d8df: 8e 4a 52  LDX    #$4A52
d8e2: bc 4a d9  CMPX   $4AD9
d8e5: 24 0a     BCC    $D8F1
d8e7: a1 80     CMPA   ,X+
d8e9: 26 01     BNE    $D8EC
d8eb: 39        RTS
d8ec: bc 4a d9  CMPX   $4AD9
d8ef: 25 f6     BCS    $D8E7
d8f1: a7 80     STA    ,X+
d8f3: bf 4a d9  STX    $4AD9
d8f6: 39        RTS
