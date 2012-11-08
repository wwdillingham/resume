/*

Wesley Dillingham

you said it was okay to skip the range and go straight to range 2 if I knew what was going on from the get go.

Part 2: Logical Operators
Write a class called Range with a main method that accepts one integer number. Using logical operators and
 one if-statement indicate if the number is:
•	Less than zero
•	Between 0 and 10 
•	Between 10 and 20 
•	Between 20 and 30 
•	Between 30 and 40 
•	Greater than 40


*/



public class Range
{

	public static void main(String[] args)
	{
	
		int score = Integer.parseInt(args[0]);		
		
		if (score <= 0)
		{
		System.out.println("less than or equal to zero");
		}
		else if( (score > 0) && (score <= 10))
		{
			System.out.println("falls between 0 and 10 not including 0 but including ten");
		}
		else if( (score > 10) && (score <= 20) )
		{
			System.out.println("falls between 10 and 20 not including 10 but including 20");
		}
		
		else if( (score > 20) && (score <= 30) )
		{
			System.out.println("falls between 20 and 30 not including 20 but including 30");
		}
		else if( (score > 30) && (score <= 40) )
		{
			System.out.println("falls between 30 and 40 not including 30 but including 40");
		}
		else
		{
			System.out.println("greater than 40");	
		}
		
	
	
	}	
	
}

