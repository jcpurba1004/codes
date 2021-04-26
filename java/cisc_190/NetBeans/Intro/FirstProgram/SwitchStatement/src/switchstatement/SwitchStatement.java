/*
    The switch Statement
 */
package switchstatement;

import java.util.Scanner;

/**
 *
 * @author jpurba
 */
public class SwitchStatement {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        char choice;
        
        System.out.println("Enter A, B or C: ");
        choice = sc.nextLine().charAt(0); // gets first letter of next line
        switch (choice)
        {
            case 'A': System.out.println("You entered A.\n");
                      break;
            case 'B': System.out.println("You entered B.\n");
                      break;
            case 'C': System.out.println("You entered C.\n");
                      break;
            default:  System.out.println("You did not enter A, B or C!\n");
        }
    }   
}