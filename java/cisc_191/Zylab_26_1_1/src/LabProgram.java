import java.util.Scanner;

// Create a LabProgram class
public class LabProgram{

	// main method
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		String name;
		name = scnr.nextLine();
		// 1st line to draw upper part of CAT
		System.out.println("       /\\_/\\");
		// 2nd line to draw half face of CAT
		System.out.println("  /\\  / o o \\");
		// 3rd line to draw second half face of CAT
		System.out.println(" //\\\\ \\-(+)-/");
		// 4th line to draw neck of CAT
		System.out.println("    \\/   * /");
		/*To draw lower half of the CAT*/
		System.out.println("    | \\|| ||");
		System.out.println("    \\ +|| ||");
		System.out.println("     \\)()-())");
		System.out.println("My cat " + name);
		
	}	// End of main method
	
}	// End of LabProgram class