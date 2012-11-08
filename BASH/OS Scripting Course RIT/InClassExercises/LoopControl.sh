#!/bin/bash

for ((i=0; i<= 5; i++))
do
  for ((j=$i; j<= 6; j++))
    do 
	for ((k=$j; k<=6; k++))
	 do 
	 	if [[ $k -gt 4 ]] ; then
		:
		#exit	
		#break
		#break 2
		#continue
		continue 2
	        fi
		echo -n $i$j$k" "
  	   done
      echo
      done
echo
done
  
