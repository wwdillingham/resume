#!/bin/bash
#Wesley Dillingham
#Weblog Generator

awk '
BEGIN{
	print "WEBLOG REPORT GENERATOR by Wesley Dillingham"
	print "============================================"
}#end BEGIN
{

if (NR == 1)
{
	STARTDAY= substr($4,2,2) #The first record is the original day
	MONTH= substr($4,5,3) #Monthly log so may as well just grab it once
	YEAR= substr($4,9,4) #year is also constant, just grab it once
	STARTTIME= substr($4,14,8) #grab the start time
}
LASTDAY= substr($4,2,2) #the final value will be the last (most recent day)
LASTTIME= substr($4,14,8) #The Final Time will be the last (most recent time)
DAYHOUR= substr($4,2,14) #The string up to the hour
DATE[DAYHOUR]++
IPADDRESS[$1]++

}#end main

END{
MAX=0;SECOND=0;THIRD=0; MAXHR=0;

#PORTION2 - Start and end date
print "The report covers the period from " STARTDAY "-" MONTH "-" YEAR " at " STARTTIME " to " LASTDAY "-" MONTH "-" YEAR " at " LASTTIME "."

#PORTION3 - avg hits a day
NUMDAYS= LASTDAY - STARTDAY
HITSPERDAY= NR / NUMDAYS
print "There were " NR " hits in " NUMDAYS " days for an average of " HITSPERDAY " hits/day"

#PORTION 4 - busiest day DAYHOUR is the string DATE the array


for (d in DATE)
{
    HMAX= DATE[d]
	if ( HMAX > MAXHR )
	{
		MAXHR= HMAX
		HOURELEMENT= d #HOURELEMENT is the string representing the hour with the most hits
	}
}

AMPM= "AM"
BUSIESTHOUR= substr(HOURELEMENT,13)
if ( BUSIESTHOUR > 12 )
{
	BUSIESTHOUR-=12
	AMPM="PM"
}

	print "The busiest time for this log period was: " substr(HOURELEMENT,1,2) "-" MONTH "-" YEAR " between " BUSIESTHOUR ":00" AMPM " and " BUSIESTHOUR ":59" AMPM	" (" MAXHR*100/NR "%)."			

#PORTION 5 - most hits	
print "The most hits were from:"
	for (d in IPADDRESS)
	{
		TMAX= IPADDRESS[d]
			if ( TMAX > MAX )
			{
			MAX= TMAX
			MAXELEMENT= d
			}	
	}
	
	print MAXELEMENT " (" MAX*100/NR "%)"

	for (d in IPADDRESS)
	{
		TMAX= IPADDRESS[d]
			if ( TMAX > SECOND && TMAX < MAX )
			{
			SECOND= TMAX
			SECONDELEMENT= d
			}	
	}

	print SECONDELEMENT " (" SECOND*100/NR "%)"

	for (d in IPADDRESS)
	{
		TMAX= IPADDRESS[d]
			if ( TMAX > THIRD && TMAX < SECOND )
			{
			THIRD = TMAX
			THIRDELEMENT= d
			}
	}

	
	print THIRDELEMENT " (" THIRD*100/NR "%)"

}# end END
' Weblog.dat
