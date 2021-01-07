/*
  
Problem 4.21: Dice game
  
Write a program that plays a simple dice game between the computer and the user. When the program runs, a loop should repeat
10 times. Each iteration of the loop should do the following:
 
* Generate a random integer in the range of 1 through 6. This is the value of the computer's die.
* Generate another random integer in the range of 1 through 6. This is the value of the user's die.
* The die with the highest value wins. (In case of a tie, there is no winner for that particular roll of the dice.) 

*/

import java.util.Random;

public class DiceGame{
	public static void main(String[] args) {
		
		Random random = new Random();
		int totalNumberOfTurns = 10;
		int computerDie;
		int userDie;
		int computerScore = 0;
		int userScore = 0;
		
		for( int turn = 1; turn <= totalNumberOfTurns; turn++ ) {
			computerDie = random.nextInt( 6 ) + 1;
			userDie = random.nextInt( 6 ) + 1;
			
			if( computerDie > userDie ) {
				computerScore = computerScore + 1;
				System.out.println( "Computer won turn " + turn );
			} else if( userDie > computerDie ) {
				System.out.println( "User won turn " + turn );
				userScore = userScore + 1;
			} else  {
				System.out.println( "Turn " + turn + " was a tie" );
			}
		}
		
		System.out.println();
		
		if( computerScore > userScore ) {
			System.out.println( "Computer was the grand winner, winning " + computerScore + " out of  " totalNumberOfTurns + 
								" turns" );
		} else if( userScore > computerScore ) {
			System.out.println( "User was the grand winner, winning " + userScore + " out of  " totalNumberOfTurns + 
								" turns" );
		} else if( computerScore == userScore ){
			System.out.println( "It was a tie with computer winning " + computerScore + " turns and user winning " +
							  userScore + " turns all out of " + totalNumberOfTurns );
			
		}
		
	}
}