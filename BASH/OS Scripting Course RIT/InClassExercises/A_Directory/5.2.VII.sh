#!/bin/bash


a=`ls`
set $a

while [ $# -gt 0 ]
do
	if [ ! -f $1 ]

	then
		sleep 3;
		continue;
	fi
	echo "start $1";
	cat $1;
	read -p "Hit enter to continue" X;
	shift;
done
