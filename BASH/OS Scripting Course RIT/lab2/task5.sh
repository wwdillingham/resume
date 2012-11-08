#!/bin/bash
#Wesley Dillingham
#OS Scripting 20083 Lab2 - task5


NUMPS=`ps aux | wc -l`

if [[ $# -eq 0 ]]
then
	echo "No Params - Will Use Hardcoded Param of 75"
	set 75
fi


echo "The Number of processes is $NUMPS and the Param is $1"

if [[ $NUMPS -gt $1 ]]
then
	echo "Error Number of processes greater than the first param"
fi
