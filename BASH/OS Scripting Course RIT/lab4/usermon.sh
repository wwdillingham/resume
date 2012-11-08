#!/bin/bash
#Wesley Dillingham
#OS Scripting 20083
#lab 4 task 1

set `cat usermon.conf`
CHECKUSERS=$1
INTERVAL=$2
OUTPUTFILE=$3
NUMBACKUPS=$4
MAXUSERS=$5
ERRORFILE=$6
EMAILTO=$7

echo $1

CURRENTNUMUSER=`who | wc -l`
echo "USERS = $CURRENTNUMUSER"

#check to see if backups exists.

CURRENTNUMBACKUPS=`ls usermon.dat.[1-9] | wc -l`

echo "Number of backups is $CURRENTNUMBACKUPS"

for ( a=0; a -lt 10; a++ ) 
do 
echo $a
done 


