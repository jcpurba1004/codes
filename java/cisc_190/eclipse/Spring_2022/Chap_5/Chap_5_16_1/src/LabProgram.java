import java.util.Scanner;
public class LabProgram {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		String[] words = new String[n];
		for (int i = 0; i < words.length; i++) {
		   words[i] = in.next();
		}
		char ch = in.next().charAt(0);
		for (int i = 0; i < words.length; i++) {
		   boolean found = false;
		   for(int j = 0; j < words[i].length(); j++) {
			  if(words[i].charAt(j) == ch) {
				 found = true;
			  }
		   }
		   if(found) {
			  System.out.print(words[i]);
			  System.out.print(",");
		   }
		}
		System.out.print("\n");
	}
}