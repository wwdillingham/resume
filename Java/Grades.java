//Wesley Dillingham
//Java for Programmers fall 08
//

package Grades;

import java.util.*;


public class Grades
{


    ArrayList al = new ArrayList();
   
			public static void main (String[] args)
			{
				System.out.println("Welcome to the program");
				
				
				Scanner keyboard = new Scanner(System.in);
				Grades MyGrades = new Grades(); 
				String KeepGoing = "y";
				String Input;
				
			for (; KeepGoing != "n" || KeepGoing != "N";)
			{
				
				System.out.println("Please enter a grade: ");
				Input = keyboard.next();
				
				MyGrades.al.add(Input);
				
				System.out.println("do you wish to enter another grade? (y/n)");
				KeepGoing = keyboard.next();
				
				
			 }			
			
			}//end main

										public void enterGrades(String Grade_)
										{
											
											al.add(Grade_);
										
										}

		public void writeGrades(Grades MyGrades_)
		{
		/*	for (int i = 0; i < al.size(); i++)
			{
				System.out.println("Element " + i + " contains " + al[i]);
			}
			*/
			
			System.out.println("Your Grades are: " + MyGrades_.al);
		}


}