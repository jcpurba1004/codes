import java.util.Scanner;

public class FindMatchValue {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		
		final int NUM_VALS = 4;
		int[] userValues = new int[NUM_VALS];
		int i;
		int matchValue;
		int numMatches = -99;
		
		matchValue = scnr.nextInt();
		for (i = 0; i < userValues.length; ++ i) {
		   userValues[i] = scnr.nextInt();
		}
		
		numMatches = 0;
		for (i = 0; i < NUM_VALS; ++i) {
		   if(userValues[i] == matchValue) {
			   			  numMatches++;
		   }
		}
		
		System.out.println("matchValue: " + matchValue + ", numMatches: " + numMatches);
	}
}