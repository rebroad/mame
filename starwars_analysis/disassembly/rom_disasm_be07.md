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
be28: 25 f8        BCS    $001B
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
be52: 2a f8        BPL    $0045
be54: cc 80 40     LDD    #$8040
be57: ed a1        STD    ,Y++
be59: fe 4a fa     LDU    $4AFA
be5c: 8c 45 54     CMPX   #$4554
be5f: 25 d9        BCS    $0033
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
bf4c: 27 2e        BEQ    $0175
bf4e: 8e 45 54     LDX    #$4554
bf51: ce 4a fe     LDU    #$4AFE
bf54: bd c6 d7     JSR    $C6D7
bf57: bd c0 2f     JSR    $C02F
bf5a: b6 4a fa     LDA    $4AFA
bf5d: 84 0f        ANDA   #$0F
bf5f: 81 0f        CMPA   #$0F
bf61: b6 4a fa     LDA    $4AFA
bf64: 25 03        BCS    $0162
bf66: 7c 4a fa     INC    $4AFA
bf69: 44           LSRA
bf6a: 44           LSRA
bf6b: 44           LSRA
bf6c: 44           LSRA
bf6d: bb 4a fa     ADDA   $4AFA
bf70: b7 4a fa     STA    $4AFA
bf73: 84 0f        ANDA   #$0F
bf75: 81 0f        CMPA   #$0F
bf77: 25 03        BCS    $0175
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
bfa3: 27 0f        BEQ    $01AD
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
bfed: 25 05        BCS    $01ED
bfef: cc 1e d4     LDD    #$1ED4
bff2: 20 03        BRA    $01F0
bff4: cc 00 64     LDD    #$0064
bff7: ed a1        STD    ,Y++
bff9: ff 4a fc     STU    $4AFC
bffc: 8e c7 a3     LDX    #$C7A3
bfff: f6 4a fa     LDB    $4AFA
c002: a6 85        LDA    B,X
c004: bd c7 0e     JSR    $C70E
