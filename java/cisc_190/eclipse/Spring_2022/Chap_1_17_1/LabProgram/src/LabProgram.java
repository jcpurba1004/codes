import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int currentPrice;
		int lastMonthsPrice;
		
		currentPrice = scnr.nextInt();
		lastMonthsPrice = scnr.nextInt();
		
		System.out.println("This house is $" + currentPrice + ". The change is $" + (currentPrice - lastMonthsPrice) + " since last month.");
		System.out.println("The estimated monthly mortgage is $" + ((currentPrice * 0.051)/12) + ".");
	}
}