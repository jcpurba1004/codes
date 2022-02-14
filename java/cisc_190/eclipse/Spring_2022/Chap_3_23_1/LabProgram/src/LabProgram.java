import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		 
		Scanner scnr = new Scanner(System.in);
		
		int totalChange;
		int dollar;
		int quarter;
		int dime;
		int nickel;
		int penny;
		
		totalChange = scnr.nextInt();
		
		if(totalChange > 100) {
			dollar = totalChange / 100;
			totalChange = totalChange - 100;
		}
		else if(totalChange > 25) {
			quarter = totalChange / 25;
			totalChange = totalChange - 25;
		}
		else if(totalChange > 30) {
			dime = totalChange / 30;
		}
	}
}