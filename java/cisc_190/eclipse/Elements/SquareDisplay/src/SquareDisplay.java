import java.util.Scanner;

public class SquareDisplay{
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner( System.in );
		
		int userInteger;
		
		System.out.println( "Please enter a positive number not greater than 15" );
		userInteger = scanner.nextInt();
		
		while( userInteger < 1 || userInteger > 15 ){
			System.out.println( "Please reenter a positive number not greater than 15( 1 to 15 please )" );
			userInteger = scanner.nextInt();
		}
		
		for( int row = 1; row <= userInteger; row++ ) {
			for( column = 1; column <= userInteger; column++ ) {
				System.out.print( "X" );
			}
			System.out.println();
		}
		
	}
}