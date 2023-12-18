public class Example2 implements Example1 {
	
	public static void main(String[] args) {
		Example2 e2 = new Example2();
		e2.openBag();
	}
	
	@Override
	public void openBag() {
		System.out.println("Bag opened");
	}	
}