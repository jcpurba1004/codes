import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
	   Scanner scnr = new Scanner(System.in);
	   String[] names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny"};
	   int index;
	   
	   index = scnr.nextInt();
	   try {
		  System.out.println("Name: " + names[index]);
	   }
	   catch(ArrayIndexOutOfBoundsException e) {
		  System.out.println("Exception! Index " + index +
				" out of bounds for length " + names.length);
		  
		  if (index < 0) {
			  System.out.println("The closest name is: " + names[0]);
		  }
		  else if (index > 0) {
			  System.out.println("The closest name is: " + names[9]);
		  }
	   }
	}
}