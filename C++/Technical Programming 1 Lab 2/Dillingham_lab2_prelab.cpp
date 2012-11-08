//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//       
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

	float xl, x2, a2, b1, b2, b3, c1, c2, c3, a1, a3;
    
 //  cout <<"X1? "<<endl;
   //cin>>x1;
   
  // cout <<"x2? "<<endl;
   //cin>>x2;


// a variables are designated to the first linear equation
// b naturally coordinates with linear equation 2

	a1 = 3; a2 = 4, a3 = 40;         // beginning values.
	b1 = 5; b2 = 2; b3 = 34;



             b1 = b1 * (-2);
			 b2 = b2 * (-2);
			 b3 = b3 * (-2);

		 //c is the addition of a and b

	 c1 = b1 + a1;
	 c2 = b2 + a2;
	 c3 = b3 + a3;

                     // coordinate values.

	 x1 = c3 / c1;   // acheived value of x(1)


	 a1 = a1 * x1;
	 a3 = a3 - a1;
	 x2 = a3 / a2;

	 cout << "x1 is: "<<x1<<endl;
	 cout << "x2 is: "<<x2<<endl;

	 









   

        getch();  // this function looks for an input from the keyboard
        return 0;  // the return function closes the program




										//3x(1) + 4x(2) = 40
										//5x(1) + 2x(2) = 34
   
   




        getch();  // this function looks for an input from the keyboard
        return 0;  // the return function closes the program