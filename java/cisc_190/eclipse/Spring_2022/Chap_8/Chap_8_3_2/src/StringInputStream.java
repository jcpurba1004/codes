import java.util.Scanner;

public class StringInputStream {
   public static void main (String [] args) {
	  Scanner scnr = new Scanner(System.in);
	  Scanner inSS = null;
	  String userInput;
	  String userMonth;
	  int userDate;
	  int userYear;
	  
	  userInput = scnr.nextLine();
	  inSS = new Scanner(userInput);
	  
	  userMonth = userInput.split(" ")[0];
	  userDate = Integer.parseInt(userInput.split(" ")[1]);
	  userYear = Integer.parseInt(userInput.split(" ")[2]);
	  
	  System.out.println("Month: " + userMonth);
	  System.out.println("Date: " + userDate);
	  System.out.println("Year: " + userYear);
   }
}