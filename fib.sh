#!/bin/bash
i=0;
read -p "How many Fib you want? " no
while [ $i -le $no ]
do
	sum=$(($sum + $i ))
	echo -n $sum
	sum=0
	i=$(($i+1))
done
