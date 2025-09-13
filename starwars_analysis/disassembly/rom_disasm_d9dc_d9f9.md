d9dc: cc 00 00     LDD    #$0000
d9df: fd 4a e4     STD    $4AE4
d9e2: cc 60 18     LDD    #$6018
d9e5: fd 4a e6     STD    $4AE6
d9e8: cc 4a 66     LDD    #$4A66
d9eb: fd 4a dd     STD    $4ADD
d9ee: fc db 2f     LDD    $DB2F
d9f1: fd 4a e2     STD    $4AE2
d9f4: 86 51        LDA    #$51
d9f6: b7 4a df     STA    $4ADF
d9f9: 39           RTS
d9fa: fc 4a e4     LDD    $4AE4
d9fd: c3 00 01     ADDD   #$0001
da00: fd 4a e4     STD    $4AE4
da03: 10 83 00 f8  CMPD   #$00F8
da07: 10 24 00 89  LBCC   $DA94
da0b: 10 83 00 40  CMPD   #$0040
da0f: 24 0d        BCC    $DA1E
da11: fc 4a e6     LDD    $4AE6
da14: cb 03        ADDB   #$03
da16: fd 4a e6     STD    $4AE6
da19: cc 00 40     LDD    #$0040
da1c: 20 0c        BRA    $DA2A
da1e: fc 4a e4     LDD    $4AE4
da21: 53           COMB
da22: cb 18        ADDB   #$18
da24: fd 4a e6     STD    $4AE6
da27: fc 4a e4     LDD    $4AE4
da2a: 8a 73        ORA    #$73
da2c: fd 4a e8     STD    $4AE8
da2f: fc 4a e6     LDD    $4AE6
da32: 8a 61        ORA    #$61
da34: ed a1        STD    ,Y++
da36: cc 01 98     LDD    #$0198
da39: ed a4        STD    ,Y
da3b: ed 28        STD    $8,Y
da3d: ed a8 10     STD    $10,Y
da40: ed a8 18     STD    $18,Y
da43: ed a8 20     STD    $20,Y
da46: ed a8 28     STD    $28,Y
da49: cc 00 00     LDD    #$0000
da4c: ed 22        STD    $2,Y
da4e: ed 2a        STD    $A,Y
da50: ed a8 12     STD    $12,Y
da53: ed a8 1a     STD    $1A,Y
da56: ed a8 22     STD    $22,Y
da59: ed a8 2a     STD    $2A,Y
da5c: fc 4a e8     LDD    $4AE8
da5f: ed 24        STD    $4,Y
da61: ed 2c        STD    $C,Y
da63: ed a8 14     STD    $14,Y
da66: ed a8 1c     STD    $1C,Y
da69: ed a8 24     STD    $24,Y
da6c: ed a8 2c     STD    $2C,Y
da6f: cc b4 00     LDD    #$B400
da72: ed 26        STD    $6,Y
da74: cc b4 34     LDD    #$B434
da77: ed 2e        STD    $E,Y
da79: cc b4 58     LDD    #$B458
da7c: ed a8 16     STD    $16,Y
da7f: cc b4 88     LDD    #$B488
da82: ed a8 1e     STD    $1E,Y
da85: cc b4 ae     LDD    #$B4AE
da88: ed a8 26     STD    $26,Y
da8b: cc b4 d2     LDD    #$B4D2
da8e: ed a8 2e     STD    $2E,Y
da91: 31 a8 30     LEAY   $30,Y
da94: 8e 4a 66     LDX    #$4A66
da97: bc 4a dd     CMPX   $4ADD
da9a: 24 59        BCC    $DAF5
da9c: fc 4a e4     LDD    $4AE4
da9f: 10 83 00 e0  CMPD   #$00E0
daa3: 24 0e        BCC    $DAB3
daa5: 10 83 00 40  CMPD   #$0040
daa9: 25 06        BCS    $DAB1
daab: ec 01        LDD    $1,X
daad: e3 03        ADDD   $3,X
daaf: ed 01        STD    $1,X
dab1: 20 3b        BRA    $DAEE
dab3: 10 83 01 60  CMPD   #$0160
dab7: 24 08        BCC    $DAC1
dab9: cc 04 00     LDD    #$0400
dabc: fd 4a 69     STD    $4A69
dabf: 20 2d        BRA    $DAEE
dac1: ec 01        LDD    $1,X
dac3: e3 03        ADDD   $3,X
dac5: ed 01        STD    $1,X
dac7: 10 83 f0 00  CMPD   #$F000
dacb: 25 21        BCS    $DAEE
dacd: a6 84        LDA    ,X
dacf: 4c           INCA
dad0: ce 4a 66     LDU    #$4A66
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
