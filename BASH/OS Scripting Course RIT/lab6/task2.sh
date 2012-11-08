#!/bin/bash
#dillingham

#ps -ef |tr -d | cut -d' ' -f1,2,3 

echo "User    PID   Process"
ps -ef | awk '/^[a-z][a-z][a-z][0-9][0-9][0-9][0-9]/ { print $1, $2, $8;}'

