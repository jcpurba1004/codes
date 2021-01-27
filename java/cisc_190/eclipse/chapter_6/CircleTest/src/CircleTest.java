/*

Problem 6.7: Circle class

Write a Circle class that has the following fields:

* radius: a double
* PI: a final double initialized with the value 3.14159

Write a program that demonstrates the Circle class by asking the user for the circle's radius, creating a Circle object
and then reporting the circle's area, diameter and circumference.

*/

import javax.swing.JOptionPane;

public class CircleTest {
	public static void main(String[] args) {
		
		String userInputString;
		double userRadius;
		String userOutputString;
		
		userInputString = JOptionPane.showInputDialog( "Please enter the circle's radius: " );
		userRadius = Double.parseDouble( userInputString );
		
		Circle circle1 = new Circle();
		
		circle1.setRadius( userRadius );
		
		String.format( "Area: %f\nDiameter: %f\nCircumference: %f", circle1.getArea(), 
				      circle1.getDiameter(), circle1.getCircumference() );
		
		JOptionPane.showMessageDialog( null, userOutputString );
		
		System.exit( 0 );
	}
}