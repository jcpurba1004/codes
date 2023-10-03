import java.util.Scanner;
import java.util.InputMismatchException;

public class NameAgeChecker {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		String inputName;
		int age;
		
		inputName = scnr.next();
		while (!inputName.equals("-1")) {
			 try {
				 	// Attempt to read age as an integer
				 	age = scnr.nextInt();
				 	System.out.println(inputName + " " + (age + 1));
			 } catch (InputMismatchException e) {
				 	// Handle the exception by setting age to 0
				 	age = 0;
				 	System.out.println(inputName + " " + age);
			 }
			 
			 inputName = scnr.next();
		}
	}
}