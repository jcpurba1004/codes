public class Driver {

	public static void main(String[] args) {
		
		Cow cow = new Cow();
		Dog dog = new Dog();
		Cat cat = new Cat();
		Tree tree = new Tree();
		VideoGameCharacter joe = new VideoGameCharacter();
		
		Animal[] animals = {cow, dog, cat};
		
		Alive[] things = {cow, dog, cat, tree, joe};
		
		for (int i=0; i<things.length; i++)
			things[i].eat();
	}
}