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
 * Other sources, if you use any; remove this line if not.
 *
 * Version: 1.0 (06/24/2020)
 */

// Needed for the Scanner class
import java.util.Scanner;

public class SalesTaxCalculator {
	

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		// constant for state and county tax rate percentage
		final double stateTaxRate = 0.04;
		final double countyTaxRate = 0.02;
		
		// Calculate tax amounts and total amount
		double purchaseAmount;
		double stateSalesTax;
		double countySalesTax;
		double totalSalesTax;
		double totalSale;
		
		// Create a Scanner object to read input
		Scanner keyboard = new Scanner(System.in);
		
		// Ask user's purchase Amount
		System.out.println("What is your purchase amount?");
		purchaseAmount = keyboard.nextDouble();
		
		// Calculate tax, total tax and total sale
		stateSalesTax = stateTaxRate * purchaseAmount;
		countySalesTax = countyTaxRate * purchaseAmount;
		totalSalesTax = stateSalesTax + countySalesTax;
		totalSale = purchaseAmount + totalSalesTax;
		
		// Print out statement
		System.out.printf("Amount of Purchase = $ %.2f\n", purchaseAmount);
		System.out.printf("State Sales Tax = $ %.2f\n", stateSalesTax);
		System.out.printf("County Sales Tax = $ %.2f\n", countySalesTax);
		System.out.printf("Total Sales Tax = $ %.2f\n", totalSalesTax);
		System.out.printf("Total Sale = $ %.2f\n", totalSale);
	}

}