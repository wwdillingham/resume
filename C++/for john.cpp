/*Lottery Probability Program.  Currently, I am only trying to count up how many
times a certain number appears in the lottery from 1/01/04 to 3/12/05.  I am
sending the file called "0405numbers.txt".  It will read, but */

#include <iostream>
#include <fstream.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#include <conio.h>
#include "stdafx.h"

int main()
{

  int num [53];
  for(int j=0; j<=53; j++)
  {
          num[j] = 0;
  }
  int count = 1;
  int pos = 0;
  char space;
  int tempnum;
  char check;
//insert code for opening text file
//OR insert manual entry code
  cout << "got this far. Y" << endl;
  cin >> check;
  ifstream file;
  file.open("0405numbers.txt", ios::in); //Open Numbers File
  file.seekg(12);
  cout << "got to seekg. Y" << endl;
  cin >> check;
  while(!file.eof())
  {                  
     for(int k=1; k<=6; k++)
     {
       cout<<"Run "<<k<<endl;
       file >> tempnum;
       num[tempnum]++;
       cout << tempnum<<endl;
       tempnum = 0;
       file >> space;
     }
     pos = pos + 38;
     file.seekg(pos);
  }
  
ofstream fileout;
fileout.open("results.txt", ios::out); //Open Results File

  while(count < 54)
  {
    fileout << "Number " << count << ":" << num[count] << endl;
    cout << "Number " << count << ":" << num[count] << endl;
    count = count + 1;
  }

fileout.close();
file.close();

return 0;
}

}