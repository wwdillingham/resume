
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 3 - main lab
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

void main()
{

double l, w, h, pi, temp;
int choice;
 

cout<<"Please choose which shape you would like to calculate the area of"<<endl;
cout<<" 1 for a square"<<endl<<" 2 for a triangle"<<endl<<"3 for a circle"<<endl<<"4 for a rectangle"<<endl;
cin>>choice;
pi = 3.14159;

	switch (choice)
	{
	case 1:
		cout<<"length: ?"<<endl;
		cin>>l;
		cout<<" The area of the square is "<< l * l<<endl;
		break;


	case 2:
		cout<<"What is the length of the base of the triangle"<<endl;
		cin>>l;

		cout<<"What is the height of the triangle: "<<endl;
		cin>>h;

		cout<<"The area of the triangle is: "<< ((1/2) * l * h)<<endl;
			break;

	case 3:
		cout<<"Please enter the radius of the circle"<<endl;
			cin>>l;
		cout<<"The area of the circle is: "<< pi * (pow(l,2))<<endl;
		break;
		
	case 4:
		cout<<"Please enter the length of the triangle: "<<endl;
		cin>>l;
		cout<<endl; cout<<"please enter the width of the triangle: "<<endl;
		cin>>w;

		cout<<"The area of the rectangle is : "<< l * w<<endl;
		break;


		cout<<"Press any key to continue"<<endl;

	getch();
	
	}
}