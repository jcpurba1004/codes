import java.util.Scanner;

public class NumSquared {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int userNum;
		int userNumSquared;
		
		userNum = scnr.nextInt();
		
		userNumSquared = userNum * userNum;
		
		System.out.println(userNumSquared);
	}
}