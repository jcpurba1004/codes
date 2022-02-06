import java.util.Scanner;

public class Discount {

	public static void main(String[] args) {
		
		Scanner scnr = new Scanner(System.in);
		
		int userAge;
		int itemDiscount;
		
		System.out.print("Enter user age: ");
		userAge = scnr.nextInt();
		
		if(userAge == 62) {
		   itemDiscount = 15;
		}
		else {
			itemDiscount = 0;
		}
		
		System.out.println("itemDiscount = " + itemDiscount);
		
		
		
		int numPeople;
		int groupSize;
		
		System.out.print("Enter numPeople and groupSize: ");
		numPeople = scnr.nextInt();
		groupSize = scnr.nextInt();
		
		if(numPeople == 10) {
			groupSize = 2 * groupSize;
		}
		else {
			groupSize = 3 * groupSize;
			numPeople = numPeople - 1;
		}
		
		System.out.println("numPeople = " + numPeople);
		System.out.println("groupSize = " + groupSize);
		
		
		int numPlayers;
		int teamSize;
		
		System.out.print("Enter numPlayers and teamSize: ");
		numPlayers = scnr.nextInt();
		teamSize = scnr.nextInt();
		
		if(numPlayers != 11) {
		    teamSize = 11;
		}
		else {
			teamSize = numPlayers;
		}
		
		teamSize = 2 * teamSize;
		
		System.out.println("numPlayers = " + numPlayers);
		System.out.println("teamSize = " + teamSize);
	}	
}