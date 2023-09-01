import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int[] userList = new int[20];   // List of numElement integers specified by the user
		int numElements;                // Number of integers in user's list
		int i;
		
		numElements = scnr.nextInt();   // Input begins with number of integers that follow
		
		for (i = 0; i < numElements; ++i) {
			userList[i] = scnr.nextInt();
		}
		
		for (i = userList.length - 1; i >= 0; --i) {
			System.out.print(userList[i] + " ");
		}
		
		System.out.println();
	}
}