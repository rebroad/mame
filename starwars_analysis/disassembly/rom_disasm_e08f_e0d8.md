e08f: c4 42  ANDB   #$42
e091: 4f     CLRA
e092: 4e     XCLRA
e093: 55     LSRB
e094: 53     COMB
e095: 20 46  BRA    $E0DD
e097: 4f     CLRA
e098: 52     XNCB
e099: 20 52  BRA    $E0ED
e09b: 45     LSRA
e09c: 4d     TSTA
e09d: 41     NEGA
e09e: 49     ROLA
e09f: 4e     XCLRA
e0a0: 49     ROLA
e0a1: 4e     XCLRA
e0a2: 47     ASRA
e0a3: 20 45  BRA    $E0EA
e0a5: 4e     XCLRA
e0a6: 45     LSRA
e0a7: 52     XNCB
e0a8: 47     ASRA
e0a9: d9 35  ADCB   <$35
e0ab: 2c 30  BGE    $E0DD
e0ad: 30 30  LEAX   -$10,Y
e0af: 20 20  BRA    $E0D1
e0b1: d8 41  EORB   <$41
e0b3: 44     LSRA
e0b4: 44     LSRA
e0b5: 45     LSRA
e0b6: 44     LSRA
e0b7: 20 54  BRA    $E10D
e0b9: 4f     CLRA
e0ba: 20 44  BRA    $E100
e0bc: 45     LSRA
e0bd: 46     RORA
e0be: 4c     INCA
e0bf: 45     LSRA
e0c0: 43     COMA
e0c1: 54     LSRB
e0c2: 4f     CLRA
e0c3: 52     XNCB
e0c4: 20 53  BRA    $E119
e0c6: 48     ASLA
e0c7: 49     ROLA
e0c8: 45     LSRA
e0c9: 4c     INCA
e0ca: c4 53  ANDB   #$53
e0cc: 48     ASLA
e0cd: 49     ROLA
e0ce: 45     LSRA
e0cf: 4c     INCA
e0d0: 44     LSRA
e0d1: 20 41  BRA    $E114
e0d3: 54     LSRB
e0d4: 20 46  BRA    $E11C
e0d6: 55     LSRB
e0d7: 4c     INCA
e0d8: 7e e0d8     JMP    $e0d8
