import java.util.Scanner;

public class EvenOdd {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int userNum;
		int divRemainder;
		
		System.out.print("Enter a number: ");
		userNum = scnr.nextInt();
		
		divRemainder = userNum % 2;
		
		if (divRemainder == 0) {
		   System.out.println(userNum + " is even:");
		}
		else {
		   System.out.println(userNum + " is odd.");
		}
	}
}