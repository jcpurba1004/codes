/*
Problem 5.16: Present Value

Suppose you want to deposit a certain amount of money into a savings account and then leave it alone to draw interest for
the next 10 years. At the end of 10 years, you would like to have $10,000 in the account. How much do you need to deposit
today to make that happen? You can use the following formula, which is known as the present value formula, to find out:

P = F\( 1 + r ) raised to the power n

The terms in the formula are as follows:

* P is the present value or the amount that you need to deposit today.
* F is the future value that you want in the account. (In this case, F is $10,000.)
* r is the annual interest rate.
* n is the number of years that you plan to let the money sit in the account.

Write a method named presentValue that performs this calculation. The method should accept the future value,
annual interest rate and number of years as arguments. It should return the present value, which is the amount that you
need to deposit today. Demonstrate the method in a program that lets the user experiment with different values for the
formula's terms.

*/

public class PresentValue{

	public static double presentValue( double futureValue, double annualInterestRate, double numberOfYears ) {
		annualInterestRate = annualInterestRate / 100;
		double presentValue;
		presentValue = futureValue / Math.pow( ( 1 + annualInterestRate), numberOfYears );
		return presentValue;
	}
	
	public static void main(String[ ] args) {
		System.out.printf( "$%,.2f", presentValue( 10000, 15, 20 ) );
	}

}
