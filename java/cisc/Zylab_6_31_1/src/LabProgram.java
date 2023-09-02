import java.util.Scanner;
import java.util.Random;

public class LabProgram {
	public static String coinFlip(Random rand) {
		int val = rand.nextInt(2);
		if(val == 0) {
			return "Tails";
		}
		else {
			return "Heads";
		}
	}
	
	public static void main(String[] args) {
		try (Scanner scnr = new Scanner(System.in)) {
			Random rand = new Random(2);
			int n = scnr.nextInt();
			for(int i = 0; i < n; i++) {
				System.out.println(coinFlip(rand));
			}
		}
	}
}