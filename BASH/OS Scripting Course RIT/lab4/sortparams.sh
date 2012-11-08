#!/bin/bash
#Wesley Dillingham
#LAB 4 Task 1

echo "Welecome to the script"
if [ $# -lt 1 -o $# -gt 5 ]
then
	echo "WRONG NUMER OF PARAMS"
exit
fi
  
echo value of '$* '$*
echo "Num values:"

for NUM in $*
do
	echo $NUM
done

for ((NUM=1;NUM<=$#;NUM++))
do 
	echo "'$'$NUM" >> tmp	
done


cat tmp  
