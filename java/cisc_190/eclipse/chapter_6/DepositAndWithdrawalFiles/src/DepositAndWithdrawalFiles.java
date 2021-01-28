import java.io.*;
import java.util.Scanner;

public class DepositAndWithdrawalFiles{
	public static void main(String[ ] args) {
		
		SavingsAccount account1 = new SavingsAccount( 500 );
		account1.setAnnualInterestRate( 10 );
		double totalInterestEarned = 0;
		
		File depositFile = new File( "Deposits.txt" );
		File withdrawalsFile = new File( "WithdrawalsFile.txt" );
		
		Scanner inputFile = new Scanner( depositFile );
		
		while( inputFile.hasNext() ) {
			account1.deposit( inputFile.nextDouble() );
		}
		
		inputFile.close();
		
		inputFile = new Scanner( withdrawalsFile );
		
		while( inputFile.hasNext() ) {
			account1.withdraw( inputFile.nextDouble() );
		}
		
		inputFile.close();
		
		totalInterestEarned = account1.addMonthlyInterest();
		
		System.out.printf( " Ending balance: $%,.2f\nTotal interest earned: $%,.2f", account1.getBalance(), totalInterestEarned ); 
	}
}