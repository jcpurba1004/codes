import java.util.Scanner;
public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		String userFirstName;
        String userLastName;
        int birthYear;
        String loginName = "";     
        userFirstName = scnr.next();
        userLastName = scnr.next();
        birthYear = scnr.nextInt();
        if (userLastName.length() < 5) {
            loginName = userLastName;         	
        }
        else {
            loginName = userLastName.substring(0,5); 
        }
        loginName = loginName + userFirstName.charAt(0);
        loginName = loginName + (birthYear % 100) ;
        System.out.println("Your login name: " + loginName);		
	}
}