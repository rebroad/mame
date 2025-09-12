bd58: 86 14     LDA    #$14
bd5a: 7e bc e9  JMP    $BCE9
bd5d: 86 15     LDA    #$15
bd5f: 7e bc e9  JMP    $BCE9
bd62: 86 16     LDA    #$16
bd64: 7e bc e9  JMP    $BCE9
bd67: 86 17     LDA    #$17
bd69: 7e bc e9  JMP    $BCE9
bd6c: 86 18     LDA    #$18
bd6e: 7e bc e9  JMP    $BCE9
bd71: 86 19     LDA    #$19
bd73: 7e bc e9  JMP    $BCE9
bd76: 86 1a     LDA    #$1A
bd78: 7e bc e9  JMP    $BCE9
bd7b: 86 1b     LDA    #$1B
bd7d: 7e bc e9  JMP    $BCE9
bd80: 86 1c     LDA    #$1C
bd82: 7e bc e9  JMP    $BCE9
bd85: 86 1d     LDA    #$1D
bd87: 7e bc e9  JMP    $BCE9
bd8a: 86 1e     LDA    #$1E
bd8c: 7e bc e9  JMP    $BCE9
bd8f: 86 1f     LDA    #$1F
bd91: 7e bc e9  JMP    $BCE9
bd94: 86 20     LDA    #$20
bd96: 7e bc e9  JMP    $BCE9
bd99: 86 21     LDA    #$21
bd9b: 7e bc e9  JMP    $BCE9
bd9e: 86 22     LDA    #$22
bda0: 7e bc e9  JMP    $BCE9
bda3: 86 23     LDA    #$23
bda5: 7e bc e9  JMP    $BCE9
bda8: 86 24     LDA    #$24
bdaa: 7e bc e9  JMP    $BCE9
bdad: 86 25     LDA    #$25
bdaf: 7e bc e9  JMP    $BCE9
bdb2: 86 26     LDA    #$26
bdb4: 7e bc e9  JMP    $BCE9
bdb7: 86 27     LDA    #$27
bdb9: 7e bc e9  JMP    $BCE9
bdbc: 86 28     LDA    #$28
bdbe: 7e bc e9  JMP    $BCE9
bdc1: 86 29     LDA    #$29
bdc3: 7e bc e9  JMP    $BCE9
bdc6: 86 2a     LDA    #$2A
bdc8: 7e bc e9  JMP    $BCE9
bdcb: 86 2b     LDA    #$2B
bdcd: 7e bc e9  JMP    $BCE9
bdd0: 86 2c     LDA    #$2C
bdd2: 7e bc e9  JMP    $BCE9
bdd5: 86 2d     LDA    #$2D
bdd7: 7e bc e9  JMP    $BCE9
bdda: 86 2e     LDA    #$2E
bddc: 7e bc e9  JMP    $BCE9
bddf: 86 2f     LDA    #$2F
bde1: 7e bc e9  JMP    $BCE9
bde4: 86 30     LDA    #$30
bde6: 7e bc e9  JMP    $BCE9
bde9: 86 31     LDA    #$31
bdeb: 7e bc e9  JMP    $BCE9
bdee: 86 32     LDA    #$32
bdf0: 7e bc e9  JMP    $BCE9
bdf3: 86 33     LDA    #$33
bdf5: 7e bc e9  JMP    $BCE9
bdf8: 86 34     LDA    #$34
bdfa: 7e bc e9  JMP    $BCE9
bdfd: 86 35     LDA    #$35
bdff: 7e bc e9  JMP    $BCE9
be02: 86 36     LDA    #$36
be04: 7e bc e9  JMP    $BCE9
be07: 86 37     LDA    #$37
be09: 7e bc e9  JMP    $BCE9
be0c: 86 38     LDA    #$38
be0e: 7e bc e9  JMP    $BCE9
be11: 86 39     LDA    #$39
be13: 7e bc e9  JMP    $BCE9
be16: 86 3a     LDA    #$3A
be18: 7e bc e9  JMP    $BCE9
be1b: 86 3b     LDA    #$3B
be1d: 7e bc e9  JMP    $BCE9
be20: 86 59     LDA    #$59
be22: bd d8 df  JSR    $D8DF
be25: 4c        INCA
be26: 81 65     CMPA   #$65
be28: 25 f8     BCS    $00CA
be2a: 86 d3     LDA    #$D3
be2c: bd d8 df  JSR    $D8DF
be2f: cc 64 80  LDD    #$6480
be32: ed a1     STD    ,Y++
be34: 8e 45 3c  LDX    #$453C
be37: ce c7 bb  LDU    #$C7BB
be3a: ec c1     LDD    ,U++
be3c: ed a1     STD    ,Y++
be3e: cc 00 30  LDD    #$0030
be41: ed a1     STD    ,Y++
be43: ff 4a fa  STU    $4AFA
be46: c6 05     LDB    #$05
be48: d7 ad     STB    <$AD
be4a: c6 05     LDB    #$05
be4c: a6 80     LDA    ,X+
be4e: bd e7 ad  JSR    $E7AD
be51: 5a        DECB
be52: 2a f8     BPL    $00F4
be54: cc 80 40  LDD    #$8040
be57: ed a1     STD    ,Y++
be59: fe 4a fa  LDU    $4AFA
be5c: 8c 45 54  CMPX   #$4554
be5f: 25 d9     BCS    $00E2
be61: fc c7 c1  LDD    $C7C1
be64: ed a1     STD    ,Y++
be66: cc 01 3c  LDD    #$013C
be69: ed a1     STD    ,Y++
be6b: 86 01     LDA    #$01
be6d: 97 ad     STA    <$AD
be6f: b6 45 88  LDA    $4588
be72: bd e7 ad  JSR    $E7AD
be75: b6 45 89  LDA    $4589
be78: bd e7 ad  JSR    $E7AD
be7b: cc 80 40  LDD    #$8040
be7e: ed a1     STD    ,Y++
be80: 8e 45 48  LDX    #$4548
be83: bd c6 d4  JSR    $C6D4
be86: ce 4a fe  LDU    #$4AFE
be89: 8e 45 42  LDX    #$4542
be8c: bd c6 d7  JSR    $C6D7
be8f: b6 4a fc  LDA    $4AFC
be92: bb 4b 00  ADDA   $4B00
be95: 19        DAA
be96: b7 4a fc  STA    $4AFC
be99: b6 4a fb  LDA    $4AFB
be9c: b9 4a ff  ADCA   $4AFF
be9f: 19        DAA
bea0: b7 4a fb  STA    $4AFB
bea3: b6 4a fa  LDA    $4AFA
bea6: b9 4a fe  ADCA   $4AFE
bea9: 19        DAA
beaa: b7 4a fa  STA    $4AFA
bead: fc c7 c3  LDD    $C7C3
beb0: ed a1     STD    ,Y++
beb2: cc 00 30  LDD    #$0030
beb5: ed a1     STD    ,Y++
beb7: c6 05     LDB    #$05
beb9: d7 ad     STB    <$AD
bebb: b6 4a fa  LDA    $4AFA
bebe: bd e7 90  JSR    $E790
bec1: b6 4a fb  LDA    $4AFB
bec4: bd e7 90  JSR    $E790
bec7: b6 4a fc  LDA    $4AFC
beca: bd e7 90  JSR    $E790
becd: cc 80 40  LDD    #$8040
bed0: ed a1     STD    ,Y++
bed2: 8e 45 54  LDX    #$4554
bed5: bd c6 d4  JSR    $C6D4
bed8: bd c0 87  JSR    $C087
bedb: fc c7 c9  LDD    $C7C9
bede: ed a1     STD    ,Y++
bee0: cc 00 30  LDD    #$0030
bee3: ed a1     STD    ,Y++
bee5: c6 07     LDB    #$07
bee7: d7 ad     STB    <$AD
bee9: b6 4a fa  LDA    $4AFA
beec: bd e7 90  JSR    $E790
beef: b6 4a fb  LDA    $4AFB
bef2: bd e7 90  JSR    $E790
bef5: b6 4a fc  LDA    $4AFC
bef8: bd e7 90  JSR    $E790
befb: b6 4a fd  LDA    $4AFD
befe: bd e7 90  JSR    $E790
bf01: cc 80 40  LDD    #$8040
bf04: ed a1     STD    ,Y++
bf06: 8e 45 5c  LDX    #$455C
bf09: bd c6 d4  JSR    $C6D4
bf0c: bd c0 87  JSR    $C087
bf0f: fc c7 cb  LDD    $C7CB
bf12: ed a1     STD    ,Y++
bf14: cc 00 30  LDD    #$0030
bf17: ed a1     STD    ,Y++
bf19: c6 07     LDB    #$07
bf1b: d7 ad     STB    <$AD
bf1d: b6 4a fa  LDA    $4AFA
bf20: bd e7 90  JSR    $E790
bf23: b6 4a fb  LDA    $4AFB
bf26: bd e7 90  JSR    $E790
bf29: b6 4a fc  LDA    $4AFC
bf2c: bd e7 90  JSR    $E790
bf2f: b6 4a fd  LDA    $4AFD
bf32: bd e7 90  JSR    $E790
bf35: cc 80 40  LDD    #$8040
bf38: ed a1     STD    ,Y++
bf3a: 8e 45 4c  LDX    #$454C
bf3d: bd c6 d4  JSR    $C6D4
bf40: 7f 4a fa  CLR    $4AFA
bf43: b6 4a fb  LDA    $4AFB
bf46: ba 4a fc  ORA    $4AFC
bf49: ba 4a fd  ORA    $4AFD
bf4c: 27 2e     BEQ    $0224
bf4e: 8e 45 54  LDX    #$4554
bf51: ce 4a fe  LDU    #$4AFE
bf54: bd c6 d7  JSR    $C6D7
bf57: bd 86 14  JSR    >$0000
