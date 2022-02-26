public class CallDog {
   public static void main(String [] args) {
      Dog buddy = new Dog();

      buddy.setWeightAndAge(78, 6);
      System.out.print("Human years: " + buddy.getHumanYears());
   
   }
}