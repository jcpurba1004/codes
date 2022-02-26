public class CallPet {

	public static void main(String[] args) {
		Pet dog = new Pet();
		Pet cat = new Pet(2);
		Pet bird = new Pet("Ruby", 8);
		
		bird.print();
		cat.print();
		dog.print();
	}
}