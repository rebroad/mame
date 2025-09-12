c02f: 8e 4a fe     LDX    #$4AFE
c032: 86 01        LDA    #$01
c034: b7 4b 02     STA    $4B02
c037: c6 03        LDB    #$03
c039: 86 99        LDA    #$99
c03b: a0 82        SUBA   ,-X
c03d: bb 4b 02     ADDA   $4B02
c040: 19           DAA
c041: a7 84        STA    ,X
c043: 25 05        BCS    $001B
c045: 7f 4b 02     CLR    $4B02
c048: 20 05        BRA    $0020
c04a: 86 01        LDA    #$01
c04c: b7 4b 02     STA    $4B02
c04f: 5a           DECB
c050: 2a e7        BPL    $000A
c052: c6 ff        LDB    #$FF
c054: 5c           INCB
c055: c1 ef        CMPB   #$EF
c057: 27 2a        BEQ    $0054
c059: b6 4b 01     LDA    $4B01
c05c: bb 4a fd     ADDA   $4AFD
c05f: 19           DAA
c060: b7 4b 01     STA    $4B01
c063: b6 4b 00     LDA    $4B00
c066: b9 4a fc     ADCA   $4AFC
c069: 19           DAA
c06a: b7 4b 00     STA    $4B00
c06d: b6 4a ff     LDA    $4AFF
c070: b9 4a fb     ADCA   $4AFB
c073: 19           DAA
c074: b7 4a ff     STA    $4AFF
c077: b6 4a fe     LDA    $4AFE
c07a: b9 4a fa     ADCA   $4AFA
c07d: 19           DAA
c07e: b7 4a fe     STA    $4AFE
c081: 25 d1        BCS    $0025
c083: f7 4a fa     STB    $4AFA
c086: 39           RTS
c087: 8d 00        BSR    $005A
c089: 1c fe        ANDCC  #$FE
c08b: c6 03        LDB    #$03
c08d: 8e 4a fd     LDX    #$4AFD
c090: a6 84        LDA    ,X
c092: a9 84        ADCA   ,X
c094: 19           DAA
c095: a7 84        STA    ,X
c097: 30 1f        LEAX   -$1,X
c099: 5a           DECB
c09a: 2a f4        BPL    $0061
c09c: 39           RTS
c09d: 86 02        LDA    #$02
c09f: bd c2 c3     JSR    $C2C3
c0a2: 26 5a        BNE    $00CF
c0a4: 4f           CLRA
c0a5: f6 48 15     LDB    $4815
c0a8: 58           ASLB
c0a9: 49           ROLA
c0aa: f6 48 16     LDB    $4816
c0ad: 58           ASLB
c0ae: 49           ROLA
c0af: f6 48 17     LDB    $4817
c0b2: 58           ASLB
c0b3: 49           ROLA
c0b4: 1f 89        TFR    A,B
c0b6: f8 4a f4     EORB   $4AF4
c0b9: f4 4a f4     ANDB   $4AF4
c0bc: b7 4a f4     STA    $4AF4
c0bf: 8e 45 48     LDX    #$4548
c0c2: 54           LSRB
c0c3: 24 32        BCC    $00C8
c0c5: ce 4b 5f     LDU    #$4B5F
c0c8: bd c6 d7     JSR    $C6D7
c0cb: b6 4b 61     LDA    $4B61
c0ce: 8b 01        ADDA   #$01
c0d0: 19           DAA
c0d1: b7 4b 61     STA    $4B61
c0d4: b6 4b 60     LDA    $4B60
c0d7: 89 00        ADCA   #$00
c0d9: 19           DAA
c0da: b7 4b 60     STA    $4B60
c0dd: b6 4b 5f     LDA    $4B5F
c0e0: 89 00        ADCA   #$00
c0e2: 19           DAA
c0e3: b7 4b 5f     STA    $4B5F
c0e6: ce 4b 5f     LDU    #$4B5F
c0e9: bd c6 f7     JSR    $C6F7
c0ec: 86 02        LDA    #$02
c0ee: f7 4b 62     STB    $4B62
c0f1: bd c2 b3     JSR    $C2B3
c0f4: f6 4b 62     LDB    $4B62
c0f7: 30 1a        LEAX   -$6,X
c0f9: 8c 45 3c     CMPX   #$453C
c0fc: 24 c4        BCC    $0093
c0fe: 39           RTS
c0ff: 86 02        LDA    #$02
c101: bd c4 13     JSR    $C413
c104: 8e 45 54     LDX    #$4554
c107: bd c6 d4     JSR    $C6D4
c10a: b6 4a fd     LDA    $4AFD
c10d: bb 48 1a     ADDA   $481A
c110: 19           DAA
c111: b7 4a fd     STA    $4AFD
c114: b6 4a fc     LDA    $4AFC
c117: b9 48 19     ADCA   $4819
c11a: 19           DAA
c11b: b7 4a fc     STA    $4AFC
c11e: b6 4a fb     LDA    $4AFB
c121: 89 00        ADCA   #$00
c123: 19           DAA
c124: b7 4a fb     STA    $4AFB
c127: b6 4a fa     LDA    $4AFA
c12a: 89 00        ADCA   #$00
c12c: 19           DAA
c12d: 25 03        BCS    $0103
c12f: b7 4a fa     STA    $4AFA
c132: 86 03        LDA    #$03
c134: f7 4b 02     STB    $4B02
c137: ce 4a fa     LDU    #$4AFA
c13a: bd c6 f9     JSR    $C6F9
c13d: 8e 45 4e     LDX    #$454E
c140: bd c6 d4     JSR    $C6D4
c143: b6 4a fc     LDA    $4AFC
c146: 8b 01        ADDA   #$01
c148: 19           DAA
c149: b7 4a fc     STA    $4AFC
c14c: b6 4a fb     LDA    $4AFB
c14f: 89 00        ADCA   #$00
c151: 19           DAA
c152: b7 4a fb     STA    $4AFB
c155: b6 4a fa     LDA    $4AFA
c158: 89 00        ADCA   #$00
c15a: 19           DAA
c15b: b7 4a fa     STA    $4AFA
c15e: bd c6 f4     JSR    $C6F4
c161: 8e 45 88     LDX    #$4588
c164: bd c6 d4     JSR    $C6D4
c167: b6 4b 16     LDA    $4B16
c16a: b1 4a fa     CMPA   $4AFA
c16d: 23 0c        BLS    $014C
c16f: b7 4a fa     STA    $4AFA
c172: 7f 4a fb     CLR    $4AFB
c175: 7f 4a fc     CLR    $4AFC
c178: bd c6 f4     JSR    $C6F4
c17b: 8e 45 86     LDX    #$4586
c17e: b6 48 19     LDA    $4819
c181: 26 1b        BNE    $016F
c183: b6 48 1a     LDA    $481A
c186: 8e 45 64     LDX    #$4564
c189: c6 9a        LDB    #$9A
c18b: f0 c7 a4     SUBB   $C7A4
c18e: f7 4a fa     STB    $4AFA
c191: bb 4a fa     ADDA   $4AFA
c194: 19           DAA
c195: 24 07        BCC    $016F
c197: 30 02        LEAX   $2,X
c199: 8c 45 86     CMPX   #$4586
c19c: 25 f3        BCS    $0162
c19e: a6 01        LDA    $1,X
c1a0: 84 0f        ANDA   #$0F
c1a2: 8b 01        ADDA   #$01
c1a4: 19           DAA
c1a5: a7 01        STA    $1,X
c1a7: 84 f0        ANDA   #$F0
c1a9: 27 3e        BEQ    $01BA
c1ab: a6 84        LDA    ,X
c1ad: 84 0f        ANDA   #$0F
c1af: 8b 01        ADDA   #$01
c1b1: 19           DAA
c1b2: a7 84        STA    ,X
c1b4: 84 f0        ANDA   #$F0
c1b6: 27 31        BEQ    $01BA
c1b8: 8e 45 64     LDX    #$4564
c1bb: a6 84        LDA    ,X
c1bd: 48           ASLA
c1be: 48           ASLA
c1bf: 48           ASLA
c1c0: 48           ASLA
c1c1: b7 4a fa     STA    $4AFA
c1c4: a6 01        LDA    $1,X
c1c6: 84 0f        ANDA   #$0F
c1c8: bb 4a fa     ADDA   $4AFA
c1cb: 85 10        BITA   #$10
c1cd: 27 02        BEQ    $01A2
c1cf: 80 06        SUBA   #$06
c1d1: 44           LSRA
c1d2: a7 01        STA    $1,X
c1d4: 44           LSRA
c1d5: 44           LSRA
c1d6: 44           LSRA
c1d7: 44           LSRA
c1d8: a7 84        STA    ,X
c1da: 30 02        LEAX   $2,X
c1dc: 8c 45 88     CMPX   #$4588
c1df: 25 da        BCS    $018C
c1e1: 86 05        LDA    #$05
c1e3: a7 c4        STA    ,U
c1e5: 86 00        LDA    #$00
c1e7: a7 41        STA    $1,U
c1e9: b6 48 66     LDA    $4866
c1ec: b7 4a fa     STA    $4AFA
c1ef: b6 48 68     LDA    $4868
c1f2: b7 4a fb     STA    $4AFB
c1f5: b6 48 6f     LDA    $486F
c1f8: b7 4a fc     STA    $4AFC
c1fb: b6 48 71     LDA    $4871
c1fe: b7 4a fd     STA    $4AFD
c201: 8e 45 34     LDX    #$4534
c204: ce 4a fa     LDU    #$4AFA
c207: 86 03        LDA    #$03
c209: bd c6 f9     JSR    $C6F9
c20c: 8e 45 5c     LDX    #$455C
c20f: bd c6 d4     JSR    $C6D4
c212: 1a 10        ORCC   #$10
c214: fe 4b 06     LDU    $4B06
c217: fc 4b 04     LDD    $4B04
c21a: 1c ef        ANDCC  #$EF
c21c: 10 b3 4a fa  CMPD   $4AFA
c220: 22 08        BHI    $01FB
c222: 25 19        BCS    $020E
c224: 11 b3 4a fc  CMPU   $4AFC
c228: 23 13        BLS    $020E
c22a: fd 4a fa     STD    $4AFA
c22d: ff 4a 8e     STU    $4A00
