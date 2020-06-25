
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

// Needed for JOptionPane and decimal format
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

/**
 * Class Name: BillCalculator
 * Purpose   : Computes the tax (6.75%) from meal charge and tip (20%) of  
 *             the total after adding the tax.
 *             Then calculate the total bill which includes tax and tips.
 *             Ask user input for purchase amount then display to screen
 *             the meal charge, tax amount, tip amount and total bill.
 */
public class BillCalculator
{

    public static void main(String[] args) 
    {
		
	// Constant for tax (6.75 %) and tip (20 % after adding tax)
	final double tax = 0.0675 ;
	final double tip = 0.20   ;
		
	// Variables for meal charge, tax, tip and total bill
	String inputString;
	double mealCharge;
	double taxAmount;
	double tipAmount;
	double totalBill;
	double totalMealTax;
	DecimalFormat decimalFormat = new DecimalFormat("#.##"); 
		
	// Ask user input for meal charge
	inputString = JOptionPane.showInputDialog("What is your " + "meal charge? ");
		
	// Convert the input string to a double
        mealCharge = Double.parseDouble(inputString);
        
        // Calculate tax, tip and total bill amount
        taxAmount = tax * mealCharge;
        totalMealTax = mealCharge + taxAmount;
        tipAmount = tip * totalMealTax;
        totalBill = totalMealTax + tipAmount;
        
        // Display meal charge and calculation results to screen
        JOptionPane.showMessageDialog(null, "Your meal charge is $ " + decimalFormat.format(mealCharge)
        + "\n" + "Your tax amount is $ " + decimalFormat.format(taxAmount) + "\n" + "Your tip amount is $ " 
        + decimalFormat.format(tipAmount) + "\n" + "Your total bill is $ " + decimalFormat.format(totalBill));
        
        System.exit(0);
    }
}
