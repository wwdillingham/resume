//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
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

class polar
{
private:

float in1;
float in2;
char type;
public:
polar(float = 0, float = 0, char = 'p');
void polarconvert(float, float, char);
void showpolar(void);
	};


	polar::polar(float a, float b, char choice)
	{
		in1 = a;
		in2 = b;
		type = choice;
		return;
	}

void polar::polarconvert(float a, float b, char form)
	{
		float convert = float(180 / 3.14159);

		in1 = a;
		in2 = b;
		type = form;
		
			if (form == 'p' || form == 'P')
				{
		in1 = in1 * cos(in1);
		in2 = in2 * sin(in2);

				}
	

	else if (form == 'r' || form == 'R')
	{
		in1 = sqrt((in1*in1)+(in2*in2));
		in2 = atan( in2 / in1) * convert; //////////////////////////////////////////
	
	}


	else
		cout<<"invalid entry"<<endl;
		return ;
	}

	void polar::showpolar(void)
	{
		if (type == 'p' || type == 'P')
		cout<< "In rectangular form: "<<in1<<" , "<<in2<<" )"<<endl;
		else
		cout<< "In polar form: ("<<in1<<" , "<<in2<<" )"<<endl;
		return;
	}

void main()
{

	polar bigboy1, bigboy2;
	float x, y;
	char choice;

	cout<<" Imput the X  coordinate of the (x,y) form of a coordinate plane, or the radius: "<<endl;
	cin>>x;
	cout<<" Imput the Y  coordinate of the (x,y) form of a coordinate plane, or theta: "<<endl;
	cin>>y;


	cout<< "are these coordinates Polar (p) or Rectangular (r), please indicate by typing either ''p'' or ''r'' "<<endl;
	cin>> choice;

	bigboy1.polarconvert(x,y,choice);
	bigboy1.showpolar();
	
	getch();
	
	cout<<"Press any key to continue..."<<endl;
return;
}

