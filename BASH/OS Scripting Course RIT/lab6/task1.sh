#!/bin/bash 

#this script will be looking in a file containing the data that was printed on the piece of paper it will be getting it from the file users.dat and applying it to a car PASSWD... this is how i interpreted this question

if [ $# -ne 1 ]
then
	echo "Wrong number of parameters, please pass in the /etc/passwd-like file"
	exit 1
else
	PASSWD=`cat $1`
	echo -n "What name would you like to search for"
	read NAME

	
	PROCEED=`grep $NAME $1 | wc -l`
	
	if [ $PROCEED = '1' ]
	then
		set `grep $NAME $1`
		echo "$3 already exists: $2 $1"
	else
		echo "Does not exist in records"
	fi
	
fi

