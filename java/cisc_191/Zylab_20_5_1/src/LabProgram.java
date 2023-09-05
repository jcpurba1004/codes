import java.util.Scanner;

public class LabProgram {
   
	public static void main(String[] args) {

		String phrase = new String ("This is a String test.");
        String middle3 = new String ("tri"); 
      
        middle3 = phrase.substring (9, 11); 
      
        System.out.println ("middle3: " + middle3);
	}
}