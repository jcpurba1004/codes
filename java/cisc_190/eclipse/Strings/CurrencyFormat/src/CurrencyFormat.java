import javax.swing.JOptionPane;

/**
   This program demonstrates how to use the String.format
   method to format a number as currency.
 */

/**
 * @author jpurba
 *
 */
public class CurrencyFormat {

	/**
	 * 
	 */
	public CurrencyFormat() {
		// TODO Auto-generated constructor stub
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double monthlyPay = 5000.0;
		double annualPay = monthlyPay * 12;
		
		JOptionPane.showMessageDialog(null,
			String.format("Your annual pay is $%,.2f", annualPay));
	}

}
