//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 6 - prelab
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


float sphereReference(float radius);
float sphereValue(float radius);
//  The following is the main program

const pi = 3.14159;

int main()
{
	float radius_1 =0;
	float radius_2=0;

	cout<<"Please enter the radius of the spehere to calculate its volume: "<<endl;
	cin>>radius_1;

	radius_2 = radius_1;

	radius_1 = sphereReference(radius_1);

	radius_2 = sphereValue(radius_2);

	if ( radius_1 == radius_2)
		cout<<"volume is: "<<radius_1;
	else	
		cout<<"Error"<<endl;



}

float sphereReference(float radius)
{

radius = (4 /3 ) * pi * pow(radius, 2);
return radius;

}


float sphereValue(float radius)
{
	
	radius = (4 /3 ) * pi * pow(radius, 2);
	return radius;

		
}