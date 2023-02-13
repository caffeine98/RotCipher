# RotCipher
A simple Rotation Cipher (Caesar cipher) written in C
# Usage
```
./RotCipher <"Text string"> [Shift amount]
```
Include shift amount argument to shift to exact value (0 to 25, 26 will loop back to 0).

Not including shift amount will print all rotations from 0 to 26
# Example output
```
./RotCipher "The quick brown fox jumps over the lazy dog"    
ROT-0: The quick brown fox jumps over the lazy dog
ROT-1: Uif rvjdl cspxo gpy kvnqt pwfs uif mbaz eph
ROT-2: Vjg swkem dtqyp hqz lworu qxgt vjg ncba fqi
ROT-3: Wkh txlfn eurzq ira mxpsv ryhu wkh odcb grj
ROT-4: Xli uymgo fvsar jsb nyqtw sziv xli pedc hsk
ROT-5: Ymj vznhp gwtbs ktc ozrux tajw ymj qfed itl
ROT-6: Znk waoiq hxuct lud pasvy ubkx znk rgfe jum
ROT-7: Aol xbpjr iyvdu mve qbtwz vcly aol shgf kvn
ROT-8: Bpm ycqks jzwev nwf rcuxa wdmz bpm tihg lwo
ROT-9: Cqn zdrlt kaxfw oxg sdvyb xena cqn ujih mxp
ROT-10: Dro aesmu lbygx pyh tewzc yfob dro vkji nyq
ROT-11: Esp bftnv mczhy qzi ufxad zgpc esp wlkj ozr
ROT-12: Ftq cguow ndaiz raj vgybe ahqd ftq xmlk pas
ROT-13: Gur dhvpx oebja sbk whzcf bire gur ynml qbt
ROT-14: Hvs eiwqy pfckb tcl xiadg cjsf hvs zonm rcu
ROT-15: Iwt fjxrz qgdlc udm yjbeh dktg iwt apon sdv
ROT-16: Jxu gkysa rhemd ven zkcfi eluh jxu bqpo tew
ROT-17: Kyv hlztb sifne wfo aldgj fmvi kyv crqp ufx
ROT-18: Lzw imauc tjgof xgp bmehk gnwj lzw dsrq vgy
ROT-19: Max jnbvd ukhpg yhq cnfil hoxk max etsr whz
ROT-20: Nby kocwe vliqh zir dogjm ipyl nby futs xia
ROT-21: Ocz lpdxf wmjri ajs ephkn jqzm ocz gvut yjb
ROT-22: Pda mqeyg xnksj bkt fqilo kran pda hwvu zkc
ROT-23: Qeb nrfzh yoltk clu grjmp lsbo qeb ixwv ald
ROT-24: Rfc osgai zpmul dmv hsknq mtcp rfc jyxw bme
ROT-25: Sgd pthbj aqnvm enw itlor nudq sgd kzyx cnf
ROT-26: The quick brown fox jumps over the lazy dog
```
```
./RotCipher "Yberz vcfhz qbybe fvg nzrg" 13 
ROT-0: Yberz vcfhz qbybe fvg nzrg
ROT-13: Lorem ipsum dolor sit amet
```
