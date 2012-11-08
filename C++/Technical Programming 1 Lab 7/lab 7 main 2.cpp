//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 7 - main
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

void main()
{
	  double p[14];
	//  double expect[14];
  double d1, d2; 
	  int sum = 0;
srand(time(NULL));


for (sum = 0; sum <= 14; sum++)
	p[sum] = 0;

//for (sum = 0; sum <= 14; sum++)
//	expect[sum] = 0;

	sum = 0;


	for (int q = 0; q<=36000; q++)
	{


		
		d1 = 1 + rand() % 6;
		d2 = 1 + rand() % 6;

		sum = d1 + d2;
		p[sum]++;

	sum = 0;


	}
		//for (sum=0; sum<=14; sum++) 
		//	cout<<p[sum]<<endl;

		//for (sum = 2; sum <= 12; sum++)
		//{

	double expect[13] ={1/36,2/36,3/36,4/36,5/36,6/36,5/36,4/36,3/36,2/36,1/36};

	/*
			expect[0] = 0;
			expect[1] = 0;
			expect[2] = 0;
			
        	expect[3] =  1 / 36;
			expect[4] = 2 /36;
			expect[5] = 3 / 36;
			expect[6] = 4 / 36;
			expect[7] = 5 / 36;
			expect[8] = 6 / 36;
			expect[9] = 5 /36;
			expect[10] = 4 / 36;
			expect[11] = 3/ 36;
		    expect[12] = 2/36;
			expect[13] = 1 /36;


*/

	

				
	

			for(int j = 3; j <=8; j++)
			{
				int  e = 3;
				cout<<"expected probability = "<< e/36 <<" Calculated probabilty = "<< p[j] / 36000 * 100<<endl;
				e++;
			}

			for(int r = 9; r <= 15; r++)
			{
				int v = 9;
				cout<<"expected probability = "<< v/36 <<" Calculated probabilty = "<< p[r] / 36000 * 100<<endl;
				v++;

			}
}
