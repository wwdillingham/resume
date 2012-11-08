// Dillingham_lab(2).cpp : Defines the entry point for the console application.
//
//     0618-231 Tech prog I
//      Wes Dillingham
//    
//------------------------------------------------------
// On my honor.. i have not copied this work from anyone or from
// any published source. This code is my original work.
//*******************************************************************************

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>




int main()
{
        
    float distance, avg_speed, elap_time;

     cout <<"Please insert distance traveled in miles. "<<endl;
	 cin >> distance;
	 cout <<"Please insert the average speed of your trip in miles per hour. "<<endl;
	 cin >>avg_speed;


	 elap_time = (distance / avg_speed);

	 cout<<"The Elapsed time is: "<< elap_time << "hours."<<endl;
	 



         getch();

		return 0;

}

