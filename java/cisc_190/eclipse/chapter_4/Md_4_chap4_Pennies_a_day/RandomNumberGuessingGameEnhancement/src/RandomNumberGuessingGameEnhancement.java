import javax.swing.JOptionPane;
import java.util.Random;

public class RandomNumberGuessingGameEnhancement {

	public static void main(String [ ] args) {
		Random random = new Random();
		int randomNumber = random.nextInt( 101 );
		boolean userCorrect = false;
		String userInputString;
		int userGuessedNumber;
		int numberOfGuesses = 0;
		
		while( !userCorrect ) {
			numberOfGuesses = numberOfGuesses + 1;
			userInputString = JOptionPane.showInputDialog( "Guess the number: " );
			userGuessedNumber = Integer.parseInt( userInputString );
			if( userGuessedNumber > randomNumber ) {
				JOptionPane.showMessageDialog null, "Too high, try again" );
			} else if( userGuessedNumber < randomNumber) {
				JOptionPane.showMessageDialog( null, "Too low, try again" );
			} else{
				JOptionPane.showMessageDialog( null, "Yes, you guessed the number in " + numberOfGuesses + " tries");
				userCorrect = true;
			}
		}
	    System.exit( 0 );
	}
}