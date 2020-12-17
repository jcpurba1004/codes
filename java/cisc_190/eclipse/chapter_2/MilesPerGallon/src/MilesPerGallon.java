import java.util.Scanner;

public class MilesPerGallon
{
	public static void main(String[] args)
    {
		double miles;       // Miles driven
		double gallons;     // Gallons used
		double mpg;         // Miles-per-gallon
		
		// Create a Scanner object for keyboard input.
		Scanner keyboard = new Scanner(System.in);
		
		// Prompt the user to enter miles driven.
		System.out.print("Enter the miles driven: ");
		miles = keyboard.nextDouble();
		
		// Prompt the user to enter the gallons used.
		System.out.print("Enter the gallons used: ");
		gallons = keyboard.nextDouble();
		
		// Calculate miles-per-gallon.
		mpg = miles / gallons;
		
		// Display the miles-per-gallon.
		System.out.println("The MPG is " + mpg);
	}
}