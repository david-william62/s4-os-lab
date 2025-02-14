echo "Enter 3 numbers"
read a
read b
read c

if [ $a -gt $b ] && [ $a -gt $c ]
then
  echo "$a is bigger"
else
  if [ $b -gt $c ]
  then
    echo "$b is greater"
  else
    echo "$c is greater"
  fi
fi

