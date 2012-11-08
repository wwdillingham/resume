//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//       wes dillingham
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

	float x, y, temp_x, temp_y, r, theta;
	const float convert = 180 / 3.14159;
   char choice;

	cout<<" Imput the X  coordinate of the (x,y) form of a coordinate plane: "<<endl;
	cin>>x;
	cout<<" Imput the Y  coordinate of the (x,y) form of a coordinate plane: "<<endl;
	cin>>y;


	cout<< "are these coordinates Polar (p) or Rectangular (r), please indicate by typing either ''p'' or ''r'' "<<endl;
	cin>> choice;
	
	if (choice == 'p' || choice == 'P')
	{
		temp_x = x * cos(y);
		temp_y = x * sin(y);

		cout<<" The rectangular form of the polar coordinates entered is: ("<<temp_x<<" , "<<temp_y<<")"<<endl;


	}

	else if (choice == 'r' || choice == 'R')
	{
		r = sqrt((x*x)+(y*y));
		theta = atan( y / x) * convert;
		cout<< "In polar form: ("<<r<<" , "<<theta<<" )"<<endl;
	}

	else
		cout<<"invalid entry"<<endl;


cout<< "Press any key to continue..."<<endl;
	



	getch();
	return 0;

}