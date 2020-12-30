
import javax.swing.JOptionPane;
import java.util.Random;

public class ESP{
	public static void main( String[ ] args ) {
		Random random = new Random();
		int colorIndex;
		String computerGeneratedColor = "";
		String userGuessedColor;
		int userCorrectGuesses = 0;
		int numberOfQuestions = 10;
		
		for( int questionNumber = 1; questionNumber <= numberOfQuestions; questionNumber++ ) {
			colorIndex = random.nextInt( 5 );
				
		switch( colorIndex ) 
		{
			case 0:
				computerGeneratedColor = "Red"; 
				break;
			case 1:
				computerGeneratedColor = "Green";
				break;
			case 2:
				computerGeneratedColor = "Blue";
				break;
			case 3:
				computerGeneratedColor = "Orange";
				break;
			case 4:
				computerGeneratedColor = "Yellow";
				break;
			default:
				JOptionPane.showMessageDialog( null, "The number " + colorIndex + " is not matched with a color" );
				break;
			}
		
			userGuessedColor = JOptionPane.showInputDialog( "I have generated a color number" + questionNumber + 
													       "( Red, Green, Blue, Orange, Yellow ). What's your guess?" ); 
			if( userGuessedColor.equalsIgnoreCase( computerGeneratedColor ) ) {
				userCorrectGuesses = userCorrectGuesses + 1;
				JOptionPane.showMessageDialog( null, "I selected " + computerGeneratedColor + " and you selected " + 
										  userGuessedColor + ". Nice job!" );
			} else {
				JOptionPane.showMessageDialog( null, "I selected " + computerGeneratedColor + " and you selected " + 
						  				  userGuessedColor + ".Try again :)" );
			}
		}
		JOptionPane.showMessageDialog( null, "You were able guess " + userCorrectGuesses + 
				 					  " of the colors I chose correctly. Good job! " );
									  
		System.exit( 0 );
		
	}
}