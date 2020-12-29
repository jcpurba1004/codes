import javax.swing.JOptionPane;
import java.util.Random;

public class ESP{
	public static void main( String[ ] args ) {
		Random random = new Random();
		int colorIndex;
		colorIndex = random.nextInt( 5 );
		String computerGeneratedColor;
		String userGuessedColor;
		
		switch( colorIndex ) {
			case 0:
				computerGeneratedColor = "Red"; // red
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
		
		userGuessedColor = JOptionPane.showInputDialog( "I have gerated a color( Red, Green, Blue, Orange, Yellow )" + 
													  ". Guess what it is: " );
		if( userGuessedColor.equalsIgnoreCase( computerGenerated ) ) {
			
		}
	}
}