import java.util.Scanner;
import java.util.InputMismatchException;

public class NameAgeChecker {
   public static void main(String[] args) {
	  Scanner scnr = new Scanner(System.in);
	  
	  String inputName;
	  int age;
	  
	  inputName = scnr.next();
	  while (!inputName.contentEquals("-1")) {
		          try {
		    age = scnr.nextInt();
		    System.out.println(inputName + " " + (age + 1));
		 }
		 catch(InputMismatchException e) {
			System.out.println(inputName + " " + 0);
			scnr.nextLine();
		 }
		          
		 inputName = scnr.next();
	  }
   }
}