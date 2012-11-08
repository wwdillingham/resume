//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 4 - main lab
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

	float t_o, t_f, a, l, increase, temp;

	l = 7365; a = pow(11.7,(-6)); t_o = 0, t_f = 0;

	for (temp = 0; t_f <= 40;)
	{
		increase = a * l * (t_f - t_o);
		cout<<"Temp original is: "<<t_o<<" Temp final is: "<<t_f<<endl;
		cout<<setprecision(4)<<"increase in length is "<< increase <<" meters"<<endl;
		cout<<"**************************************"<<endl;

		t_f += 5;

	}

cout<<"press any key to continue";
getch();



}