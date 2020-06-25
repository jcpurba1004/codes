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

public class BillCalculator {

	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		double mealCharge;
		final double tax = 0.0675; // 6.75% constant amount of meal charge
		double taxAmount;
		double totalWithTax;
		final double tip = 0.20; // 20% constant amount of total amount after adding tax amount
		double tipAmount; 
		double totalBill;
		
		Scanner keyboard = new Scanner(System.in);
				
		//user has to enter the charge for the meal
		System.out.print("Please enter the charge for your meal $");
		mealCharge = keyboard.nextDouble();
		
		keyboard.nextLine();
				
		//calculate meal charge, tax amount, tip amount, and total bill
		taxAmount = mealCharge * tax;
		totalWithTax = mealCharge + taxAmount;
		tipAmount = totalWithTax * tip;
		totalBill = totalWithTax + tipAmount;
		
		//display to user meal charge, tax amount, tip amount, and total bill
		System.out.println("Your meal charge amount is $" + mealCharge + ".");
		System.out.println("Your tax amount is $" + taxAmount + ".");
		System.out.println("Your tip amount is $" + tipAmount + ".");
		System.out.println("-----------------------------------");
		System.out.println("Your total bill amount is $" + totalBill + ".");
				
		//end the program
		System.exit(0);
	}
}