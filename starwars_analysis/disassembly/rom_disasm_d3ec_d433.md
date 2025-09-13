d3ec: 5f        CLRB
d3ed: 3b        RTI
d3ee: b9 ef f6  ADCA   $EFF6
d3f1: 78 5c 06  ASL    $5C06
d3f4: 4a        DECA
d3f5: 3e        XRES
d3f6: b9 ef 5e  ADCA   $EF5E
d3f9: 16 f6 71  LBRA   $CA6D
d3fc: b9 ef 5b  ADCA   $EF5B
d3ff: 01 b9     NEG    <$B9
d401: ef 4a     STU    $A,U
d403: 3e        XRES
d404: b9 ef 5f  ADCA   $EF5F
d407: 1b        NOP
d408: b9 ef 42  ADCA   $EF42
d40b: 2a b9     BPL    $D3C6
d40d: ef 5c     STU    -$4,U
d40f: 06 c0     ROR    <$C0
d411: 00 b9     NEG    <$B9
d413: ef 5a     STU    -$6,U
d415: 1c b9     ANDCC  #$B9
d417: ef 42     STU    $2,U
d419: 2a b9     BPL    $D3D4
d41b: ef 5f     STU    -$1,U
d41d: 1b        NOP
d41e: f6 91 5a  LDB    $915A
d421: 1c b9     ANDCC  #$B9
d423: ef 4a     STU    $A,U
d425: 3e        XRES
d426: b9 ef 42  ADCA   $EF42
d429: 2a b9     BPL    $D3E4
d42b: ef 59     STU    -$7,U
d42d: 17 b9 ef  LBSR   $8E1F
d430: 41        NEGA
d431: 25 b9     BCS    $D3EC
d433: 7e d432     JMP    $d432
