cde7: fc 50 2a     LDD    $502A
cdea: fe 50 30     LDU    $5030
cded: fd 50 30     STD    $5030
cdf0: ff 50 2a     STU    $502A
cdf3: fc 50 2c     LDD    $502C
cdf6: fe 50 38     LDU    $5038
cdf9: fd 50 38     STD    $5038
cdfc: ff 50 2c     STU    $502C
cdff: fc 50 34     LDD    $5034
ce02: fe 50 3a     LDU    $503A
ce05: fd 50 3a     STD    $503A
ce08: ff 50 34     STU    $5034
ce0b: 39           RTS
ce0c: b7 47 02     STA    $4702
ce0f: 7f 47 01     CLR    $4701
ce12: 86 77        LDA    #$77
ce14: bd cd ba     JSR    $CDBA
ce17: 39           RTS
ce18: b7 47 02     STA    $4702
ce1b: 7f 47 01     CLR    $4701
ce1e: 86 80        LDA    #$80
ce20: bd cd ba     JSR    $CDBA
ce23: 39           RTS
ce24: cc 00 10     LDD    #$0010
ce27: fd 47 01     STD    $4701
ce2a: 86 00        LDA    #$00
ce2c: 7e cd ba     JMP    $CDBA
ce2f: cc 00 10     LDD    #$0010
ce32: fd 47 01     STD    $4701
ce35: 86 0e        LDA    #$0E
ce37: 7e cd ba     JMP    $CDBA
ce3a: cc 00 10     LDD    #$0010
ce3d: fd 47 01     STD    $4701
ce40: 86 1c        LDA    #$1C
ce42: 7e cd ba     JMP    $CDBA
ce45: dc 53        LDD    <$53
ce47: dd 54        STD    <$54
ce49: b6 47 03     LDA    $4703
ce4c: 97 53        STA    <$53
ce4e: 39           RTS
ce4f: 13           SYNC
ce50: d8 35        EORB   <$35
ce52: 8f 04 c4     XSTX   #$04C4
ce55: 55           LSRB
ce56: 52           XNCB
ce57: 46           RORA
ce58: 45           LSRA
ce59: 59           ROLB
ce5a: 20 47        BRA    $CEA3
ce5c: 4f           CLRA
ce5d: 54           LSRB
ce5e: 20 57        BRA    $CEB7
ce60: 49           ROLA
ce61: 52           XNCB
ce62: 45           LSRA
ce63: 44           LSRA
ce64: a7 3e        STA    -$2,Y
ce66: ff ff ff     STU    $FFFF
ce69: ff ff ff     STU    $FFFF
ce6c: ff ff ff     STU    $FFFF
ce6f: ff ff ff     STU    $FFFF
ce72: ff ff ff     STU    $FFFF
ce75: ff ff ff     STU    $FFFF
ce78: ff ff ff     STU    $FFFF
ce7b: ff ff ff     STU    $FFFF
ce7e: ff ff ff     STU    $FFFF
ce81: ff ff ff     STU    $FFFF
ce84: ff ff ff     STU    $FFFF
ce87: ff ff ff     STU    $FFFF
ce8a: ff ff ff     STU    $FFFF
ce8d: ff ff ff     STU    $FFFF
ce90: ff ff ff     STU    $FFFF
ce93: ff ff ff     STU    $FFFF
ce96: ff ff ff     STU    $FFFF
ce99: ff ff ff     STU    $FFFF
ce9c: ff ff ff     STU    $FFFF
ce9f: ff ff ff     STU    $FFFF
cea2: ff ff ff     STU    $FFFF
cea5: ff ff ff     STU    $FFFF
cea8: ff ff ff     STU    $FFFF
ceab: ff ff ff     STU    $FFFF
ceae: ff ff ff     STU    $FFFF
ceb1: ff ff ff     STU    $FFFF
ceb4: ff ff ff     STU    $FFFF
ceb7: ff ff ff     STU    $FFFF
ceba: ff ff ff     STU    $FFFF
cebd: ff ff ff     STU    $FFFF
cec0: ff ff ff     STU    $FFFF
cec3: ff ff ff     STU    $FFFF
cec6: ff ff ff     STU    $FFFF
cec9: ff 43 4f     STU    $434F
cecc: 50           NEGB
cecd: 59           ROLB
cece: 52           XNCB
cecf: 49           ROLA
ced0: 47           ASRA
ced1: 48           ASLA
ced2: 54           LSRB
ced3: 20 31        BRA    $CF06
ced5: 39           RTS
ced6: 38 33        XANDCC #$33
ced8: 20 41        BRA    $CF1B
ceda: 54           LSRB
cedb: 41           NEGA
cedc: 52           XNCB
cedd: 49           ROLA
cede: 1a f6        ORCC   #$F6
cee0: 1d           SEX
cee1: a8 00        EORA   $0,X
cee3: 00 e2        NEG    <$E2
cee5: 08 1f        ASL    <$1F
cee7: 7e e0 00     JMP    $E000
ceea: 00 00        NEG    <$00
ceec: ff 74 bb     STU    $74BB
ceef: 91 1e        CMPA   <$1E
cef1: c0 ff        SUBB   #$FF
cef3: ce bb 8b     LDU    #$BB8B
cef6: 00 00        NEG    <$00
cef8: ff 4c bb     STU    $4CBB
cefb: 91 01        CMPA   <$01
cefd: 40           NEGA
cefe: e0 50        SUBB   -$10,U
cf00: 00 00        NEG    <$00
cf02: ff 4c 51     STU    $4C51
cf05: fb 1f ec     ADDB   $1FEC
cf08: e0 32        SUBB   -$E,Y
cf0a: 1f a6        TFR    CC,inv
cf0c: e0 32        SUBB   -$E,Y
cf0e: bb 91 1f     ADDA   $911F
cf11: b0 ff ec     SUBA   $FFEC
cf14: bb 91 1f     ADDA   $911F
cf17: 9c ff        CMPX   <$FF
cf19: 88 bb        EORA   #$BB
cf1b: 8b 00        ADDA   #$00
cf1d: 00 fe        NEG    <$FE
cf1f: 0c bb        INC    <$BB
cf21: 8b 00        ADDA   #$00
cf23: 8c e0 5a     CMPX   #$E05A
cf26: 00 00        NEG    <$00
cf28: e1 40        CMPB   $0,U
cf2a: 4a           DECA
cf2b: e5 00        BITB   $0,X
cf2d: 14           XHCF
cf2e: ff d8 bb     STU    $D8BB
cf31: 85 00        BITA   #$00
cf33: 5a           DECB
cf34: ff ce bb     STU    $CEBB
cf37: 8b 00        ADDA   #$00
cf39: 50           NEGB
cf3a: e0 28        SUBB   $8,Y
cf3c: 00 64        NEG    <$64
cf3e: e0 82        SUBB   ,-X
cf40: 72 00 80     XNC    >$0080
cf43: 40           NEGA
cf44: c0 00        SUBB   #$00
cf46: 1a f6        ORCC   #$F6
cf48: 00 b4        NEG    <$B4
cf4a: 1e 3e        EXG    U,inv
cf4c: e0 b4        SUBB   [,Y]
cf4e: bb 8b 00     ADDA   $8B00
cf51: 00 ff        NEG    <$FF
cf53: 60 bb        NEG    [D,Y]
cf55: 8b 00        ADDA   #$00
cf57: 46           RORA
cf58: ff e2 bb     STU    $E2BB
cf5b: 8e 00 00     LDX    #$0000
cf5e: ff 56 bb     STU    $56BB
cf61: 91 1f        CMPA   <$1F
cf63: ba ff f6     ORA    $FFF6
cf66: bb 91 00     ADDA   $9100
cf69: 00 ff        NEG    <$FF
cf6b: 60 bb        NEG    [D,Y]
cf6d: 8b 01        ADDA   #$01
cf6f: c2 e0        SBCB   #$E0
cf71: 78 00 00     ASL    >$0000
cf74: e0 e6        SUBB   A,S
cf76: 1f 88        TFR    A,A
cf78: 1f 92        TFR    B,Y
cf7a: bb 8b 1f     ADDA   $8B1F
cf7d: 74 e0 46     LSR    $E046
cf80: 00 00        NEG    <$00
cf82: ff 92 00     STU    $9200
cf85: 8c e0 28     CMPX   #$E028
cf88: 72 00 80     XNC    >$0080
cf8b: 40           NEGA
cf8c: c0 00        SUBB   #$00
cf8e: 1a f6        ORCC   #$F6
cf90: 02 26        XNC    <$26
cf92: 00 00        NEG    <$00
cf94: fe e8 bb     LDU    $E8BB
cf97: 91 1e        CMPA   <$1E
cf99: 3e           XRES
cf9a: e0 5a        SUBB   -$6,U
cf9c: 00 00        NEG    <$00
cf9e: e0 aa        SUBB   F,Y
cfa0: bb 8e 00     ADDA   $8E00
cfa3: 8c ff d8     CMPX   #$FFD8
cfa6: 1f 74        TFR    inv,S
cfa8: e1 22        CMPB   $2,Y
cfaa: bb 8b 00     ADDA   $8B00
cfad: 00 e1        NEG    <$E1
cfaf: 54           LSRB
cfb0: bb 8b 00     ADDA   $8B00
cfb3: 8c ff a6     CMPX   #$FFA6
cfb6: 00 00        NEG    <$00
cfb8: fe f2 00     LDU    $F200
cfbb: 14           XHCF
cfbc: ff d8 00     STU    $D800
cfbf: 3c e0        CWAI   #$E0
cfc1: 3c bb        CWAI   #$BB
cfc3: 88 00        EORA   #$00
cfc5: 6e ff ce 00  JMP    [$CE00]
cfc9: 78 ff 4c     ASL    $FF4C
cfcc: 1f 88        TFR    A,A
cfce: 00 0a        NEG    <$0A
cfd0: bb 88 1f     ADDA   $881F
cfd3: d8 e0        EORB   <$E0
cfd5: 3c 56        CWAI   #$56
cfd7: e5 1f        BITB   -$1,X
cfd9: ce ff d8     LDU    #$FFD8
cfdc: 00 00        NEG    <$00
cfde: ff 7e 00     STU    $7E00
cfe1: 6e ff d8 00  JMP    [$D800]
cfe5: 00 e0        NEG    <$E0
