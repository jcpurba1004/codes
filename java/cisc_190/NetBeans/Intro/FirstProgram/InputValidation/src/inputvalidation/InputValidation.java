//Program asks for a number from 1 through 100
package inputvalidation;
import java.util.Scanner;

public class InputValidation {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int value;
        System.out.print("Please input a value between 1 and 100: ");
        value = sc.nextInt();
        
        while (value > 100 || value < 1) {
            System.out.println("The value was not within range.");
            System.out.print("Please input another value:");
            value = sc.nextInt();
        }
    }   
}