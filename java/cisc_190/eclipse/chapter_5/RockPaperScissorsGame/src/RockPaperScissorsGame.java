/*
Problem 5.17: Rock, Paper, Scissors Game

Write a program that lets the user play the game of Rock, Paper Scissors against the computer. The program should work as follows.

1. When the program begins, a random number in the range of 1 through 3 is generated. If the number is 1, then the computer
has chosen rock. If the number is 2, then the computer has chosen paper. If the number is 3, then the computer has chosen scissors.
(Don't display the computer's choice yet.)

2. The user enters his or her choice of "rock", "paper" or "scissors" at the keyboard. (You can use a menu if you prefer.)

3. The computer's choice is displayed.

4. A winner is selected according to the following rules:

* If one player chooses rock and the other player chooses scissors, then rock wins. (The rock smashes the scissors.)
* If one player chooses scissors and the other player chooses paper, then scissors wins. (Scissors cuts paper.)
* If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)
* If both players make the same choice, the game must be played again to determine the winner.

Be sure to divide the program into methods that perform each major task.

*/

import java.util.Random;
import java.util.Scanner;

public class RockPaperScissorsGame{
	
	public static String generateComputerChoice( Random random ) {
		int wordNumber;
		wordNumber = random.nextInt( 3 ) + 1;
		String computerWordChoice = "";
		
		if( wordNumber == 1 ) {
			computerWordChoice = "rock";
		} else if( wordNumber == 2 ) {
			computerWordChoice = "paper";
		} else if( wordNumber == 3 ) {
			computerWordChoice = "scissors";
		}
		System.out.println( "The computer has made its choice: " );
		return computerWordChoice;
	}

	public static void showMenu(  ) {
		System.out.println( "Options to choose from:\n1. rock\n2. paper\n3. scissor" );
	}
	
	public static String getUserChoice( Scanner scanner ) {
		String userWordChoice;
		
		System.out.println( "User, please make your choice: " );
		userWordChoice = scanner.nextLine();
		
		return userWordChoice;
	}
	
	public static String chooseWinner( String computerChoice, String userChoice ) {
		String winner = "No winner";
		String customMessage = "";
		String finalMessage;
		
		String rockCustomMessage = "The rock smashes the scissors";
		String scissorsCustomMessage = "Scissors cuts paper";
		String paperCustomMessage = "Paper wraps rock";
		
		if( computerChoice.equals( "rock" ) &&  userChoice.equalsIgnoreCase( "scissors" ) ) { 
			winner = "Computer";
			customMessage = rockCustomMessage;
		} else if( userChoice.equalsIgnoreCase( "rock" ) &&  computerChoice.equals( "scissors" ) ) {
			winner = "You";
			customMessage = rockCustomMessage;
		}
		
		if( computerChoice.equals( "scissors" ) &&  userChoice.equalsIgnoreCase( "paper" ) ) { 
			winner = "Computer";
			customMessage = rockCustomMessage;
		} else if( userChoice.equalsIgnoreCase( "scissors" ) &&  computerChoice.equals( "paper" ) ) {
			winner = "You";
			customMessage = scissorsCustomMessage;
		}
		
		if( computerChoice.equals( "paper" ) &&  userChoice.equalsIgnoreCase( "rock" ) ) { 
			winner = "Computer";
			customMessage = rockCustomMessage;
		} else if( userChoice.equalsIgnoreCase( "paper" ) &&  computerChoice.equals( "rock" ) ) {
			winner = "You";
			customMessage = paperCustomMessage;
		}
		
	    finalMessage = winner + " won(" + customMessage + ")";
		return finalMessage;
		
	}
	
	public static void main(String[ ] args) {
		
		Random random = new Random();
		Scanner scanner = new Scanner( System.in );
		String computerChoice;
		String userChoice;
		String winner;
		
		showMenu();
		computerChoice = generateComputerChoice( random );
		userChoice = getUserChoice( scanner );
		winner = chooseWinner( computerChoice, userChoice );
		
		System.out.println( "You chose " + userChoice + "\nComputer chose " + computerChoice );
		System.out.println( winner );
		
		while( winner.contentEquals( "No winner won()" ) ) {
			System.out.println( "You both chose the same thing, Please play aain." );
			showMenu();
			computerChoice = generateComputerChoice( random );
			userChoice = getUserChoice( scanner );
			winner = chooseWinner( computerChoice, userChoice );
			System.out.println( "You chose " + userChoice + "\nComputer chose " + computerChoice );
			System.out.println( winner );
		}
		
	}

}
