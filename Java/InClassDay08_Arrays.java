
package inclassday08_arrays;

public class InClassDay08_Arrays {

  
    public static void main(String[] args) {
       
        int[] array = new int[201];
        
        int num = 0; 
        for (int i = 0; i< array.length; i++)
        {
            array[i] = num;
            num+=2;
        }
        
        for (int p = 0; p < array.length; p++)
        {
            System.out.println("Data in element: " + p + " contains " + array[p]);
        }
        
        
    }

}
