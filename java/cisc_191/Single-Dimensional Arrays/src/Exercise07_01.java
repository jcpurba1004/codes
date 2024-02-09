import java.util.Scanner;

public class Exercise07_01 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int totalStudents;
		int bestNumber = 0;
		
		System.out.print("Enter the number of students: ");
		totalStudents = sc.nextInt();
		
		System.out.print("Enter " + totalStudents + " scores: ");
		
		// Create an array to store the integers
		char[] letter = new char[totalStudents];
		int[] grades = new int[totalStudents];
		
		// Read the input grades from the user
		for(int i = 0; i < grades.length; i++) {
			grades[i] = sc.nextInt();
		}
		
		// Find best number
		for (int i = 0; i < grades.length; i++)
		{
			if(grades[i] > bestNumber) {
				bestNumber = grades[i];
			}
		}
		
		// Print the grades from the array
		
		for(int i = 0; i < grades.length; i++) {
			if(grades[i] >= (bestNumber - 10))
			{
				System.out.println("Student " + i + " score is " + grades[i] + " and grade is A");
			}
			else if(grades[i] >= (bestNumber - 20))
			{
				System.out.println("Student " + i + " score is " + grades[i] + " and grade is B");
			}
			else if(grades[i] >= (bestNumber - 30))
			{
				System.out.println("Student " + i + " score is " + grades[i] + " and grade is C");
			}
			else if(grades[i] >= (bestNumber - 40))
			{
				System.out.println("Student " + i + " score is " + grades[i] + " and grade is D");
			}
			else
			{
				System.out.println("Student " + i + " score is " + grades[i] + " and grade is F");
			}
		}
		
		sc.close();
		
	}
}