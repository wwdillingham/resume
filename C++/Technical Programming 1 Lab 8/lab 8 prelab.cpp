//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          0618-231  Technical Programming I
//					wes dillingham
//                lab 8 - prelab
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

void main()
{

float first[1][2];
float second[1][2];
float total[1][2];
first[0][0] = 16;
first[0][1] = 18;
first[0][2] = 23;
first[1][0] = 54;
first[1][1] = 91;
first[1][2] = 11;
second[0][0] = 24;
second[0][1] = 52;
second[0][2] = 77;
second[1][0] = 16;
second[1][1] = 19;
second[1][2] = 59;


cout<<second[1][2]<<endl;

for (int row = 0; row <=1; row++)
{
    for(int col = 0; col <= 2; col++)
	{

			total[row][col] = first[row][col] + second[row][col];
	}
}

cout<<"The sum array containst the following:"<<endl;

cout<<total[0][0]<<" "<<total[0][1]<<" "<<total[0][2]<<endl;
cout<<total[1][0]<<" "<<total[1][1]<<" "<<total[1][2]<<endl;


}