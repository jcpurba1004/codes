import java.util.Scanner;

public class LabProgram {

	public static void exactChange(int userTotal, int[] coinVals) {
		
		coinVals[3] = userTotal / 25;
		userTotal %= 25;
		
		coinVals[2] = userTotal / 10;
		userTotal %= 10;
		
		coinVals[1] = userTotal / 5;
		userTotal %= 5;
		
		coinVals[0] = userTotal;
	}
	
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		int[] coins = new int[4];
		int value = in.nextInt();
		if(value<=0) {
		   System.out.println("no change");
		}
		else {
			exactChange(value, coins);
			if(coins[0] ==1) {
			   System.out.println(coins[0] + " penny");
			}
			else if(coins[0] > 1) {
			   System.out.println(coins[0] + " pennies");
			}
			if (coins[1] == 1) {
			   System.out.println(coins[1] + " nickel");
			}
			if (coins[1] > 1) {
			   System.out.println(coins[1] + " nickel");
			}
			if (coins[2] == 1) {
			   System.out.println(coins[2] + " dime");
			}
			if (coins[2] > 1) {
			   System.out.println(coins[2] + " dimes");
			}
			if (coins[3] == 1) {
			   System.out.println(coins[3] + " quarter");
			}
			else {
			   System.out.println(coins[3] + " quarters");
			}
		}
	}
}