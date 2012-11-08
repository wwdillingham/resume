//---------------------------------------------------------------------------
//
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//                                      wes dillingham
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
#include <stdlib.h>
#include <time.h>

class Vehicle
{
protected:
	int model;
	char color; // b = blue, l = black, r = red w = white
	int year;
	float speed;
public:
	Vehicle(int = 0, char = 'b', int = 0, float = 0); //constructAH!!!!
	void setVehicle( int, char, int, float);
	void showVehicle();
};

Vehicle::Vehicle(int mn, char col, int yr, float spd)
{
	model = mn;
	color = col;
	year = yr; 
	speed = spd;

}

void Vehicle::setVehicle(int mn, char col, int yr, float spd)
{
	model = mn;
	color = col;
	year = yr; 
	speed = spd;
}

void Vehicle::showVehicle()
{
	
	cout<<"Model number            : "<<model<<endl;
	
	if(color = 'b')
	cout<<"Color of Vehicle        : "<<"blue"<<endl;
	else if(color = 'l')
	cout<<"Color of Vehicle        : "<<"black"<<endl;
	else if(color = 'r')
	cout<<"Color of Vehicle        : "<<"red"<<endl;
	else if(color = 'w')
	cout<<"Color of Vehicle        : "<<"white"<<endl;
	else
	cout<<"Color of Vehicle        : "<<"unknown"<<endl;
	
	cout<<"Year of vehicle         : "<<year<<endl;
	cout<<"Speed of vehicle        : "<<speed<<endl<<endl;
}

class Truck : public Vehicle
{
protected:
	int numcyl;
	float load;
public:
	Truck(int mn, char col, int yr, float spd, int cylinders = 1, float amt = 0) : Vehicle(mn, col, yr, spd), numcyl(cylinders), load(amt){}
	void display();
};


void Truck::display(void)
{

	cout<<"Model number of Truck : "<<model<<endl;
		 
	if(color = 'b')
	cout<<"Color of Truck        : "<<"blue"<<endl;
	else if(color = 'l')
	cout<<"Color of Truck        : "<<"black"<<endl;
	else if(color = 'r')
	cout<<"Color of Truck        : "<<"red"<<endl;
	else if(color = 'w')
	cout<<"Color of Truck        : "<<"white"<<endl;
	else
		cout<<"Color of Truck        : "<<"unknown"<<endl;

	cout<<"Year of Truck         : "<<year<<endl;
	cout<<"Speed of Truck        : "<<speed<<endl;
	cout<<"Number of Cylinders   : "<<numcyl<<endl;
	cout<<"Towing load           : "<<load<<endl<<endl;
}




void main()
{
	
cout<<"Welcome to my program"<<endl;
Vehicle vehicle1(2, 'b', 1999, 44);
Truck truck1(2, 'l', 1999, 44, 4, 1002);



vehicle1.showVehicle();
truck1.display();

vehicle1.setVehicle(4, 'b', 2004, 100);


vehicle1.showVehicle();

cout<<"Press any key to continue..."<<endl;
	

}