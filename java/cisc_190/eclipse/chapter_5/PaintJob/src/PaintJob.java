/*

Problem 5.4: Paint Job Estimator

A painting company has determined that for every 115 square feet of wall space, one gallon of paint and eight hours of labor
will be required. The company charges $18.00 per hour for labor. Write a program that allows the user to enter the number 
of rooms to be painted and the price of the paint per gallon. It should also ask for the square feet of wall space in each room.
The program should have methods that return the following data:

* The number of gallons of paint required
* The hours of labor required
* The cost of the paint
* The labor charges
* The total cost of the paint job

Then it should display the data on the screen.
 
*/

import javax.swing.JOptionPane;

public class JobEstimator{

	public static int getNumberOfRooms() {
		String userInputString;
		int userNumberOfRooms;
		userInputString = JOptionPane.showInputDialog( "Please enter the number of rooms that are going to be painted: " );
		userNumberOfRooms = Integer.parseInt( userInputString );
		return userNumberOfRooms;
	}
	
	public static double getPaintPricePerGallon() {
		String userInputString;
		double priceOfPaint;
		userInputString = JOptionPane.showInputDialog( "Please enter the price of the paint " );
		priceOfPaint = Double.parseDouble( userInputString );
		return priceOfPaint;
	}
	
	public static double getTotalWallSpace( int numberOfRooms ) {
		double wallSpace;
		double totalWallSpace = 0;
		for( int currentRoom = 1; currentRoom <= numberOfRooms; currentRoom++) {
			wallSpace = JOptionPane.showInputDialog( "Please enter the square feet of wall space in room " + currentRoom );
			totalWallSpace += squareFeet;
		}
		return totalWallSpace;
	}
	
	public static int main(String[ ] args) {
		

	}

}
