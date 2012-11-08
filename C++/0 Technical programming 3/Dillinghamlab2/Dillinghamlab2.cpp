//Wes Dillingham

//Technical programming III
//on my honor....

#include "stdafx.h"
using namespace std;
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

const int maxels = 7;

class numbers //This class simulates very large numbers by having a very long array of ints
{
private:

int number[maxels];  //This indicates that the program will be unable to handle any value with more than 1000 / maxels digits in it.


public:
 numbers(int num[maxels]=0); //constructor
 void simplify(void);		//strips leading 0's from beginning of array /"simulated number" (if there)
 numbers add(numbers &num);      
 numbers subtract(numbers);
 numbers multiply(numbers); 
 void display(void);
	



};

numbers::numbers(int num[maxels])
{
	for(int j = 0; j<=maxels; j++)
number[j] = num[j];
}
void numbers::simplify(void)
 {
		if (number[0] != 0)
		cout<<"The number is in proper form, no simplification needed"<<endl;
		else 
		{
		cout<<"The number needs to be stripped of leading 0's"<<endl;
		
				for(int k = 0; number[k] != 0; k++) // locates the first integer / element which is not 0
				{
						
				}


		}

		   


 }

 numbers numbers::add(numbers &num) //adding two simulated numbers
 {
	 int number_end_pos, num_end_pos;


		for(int j = maxels - 1; j>=0 && number[j]!=0 ; j--) //locating position of last number in array number
		{
			if (number[j] != 0)
				number_end_pos = j-1;
		}

			for(int j = maxels - 1; j >= 0 && num.number[j]!=0 ; j--) //locating position of last number in array num:
		{
			if (number[j] != 0)
				num_end_pos = j-1;
		}
			
			int temp[maxels];
			int presum[maxels];
			//int answer[maxels];

			temp[maxels - 1] = num.number[maxels-1] + number[maxels-1];

				for (int j = maxels - 2; maxels; j--)// go backwards
				{
			presum[j] = num.number[j] + number[j] + temp[j];
			if (presum[j] >= 10 )
				temp[j-1] = presum[j] - 10;
			else
				temp[j-1] = 0;
				}
			
return temp;
		
		

 }

 numbers numbers::multiply(numbers &num) // add the first number to itself by the number it should me multiplied, for example, 2 * 30, add 2+2 thirty times
 {
		int temp[maxels];
			int presum[maxels];
			//int answer[maxels];


		for(int k =0; k <=num.numbers; k++) //this loop is the only difference between additiion and multiuplication
		{

			temp[maxels - 1] = num.number[maxels-1] + number[maxels-1];
			
				for (int j = maxels - 2; maxels; j--)// go backwards
				{
			presum[j] = num.number[j] + number[j] + temp[j];
			if (presum[j] >= 10 )
				temp[j-1] = presum[j] - 10;
			else
				temp[j-1] = 0;
				}

		}

 }

 numbers numbers::subtraction(numbers &num)
 {
		


 }

void main()
{
	cout<<"program initiation"<<endl;
	numbers j;
	numbers k;

	for(int f; f<maxels; f++)
	{
		j.numbers[f] = 6;
		k.numbers[f] = 3;
	}


numbers jpk = j.add(k); 
cout<<jpk.number[0]<<endl;;





	cout<<"Press any key to continue..."<<endl;
}