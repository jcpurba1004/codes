/*
 
Problem 5.18: ESP Game

Write a program that tests your ESP (extrasensory perception). The program should randomly select the name of a color from
the following list of words:

Red, Green, Blue, Orange, Yellow

To select a word, the program can generate a random number. For example, if the number is 0, the selected word is Red;
if the number is 1, the selected word is Green; and so forth. Next, the program should ask the user to enter the
color that the computer has selected. After the user has entered his or her guess, the program should display the name
of the randomly selected color. The program should repeat this 10 times and then display the number of times the user
correctly guessed the selected color. Be sure to modularize the program into methods that perform each major task.

*/

import java.util.Random;
import java.util.Scanner;

public class ESPGame{

	public static String generateComputerColor( Random random ) {
		int colorIndex;
		colorIndex = random.nextInt( 5 );
		String computerChoseColor = "";
		
		if( colorIndex == 0 ) {
			computerChoseColor = "Red";
		} else if( colorIndex == 1 ) {
			computerChoseColor = "Green";
		} else if( colorIndex == 2 ) {
			computerChoseColor = "Blue";
		} else if( colorIndex == 3 ) {
			computerChoseColor = "Orange";
		} else if( colorIndex == 4 ) {
			computerChoseColor = "Yellow";
		}
		System.out.println( "Computer has chosen a color" );
		return computerChoseColor;
	}
	
	public static String getUserColor( Scanner scanner ) {
		String userColor;
		
		System.out.println( "User, guess the computers color: " );
		userColor = scanner.nextLine();
		
		return userColor;
	}
	
	public static void main(String[ ] args) {
		
		Random random = new Random();
		Scanner scanner = new Scanner( System.in );
		String computerColor;
		String userColor;
		
		computerColor = generateComputerColor( random );
		userColor = getUserColor( scanner );
		System.out.println( "The computer selected " + computerColor + "\nYou selected " + userColor );
		
	}
	
}