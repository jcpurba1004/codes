import java.util.Scanner;

public class Score 
{
	public static void main(String[] args) 
	{
		int testScore;
		
		// Create a Scanner object for keyboard input
		Scanner keyboard = new Scanner(System.in);
		
		// Get a test score
		System.out.print("Enter your test score: ");
		testScore = keyboard.nextInt();
		
		// Was the score a good one?
		if (testScore > 90)
		{
			System.out.println("That's a great score!");
			System.out.println("Keep up the good work ");
		}
	}
}