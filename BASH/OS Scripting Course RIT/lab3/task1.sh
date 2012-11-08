#!/bin/bash
#Dillingham
#OS Scripting 20083
#lab 3 task 1


if [ $# -ne 1 ] 
	then
		echo "Wrong number of params try again"
else
	echo "you entered $1"

 	if [ -e $1.bkp ]
		then
			echo -n "The backup of $1 Already exists, would you like to overwrite it? [y/n]: "
			read CHOICE
				
			if [ $CHOICE = "y" ]
				then
					echo "Answered YES - Proceeding with Backup of $1 "
					cp $1 $1.bkp
			else 
				echo "Answered No - A backup of $1 will not be created"
			fi
	else
		echo "No Previous Backup, Making backup of $1"
		cp $1 $1.bkp
	
	fi

echo "Will now start vi of $1"
sleep 5
vi $1

fi
