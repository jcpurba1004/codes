import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int userNum;
		int divNum;
		
		System.out.print("Enter user number: ");
		userNum = scnr.nextInt();
		System.out.print("Enter div number: ");
		divNum = scnr.nextInt();
		
		// loop to repeat 3 times
		for(int i=0; i<3; i++)
		{
			// divide the userNum by divNum again
			userNum = userNum/divNum;
			// print the number
			System.out.print(userNum + " ");
		}
			System.out.println();
	}
}