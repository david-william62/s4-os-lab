echo "Enter two numbers"
read num1
read num2
if [ $num1 -gt $num2 ]
 then
    echo "$num1 is Greater"
  else
    echo "num2 is Greater"
fi
