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
 * Version: 1.3 (07/12/2020)
 */
// Needed for the Scanner class for input
import java.util.Scanner;

/**
 * Class Name: RetailPriceCalculator
 * Purpose   : Calculate the retail price after adding markup price
 *             to wholesale price
 */
public class RetailPriceCalculator {

    public static void main(String[] args) 
    {
        double wholeSalePrice;     // Original wholesale price cost
        double markupPercentage;   // Markup percentage for the price
        double retailPrice;        // Retail price with markup price
        final double percentage = 100.00;
        
        // Create a Scanner object for keyboard input.
        Scanner input = new Scanner(System.in);
        
        // Ask user input for wholeSalePrice
        System.out.println("Enter item whole sale price: ");
        wholeSalePrice = input.nextDouble();

        // Ask user input for markup percentage
        System.out.println("Enter item markup percentage: ");
        System.out.println("(For example: enter 50 for 50%)");
        markupPercentage = input.nextDouble();

        // Convert markup percentage
        markupPercentage = markupPercentage/percentage;
        
        // Calculate the retail price
        retailPrice = calculateRetailPrice(wholeSalePrice,markupPercentage);
        
        // Display retail price
        System.out.printf("The item's retail price is $ %, .2f\n", retailPrice);
    
        input.close();

    }
    
    
    /*
     * Purpose: calculate retail price from wholesale price
     * Signature: input two doubles and return double 
     * Examples: 
     * calculateRetailPrice(100.00, 50.00) return 150.00
     * calculateRetailPrice(1500.00, 100.00) return 3000.00
     */
    public static double calculateRetailPrice(double wholeSalePrice, double markupPercentage)
    {
        // calculate retail price
        double retailPrice = wholeSalePrice + (wholeSalePrice * markupPercentage);
        
        return retailPrice;
    }

}