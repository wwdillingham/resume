#!/bin/bash
#Wesley Dillingham
#OS Scripting 20083
#Lab4 Task 3

if [ $# -ne 1 -o ! -d $1 ]
then
	echo "usage: dirlog directory_name"
else
	#input is correct, check to see if .logfile exists.
	cd $1
	if [ -f .logfile ]
	then
		#need to compare logfile with dir contents and display missing files
		echo ".logfile exists will now check for updated contents"
		sleep 3
		
				MISSING="0"
		for d in `cat .logfile`
		do	
			if [ ! -f $d ]
			then
				echo "$d missing from directory $PWD"
				MISSING="1"
			fi
		done
		if [[ $MISSING -eq 0 ]]
		then
			echo "no files missing from $PWD"
		fi

	else
		#logfile does not exist, so creat it.
		ls > .logfile
		echo ".logifle created for $PWD"
		echo "Contains the following entries"
		cat .logfile
	fi
		
fi

