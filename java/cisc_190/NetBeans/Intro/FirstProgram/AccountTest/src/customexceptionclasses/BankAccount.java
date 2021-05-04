
package customexceptionclasses;

public class BankAccount {

    private static String getMessage() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    private double balance;
    /*constructor that takes in a double startBalance
    The constructor throws a Negative StartingBalance Exception if
    startBalance < 0.
    */
    public BankAccount(double startBalance) throws NegativeStartingBalance {
        if (startBalance < 0) {
            throw new NegativeStartingBalance(startBalance);
        }
        balance = startBalance;
        }
        catch(NegativeStartingBalance ex) static {
            System.out.println("Negative Starting Balance. "
                    + getMessage());
        }
    }