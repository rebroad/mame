70cc: 8e 48 6f     LDX    #$486F
70cf: bd 70 f0     JSR    $70F0
70d2: bd 71 11     JSR    $7111
70d5: 27 03        BEQ    $000E
70d7: bd ce 3a     JSR    $CE3A
70da: 39           RTS
70db: 1a 10        ORCC   #$10
70dd: dc 6b        LDD    <$6B
70df: dd 7f        STD    <$7F
70e1: dc 74        LDD    <$74
70e3: dd 7d        STD    <$7D
70e5: dc 2f        LDD    <$2F
70e7: dd 7b        STD    <$7B
70e9: dc 2d        LDD    <$2D
70eb: dd 79        STD    <$79
70ed: 1c ef        ANDCC  #$EF
70ef: 39           RTS
70f0: a6 07        LDA    $7,X
70f2: 2a 01        BPL    $0029
70f4: 43           COMA
70f5: c6 80        LDB    #$80
70f7: 3d           MUL
70f8: 12           NOP
70f9: 12           NOP
70fa: 12           NOP
70fb: e6 07        LDB    $7,X
70fd: 2b 08        BMI    $003B
70ff: ab 08        ADDA   $8,X
7101: 28 02        BVC    $0039
7103: 86 7f        LDA    #$7F
7105: 20 07        BRA    $0042
7107: 40           NEGA
7108: ab 08        ADDA   $8,X
710a: 28 02        BVC    $0042
710c: 86 81        LDA    #$81
710e: a7 08        STA    $8,X
7110: 39           RTS
7111: a6 08        LDA    $8,X
7113: 2a 01        BPL    $004A
7115: 40           NEGA
7116: 81 4e        CMPA   #$4E
7118: 25 20        BCS    $006E
711a: cc 3f c2     LDD    #$3FC2
711d: fd 50 24     STD    $5024
7120: a6 08        LDA    $8,X
7122: 2a 0b        BPL    $0063
7124: 8b 4e        ADDA   #$4E
7126: a7 08        STA    $8,X
7128: cc fa 70     LDD    #$FA70
712b: fd 50 22     STD    $5022
712e: 39           RTS
712f: 80 4e        SUBA   #$4E
7131: a7 08        STA    $8,X
7133: cc 05 90     LDD    #$0590
7136: fd 50 22     STD    $5022
7139: 39           RTS
713a: 81 0e        CMPA   #$0E
713c: 25 20        BCS    $0092
713e: cc 3f fe     LDD    #$3FFE
7141: fd 50 24     STD    $5024
7144: a6 08        LDA    $8,X
7146: 2a 0b        BPL    $0087
7148: 8b 0e        ADDA   #$0E
714a: a7 08        STA    $8,X
714c: cc ff 00     LDD    #$FF00
714f: fd 50 22     STD    $5022
7152: 39           RTS
7153: 80 0e        SUBA   #$0E
7155: a7 08        STA    $8,X
7157: cc 01 00     LDD    #$0100
715a: fd 50 22     STD    $5022
715d: 39           RTS
715e: 5f           CLRB
715f: 39           RTS
7160: b6 48 6e     LDA    $486E
7163: 27 1c        BEQ    $00B5
7165: bd 71 c4     JSR    $71C4
7168: b6 48 6e     LDA    $486E
716b: 2a 09        BPL    $00AA
716d: cc 00 00     LDD    #$0000
7170: b3 50 22     SUBD   $5022
7173: fd 50 22     STD    $5022
7176: 4f           CLRA
7177: c6 05        LDB    #$05
7179: fd 47 01     STD    $4701
717c: 86 0e        LDA    #$0E
717e: bd cd ba     JSR    $CDBA
7181: b6 48 77     LDA    $4877
7184: 27 1c        BEQ    $00D6
7186: bd 71 c4     JSR    $71C4
7189: b6 48 77     LDA    $4877
718c: 2a 09        BPL    $00CB
718e: cc 00 00     LDD    #$0000
7191: b3 50 22     SUBD   $5022
7194: fd 50 22     STD    $5022
7197: 4f           CLRA
7198: c6 05        LDB    #$05
719a: fd 47 01     STD    $4701
719d: 86 1c        LDA    #$1C
719f: bd cd ba     JSR    $CDBA
71a2: b6 48 78     LDA    $4878
71a5: 27 1c        BEQ    $00F7
71a7: bd 71 c4     JSR    $71C4
71aa: b6 48 78     LDA    $4878
71ad: 2a 09        BPL    $00EC
71af: cc 00 00     LDD    #$0000
71b2: b3 50 22     SUBD   $5022
71b5: fd 50 22     STD    $5022
71b8: 4f           CLRA
71b9: c6 05        LDB    #$05
71bb: fd 47 01     STD    $4701
71be: 86 00        LDA    #$00
71c0: bd cd ba     JSR    $CDBA
71c3: 39           RTS
71c4: 2a 01        BPL    $00FB
71c6: 40           NEGA
71c7: c6 03        LDB    #$03
71c9: 3d           MUL
71ca: 8e 71 da     LDX    #$71DA
71cd: 3a           ABX
71ce: ec 84        LDD    ,X
71d0: fd 50 22     STD    $5022
71d3: e6 02        LDB    $2,X
71d5: 1d           SEX
71d6: c3 40 00     ADDD   #$4000
71d9: fd 50 24     STD    $5024
71dc: 39           RTS
71dd: 00 12        NEG    <$12
71df: 00 00        NEG    <$00
71e1: 25 00        BCS    $0117
71e3: 00 37        NEG    <$37
71e5: 00 00        NEG    <$00
71e7: 49           ROLA
71e8: 00 00        NEG    <$00
71ea: 5b           XDECB
71eb: 00 00        NEG    <$00
71ed: 6e 00        JMP    $0,X
71ef: 00 80        NEG    <$80
71f1: 00 00        NEG    <$00
71f3: 92 ff        SBCA   <$FF
71f5: 00 a5        NEG    <$A5
71f7: ff 00 b7     STU    >$00B7
71fa: ff 00 c9     STU    >$00C9
71fd: ff 00 db     STU    >$00DB
7200: ff 00 ee     STU    >$00EE
7203: fe 01 00     LDU    $0100
7206: fe 01 12     LDU    $0112
7209: fe 01 24     LDU    $0124
720c: fd 01 37     STD    $0137
720f: fd 01 49     STD    $0149
7212: fd 01 5b     STD    $015B
7215: fc 01 6e     LDD    $016E
7218: fc 01 80     LDD    $0180
721b: fc 01 92     LDD    $0192
721e: fb 01 a4     ADDB   $01A4
7221: fb 01 b7     ADDB   $01B7
7224: fa 01 c9     ORB    $01C9
7227: fa 01 db     ORB    $01DB
722a: f9 01 ed     ADCB   $01ED
722d: f9 02 00     ADCB   $0200
7230: f8 02 12     EORB   $0212
7233: f7 02 24     STB    $0224
7236: f7 02 37     STB    $0237
7239: f6 02 49     LDB    $0249
723c: f6 02 5b     LDB    $025B
723f: f5 02 6d     BITB   $026D
7242: f4 02 80     ANDB   $0280
7245: f4 02 92     ANDB   $0292
7248: f3 02 a4     ADDD   $02A4
724b: f2 02 b6     SBCB   $02B6
724e: f1 02 c9     CMPB   $02C9
7251: f0 02 db     SUBB   $02DB
7254: f0 02 ed     SUBB   $02ED
7257: ef 02        STU    $2,X
7259: ff ee 03     STU    $EE03
725c: 12           NOP
725d: ed 03        STD    $3,X
725f: 24 ec        BCC    $0181
7261: 03 36        COM    <$36
7263: eb 03        ADDB   $3,X
7265: 48           ASLA
7266: ea 03        ORB    $3,X
7268: 5b           XDECB
7269: e9 03        ADCB   $3,X
726b: 6d e9 03 7f  TST    $037F,S
726f: e8 03        EORB   $3,X
7271: 91 e7        CMPA   <$E7
7273: 03 a4        COM    <$A4
7275: e5 03        BITB   $3,X
7277: b6 e4 03     LDA    $E403
727a: c8 e3        EORB   #$E3
727c: 03 da        COM    <$DA
727e: e2 03        SBCB   $3,X
7280: ed e1        STD    ,S++
7282: 03 ff        COM    <$FF
7284: e0 04        SUBB   $4,X
7286: 11 df 04     STU    <$04
7289: 23 de        BLS    $019D
728b: 04 36        LSR    <$36
728d: dd 04        STD    <$04
728f: 48           ASLA
7290: db 04        ADDB   <$04
7292: 5a           DECB
7293: da 04        ORB    <$04
7295: 6c d9 04 7f  INC    [$047F,U]
7299: d8 04        EORB   <$04
729b: 91 d6        CMPA   <$D6
729d: 04 a3        LSR    <$A3
729f: d5 04        BITB   <$04
72a1: b5 d4 04     BITA   $D404
72a4: c8 d2        EORB   #$D2
72a6: 04 da        LSR    <$DA
72a8: d1 04        CMPB   <$04
72aa: ec cf        LDD    ,W++
72ac: 04 fe        LSR    <$FE
72ae: ce 05 10     LDU    #$0510
72b1: cd           XHCF
72b2: 05 23        LSR    <$23
72b4: cb 05        ADDB   #$05
72b6: 35 ca        PULS   A,DP,U,PC
72b8: 05 47        LSR    <$47
72ba: c8 05        EORB   #$05
72bc: 59           ROLB
72bd: c7 05        XSTB   #$05
72bf: 6c c5        INC    B,U
72c1: 05 7e        LSR    <$7E
72c3: c4 05        ANDB   #$05
72c5: 90 c2        SUBA   <$C2
72c7: bd 61 12     JSR    $6112
72ca: 86 10        LDA    #$10
