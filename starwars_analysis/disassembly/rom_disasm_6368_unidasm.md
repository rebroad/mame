0368: fc 4b 0e     LDD    $4B0E
036b: 83 00 01     SUBD   #$0001
036e: fd 4b 0e     STD    $4B0E
0371: c4 07        ANDB   #$07
0373: 26 28        BNE    $039D
0375: b6 4a db     LDA    $4ADB
0378: 2b 03        BMI    $037D
037a: bd d8 df     JSR    $D8DF
037d: b6 4a db     LDA    $4ADB
0380: 81 12        CMPA   #$12
0382: 26 0a        BNE    $038E
0384: b6 45 93     LDA    $4593
0387: 84 03        ANDA   #$03
0389: 8b 1f        ADDA   #$1F
038b: bd d8 df     JSR    $D8DF
038e: b6 4a db     LDA    $4ADB
0391: 8b 01        ADDA   #$01
0393: b1 4a dc     CMPA   $4ADC
0396: 25 02        BCS    $039A
0398: 86 80        LDA    #$80
039a: b7 4a db     STA    $4ADB
039d: fc 4b 0c     LDD    $4B0C
03a0: 83 00 08     SUBD   #$0008
03a3: 2a 03        BPL    $03A8
03a5: cc 00 00     LDD    #$0000
03a8: fd 4b 0c     STD    $4B0C
03ab: fc 4b 0e     LDD    $4B0E
03ae: 10 83 00 c0  CMPD   #$00C0
03b2: 24 12        BCC    $03C6
03b4: f6 4b 11     LDB    $4B11
03b7: c0 01        SUBB   #$01
03b9: c1 10        CMPB   #$10
03bb: 24 06        BCC    $03C3
03bd: cc 00 00     LDD    #$0000
03c0: fd 4b 0e     STD    $4B0E
03c3: f7 4b 11     STB    $4B11
03c6: fc 4b 0c     LDD    $4B0C
03c9: fd 48 af     STD    $48AF
03cc: fc 4b 10     LDD    $4B10
03cf: ed a1        STD    ,Y++
03d1: bd d9 42     JSR    $D942
03d4: 39           RTS
