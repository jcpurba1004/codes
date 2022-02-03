public class MathMethods {

	public static void main(String[] args) {
		double x;
		
		x = Math.abs(-4.2);
		
		// This will output 1 decimal place
		System.out.printf("%.1f\n", x);
		
		x = Math.pow(5.0,  3.0);
		
		// This will output 1 decimal place
		System.out.printf("%.1f\n", x);
		
		x = Math.abs(-9.5 + 5.6);
		
		// This will output 1 decimal place
		System.out.printf("%.1f\n", x);
		
		x = Math.pow(2.0, Math.sqrt(9.0));
		
		// This will output 1 decimal place
		System.out.printf("%.1f\n", x);
	}
}