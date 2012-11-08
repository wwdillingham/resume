//---------------------------------------------------------------------------
//
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//                                      wes dillingham
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
#include <stdlib.h>
#include <time.h>




class complex
{		
	private:
		double real1;
		double real2;
		double imag1;
		double imag2;
		double AC;
		double BD;
	public:
		complex(double = 0, double = 0, double = 0, double = 0); //construct.
		void addcomplex(double, double, double, double);
		void subcomplex(double, double, double, double);
		void display();
		
};

complex::complex(double r1, double r2, double i1, double i2)
{ 
		real1 = r1;
		real2 = r2;
		imag1 = i1;
		imag2 = i2;
}

void complex::addcomplex(double r1, double r2, double i1, double i2)
{
	
		
		AC = (r1 + r2);
		BD = (i1 + i2);

}

void complex::subcomplex(double r1, double r2, double i1, double i2)
{
	
		AC = (r1 - r2);
		BD = (i1 - i2);
}

void complex::display()
{
		
	cout<<"The complex number is: "<<AC<<" + "<<BD<<"i"<<endl;

}

void main()
{
		cout<<"The following program adds and subtracts complex numbers"<<endl;

		complex gimli;
		complex bigboy;

		gimli.addcomplex(2,3,5,7);
		bigboy.subcomplex(4,6,8,9);

		gimli.display();
		bigboy.display();

		cout<<"press any key to continue"<<endl;

		getch();

		
}
