package customexceptionclasses;

public class BankAccount {
    private double balance;
    /*constructor that takes in a double startBalance
    The constructor throws a NegativeStartingBalance Exception if
    startBalance < 0.
    */
    public BankAccount(double startBalance) throws NegativeStartingBalance {
        try {
             if (startBalance < 0) {
             throw new NegativeStartingBalance(startBalance); 
        }
        balance = startBalance;
        }
        catch(NegativeStartingBalance ex) {
            System.out.println("Negative Starting Balance. "
                    + ex.getMessage());
        }
    }
}