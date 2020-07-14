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
public class CelciusTemperatureTable {

    
    public static void main(String[] args) 
    {
        // constant for value range
	final double minimum =  0.0;
	final double maximum = 20.0;

        
        // variables for Fahrenheit and Celsius values
        double fahrenheitTemperature;
        double celciusTemperature;
        
        // Display the table
        System.out.println("Fahrenheit Temperature \t\t Celsius Temperature ");
        System.out.println("========================================================"); 

        // loop through all of the values from 0 to 20 Fahrenheit.
        for(fahrenheitTemperature = minimum; fahrenheitTemperature <= maximum; fahrenheitTemperature ++)
        {
            celciusTemperature = convertFahrenheitToCelsius(fahrenheitTemperature);
            System.out.printf("\t%.2f\t\t\t\t%.2f\n", fahrenheitTemperature, celciusTemperature );
        }

    }

    /*
     * Purpose: convert temperature from Fahrenheit to Celsius
     * Signature: input one double return double 
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
        
        // calculate conversion from Fahrenheit to Celsius
        celsiusTemperature = (numerator / denominator) * (fahrenheitTemperature - constantConversion ); 
        
        return celsiusTemperature;
    }
}