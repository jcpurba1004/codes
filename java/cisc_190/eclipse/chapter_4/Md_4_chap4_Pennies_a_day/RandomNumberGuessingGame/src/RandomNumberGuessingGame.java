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
 * Version: 1.2 (07/04/2020)
 */

// Needed for the Scanner class for input
import javax.swing.JOptionPane;

// Needed for random number
import java.util.Random;

/**
 * Class Name: RandomNumberGuess
 * Purpose   : (4-17):
 *             * The program should generates a random number and asks the user to guess
 *             what the number is. 
 *             * If the user's guess is higher than the random number,
 *             the program should display "Too high , try again."
 *             * The program should use a loop that repeats until the user correctly
 *             guesses the random number.
 *             
 *             (4-18):
 *             * Enhance the program on (4-17)
 *             * keeps count the number of guesses that user makes.
 *             * When the user correctly guesses the random number, the program
 *               should display the number of guesses.
 */

public class RandomNumberGuessingGame {

	public static void main(String [ ] args) {
		
		// create random object
		Random random = new Random();
		
		// limit for random number and input for random number generated
		int minimumNumber = 1;
		int maximumNumber = 99;
		int numberGenerated = ((maximumNumber - minimumNumber) + minimumNumber) + minimumNumber;
		int randomNumber = random.nextInt(numberGenerated);
		boolean userResponse = false;
		String userInputString;
		int userGuessedNumber;
		
		// To keep count number of guesses
		int numberOfGuesses = 0;
		
		// use while loop to check user input until it's correct
		while( !userResponse)
		{
			// Add number of guesses
			numberOfGuesses ++;
			// Get user input as string and then convert it to integer
			userInputString = JOptionPane.showInputDialog( "Guess the number from 1 to 99: ");
			userGuessedNumber = Integer.parseInt(userInputString);
			
			if(userGuessedNumber > randomNumber)
			{
				JOptionPane.showMessageDialog(null, "Too high, try again");
			} else if(userGuessedNumber < randomNumber)
			{
				JOptionPane.showMessageDialog(null, "Too low, try again");
			} else {
				JOptionPane.showMessageDialog(null, "Correct. You guessed the number : " + numberOfGuesses + " times");
				userResponse = true;
			} // end of if-else
		} // end of while
		
		System.exit( 0 );
		
	}

}