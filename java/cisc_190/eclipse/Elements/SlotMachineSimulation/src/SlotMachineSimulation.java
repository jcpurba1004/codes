import javax.swing.JOptionPane;

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

public class SlotMachineSimulation{
	public static void main(String[ ] args) {
		
		JOptionPane.showInputDialog( "Insert money: " );
		
	}
}