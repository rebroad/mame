caf3: be 4a ec     LDX    $4AEC
caf6: f6 4a ee     LDB    $4AEE
caf9: 3a           ABX
cafa: 1f 13        TFR    X,U
cafc: b6 4a ee     LDA    $4AEE
caff: 81 03        CMPA   #$03
cb01: 25 05        BCS    $0015
cb03: 8e cc 10     LDX    #$CC10
cb06: 20 03        BRA    $0018
cb08: 8e cb a4     LDX    #$CBA4
cb0b: fc 48 79     LDD    $4879
cb0e: 83 00 08     SUBD   #$0008
cb11: a3 84        SUBD   ,X
cb13: 4d           TSTA
cb14: 2a 04        BPL    $0027
cb16: 43           COMA
cb17: 50           NEGB
cb18: 82 ff        SBCA   #$FF
cb1a: dd 01        STD    <$01
cb1c: 10 83 00 18  CMPD   #$0018
cb20: 24 27        BCC    $0056
cb22: fc 48 7b     LDD    $487B
cb25: c3 ff 8c     ADDD   #$FF8C
cb28: a3 02        SUBD   $2,X
cb2a: 4d           TSTA
cb2b: 2a 04        BPL    $003E
cb2d: 43           COMA
cb2e: 50           NEGB
cb2f: 82 ff        SBCA   #$FF
cb31: 10 83 00 18  CMPD   #$0018
cb35: 24 12        BCC    $0056
cb37: d3 01        ADDD   <$01
cb39: 10 83 00 20  CMPD   #$0020
cb3d: 24 0a        BCC    $0056
cb3f: 1f 10        TFR    X,D
cb41: 83 cb a4     SUBD   #$CBA4
cb44: 54           LSRB
cb45: 54           LSRB
cb46: f7 4a ef     STB    $4AEF
cb49: 30 04        LEAX   $4,X
cb4b: 8c cc 18     CMPX   #$CC18
cb4e: 25 bb        BCS    $0018
cb50: b6 4a ef     LDA    $4AEF
cb53: 81 1b        CMPA   #$1B
cb55: 24 02        BCC    $0066
cb57: a7 c4        STA    ,U
cb59: 96 ac        LDA    <$AC
cb5b: 84 f0        ANDA   #$F0
cb5d: 27 44        BEQ    $00B0
cb5f: b6 4a ef     LDA    $4AEF
cb62: 81 1b        CMPA   #$1B
cb64: 26 1c        BNE    $008F
cb66: b6 4a ee     LDA    $4AEE
cb69: 81 02        CMPA   #$02
cb6b: 22 04        BHI    $007E
cb6d: 86 00        LDA    #$00
cb6f: a7 c4        STA    ,U
cb71: b6 4a ee     LDA    $4AEE
cb74: 27 07        BEQ    $008A
cb76: 7a 4a ee     DEC    $4AEE
cb79: 86 00        LDA    #$00
cb7b: a7 5f        STA    -$1,U
cb7d: bd bd f8     JSR    $BDF8
cb80: 20 21        BRA    $00B0
cb82: 81 1c        CMPA   #$1C
cb84: 26 0b        BNE    $009E
cb86: cc ff ff     LDD    #$FFFF
cb89: fd 4a ec     STD    $4AEC
cb8c: bd bd d5     JSR    $BDD5
cb8f: 20 12        BRA    $00B0
cb91: 7c 4a ee     INC    $4AEE
cb94: b6 4a ee     LDA    $4AEE
cb97: 81 03        CMPA   #$03
cb99: 25 05        BCS    $00AD
cb9b: 86 1c        LDA    #$1C
cb9d: b7 4a ef     STA    $4AEF
cba0: bd be 16     JSR    $BE16
cba3: 39           RTS
cba4: 01 1c        NEG    <$1C
cba6: ff 44 fe     STU    $44FE
cba9: dc ff        LDD    <$FF
cbab: a4 fe        ANDA   [W,S]
cbad: dc ff        LDD    <$FF
cbaf: 74 fe dc     LSR    $FEDC
cbb2: ff 44 fe     STU    $44FE
cbb5: dc ff        LDD    <$FF
cbb7: 14           XHCF
cbb8: fe dc fe     LDU    $DCFE
cbbb: e4 fe        ANDB   [W,S]
cbbd: dc fe        LDD    <$FE
cbbf: b4 fe dc     ANDA   $FEDC
cbc2: fe 84 fe     LDU    $84FE
cbc5: dc fe        LDD    <$FE
cbc7: 54           LSRB
cbc8: fe dc fe     LDU    $DCFE
cbcb: 24 ff        BCC    $00D9
cbcd: 0c fe        INC    <$FE
cbcf: 24 ff        BCC    $00DD
cbd1: 3c fe        CWAI   #$FE
cbd3: 24 ff        BCC    $00E1
cbd5: 6c fe        INC    [W,S]
cbd7: 24 ff        BCC    $00E5
cbd9: 9c fe        CMPX   <$FE
cbdb: 24 ff        BCC    $00E9
cbdd: cc fe 24     LDD    #$FE24
cbe0: ff fc fe     STU    $FCFE
cbe3: 24 00        BCC    $00F2
cbe5: 2c fe        BGE    $00F2
cbe7: 24 00        BCC    $00F6
cbe9: 5c           INCB
cbea: fe 24 00     LDU    $2400
cbed: 8c fe 24     CMPX   #$FE24
cbf0: 00 bc        NEG    <$BC
cbf2: fe 24 00     LDU    $2400
cbf5: ec fe        LDD    [W,S]
cbf7: 24 01        BCC    $0107
cbf9: 1c fe        ANDCC  #$FE
cbfb: 24 01        BCC    $010B
cbfd: 1c fe        ANDCC  #$FE
cbff: 54           LSRB
cc00: 01 1c        NEG    <$1C
cc02: fe 84 01     LDU    $8401
cc05: 1c fe        ANDCC  #$FE
cc07: b4 01 1c     ANDA   $011C
cc0a: fe e4 01     LDU    $E401
cc0d: 1c ff        ANDCC  #$FF
cc0f: 14           XHCF
cc10: 01 1c        NEG    <$1C
cc12: ff 74 01     STU    $7401
cc15: 1c ff        ANDCC  #$FF
cc17: a4 bd cc 5b  ANDA   [$CD83,PCR]
cc1b: 86 01        LDA    #$01
cc1d: bd c2 c3     JSR    $C2C3
cc20: 26 16        BNE    $0145
cc22: ce 4a b6     LDU    #$4AB6
cc25: 8e 45 20     LDX    #$4520
cc28: 86 08        LDA    #$08
cc2a: bd c6 d9     JSR    $C6D9
cc2d: ce 4a 8e     LDU    #$4A8E
cc30: 8e 45 08     LDX    #$4508
cc33: 86 0b        LDA    #$0B
cc35: bd c6 d9     JSR    $C6D9
cc38: 8e 4a b6     LDX    #$4AB6
cc3b: a6 80        LDA    ,X+
cc3d: 81 1b        CMPA   #$1B
cc3f: 24 1a        BCC    $0168
cc41: 8c 4a d4     CMPX   #$4AD4
cc44: 25 f5        BCS    $0148
cc46: 8e 4a 8e     LDX    #$4A8E
cc49: a6 80        LDA    ,X+
cc4b: 81 a0        CMPA   #$A0
cc4d: 24 0c        BCC    $0168
cc4f: 84 0f        ANDA   #$0F
cc51: 81 0a        CMPA   #$0A
cc53: 24 06        BCC    $0168
cc55: 8c 4a b6     CMPX   #$4AB6
cc58: 25 ef        BCS    $0156
cc5a: 39           RTS
cc5b: 8e 4a b6     LDX    #$4AB6
cc5e: ce cc 7a     LDU    #$CC7A
cc61: ec c1        LDD    ,U++
cc63: ed 81        STD    ,X++
cc65: 8c 4a d4     CMPX   #$4AD4
cc68: 25 f7        BCS    $016E
cc6a: 8e 4a 8e     LDX    #$4A8E
cc6d: ce cc 98     LDU    #$CC98
cc70: ec c1        LDD    ,U++
cc72: ed 81        STD    ,X++
cc74: 8c 4a b6     CMPX   #$4AB6
cc77: 25 f7        BCS    $017D
cc79: 39           RTS
cc7a: 0f 02        CLR    <$02
cc7c: 09 17        ROL    <$17
cc7e: 01 0e        NEG    <$0E
cc80: 08 01        ASL    <$01
cc82: 0e 07        JMP    <$07
cc84: 0a 12        DEC    <$12
cc86: 0d 0c        TST    <$0C
cc88: 08 0a        ASL    <$0A
cc8a: 05 04        LSR    <$04
cc8c: 0e 0c        JMP    <$0C
cc8e: 01 05        NEG    <$05
cc90: 0a 04        DEC    <$04
cc92: 05 01        LSR    <$01
cc94: 12           NOP
cc95: 12           NOP
cc96: 0c 0d        INC    <$0D
cc98: 01 28        NEG    <$28
cc9a: 53           COMB
cc9b: 53           COMB
cc9c: 01 11        NEG    <$11
cc9e: 09 36        ROL    <$36
cca0: 01 02        NEG    <$02
cca2: 46           RORA
cca3: 50           NEGB
cca4: 00 87        NEG    <$87
cca6: 25 51        BCS    $0206
cca8: 00 81        NEG    <$81
ccaa: 35 53        PULS   CC,A,X,U
ccac: 00 70        NEG    <$70
ccae: 48           ASLA
ccaf: 99 00        ADCA   <$00
ccb1: 51           NEGB
ccb2: 80 00        SUBA   #$00
ccb4: 00 49        NEG    <$49
ccb6: 21 59        BRN    $021E
ccb8: 00 38        NEG    <$38
ccba: 47           ASRA
ccbb: 66 00        ROR    $0,X
ccbd: 38 06        XANDCC #$06
ccbf: 55           LSRB
ccc0: 1a 01        ORCC   #$01
ccc2: 76 46 84     ROR    $4684
ccc5: bd 67 0d     JSR    $670D
ccc8: 7f 46 84     CLR    $4684
cccb: 39           RTS
cccc: 1a 01        ORCC   #$01
ccce: 76 46 84     ROR    $4684
ccd1: bd 67 24     JSR    $6724
ccd4: 7f 46 84     CLR    $4684
ccd7: 39           RTS
ccd8: 1a 01        ORCC   #$01
ccda: 76 46 84     ROR    $4684
ccdd: bd 67 26     JSR    $6726
cce0: 7f 46 84     CLR    $4684
cce3: 39           RTS
cce4: 1a 01        ORCC   #$01
cce6: 76 46 84     ROR    $4684
cce9: bd 67 61     JSR    $6761
ccec: 7f 46 84     CLR    $4684
ccef: 39           RTS
ccf0: 1a 01        ORCC   #$01
ccf2: 76 be 4a     ROR    >$0000
