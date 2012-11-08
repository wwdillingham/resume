#!/bin/bash
#dillingham
#os scripting 20083
#lab3 task2


if [ $# -eq 1 ]
then

	if [ -d $1 -a -r $1 ]
	then
		echo "Is a directory and is readable by you, $USER"	
		currentpath= $PWD  &> stderr
		cd $1
		echo $PWD
		#cd $currentpath
			
			A=`ls -l`
			for D in $A
			do
				if [ -f $D ]
				then
					((F_CNT++))
				fi

				if [ -d $D ]
				then
					((D_CNT++))
				fi
	
				if [ -h $D ]
				then
					((H_CNT++)) #Symbolic link
				fi

				if [ -b $D ]
				then
					((B_CNT++)) #Block Special File
				fi
				
				if [ -c $D ]
				then
					((C_CNT++)) #Charachter special file
				
				fi 
				
	
			done

	#ouput count stats
	echo "The Num of files is $F_CNT"
	echo "The Num of Subdirs is $D_CNT"
	echo "The Num of Symbolic links is $H_CNT"			
	echo "The Num of Block Specials is $B_CNT"
	echo "The Num of Charachter Special Files is $C_CNT"



	else
		echo "Is either not a dir or not readable by you, $USER"
	fi
else
	echo "Please use one and only one param"
fi
