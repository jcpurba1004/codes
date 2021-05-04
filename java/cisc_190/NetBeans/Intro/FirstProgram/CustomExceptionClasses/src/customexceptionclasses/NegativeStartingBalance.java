package customexceptionclasses;

public class NegativeStartingBalance extends Exception {

    /**
     * @param args the command line arguments
     */
        public NegativeStartingBalance(double amount) {
            super("That's an error. " +
                     "Negative starting balance: " + amount);
        }
    }