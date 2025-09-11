6000: 26 04        BNE    $6006
6002: 86 33        LDA    #$33
6004: 97 41        STA    <$41
6006: 39           RTS
6007: dc 89        LDD    <$89
6009: c3 00 80     ADDD   #$0080
600c: dd 89        STD    <$89
600e: fc 4b 26     LDD    $4B26
6011: c3 00 80     ADDD   #$0080
6014: fd 4b 26     STD    $4B26
6017: 39           RTS
6018: fc 4b 24     LDD    $4B24
601b: c3 ff 80     ADDD   #$FF80
601e: fd 4b 24     STD    $4B24
6021: 39           RTS
6022: fc 4b 26     LDD    $4B26
6025: c3 00 80     ADDD   #$0080
6028: fd 4b 26     STD    $4B26
602b: 39           RTS
602c: dc 89        LDD    <$89
602e: c3 00 80     ADDD   #$0080
6031: dd 89        STD    <$89
6033: 39           RTS
6034: 96 63        LDA    <$63
6036: 27 1a        BEQ    $6052
6038: 2f 07        BLE    $6041
603a: 0a 63        DEC    <$63
603c: cc 04 ff     LDD    #$04FF
603f: 20 05        BRA    $6046
6041: 0c 63        INC    <$63
6043: cc fb 01     LDD    #$FB01
6046: fd 50 22     STD    $5022
6049: cc 3f ce     LDD    #$3FCE
604c: fd 50 24     STD    $5024
604f: bd ce 24     JSR    $CE24
6052: bd 6e a2     JSR    $6EA2
6055: bd 70 bd     JSR    $70BD
6058: bd 70 cc     JSR    $70CC
605b: 39           RTS
605c: 96 63        LDA    <$63
605e: 27 1a        BEQ    $607A
6060: 2f 07        BLE    $6069
6062: 0a 63        DEC    <$63
6064: cc 04 ff     LDD    #$04FF
6067: 20 05        BRA    $606E
6069: 0c 63        INC    <$63
606b: cc fb 01     LDD    #$FB01
606e: fd 50 22     STD    $5022
6071: cc 3f ce     LDD    #$3FCE
6074: fd 50 24     STD    $5024
6077: bd ce 24     JSR    $CE24
607a: bd 6e cb     JSR    $6ECB
607d: bd 70 bd     JSR    $70BD
6080: bd 70 cc     JSR    $70CC
6083: 39           RTS
6084: 96 63        LDA    <$63
6086: 27 08        BEQ    $6090
6088: 2f 03        BLE    $608D
608a: 4a           DECA
608b: 20 01        BRA    $608E
608d: 4c           INCA
608e: 97 63        STA    <$63
6090: 96 63        LDA    <$63
6092: 2a 01        BPL    $6095
6094: 40           NEGA
6095: c6 20        LDB    #$20
6097: 3d           MUL
6098: 0d 63        TST    <$63
609a: 2a 04        BPL    $60A0
609c: 43           COMA
609d: 50           NEGB
609e: 82 ff        SBCA   #$FF
60a0: dd a5        STD    <$A5
60a2: 96 7d        LDA    <$7D
60a4: 2a 01        BPL    $60A7
60a6: 43           COMA
60a7: c6 02        LDB    #$02
60a9: 3d           MUL
60aa: 0d 7d        TST    <$7D
60ac: 2a 04        BPL    $60B2
60ae: 43           COMA
60af: 50           NEGB
60b0: 82 ff        SBCA   #$FF
60b2: d3 a5        ADDD   <$A5
60b4: 0d 63        TST    <$63
60b6: 26 1a        BNE    $60D2
60b8: 93 a3        SUBD   <$A3
60ba: 2f 0b        BLE    $60C7
60bc: 10 83 00 10  CMPD   #$0010
60c0: 2f 03        BLE    $60C5
60c2: cc 00 10     LDD    #$0010
60c5: 20 09        BRA    $60D0
60c7: 10 83 ff f0  CMPD   #$FFF0
60cb: 2c 03        BGE    $60D0
60cd: cc ff f0     LDD    #$FFF0
60d0: 20 18        BRA    $60EA
60d2: 93 a3        SUBD   <$A3
60d4: 2f 0b        BLE    $60E1
60d6: 10 83 00 32  CMPD   #$0032
60da: 2f 03        BLE    $60DF
60dc: cc 00 32     LDD    #$0032
60df: 20 09        BRA    $60EA
60e1: 10 83 ff ce  CMPD   #$FFCE
60e5: 2c 03        BGE    $60EA
60e7: cc ff ce     LDD    #$FFCE
60ea: 1f 98        TFR    B,A
60ec: bb 48 78     ADDA   $4878
60ef: b7 48 78     STA    $4878
60f2: 1d           SEX
60f3: d3 a3        ADDD   <$A3
60f5: dd a3        STD    <$A3
60f7: 8e 48 70     LDX    #$4870
60fa: bd 71 11     JSR    $7111
60fd: 27 03        BEQ    $6102
60ff: bd ce 24     JSR    $CE24
