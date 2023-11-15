class animal {
	void display1() {
		System.out.println("Eating....");
	}
}

class cat extends animal {
	void display2() {
		System.out.println("Meow....");
	}
}

class babycat extends cat {
	void display3() {
		System.out.println("Crying....");
	}
}

public class Multilevel {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		babycat bc = new babycat();
		bc.display1(); // method of animal
		bc.display2();
		bc.display3();
	}
}