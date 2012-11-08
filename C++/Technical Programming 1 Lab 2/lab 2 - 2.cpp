//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//                 Wesley Dillingham
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


int main()
{

  float r1, r2, r3, e1, e2, i1, i2, i3;

   r1 = 10; r2 = 4; r3 = 6; e1 = 12; e2 = 9;


   i1 = ((e2 * r3) + (e1 * (r1 + r3)) )   / ( (r1 + r3 ) * (r2 + r3) - ((r3)*(r3)));
   i2 = ((e1 * r3) + (e2 * (r1 + r3)) )   / ( (r1 + r3 ) * (r2 + r3) - ((r3)*(r3)));


   i3 = i1 - i2;

   cout<<setiosflags(ios::fixed)
	   <<setiosflags(ios::showpoint)
	   <<setprecision(5);
   


   cout<<setw(7)<<"Branch current 1 is: "<<i1<<endl;
   cout<<setw(7)<<"Branch current 2 is: "<<i2<<endl;
   cout<<setw(7)<<"Branch current 3 is: "<<i3<<endl;
   cout<<setw(7)<<"Press any key to continue.."<<endl;











   

        getch();  // this function looks for an input from the keyboard
        return 0;  // the return function closes the program

}


								
   
