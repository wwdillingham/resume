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


void Rectangle::display()
{
	cout<<"With a rectangle of length: "<<length<<" Width: "<<width<<endl;
}

class Box : public Rectangle
{
protected:
	double h;
	
public:
	Box(double length = 1, double width = 1, double height = 1) : Rectangle(length, width), h(height) {}
	double volume(void);
	void display();
};

double Box::volume(void)
{
return(length * width * h);
}

void Box::display(void)
{
	cout<<"For the box with length: "<<length<<" width: "<<width<<" height: "<<h<<endl;
	
}


void main()
{
	
cout<<"Welcome to my program"<<endl;

Rectangle A(12,34);
Rectangle B;

Box C(12,34,5);
Box D;

double boxdvolume, boxcvolume, rectangleaarea, rectanglebarea, rectangleaperimeter, rectanglebperimeter;

boxdvolume = D.volume();
boxcvolume = C.volume();
rectangleaarea = A.area();
rectanglebarea = B.area();
rectangleaperimeter = A.perimeter();
rectanglebperimeter = B.perimeter();

A.display();
cout<<"Area: "<<rectangleaarea<<endl;
cout<<"Perimteter: "<<rectangleaperimeter<<endl;

B.display();
cout<<"Area: "<<rectanglebarea<<endl;
cout<<"Perimteter: "<<rectanglebperimeter<<endl;

C.display();
cout<<"Volume: "<<boxcvolume<<endl;

D.display();
cout<<"Volume: "<<boxdvolume<<endl;

cout<<"Press any key to continue..."<<endl;
	

}