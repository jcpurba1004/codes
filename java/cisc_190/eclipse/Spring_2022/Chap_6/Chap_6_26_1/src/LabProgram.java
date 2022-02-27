import java.util.Scanner;
import java.util.Random;

public class LabProgram {

	public static String coinFlip(Random rand) {
		boolean r = rand.nextBoolean();
		if (r) {
			return "Heads";
		}
		else {
			return "Tails";
		}
	}
	
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		Random rand = new Random(2);
		int userNum = scnr.nextInt();
		
		for (int i = 0; i < userNum; i++) {
		   System.out.println(coinFlip(rand));
		}
	}
}