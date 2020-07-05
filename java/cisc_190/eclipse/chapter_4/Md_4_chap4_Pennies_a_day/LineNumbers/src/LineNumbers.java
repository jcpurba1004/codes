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
 * Version: 1.2 (07/04/2020)
 */
// Needed for the Scanner class for input
import java.util.*;

//Needed for file IO
import java.io.*;

/**
 * Class Name: LineNumbers
 * Purpose   : The program should asks user for the file name and then should display 
 *             the content of the file with each line preceded with a line number 
 *             followed by a colon. The line numbering should start at 1.
 * 
 */

public class LineNumbers
{

	public static void main(String[] args) throws IOException
	{
		// scanner object for user's input
		Scanner input = new Scanner(System.in);
		
		// variable for line number
		String fileName;
		
		// Variable for line number
		final int lineNumberStart = 1;
		int lineNumber = lineNumberStart;
	
	try {
		
		// Ask user input for file name
		System.out.println("Enter the file name: ");
		fileName = input.nextLine();
		
		// pass the path to the file as a parameter
		// The file should be in the same project folder
		File fileInput = new File(fileName);
		Scanner fileContent = new Scanner(fileInput);
		
		while (fileContent.hasNextLine())
		{
			System.out.println(lineNumber + ": " + fileContent.nextLine());
			lineNumber++;
		}
	}
	catch (IOException ex)
	{
		System.out.println("Exception ! " + ex.toString());
		System.out.println("Invalid file name entered.");
	}
	
	
	input.close();
	
	
  }
	
}