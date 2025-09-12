bb85: 96 a1        LDA    <$A1
bb87: 48           ASLA
bb88: 8e bb 8e     LDX    #$BB8E
bb8b: ad 96        JSR    [A,X]
bb8d: 39           RTS
bb8e: bb 8d bb     ADDA   $8DBB
bb91: 98 bb        EORA   <$BB
bb93: bb bc 1e     ADDA   $BC1E
bb96: bc 85 cc     CMPX   $85CC
bb99: 64 80        LSR    ,X+
bb9b: ce 76 f0     LDU    #$76F0
bb9e: 9e 9f        LDX    <$9F
bba0: bd bc ae     JSR    $BCAE
bba3: dc 9f        LDD    <$9F
bba5: c3 00 02     ADDD   #$0002
bba8: dd 9f        STD    <$9F
bbaa: 10 83 00 3f  CMPD   #$003F
bbae: 24 0a        BCC    $0035
bbb0: cc 00 01     LDD    #$0001
bbb3: dd 9f        STD    <$9F
bbb5: 0c a1        INC    <$A1
bbb7: bd bd b7     JSR    $BDB7
bbba: 39           RTS
bbbb: 9e 9f        LDX    <$9F
bbbd: cc 61 ff     LDD    #$61FF
bbc0: ce 76 f0     LDU    #$76F0
bbc3: bd bc ae     JSR    $BCAE
bbc6: dc 9f        LDD    <$9F
bbc8: c3 00 02     ADDD   #$0002
bbcb: dd 9f        STD    <$9F
bbcd: 10 83 00 3f  CMPD   #$003F
bbd1: 24 38        BCC    $0086
bbd3: c6 3f        LDB    #$3F
bbd5: d0 a0        SUBB   <$A0
bbd7: 4f           CLRA
bbd8: 1f 01        TFR    D,X
bbda: cc 64 ff     LDD    #$64FF
bbdd: bd bc ae     JSR    $BCAE
bbe0: dc 9f        LDD    <$9F
bbe2: 58           ASLB
bbe3: 49           ROLA
bbe4: 58           ASLB
bbe5: 49           ROLA
bbe6: 58           ASLB
bbe7: 49           ROLA
bbe8: 43           COMA
bbe9: 53           COMB
bbea: 2b 03        BMI    $006A
bbec: 4a           DECA
bbed: ca 80        ORB    #$80
bbef: c3 76 70     ADDD   #$7670
bbf2: 5d           TSTB
bbf3: 2b 03        BMI    $0073
bbf5: 4a           DECA
bbf6: c4 7f        ANDB   #$7F
bbf8: 1f 03        TFR    D,U
bbfa: dc 9f        LDD    <$9F
bbfc: 54           LSRB
bbfd: 54           LSRB
bbfe: c4 07        ANDB   #$07
bc00: c8 07        EORB   #$07
bc02: 5c           INCB
bc03: 1f 01        TFR    D,X
bc05: cc 64 ff     LDD    #$64FF
bc08: bd bc c8     JSR    $BCC8
bc0b: dc 9f        LDD    <$9F
bc0d: 10 83 00 3f  CMPD   #$003F
bc11: 25 0a        BCS    $0098
bc13: cc 00 01     LDD    #$0001
bc16: dd 9f        STD    <$9F
bc18: 0c a1        INC    <$A1
bc1a: bd bd b7     JSR    $BDB7
bc1d: 39           RTS
bc1e: 9e 9f        LDX    <$9F
bc20: cc 67 ff     LDD    #$67FF
bc23: ce 76 70     LDU    #$7670
bc26: bd bc ae     JSR    $BCAE
bc29: dc 9f        LDD    <$9F
bc2b: c3 00 03     ADDD   #$0003
bc2e: dd 9f        STD    <$9F
bc30: 10 83 00 3f  CMPD   #$003F
bc34: 24 0d        BCC    $00BE
bc36: c6 3f        LDB    #$3F
bc38: d0 a0        SUBB   <$A0
bc3a: 4f           CLRA
bc3b: 1f 01        TFR    D,X
bc3d: cc 61 ff     LDD    #$61FF
bc40: bd bc ae     JSR    $BCAE
bc43: dc 9f        LDD    <$9F
bc45: 10 83 00 3f  CMPD   #$003F
bc49: 24 27        BCC    $00ED
bc4b: 58           ASLB
bc4c: 49           ROLA
bc4d: 58           ASLB
bc4e: 49           ROLA
bc4f: 58           ASLB
bc50: 49           ROLA
bc51: 43           COMA
bc52: 53           COMB
bc53: 2b 03        BMI    $00D3
bc55: 4a           DECA
bc56: ca 80        ORB    #$80
bc58: c3 76 70     ADDD   #$7670
bc5b: 5d           TSTB
bc5c: 2b 03        BMI    $00DC
bc5e: 4a           DECA
bc5f: c4 7f        ANDB   #$7F
bc61: 1f 03        TFR    D,U
bc63: dc 9f        LDD    <$9F
bc65: c4 0f        ANDB   #$0F
bc67: c8 0f        EORB   #$0F
bc69: 5c           INCB
bc6a: 1f 01        TFR    D,X
bc6c: cc 61 ff     LDD    #$61FF
bc6f: bd bc c8     JSR    $BCC8
bc72: dc 9f        LDD    <$9F
bc74: 10 83 00 50  CMPD   #$0050
bc78: 25 0a        BCS    $00FF
bc7a: cc 00 80     LDD    #$0080
bc7d: dd 9f        STD    <$9F
bc7f: 0c a1        INC    <$A1
bc81: bd bd b7     JSR    $BDB7
bc84: 39           RTS
bc85: dc 9f        LDD    <$9F
bc87: 83 00 04     SUBD   #$0004
bc8a: dd 9f        STD    <$9F
bc8c: 10 83 00 08  CMPD   #$0008
bc90: 25 17        BCS    $0124
bc92: c3 75 00     ADDD   #$7500
bc95: 1f 03        TFR    D,U
bc97: dc 9f        LDD    <$9F
bc99: 44           LSRA
bc9a: 56           RORB
bc9b: c4 3f        ANDB   #$3F
bc9d: c8 3f        EORB   #$3F
bc9f: 1f 01        TFR    D,X
bca1: cc 67 ff     LDD    #$67FF
bca4: bd bc c8     JSR    $BCC8
bca7: 20 04        BRA    $0128
bca9: 86 00        LDA    #$00
bcab: 97 a1        STA    <$A1
bcad: 39           RTS
bcae: ed a1        STD    ,Y++
bcb0: cc 1f 98     LDD    #$1F98
bcb3: ed a1        STD    ,Y++
bcb5: cc 00 00     LDD    #$0000
bcb8: ed a1        STD    ,Y++
bcba: ef a1        STU    ,Y++
bcbc: cc bd 69     LDD    #$BD69
bcbf: ed a1        STD    ,Y++
bcc1: 33 5e        LEAU   -$2,U
bcc3: 30 1f        LEAX   -$1,X
bcc5: 26 e9        BNE    $012B
bcc7: 39           RTS
bcc8: ed a1        STD    ,Y++
bcca: cc 1f 98     LDD    #$1F98
bccd: ed a1        STD    ,Y++
bccf: cc 00 00     LDD    #$0000
bcd2: ed a1        STD    ,Y++
bcd4: ef a1        STU    ,Y++
bcd6: cc bd 69     LDD    #$BD69
bcd9: ed a1        STD    ,Y++
bcdb: 1f 30        TFR    U,D
bcdd: 83 00 04     SUBD   #$0004
bce0: c4 7f        ANDB   #$7F
bce2: 1f 03        TFR    D,U
bce4: 30 1f        LEAX   -$1,X
bce6: 26 e2        BNE    $0145
bce8: 39           RTS
bce9: c6 0e        LDB    #$0E
bceb: 7d 44 01     TST    $4401
bcee: 2a 05        BPL    $0170
bcf0: 5a           DECB
bcf1: 26 f8        BNE    $0166
bcf3: 86 00        LDA    #$00
bcf5: b7 44 00     STA    $4400
bcf8: 39           RTS
bcf9: 86 01        LDA    #$01
bcfb: 7e bc e9     JMP    $BCE9
bcfe: 86 02        LDA    #$02
bd00: 7e bc e9     JMP    $BCE9
bd03: 86 03        LDA    #$03
bd05: 7e bc e9     JMP    $BCE9
bd08: 86 04        LDA    #$04
bd0a: 7e bc e9     JMP    $BCE9
bd0d: 86 05        LDA    #$05
bd0f: 7e bc e9     JMP    $BCE9
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
