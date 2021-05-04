/* Driver class
Create a BankAcount object with a negative starting balance
in the constructor
We will need to handle or declare in the method header
NegativeStartingBalance can be thrown
 */
package customexceptionclasses;

public class AccountTest {
    public static void main(String[] args) {
        System.out.println("Attempting to create an account"
                + " with a $20000 starting balance");
        BankAccount account1 = new BankAccount(20000);
        System.out.println("Attempting to create an account"
                + " with a $10000 starting balance");
        BankAccount account2 = new BankAccount(-10000);
        System.out.println("Attempting to create an account"
                + " with a $15000 starting balance");
        BankAccount account3 = new BankAccount(15000);
    }
}