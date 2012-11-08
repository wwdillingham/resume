#!/bin/bash
#WEsley Dillingham
#OS Scripting 20083
#lab 5 task1
#manager for usermon.sh

. functions.sh

if [ $# -ne 1 ]
then
	echo "must specify -s -t or -r"
	exit 1
fi

if [ $1 = "-s" ]
then
	echo "will now start usermon.sh"
	Start usermon.sh
 
elif [ $1 = "-t" ]
then
	echo "Will now terminate usermon.sh"
	A=`cat usermon.PID`
	set $A
	THEPID=$1
	echo "The PID we will now terminate is $THEPID"
	Terminate usermon.sh $THEPID


elif [ $1 = "-r" ]
then
	echo "Will now Restart usermon.sh"
	A=`cat usermon.PID`
	set $A
	THEPID=$1
	Terminate usermon.sh $THEPID
	Start usermon.sh
else
	echo "Not a valid flag"
fi 

