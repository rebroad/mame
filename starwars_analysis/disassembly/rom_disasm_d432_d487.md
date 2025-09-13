d432: b9 ef 42  ADCA   $EF42
d435: 0a c0     DEC    <$C0
d437: 00 5c     NEG    <$5C
d439: 06 b9     ROR    <$B9
d43b: ef 5e     STU    -$2,U
d43d: 36 f6     PSHU   PC,S,Y,X,D
d43f: a2 5f     SBCA   -$1,U
d441: 1b        NOP
d442: 47        ASRA
d443: 29 b9     BVS    $D3FE
d445: ef 5e     STU    -$2,U
d447: 16 b9 ef  LBRA   $8E39
d44a: 56        RORB
d44b: 22 b9     BHI    $D406
d44d: ef 42     STU    $2,U
d44f: 0a b9     DEC    <$B9
d451: ef 43     STU    $3,U
d453: 35 b9     PULS   CC,DP,X,Y,PC
d455: ef f6     STU    [A,S]
d457: d2 b9     SBCB   <$B9
d459: ef 5f     STU    -$1,U
d45b: 1b        NOP
d45c: 42        XNCA
d45d: 2a b9     BPL    $D418
d45f: ef 45     STU    $5,U
d461: 3f        SWI
d462: b9 ef 5e  ADCA   $EF5E
d465: 36 f6     PSHU   PC,S,Y,X,D
d467: b5 b9 ef  BITA   $B9EF
d46a: 5a        DECB
d46b: 1c b9     ANDCC  #$B9
d46d: ef 45     STU    $5,U
d46f: 3f        SWI
d470: b9 ef 46  ADCA   $EF46
d473: 24 b9     BCC    $D42E
d475: ef 5c     STU    -$4,U
d477: 26 b9     BNE    $D432
d479: ef 5b     STU    -$5,U
d47b: 21 b9     BRN    $D436
d47d: ef 45     STU    $5,U
d47f: 1f 5e     TFR    PC,inv
d481: 36 43     PSHU   S,A,CC
d483: 0f c0     CLR    <$C0
d485: 00 5a     NEG    <$5A
d487: 7e d486     JMP    $d486
