import java.util.Scanner;
import java.util.InputMismatchException;

public class VendingMachine {
	
    public static void main(String[] args) {
        	
        Scanner scnr = new Scanner(System.in);
        int itemNumber = 0;
        boolean askForInput = true;
                
        while(askForInput) {
            try {
                itemNumber = scnr.nextInt();
                if((itemNumber <=0) || (itemNumber > 8)) {
                	throw new Exception("Try again");
                }
                System.out.println("Dispensing item " + itemNumber);
                askForInput = false;
            }
            catch (InputMismatchException excpt) {
                System.out.println("Fatal error");
                askForInput = false;
            }
            catch (Exception excpt) {
            	System.out.println(excpt.getMessage());
            	askForInput = true;
            }
        }
    }
}