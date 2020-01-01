#!/bin/bash
#name: dhanashri yadav
#roll_no:190840520025

echo "enter the number"
read n #take input from user


if [ $n -le 15 ] && [ $n -ge 8 ] #it checks condition on user input 
then            #if true execute
echo "valid="$n
c=$(( n*n*n ))
echo "cube of $n= "$c

exit 0

else    #false condition
echo "Invalid number="$n
exit 2

fi
