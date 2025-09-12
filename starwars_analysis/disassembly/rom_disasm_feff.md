feff: 86 00        LDA    #$00
ff01: a7 c4        STA    ,U
ff03: 8e 00 00     LDX    #$0000
ff06: b7 46 40     STA    $4640
ff09: 30 01        LEAX   $1,X
ff0b: 8c ac 55     CMPX   #$AC55
ff0e: 25 f6        BCS    $FF06
ff10: 86 ff        LDA    #$FF
ff12: a7 c4        STA    ,U
ff14: 8e 00 00     LDX    #$0000
ff17: b7 46 40     STA    $4640
ff1a: 30 01        LEAX   $1,X
ff1c: 8c ac 55     CMPX   #$AC55
ff1f: 25 f6        BCS    $FF17
ff21: 7e fd 07     JMP    $FD07
ff24: 86 00        LDA    #$00
ff26: b7 46 86     STA    $4686
ff29: b7 46 83     STA    $4683
ff2c: b7 46 82     STA    $4682
ff2f: 8e 00 00     LDX    #$0000
ff32: b7 46 40     STA    $4640
ff35: 30 01        LEAX   $1,X
ff37: 8c 56 00     CMPX   #$5600
ff3a: 25 f6        BCS    $FF32
ff3c: 86 ff        LDA    #$FF
ff3e: b7 46 86     STA    $4686
ff41: b7 46 83     STA    $4683
ff44: b7 46 82     STA    $4682
ff47: 8e 00 00     LDX    #$0000
ff4a: b7 46 40     STA    $4640
ff4d: 30 01        LEAX   $1,X
ff4f: 8c 56 00     CMPX   #$5600
ff52: 25 f6        BCS    $FF4A
ff54: 7e fd 07     JMP    $FD07
ff57: a6 bf c8 40  LDA    [$C840]
ff5b: 96 1f        LDA    <$1F
ff5d: 64 10        LSR    -$10,X
ff5f: 59           ROLB
ff60: a0 74        SUBA   -$C,S
ff62: a6 20        LDA    $0,Y
ff64: 7b 6e e0     XDEC   $6EE0
ff67: 7d e8 ae     TST    $E8AE
ff6a: cd           XHCF
ff6b: 78 92 07     ASL    $9207
ff6e: f4 00 18     ANDB   >$0018
ff71: e9 40        ADCB   $0,U
ff73: 9a f5        ORA    <$F5
ff75: b0 38 07     SUBA   $3807
ff78: ff ff ff     STU    $FFFF
ff7b: ff ff ff     STU    $FFFF
ff7e: ff ff ff     STU    $FFFF
ff81: ff ff ff     STU    $FFFF
ff84: ff ff ff     STU    $FFFF
ff87: ff ff ff     STU    $FFFF
ff8a: ff ff ff     STU    $FFFF
ff8d: ff ff ff     STU    $FFFF
ff90: ff ff ff     STU    $FFFF
ff93: ff ff ff     STU    $FFFF
ff96: ff ff ff     STU    $FFFF
ff99: ff ff ff     STU    $FFFF
ff9c: ff ff ff     STU    $FFFF
ff9f: ff ff ff     STU    $FFFF
ffa2: ff ff ff     STU    $FFFF
ffa5: ff ff ff     STU    $FFFF
ffa8: ff ff ff     STU    $FFFF
ffab: ff ff ff     STU    $FFFF
ffae: ff ff ff     STU    $FFFF
ffb1: ff ff ff     STU    $FFFF
ffb4: ff ff ff     STU    $FFFF
ffb7: ff ff ff     STU    $FFFF
ffba: ff ff ff     STU    $FFFF
ffbd: ff ff ff     STU    $FFFF
ffc0: ff ff ff     STU    $FFFF
ffc3: ff ff ff     STU    $FFFF
ffc6: ff ff ff     STU    $FFFF
ffc9: ff ff ff     STU    $FFFF
ffcc: ff ff ff     STU    $FFFF
ffcf: ff ff ff     STU    $FFFF
ffd2: ff ff ff     STU    $FFFF
ffd5: ff ff ff     STU    $FFFF
ffd8: ff ff ff     STU    $FFFF
ffdb: ff 43 4f     STU    $434F
ffde: 50           NEGB
ffdf: 59           ROLB
ffe0: 52           XNCB
ffe1: 49           ROLA
ffe2: 47           ASRA
ffe3: 48           ASLA
ffe4: 54           LSRB
ffe5: 20 31        BRA    $0018
ffe7: 39           RTS
ffe8: 38 33        XANDCC #$33
ffea: 20 41        BRA    $002D
ffec: 54           LSRB
ffed: 41           NEGA
ffee: 52           XNCB
ffef: 49           ROLA
fff0: 0c 85        INC    <$85
fff2: ef 54        STU    -$C,U
fff4: ef 54        STU    -$C,U
fff6: ef 54        STU    -$C,U
fff8: ef 56        STU    -$A,U
fffa: ef 54        STU    -$C,U
fffc: ef 54        STU    -$C,U
fffe: f2 61 00     SBCB   $6100
