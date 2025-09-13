cb08: 8e cb a4     LDX    #$CBA4
cb0b: fc 48 79     LDD    $4879
cb0e: 83 00 08     SUBD   #$0008
cb11: a3 84        SUBD   ,X
cb13: 4d           TSTA
cb14: 2a 04        BPL    $CB1A
cb16: 43           COMA
cb17: 50           NEGB
cb18: 82 ff        SBCA   #$FF
cb1a: dd 01        STD    <$01
cb1c: 10 83 00 18  CMPD   #$0018
cb20: 24 27        BCC    $CB49
cb22: fc 48 7b     LDD    $487B
cb25: c3 ff 8c     ADDD   #$FF8C
cb28: a3 02        SUBD   $2,X
cb2a: 4d           TSTA
cb2b: 2a 04        BPL    $CB31
cb2d: 43           COMA
cb2e: 50           NEGB
cb2f: 82 ff        SBCA   #$FF
cb31: 10 83 00 18  CMPD   #$0018
cb35: 24 12        BCC    $CB49
cb37: d3 01        ADDD   <$01
cb39: 10 83 00 20  CMPD   #$0020
cb3d: 24 0a        BCC    $CB49
cb3f: 1f 10        TFR    X,D
cb41: 83 cb a4     SUBD   #$CBA4
cb44: 54           LSRB
cb45: 54           LSRB
cb46: f7 4a ef     STB    $4AEF
cb49: 30 04        LEAX   $4,X
cb4b: 8c cc 18     CMPX   #$CC18
cb4e: 25 bb        BCS    $CB0B
cb50: b6 4a ef     LDA    $4AEF
cb53: 81 1b        CMPA   #$1B
cb55: 24 02        BCC    $CB59
cb57: a7 c4        STA    ,U
cb59: 96 ac        LDA    <$AC
cb5b: 84 f0        ANDA   #$F0
cb5d: 27 44        BEQ    $CBA3
cb5f: b6 4a ef     LDA    $4AEF
cb62: 81 1b        CMPA   #$1B
cb64: 26 1c        BNE    $CB82
cb66: b6 4a ee     LDA    $4AEE
cb69: 81 02        CMPA   #$02
cb6b: 22 04        BHI    $CB71
cb6d: 86 00        LDA    #$00
cb6f: a7 c4        STA    ,U
cb71: b6 4a ee     LDA    $4AEE
cb74: 27 07        BEQ    $CB7D
cb76: 7a 4a ee     DEC    $4AEE
cb79: 86 00        LDA    #$00
cb7b: a7 5f        STA    -$1,U
cb7d: bd bd f8     JSR    $BDF8
cb80: 20 21        BRA    $CBA3
cb82: 81 1c        CMPA   #$1C
cb84: 26 0b        BNE    $CB91
cb86: cc ff ff     LDD    #$FFFF
cb89: fd 4a ec     STD    $4AEC
cb8c: bd bd d5     JSR    $BDD5
cb8f: 20 12        BRA    $CBA3
cb91: 7c 4a ee     INC    $4AEE
cb94: b6 4a ee     LDA    $4AEE
cb97: 81 03        CMPA   #$03
cb99: 25 05        BCS    $CBA0
cb9b: 86 1c        LDA    #$1C
cb9d: b7 4a ef     STA    $4AEF
cba0: bd be 16     JSR    $BE16
cba3: 39           RTS
