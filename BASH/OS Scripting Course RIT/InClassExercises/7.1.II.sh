#!/bin/bash

if [ $# -ne 2 ]; then
	echo "useage: $0 string file" >&2
	exit 1
fi

grep $1 $2 >/dev/null 2>&1

if [ $? -eq 0 ]
then
	echo "$USER exists"
elif [ $? -eq 2 ]
then
	echo "file not found"
else 
	echo "$USER does not exist"
fi


