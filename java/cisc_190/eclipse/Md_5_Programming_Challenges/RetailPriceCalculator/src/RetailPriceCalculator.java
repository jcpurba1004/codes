import java.util.Scanner;

/**
   This program demonstrates a solution to the 
   Retail Price Calculator programming challenge.
 */

public class RetailPriceCalculator 
{
	public static void main(String[] args) 
	{
		double wholesale;   // An item's wholesale cost
		double markup;      // The item's markup percentage
		double retailPrice; // The item's retail price
		
		// Create a Scanner object for keyboard input.
		Scanner keyboard = new Scanner(System.in);
		
		// Get the item's wholesale cost.
		System.out.print("Enter the item's wholesale cost: ");
		wholesale = keyboard.nextDouble();
		
		// Get the item's markup percentage.
		System.out.println("Enter the item's markup percentage");
		System.out.print("(example: enter 50 for 50 percent): ");
		markup = keyboard.nextDouble();
		
		// Convert the markup percentage.
		markup = markup / 100.0;
		
		// Get the retail price.
		retailPrice = calculateRetail(wholesale, markup);
		
		// Display the retail price.
		System.out.printf("The item's retail price is $%, .2f\n", retailPrice);
	}

	/**
	   The calculateRetail method calculates an item's
	   retail price.
	   @param wholesale The item's wholesale price
	   @param markupPercent The item's markup percentage
	          (ex: 50 percent would be passed as 0.5)
	   @return The item's retail price.
	 */
	
	public static double calculateRetail(double wholesale, double markupPercent)
	{
		double retail = wholesale + (wholesale * markupPercent);
		return retail;
	}
}