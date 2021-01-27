/*
 * 
Problem 6.8: Temperature class

Write a Temperature class that will hold a temperature in Fahrenheit and provide methods to get the temperature in Fahrenheit,
Celsius and Kelvin. The class should have the following field:

* ftemp-A double that holds a Fahrenheit temperature.

The class should have the following methods:

* Constructor - The constructor accepts a Fahrenheit temperature (as a double) and stores it in the ftemp field.
* setFahrenheit - The setFahrenheit method accepts a Fahrenheit temperature (as a double) and stores it in the ftemp field.
* getFahrenheit - Returns the value of the ftemp field, as a Fahrenheit temperature (no conversion required).
* getCelsius - Returns the value of the ftemp field converted to Celsius.
* getKelvin - Returns the value of the ftemp field converted to Kelvin.

*/

import java.util.Scanner;

public class TemperatureTest{
	public static void main(String[ ] args) {
		Scanner scanner = new Scanner( System.in );
		double userFahrenheitTemperature;
		
		System.out.println( "Please enter a fahrenheit Temperature" );
		userFahrenheitTemperature = scanner.nextDouble();
		
		Temperature temp1 = new Temperature( userFahrenheitTemperature );
		
		System.out.printf( "Fahrenheit temperature: %.2f\nCelsius temperature: %.2f\nKelvin temperature: $.2f", 
		temp1.getFahrenheit(), temp1.getCelsius(), temp1.getKelvin() );
		
		System.out.printf( "Please enter another fahrenheit Temperature" ); 
		userFahrenheitTemperature = scanner.nextDouble();
		
		temp1.setFahrenheit( userFahrenheitTemperature );
		
		System.out.printf( "\nFahrenheit temperature: %.2f\nCelsius temperature: %.2f\nKelvin temperature: $.2f", 
		temp1.getFahrenheit(), temp1.getCelsius(), temp1.getKelvin() );
	}
}