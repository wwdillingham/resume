#!/bin/bash
#Wesley Dillingham
#OS Scripting 20083
#lab 4 task 1
#Script name: Usermon.sh

touch usermon.PID
echo $$ > usermon.PID

set `cat usermon.conf`
CHECKUSERS=$1
INTERVAL=$2
OUTPUTFILE=$3
NUMBACKUPS=$4
MAXUSERS=$5
ERRORFILE=$6
EMAILTO=$7

echo "I didnt complete this part of lab4 but i bet something special should have been displayed here."
echo "The PID was $$"


