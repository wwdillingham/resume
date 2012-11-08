//---------------------------------------------------------------------------
//
//---------------------------------------------------------------------------
//          0618-231  Technical Programming II
//                                      wes dillingham
//                lab 8 - main lab
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

struct players
{
	char name[20];
	char lastname[20];
	int weight;
	float salary;
};

void main()
{
	players test[2] = {"player1first", "player1last", 220, 75,"playa2first", "playa2last", 44, 54};

		cout<<"this is a coded extension of lab 8 for tp 2, testing the validity of 2-dimensional arrays with the first dimension as a struct data type"
		     <<endl
			 <<"also - testing utilization syntax"
			 <<"player one first name"
			 <<endl
			 <<test[1].name
			 <<endl;

	int num = 0 ;

	for(num = 0; num < 1 || num > 20; )
	{
cout<<"How many players? (must be between 1 and 20) "<<endl;
cin>>num;
	}
		

	players player[20];

for (int k = 0; k < num; k++)
		{	
			//char name[20]
			cout<<"First Name of player "<<k + 1<<" ? "<<endl;
			cin>>player[k].name;
			cout<<endl;

			cout<<"Last name of player "<<k + 1<<" ? "<<endl;
			cin>>player[k].lastname;
			cout<<endl;


			cout<<"Weight of player "<<k+1<<" ? "<<endl;
			cin>>player[k].weight;
			cout<<endl;

			cout<<"Salary of player "<<k+1<<" ? "<<endl;
			cin>>player[k].salary;
			cout<<endl;
		}

		system("CLS");

		for (int j = 0; j < num; j++) //display
		{
                cout<<"Name of player "<<j + 1<<" is "<<player[j].name<<" "<<player[j].lastname<<endl;
				 cout<<"Weight of player "<<j + 1<<" is "<<player[j].weight<<endl;
				 cout<<"salary of player "<<j + 1<<" is "<<player[j].salary<<endl;
				 cout<<"---------------------------------------------"<<endl;

		}




		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"This program was written produced and directed by Wesley Dillingham"<<endl;
		cout<<"Press any key to continue..."<<endl;

}