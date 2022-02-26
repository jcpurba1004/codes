import java.util.Scanner;

public class CallCablePlan {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		CablePlan house1Plan = new CablePlan();
		int userNum;
		
		userNum = scnr.nextInt();
		house1Plan.setNumDays(userNum);
		System.out.println(house1Plan.getNumDays());
	}
}