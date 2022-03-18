import java.util.Scanner;
import java.util.InputMismatchException;

public class LabProgram {
	public static void main(String[] args) {
	   Scanner scnr = new Scanner(System.in);
	   
	   int userNumber;
	   int divideNumber;
	   int result;
	   
	   try {
		  userNumber = scnr.nextInt();
		  divideNumber = scnr.nextInt();
		  result = userNumber / divideNumber;
		  System.out.println(result);
	   }
	   catch(ArithmeticException e) {
		  System.out.println("Arithmetic Exception: " + e.getMessage());
	   }
	   catch(InputMismatchException e) {
		  System.out.println("Input Mismatch Exception: " + e.toString());
	   }
	}
}