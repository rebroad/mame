02d5: 86 40        LDA    #$40
02d7: a1 84        CMPA   ,X
02d9: 23 08        BLS    $02E3
02db: a0 84        SUBA   ,X
02dd: 44           LSRA
02de: 44           LSRA
02df: 44           LSRA
02e0: 4c           INCA
02e1: ab 84        ADDA   ,X
02e3: 39           RTS
