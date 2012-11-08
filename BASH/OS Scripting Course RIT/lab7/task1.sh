#!/bin/bash
#Wesley Dillingham
#Lab 7 Task1

awk '
BEGIN{FS = ":"}
{ 
printf("%-10s%-10s%-24s%-15s%-8s\n", $2, $1, $NF, $7, substr($1,1,1) substr($2,1,3))
} 
' Students.dat

