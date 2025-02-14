echo "Enter limit for fibonacci"
read lim
n1=0
n2=1
for((i=0 ; i<lim ; i++))
do
  echo $n1
  temp=$((n2))
  n2=$((n1 + n2))
  n1=$((temp))
done
