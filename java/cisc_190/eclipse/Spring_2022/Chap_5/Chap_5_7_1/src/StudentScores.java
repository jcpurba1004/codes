import java.util.Scanner;
public class StudentScores {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		final int SCORES_SIZE = 4;
		int[] lowerScores = new int[SCORES_SIZE];
		int i;
		
		for (i = 0; i < lowerScores.length; ++i) {
		   lowerScores[i] = scnr.nextInt();
		}
		
		for (i = 0; i < lowerScores.length; ++i) {
		   lowerScores[i]--;
		   if (lowerScores[i] < 0)
			   lowerScores[i] = 0;
		}
		
		for (i = 0; i < lowerScores.length; ++ i) {
		   System.out.print(lowerScores[i] + " ");
		}
		System.out.println();
	}
}