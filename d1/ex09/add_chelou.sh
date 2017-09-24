a=$(echo "ibase=5;$FT_NBR1" | tr \' 0 | tr \\ 1 | tr \" 2 | tr \? 3 | tr \! 4 | bc)
b=$(echo "ibase=5;$FT_NBR2" | tr m 0 | tr r 1 | tr d 2 | tr o 3 | tr c 4 | bc)
echo "obase=13;$a+$b" | bc | tr C f | tr B m | tr A e | tr 9 n | tr 8 S | tr 7 u | tr 6 l | tr 5 ' ' | tr 4 o | tr 3 i | tr 2 a | tr 1 t | tr 0 g
