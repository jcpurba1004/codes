public class Demo {

	public static void main(String[] args) {
		
		int x = 0;
		
		try {
			x = divide(6, 0);
		}
		catch (ArithmeticException e) {
			System.out.println("you cannot divide by zero");
		}
		
		System.out.println(x);
	}
		
	public static int divide(int a, int b) throws ArithmeticException {
		return a/b;
	}
}