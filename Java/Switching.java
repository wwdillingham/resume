/*

Wesley Dillingham

Write a class called Switching with a main method that accepts an integer number then displays what the
 number was. Use a switch statement to indicate if the number is:
•	Equal to 0
•	Equal to 1
•	Equal to 2
•	Equal to 3
•	Negative or greater than 3

Do not use the variable you used to accept the user’s input in the println statements, type the number inside
 the String. This way you can be sure the switch statement works correctly. What did your switch statement
  look like? (show below:)


*/


public class Switching
{

	public static void main(String[] args)
	{
	
		int num = Integer.parseInt(args[0]);		
		
		switch(num)
		{
		
		case 0: 	System.out.println("The number equals 0");	break;
		case 1: 	System.out.println("The number equals 1");	break;
		case 2: 	System.out.println("The number equals 2");	break;
		case 3: 	System.out.println("The number equals 3");	break;
		default: System.out.println("Negative or > 3"); break;

					
			
		}
		
	}
}
