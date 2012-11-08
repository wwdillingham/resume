//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//					wes dillingham
//                lab 1 - prelab
//---------------------------------------------------------------------------
//
//     On my honor.....I have not copied this program from anyone nor from
//                     any published source.  This code is my original work.
//
//---------------------------------------------------------------------------

//    The following are preprocessor directives
#include "stdafx.h"
using namespace std;
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>


class Time
{
private:
	int hour;
	int minutes;
	int seconds;
	bool am;
    public:
	Time(int = 12, int = 30, int = 30, bool = false);
	void settime(int, int, int, bool);
	void showtime(void);
};

Time::Time(int hh, int mm, int ss, bool isam)
{
	hour = hh;
	minutes = mm;
	seconds = ss;
	am = isam;

}

void Time::settime(int hh, int mm, int ss, bool isam)
{
	hour = hh;
	minutes = mm;
	seconds = ss;
	am = isam;

	return;
}

void Time::showtime(void)
{


if(hour <= 12)
{

									if (am = false)
									{
									cout<<"The time is ";
									cout<<setfill('0')
										<<setw(2)<<hour<< " hours "
										<<setw(2)<<minutes<< " minutes "
										<<setw(2) <<seconds<< " seconds "
										<<setw(2)<<"AM"<<endl;
									cout<<endl;
									}
									else
									{
									cout<<"The time is ";
									cout<<setfill('0')
										<<setw(2)<<hour<< " hours "
										<<setw(2)<<minutes<< " minutes "
										<<setw(2) <<seconds<< " seconds "
										<<setw(2)<<"PM"<<endl;
									cout<<endl;
									}

}
else
{
				cout<<"The time is ";
				cout<<setfill('0')
					<<setw(2)<<hour<< " hours "
					<<setw(2)<<minutes<< " minutes "
					<<setw(2) <<seconds<< " seconds "
					<<setw(2)<<"PM"<<endl;

}
	return;

}


void main()
{
	//time (hour, minute, second)
Time a, b, c(12,24, 35);
b.settime(06,18,22,true);
c.settime(21,34,53,false);

a.showtime();
b.showtime();
c.showtime();

cout<<"press any key to continue"<<endl;
getch();
}