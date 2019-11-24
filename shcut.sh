#!/bin/bash
#Akshay kale
#
io=$(cat data | cut -d, -f3 | tr '\n' '+' | sed 's/.$//')
echo $io
ans=$(($io))
echo $ans

