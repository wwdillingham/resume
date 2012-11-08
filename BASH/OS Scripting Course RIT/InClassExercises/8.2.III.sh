#!/bin/bash
# Wes Dillingham 8.2.III

awk '

BEGIN {FS=":";
 printf("%-15s%-15s%-15s%-15s\n", "CourseName", "Highest-Grade", "Lowest-Grade", "Average");
}# end BEGIN

{
avg = 0;
MIN = 100;
MAX = 0;  
for (i=2;i<=NF;i++){
  split($i, NameGrade, ","); 
  avg+=NameGrade[2];


TMAX = NameGrade[2]
TMIN = NameGrade[2]

if (TMAX >= MAX)
{
	MAX= NameGrade[2]
}
if (TMIN <= MIN)
{
	MIN= NameGrade[2]
}
  Names[NameGrade[1]]++ 
} #end for

	printf("%-15s%-15s%-15s%-15s\n", $1, MAX, MIN, avg/(NF-1))
}	#end body

END {print
	print "**********PARTII**************";
	printf("%-15s%-15s\n", "Name","Number Of Courses") 
	for (j in Names){
		printf("%-15s %8d\n",j, Names[j]) 
	}

}
' courseGrades.dat

