//---------------------------------------------------------------------------
//
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//                                      wes dillingham
//                lab 6 - main lab
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

class Rectangle 
{
protected:
	double length;
	double width;
	
public:
	Rectangle(double =1, double = 1); //constructAH!!!!
	void setRectangle( double, double);
	double area(void);
	double perimeter(void);
	double getLength(void);
	double getWidth(void);
	void display();

};

Rectangle::Rectangle(double len, double wid)
{
length = len;
width = wid;
}

void Rectangle::setRectangle(double len, double wid)
{
length = len;
width = wid;

}

double Rectangle::area(void)
{
	return( length * width);
}

double Rectangle::perimeter(void)
{
	return((2 * length) + (2 * width));
}

double Rectangle::getLength(void)
{
	return length;
}

double Rectangle::getWidth(void)
{
	return width;
}
void Rectangle::display()
{
	cout<<"With a pool of length: "<<length<<" Width: "<<width<<endl;
}



void main()
{
	
cout<<"Welcome to my program"<<endl;

Rectangle pool(50, 20);
Rectangle poolwalk(56, 26);

double pool_area, poolwalk_area, subarea, price, poolwalk_perim;

pool_area = pool.area();
poolwalk_area = poolwalk.area();
subarea = poolwalk_area - pool_area;


price = subarea * 2.1;

poolwalk_perim = poolwalk.perimeter(); 

price = price + (poolwalk_perim * 6);

pool.display();
cout<<"The price of the project will total: $"<<price<<endl;

cout<<"Press any key to continue..."<<endl;
	

}