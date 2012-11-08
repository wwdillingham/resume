//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 5 - prelab
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

//  The following is the main program

int main()
{

		float pi, numer, count, i, j,k, temp, swap;
		count = 0;
		k = 5;


		//do{	
		cout<<"How many steps (terms} would you like to use to calculate pi? "<<endl;
		cin>>count;
		//} while (count > 0);

			temp = 4 - (4/3);
			swap = 0 ; numer = 0;

			numer = numer + temp;

			for (i=0; i <= count; i++)				// 1 indicates plus for swap
			{

				 
				if (swap == 0)
				{
					j = (4/k) - (4/ (k+2));
					swap = 1;
					numer = numer  + j;
				}

				else
				{
					j = (4/k) + (4/ (k+2));
					swap = 0;
					numer = numer + j;

				}




			}

			cout<<numer<<endl;



}