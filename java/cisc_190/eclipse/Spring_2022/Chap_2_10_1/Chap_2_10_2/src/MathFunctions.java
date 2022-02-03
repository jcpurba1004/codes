import java.util.Scanner;

public class MathFunctions {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		double x;
		double y;
		double z;
		
		x = scnr.nextDouble();
		y = scnr.nextDouble();
		
		z = y * (Math.sqrt(x));
		
		System.out.printf("%.2f\n", z);
		
		x = scnr.nextDouble();
		y = scnr.nextDouble();
		
		z = Math.abs(x) + Math.sqrt(y);
		System.out.printf("%.2f\n", z);
		
		x = scnr.nextDouble();
		y = scnr.nextDouble();
		
		z = Math.pow(Math.sqrt(x), Math.sqrt(y));
		System.out.printf("%.2f\n", z);
	}
}