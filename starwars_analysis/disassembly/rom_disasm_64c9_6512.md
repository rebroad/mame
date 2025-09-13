64c9: bd 62 2d  JSR    $622D
64cc: 39        RTS
64cd: c6 00     LDB    #$00
64cf: bd e7 c7  JSR    $E7C7
64d2: c6 01     LDB    #$01
64d4: bd e7 c7  JSR    $E7C7
64d7: c6 02     LDB    #$02
64d9: bd e7 c7  JSR    $E7C7
64dc: c6 03     LDB    #$03
64de: bd e7 c7  JSR    $E7C7
64e1: 39        RTS
64e2: bd d9 1a  JSR    $D91A
64e5: cc 00 00  LDD    #$0000
64e8: fd 4b 0c  STD    $4B0C
64eb: fd 48 af  STD    $48AF
64ee: 0c 41     INC    <$41
64f0: 39        RTS
64f1: bd 61 12  JSR    $6112
64f4: bd be 20  JSR    $BE20
64f7: bd d9 23  JSR    $D923
64fa: bd 61 2f  JSR    $612F
64fd: 96 ac     LDA    <$AC
64ff: 84 04     ANDA   #$04
6501: 27 04     BEQ    $6507
6503: 86 03     LDA    #$03
6505: 97 41     STA    <$41
6507: b6 48 1e  LDA    $481E
650a: 84 10     ANDA   #$10
650c: 27 04     BEQ    $6512
650e: 86 05     LDA    #$05
6510: 97 41     STA    <$41
6512: 7e 6512     JMP    $6512
