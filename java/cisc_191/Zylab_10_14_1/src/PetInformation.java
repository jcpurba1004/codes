import java.util.Scanner;

public class PetInformation {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      Pet myPet = new Pet();
      Cat myCat = new Cat();
      
      String petName, catName, catBreed;
      int petAge, catAge;

      petName = scnr.nextLine();
      petAge = scnr.nextInt();
      scnr.nextLine();
      catName = scnr.nextLine();
      catAge = scnr.nextInt();
      scnr.nextLine();
      catBreed = scnr.nextLine();
      
      myPet.setName(petName);
	  myPet.setAge(petAge);

	  myCat.setName(catName);
	  myCat.setAge(catAge);
	  myCat.setBreed(catBreed);

	  myPet.printInfo();
	  myCat.printInfo();
	  System.out.println("	Breed: " + myCat.getBreed());

	  scnr.close();
   }
}