import java.util.Scanner;

public class ScannerDemo {

	public static void main(String[] args) {
		
		Scanner keyboard = new Scanner(System.in);
		
		System.out.println("What is your name?");
		String name = keyboard.next();

		System.out.println("How old are you?");
		int age = keyboard.nextInt();
		
		System.out.println("Hi " + name + ", you are " + age + " years old");
	}

}