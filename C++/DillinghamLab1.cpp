//---------------------------------------------------------------------------
// 
//---------------------------------------------------------------------------
//          Technical Programming III
//					wes dillingham
//                lab 1
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
//-------------------------------------------------------------------------

const int three = 3;


	class matrix
	{
	private:
		double matrx[three][three];
	public:
		matrix(double  = 0};
		matrix matrix_addition(matrix);
		matrix matrix_subtraction(matrix);

	};

	matrix::matrix(double mtrx)
	{
		matrx = mtrx;
	}

	matrix matrix::matrix_addition(matrix A[three][three])
	{
		matrix C ={0,0,0,0,0,0,0,0,0};
		for(int rows = 0; rows <= three; rows++)
		{
			for(int col = 0; col <= three; col++)
			{
				C[rows][cols] = matrx[rows][cols] + A.matrx[rows][cols];
			}


		}
			return C;
	}
void main()
{
	// this program involves working with both matrices and vectors.

	matrix matrix1=  {
						{1,2,3}
						{4,5,6}
						{7,8,9}
					  };

matrix matrix2=  {
					{9,8,7}
					{6,5,4}
					{3,2,1}
				  };

matrix matrix1p2 = matrix1.matrix_addition(matrix2);





//display

for(int rows = 0; rows <= three; rows++)
		{
			for(int col = 0; col <= three; col++)
			{
				cout<<matrix1p2[rows][cols]<<endl;
			}


		}


}