import java.util.Scanner;

public class WarningDemo {

	public static void main(String[] args) {
		
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("How old are you?");
		int age = keyboard.nextInt();
		
		System.out.println(age);
		
		keyboard.close();
	}
}