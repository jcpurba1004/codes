import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int userNum;
		int divNum;
		int res1;
		
		userNum = scnr.nextInt();
		divNum = scnr.nextInt();
		
		res1 = userNum/divNum;
		System.out.print(res1 + " ");
		res1 = res1/divNum;
		System.out.print(res1 + " ");
		res1 = res1/divNum;
		System.out.println(res1);
	}
}