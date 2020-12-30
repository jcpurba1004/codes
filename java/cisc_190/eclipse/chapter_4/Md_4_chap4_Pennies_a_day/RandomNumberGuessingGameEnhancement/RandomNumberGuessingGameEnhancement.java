/*
  
Problem 4.18: Random number guessing game enhancement
  
Enhance the program that you wrote for Programming Challenge 17 so it keeps a count of the number of guesses that the user makes.
When the user correctly guesses the random number, the program should display the number of guesses. 
 
*/

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
 * Version: 1.1 (07/05/2020)
 */

// Needed for the JOptionPane 
import javax.swing.JOptionPane;

// Needed for random number
import java.util.Random;

/**
 * Class Name: RandomNumberGuess
 * Purpose   : (4-17): 
 *             * The program should generates a random number and asks the user to guess 
 *             what the number is. 
 *             * If the user's guess is higher than the random number, 
 *             the program should display "Too high, try again."
 *             * If the user's guess is lower than the random number, the program should  
 *             display "Too low, try again."
 *             * The program should use a loop that repeats until the user correctly  
 *             guesses the random number.
 *             
 *             (4-18):
 *             * Enhance the prorgram on (4-17)
 *             * keeps count the number of guesses that user makes.
 *             * When the user correctly guesses the random number, the program
 *               should display the number of guesses.
 */
public class RandomNumberGuess {

    public static void main(String[] args) {
        
        // create random object
        Random random = new Random();
        
        // Limit for random number and input for random number generated
        // Maximum and minimum number come from Professor
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
            numberOfGuesses += minimumNumber;
            
            // Get user input as string and then convert it to integer
            userInputString = JOptionPane.showInputDialog("Guess the number from 1 to 99: ");
            userGuessedNumber = Integer.parseInt(userInputString);
            
            // Check if user guessed number higher or lower or equal to generated random number
            // Display error message if the number is higher or lower
            // Display correct number and number of guesses when the guessed number is correct
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
        
        System.exit(0);

    }

}
