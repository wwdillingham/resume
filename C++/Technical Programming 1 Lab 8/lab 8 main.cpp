//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 8 - main
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

void calc_volts(double v[10], double c[10], double r[10]);

void main()
{

	double current[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	double resistance[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
	double volts[10];

	
		calc_volts(volts, current, resistance);

		cout<<setiosflags(ios::fixed)
			<<setiosflags(ios::showpoint)
			<<setprecision(2);
		


			for(int k = 0; k < 10; k++)
				cout<<setw(5)<<"current = "<< current[k]<<" amps,  resistance = "<<resistance[k]<<" ohms, voltage = "<< volts[k]<<" volts"<<endl;

			cout<<"Press any key to continue"<<endl;
			getch();

}

void calc_volts(double v[10], double c[10], double r[10])
{

	for(int i = 0; i < 10; i++)
			v[i] = c[i] * r[i]; 

		
}
