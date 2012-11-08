#!/bin/bash
#Wesley Dillingham
#OS Scripting 20083
#lab 4 task 1


trap '
set `cat usermon.conf`
CHECKUSERS=$1
INTERVAL=$2
OUTPUTFILE=$3
NUMBACKUPS=$4
MAXUSERS=$5
ERRORFILE=$6
EMAILTO=$7
;' SIGHUP


echo "Check Users: $1"
echo "..... if I had completed this part of lab 4, the logicwould go here"
