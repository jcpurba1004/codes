import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		
		int userNum;
		Scanner scnr = new Scanner(System.in);
		
		userNum = scnr.nextInt();
		
		while(userNum > 0) {
		   System.out.print(userNum % 2);
		   userNum = userNum / 2;
		}
		System.out.print("\n");
	}
}