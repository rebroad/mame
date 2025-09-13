dad3: a1 c4        CMPA   ,U
dad5: 26 08        BNE    $DADF
dad7: cc 04 00     LDD    #$0400
dada: ed 43        STD    $3,U
dadc: fe 4a dd     LDU    $4ADD
dadf: 33 45        LEAU   $5,U
dae1: 11 b3 4a dd  CMPU   $4ADD
dae5: 25 ec        BCS    $DAD3
dae7: a6 84        LDA    ,X
dae9: bd d9 71     JSR    $D971
daec: 30 1b        LEAX   -$5,X
daee: 30 05        LEAX   $5,X
daf0: bc 4a dd     CMPX   $4ADD
daf3: 25 a7        BCS    $DA9C
daf5: fc 4a e4     LDD    $4AE4
daf8: 10 83 02 00  CMPD   #$0200
dafc: 25 05        BCS    $DB03
dafe: 86 07        LDA    #$07
db00: b7 48 41     STA    $4841
db03: 10 b3 4a e2  CMPD   $4AE2
db07: 25 25        BCS    $DB2E
db09: b6 4a df     LDA    $4ADF
db0c: bd d9 5e     JSR    $D95E
db0f: b6 4a df     LDA    $4ADF
db12: 4c           INCA
db13: 81 59        CMPA   #$59
db15: 25 08        BCS    $DB1F
db17: cc ff ff     LDD    #$FFFF
db1a: fd 4a e2     STD    $4AE2
db1d: 20 0f        BRA    $DB2E
db1f: b7 4a df     STA    $4ADF
db22: 8e da 8d     LDX    #$DA8D
db25: 1f 89        TFR    A,B
db27: 3a           ABX
db28: 3a           ABX
db29: ec 84        LDD    ,X
db2b: fd 4a e2     STD    $4AE2
db2e: 39           RTS
db2f: 00 41        NEG    <$41
db31: 00 50        NEG    <$50
db33: 00 60        NEG    <$60
db35: 00 70        NEG    <$70
db37: 00 80        NEG    <$80
db39: 00 90        NEG    <$90
db3b: 00 a0        NEG    <$A0
db3d: 00 b8        NEG    <$B8
db3f: 53           COMB
db40: 54           LSRB
db41: 41           NEGA
db42: 52           XNCB
db43: 20 57        BRA    $DB9C
db45: 41           NEGA
db46: 52           XNCB
db47: d3 40        ADDD   <$40
db49: 20 31        BRA    $DB7C
db4b: 39           RTS
db4c: 38 33        XANDCC #$33
db4e: 20 4c        BRA    $DB9C
db50: 55           LSRB
db51: 43           COMA
db52: 41           NEGA
db53: 53           COMB
db54: 46           RORA
db55: 49           ROLA
db56: 4c           INCA
db57: 4d           TSTA
db58: 20 4c        BRA    $DBA6
db5a: 54           LSRB
db5b: 44           LSRA
db5c: 2e 20        BGT    $DB7E
db5e: 41           NEGA
db5f: 4e           XCLRA
db60: 44           LSRA
db61: 20 41        BRA    $DBA4
db63: 54           LSRB
db64: 41           NEGA
db65: 52           XNCB
db66: 49           ROLA
db67: 2c 49        BGE    $DBB2
db69: 4e           XCLRA
db6a: 43           COMA
db6b: ae 41        LDX    $1,U
db6d: 4c           INCA
db6e: 4c           INCA
db6f: 20 52        BRA    $DBC3
db71: 49           ROLA
db72: 47           ASRA
db73: 48           ASLA
db74: 54           LSRB
db75: 53           COMB
db76: 20 52        BRA    $DBCA
db78: 45           LSRA
db79: 53           COMB
db7a: 45           LSRA
db7b: 52           XNCB
db7c: 56           RORB
db7d: 45           LSRA
db7e: 44           LSRA
db7f: ae 4c        LDX    $C,U
db81: 55           LSRB
db82: 43           COMA
db83: 41           NEGA
db84: 53           COMB
db85: 46           RORA
db86: 49           ROLA
db87: 4c           INCA
db88: 4d           TSTA
db89: 20 54        BRA    $DBDF
db8b: 52           XNCB
db8c: 41           NEGA
db8d: 44           LSRA
db8e: 45           LSRA
db8f: 4d           TSTA
db90: 41           NEGA
db91: 52           XNCB
db92: 4b           XDECA
db93: 53           COMB
db94: 20 55        BRA    $DBEB
db96: 53           COMB
db97: 45           LSRA
db98: 44           LSRA
db99: 20 55        BRA    $DBF0
db9b: 4e           XCLRA
db9c: 44           LSRA
db9d: 45           LSRA
db9e: 52           XNCB
db9f: 20 4c        BRA    $DBED
dba1: 49           ROLA
dba2: 43           COMA
dba3: 45           LSRA
dba4: 4e           XCLRA
dba5: 53           COMB
dba6: 45           LSRA
dba7: ae 47        LDX    $7,U
dba9: 41           NEGA
dbaa: 4d           TSTA
dbab: 45           LSRA
dbac: 20 4f        BRA    $DBFD
dbae: 56           RORB
dbaf: 45           LSRA
dbb0: d2 49        SBCB   <$49
dbb2: 4e           XCLRA
dbb3: 53           COMB
dbb4: 45           LSRA
dbb5: 52           XNCB
dbb6: 54           LSRB
dbb7: 20 43        BRA    $DBFC
dbb9: 4f           CLRA
dbba: 49           ROLA
dbbb: 4e           XCLRA
dbbc: d3 46        ADDD   <$46
dbbe: 52           XNCB
dbbf: 45           LSRA
dbc0: 45           LSRA
dbc1: 20 50        BRA    $DC13
dbc3: 4c           INCA
dbc4: 41           NEGA
dbc5: d9 32        ADCB   <$32
dbc7: 20 50        BRA    $DC19
dbc9: 4c           INCA
dbca: 41           NEGA
dbcb: 59           ROLB
dbcc: 53           COMB
dbcd: 20 31        BRA    $DC00
dbcf: 20 43        BRA    $DC14
dbd1: 4f           CLRA
dbd2: 49           ROLA
dbd3: ce 31 20     LDU    #$3120
dbd6: 43           COMA
dbd7: 4f           CLRA
dbd8: 49           ROLA
dbd9: 4e           XCLRA
dbda: 20 31        BRA    $DC0D
dbdc: 20 50        BRA    $DC2E
dbde: 4c           INCA
dbdf: 41           NEGA
dbe0: d9 32        ADCB   <$32
dbe2: 20 43        BRA    $DC27
dbe4: 4f           CLRA
dbe5: 49           ROLA
dbe6: 4e           XCLRA
dbe7: 53           COMB
dbe8: 20 31        BRA    $DC1B
dbea: 20 50        BRA    $DC3C
dbec: 4c           INCA
dbed: 41           NEGA
dbee: d9 50        ADCB   <$50
dbf0: 55           LSRB
dbf1: 4c           INCA
dbf2: 4c           INCA
dbf3: 20 54        BRA    $DC49
dbf5: 52           XNCB
dbf6: 49           ROLA
dbf7: 47           ASRA
dbf8: 47           ASRA
dbf9: 45           LSRA
dbfa: 52           XNCB
dbfb: 20 54        BRA    $DC51
dbfd: 4f           CLRA
dbfe: 20 53        BRA    $DC53
dc00: 54           LSRB
dc01: 41           NEGA
dc02: 52           XNCB
dc03: d4 43        ANDB   <$43
dc05: 52           XNCB
dc06: 45           LSRA
dc07: 44           LSRA
dc08: 49           ROLA
dc09: 54           LSRB
dc0a: d3 43        ADDD   <$43
dc0c: 52           XNCB
dc0d: 45           LSRA
dc0e: 44           LSRA
dc0f: 49           ROLA
dc10: d4 53        ANDB   <$53
dc12: 48           ASLA
dc13: 49           ROLA
dc14: 45           LSRA
dc15: 4c           INCA
dc16: 44           LSRA
dc17: 20 47        BRA    $DC60
dc19: 4f           CLRA
dc1a: 4e           XCLRA
dc1b: c5 46        BITB   #$46
dc1d: 4c           INCA
dc1e: 49           ROLA
dc1f: 47           ASRA
dc20: 48           ASLA
dc21: 54           LSRB
dc22: 20 49        BRA    $DC6D
dc24: 4e           XCLRA
dc25: 53           COMB
dc26: 54           LSRB
dc27: 52           XNCB
dc28: 55           LSRB
dc29: 43           COMA
dc2a: 54           LSRB
dc2b: 49           ROLA
dc2c: 4f           CLRA
dc2d: 4e           XCLRA
dc2e: 53           COMB
dc2f: 20 54        BRA    $DC85
dc31: 4f           CLRA
dc32: 20 52        BRA    $DC86
dc34: 45           LSRA
dc35: 44           LSRA
dc36: 20 46        BRA    $DC7E
dc38: 49           ROLA
dc39: 56           RORB
dc3a: c5 31        BITB   #$31
dc3c: 2e 20        BGT    $DC5E
dc3e: 20 59        BRA    $DC99
dc40: 4f           CLRA
dc41: 55           LSRB
dc42: 52           XNCB
dc43: 20 58        BRA    $DC9D
dc45: 2d 57        BLT    $DC9E
dc47: 49           ROLA
dc48: 4e           XCLRA
dc49: 47           ASRA
dc4a: 20 49        BRA    $DC95
dc4c: 53           COMB
dc4d: 20 45        BRA    $DC94
dc4f: 51           NEGB
dc50: 55           LSRB
dc51: 49           ROLA
dc52: 50           NEGB
dc53: 50           NEGB
dc54: 45           LSRA
dc55: 44           LSRA
dc56: 20 57        BRA    $DCAF
dc58: 49           ROLA
dc59: 54           LSRB
dc5a: 48           ASLA
dc5b: 20 41        BRA    $DC9E
dc5d: ce 49 4e     LDU    #$494E
dc60: 56           RORB
dc61: 49           ROLA
dc62: 53           COMB
dc63: 49           ROLA
dc64: 42           XNCA
dc65: 4c           INCA
dc66: 45           LSRA
dc67: 20 44        BRA    $DCAD
dc69: 45           LSRA
dc6a: 46           RORA
dc6b: 4c           INCA
dc6c: 45           LSRA
dc6d: 43           COMA
dc6e: 54           LSRB
dc6f: 4f           CLRA
dc70: 52           XNCB
dc71: 20 53        BRA    $DCC6
dc73: 48           ASLA
dc74: 49           ROLA
dc75: 45           LSRA
dc76: 4c           INCA
dc77: 44           LSRA
dc78: 20 54        BRA    $DCCE
dc7a: 48           ASLA
dc7b: 41           NEGA
dc7c: d4 57        ANDB   <$57
dc7e: 49           ROLA
dc7f: 4c           INCA
dc80: 4c           INCA
dc81: 20 50        BRA    $DCD3
dc83: 52           XNCB
dc84: 4f           CLRA
dc85: 54           LSRB
dc86: 45           LSRA
dc87: 43           COMA
dc88: 54           LSRB
dc89: 20 59        BRA    $DCE4
dc8b: 4f           CLRA
dc8c: 55           LSRB
dc8d: 20 46        BRA    $DCD5
dc8f: 4f           CLRA
dc90: 52           XNCB
dc91: 20 20        BRA    $DCB3
dc93: 20 43        BRA    $DCD8
dc95: 4f           CLRA
dc96: 4c           INCA
dc97: 4c           INCA
dc98: 49           ROLA
dc99: 53           COMB
dc9a: 49           ROLA
dc9b: 4f           CLRA
dc9c: 4e           XCLRA
dc9d: 53           COMB
dc9e: ae 32        LDX    -$E,Y
dca0: 2e 20        BGT    $DCC2
dca2: 20 44        BRA    $DCE8
dca4: 45           LSRA
dca5: 46           RORA
dca6: 4c           INCA
dca7: 45           LSRA
dca8: 43           COMA
dca9: 54           LSRB
dcaa: 4f           CLRA
dcab: 52           XNCB
dcac: 20 53        BRA    $DD01
dcae: 54           LSRB
dcaf: 52           XNCB
dcb0: 45           LSRA
dcb1: 4e           XCLRA
dcb2: 47           ASRA
dcb3: 54           LSRB
dcb4: 48           ASLA
dcb5: 20 49        BRA    $DD00
dcb7: 53           COMB
dcb8: 20 4c        BRA    $DD06
dcba: 4f           CLRA
dcbb: 53           COMB
dcbc: 54           LSRB
dcbd: 20 57        BRA    $DD16
dcbf: 48           ASLA
dcc0: 45           LSRA
dcc1: ce 41 20     LDU    #$4120
dcc4: 46           RORA
dcc5: 49           ROLA
dcc6: 52           XNCB
dcc7: 45           LSRA
dcc8: 42           XNCA
dcc9: 41           NEGA
dcca: 4c           INCA
dccb: 4c           INCA
dccc: 20 49        BRA    $DD17
dcce: 4d           TSTA
dccf: 50           NEGB
dcd0: 41           NEGA
dcd1: 43           COMA
dcd2: 54           LSRB
dcd3: 53           COMB
dcd4: 20 59        BRA    $DD2F
dcd6: 4f           CLRA
dcd7: 55           LSRB
dcd8: 52           XNCB
dcd9: 20 53        BRA    $DD2E
dcdb: 48           ASLA
dcdc: 49           ROLA
dcdd: 45           LSRA
dcde: 4c           INCA
dcdf: 44           LSRA
dce0: 20 4f        BRA    $DD31
dce2: d2 57        SBCB   <$57
dce4: 48           ASLA
dce5: 45           LSRA
dce6: 4e           XCLRA
dce7: 20 59        BRA    $DD42
dce9: 4f           CLRA
dcea: 55           LSRB
dceb: 20 53        BRA    $DD40
dced: 54           LSRB
dcee: 52           XNCB
dcef: 49           ROLA
dcf0: 4b           XDECA
dcf1: 45           LSRA
dcf2: 20 41        BRA    $DD35
dcf4: 20 4c        BRA    $DD42
dcf6: 41           NEGA
dcf7: 53           COMB
dcf8: 45           LSRA
dcf9: 52           XNCB
dcfa: 20 54        BRA    $DD50
dcfc: 4f           CLRA
dcfd: 57           ASRB
dcfe: 45           LSRA
dcff: 52           XNCB
dd00: 20 4f        BRA    $DD51
dd02: d2 54        SBCB   <$54
dd04: 52           XNCB
dd05: 45           LSRA
dd06: 4e           XCLRA
dd07: 43           COMA
dd08: 48           ASLA
dd09: 20 43        BRA    $DD4E
dd0b: 41           NEGA
dd0c: 54           LSRB
dd0d: 57           ASRB
dd0e: 41           NEGA
dd0f: 4c           INCA
dd10: 4b           XDECA
dd11: ae 33        LDX    -$D,Y
dd13: 2e 20        BGT    $DD35
dd15: 20 41        BRA    $DD58
dd17: 49           ROLA
dd18: 4d           TSTA
dd19: 20 59        BRA    $DD74
dd1b: 4f           CLRA
dd1c: 55           LSRB
dd1d: 52           XNCB
dd1e: 20 4c        BRA    $DD6C
dd20: 41           NEGA
dd21: 53           COMB
dd22: 45           LSRA
dd23: 52           XNCB
dd24: 53           COMB
dd25: 20 57        BRA    $DD7E
dd27: 49           ROLA
dd28: 54           LSRB
dd29: 48           ASLA
dd2a: 20 43        BRA    $DD6F
dd2c: 55           LSRB
dd2d: 52           XNCB
dd2e: 53           COMB
dd2f: 4f           CLRA
dd30: 52           XNCB
dd31: 20 54        BRA    $DD87
dd33: cf 45 58     XSTU   #$4558
dd36: 50           NEGB
dd37: 4c           INCA
dd38: 4f           CLRA
dd39: 44           LSRA
dd3a: 45           LSRA
dd3b: 20 45        BRA    $DD82
dd3d: 4d           TSTA
dd3e: 50           NEGB
dd3f: 49           ROLA
dd40: 52           XNCB
dd41: 45           LSRA
dd42: 20 54        BRA    $DD98
dd44: 49           ROLA
dd45: 45           LSRA
dd46: 20 46        BRA    $DD8E
dd48: 49           ROLA
dd49: 47           ASRA
dd4a: 48           ASLA
dd4b: 54           LSRB
dd4c: 45           LSRA
dd4d: 52           XNCB
dd4e: 53           COMB
dd4f: 2c 20        BGE    $DD71
dd51: 4c           INCA
dd52: 41           NEGA
dd53: 53           COMB
dd54: 45           LSRA
dd55: d2 54        SBCB   <$54
dd57: 4f           CLRA
dd58: 57           ASRB
dd59: 45           LSRA
dd5a: 52           XNCB
dd5b: 20 54        BRA    $DDB1
dd5d: 4f           CLRA
dd5e: 50           NEGB
dd5f: 53           COMB
dd60: 20 41        BRA    $DDA3
dd62: 4e           XCLRA
dd63: 44           LSRA
dd64: 20 54        BRA    $DDBA
dd66: 52           XNCB
dd67: 45           LSRA
dd68: 4e           XCLRA
dd69: 43           COMA
dd6a: 48           ASLA
dd6b: 20 54        BRA    $DDC1
dd6d: 55           LSRB
dd6e: 52           XNCB
dd6f: 52           XNCB
dd70: 45           LSRA
dd71: 54           LSRB
dd72: 53           COMB
dd73: ae 34        LDX    -$C,Y
dd75: 2e 20        BGT    $DD97
dd77: 20 53        BRA    $DDCC
dd79: 48           ASLA
dd7a: 4f           CLRA
dd7b: 4f           CLRA
dd7c: 54           LSRB
dd7d: 20 46        BRA    $DDC5
dd7f: 49           ROLA
dd80: 52           XNCB
dd81: 45           LSRA
dd82: 42           XNCA
dd83: 41           NEGA
dd84: 4c           INCA
dd85: 4c           INCA
dd86: 53           COMB
dd87: 20 42        BRA    $DDCB
dd89: 45           LSRA
dd8a: 46           RORA
dd8b: 4f           CLRA
dd8c: 52           XNCB
dd8d: 45           LSRA
dd8e: 20 54        BRA    $DDE4
dd90: 48           ASLA
dd91: 45           LSRA
dd92: d9 49        ADCB   <$49
dd94: 4d           TSTA
dd95: 50           NEGB
dd96: 41           NEGA
dd97: 43           COMA
dd98: 54           LSRB
dd99: 20 59        BRA    $DDF4
dd9b: 4f           CLRA
dd9c: 55           LSRB
dd9d: 52           XNCB
dd9e: 20 53        BRA    $DDF3
dda0: 48           ASLA
dda1: 49           ROLA
dda2: 45           LSRA
dda3: 4c           INCA
dda4: 44           LSRA
dda5: ae 35        LDX    -$B,Y
dda7: 2e 20        BGT    $DDC9
dda9: 20 54        BRA    $DDFF
ddab: 48           ASLA
ddac: 45           LSRA
ddad: 20 52        BRA    $DE01
ddaf: 45           LSRA
ddb0: 42           XNCA
ddb1: 45           LSRA
ddb2: 4c           INCA
ddb3: 20 46        BRA    $DDFB
ddb5: 4f           CLRA
ddb6: 52           XNCB
ddb7: 43           COMA
ddb8: 45           LSRA
ddb9: 20 49        BRA    $DE04
ddbb: 53           COMB
ddbc: 20 44        BRA    $DE02
ddbe: 45           LSRA
ddbf: 50           NEGB
ddc0: 45           LSRA
ddc1: 4e           XCLRA
ddc2: 44           LSRA
ddc3: 49           ROLA
ddc4: 4e           XCLRA
ddc5: 47           ASRA
ddc6: 20 4f        BRA    $DE17
ddc8: ce 59 4f     LDU    #$594F
ddcb: 55           LSRB
ddcc: 20 54        BRA    $DE22
ddce: 4f           CLRA
ddcf: 20 53        BRA    $DE24
ddd1: 54           LSRB
ddd2: 4f           CLRA
ddd3: 50           NEGB
ddd4: 20 54        BRA    $DE2A
ddd6: 48           ASLA
ddd7: 45           LSRA
ddd8: 20 45        BRA    $DE1F
ddda: 4d           TSTA
dddb: 50           NEGB
dddc: 49           ROLA
dddd: 52           XNCB
ddde: 45           LSRA
dddf: 20 42        BRA    $DE23
dde1: 59           ROLB
dde2: 20 42        BRA    $DE26
dde4: 4c           INCA
dde5: 4f           CLRA
dde6: 57           ASRB
dde7: 49           ROLA
dde8: 4e           XCLRA
dde9: c7 55        XSTB   #$55
ddeb: 50           NEGB
ddec: 20 54        BRA    $DE42
ddee: 48           ASLA
ddef: 45           LSRA
ddf0: 20 44        BRA    $DE36
ddf2: 45           LSRA
ddf3: 41           NEGA
ddf4: 54           LSRB
ddf5: 48           ASLA
ddf6: 20 53        BRA    $DE4B
ddf8: 54           LSRB
ddf9: 41           NEGA
ddfa: 52           XNCB
ddfb: ae b6        LDX    [A,Y]
ddfd: b7 b8 b9     STA    $B8B9
de00: 53           COMB
de01: 43           COMA
de02: 4f           CLRA
de03: 52           XNCB
de04: 49           ROLA
de05: 4e           XCLRA
de06: c7 54        XSTB   #$54
de08: 49           ROLA
de09: 45           LSRA
de0a: 20 46        BRA    $DE52
de0c: 49           ROLA
de0d: 47           ASRA
de0e: 48           ASLA
de0f: 54           LSRB
de10: 45           LSRA
de11: 52           XNCB
de12: 53           COMB
de13: 20 20        BRA    $DE35
de15: 20 20        BRA    $DE37
de17: 20 20        BRA    $DE39
de19: 20 20        BRA    $DE3B
de1b: 20 20        BRA    $DE3D
de1d: 20 20        BRA    $DE3F
de1f: 20 20        BRA    $DE41
de21: 20 20        BRA    $DE43
de23: 20 31        BRA    $DE56
de25: 2c 30        BGE    $DE57
de27: 30 b0 44 41  LEAX   [$4441,W]
de2b: 52           XNCB
de2c: 54           LSRB
de2d: 48           ASLA
de2e: 20 56        BRA    $DE86
de30: 41           NEGA
de31: 44           LSRA
de32: 45           LSRA
de33: 52           XNCB
de34: 27 53        BEQ    $DE89
de36: 20 53        BRA    $DE8B
de38: 48           ASLA
de39: 49           ROLA
de3a: 50           NEGB
de3b: 20 20        BRA    $DE5D
de3d: 20 20        BRA    $DE5F
de3f: 20 20        BRA    $DE61
de41: 20 20        BRA    $DE63
de43: 20 20        BRA    $DE65
de45: 20 32        BRA    $DE79
de47: 2c 30        BGE    $DE79
de49: 30 b0 4c 41  LEAX   [$4C41,W]
de4d: 53           COMB
de4e: 45           LSRA
de4f: 52           XNCB
de50: 20 42        BRA    $DE94
de52: 7e de52     JMP    $de52
