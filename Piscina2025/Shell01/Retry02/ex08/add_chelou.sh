echo "$FT_NBR1" | tr "'\\\"?!'" 01234 | tr -d "\n" > /tmp/nbr1.txt
echo "$FT_NBR2" | tr "mrdoc" 01234 | tr -d "\n" > /tmp/nbr2.txt

nbr1=$(echo "ibase=5; $(cat /tmp/nbr1.txt)" | bc)
nbr2=$(echo "ibase=5; $(cat /tmp/nbr2.txt)" | bc)
sum=$((nbr1 + nbr2))

result=$(echo "obase=13; $sum" | bc)
echo "$result" | tr '0123456789ABC' 'gtaio luSnemf'
