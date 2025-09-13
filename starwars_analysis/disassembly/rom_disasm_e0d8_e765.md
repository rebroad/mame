e0d8: 4c        INCA
e0d9: 20 53     BRA    $E12E
e0db: 54        LSRB
e0dc: 52        XNCB
e0dd: 45        LSRA
e0de: 4e        XCLRA
e0df: 47        ASRA
e0e0: 54        LSRB
e0e1: c8 53     EORB   #$53
e0e3: 54        LSRB
e0e4: 41        NEGA
e0e5: 52        XNCB
e0e6: 54        LSRB
e0e7: 49        ROLA
e0e8: 4e        XCLRA
e0e9: 47        ASRA
e0ea: 20 57     BRA    $E143
e0ec: 41        NEGA
e0ed: 56        RORB
e0ee: 45        LSRA
e0ef: 20 42     BRA    $E133
e0f1: 4f        CLRA
e0f2: 4e        XCLRA
e0f3: 55        LSRB
e0f4: d3 53     ADDD   <$53
e0f6: 48        ASLA
e0f7: 4f        CLRA
e0f8: 4f        CLRA
e0f9: 54        LSRB
e0fa: 20 46     BRA    $E142
e0fc: 49        ROLA
e0fd: 52        XNCB
e0fe: 45        LSRA
e0ff: 42        XNCA
e100: 41        NEGA
e101: 4c        INCA
e102: 4c        INCA
e103: d3 53     ADDD   <$53
e105: 48        ASLA
e106: 4f        CLRA
e107: 4f        CLRA
e108: 54        LSRB
e109: 20 54     BRA    $E15F
e10b: 49        ROLA
e10c: 45        LSRA
e10d: 20 46     BRA    $E155
e10f: 49        ROLA
e110: 47        ASRA
e111: 48        ASLA
e112: 54        LSRB
e113: 45        LSRA
e114: 52        XNCB
e115: d3 41     ADDD   <$41
e117: 56        RORB
e118: 4f        CLRA
e119: 49        ROLA
e11a: 44        LSRA
e11b: 20 43     BRA    $E160
e11d: 41        NEGA
e11e: 54        LSRB
e11f: 57        ASRB
e120: 41        NEGA
e121: 4c        INCA
e122: 4b        XDECA
e123: d3 55     ADDD   <$55
e125: 53        COMB
e126: 45        LSRA
e127: 20 54     BRA    $E17D
e129: 48        ASLA
e12a: 45        LSRA
e12b: 20 46     BRA    $E173
e12d: 4f        CLRA
e12e: 52        XNCB
e12f: 43        COMA
e130: c5 20     BITB   #$20
e132: 46        RORA
e133: 4f        CLRA
e134: 52        XNCB
e135: 20 55     BRA    $E18C
e137: 53        COMB
e138: 49        ROLA
e139: 4e        XCLRA
e13a: 47        ASRA
e13b: 20 54     BRA    $E191
e13d: 48        ASLA
e13e: 45        LSRA
e13f: 20 46     BRA    $E187
e141: 4f        CLRA
e142: 52        XNCB
e143: 43        COMA
e144: c5 4f     BITB   #$4F
e146: 42        XNCA
e147: 49        ROLA
e148: 2d 57     BLT    $E1A1
e14a: 41        NEGA
e14b: 4e        XCLRA
e14c: 20 4b     BRA    $E199
e14e: 45        LSRA
e14f: 4e        XCLRA
e150: 4f        CLRA
e151: 42        XNCA
e152: 49        ROLA
e153: 20 49     BRA    $E19E
e155: 53        COMB
e156: 20 47     BRA    $E19F
e158: 4f        CLRA
e159: 4e        XCLRA
e15a: 45        LSRA
e15b: 20 42     BRA    $E19F
e15d: 55        LSRB
e15e: 54        LSRB
e15f: 20 48     BRA    $E1A9
e161: 49        ROLA
e162: d3 50     ADDD   <$50
e164: 52        XNCB
e165: 45        LSRA
e166: 53        COMB
e167: 45        LSRA
e168: 4e        XCLRA
e169: 43        COMA
e16a: 45        LSRA
e16b: 20 49     BRA    $E1B6
e16d: 53        COMB
e16e: 20 46     BRA    $E1B6
e170: 45        LSRA
e171: 4c        INCA
e172: 54        LSRB
e173: 20 57     BRA    $E1CC
e175: 49        ROLA
e176: 54        LSRB
e177: 48        ASLA
e178: 49        ROLA
e179: 4e        XCLRA
e17a: 20 54     BRA    $E1D0
e17c: 48        ASLA
e17d: 45        LSRA
e17e: 20 46     BRA    $E1C6
e180: 4f        CLRA
e181: 52        XNCB
e182: 43        COMA
e183: 45        LSRA
e184: ae 54     LDX    -$C,U
e186: 48        ASLA
e187: 45        LSRA
e188: 20 45     BRA    $E1CF
e18a: 4d        TSTA
e18b: 50        NEGB
e18c: 49        ROLA
e18d: 52        XNCB
e18e: 45        LSRA
e18f: 27 53     BEQ    $E1E4
e191: 20 44     BRA    $E1D7
e193: 45        LSRA
e194: 41        NEGA
e195: 54        LSRB
e196: 48        ASLA
e197: 20 53     BRA    $E1EC
e199: 54        LSRB
e19a: 41        NEGA
e19b: 52        XNCB
e19c: 2c 20     BGE    $E1BE
e19e: 55        LSRB
e19f: 4e        XCLRA
e1a0: 44        LSRA
e1a1: 45        LSRA
e1a2: 52        XNCB
e1a3: 20 54     BRA    $E1F9
e1a5: 48        ASLA
e1a6: c5 43     BITB   #$43
e1a8: 4f        CLRA
e1a9: 4d        TSTA
e1aa: 4d        TSTA
e1ab: 41        NEGA
e1ac: 4e        XCLRA
e1ad: 44        LSRA
e1ae: 20 4f     BRA    $E1FF
e1b0: 46        RORA
e1b1: 20 44     BRA    $E1F7
e1b3: 41        NEGA
e1b4: 52        XNCB
e1b5: 54        LSRB
e1b6: 48        ASLA
e1b7: 20 56     BRA    $E20F
e1b9: 41        NEGA
e1ba: 44        LSRA
e1bb: 45        LSRA
e1bc: 52        XNCB
e1bd: 2c 20     BGE    $E1DF
e1bf: 4e        XCLRA
e1c0: 45        LSRA
e1c1: 41        NEGA
e1c2: 52        XNCB
e1c3: 53        COMB
e1c4: 20 54     BRA    $E21A
e1c6: 48        ASLA
e1c7: c5 52     BITB   #$52
e1c9: 45        LSRA
e1ca: 42        XNCA
e1cb: 45        LSRA
e1cc: 4c        INCA
e1cd: 20 50     BRA    $E21F
e1cf: 4c        INCA
e1d0: 41        NEGA
e1d1: 4e        XCLRA
e1d2: 45        LSRA
e1d3: 54        LSRB
e1d4: 2e 20     BGT    $E1F6
e1d6: 20 59     BRA    $E231
e1d8: 4f        CLRA
e1d9: 55        LSRB
e1da: 20 4d     BRA    $E229
e1dc: 55        LSRB
e1dd: 53        COMB
e1de: 54        LSRB
e1df: 20 4a     BRA    $E22B
e1e1: 4f        CLRA
e1e2: 49        ROLA
e1e3: 4e        XCLRA
e1e4: 20 54     BRA    $E23A
e1e6: 48        ASLA
e1e7: c5 52     BITB   #$52
e1e9: 45        LSRA
e1ea: 42        XNCA
e1eb: 45        LSRA
e1ec: 4c        INCA
e1ed: 4c        INCA
e1ee: 49        ROLA
e1ef: 4f        CLRA
e1f0: 4e        XCLRA
e1f1: 20 54     BRA    $E247
e1f3: 4f        CLRA
e1f4: 20 53     BRA    $E249
e1f6: 54        LSRB
e1f7: 4f        CLRA
e1f8: 50        NEGB
e1f9: 20 54     BRA    $E24F
e1fb: 48        ASLA
e1fc: 45        LSRA
e1fd: 20 45     BRA    $E244
e1ff: 4d        TSTA
e200: 50        NEGB
e201: 49        ROLA
e202: 52        XNCB
e203: 45        LSRA
e204: ae 54     LDX    -$C,U
e206: 48        ASLA
e207: 45        LSRA
e208: 20 46     BRA    $E250
e20a: 4f        CLRA
e20b: 52        XNCB
e20c: 43        COMA
e20d: 45        LSRA
e20e: 20 57     BRA    $E267
e210: 49        ROLA
e211: 4c        INCA
e212: 4c        INCA
e213: 20 42     BRA    $E257
e215: 45        LSRA
e216: 20 57     BRA    $E26F
e218: 49        ROLA
e219: 54        LSRB
e21a: 48        ASLA
e21b: 20 59     BRA    $E276
e21d: 4f        CLRA
e21e: 55        LSRB
e21f: ae 41     LDX    $1,U
e221: 4c        INCA
e222: 57        ASRB
e223: 41        NEGA
e224: 59        ROLB
e225: d3 41     ADDD   <$41
e227: 43        COMA
e228: 43        COMA
e229: 4f        CLRA
e22a: 55        LSRB
e22b: 4e        XCLRA
e22c: 54        LSRB
e22d: 49        ROLA
e22e: 4e        XCLRA
e22f: 47        ASRA
e230: 20 49     BRA    $E27B
e232: 4e        XCLRA
e233: 46        RORA
e234: 4f        CLRA
e235: 52        XNCB
e236: 4d        TSTA
e237: 41        NEGA
e238: 54        LSRB
e239: 49        ROLA
e23a: 4f        CLRA
e23b: ce 41 55  LDU    #$4155
e23e: 58        ASLB
e23f: 20 43     BRA    $E284
e241: 4f        CLRA
e242: 49        ROLA
e243: 4e        XCLRA
e244: d3 4c     ADDD   <$4C
e246: 45        LSRA
e247: 46        RORA
e248: 54        LSRB
e249: 20 4d     BRA    $E298
e24b: 45        LSRA
e24c: 43        COMA
e24d: 48        ASLA
e24e: 20 43     BRA    $E293
e250: 4f        CLRA
e251: 49        ROLA
e252: 4e        XCLRA
e253: d3 52     ADDD   <$52
e255: 49        ROLA
e256: 47        ASRA
e257: 48        ASLA
e258: 54        LSRB
e259: 20 4d     BRA    $E2A8
e25b: 45        LSRA
e25c: 43        COMA
e25d: 48        ASLA
e25e: 20 43     BRA    $E2A3
e260: 4f        CLRA
e261: 49        ROLA
e262: 4e        XCLRA
e263: d3 54     ADDD   <$54
e265: 4f        CLRA
e266: 54        LSRB
e267: 41        NEGA
e268: 4c        INCA
e269: 20 43     BRA    $E2AE
e26b: 4f        CLRA
e26c: 49        ROLA
e26d: 4e        XCLRA
e26e: 53        COMB
e26f: 20 50     BRA    $E2C1
e271: 41        NEGA
e272: 49        ROLA
e273: c4 47     ANDB   #$47
e275: 41        NEGA
e276: 4d        TSTA
e277: 45        LSRA
e278: 53        COMB
e279: 20 50     BRA    $E2CB
e27b: 4c        INCA
e27c: 41        NEGA
e27d: 59        ROLB
e27e: 45        LSRA
e27f: c4 48     ANDB   #$48
e281: 49        ROLA
e282: 47        ASRA
e283: 48        ASLA
e284: 20 57     BRA    $E2DD
e286: 41        NEGA
e287: 56        RORB
e288: c5 54     BITB   #$54
e28a: 4f        CLRA
e28b: 54        LSRB
e28c: 41        NEGA
e28d: 4c        INCA
e28e: 20 47     BRA    $E2D7
e290: 41        NEGA
e291: 4d        TSTA
e292: 45        LSRA
e293: 20 54     BRA    $E2E9
e295: 49        ROLA
e296: 4d        TSTA
e297: 45        LSRA
e298: 20 20     BRA    $E2BA
e29a: 20 20     BRA    $E2BC
e29c: 20 20     BRA    $E2BE
e29e: 20 20     BRA    $E2C0
e2a0: 20 20     BRA    $E2C2
e2a2: 20 53     BRA    $E2F7
e2a4: 45        LSRA
e2a5: 43        COMA
e2a6: 4f        CLRA
e2a7: 4e        XCLRA
e2a8: 44        LSRA
e2a9: d3 41     ADDD   <$41
e2ab: 56        RORB
e2ac: 45        LSRA
e2ad: 52        XNCB
e2ae: 41        NEGA
e2af: 47        ASRA
e2b0: 45        LSRA
e2b1: 20 47     BRA    $E2FA
e2b3: 41        NEGA
e2b4: 4d        TSTA
e2b5: 45        LSRA
e2b6: 20 54     BRA    $E30C
e2b8: 49        ROLA
e2b9: 4d        TSTA
e2ba: c5 54     BITB   #$54
e2bc: 4f        CLRA
e2bd: 54        LSRB
e2be: 41        NEGA
e2bf: 4c        INCA
e2c0: 20 54     BRA    $E316
e2c2: 49        ROLA
e2c3: 4d        TSTA
e2c4: 45        LSRA
e2c5: 20 4f     BRA    $E316
e2c7: 4e        XCLRA
e2c8: 20 20     BRA    $E2EA
e2ca: 20 20     BRA    $E2EC
e2cc: 20 20     BRA    $E2EE
e2ce: 20 20     BRA    $E2F0
e2d0: 20 20     BRA    $E2F2
e2d2: 20 53     BRA    $E327
e2d4: 45        LSRA
e2d5: 43        COMA
e2d6: 4f        CLRA
e2d7: 4e        XCLRA
e2d8: 44        LSRA
e2d9: d3 50     ADDD   <$50
e2db: 45        LSRA
e2dc: 52        XNCB
e2dd: 43        COMA
e2de: 45        LSRA
e2df: 4e        XCLRA
e2e0: 54        LSRB
e2e1: 41        NEGA
e2e2: 47        ASRA
e2e3: 45        LSRA
e2e4: 20 4f     BRA    $E335
e2e6: 46        RORA
e2e7: 20 50     BRA    $E339
e2e9: 4c        INCA
e2ea: 41        NEGA
e2eb: 59        ROLB
e2ec: 20 20     BRA    $E30E
e2ee: 20 20     BRA    $E310
e2f0: 20 50     BRA    $E342
e2f2: 45        LSRA
e2f3: 52        XNCB
e2f4: 43        COMA
e2f5: 45        LSRA
e2f6: 4e        XCLRA
e2f7: d4 48     ANDB   <$48
e2f9: 49        ROLA
e2fa: 53        COMB
e2fb: 54        LSRB
e2fc: 4f        CLRA
e2fd: 52        XNCB
e2fe: 59        ROLB
e2ff: 20 4f     BRA    $E350
e301: 46        RORA
e302: 20 47     BRA    $E34B
e304: 41        NEGA
e305: 4d        TSTA
e306: 45        LSRA
e307: 20 54     BRA    $E35D
e309: 49        ROLA
e30a: 4d        TSTA
e30b: 45        LSRA
e30c: d3 47     ADDD   <$47
e30e: 41        NEGA
e30f: 4d        TSTA
e310: 45        LSRA
e311: 20 4f     BRA    $E362
e313: 50        NEGB
e314: 54        LSRB
e315: 49        ROLA
e316: 4f        CLRA
e317: 4e        XCLRA
e318: d3 56     ADDD   <$56
e31a: 41        NEGA
e31b: 4c        INCA
e31c: 55        LSRB
e31d: 45        LSRA
e31e: 20 4f     BRA    $E36F
e320: 46        RORA
e321: 20 41     BRA    $E364
e323: 20 43     BRA    $E368
e325: 4f        CLRA
e326: 49        ROLA
e327: ce 4c 45  LDU    #$4C45
e32a: 46        RORA
e32b: 54        LSRB
e32c: 20 4d     BRA    $E37B
e32e: 45        LSRA
e32f: 43        COMA
e330: 48        ASLA
e331: 20 56     BRA    $E389
e333: 41        NEGA
e334: 4c        INCA
e335: 55        LSRB
e336: c5 52     BITB   #$52
e338: 49        ROLA
e339: 47        ASRA
e33a: 48        ASLA
e33b: 54        LSRB
e33c: 20 4d     BRA    $E38B
e33e: 45        LSRA
e33f: 43        COMA
e340: 48        ASLA
e341: 20 56     BRA    $E399
e343: 41        NEGA
e344: 4c        INCA
e345: 55        LSRB
e346: c5 42     BITB   #$42
e348: 4f        CLRA
e349: 4e        XCLRA
e34a: 55        LSRB
e34b: 53        COMB
e34c: 20 41     BRA    $E38F
e34e: 44        LSRA
e34f: 44        LSRA
e350: 45        LSRA
e351: d2 53     SBCB   <$53
e353: 54        LSRB
e354: 41        NEGA
e355: 52        XNCB
e356: 54        LSRB
e357: 49        ROLA
e358: 4e        XCLRA
e359: 47        ASRA
e35a: 20 53     BRA    $E3AF
e35c: 48        ASLA
e35d: 49        ROLA
e35e: 45        LSRA
e35f: 4c        INCA
e360: c4 50     ANDB   #$50
e362: 4c        INCA
e363: 41        NEGA
e364: 59        ROLB
e365: 20 44     BRA    $E3AB
e367: 49        ROLA
e368: 46        RORA
e369: 46        RORA
e36a: 49        ROLA
e36b: 43        COMA
e36c: 55        LSRB
e36d: 4c        INCA
e36e: 54        LSRB
e36f: d9 42     ADCB   <$42
e371: 4f        CLRA
e372: 4e        XCLRA
e373: 55        LSRB
e374: 53        COMB
e375: 20 53     BRA    $E3CA
e377: 48        ASLA
e378: 49        ROLA
e379: 45        LSRA
e37a: 4c        INCA
e37b: c4 4d     ANDB   #$4D
e37d: 55        LSRB
e37e: 53        COMB
e37f: 49        ROLA
e380: 43        COMA
e381: 20 49     BRA    $E3CC
e383: 4e        XCLRA
e384: 20 41     BRA    $E3C7
e386: 54        LSRB
e387: 54        LSRB
e388: 52        XNCB
e389: 41        NEGA
e38a: 43        COMA
e38b: d4 52     ANDB   <$52
e38d: 45        LSRA
e38e: 53        COMB
e38f: 45        LSRA
e390: 54        LSRB
e391: 20 48     BRA    $E3DB
e393: 49        ROLA
e394: 47        ASRA
e395: 48        ASLA
e396: 20 53     BRA    $E3EB
e398: 43        COMA
e399: 4f        CLRA
e39a: 52        XNCB
e39b: 45        LSRA
e39c: d3 52     ADDD   <$52
e39e: 45        LSRA
e39f: 53        COMB
e3a0: 45        LSRA
e3a1: 54        LSRB
e3a2: 20 54     BRA    $E3F8
e3a4: 49        ROLA
e3a5: 4d        TSTA
e3a6: 49        ROLA
e3a7: 4e        XCLRA
e3a8: 47        ASRA
e3a9: 20 49     BRA    $E3F4
e3ab: 4e        XCLRA
e3ac: 46        RORA
e3ad: cf 52 45  XSTU   #$5245
e3b0: 53        COMB
e3b1: 45        LSRA
e3b2: 54        LSRB
e3b3: 20 4f     BRA    $E404
e3b5: 50        NEGB
e3b6: 54        LSRB
e3b7: 49        ROLA
e3b8: 4f        CLRA
e3b9: 4e        XCLRA
e3ba: d3 54     ADDD   <$54
e3bc: 45        LSRA
e3bd: 53        COMB
e3be: 54        LSRB
e3bf: 20 4e     BRA    $E40F
e3c1: 4f        CLRA
e3c2: 56        RORB
e3c3: 52        XNCB
e3c4: 41        NEGA
e3c5: cd        XHCF
e3c6: 55        LSRB
e3c7: 50        NEGB
e3c8: 2c 44     BGE    $E40E
e3ca: 4f        CLRA
e3cb: 57        ASRB
e3cc: 4e        XCLRA
e3cd: 20 54     BRA    $E423
e3cf: 4f        CLRA
e3d0: 20 53     BRA    $E425
e3d2: 45        LSRA
e3d3: 4c        INCA
e3d4: 45        LSRA
e3d5: 43        COMA
e3d6: 54        LSRB
e3d7: 20 49     BRA    $E422
e3d9: 54        LSRB
e3da: 45        LSRA
e3db: cd        XHCF
e3dc: 50        NEGB
e3dd: 55        LSRB
e3de: 4c        INCA
e3df: 4c        INCA
e3e0: 20 4c     BRA    $E42E
e3e2: 45        LSRA
e3e3: 46        RORA
e3e4: 54        LSRB
e3e5: 20 46     BRA    $E42D
e3e7: 49        ROLA
e3e8: 52        XNCB
e3e9: 45        LSRA
e3ea: 20 54     BRA    $E440
e3ec: 4f        CLRA
e3ed: 20 43     BRA    $E432
e3ef: 48        ASLA
e3f0: 41        NEGA
e3f1: 4e        XCLRA
e3f2: 47        ASRA
e3f3: 45        LSRA
e3f4: 20 53     BRA    $E449
e3f6: 45        LSRA
e3f7: 54        LSRB
e3f8: 54        LSRB
e3f9: 49        ROLA
e3fa: 4e        XCLRA
e3fb: c7 46     XSTB   #$46
e3fd: 52        XNCB
e3fe: 45        LSRA
e3ff: 45        LSRA
e400: 20 50     BRA    $E452
e402: 4c        INCA
e403: 41        NEGA
e404: d9 32     ADCB   <$32
e406: 20 43     BRA    $E44B
e408: 52        XNCB
e409: 45        LSRA
e40a: 44        LSRA
e40b: 49        ROLA
e40c: 54        LSRB
e40d: d3 31     ADDD   <$31
e40f: 20 43     BRA    $E454
e411: 52        XNCB
e412: 45        LSRA
e413: 44        LSRA
e414: 49        ROLA
e415: d4 25     ANDB   <$25
e417: 20 43     BRA    $E45C
e419: 52        XNCB
e41a: 45        LSRA
e41b: 44        LSRA
e41c: 49        ROLA
e41d: d4 b1     ANDB   <$B1
e41f: b2 b1 b4  SBCA   $B1B4
e422: b5 b6 4e  BITA   $B64E
e425: 4f        CLRA
e426: 4e        XCLRA
e427: c5 32     BITB   #$32
e429: 20 47     BRA    $E472
e42b: 49        ROLA
e42c: 56        RORB
e42d: 45        LSRA
e42e: 53        COMB
e42f: 20 b1     BRA    $E3E2
e431: 34 20     PSHS   Y
e433: 47        ASRA
e434: 49        ROLA
e435: 56        RORB
e436: 45        LSRA
e437: 53        COMB
e438: 20 b1     BRA    $E3EB
e43a: 34 20     PSHS   Y
e43c: 47        ASRA
e43d: 49        ROLA
e43e: 56        RORB
e43f: 45        LSRA
e440: 53        COMB
e441: 20 b2     BRA    $E3F5
e443: 35 20     PULS   Y
e445: 47        ASRA
e446: 49        ROLA
e447: 56        RORB
e448: 45        LSRA
e449: 53        COMB
e44a: 20 b1     BRA    $E3FD
e44c: 33 20     LEAU   $0,Y
e44e: 47        ASRA
e44f: 49        ROLA
e450: 56        RORB
e451: 45        LSRA
e452: 53        COMB
e453: 20 b1     BRA    $E406
e455: 4e        XCLRA
e456: 4f        CLRA
e457: 4e        XCLRA
e458: c5 b6     BITB   #$B6
e45a: b7 b8 b9  STA    $B8B9
e45d: 45        LSRA
e45e: 41        NEGA
e45f: 53        COMB
e460: d9 4d     ADCB   <$4D
e462: 4f        CLRA
e463: 44        LSRA
e464: 45        LSRA
e465: 52        XNCB
e466: 41        NEGA
e467: 54        LSRB
e468: c5 48     BITB   #$48
e46a: 41        NEGA
e46b: 52        XNCB
e46c: c4 48     ANDB   #$48
e46e: 41        NEGA
e46f: 52        XNCB
e470: 44        LSRA
e471: 45        LSRA
e472: 53        COMB
e473: d4 b0     ANDB   <$B0
e475: b1 b2 b3  CMPA   $B2B3
e478: 59        ROLB
e479: 45        LSRA
e47a: d3 4e     ADDD   <$4E
e47c: cf 4e cf  XSTU   #$4ECF
e47f: 59        ROLB
e480: 45        LSRA
e481: d3 4e     ADDD   <$4E
e483: cf 59 45  XSTU   #$5945
e486: d3 4e     ADDD   <$4E
e488: cf 59 45  XSTU   #$5945
e48b: d3 4e     ADDD   <$4E
e48d: cf 59 45  XSTU   #$5945
e490: d3 4e     ADDD   <$4E
e492: 4f        CLRA
e493: 20 45     BRA    $E4DA
e495: 52        XNCB
e496: 52        XNCB
e497: 4f        CLRA
e498: 52        XNCB
e499: d3 45     ADDD   <$45
e49b: 52        XNCB
e49c: 52        XNCB
e49d: 4f        CLRA
e49e: 52        XNCB
e49f: 20 41     BRA    $E4E2
e4a1: d4 53     ANDB   <$53
e4a3: 57        ASRB
e4a4: 49        ROLA
e4a5: 54        LSRB
e4a6: 43        COMA
e4a7: 48        ASLA
e4a8: 20 54     BRA    $E4FE
e4aa: 45        LSRA
e4ab: 53        COMB
e4ac: d4 4c     ANDB   <$4C
e4ae: 45        LSRA
e4af: 46        RORA
e4b0: 54        LSRB
e4b1: 20 46     BRA    $E4F9
e4b3: 49        ROLA
e4b4: 52        XNCB
e4b5: c5 52     BITB   #$52
e4b7: 49        ROLA
e4b8: 47        ASRA
e4b9: 48        ASLA
e4ba: 54        LSRB
e4bb: 20 46     BRA    $E503
e4bd: 49        ROLA
e4be: 52        XNCB
e4bf: c5 53     BITB   #$53
e4c1: 50        NEGB
e4c2: 41        NEGA
e4c3: 52        XNCB
e4c4: 45        LSRA
e4c5: 20 b1     BRA    $E478
e4c7: 53        COMB
e4c8: 45        LSRA
e4c9: 4c        INCA
e4ca: 46        RORA
e4cb: 20 54     BRA    $E521
e4cd: 45        LSRA
e4ce: 53        COMB
e4cf: d4 53     ANDB   <$53
e4d1: 4c        INCA
e4d2: 41        NEGA
e4d3: cd        XHCF
e4d4: 41        NEGA
e4d5: 55        LSRB
e4d6: 58        ASLB
e4d7: 20 43     BRA    $E51C
e4d9: 4f        CLRA
e4da: 49        ROLA
e4db: ce 4c 45  LDU    #$4C45
e4de: 46        RORA
e4df: 54        LSRB
e4e0: 20 43     BRA    $E525
e4e2: 4f        CLRA
e4e3: 49        ROLA
e4e4: ce 52 49  LDU    #$5249
e4e7: 47        ASRA
e4e8: 48        ASLA
e4e9: 54        LSRB
e4ea: 20 43     BRA    $E52F
e4ec: 4f        CLRA
e4ed: 49        ROLA
e4ee: ce a0 4c  LDU    #$A04C
e4f1: 45        LSRA
e4f2: 46        RORA
e4f3: 54        LSRB
e4f4: 20 54     BRA    $E54A
e4f6: 48        ASLA
e4f7: 55        LSRB
e4f8: 4d        TSTA
e4f9: c2 52     SBCB   #$52
e4fb: 49        ROLA
e4fc: 47        ASRA
e4fd: 48        ASLA
e4fe: 54        LSRB
e4ff: 20 54     BRA    $E555
e501: 48        ASLA
e502: 55        LSRB
e503: 4d        TSTA
e504: c2 53     SBCB   #$53
e506: 50        NEGB
e507: 41        NEGA
e508: 52        XNCB
e509: 45        LSRA
e50a: 20 b2     BRA    $E4BE
e50c: a0 50     SUBA   -$10,U
e50e: 4f        CLRA
e50f: 54        LSRB
e510: 20 54     BRA    $E566
e512: 45        LSRA
e513: 53        COMB
e514: d4 48     ANDB   <$48
e516: 41        NEGA
e517: 52        XNCB
e518: 44        LSRA
e519: 57        ASRB
e51a: 41        NEGA
e51b: 52        XNCB
e51c: 45        LSRA
e51d: 20 45     BRA    $E564
e51f: 52        XNCB
e520: 52        XNCB
e521: 4f        CLRA
e522: 52        XNCB
e523: d3 4e     ADDD   <$4E
e525: 4f        CLRA
e526: 20 45     BRA    $E56D
e528: 52        XNCB
e529: 52        XNCB
e52a: 4f        CLRA
e52b: 52        XNCB
e52c: 53        COMB
e52d: 20 44     BRA    $E573
e52f: 45        LSRA
e530: 54        LSRB
e531: 45        LSRA
e532: 43        COMA
e533: 54        LSRB
e534: 45        LSRA
e535: c4 50     ANDB   #$50
e537: 52        XNCB
e538: 4f        CLRA
e539: 47        ASRA
e53a: 52        XNCB
e53b: 41        NEGA
e53c: 4d        TSTA
e53d: 20 52     BRA    $E591
e53f: 41        NEGA
e540: 4d        TSTA
e541: 20 41     BRA    $E584
e543: 54        LSRB
e544: 20 32     BRA    $E578
e546: 46        RORA
e547: c8 4d     EORB   #$4D
e549: 41        NEGA
e54a: 54        LSRB
e54b: 48        ASLA
e54c: 20 52     BRA    $E5A0
e54e: 41        NEGA
e54f: 4d        TSTA
e550: 20 41     BRA    $E593
e552: 54        LSRB
e553: 20 35     BRA    $E58A
e555: c6 4d     LDB    #$4D
e557: 41        NEGA
e558: 54        LSRB
e559: 48        ASLA
e55a: 20 52     BRA    $E5AE
e55c: 41        NEGA
e55d: 4d        TSTA
e55e: 20 41     BRA    $E5A1
e560: 54        LSRB
e561: 20 35     BRA    $E598
e563: c8 56     EORB   #$56
e565: 47        ASRA
e566: 20 52     BRA    $E5BA
e568: 41        NEGA
e569: 4d        TSTA
e56a: 30 20     LEAX   $0,Y
e56c: 41        NEGA
e56d: 54        LSRB
e56e: 20 33     BRA    $E5A3
e570: cc 56 47  LDD    #$5647
e573: 20 52     BRA    $E5C7
e575: 41        NEGA
e576: 4d        TSTA
e577: 31 20     LEAY   $0,Y
e579: 41        NEGA
e57a: 54        LSRB
e57b: 20 33     BRA    $E5B0
e57d: cd        XHCF
e57e: 56        RORB
e57f: 47        ASRA
e580: 20 52     BRA    $E5D4
e582: 41        NEGA
e583: 4d        TSTA
e584: 32 20     LEAS   $0,Y
e586: 41        NEGA
e587: 54        LSRB
e588: 20 33     BRA    $E5BD
e58a: d0 56     SUBB   <$56
e58c: 47        ASRA
e58d: 20 52     BRA    $E5E1
e58f: 41        NEGA
e590: 4d        TSTA
e591: 33 20     LEAU   $0,Y
e593: 41        NEGA
e594: 54        LSRB
e595: 20 34     BRA    $E5CB
e597: cc 56 47  LDD    #$5647
e59a: 20 52     BRA    $E5EE
e59c: 41        NEGA
e59d: 4d        TSTA
e59e: 34 20     PSHS   Y
e5a0: 41        NEGA
e5a1: 54        LSRB
e5a2: 20 34     BRA    $E5D8
e5a4: cd        XHCF
e5a5: 56        RORB
e5a6: 47        ASRA
e5a7: 20 52     BRA    $E5FB
e5a9: 41        NEGA
e5aa: 4d        TSTA
e5ab: 35 20     PULS   Y
e5ad: 41        NEGA
e5ae: 54        LSRB
e5af: 20 34     BRA    $E5E5
e5b1: d0 4e     SUBB   <$4E
e5b3: 4f        CLRA
e5b4: 4e        XCLRA
e5b5: 20 56     BRA    $E60D
e5b7: 4f        CLRA
e5b8: 4c        INCA
e5b9: 41        NEGA
e5ba: 54        LSRB
e5bb: 49        ROLA
e5bc: 4c        INCA
e5bd: 45        LSRA
e5be: 20 52     BRA    $E612
e5c0: 41        NEGA
e5c1: 4d        TSTA
e5c2: 20 41     BRA    $E605
e5c4: 54        LSRB
e5c5: 20 31     BRA    $E5F8
e5c7: c5 50     BITB   #$50
e5c9: 52        XNCB
e5ca: 4f        CLRA
e5cb: 47        ASRA
e5cc: 52        XNCB
e5cd: 41        NEGA
e5ce: 4d        TSTA
e5cf: 20 52     BRA    $E623
e5d1: 4f        CLRA
e5d2: 4d        TSTA
e5d3: 30 20     LEAX   $0,Y
e5d5: 41        NEGA
e5d6: 54        LSRB
e5d7: 20 31     BRA    $E60A
e5d9: c6 50     LDB    #$50
e5db: 52        XNCB
e5dc: 4f        CLRA
e5dd: 47        ASRA
e5de: 52        XNCB
e5df: 41        NEGA
e5e0: 4d        TSTA
e5e1: 20 52     BRA    $E635
e5e3: 4f        CLRA
e5e4: 4d        TSTA
e5e5: 31 20     LEAY   $0,Y
e5e7: 41        NEGA
e5e8: 54        LSRB
e5e9: 20 31     BRA    $E61C
e5eb: 48        ASLA
e5ec: ca 50     ORB    #$50
e5ee: 52        XNCB
e5ef: 4f        CLRA
e5f0: 47        ASRA
e5f1: 52        XNCB
e5f2: 41        NEGA
e5f3: 4d        TSTA
e5f4: 20 52     BRA    $E648
e5f6: 4f        CLRA
e5f7: 4d        TSTA
e5f8: 32 20     LEAS   $0,Y
e5fa: 41        NEGA
e5fb: 54        LSRB
e5fc: 20 31     BRA    $E62F
e5fe: 4a        DECA
e5ff: cb 50     ADDB   #$50
e601: 52        XNCB
e602: 4f        CLRA
e603: 47        ASRA
e604: 52        XNCB
e605: 41        NEGA
e606: 4d        TSTA
e607: 20 52     BRA    $E65B
e609: 4f        CLRA
e60a: 4d        TSTA
e60b: 33 20     LEAU   $0,Y
e60d: 41        NEGA
e60e: 54        LSRB
e60f: 20 31     BRA    $E642
e611: 4b        XDECA
e612: cc 50 52  LDD    #$5052
e615: 4f        CLRA
e616: 47        ASRA
e617: 52        XNCB
e618: 41        NEGA
e619: 4d        TSTA
e61a: 20 52     BRA    $E66E
e61c: 4f        CLRA
e61d: 4d        TSTA
e61e: 34 20     PSHS   Y
e620: 41        NEGA
e621: 54        LSRB
e622: 20 31     BRA    $E655
e624: cd        XHCF
e625: 56        RORB
e626: 47        ASRA
e627: 20 52     BRA    $E67B
e629: 4f        CLRA
e62a: 4d        TSTA
e62b: 20 41     BRA    $E66E
e62d: 54        LSRB
e62e: 20 31     BRA    $E661
e630: cc 4d 41  LDD    #$4D41
e633: 54        LSRB
e634: 48        ASLA
e635: 42        XNCA
e636: 4f        CLRA
e637: 58        ASLB
e638: 20 54     BRA    $E68E
e63a: 45        LSRA
e63b: 53        COMB
e63c: 54        LSRB
e63d: d3 42     ADDD   <$42
e63f: 41        NEGA
e640: 44        LSRA
e641: 20 4d     BRA    $E690
e643: 41        NEGA
e644: 54        LSRB
e645: 48        ASLA
e646: 42        XNCA
e647: 4f        CLRA
e648: 58        ASLB
e649: 20 52     BRA    $E69D
e64b: 45        LSRA
e64c: 41        NEGA
e64d: 44        LSRA
e64e: 59        ROLB
e64f: 20 4c     BRA    $E69D
e651: 49        ROLA
e652: 4e        XCLRA
e653: c5 44     BITB   #$44
e655: 49        ROLA
e656: 56        RORB
e657: 49        ROLA
e658: 44        LSRA
e659: 45        LSRA
e65a: 52        XNCB
e65b: 20 45     BRA    $E6A2
e65d: 52        XNCB
e65e: 52        XNCB
e65f: 4f        CLRA
e660: 52        XNCB
e661: d3 4e     ADDD   <$4E
e663: 4f        CLRA
e664: 20 44     BRA    $E6AA
e666: 49        ROLA
e667: 56        RORB
e668: 49        ROLA
e669: 44        LSRA
e66a: 45        LSRA
e66b: 52        XNCB
e66c: 20 45     BRA    $E6B3
e66e: 52        XNCB
e66f: 52        XNCB
e670: 4f        CLRA
e671: 52        XNCB
e672: d3 4f     ADDD   <$4F
e674: 50        NEGB
e675: 54        LSRB
e676: 20 53     BRA    $E6CB
e678: 57        ASRB
e679: 20 20     BRA    $E69B
e67b: 20 20     BRA    $E69D
e67d: 4e        XCLRA
e67e: 55        LSRB
e67f: 4d        TSTA
e680: 20 44     BRA    $E6C6
e682: 49        ROLA
e683: 56        RORB
e684: 20 44     BRA    $E6CA
e686: 45        LSRA
e687: 4e        XCLRA
e688: 20 49     BRA    $E6D3
e68a: 53        COMB
e68b: 20 45     BRA    $E6D2
e68d: 52        XNCB
e68e: 52        XNCB
e68f: 4f        CLRA
e690: d2 4d     SBCB   <$4D
e692: 41        NEGA
e693: 54        LSRB
e694: 52        XNCB
e695: 49        ROLA
e696: 58        ASLB
e697: 20 45     BRA    $E6DE
e699: 52        XNCB
e69a: 52        XNCB
e69b: 4f        CLRA
e69c: 52        XNCB
e69d: d3 4e     ADDD   <$4E
e69f: 4f        CLRA
e6a0: 20 4d     BRA    $E6EF
e6a2: 41        NEGA
e6a3: 54        LSRB
e6a4: 52        XNCB
e6a5: 49        ROLA
e6a6: 58        ASLB
e6a7: 20 45     BRA    $E6EE
e6a9: 52        XNCB
e6aa: 52        XNCB
e6ab: 4f        CLRA
e6ac: 52        XNCB
e6ad: d3 42     ADDD   <$42
e6af: 49        ROLA
e6b0: 50        NEGB
e6b1: 20 54     BRA    $E707
e6b3: 45        LSRA
e6b4: 53        COMB
e6b5: d4 41     ANDB   <$41
e6b7: 4c        INCA
e6b8: 49        ROLA
e6b9: 47        ASRA
e6ba: 4e        XCLRA
e6bb: 20 54     BRA    $E711
e6bd: 48        ASLA
e6be: 45        LSRA
e6bf: 20 42     BRA    $E703
e6c1: 4f        CLRA
e6c2: 58        ASLB
e6c3: 45        LSRA
e6c4: d3 53     ADDD   <$53
e6c6: 43        COMA
e6c7: 41        NEGA
e6c8: 4c        INCA
e6c9: 45        LSRA
e6ca: 20 54     BRA    $E720
e6cc: 45        LSRA
e6cd: 53        COMB
e6ce: d4 4c     ANDB   <$4C
e6d0: 49        ROLA
e6d1: 4e        XCLRA
e6d2: 45        LSRA
e6d3: 41        NEGA
e6d4: d2 4c     SBCB   <$4C
e6d6: 49        ROLA
e6d7: 4e        XCLRA
e6d8: 45        LSRA
e6d9: 41        NEGA
e6da: 52        XNCB
e6db: 20 41     BRA    $E71E
e6dd: 4e        XCLRA
e6de: 44        LSRA
e6df: 20 42     BRA    $E723
e6e1: 49        ROLA
e6e2: 4e        XCLRA
e6e3: 41        NEGA
e6e4: 52        XNCB
e6e5: d9 30     ADCB   <$30
e6e7: 2e 20     BGT    $E709
e6e9: 4f        CLRA
e6ea: 46        RORA
e6eb: c6 31     LDB    #$31
e6ed: 2e 20     BGT    $E70F
e6ef: 44        LSRA
e6f0: 49        ROLA
e6f1: cd        XHCF
e6f2: 32 2e     LEAS   $E,Y
e6f4: 20 4c     BRA    $E742
e6f6: 4f        CLRA
e6f7: d7 33     STB    <$33
e6f9: 2e 20     BGT    $E71B
e6fb: 48        ASLA
e6fc: 49        ROLA
e6fd: 47        ASRA
e6fe: c8 49     EORB   #$49
e700: 4e        XCLRA
e701: 54        LSRB
e702: 45        LSRA
e703: 4e        XCLRA
e704: 53        COMB
e705: 49        ROLA
e706: 54        LSRB
e707: 59        ROLB
e708: 20 54     BRA    $E75E
e70a: 45        LSRA
e70b: 53        COMB
e70c: d4 50     ANDB   <$50
e70e: 52        XNCB
e70f: 45        LSRA
e710: 53        COMB
e711: 53        COMB
e712: 20 41     BRA    $E755
e714: 55        LSRB
e715: 58        ASLB
e716: 20 43     BRA    $E75B
e718: 4f        CLRA
e719: 49        ROLA
e71a: 4e        XCLRA
e71b: 20 54     BRA    $E771
e71d: 4f        CLRA
e71e: 20 43     BRA    $E763
e720: 4f        CLRA
e721: 4e        XCLRA
e722: 54        LSRB
e723: 49        ROLA
e724: 4e        XCLRA
e725: 55        LSRB
e726: c5 50     BITB   #$50
e728: 52        XNCB
e729: 45        LSRA
e72a: 53        COMB
e72b: 53        COMB
e72c: 20 41     BRA    $E76F
e72e: 55        LSRB
e72f: 58        ASLB
e730: 20 43     BRA    $E775
e732: 4f        CLRA
e733: 49        ROLA
e734: 4e        XCLRA
e735: 20 46     BRA    $E77D
e737: 4f        CLRA
e738: 52        XNCB
e739: 20 53     BRA    $E78E
e73b: 45        LSRA
e73c: 4c        INCA
e73d: 46        RORA
e73e: 20 54     BRA    $E794
e740: 45        LSRA
e741: 53        COMB
e742: d4 50     ANDB   <$50
e744: 55        LSRB
e745: 4c        INCA
e746: 4c        INCA
e747: 20 52     BRA    $E79B
e749: 49        ROLA
e74a: 47        ASRA
e74b: 48        ASLA
e74c: 54        LSRB
e74d: 20 46     BRA    $E795
e74f: 49        ROLA
e750: 52        XNCB
e751: 45        LSRA
e752: 20 54     BRA    $E7A8
e754: 4f        CLRA
e755: 20 50     BRA    $E7A7
e757: 45        LSRA
e758: 52        XNCB
e759: 46        RORA
e75a: 4f        CLRA
e75b: 52        XNCB
e75c: 4d        TSTA
e75d: 20 52     BRA    $E7B1
e75f: 45        LSRA
e760: 53        COMB
e761: 45        LSRA
e762: 54        LSRB
e763: d3 a6     ADDD   <$A6
e765: 7e e764     JMP    $e764
