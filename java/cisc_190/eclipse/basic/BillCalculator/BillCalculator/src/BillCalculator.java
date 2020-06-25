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
 * Version: 1.0 (06/25/2020)
 */
import java.util.Scanner;
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class BillCalculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		// Constant for tax (6.75 %) and tip (20 % after tax)
		final double tax = 0.0675;
		final double tip = 0.20;
		
		// Variables for mealCharge, tax, tip and total bill
		String inputString;
		double mealCharge;
		double taxAmount;
		double tipAmount;
		double totalBill;
		double totalMealTax;
		DecimalFormat decimalFormat = new DecimalFormat("#.##");
		
		// Create a scanner object to read input
		Scanner input = new Scanner(System.in);
		
		// Ask user input for meal charge
		inputString = JOptionPane.showInputDialog("What is your " + "meal charge? ");
		
		// Convert the input string to a double
		mealCharge = Double.parseDouble(inputString);
		
		// Calculate tax, tip and total bill
		taxAmount = tax * mealCharge;
		totalMealTax = mealCharge + taxAmount;
		tipAmount = tip * totalMealTax;
		totalBill = totalMealTax + tipAmount;
		
		// Display meal charge and calculation results to screen
		JOptionPane.showMessageDialog(null, "Your meal charge is $ " + decimalFormat.format(mealCharge)
		+ "\n" + "Tax amount is $ " + decimalFormat.format(taxAmount) + "\n" + "Tip amount is $ "
		+ decimalFormat.format(tipAmount) + "\n" + "Total bill is $ " + decimalFormat.format(totalBill));
	}

} 