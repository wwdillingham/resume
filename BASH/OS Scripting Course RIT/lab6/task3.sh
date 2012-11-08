#!/bin/bash
#dillingham

echo "USER PID TIME COMMAND"
ps -ef | awk '/[0-9][0-9]:[0-9][0-9]:[0-9][1-9]/ { print $1, $2, $7, $8; }'

