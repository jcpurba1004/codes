/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 *
 * Other Contributors:
 * None
 * 
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley.
 * 
 * Version: 1.2 (07/04/2020)
 */

// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: PenniesForPay
 * Purpose   : To calculate the amount a person would earn over a period of time. 
 *             His / her salary is one penny the first day, two pennies the second day,
 *             and continues to double each day.
 *             The program should display a table showing the salary for each day, and 
 *             then show the total pay at the end of the period.
 *             The output should be displayed in a dollar amount, not the number 
 *             of pennies.
 * 
 */
public class PenniesForPay {

	public static void main(String [ ] args) 
	{
		
		// variable for number of day to work and loop count for days
		int maxDays;
		int dayCount;
		
		// variable to calculate total payment and current payment
		// Start with a penny on the first day
		final int initialSalary = 1;
		final int minimumDay = 1;
		final float pennyToDollar = 100.0f;
		int totalPay = 0;
		int currentPay;
		
		// scanner object for user's input
		Scanner input = new Scanner (System.in);
		
		// Ask user input for number of day to work
		System.out.println("How many days will you work ? ");
		maxDays = input.nextInt();
		
		// input validation
		while(maxDays < minimumDay ) 
		{
			System.out.println("Error ! The number of days must be at least 1 !");
			System.out.println("How many days will you work ? ");
			maxDays = input.nextInt();
		}
	    
		//Display the pay table
		System.out.println("\tDay\tPennies Earned");
		System.out.println("------------------------------------");
		
		// For the first day, set pay to a penny
		currentPay = initialSalary;
		
		// Calculate pay for each day
		for (dayCount=minimumDay; dayCount <= maxDays; dayCount++)
		{
			// Display output number of day and pay (in $ Dollar)
			System.out.println("\t" + dayCount + "\t" + currentPay);
			
			// Accumulate the total pay;
			totalPay+=currentPay;
			
			// Double the current pay
			currentPay *= 2;
		}
		System.out.printf("------------------------------------\n");
		System.out.printf("Total Salary    $ %,.2f \n ",(totalPay/pennyToDollar));
		
		input.close();
		
	}
	
	
	
}