/* 

Problem 6.11: Freezing and Boiling points

The following table lists the freezing and boiling points of several substances.

Substance         Freezing Point     Boiling Point
Ethyl Alcohol         -173              172
Oxygen                -362             -306
Water                  32               212

Design a class that stores a temperature in a temperature field and has the appropriate accessor and mutator methods for the field.
  
*/

import java.util.Scanner;

public class FreezeorBoilTest{
	public static void main(String[ ] args) {
		Scanner scanner = new Scanner( System.in );
		double userTemperature;
		
		System.out.println( "Please enter a temperature" );
		userTemperature = scanner.nextDouble();
		
		FreezeorBoil temperature1 = new FreezeorBoil( userTemperature );
		
		if( temperature1.isEthylFreezing() ) {
			System.out.println( "Ethyl will freeze at this temperature." );
		}
		
		if( temperature1.isEthylBoiling() ) {
			System.out.println( "Ethyl will boil at this temperature." );
		}
		
		if( temperature1.isOxygenFreezing() ) {
			System.out.println( "Oxygen will freeze at this temperature." );
		}
		
		if( temperature1.isOxygenBoiling() ) {
			System.out.println( "Oxygen will boil at this temperature." );
		}
		
		if( temperature1.isWaterFreezing() ) {
			System.out.println( "Water will freeze at this temperature." );
		}
		
		if( temperature1.isWaterBoiling() ) {
			System.out.println( "Water will boil at this temperature." );
		}
	}
}