import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int a;
		int b;
		int c;
		
		a = scnr.nextInt();
		b = scnr.nextInt();
		c = scnr.nextInt();
		
		if (a<b && a<c) {
			System.out.println(a);
		}
		else if (b<a && b<c) {
			System.out.println(b);
		}
		else {
			System.out.println(c);
		}
	}
}