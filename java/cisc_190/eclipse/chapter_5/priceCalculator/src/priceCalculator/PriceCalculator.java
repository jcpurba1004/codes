/*

Problem 5.2: Retail price calculator

Write a program that asks the user to enter an item's wholesale cost and its markup percentage. It should then display the 
item's retail price. For example:

* If an item's wholesale cost is 5.00 and its markup percentage is 100 percent, then the item's retail price is 10.00.
* If an item's wholesale cost is 5.00 and its markup percentage is 50 percent, then the item's retail price is 7.50.
  
The program should have a method named calculateRetail that receives the wholesale cost and the markup percentage as arguments
and returns the retail price of the item.
 
*/

import javax.swing.JOptionPane;

public class PriceCalculator{
	
	private static final String JOptionPane = null;

	public static double calculateRetail( double wholeSaleCostGiven, double markupPercentageGiven ) {
		double retailPrice;
		retailPrice = ( ( markupPercentageGiven / 100 ) * wholeSaleCostGiven ) + wholeSaleCostGiven;
		return retailPrice;
	}

	public static void main(String[ ] args) {
		String userStringInput;
		double userWholeSaleCost;
		double userMarkupPercentage;
		double retailPriceCalculated;
		
		userStringInput = JOptionPane.showInputDialog( "Please enter the whole sale cost of the item: " );
		userWholeSaleCost = Double.parseDouble( userStringInput );
		
		userStringInput = JOptionPane.showInputDialog( "Please enter the markup percentage of the item: " );
		userMarkupPercentage = Double.parseDouble( userStringInput );
		
		JOptionPane.showMessageDialog( null, String.format( "The item with a whole sale cost of $%, .2f and" +
														   " a markup percentage of %.2f%% has a retail price" +
				                                           " of $%, .2f", userWholeSaleCost,
				                                           userMarkupPercentage,
				                                           calculateRetail( userWholeSaleCost, userMarkupPercentage ) ) );
		System.exit( 0 );
	}
}