/*

Problem 6.5: Payroll class

Design a Payroll class that has fields for an employee's name, ID number, hourly pay rate and number of hours worked.
Write the appropriate accessor and mutator methods and a constructor that accepts the employee's name and ID number as arguments.
The class should also have a method that returns the employee's gross pay, which is calculated as the number of hours worked
multiplied by the hourly pay rate. Write a program that demonstrates the class by creating a Payroll object, then asking
the user to enter the data for an employee. The program should display the amount of gross pay earned.

*/

import javax.swing.JOptionPane;

public class Payroll{
	public static void main( String [ ] args ) {
		
		String userInputString;
		String userName;
		int userId;
		double userHourlyPayRate;
		double userHoursWorked;
		String outputString;
		
		userName = JOptionPane.showInputDialog( "Whose payroll is this: " );
		userInputString = JOptionPane.showInputDialog( "Enter the id number of " + userName + ": " );
		userId = Integer.parseInt( userInputString );
		userInputString = JOptionPane.showInputDialog( "Enter the hourly pay rate of " + userName + ": " );
		userHourlyPayRate = Double.parseDouble(userInputString);
		userInputString = JOptionPane.showInputDialog( "Enter the hours worked: " );
		userHoursWorked = Double.parseDouble( userInputString );
		
		Payroll payroll1 = new Payroll( userName, userId );
		payroll1.setHourlyPayRate( userHourlyPayRate );
		payroll1.setHoursWorked( userHoursWorked );
		String.format( "%s has a gross pay of $%,.2f", payroll1.getName(), payroll1.calculateGrossPay() );
		
		System.exit( 0 );
	}
}