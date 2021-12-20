import java.util.Scanner;

public class Growth {

	public static void main(String[] args) {
		// y = a(1 + r)^x
		// a = initial value
		// r = growth rate
		// x = time interval

		System.out.println("Let's calculate subs!");
		System.out.println("This program uses y = a(1 + r)^x");
		
		System.out.println("Enter initial value (a): ");
		
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		
		System.out.println("Enter initial value (r): ");
		double r = scan.nextDouble();
		
		System.out.println("Enter time interval in days (x): ");
		int x = scan.nextInt();
		
		System.out.println(calculateSubs(a, r, x));
	}

	public static int calculateSubs() {
		return (int) (a * Math.pow((1 + r), x));
	}
	
}