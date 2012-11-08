#!/bin/bash
#Dillingham
#OS Scripting 20083
#Lab 5 Task1

trap 'cd ..;' SIGHUP
trap 'echo $PWD; ls -l;' SIGINT
trap 'echo $$; sleep 5;' SIGTERM 
i=0
while true
do 
	i = `expr $i + 1`
	if [ $i -eq 500 ]
	then
		echo "Hey $USER, I am still running"
		THIS LINE WILL GENERATE AN ERROR
		i=0
	fi
done 2>$1/dev/null
