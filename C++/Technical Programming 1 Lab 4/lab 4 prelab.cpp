//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 4 - prelab
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
		float a,b,c,d,e;
		
 a=10; b = 10; c = 10; d = 10; e = 10;
		while (( a < 100 && b < 100 && c < 100 && d < 100 && e < 100 && a > 0 && b > 0 && c > 0 && d > 0 && e > 0 ))
		{
		 cout<<"please enter in integer 1 "<<endl;
		 cin>>a; 

		 cout<<"please enter in integer 2 "<<endl;
		 cin>>b; 

 		 cout<<"please enter in integer 3 "<<endl;
		 cin>>c; 

		  cout<<"please enter in integer 4 "<<endl;
		 cin>>d; 

		 cout<<"please enter in integer 5 "<<endl;
		 cin>>e; 
if (a < 100 && b < 100 && c < 100 && d < 100 && e < 100 && a > 0 && b > 0 && b > 0 && d > 0 && e > 0)
	break;
		

		}

		if ( a > b && a > c && a > d && a > e)
			cout<< a <<" is the largest of the integers and was the first term"<<endl;
		else if (( b > a && b > c && b > d && b > e))
			cout<<b<<" is the largest of the integers and was the second term "<<endl;
		else if (( c > a && c > b && c > d && c > e))
			cout<<c<<" is the largest of the integers and was the third term "<<endl;
		else if (( d > a && d > c && d > b && d > e))
			cout<<d<<" is the largest of the integers and was the fourth term "<<endl;
		else if (( e > a && e > c && e > d && e > b))
			cout<<e<<" is the largest of the integers and was the fifth term "<<endl;
		else
			cout<<"Two or more of the integers were the same so none of the integers could be found as the greatest, or some other error occured"<<endl;






		 

		 getch();
}