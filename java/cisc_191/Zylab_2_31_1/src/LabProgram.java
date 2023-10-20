import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int num1;
		int num2;
		int num3;
		int num4;
		
		num1 = scnr.nextInt();
		num2 = scnr.nextInt();
		num3 = scnr.nextInt();
		num4 = scnr.nextInt();
		
		int product1 = num1 * num2 * num3 * num4;
		int average1 = (num1 + num2 + num3 + num4) / 4;

		System.out.printf("%d %d\n", product1, average1);

		double product2 = Double.valueOf(num1) * Double.valueOf(num2) * Double.valueOf(num3) * Double.valueOf(num4);
		double average2 = Double.valueOf((num1 + num2 + num3 + num4)) / Double.valueOf(4);

		System.out.printf("%.3f %.3f\n", product2, average2);
	}
}