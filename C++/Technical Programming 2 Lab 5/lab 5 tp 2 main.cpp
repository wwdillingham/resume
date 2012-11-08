//---------------------------------------------------------------------------
//
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//                                      wes dillingham
//                lab 5 - main lab
//---------------------------------------------------------------------------
//
//     On my honor.....I have not copied this program from anyone nor from
//                     any published source.  This code is my original work.
//
//---------------------------------------------------------------------------

//    The following are preprocessor directives
/*
Main Problem Description:
Write the code for the class Currency as described in the attached UML class diagram.  This class constructs, initializes and displays Currency objects with these functions: 
   Currency( ) -- The constructor (initialize objects)
   Set( ) --  changes dollars and cents data members for an object
   Set( ) --  overloaded function to change dollars and cents with a decimal input
   CurrencyAdd( ) -- adds two Currency objects
   CurrencyChange( ) -- subtracts two Currency objects
   Display( ) --  prints out Currency object in dollars and cents
Notice that the class Currency contains a method (function) which subtracts two Currency objects – this function simulates making change.  The first Currency object represents the price for the purchase and the second object represents the amount tendered by the sales clerk.  The difference between the two Currency objects is the change due to the customer.  Remember to check the cents data member after each transaction – more than 99 cents requires an adjustment to the dollar data member. (40%)
*/

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

class Currency
{
private:
double dollars;
double cents;
public:
	Currency(double=0, double =0);
	void Set(double, double );
	void Set(double);
	Currency Add(Currency&);
	Currency Change(Currency&);
	void Display(void);
};



Currency::Currency(double bigboys, double littleboys)
{
dollars = bigboys;
cents = littleboys;
}

void Currency::Set(double bigboys, double littleboys)
{
dollars = bigboys;
cents = littleboys;
}

void Currency::Set(double bigboys)
{
dollars = bigboys;
}

Currency Currency::Add(Currency &q)
{

	
	q.dollars = q.dollars + dollars;
	q.cents = q.cents + cents;

	
						if (q.cents >= 100)
						{
							q.cents = (q.cents - 100);
							q.dollars = q.dollars + 1;

						}
			
						dollars = q.dollars;
							cents = q.cents;
			return q;
}
Currency Currency::Change(Currency &G)
{

	
	G.dollars = G.dollars - dollars;
	G.cents = G.cents - cents;

	
						if (G.cents >= 100)
						{
							G.cents = (G.cents / 100) ;
							G.dollars = G.dollars + 1;

						}
			
						dollars = G.dollars;
							cents = G.cents;
			return G;
}

void Currency::Display(void)
{
		if( cents != 0)
		cout<<"The amount is "<< dollars <<" dollar(s) and "<<cents<<" cent(s)"<<endl<<endl;
		else
			cout<<"The amount is $"<<dollars<<endl;

}

void main()
{
Currency a(20, 51);
Currency b(20, 50);
Currency d(23.12);
Currency e(7.08);
Currency g(20, 70);
Currency h(5, 60);
Currency j(12.20);
Currency k(2.10);

Currency C = a.Add(b);
Currency F = d.Add(e);
Currency I = h.Change(g);
Currency L = k.Change(j);
C.Display();
cout<<endl;
F.Display();
cout<<endl;
I.Display();
cout<<endl;
L.Display();
cout<<endl<<"Press any key to continue..."<<endl;

}
