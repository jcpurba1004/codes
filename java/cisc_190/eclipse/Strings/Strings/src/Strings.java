/**
 * 
 */

/**
 * @author jpurba
 *
 */
public class Strings {

	/**
	 * 
	 */
	public Strings() {
		// TODO Auto-generated constructor stub
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String name1 = "George";
		String name2 = "Franklin";
		String name3 = "Jay";
		String name4 = "Ozzy";
		String name5 = "Carmine";
		String name6 = "Dee";
		System.out.printf("%10s%10s\n", name1, name2);
		System.out.printf("%10s%10s\n", name3, name4);
		System.out.printf("%10s%10s\n", name5, name6);
		
		int hours = 40;
		double pay = hours * 25;
		String name = "Jay";
		System.out.printf("Name: %s, Hours: %d, Pay: $%,.2f\n",
				          name, hours, pay);
	}

}
