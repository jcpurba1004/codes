/**
 * Lead Author(s):
 * Jeremiah Purba; 5550010017
 * 
 * Other Contributors:
 * None
 *
 * References:
 * Gaddis, T. (2015). Starting Out With Java Myprogramming Lab 
 * From Control Structures Through Objects. (6th ed.). Addison-Wesley. 
 *
 * Version: 1.3 (06/26/2020)
 */

// Needed for the Scanner class for input
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

/**
 * Class Name: TestScoresAndGrade
 * Purpose   : Ask user input 3 numbers than calculate the average of these
 *             numbers. The program should display the average and the letter
 *             grade that is assigned for the test score average.
 *             Use the following table for the grading system
 *             
 *             Test Score Average          Letter Grade
 *             ========================================
 *             90 - 100                        A
 *             80 - 89                         B
 *             70 - 79                         C
 *             60 - 69                         D
 *             Below 60                        F
 */

public class TestScoresAndGrade {

	public static void main(String[] args) {
		
		// constant variable for number of score
		final double numberOfScores = 3.00;
		
		// variable for string input
		String inputString;
		
		// Variables to hold 3 test scores and average
		double score1;
		double score2;
		double score3;
		double averageScore;
		DecimalFormat decimalFormat = new DecimalFormat("#.##");
		
		// Ask user to enter the first score
		inputString = JOptionPane.showInputDialog("Enter the first " + " score");
		
		// Convert the first score string to double
		score1 = Double.parseDouble(inputString);
		
		// Ask user to enter the second score
		inputString = JOptionPane.showInputDialog("Enter the second " + " score");
		
		// Convert the second score string to double
		score2 = Double.parseDouble(inputString);
		
		// Ask user to enter the third score
		inputString = JOptionPane.showInputDialog("Enter the second " + " score");
		
		// Convert the third score string to double
		score3 = Double.parseDouble(inputString);
		
		// Computes the average score
		averageScore = (score1 + score2 + score3)/numberOfScores;
		
		// assigns the grade based on the average
		if (averageScore < 60) 
		{
			JOptionPane.showMessageDialog(null,"The average score is " + decimalFormat.format(averageScore) +
					" with grade F", "Average Score",JOptionPane.INFORMATION_MESSAGE);
		} 
		else if (averageScore < 70) 
		{
			JOptionPane.showMessageDialog(null,"The average score is " + decimalFormat.format(averageScore) +
					" with grade D", "Average Score",JOptionPane.INFORMATION_MESSAGE);
		}
		else if (averageScore < 80) 
		{
			JOptionPane.showMessageDialog(null,"The average score is " + decimalFormat.format(averageScore) +
					" with grade C", "Average Score",JOptionPane.INFORMATION_MESSAGE);
		}
		else if (averageScore < 90) 
		{
			JOptionPane.showMessageDialog(null,"The average score is " + decimalFormat.format(averageScore) +
					" with grade B", "Average Score",JOptionPane.INFORMATION_MESSAGE);
		}
		else if (averageScore < 100) 
		{
			JOptionPane.showMessageDialog(null,"The average score is " + decimalFormat.format(averageScore) +
					" with grade A", "Average Score",JOptionPane.INFORMATION_MESSAGE);
		}
		
		System.exit(0);
	}
}