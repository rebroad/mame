bd12: 86 06        LDA    #$06
bd14: 7e bc e9     JMP    $BCE9
bd17: 86 07        LDA    #$07
bd19: 7e bc e9     JMP    $BCE9
bd1c: 86 08        LDA    #$08
bd1e: 7e bc e9     JMP    $BCE9
bd21: 86 09        LDA    #$09
bd23: 7e bc e9     JMP    $BCE9
bd26: 86 0a        LDA    #$0A
bd28: 7e bc e9     JMP    $BCE9
bd2b: 86 0b        LDA    #$0B
bd2d: 7e bc e9     JMP    $BCE9
bd30: 86 0c        LDA    #$0C
bd32: 7e bc e9     JMP    $BCE9
bd35: 86 0d        LDA    #$0D
bd37: 7e bc e9     JMP    $BCE9
bd3a: 86 0e        LDA    #$0E
bd3c: 7e bc e9     JMP    $BCE9
bd3f: 86 0f        LDA    #$0F
bd41: 7e bc e9     JMP    $BCE9
bd44: 86 10        LDA    #$10
bd46: 7e bc e9     JMP    $BCE9
bd49: 86 11        LDA    #$11
bd4b: 7e bc e9     JMP    $BCE9
bd4e: 86 12        LDA    #$12
bd50: 7e bc e9     JMP    $BCE9
bd53: 86 13        LDA    #$13
bd55: 7e bc e9     JMP    $BCE9
bd58: 86 14        LDA    #$14
bd5a: 7e bc e9     JMP    $BCE9
bd5d: 86 15        LDA    #$15
bd5f: 7e bc e9     JMP    $BCE9
bd62: 86 16        LDA    #$16
bd64: 7e bc e9     JMP    $BCE9
bd67: 86 17        LDA    #$17
bd69: 7e bc e9     JMP    $BCE9
bd6c: 86 18        LDA    #$18
bd6e: 7e bc e9     JMP    $BCE9
bd71: 86 19        LDA    #$19
bd73: 7e bc e9     JMP    $BCE9
bd76: 86 1a        LDA    #$1A
bd78: 7e bc e9     JMP    $BCE9
bd7b: 86 1b        LDA    #$1B
bd7d: 7e bc e9     JMP    $BCE9
bd80: 86 1c        LDA    #$1C
bd82: 7e bc e9     JMP    $BCE9
bd85: 86 1d        LDA    #$1D
bd87: 7e bc e9     JMP    $BCE9
bd8a: 86 1e        LDA    #$1E
bd8c: 7e bc e9     JMP    $BCE9
bd8f: 86 1f        LDA    #$1F
bd91: 7e bc e9     JMP    $BCE9
bd94: 86 20        LDA    #$20
bd96: 7e bc e9     JMP    $BCE9
bd99: 86 21        LDA    #$21
bd9b: 7e bc e9     JMP    $BCE9
bd9e: 86 22        LDA    #$22
bda0: 7e bc e9     JMP    $BCE9
bda3: 86 23        LDA    #$23
bda5: 7e bc e9     JMP    $BCE9
bda8: 86 24        LDA    #$24
bdaa: 7e bc e9     JMP    $BCE9
bdad: 86 25        LDA    #$25
bdaf: 7e bc e9     JMP    $BCE9
bdb2: 86 26        LDA    #$26
bdb4: 7e bc e9     JMP    $BCE9
bdb7: 86 27        LDA    #$27
bdb9: 7e bc e9     JMP    $BCE9
bdbc: 86 28        LDA    #$28
bdbe: 7e bc e9     JMP    $BCE9
bdc1: 86 29        LDA    #$29
bdc3: 7e bc e9     JMP    $BCE9
bdc6: 86 2a        LDA    #$2A
bdc8: 7e bc e9     JMP    $BCE9
bdcb: 86 2b        LDA    #$2B
bdcd: 7e bc e9     JMP    $BCE9
bdd0: 86 2c        LDA    #$2C
bdd2: 7e bc e9     JMP    $BCE9
bdd5: 86 2d        LDA    #$2D
bdd7: 7e bc e9     JMP    $BCE9
bdda: 86 2e        LDA    #$2E
bddc: 7e bc e9     JMP    $BCE9
bddf: 86 2f        LDA    #$2F
bde1: 7e bc e9     JMP    $BCE9
bde4: 86 30        LDA    #$30
bde6: 7e bc e9     JMP    $BCE9
bde9: 86 31        LDA    #$31
bdeb: 7e bc e9     JMP    $BCE9
bdee: 86 32        LDA    #$32
bdf0: 7e bc e9     JMP    $BCE9
bdf3: 86 33        LDA    #$33
bdf5: 7e bc e9     JMP    $BCE9
bdf8: 86 34        LDA    #$34
bdfa: 7e bc e9     JMP    $BCE9
bdfd: 86 35        LDA    #$35
bdff: 7e bc e9     JMP    $BCE9
be02: 86 36        LDA    #$36
be04: 7e bc e9     JMP    $BCE9
be07: 86 37        LDA    #$37
be09: 7e bc e9     JMP    $BCE9
be0c: 86 38        LDA    #$38
be0e: 7e bc e9     JMP    $BCE9
be11: 86 39        LDA    #$39
be13: 7e bc e9     JMP    $BCE9
be16: 86 3a        LDA    #$3A
be18: 7e bc e9     JMP    $BCE9
be1b: 86 3b        LDA    #$3B
be1d: 7e bc e9     JMP    $BCE9
be20: 86 59        LDA    #$59
be22: bd d8 df     JSR    $D8DF
be25: 4c           INCA
be26: 81 65        CMPA   #$65
be28: 25 f8        BCS    $BE22
be2a: 86 d3        LDA    #$D3
be2c: bd d8 df     JSR    $D8DF
be2f: cc 64 80     LDD    #$6480
be32: ed a1        STD    ,Y++
be34: 8e 45 3c     LDX    #$453C
be37: ce c7 bb     LDU    #$C7BB
be3a: ec c1        LDD    ,U++
be3c: ed a1        STD    ,Y++
be3e: cc 00 30     LDD    #$0030
be41: ed a1        STD    ,Y++
be43: ff 4a fa     STU    $4AFA
be46: c6 05        LDB    #$05
be48: d7 ad        STB    <$AD
be4a: c6 05        LDB    #$05
be4c: a6 80        LDA    ,X+
be4e: bd e7 ad     JSR    $E7AD
be51: 5a           DECB
be52: 2a f8        BPL    $BE4C
be54: cc 80 40     LDD    #$8040
be57: ed a1        STD    ,Y++
be59: fe 4a fa     LDU    $4AFA
be5c: 8c 45 54     CMPX   #$4554
be5f: 25 d9        BCS    $BE3A
be61: fc c7 c1     LDD    $C7C1
be64: ed a1        STD    ,Y++
be66: cc 01 3c     LDD    #$013C
be69: ed a1        STD    ,Y++
be6b: 86 01        LDA    #$01
be6d: 97 ad        STA    <$AD
be6f: b6 45 88     LDA    $4588
be72: bd e7 ad     JSR    $E7AD
be75: b6 45 89     LDA    $4589
be78: bd e7 ad     JSR    $E7AD
be7b: cc 80 40     LDD    #$8040
be7e: ed a1        STD    ,Y++
be80: 8e 45 48     LDX    #$4548
be83: bd c6 d4     JSR    $C6D4
be86: ce 4a fe     LDU    #$4AFE
be89: 8e 45 42     LDX    #$4542
be8c: bd c6 d7     JSR    $C6D7
be8f: b6 4a fc     LDA    $4AFC
be92: bb 4b 00     ADDA   $4B00
be95: 19           DAA
be96: b7 4a fc     STA    $4AFC
be99: b6 4a fb     LDA    $4AFB
be9c: b9 4a ff     ADCA   $4AFF
be9f: 19           DAA
bea0: b7 4a fb     STA    $4AFB
bea3: b6 4a fa     LDA    $4AFA
bea6: b9 4a fe     ADCA   $4AFE
bea9: 19           DAA
beaa: b7 4a fa     STA    $4AFA
bead: fc c7 c3     LDD    $C7C3
beb0: ed a1        STD    ,Y++
beb2: cc 00 30     LDD    #$0030
beb5: ed a1        STD    ,Y++
beb7: c6 05        LDB    #$05
beb9: d7 ad        STB    <$AD
bebb: b6 4a fa     LDA    $4AFA
bebe: bd e7 90     JSR    $E790
bec1: b6 4a fb     LDA    $4AFB
bec4: bd e7 90     JSR    $E790
bec7: b6 4a fc     LDA    $4AFC
beca: bd e7 90     JSR    $E790
becd: cc 80 40     LDD    #$8040
bed0: ed a1        STD    ,Y++
bed2: 8e 45 54     LDX    #$4554
bed5: bd c6 d4     JSR    $C6D4
bed8: bd c0 87     JSR    $C087
bedb: fc c7 c9     LDD    $C7C9
bede: ed a1        STD    ,Y++
bee0: cc 00 30     LDD    #$0030
bee3: ed a1        STD    ,Y++
bee5: c6 07        LDB    #$07
bee7: d7 ad        STB    <$AD
bee9: b6 4a fa     LDA    $4AFA
beec: bd e7 90     JSR    $E790
beef: b6 4a fb     LDA    $4AFB
bef2: bd e7 90     JSR    $E790
bef5: b6 4a fc     LDA    $4AFC
bef8: bd e7 90     JSR    $E790
befb: b6 4a fd     LDA    $4AFD
befe: bd e7 90     JSR    $E790
bf01: cc 80 40     LDD    #$8040
bf04: ed a1        STD    ,Y++
bf06: 8e 45 5c     LDX    #$455C
bf09: bd c6 d4     JSR    $C6D4
bf0c: bd c0 87     JSR    $C087
bf0f: fc c7 cb     LDD    $C7CB
bf12: ed a1        STD    ,Y++
bf14: cc 00 30     LDD    #$0030
bf17: ed a1        STD    ,Y++
bf19: c6 07        LDB    #$07
bf1b: d7 ad        STB    <$AD
bf1d: b6 4a fa     LDA    $4AFA
bf20: bd e7 90     JSR    $E790
bf23: b6 4a fb     LDA    $4AFB
bf26: bd e7 90     JSR    $E790
bf29: b6 4a fc     LDA    $4AFC
bf2c: bd e7 90     JSR    $E790
bf2f: b6 4a fd     LDA    $4AFD
bf32: bd e7 90     JSR    $E790
bf35: cc 80 40     LDD    #$8040
bf38: ed a1        STD    ,Y++
bf3a: 8e 45 4c     LDX    #$454C
bf3d: bd c6 d4     JSR    $C6D4
bf40: 7f 4a fa     CLR    $4AFA
bf43: b6 4a fb     LDA    $4AFB
bf46: ba 4a fc     ORA    $4AFC
bf49: ba 4a fd     ORA    $4AFD
bf4c: 27 2e        BEQ    $BF7C
bf4e: 8e 45 54     LDX    #$4554
bf51: ce 4a fe     LDU    #$4AFE
bf54: bd c6 d7     JSR    $C6D7
bf57: bd c0 2f     JSR    $C02F
bf5a: b6 4a fa     LDA    $4AFA
bf5d: 84 0f        ANDA   #$0F
bf5f: 81 0f        CMPA   #$0F
bf61: b6 4a fa     LDA    $4AFA
bf64: 25 03        BCS    $BF69
bf66: 7c 4a fa     INC    $4AFA
bf69: 44           LSRA
bf6a: 44           LSRA
bf6b: 44           LSRA
bf6c: 44           LSRA
bf6d: bb 4a fa     ADDA   $4AFA
bf70: b7 4a fa     STA    $4AFA
bf73: 84 0f        ANDA   #$0F
bf75: 81 0f        CMPA   #$0F
bf77: 25 03        BCS    $BF7C
bf79: 7c 4a fa     INC    $4AFA
bf7c: fc c7 c5     LDD    $C7C5
bf7f: ed a1        STD    ,Y++
bf81: cc 00 30     LDD    #$0030
bf84: ed a1        STD    ,Y++
bf86: b6 4a fa     LDA    $4AFA
bf89: bd c7 0e     JSR    $C70E
bf8c: cc 80 40     LDD    #$8040
bf8f: ed a1        STD    ,Y++
bf91: 8e 45 5c     LDX    #$455C
bf94: bd c6 d4     JSR    $C6D4
bf97: b6 4a fa     LDA    $4AFA
bf9a: ba 4a fb     ORA    $4AFB
bf9d: ba 4a fc     ORA    $4AFC
bfa0: ba 4a fd     ORA    $4AFD
bfa3: 27 0f        BEQ    $BFB4
bfa5: 8e 45 56     LDX    #$4556
bfa8: ce 4a fe     LDU    #$4AFE
bfab: bd c6 d7     JSR    $C6D7
bfae: 7f 4b 01     CLR    $4B01
bfb1: bd c0 2f     JSR    $C02F
bfb4: fc c7 c7     LDD    $C7C7
bfb7: ed a1        STD    ,Y++
bfb9: cc 00 30     LDD    #$0030
bfbc: ed a1        STD    ,Y++
bfbe: 4f           CLRA
bfbf: f6 4a fa     LDB    $4AFA
bfc2: 8e 00 10     LDX    #$0010
bfc5: bd 77 20     JSR    $7720
bfc8: c6 01        LDB    #$01
bfca: d7 ad        STB    <$AD
bfcc: b6 4a d6     LDA    $4AD6
bfcf: bd e7 90     JSR    $E790
bfd2: cc 80 40     LDD    #$8040
bfd5: ed a1        STD    ,Y++
bfd7: c6 11        LDB    #$11
bfd9: f7 4a fa     STB    $4AFA
bfdc: ce c7 cd     LDU    #$C7CD
bfdf: ff 4a fc     STU    $4AFC
bfe2: fe 4a fc     LDU    $4AFC
bfe5: ec c1        LDD    ,U++
bfe7: ed a1        STD    ,Y++
bfe9: 11 83 c7 e1  CMPU   #$C7E1
bfed: 25 05        BCS    $BFF4
bfef: cc 1e d4     LDD    #$1ED4
bff2: 20 03        BRA    $BFF7
bff4: cc 00 64     LDD    #$0064
bff7: ed a1        STD    ,Y++
bff9: ff 4a fc     STU    $4AFC
bffc: 8e c7 a3     LDX    #$C7A3
bfff: f6 4a fa     LDB    $4AFA
c002: a6 85        LDA    B,X
c004: bd c7 0e     JSR    $C70E
c007: fc 30 02     LDD    $3002
c00a: ed a1        STD    ,Y++
c00c: ed a1        STD    ,Y++
c00e: c6 00        LDB    #$00
c010: d7 ad        STB    <$AD
c012: 8e 45 64     LDX    #$4564
c015: f6 4a fa     LDB    $4AFA
c018: 58           ASLB
c019: a6 85        LDA    B,X
c01b: bd e7 ad     JSR    $E7AD
c01e: 5c           INCB
c01f: a6 85        LDA    B,X
c021: bd e7 ad     JSR    $E7AD
c024: cc 80 40     LDD    #$8040
c027: ed a1        STD    ,Y++
c029: 7a 4a fa     DEC    $4AFA
c02c: 2a b4        BPL    $BFE2
c02e: 39           RTS
c02f: 8e 4a fe     LDX    #$4AFE
c032: 86 01        LDA    #$01
c034: b7 4b 02     STA    $4B02
c037: c6 03        LDB    #$03
c039: 86 99        LDA    #$99
c03b: a0 82        SUBA   ,-X
c03d: bb 4b 02     ADDA   $4B02
c040: 19           DAA
c041: a7 84        STA    ,X
c043: 25 05        BCS    $C04A
c045: 7f 4b 02     CLR    $4B02
c048: 20 05        BRA    $C04F
c04a: 86 01        LDA    #$01
c04c: b7 4b 02     STA    $4B02
c04f: 5a           DECB
c050: 2a e7        BPL    $C039
c052: c6 ff        LDB    #$FF
c054: 5c           INCB
c055: c1 ef        CMPB   #$EF
c057: 27 2a        BEQ    $C083
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
c081: 25 d1        BCS    $C054
c083: f7 4a fa     STB    $4AFA
c086: 39           RTS
c087: 8d 00        BSR    $C089
c089: 1c fe        ANDCC  #$FE
c08b: c6 03        LDB    #$03
c08d: 8e 4a fd     LDX    #$4AFD
c090: a6 84        LDA    ,X
c092: a9 84        ADCA   ,X
c094: 19           DAA
c095: a7 84        STA    ,X
c097: 30 1f        LEAX   -$1,X
c099: 5a           DECB
c09a: 2a f4        BPL    $C090
c09c: 39           RTS
c09d: 86 02        LDA    #$02
c09f: bd c2 c3     JSR    $C2C3
c0a2: 26 5a        BNE    $C0FE
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
c0c3: 24 32        BCC    $C0F7
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
c0fc: 24 c4        BCC    $C0C2
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
c12d: 25 03        BCS    $C132
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
c16d: 23 0c        BLS    $C17B
c16f: b7 4a fa     STA    $4AFA
c172: 7f 4a fb     CLR    $4AFB
c175: 7f 4a fc     CLR    $4AFC
c178: bd c6 f4     JSR    $C6F4
c17b: 8e 45 86     LDX    #$4586
c17e: b6 48 19     LDA    $4819
c181: 26 1b        BNE    $C19E
c183: b6 48 1a     LDA    $481A
c186: 8e 45 64     LDX    #$4564
c189: c6 9a        LDB    #$9A
c18b: f0 c7 a4     SUBB   $C7A4
c18e: f7 4a fa     STB    $4AFA
c191: bb 4a fa     ADDA   $4AFA
c194: 19           DAA
c195: 24 07        BCC    $C19E
c197: 30 02        LEAX   $2,X
c199: 8c 45 86     CMPX   #$4586
c19c: 25 f3        BCS    $C191
c19e: a6 01        LDA    $1,X
c1a0: 84 0f        ANDA   #$0F
c1a2: 8b 01        ADDA   #$01
c1a4: 19           DAA
c1a5: a7 01        STA    $1,X
c1a7: 84 f0        ANDA   #$F0
c1a9: 27 3e        BEQ    $C1E9
c1ab: a6 84        LDA    ,X
c1ad: 84 0f        ANDA   #$0F
c1af: 8b 01        ADDA   #$01
c1b1: 19           DAA
c1b2: a7 84        STA    ,X
c1b4: 84 f0        ANDA   #$F0
c1b6: 27 31        BEQ    $C1E9
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
c1cd: 27 02        BEQ    $C1D1
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
c1df: 25 da        BCS    $C1BB
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
c220: 22 08        BHI    $C22A
c222: 25 19        BCS    $C23D
c224: 11 b3 4a fc  CMPU   $4AFC
c228: 23 13        BLS    $C23D
c22a: fd 4a fa     STD    $4AFA
c22d: ff 4a fc     STU    $4AFC
c230: 8e 45 5c     LDX    #$455C
c233: ce 4a fa     LDU    #$4AFA
c236: 86 03        LDA    #$03
c238: bd c6 f9     JSR    $C6F9
c23b: 20 0c        BRA    $C249
c23d: fc 4a fa     LDD    $4AFA
c240: fd 4b 04     STD    $4B04
c243: fc 4a fc     LDD    $4AFC
c246: fd 4b 06     STD    $4B06
c249: 86 02        LDA    #$02
c24b: 7e c2 b3     JMP    $C2B3
c24e: 7e c24e     JMP    $c24e
