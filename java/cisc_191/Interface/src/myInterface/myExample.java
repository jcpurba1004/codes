package myInterface;

public class myExample implements Printable, Showable {

	public void Show() {
		System.out.println("Welcome");
	}

	public void Print() {
		System.out.println("To Interface Class");
	}

	/**
	 * 
	 * @param args
	 */
	public static void main(String[] args) {
		myExample obj = new myExample();
		obj.Show();
		obj.Print();
	}
}