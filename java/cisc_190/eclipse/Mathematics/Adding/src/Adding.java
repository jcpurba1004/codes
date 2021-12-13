import java.util.Scanner;

public class Adding {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter a number:");
		int a = scan.nextInt();
		
		System.out.println("Enter another number:");
		int b = scan.nextInt();
		
		System.out.println(a + b);
		
	}

}