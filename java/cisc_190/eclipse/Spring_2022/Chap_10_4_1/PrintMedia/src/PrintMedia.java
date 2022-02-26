public class PrintMedia {
   public static void main(String[] args) {
      Media med = new Media();

      med.setDirector("David Silverman");
      med.setName("The Simpsons");

      med.printName();
      med.printDirector();
   }
}