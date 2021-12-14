import java.util.Random;

public class RollingDice {

	public static void main(String[] args) {
		
		Random coolNumberBro = new Random();
		int x = coolNumberBro.nextInt(9999999) + 1;
		
		System.out.println("You rolled a: " + x);
	}

}