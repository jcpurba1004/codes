import java.util.Scanner; // Needed for the scanner class

/**
   This program demonstrates the if-else statement.
 */

/**
 * @author jpurba
 *
 */
public class Division {

	/**
	 * 
	 */
	public Division() {
		// TODO Auto-generated constructor stub
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double number1, number2; // Division operands
		double quotient;         // Result of division
		
		// Create a Scanner object for keyboard input.
		Scanner keyboard = new Scanner(System.in);
		
		// Get the first number.
		System.out.print("Enter a number: ");
		number1 = keyboard.nextDouble();
		
		// Get the second number.
		System.out.print("Enter another number: ");
		number2 = keyboard.nextDouble();
		
		if (number2 == 0)
		{
			System.out.println("Division by zero is not possible.");
			System.out.println("Please run the program again and ");
			System.out.println("enter a number other than zero.");
		}
		else
		{
			quotient = number1 / number2;
			System.out.print("The quotient of " + number1);
			System.out.print(" divided by " + number2);
			System.out.println(" is " + quotient);
		}
	}

}
