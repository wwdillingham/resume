#!/bin/bash
#Dillingham 20083
#lab 1 task 5
#script name loop.sh

touch loop.PID
echo $$ > loop.PID


i=0
while true
do
	i=`expr $i + 1`
	if [ $i -eq 2000 ]
	then
		echo "Hey, $USER, I am still running the PID is $$"
		THIS LINE WILL GENERATE AN ERROR
		i=0
	fi
done
