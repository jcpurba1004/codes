public class Main {

	public static void main(String[] args) {
		Mouse2 m2 = new Mouse2();
		
		m2.leftClick();
		m2.rightClick();
		m2.scrollDown();
		m2.scrollUp();
		
		m2.connect();
	}
}