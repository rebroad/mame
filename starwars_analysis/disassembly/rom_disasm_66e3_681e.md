66e3: fc 4a ec     LDD    $4AEC
66e6: 2a 1f        BPL    $6707
66e8: 86 0b        LDA    #$0B
66ea: 97 41        STA    <$41
66ec: ce 4a b6     LDU    #$4AB6
66ef: 8e 45 20     LDX    #$4520
66f2: 86 08        LDA    #$08
66f4: bd c6 f9     JSR    $C6F9
66f7: ce 4a 8e     LDU    #$4A8E
66fa: 8e 45 08     LDX    #$4508
66fd: 86 0b        LDA    #$0B
66ff: bd c6 f9     JSR    $C6F9
6702: 86 01        LDA    #$01
6704: bd c2 b3     JSR    $C2B3
6707: 39           RTS
6708: 0c 41        INC    <$41
670a: bd 61 1e     JSR    $611E
670d: bd d9 1a     JSR    $D91A
6710: cc 00 00     LDD    #$0000
6713: fd 4b 0c     STD    $4B0C
6716: fd 48 af     STD    $48AF
6719: bd d9 dc     JSR    $D9DC
671c: bd 61 b5     JSR    $61B5
671f: bd 61 5a     JSR    $615A
6722: ce 50 38     LDU    #$5038
6725: bd cd c3     JSR    $CDC3
6728: b6 4b 34     LDA    $4B34
672b: 81 ff        CMPA   #$FF
672d: 26 08        BNE    $6737
672f: b6 4b 06     LDA    $4B06
6732: b7 4b 34     STA    $4B34
6735: 20 21        BRA    $6758
6737: b6 4b 06     LDA    $4B06
673a: b1 4b 34     CMPA   $4B34
673d: 27 19        BEQ    $6758
673f: b7 4b 34     STA    $4B34
6742: bd c2 0c     JSR    $C20C
6745: b6 45 92     LDA    $4592
6748: 84 04        ANDA   #$04
674a: 26 0c        BNE    $6758
674c: 8e 67 59     LDX    #$6759
674f: b6 47 03     LDA    $4703
6752: c6 09        LDB    #$09
6754: 3d           MUL
6755: 48           ASLA
6756: ad 96        JSR    [A,X]
6758: 39           RTS
6759: bd 7b bd     JSR    $7BBD
675c: 80 bd        SUBA   #$BD
675e: 8f bd 9e     XSTX   #$BD9E
6761: bd ad bd     JSR    $ADBD
6764: a8 bd 99 bd  EORA   [$0125,PCR]
6768: 94 bd        ANDA   <$BD
676a: 85 bd        BITA   #$BD
676c: 61 12        NEG    -$E,X
676e: bd cd 80     JSR    $CD80
6771: bd d9 fa     JSR    $D9FA
6774: bd d9 85     JSR    $D985
6777: bd 63 d5     JSR    $63D5
677a: bd 76 1d     JSR    $761D
677d: bd 61 2f     JSR    $612F
6780: bd 6d a5     JSR    $6DA5
6783: bd 62 2d     JSR    $622D
6786: 39           RTS
6787: 86 05        LDA    #$05
6789: b7 4b 0e     STA    $4B0E
678c: 86 ff        LDA    #$FF
678e: b7 4b 34     STA    $4B34
6791: bd d9 1a     JSR    $D91A
6794: bd bd 44     JSR    $BD44
6797: 0c 41        INC    <$41
6799: 39           RTS
679a: 86 0d        LDA    #$0D
679c: 97 41        STA    <$41
679e: cc 00 00     LDD    #$0000
67a1: dd 42        STD    <$42
67a3: 97 dd        STA    <$DD
67a5: b6 45 93     LDA    $4593
67a8: 84 03        ANDA   #$03
67aa: 8b 06        ADDA   #$06
67ac: 97 60        STA    <$60
67ae: 97 8e        STA    <$8E
67b0: b6 45 93     LDA    $4593
67b3: 44           LSRA
67b4: 44           LSRA
67b5: 84 03        ANDA   #$03
67b7: b7 4b 18     STA    $4B18
67ba: 86 00        LDA    #$00
67bc: b7 4b 17     STA    $4B17
67bf: 97 8b        STA    <$8B
67c1: 97 8c        STA    <$8C
67c3: 97 5c        STA    <$5C
67c5: 97 5d        STA    <$5D
67c7: 97 5e        STA    <$5E
67c9: 97 5f        STA    <$5F
67cb: b7 4b 2d     STA    $4B2D
67ce: b7 4b 37     STA    $4B37
67d1: b7 4b 35     STA    $4B35
67d4: 1a 10        ORCC   #$10
67d6: 7c 48 6f     INC    $486F
67d9: 7c 48 66     INC    $4866
67dc: 7c 48 71     INC    $4871
67df: 7c 48 68     INC    $4868
67e2: 1c ef        ANDCC  #$EF
67e4: 39           RTS
67e5: bd 61 b5     JSR    $61B5
67e8: bd 61 5a     JSR    $615A
67eb: bd 61 ec     JSR    $61EC
67ee: 86 c0        LDA    #$C0
67f0: b7 50 80     STA    $5080
67f3: b7 50 8a     STA    $508A
67f6: 86 00        LDA    #$00
67f8: b7 48 13     STA    $4813
67fb: 0c 41        INC    <$41
67fd: 86 1d        LDA    #$1D
67ff: 97 41        STA    <$41
6801: 39           RTS
6802: bd 7a 5a     JSR    $7A5A
6805: 8e 00 08     LDX    #$0008
6808: b6 4b 15     LDA    $4B15
680b: 4c           INCA
680c: bd 77 20     JSR    $7720
680f: b6 4a d6     LDA    $4AD6
6812: b7 4b 16     STA    $4B16
6815: b6 4b 15     LDA    $4B15
6818: 81 1f        CMPA   #$1F
681a: 23 02        BLS    $681E
681c: 86 1f        LDA    #$1F
681e: 7e 681e     JMP    $681e
