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
 * Version: 1.2 (07/12/2020)
 */

/*
 * This class would convert the temperature from Fahrenheit to Celsius using
 * formula:
 * 
 * C = 5/9(F-32)
 * 
 * where F is the Fahrenheit temperature and C is the Celsius temperature.
 * Write a method that use verb that accepts a Fahrenheit temperature as an
 * argument. The method should return the temperature, converted to Celsius.
 * Demonstrate the method by calling it in a loop that displays a table of
 * the Fahrenheit temperatures 0 through 20 and their Celsius equivalents.
 */
public class CelsiusTemperatureTable {

	public static void main(String[] args) 
	{
		double fahrenheitTemperature;
		double celsiusTemperature;
		System.out.println("Fahrenheit Temperature \t\t Celsius Temperature ");
		System.out.println("========================================================");
		
		for(fahrenheitTemperature = 0.0; fahrenheitTemperature <= 20.0; fahrenheitTemperature ++)
		{
			celsiusTemperature = convertFahrenheitToCelsius(fahrenheitTemperature);
			System.out.printf("\t%.2f\t\t\t\t%.2f\n", fahrenheitTemperature, celsiusTemperature);
		}
		
	}

	/*
	 * Purpose: convert temperature from Fahrenheit to Celcius
	 * Signature: input one double and return double 
	 * Examples: 
	 * convertFahrenheitToCelcius(0.00) return -17.78
	 * convertFahrenheitToCelcius(5.00) return -15.00
	 * convertFahrenheitToCelcius(20.00) return -6.67
	 */
	public static double convertFahrenheitToCelsius(double fahrenheitTemperature)
	{
		double celsiusTemperature;
		final double numerator = 5.00;
		final double denominator = 9.00;
		final double constantConversion = 32.00;
		
		celsiusTemperature = (numerator / denominator) * (fahrenheitTemperature - constantConversion);
		
		return celsiusTemperature;
	}
}