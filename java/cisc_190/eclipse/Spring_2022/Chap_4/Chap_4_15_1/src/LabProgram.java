import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		
		Scanner scnr = new Scanner(System.in);
		char userLetter;
		String userWord;
		int wordCount = 0;
		userLetter = scnr.next().charAt(0);
	    userWord = scnr.nextLine(); 
	    for (int i = 0; i < userWord.length(); i=i+1) {
	         if (userWord.charAt(i) == userLetter){
	            wordCount = wordCount + 1;
	         }
	    }    
	    if (wordCount == 1) {
	       System.out.println(wordCount + " " + userLetter);
	    }
	    else if (wordCount == 0) {
	       System.out.println(wordCount + " " + userLetter + "'s");
	    }
	    else {
	       System.out.println(wordCount + " " + userLetter + "'s");
	    }
	}
}