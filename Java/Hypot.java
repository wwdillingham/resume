import java.lang.*;

public class Hypot 
{
    public static void main(String [] args)
    {
        if (args.length != 2)
        {
            System.out.println("you need to enter two args");
            System.exit(1);
        }
    
    
        double d1 = 0;
        double d2 = 0;
        
        try
        {
            d1 = new Double(args[0]);
            d2 = new Double(args[1]);
            
        }
        catch(NumberFormatException nfe)
        {
            System.out.println("Arguments need to be numbers.");
            System.exit(2);
        }
        
       
        double a = d1;
        double b = d2;
        // why dereference when already a double...
        
        double hypotenuse = math.sqrt(((a*a)+(b*b)));
        System.out.print("the hypot of a right triangle with sides of ");
        System.out.println(a + " and " + b);
        System.out.println(" is " + hypotenuse);
    }
    
    
    
}