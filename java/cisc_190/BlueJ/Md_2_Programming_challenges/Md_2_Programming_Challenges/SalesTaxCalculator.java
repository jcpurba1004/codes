 /**
 * Lead Author:
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.1 (06/25/2020)
 */

// Needed for the Scanner class to get user input
import java.util.Scanner;

/**
 * Class Name: SalesTaxCalculator
 * Purpose   : Calculate state sales tax (4%) and county sales tax (2%) 
 *             from purchase amount. Then add all of them to calculate total tax.
 *             Compute also total sale which includes total tax.
 *             Ask user input for purchase amount then display to screen
 *             purchase amount, state and county sales tax, total sales tax and
 *             total sale.
 */
public class SalesTaxCalculator
{
    
    public static void main(String[] args) 
    {
	
        // constant for state and county tax rate percentage
        final double stateTaxRate = 0.04;
        final double countyTaxRate = 0.02;
    
        // Variables for purchase amount, to compute tax amounts and total amount
        double purchaseAmount;
        double stateSalesTax;
        double countySalesTax;
        double totalSalesTax;
        double totalSale;

        // Create a Scanner object to read input
        Scanner keyboard = new Scanner(System.in);
    
        // Ask user for input purchase Amount
        System.out.println("What is your purchase amount?");
        purchaseAmount = keyboard.nextDouble();
    
        // Calculate taxes, total tax and total amount
        stateSalesTax = stateTaxRate * purchaseAmount;
        countySalesTax = countyTaxRate * purchaseAmount;
        totalSalesTax = stateSalesTax + countySalesTax;
        totalSale = purchaseAmount + totalSalesTax;
    
        // Print out statement to screen
        System.out.printf("Amount of Purchase = $ %.2f\n", purchaseAmount);
        System.out.printf("State Sales Tax = $ %.2f\n", stateSalesTax);
        System.out.printf("County Sales Tax = $ %.2f\n", countySalesTax); 
        System.out.printf("Total Sales Tax = $ %.2f\n", totalSalesTax);
        System.out.printf("Total Sale = $ %.2f\n", totalSale);
	
        System.exit(0);
    }
}
