/*

Wesley Dillingham

Using the Switching class you just wrote, add a while loop to the program to make it repeat the entire class
 indefinitely.  So the program should:
•	Prompt the user for a number
•	Display whether the number was 0, 1, 2, 3, or something else
•	Repeat the process



*/


public class InfiniteLoop
{

	public static void main(String[] args)
	{
	
		int num = Integer.parseInt(args[0]);
		int counter = 1;		
		
	
			while(counter==1)
			{
	
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
}
