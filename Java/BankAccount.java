/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package bankaccount;

/**
 *
 * @author Wes
 */
public class BankAccount {

 
    private String accountNumber;
    private double balance;
    private double maxWithdrawal;
    private String customerName;
    
    
    
    public static void main(String[] args) {
        
        BankAccount acct = new BankAccount();
        
        
        
        
        
    }
    
    public boolean withdrawl(double amt)
    {
        boolean validAmt = false;
        
        if (this.maxWithdrawal >= amt && this.balance >= amt)
        {
            this.balance -= amt;
            validAmt=true;
        }
        else
        {
            validAmt=false;
        }
                
             
        
        
       return validAmt;
    }
    
      public void deposit(double amt)
    {
        balance += amt;
          
        
    }
      
     
      public void seMaxWithdrawalAmt(double amt)
      {
          maxWithdrawal = amt;
          
      }
      
      public void setCustomerName(String name)
      {
          customerName = name;
      }

}
