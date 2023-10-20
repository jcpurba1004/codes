import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		double caffeineMg; // "double" supports floating-point like 75.5, versus int for integers like 75.
		
		caffeineMg = scnr.nextDouble();
		
		System.out.printf("After 6 hours: %.2f mg\n", caffeineMg / 2);
		System.out.printf("After 12 hours: %.2f mg\n", caffeineMg / 4);
		System.out.printf("After 24 hours: %.2f mg\n", caffeineMg / 16);
		
		scnr.close();
	}
}