public class CallPerson {
   public static void main(String [] args) {
      String aFirstName;
      String anotherFirstName;
      String aLastName;
      String anotherLastName;

      aFirstName = "May";
      anotherFirstName = "Max";
      aLastName = "Stark";
      anotherLastName = "Parker";

      Person person1 = new Person();
      Person person2 = new Person();
      
      person2.setFirstName(aFirstName);
      person1.setFirstName(anotherFirstName);
      person2.setLastName(aLastName);
      person1.setLastName(anotherLastName);

      System.out.println("You are " + person1.getFullName());
      System.out.println("I am " + person2.getFullName());
   }
}