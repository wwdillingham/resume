//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 6 - main
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

//float visc = (1.9 * pow(10, -5));
//float density = 1.94;
//float diameter = 10;

float flow_lam(float diameter);
float flow_tur(float diameter);



void main()
{

	float diameter = 10;
	float  v_lam = 1, v_tur = 1;

	v_lam = flow_lam(diameter);
	v_tur = flow_tur(diameter);

cout<<"Laminar flow = "<<v_lam<<endl;
cout<<"Turbulent flow = "<<v_tur<<endl;

cout<<"Press any key to continue"<<endl;
getch();

}

float flow_lam(float diameter)
{
	float visc = (1.9 * (1 / pow(10,5) )  );
	float density = 1.94, a = 0;
	a = (2100 * visc) / (density * diameter);

return a;

}

float flow_tur(float diameter)
{

	float visc = (1.9 * (1 / pow(10,5) )  );
	float density = 1.94, b = 0;
	b = ((4000 * visc) / (density * diameter));

	return b;

}