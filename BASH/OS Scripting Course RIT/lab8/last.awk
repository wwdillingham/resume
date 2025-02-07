#!/bin/bash
#Wesley Dillingham
#20083 lab8 task1

last | awk '

BEGIN{
printf("%-15s%-15s%-15s\n", "User", "Logins", "Time")
}

{	
name=$1 #DCE username

if (substr($10,3,1)== "+")#for users who have been on for > 1 && < 10 days
{
	Hours=substr($10,4,2)
	Minutes=substr($10,7,2)
	Days=substr($10,2,1)
}
else if (substr($10,4,1)=="+")#for users with > 10 days 
{
	Hours=substr($10,5,2)
	Minutes=substr($10,8,2)
	Days=substr($10,2,2)
}
else #for users with < 1 day
{
Hours= substr($10, 2, 2)
Minutes= substr($10, 5, 2)
Days=0
}


ActualMinutes = int(Minutes + (Hours * 60) + (Days*24*60));
		
Time[name]+=ActualMinutes; 
logins[name]++

 }

END{
	for (j in logins)
	{
	
#	Temp = Time; 
#	days = int(Temp[j] / 1440);
#	Temp[j]= int(Temp[j] % 1440);
#	Hours[j]= int(Temp[j] / 24);
#	Temp[j]= int(Temp[j] % 24
		
InstanceTime=Time[j]

IRemaining= InstanceTime  % 1440#Determine the number of days
IDays = int(InstanceTime / 1440)
IHours=int(IRemaining / 60)
IRemaining= InstanceTime % 60


if (IHours < 10) # add a leading 0 so instead of say 9 hours it reads 09 hours
{IHours="0"IHours}
if(IRemaining < 10)
{IRemaining="0"IRemaining}

	if (IDays != 0)
	printf("%-15s%-15s%-15s%-15s\n", j, logins[j], IDays "+" IHours ":" IRemaining, "*****" ) 
	else
	printf("%-15s%-15s%-15s\n", j, logins[j], IDays "+" IHours ":" IRemaining)
	}
}'



