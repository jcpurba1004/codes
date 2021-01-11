/*

Problem 5.3: Rectangle Area-Complete the program

If you have downloaded the book's source code from www.pearsonhighered.com/gaddis, you will find a partially written program
named AreaRectangle.java in this chapter's source code folder. Your job is to complete the program. When it is complete,
the program will ask the user to enter the width and length of a rectangle and then display the rectangle's area.
 
*/

import javax.swing.JOptionPane;

public class RectangleArea{
	
	public static double getLength() {
	    return Double.parseDouble( JOptionPane.showInputDialog( "Please enter the length of the rectangle" ) );
	}
	
	public static double getWidth() {
	    return Double.parseDouble( JOptionPane.showInputDialog( "Please enter the width of the rectangle" ) );
	}
	
	public static double getArea( double lengthGiven, double widthGiven) {
	    return ( lengthGiven * widthGiven );
	}
	
	public static void displayArea( double lengthGiven, double widthGiven, double areaGiven ) {
		JOptionPane.showMessageDialog( null,  "A rectangle with length " + lengthGiven + " and width " + widthGiven +
				                       " has an area of " + areaGiven);
	}
	
	public static void main(String[ ] args) {
		double userLength = getLength();
		double userWidth = getWidth();
		displayArea( userLength, userWidth, getArea( userLength, userWidth ) );

	}
}