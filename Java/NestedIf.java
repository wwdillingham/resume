/*

Wesley Dillingham

Write a class called NestedIf with a main method that accepts an integer number then displays information about 
the number. First check to see if the number is positive or negative. Next, if it is positive see if it is an
even or odd number. Also, if it is an even number see if it is evenly divisible by 4. Display a message for 
each decision made
*/


public class NestedIf
{

	public static void main(String[] args)
	{
	
	
				int number = Integer.parseInt(args[0]);				
			if (number >= 0)
			{
				System.out.println("the number is positive");
				if (number % 2 == 0)
				{
					System.out.println("the number is even");
					
							if (number % 4 == 0)
							{
								System.out.println("the number is also divisible by 4");
							}					
				}
				else
				{
					System.out.println("the number is odd");
				}
			}
			else
			{
				System.out.println("the number was negative");
			}
	
	
	}


}