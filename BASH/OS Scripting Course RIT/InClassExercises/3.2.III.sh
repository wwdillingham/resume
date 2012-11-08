#!/bin/bash
if [ $# -eq 1 ]
	then
		((AVG= $1))
		echo "average is $AVG"
	exit
elif [ $# -eq 2 ]
	then
		((AVG= ($1 + $2) / 2 ))
		echo "Average is $AVG"
	exit
elif [ $# -eq 3 ]
	then
		((AVG= ($1 + $2 + $3) / 3))
		  echo "average is $AVG"
	exit
elif [ $# -eq 4 ]
	then
		((AVG= ($1 + $2 + $3 + $4) / 4))
		  echo "average is $AVG"
	exit
elif [ $# -eq 5 ]
	then
		((AVG= ($1 + $2 + $3 + $4 + $5) / 5))
		echo "average is $AVG"
else
	
		echo "1-5 is valid input please try again"
	
fi

