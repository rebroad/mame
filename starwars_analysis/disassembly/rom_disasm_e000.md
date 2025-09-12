e000: 45     LSRA
e001: 42     XNCA
e002: 45     LSRA
e003: 4c     INCA
e004: 20 46  BRA    $004C
e006: 4f     CLRA
e007: 52     XNCB
e008: 43     COMA
e009: c5 50  BITB   #$50
e00b: 4f     CLRA
e00c: 49     ROLA
e00d: 4e     XCLRA
e00e: 54     LSRB
e00f: 53     COMB
e010: 20 4e  BRA    $0060
e012: 45     LSRA
e013: 58     ASLB
e014: 54     LSRB
e015: 20 54  BRA    $006B
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
e028: 20 41  BRA    $006B
e02a: 4c     INCA
e02b: 4c     INCA
e02c: 20 4c  BRA    $007A
e02e: 41     NEGA
e02f: 53     COMB
e030: 45     LSRA
e031: 52     XNCB
e032: 20 54  BRA    $0088
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
e043: 20 53  BRA    $0098
e045: 48     ASLA
e046: 4f     CLRA
e047: 4f     CLRA
e048: 54     LSRB
e049: 49     ROLA
e04a: 4e     XCLRA
e04b: 47     ASRA
e04c: 20 41  BRA    $008F
e04e: 4c     INCA
e04f: 4c     INCA
e050: 20 54  BRA    $00A6
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
e05e: 20 50  BRA    $00B0
e060: 4f     CLRA
e061: 52     XNCB
e062: 54     LSRB
e063: 20 41  BRA    $00A6
e065: 48     ASLA
e066: 45     LSRA
e067: 41     NEGA
e068: c4 44  ANDB   #$44
e06a: 45     LSRA
e06b: 41     NEGA
e06c: 54     LSRB
e06d: 48     ASLA
e06e: 20 53  BRA    $00C3
e070: 54     LSRB
e071: 41     NEGA
e072: 52     XNCB
e073: 20 44  BRA    $00B9
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
e084: 20 50  BRA    $00D6
e086: 4f     CLRA
e087: 52     XNCB
e088: 54     LSRB
e089: 20 4d  BRA    $00D8
e08b: 49     ROLA
e08c: 53     COMB
e08d: 53     COMB
e08e: 45     LSRA
e08f: c4 42  ANDB   #$42
e091: 4f     CLRA
e092: 4e     XCLRA
e093: 55     LSRB
e094: 53     COMB
e095: 20 46  BRA    $00DD
e097: 4f     CLRA
e098: 52     XNCB
e099: 20 52  BRA    $00ED
e09b: 45     LSRA
e09c: 4d     TSTA
e09d: 41     NEGA
e09e: 49     ROLA
e09f: 4e     XCLRA
e0a0: 49     ROLA
e0a1: 4e     XCLRA
e0a2: 47     ASRA
e0a3: 20 45  BRA    $00EA
e0a5: 4e     XCLRA
e0a6: 45     LSRA
e0a7: 52     XNCB
e0a8: 47     ASRA
e0a9: d9 35  ADCB   <$35
e0ab: 2c 30  BGE    $00DD
e0ad: 30 30  LEAX   -$10,Y
e0af: 20 20  BRA    $00D1
e0b1: d8 41  EORB   <$41
e0b3: 44     LSRA
e0b4: 44     LSRA
e0b5: 45     LSRA
e0b6: 44     LSRA
e0b7: 20 54  BRA    $010D
e0b9: 4f     CLRA
e0ba: 20 44  BRA    $0100
e0bc: 45     LSRA
e0bd: 46     RORA
e0be: 4c     INCA
e0bf: 45     LSRA
e0c0: 43     COMA
e0c1: 54     LSRB
e0c2: 4f     CLRA
e0c3: 52     XNCB
e0c4: 20 53  BRA    $0119
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
e0d1: 20 41  BRA    $0114
e0d3: 54     LSRB
e0d4: 20 46  BRA    $011C
e0d6: 55     LSRB
e0d7: 4c     INCA
e0d8: 4c     INCA
e0d9: 20 53  BRA    $012E
e0db: 54     LSRB
e0dc: 52     XNCB
e0dd: 45     LSRA
e0de: 4e     XCLRA
e0df: 47     ASRA
e0e0: 54     LSRB
e0e1: c8 53  EORB   #$53
e0e3: 54     LSRB
e0e4: 41     NEGA
e0e5: 52     XNCB
e0e6: 54     LSRB
e0e7: 49     ROLA
e0e8: 4e     XCLRA
e0e9: 47     ASRA
e0ea: 20 57  BRA    $0143
e0ec: 41     NEGA
e0ed: 56     RORB
e0ee: 45     LSRA
e0ef: 20 42  BRA    $0133
e0f1: 4f     CLRA
e0f2: 4e     XCLRA
e0f3: 55     LSRB
e0f4: d3 53  ADDD   <$53
e0f6: 48     ASLA
e0f7: 4f     CLRA
e0f8: 4f     CLRA
e0f9: 54     LSRB
e0fa: 20 46  BRA    $0142
e0fc: 49     ROLA
e0fd: 52     XNCB
e0fe: 45     LSRA
e0ff: 42     XNCA
e100: 41     NEGA
e101: 4c     INCA
e102: 4c     INCA
e103: d3 53  ADDD   <$53
e105: 48     ASLA
e106: 4f     CLRA
e107: 4f     CLRA
e108: 54     LSRB
e109: 20 54  BRA    $015F
e10b: 49     ROLA
e10c: 45     LSRA
e10d: 20 46  BRA    $0155
e10f: 49     ROLA
e110: 47     ASRA
e111: 48     ASLA
e112: 54     LSRB
e113: 45     LSRA
e114: 52     XNCB
e115: d3 41  ADDD   <$41
e117: 56     RORB
e118: 4f     CLRA
e119: 49     ROLA
e11a: 44     LSRA
e11b: 20 43  BRA    $0160
e11d: 41     NEGA
e11e: 54     LSRB
e11f: 57     ASRB
e120: 41     NEGA
e121: 4c     INCA
e122: 4b     XDECA
e123: d3 55  ADDD   <$55
e125: 53     COMB
e126: 45     LSRA
e127: 20 54  BRA    $017D
e129: 48     ASLA
e12a: 45     LSRA
e12b: 20 46  BRA    $0173
e12d: 4f     CLRA
e12e: 52     XNCB
e12f: 43     COMA
e130: c5 20  BITB   #$20
e132: 46     RORA
e133: 4f     CLRA
e134: 52     XNCB
e135: 20 55  BRA    $018C
e137: 53     COMB
e138: 49     ROLA
e139: 4e     XCLRA
e13a: 47     ASRA
e13b: 20 54  BRA    $0191
e13d: 48     ASLA
e13e: 45     LSRA
e13f: 20 46  BRA    $0187
e141: 4f     CLRA
e142: 52     XNCB
e143: 43     COMA
e144: c5 4f  BITB   #$4F
e146: 42     XNCA
e147: 49     ROLA
e148: 2d 57  BLT    $01A1
e14a: 41     NEGA
e14b: 4e     XCLRA
e14c: 20 4b  BRA    $0199
e14e: 45     LSRA
e14f: 4e     XCLRA
e150: 4f     CLRA
e151: 42     XNCA
e152: 49     ROLA
e153: 20 49  BRA    $019E
e155: 53     COMB
e156: 20 47  BRA    $019F
e158: 4f     CLRA
e159: 4e     XCLRA
e15a: 45     LSRA
e15b: 20 42  BRA    $019F
e15d: 55     LSRB
e15e: 54     LSRB
e15f: 20 48  BRA    $01A9
e161: 49     ROLA
e162: d3 50  ADDD   <$50
e164: 52     XNCB
e165: 45     LSRA
e166: 53     COMB
e167: 45     LSRA
e168: 4e     XCLRA
e169: 43     COMA
e16a: 45     LSRA
e16b: 20 49  BRA    $01B6
e16d: 53     COMB
e16e: 20 46  BRA    $01B6
e170: 45     LSRA
e171: 4c     INCA
e172: 54     LSRB
e173: 20 57  BRA    $01CC
e175: 49     ROLA
e176: 54     LSRB
e177: 48     ASLA
e178: 49     ROLA
e179: 4e     XCLRA
e17a: 20 54  BRA    $01D0
e17c: 48     ASLA
e17d: 45     LSRA
e17e: 20 46  BRA    $01C6
e180: 4f     CLRA
e181: 52     XNCB
e182: 43     COMA
e183: 45     LSRA
e184: ae 54  LDX    -$C,U
e186: 48     ASLA
e187: 45     LSRA
e188: 20 45  BRA    $01CF
e18a: 4d     TSTA
e18b: 50     NEGB
e18c: 49     ROLA
e18d: 52     XNCB
e18e: 45     LSRA
e18f: 27 53  BEQ    $01E4
e191: 20 44  BRA    $01D7
e193: 45     LSRA
e194: 41     NEGA
e195: 54     LSRB
e196: 48     ASLA
e197: 20 53  BRA    $01EC
e199: 54     LSRB
e19a: 41     NEGA
e19b: 52     XNCB
e19c: 2c 20  BGE    $01BE
e19e: 55     LSRB
e19f: 4e     XCLRA
e1a0: 44     LSRA
e1a1: 45     LSRA
e1a2: 52     XNCB
e1a3: 20 54  BRA    $01F9
e1a5: 48     ASLA
e1a6: c5 43  BITB   #$43
e1a8: 4f     CLRA
e1a9: 4d     TSTA
e1aa: 4d     TSTA
e1ab: 41     NEGA
e1ac: 4e     XCLRA
e1ad: 44     LSRA
e1ae: 20 4f  BRA    $01FF
e1b0: 46     RORA
e1b1: 20 44  BRA    $01F7
e1b3: 41     NEGA
e1b4: 52     XNCB
e1b5: 54     LSRB
e1b6: 48     ASLA
e1b7: 20 56  BRA    $020F
e1b9: 41     NEGA
e1ba: 44     LSRA
e1bb: 45     LSRA
e1bc: 52     XNCB
e1bd: 2c 20  BGE    $01DF
e1bf: 4e     XCLRA
e1c0: 45     LSRA
e1c1: 41     NEGA
e1c2: 52     XNCB
e1c3: 53     COMB
e1c4: 20 54  BRA    $021A
e1c6: 48     ASLA
e1c7: c5 52  BITB   #$52
e1c9: 45     LSRA
e1ca: 42     XNCA
e1cb: 45     LSRA
e1cc: 4c     INCA
e1cd: 20 50  BRA    $021F
e1cf: 4c     INCA
e1d0: 41     NEGA
e1d1: 4e     XCLRA
e1d2: 45     LSRA
e1d3: 54     LSRB
e1d4: 2e 20  BGT    $01F6
e1d6: 20 59  BRA    $0231
e1d8: 4f     CLRA
e1d9: 55     LSRB
e1da: 20 4d  BRA    $0229
e1dc: 55     LSRB
e1dd: 53     COMB
e1de: 54     LSRB
e1df: 20 4a  BRA    $022B
e1e1: 4f     CLRA
e1e2: 49     ROLA
e1e3: 4e     XCLRA
e1e4: 20 54  BRA    $023A
e1e6: 48     ASLA
e1e7: c5 52  BITB   #$52
e1e9: 45     LSRA
e1ea: 42     XNCA
e1eb: 45     LSRA
e1ec: 4c     INCA
e1ed: 4c     INCA
e1ee: 49     ROLA
e1ef: 4f     CLRA
e1f0: 4e     XCLRA
e1f1: 20 54  BRA    $0247
e1f3: 4f     CLRA
e1f4: 20 53  BRA    $0249
e1f6: 54     LSRB
e1f7: 4f     CLRA
e1f8: 50     NEGB
e1f9: 20 54  BRA    $024F
e1fb: 48     ASLA
e1fc: 45     LSRA
e1fd: 20 45  BRA    $0244
e1ff: 4d     TSTA
