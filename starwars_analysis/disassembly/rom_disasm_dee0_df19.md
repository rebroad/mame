dee0: 20 20     BRA    $DF02
dee2: 20 20     BRA    $DF04
dee4: 20 20     BRA    $DF06
dee6: 20 20     BRA    $DF08
dee8: 20 20     BRA    $DF0A
deea: 20 20     BRA    $DF0C
deec: 20 20     BRA    $DF0E
deee: 20 32     BRA    $DF22
def0: 35 2c     PULS   B,DP,Y
def2: 30 30     LEAX   -$10,Y
def4: b0 44 45  SUBA   $4445
def7: 53        COMB
def8: 54        LSRB
def9: 52        XNCB
defa: 4f        CLRA
defb: 59        ROLB
defc: 49        ROLA
defd: 4e        XCLRA
defe: 47        ASRA
deff: 20 41     BRA    $DF42
df01: 4c        INCA
df02: 4c        INCA
df03: 20 54     BRA    $DF59
df05: 4f        CLRA
df06: 57        ASRB
df07: 45        LSRA
df08: 52        XNCB
df09: 20 54     BRA    $DF5F
df0b: 4f        CLRA
df0c: 50        NEGB
df0d: 53        COMB
df0e: 20 20     BRA    $DF30
df10: 20 35     BRA    $DF47
df12: 30 2c     LEAX   $C,Y
df14: 30 30     LEAX   -$10,Y
df16: b0 53 45  SUBA   $5345
df19: 7e df18     JMP    $df18
