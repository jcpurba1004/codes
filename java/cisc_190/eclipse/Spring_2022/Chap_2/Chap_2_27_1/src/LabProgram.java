import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		
		int q; // for Quarter
		int d; // for dime
		int n; // for nickel
		int p; // for pennies
		double dollars;
		
		q = scnr.nextInt();
		d = scnr.nextInt();
		n = scnr.nextInt();
		p = scnr.nextInt();
		
		dollars = ( (q*25) + (d*10) + (n*5) + p)/100.0;
		System.out.printf("Amount: $%.2f\n", dollars);
	}
}