import java.util.Scanner;

public class Marriage {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int hotelRate;
		int numYears;
		
		hotelRate = 150;
		
		System.out.print("Enter years married: ");
		numYears = scnr.nextInt();
		
		if (numYears == 50) {
		   System.out.print("Congrats on 50 years ");
		   System.out.println("of marriage!");
		   
		   hotelRate = hotelRate / 2;
		}
		
		System.out.print("Your hotel rate: ");
		System.out.println(hotelRate);
		
		int bonusVal;
		int numItems;
		bonusVal = 0;
		numItems = 1;
		if (bonusVal == 10) {
		   numItems = numItems + 3;
		   System.out.println(numItems);
		}
		System.out.println(numItems);
	}
}