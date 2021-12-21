import java.util.Scanner;

public class Dinosaur {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("T-REX VS TRICERATOPS");
		
		System.out.println("ENTER YOUR MOVE");
		
		String[] moves = {"bite", "punch"};
		
		String input = scan.nextLine();
		
		int trex = 100;
		int tri = 100;
		
		if(input.equalsIgnoreCase(moves[0])) {
			System.out.println("You punched the tri");
			tri = tri - 60;
		} else if (input.equalsIgnoreCase(moves[1])) {
			System.out.println("You punched the tri");
			tri = tri - 20;
		}
		
		System.out.println(tri);
	}
}