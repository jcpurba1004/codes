public class CallDog {

	public static void main(String[] args) {
		Dog buddy = new Dog();
		
		buddy.setWeightAndAge(30, 4);
		System.out.print("Human years: " + buddy.getHumanYears());
	}
}