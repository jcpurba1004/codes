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
		String userInputString;
		double wallSpace;
		double totalWallSpace = 0;
		for( int currentRoom = 1; currentRoom <= numberOfRooms; currentRoom++) {
			userInputString = JOptionPane.showInputDialog( "Please enter the square feet of wall space in room " + currentRoom);
			wallSpace = Double.parseDouble( userInputString );
			totalWallSpace += wallSpace;
		}
		return totalWallSpace;
	}
	
	public static int main(String[ ] args) {
		/*
		If     115 square feet = 1 gallon
		then   totalWallSpace  =    ?
		*/
		double gallonsOfPaintOfRequired;
		gallonsOfPaintRequired = ( totalWallSpace / 115 ) * 8;
		return gallonsOfPaintRequired;
	}
	
	public static double calculateCostOfPaint( double priceOfPaint, double gallonsOfPaintRequired ) {
		double costOfPaint;
		costOfPaint = gallonsOfPaintRequired * priceOfPaint;
		return costOfPaint;
	}
	
	public static double calculateLaborCharges( double hoursOfLaborRequired, double chargePerHour ) {
		double laborCharges;
		laborCharges = hoursOfLaborRequired * chargePerHour;
		return laborCharges;
	}
	
	public static double calculateTotalCost( double laborCharges, double costOfPaint ) {
		double totalCost;
		totalCost = laborCharges * costOfPaint;
		return totalCost;
	}
	
	public static void displayDataOnScreen( int userNumberRooms, double totalWallSpace, double priceOfPaintPerGallon,
			                               double gallonsOfPaintRequired, double hoursOfLaborRequired, double costOfPaint,
			                               double laborCharges, double totalCost ) {
		String outputString;
		outputString = String.format( "User number of rooms: %d\nTotal wall space: %.2f\nPrice of paint per gallon:"+
						             " $%,.2f\nGallons of paint" required: %.1f\nHours of labor required: %.1f\nCost of paint:"+ "
						             " $%,.2f\nLabor Charges: $%,.2f\nTotal Cost: $%,.2f", userNumberRooms, totalWallSpace, 
						             priceOfPaintPerGallon, gallonsOfPaintRequired, hoursOfLaborRequired, costOfPaint, 
						             laborCharges, totalCost );
		JOptionPane.showMessageDialog( null, outputString );
	}
	
	public static void main( String [ ] args ) {
		final double CHARGE_PER_HOUR = 18.00;
		int userNumberOfRooms = getNumberOfRooms();
		double totalWallSpace = getTotalWallSpace( userNumberOfRooms );
		double priceOfPaintPerGallon = getPaintPricePerGallon();
		double gallonsOfPaintRequired = calculateGallonsOfPaintRequired( totalWallSpace );
		double hoursOfLaborRequired = calculateHoursOfLaborRequired( totalWallSpace );
		double costOfPaint = calculateCostOfPaint( priceOfPaintPerGallon, gallonsOfPaintRequired );
		double laborCharges = calculateLaborCharges( hoursOfLaborRequired, CHARGE_PER_HOUR );
		double totalCost = calculateTotalCost( laborCharges, costOfPaint );
		displayDataOnScreen( userNumberOfRooms, totalWallSpace, priceOfPaintPerGallon, gallonsOfPaintRequired,
				            hoursOfLaborRequired, costOfPaint, laborCharges, totalCost );
		System.exit( 0 );
		
	}
	
	
}
