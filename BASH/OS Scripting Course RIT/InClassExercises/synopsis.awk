#!/bin/bash


awk '
BEGIN{
printf ("%-15s%-15s%-15s\n", "First Char", "Last Char", "Tot chars")
}

{printf("%-15s%-15s%-15s\n", substr($0, 1, 1), substr($0, length($0),1), length($0))}

END{print("the total number of lines in synopsis file = " NR)}
' synopsisFile.dat

