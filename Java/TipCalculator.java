
//wesley dillingham


package tipcalculator;


import java.util.*;

public class TipCalculator {

  
    public static void main(String[] args) {

        System.out.println("Welcome to the program: ");
        
      
        
        Scanner keyboard = new Scanner(System.in);
        
        System.out.println("Please enter the Subtotal of the bill: ");
        String SubTotal = keyboard.next();
        System.out.println("Please insert the tip percentage you would like to use: ");
        String TipPercent = keyboard.next();
        
        // i wrote this in a differnt program than jgrasp cant figure out how to pass arguments from command line
        //but will go through the same process of parsing and converting which is what this lab is about anyhow
        
        boolean thrown = false;
        
        int TipPercent_Int=0;
        double SubTotal_Double = Double.parseDouble(SubTotal);
        
        try
        {
            
               Integer TipPercent_Object = new Integer(TipPercent);
               TipPercent_Int = TipPercent_Object.intValue();
              // Integer SubTotal_Object = new Integer(SubTotal);
               
               
        }
        catch(NumberFormatException nfe)
        {
            System.out.println(nfe.getMessage());
            System.out.println("number format exception");
            System.exit(0);
            thrown = true;
        }
      
        double TipPercent_Double = (double)(TipPercent_Int);
        double TipAmt = (double)(TipPercent_Double / 100) * SubTotal_Double;
        
       
        System.out.println("Tip amount: $" + TipAmt);
 
    }

}
