#!/bin/bash
#Dillingham 20083
#Task2 part2 sort 2 - sort logins largest to smallest

sh last.awk | sort -g -k2 -r | awk ' BEGIN{printf("%-15s%-15s%-15s\n","User","Logins","Time")} $1 !~ /User/ { print $0 } '


