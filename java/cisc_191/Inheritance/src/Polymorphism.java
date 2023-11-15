class Bird {
	public void sing() {
		System.out.println("tweet tweet tweet");
	}
}

class Robin extends Bird {
	public void sing(String song) {
		System.out.println("twiddledeedee");
	}
}

public class Polymorphism {

	public static void main(String[] args) {
		Bird b = new Bird();
		b.sing();
	}
}