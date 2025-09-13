df47: 54           LSRB
df48: 41           NEGA
df49: d2 43        SBCB   <$43
df4b: 4f           CLRA
df4c: 55           LSRB
df4d: 4e           XCLRA
df4e: 54           LSRB
df4f: 44           LSRA
df50: 4f           CLRA
df51: 57           ASRB
df52: ce 45 41     LDU    #$4541
df55: 53           COMB
df56: d9 4d        ADCB   <$4D
df58: 45           LSRA
df59: 44           LSRA
df5a: 49           ROLA
df5b: 55           LSRB
df5c: cd           XHCF
df5d: 48           ASLA
df5e: 41           NEGA
df5f: 52           XNCB
df60: c4 57        ANDB   #$57
df62: 41           NEGA
df63: 56           RORB
df64: 45           LSRA
df65: 20 b1        BRA    $DF18
df67: 57           ASRB
df68: 41           NEGA
df69: 56           RORB
df6a: 45           LSRA
df6b: 20 b3        BRA    $DF20
df6d: 57           ASRB
df6e: 41           NEGA
df6f: 56           RORB
df70: 45           LSRA
df71: 20 b5        BRA    $DF28
df73: 42           XNCA
df74: 4f           CLRA
df75: 4e           XCLRA
df76: 55           LSRB
df77: d3 4e        ADDD   <$4E
df79: 4f           CLRA
df7a: 20 42        BRA    $DFBE
df7c: 4f           CLRA
df7d: 4e           XCLRA
df7e: 55           LSRB
df7f: d3 34        ADDD   <$34
df81: 30 30        LEAX   -$10,Y
df83: 2c 30        BGE    $DFB5
df85: 30 b0 38 30  LEAX   [$3830,W]
df89: 30 2c        LEAX   $C,Y
df8b: 30 30        LEAX   -$10,Y
df8d: b0 4d 45     SUBA   $4D45
df90: 53           COMB
df91: 53           COMB
df92: 41           NEGA
df93: 47           ASRA
df94: 45           LSRA
df95: 20 46        BRA    $DFDD
df97: 52           XNCB
df98: 4f           CLRA
df99: 4d           TSTA
df9a: 20 52        BRA    $DFEE
df9c: 45           LSRA
df9d: 42           XNCA
df9e: 45           LSRA
df9f: 4c           INCA
dfa0: 20 43        BRA    $DFE5
dfa2: 4f           CLRA
dfa3: 4d           TSTA
dfa4: 4d           TSTA
dfa5: 41           NEGA
dfa6: 4e           XCLRA
dfa7: 44           LSRA
dfa8: 20 50        BRA    $DFFA
dfaa: 4f           CLRA
dfab: 53           COMB
dfac: d4 59        ANDB   <$59
dfae: 4f           CLRA
dfaf: 55           LSRB
dfb0: 20 41        BRA    $DFF3
dfb2: 52           XNCB
dfb3: 45           LSRA
dfb4: 20 41        BRA    $DFF7
dfb6: 20 54        BRA    $E00C
dfb8: 52           XNCB
dfb9: 55           LSRB
dfba: 45           LSRA
dfbb: 20 52        BRA    $E00F
dfbd: 45           LSRA
dfbe: 42           XNCA
dfbf: 45           LSRA
dfc0: 4c           INCA
dfc1: 20 50        BRA    $E013
dfc3: 49           ROLA
dfc4: 4c           INCA
dfc5: 4f           CLRA
dfc6: d4 54        ANDB   <$54
dfc8: 48           ASLA
dfc9: 45           LSRA
dfca: 20 46        BRA    $E012
dfcc: 4f           CLRA
dfcd: 52           XNCB
dfce: 43           COMA
dfcf: 45           LSRA
dfd0: 20 49        BRA    $E01B
dfd2: 53           COMB
dfd3: 20 57        BRA    $E02C
dfd5: 49           ROLA
dfd6: 54           LSRB
dfd7: 48           ASLA
dfd8: 20 59        BRA    $E033
dfda: 4f           CLRA
dfdb: d5 53        BITB   <$53
dfdd: 48           ASLA
dfde: 4f           CLRA
dfdf: 4f           CLRA
dfe0: 54           LSRB
dfe1: 20 59        BRA    $E03C
dfe3: 4f           CLRA
dfe4: 55           LSRB
dfe5: 52           XNCB
dfe6: 20 49        BRA    $E031
dfe8: 4e           XCLRA
dfe9: 49           ROLA
dfea: 54           LSRB
dfeb: 49           ROLA
dfec: 41           NEGA
dfed: 4c           INCA
dfee: d3 50        ADDD   <$50
dff0: 52           XNCB
dff1: 49           ROLA
dff2: 4e           XCLRA
dff3: 43           COMA
dff4: 45           LSRA
dff5: 53           COMB
dff6: 53           COMB
dff7: 20 4c        BRA    $E045
dff9: 45           LSRA
dffa: 49           ROLA
dffb: 41           NEGA
dffc: 27 53        BEQ    $E051
dffe: 20 52        BRA    $E052
e000: 45           LSRA
e001: 42           XNCA
e002: 45           LSRA
e003: 4c           INCA
e004: 20 46        BRA    $E04C
e006: 4f           CLRA
e007: 52           XNCB
e008: 43           COMA
e009: c5 50        BITB   #$50
e00b: 4f           CLRA
e00c: 49           ROLA
e00d: 4e           XCLRA
e00e: 54           LSRB
e00f: 53           COMB
e010: 20 4e        BRA    $E060
e012: 45           LSRA
e013: 58           ASLB
e014: 54           LSRB
e015: 20 54        BRA    $E06B
e017: 4f           CLRA
e018: 57           ASRB
e019: 45           LSRA
e01a: d2 54        SBCB   <$54
e01c: 4f           CLRA
e01d: 57           ASRB
e01e: 45           LSRA
e01f: 52           XNCB
e020: d3 43        ADDD   <$43
e022: 4c           INCA
e023: 45           LSRA
e024: 41           NEGA
e025: 52           XNCB
e026: 45           LSRA
e027: 44           LSRA
e028: 20 41        BRA    $E06B
e02a: 4c           INCA
e02b: 4c           INCA
e02c: 20 4c        BRA    $E07A
e02e: 41           NEGA
e02f: 53           COMB
e030: 45           LSRA
e031: 52           XNCB
e032: 20 54        BRA    $E088
e034: 4f           CLRA
e035: 57           ASRB
e036: 45           LSRA
e037: 52           XNCB
e038: d3 35        ADDD   <$35
e03a: 30 2c        LEAX   $C,Y
e03c: 30 30        LEAX   -$10,Y
e03e: 30 20        LEAX   $0,Y
e040: 46           RORA
e041: 4f           CLRA
e042: 52           XNCB
e043: 20 53        BRA    $E098
e045: 48           ASLA
e046: 4f           CLRA
e047: 4f           CLRA
e048: 54           LSRB
e049: 49           ROLA
e04a: 4e           XCLRA
e04b: 47           ASRA
e04c: 20 41        BRA    $E08F
e04e: 4c           INCA
e04f: 4c           INCA
e050: 20 54        BRA    $E0A6
e052: 4f           CLRA
e053: 57           ASRB
e054: 45           LSRA
e055: 52           XNCB
e056: d3 45        ADDD   <$45
e058: 58           ASLB
e059: 48           ASLA
e05a: 41           NEGA
e05b: 55           LSRB
e05c: 53           COMB
e05d: 54           LSRB
e05e: 20 50        BRA    $E0B0
e060: 4f           CLRA
e061: 52           XNCB
e062: 54           LSRB
e063: 20 41        BRA    $E0A6
e065: 48           ASLA
e066: 45           LSRA
e067: 41           NEGA
e068: c4 44        ANDB   #$44
e06a: 45           LSRA
e06b: 41           NEGA
e06c: 54           LSRB
e06d: 48           ASLA
e06e: 20 53        BRA    $E0C3
e070: 54           LSRB
e071: 41           NEGA
e072: 52           XNCB
e073: 20 44        BRA    $E0B9
e075: 45           LSRA
e076: 53           COMB
e077: 54           LSRB
e078: 52           XNCB
e079: 4f           CLRA
e07a: 59           ROLB
e07b: 45           LSRA
e07c: c4 45        ANDB   #$45
e07e: 58           ASLB
e07f: 48           ASLA
e080: 41           NEGA
e081: 55           LSRB
e082: 53           COMB
e083: 54           LSRB
e084: 20 50        BRA    $E0D6
e086: 4f           CLRA
e087: 52           XNCB
e088: 54           LSRB
e089: 20 4d        BRA    $E0D8
e08b: 49           ROLA
e08c: 53           COMB
e08d: 53           COMB
e08e: 45           LSRA
e08f: c4 42        ANDB   #$42
e091: 4f           CLRA
e092: 4e           XCLRA
e093: 55           LSRB
e094: 53           COMB
e095: 20 46        BRA    $E0DD
e097: 4f           CLRA
e098: 52           XNCB
e099: 20 52        BRA    $E0ED
e09b: 45           LSRA
e09c: 4d           TSTA
e09d: 41           NEGA
e09e: 49           ROLA
e09f: 4e           XCLRA
e0a0: 49           ROLA
e0a1: 4e           XCLRA
e0a2: 47           ASRA
e0a3: 20 45        BRA    $E0EA
e0a5: 4e           XCLRA
e0a6: 45           LSRA
e0a7: 52           XNCB
e0a8: 47           ASRA
e0a9: d9 35        ADCB   <$35
e0ab: 2c 30        BGE    $E0DD
e0ad: 30 30        LEAX   -$10,Y
e0af: 20 20        BRA    $E0D1
e0b1: d8 41        EORB   <$41
e0b3: 44           LSRA
e0b4: 44           LSRA
e0b5: 45           LSRA
e0b6: 44           LSRA
e0b7: 20 54        BRA    $E10D
e0b9: 4f           CLRA
e0ba: 20 44        BRA    $E100
e0bc: 45           LSRA
e0bd: 46           RORA
e0be: 4c           INCA
e0bf: 45           LSRA
e0c0: 43           COMA
e0c1: 54           LSRB
e0c2: 4f           CLRA
e0c3: 52           XNCB
e0c4: 20 53        BRA    $E119
e0c6: 48           ASLA
e0c7: 49           ROLA
e0c8: 45           LSRA
e0c9: 4c           INCA
e0ca: c4 53        ANDB   #$53
e0cc: 48           ASLA
e0cd: 49           ROLA
e0ce: 45           LSRA
e0cf: 4c           INCA
e0d0: 44           LSRA
e0d1: 20 41        BRA    $E114
e0d3: 54           LSRB
e0d4: 20 46        BRA    $E11C
e0d6: 55           LSRB
e0d7: 4c           INCA
e0d8: 4c           INCA
e0d9: 20 53        BRA    $E12E
e0db: 54           LSRB
e0dc: 52           XNCB
e0dd: 45           LSRA
e0de: 4e           XCLRA
e0df: 47           ASRA
e0e0: 54           LSRB
e0e1: c8 53        EORB   #$53
e0e3: 54           LSRB
e0e4: 41           NEGA
e0e5: 52           XNCB
e0e6: 54           LSRB
e0e7: 49           ROLA
e0e8: 4e           XCLRA
e0e9: 47           ASRA
e0ea: 20 57        BRA    $E143
e0ec: 41           NEGA
e0ed: 56           RORB
e0ee: 45           LSRA
e0ef: 20 42        BRA    $E133
e0f1: 4f           CLRA
e0f2: 4e           XCLRA
e0f3: 55           LSRB
e0f4: d3 53        ADDD   <$53
e0f6: 48           ASLA
e0f7: 4f           CLRA
e0f8: 4f           CLRA
e0f9: 54           LSRB
e0fa: 20 46        BRA    $E142
e0fc: 49           ROLA
e0fd: 52           XNCB
e0fe: 45           LSRA
e0ff: 42           XNCA
e100: 41           NEGA
e101: 4c           INCA
e102: 4c           INCA
e103: d3 53        ADDD   <$53
e105: 48           ASLA
e106: 4f           CLRA
e107: 4f           CLRA
e108: 54           LSRB
e109: 20 54        BRA    $E15F
e10b: 49           ROLA
e10c: 45           LSRA
e10d: 20 46        BRA    $E155
e10f: 49           ROLA
e110: 47           ASRA
e111: 48           ASLA
e112: 54           LSRB
e113: 45           LSRA
e114: 52           XNCB
e115: d3 41        ADDD   <$41
e117: 56           RORB
e118: 4f           CLRA
e119: 49           ROLA
e11a: 44           LSRA
e11b: 20 43        BRA    $E160
e11d: 41           NEGA
e11e: 54           LSRB
e11f: 57           ASRB
e120: 41           NEGA
e121: 4c           INCA
e122: 4b           XDECA
e123: d3 55        ADDD   <$55
e125: 53           COMB
e126: 45           LSRA
e127: 20 54        BRA    $E17D
e129: 48           ASLA
e12a: 45           LSRA
e12b: 20 46        BRA    $E173
e12d: 4f           CLRA
e12e: 52           XNCB
e12f: 43           COMA
e130: c5 20        BITB   #$20
e132: 46           RORA
e133: 4f           CLRA
e134: 52           XNCB
e135: 20 55        BRA    $E18C
e137: 53           COMB
e138: 49           ROLA
e139: 4e           XCLRA
e13a: 47           ASRA
e13b: 20 54        BRA    $E191
e13d: 48           ASLA
e13e: 45           LSRA
e13f: 20 46        BRA    $E187
e141: 4f           CLRA
e142: 52           XNCB
e143: 43           COMA
e144: c5 4f        BITB   #$4F
e146: 42           XNCA
