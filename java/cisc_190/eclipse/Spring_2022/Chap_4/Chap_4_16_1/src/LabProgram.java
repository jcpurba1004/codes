import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		String string;
		string = scanner.nextLine();
		String finalString = "";
		for (int i=0; i< string.length(); i++) {
			if(string.charAt(i) == 'i' ) {
				finalString += '1';
			} 
			else if (string.charAt(i) == 'a') {
				finalString += '@';
			} 
			else if (string.charAt(i) == 'm') {
				finalString += 'M';
			}
			else if (string.charAt(i) == 'B') {
				finalString += '8';
			}
			else if (string.charAt(i) == 's') {
				finalString += '$';
			}
			else {
				finalString += string.charAt(i);
			}
		}
		
		System.out.println(finalString + "!");
	}
}