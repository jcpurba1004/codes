/*
  
Problem 4.22: Slot Machine Simulation
  
A slot machine is a gambling device that the user inserts money into and then pulls a lever (or presses a button).
The slot machine then displays a set of random images. If two or more of the images match, the user wins an amount 
of money that the slot machine dispenses back to the user. Create a program that simulates a slot machine.
When the program runs, it should do the following:

* Asks the user to enter the amount of money he or she wants to enter into the slot machine.
* Instead of displaying images, the program will randomly select a word from the following list:

Cherries, Oranges, Plums, Bells, Melons, Bars

To select a word, the program can generate a random number in the range of 0 through 5. If the number is 0,
the selected word is Cherries; if the number is 1, the selected word is Oranges; and so forth. The program should
randomly select a word from this list three times and display all three of the words.

*/

import javax.swing.JOptionPane;
import java.util.Random;

public class SlotMachineSimulation{
	public static void main(String[ ] args) {
		
		String userStringInput;
		double userAmountEntered;
		Random random = new Random();
		int wordIndex;
		String word = "";
		
		userStringInput = JOptionPane.showInputDialog( "Insert money: " );
		userAmountEntered = Double.parseDouble( userStringInput );
		
		for( int wordCount = 1; wordCount <= 3; wordCount++ ) {
			
		}
		
		wordIndex = random.nextInt( 6 );
		
		if( wordIndex == 0 ){
			word = "Cherries";
		} else if( wordIndex == 1 ) {
			word = "Oranges";
		} else if( wordIndex == 2 ) {
			word = "Plums";
		} else if( wordIndex == 3 ) {
			word = "Bells";
		} else if( wordIndex == 4 ) {
			word = "Melons";
		} else if( wordIndex == 5 ) {
			word = "Bars";
		}
		
		JOptionPane.showMessageDialog( null, word + "\n" );
			
		System.exit( 0 );
		
	}
}