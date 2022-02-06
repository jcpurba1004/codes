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
		
		int bonusVal;
		int numItems;
		
		bonusVal = 15;
		numItems = 44;
		if (bonusVal == 14) {
		   numItems = numItems + 3;
		}
		else {
		   numItems = numItems + 6;
		}
		numItems = numItems + 1;
		System.out.println("numItems = " + numItems);
		
		bonusVal = 12;
		if (bonusVal == 12) {
		   bonusVal = bonusVal + 2;
		   bonusVal = 3 * bonusVal;
		}
		else {
		   bonusVal = bonusVal + 10;
		}
		
		System.out.println("bonusVal = " + bonusVal);
	}
}