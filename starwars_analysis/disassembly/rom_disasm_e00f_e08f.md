e00f: 53     COMB
e010: 20 4e  BRA    $E060
e012: 45     LSRA
e013: 58     ASLB
e014: 54     LSRB
e015: 20 54  BRA    $E06B
e017: 4f     CLRA
e018: 57     ASRB
e019: 45     LSRA
e01a: d2 54  SBCB   <$54
e01c: 4f     CLRA
e01d: 57     ASRB
e01e: 45     LSRA
e01f: 52     XNCB
e020: d3 43  ADDD   <$43
e022: 4c     INCA
e023: 45     LSRA
e024: 41     NEGA
e025: 52     XNCB
e026: 45     LSRA
e027: 44     LSRA
e028: 20 41  BRA    $E06B
e02a: 4c     INCA
e02b: 4c     INCA
e02c: 20 4c  BRA    $E07A
e02e: 41     NEGA
e02f: 53     COMB
e030: 45     LSRA
e031: 52     XNCB
e032: 20 54  BRA    $E088
e034: 4f     CLRA
e035: 57     ASRB
e036: 45     LSRA
e037: 52     XNCB
e038: d3 35  ADDD   <$35
e03a: 30 2c  LEAX   $C,Y
e03c: 30 30  LEAX   -$10,Y
e03e: 30 20  LEAX   $0,Y
e040: 46     RORA
e041: 4f     CLRA
e042: 52     XNCB
e043: 20 53  BRA    $E098
e045: 48     ASLA
e046: 4f     CLRA
e047: 4f     CLRA
e048: 54     LSRB
e049: 49     ROLA
e04a: 4e     XCLRA
e04b: 47     ASRA
e04c: 20 41  BRA    $E08F
e04e: 4c     INCA
e04f: 4c     INCA
e050: 20 54  BRA    $E0A6
e052: 4f     CLRA
e053: 57     ASRB
e054: 45     LSRA
e055: 52     XNCB
e056: d3 45  ADDD   <$45
e058: 58     ASLB
e059: 48     ASLA
e05a: 41     NEGA
e05b: 55     LSRB
e05c: 53     COMB
e05d: 54     LSRB
e05e: 20 50  BRA    $E0B0
e060: 4f     CLRA
e061: 52     XNCB
e062: 54     LSRB
e063: 20 41  BRA    $E0A6
e065: 48     ASLA
e066: 45     LSRA
e067: 41     NEGA
e068: c4 44  ANDB   #$44
e06a: 45     LSRA
e06b: 41     NEGA
e06c: 54     LSRB
e06d: 48     ASLA
e06e: 20 53  BRA    $E0C3
e070: 54     LSRB
e071: 41     NEGA
e072: 52     XNCB
e073: 20 44  BRA    $E0B9
e075: 45     LSRA
e076: 53     COMB
e077: 54     LSRB
e078: 52     XNCB
e079: 4f     CLRA
e07a: 59     ROLB
e07b: 45     LSRA
e07c: c4 45  ANDB   #$45
e07e: 58     ASLB
e07f: 48     ASLA
e080: 41     NEGA
e081: 55     LSRB
e082: 53     COMB
e083: 54     LSRB
e084: 20 50  BRA    $E0D6
e086: 4f     CLRA
e087: 52     XNCB
e088: 54     LSRB
e089: 20 4d  BRA    $E0D8
e08b: 49     ROLA
e08c: 53     COMB
e08d: 53     COMB
e08e: 45     LSRA
e08f: 7e e08f     JMP    $e08f
