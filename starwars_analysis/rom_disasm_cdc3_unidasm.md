6000: c3 00 80     ADDD   #$0080
6003: fd 4b 26     STD    $4B26
6006: 39           RTS
6007: dc 89        LDD    <$89
6009: c3 00 80     ADDD   #$0080
600c: dd 89        STD    <$89
600e: 39           RTS
600f: 96 63        LDA    <$63
6011: 27 1a        BEQ    $602D
6013: 2f 07        BLE    $601C
6015: 0a 63        DEC    <$63
6017: cc 04 ff     LDD    #$04FF
601a: 20 05        BRA    $6021
601c: 0c 63        INC    <$63
601e: cc fb 01     LDD    #$FB01
6021: fd 50 22     STD    $5022
6024: cc 3f ce     LDD    #$3FCE
6027: fd 50 24     STD    $5024
602a: bd ce 24     JSR    $CE24
602d: bd 6e a2     JSR    $6EA2
6030: bd 70 bd     JSR    $70BD
6033: bd 70 cc     JSR    $70CC
6036: 39           RTS
6037: 96 63        LDA    <$63
6039: 27 1a        BEQ    $6055
603b: 2f 07        BLE    $6044
603d: 0a 63        DEC    <$63
603f: cc 04 ff     LDD    #$04FF
6042: 20 05        BRA    $6049
6044: 0c 63        INC    <$63
6046: cc fb 01     LDD    #$FB01
6049: fd 50 22     STD    $5022
604c: cc 3f ce     LDD    #$3FCE
604f: fd 50 24     STD    $5024
6052: bd ce 24     JSR    $CE24
6055: bd 6e cb     JSR    $6ECB
6058: bd 70 bd     JSR    $70BD
605b: bd 70 cc     JSR    $70CC
605e: 39           RTS
605f: 96 63        LDA    <$63
6061: 27 08        BEQ    $606B
6063: 2f 03        BLE    $6068
6065: 4a           DECA
6066: 20 01        BRA    $6069
6068: 4c           INCA
6069: 97 63        STA    <$63
606b: 96 63        LDA    <$63
606d: 2a 01        BPL    $6070
606f: 40           NEGA
6070: c6 20        LDB    #$20
6072: 3d           MUL
6073: 0d 63        TST    <$63
6075: 2a 04        BPL    $607B
6077: 43           COMA
6078: 50           NEGB
6079: 82 ff        SBCA   #$FF
607b: dd a5        STD    <$A5
607d: 96 7d        LDA    <$7D
607f: 2a 01        BPL    $6082
6081: 43           COMA
6082: c6 02        LDB    #$02
6084: 3d           MUL
6085: 0d 7d        TST    <$7D
6087: 2a 04        BPL    $608D
6089: 43           COMA
608a: 50           NEGB
608b: 82 ff        SBCA   #$FF
608d: d3 a5        ADDD   <$A5
608f: 0d 63        TST    <$63
6091: 26 1a        BNE    $60AD
6093: 93 a3        SUBD   <$A3
6095: 2f 0b        BLE    $60A2
6097: 10 83 00 10  CMPD   #$0010
609b: 2f 03        BLE    $60A0
609d: cc 00 10     LDD    #$0010
60a0: 20 09        BRA    $60AB
60a2: 10 83 ff f0  CMPD   #$FFF0
60a6: 2c 03        BGE    $60AB
60a8: cc ff f0     LDD    #$FFF0
60ab: 20 18        BRA    $60C5
60ad: 93 a3        SUBD   <$A3
60af: 2f 0b        BLE    $60BC
60b1: 10 83 00 32  CMPD   #$0032
60b5: 2f 03        BLE    $60BA
60b7: cc 00 32     LDD    #$0032
60ba: 20 09        BRA    $60C5
60bc: 10 83 ff ce  CMPD   #$FFCE
60c0: 2c 03        BGE    $60C5
60c2: cc ff ce     LDD    #$FFCE
60c5: 1f 98        TFR    B,A
60c7: bb 48 78     ADDA   $4878
60ca: b7 48 78     STA    $4878
60cd: 1d           SEX
60ce: d3 a3        ADDD   <$A3
60d0: dd a3        STD    <$A3
60d2: 8e 48 70     LDX    #$4870
60d5: bd 71 11     JSR    $7111
60d8: 27 03        BEQ    $60DD
60da: bd ce 24     JSR    $CE24
60dd: 39           RTS
60de: 39           RTS
60df: be 4b 32     LDX    $4B32
60e2: 26 03        BNE    $60E7
60e4: 8e 49 00     LDX    #$4900
60e7: a6 03        LDA    $3,X
60e9: 81 01        CMPA   #$01
60eb: 26 09        BNE    $60F6
60ed: a6 06        LDA    $6,X
60ef: 26 05        BNE    $60F6
60f1: 9f 64        STX    <$64
60f3: 7e 6e f7     JMP    $6EF7
60f6: b6 4b 3c     LDA    $4B3C
60f9: 2f 05        BLE    $6100
60fb: 86 09        LDA    #$09
60fd: b7 4b 3c     STA    $4B3C
