#!/bin/bash
#Wes Dillingham
# Os Scripting 20083 lab2 task3

A=`ls /etc/rc?.d`

for d in $A
do
	if [[ -d $d ]]
	then
		echo $d
	fi
done
