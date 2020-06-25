/**
 * 
 */
package payrollDialog;

/**
 * @author Dell
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
		
		// Get the user's name
		name = JOptionPane.showInputDialog("What is " + "your name? ");
		
		// Get the hours worked
		inputString = JOptionPane.showInputDialog("How many hours " + "did you work this week? ");
		
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