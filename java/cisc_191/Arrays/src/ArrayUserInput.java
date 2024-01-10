import java.util.Scanner;

public class ArrayUserInput {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		System.out.println("How many numbers will you enter");
		int n = scan.nextInt();
		
		System.out.println("Great! Enter " + n + " integers:");
		
		int[] a = new int[n];
		
		for(int i = 0; i < n; i++) {
			a[i] = scan.nextInt();
		}
		
		for(int i = 0; i < n; i++) {
			System.out.println(a[i]);
		}
	}
}