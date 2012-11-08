#!/bin/bash
#WEsley Dillingham
#OS Scripting 20083
#lab 5 task1
#manager for loop.sh

. functions.sh

if [ $# -ne 1 ]
then
	echo "must specify -s -t or -r"
	exit 1
fi

if [ $1 = "-s" ]
then
	echo "will now start loop.sh"
	Start loop.sh
 
elif [ $1 = "-t" ]
then
	echo "Will now terminate loop.sh"
	A=`cat loop.PID`
	set $A
	THEPID=$1
	echo "The PID we will now terminate is $THEPID"
	Terminate loop.sh $THEPID


elif [ $1 = "-r" ]
then
	echo "Will now Restart loop.sh"
	A=`cat loop.PID`
	set $A
	THEPID=$1
	Terminate loop.sh $THEPID
	Start loop.sh
else
	echo "Not a valid flag"
fi 

