interface DogInterface {
	
	void poop();
}

abstract class Dog {
	
	public void bark() {
		System.out.println("Bark!");
	}
	
	public abstract void poop();
}

class Chihuahua extends Dog {
	
	public void poop() {
		System.out.println("Dog pooped!");
	}
}

public class AbstractTutorial {

	public static void main(String[] args) {
		Chihuahua c = new Chihuahua();
		
		c.bark();
		c.poop();
	}
}