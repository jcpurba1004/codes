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
 * Version: 1.2 (06/26/2020)
 */
// Needed for the Scanner class for input
// Needed for the JOptionPane and decimal format
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

// Needed for image icon
import javax.swing.ImageIcon;

/**
 * Class Name: RomanNumerals
 * Purpose   : Convert user input number into corresponding Roman Numerals
 *             number. The input range is from 1 to 10 and if the input 
 *             outside the range, the code should display error message.
 */
public class RomanNumerals 
{

	public static void main(String[] args) 
	{
		// for icon file
		final ImageIcon icon = new ImageIcon("./thumbsup_small.png");
		// variable for user input integer
		int userNumber;
		// variable for string input and display message
		String inputString;
		String message ="";
		
		// Ask user to enter the number
		inputString = JOptionPane.showInputDialog("Enter the " + " number");
		
		// Convert the number from string to integer
		userNumber = Integer.parseInt(inputString);
		
		// case switch for input from 1 to 10 and validation
		switch(userNumber)
		{
			case 1:
				message = "1 Roman Numerals is I";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 2:
				message = "2 Roman Numerals is II";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 3:
				message = "3 Roman Numerals is III";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 4:
				message = "4 Roman Numerals is IV";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 5:
				message = "1 Roman Numerals is V";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 6:
				message = "6 Roman Numerals is VI";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 7:
				message = "7 Roman Numerals is VII";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 8:
				message = "8 Roman Numerals is VIII";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 9:
				message = "9 Roman Numerals is IX";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			case 10:
				message = "10 Roman Numerals is X";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.INFORMATION_MESSAGE,icon);
				break;
			default:
				message = "Error! input number is out of range" + "\n" +
			    "Please run again and enter number between 1 to 10";
				JOptionPane.showMessageDialog(null,message, "Roman Numerals",JOptionPane.ERROR_MESSAGE);
				break;
		}
			
		System.exit(0);		
	}

}