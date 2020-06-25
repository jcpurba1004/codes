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
package payrollDialog;

/**
 * @author jpurba
 *
 */

import javax.swing.JOptionPane;


public class payrollDialog {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String inputString;     // For reading input
		String name;            // The user's name
		int hours;              // The number of hours worked
		double payRate;         // The user's hourly pay rate
		double grossPay;        // The user's gross pay
		
		// Get the user's name
		name = JOptionPane.showInputDialog("What is " + "your name? ");
		
		// Get the hours worked
		inputString = JOptionPane.showInputDialog("How many hours " + "did you work this week? ");
		
		// Convert the input to an int
		hours = Integer.parseInt(inputString);
		
		// Get the hourly pay rate
		inputString = JOptionPane.showInputDialog("What is your " + "hourly pay rate? ");
		
		// Convert the input to a double
		payRate = Double.parseDouble(inputString);
		
		// Calculate the gross pay
		grossPay = hours * payRate;
		
		// Display the results
		JOptionPane.showMessageDialog(null, "Hello " + name + ". Your gross pay is $ " + grossPay);
		
		// End of program
		System.exit(0);
	}

}