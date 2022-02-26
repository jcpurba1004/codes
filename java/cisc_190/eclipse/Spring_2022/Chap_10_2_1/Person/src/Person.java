public abstract class Person {
   protected String name; 
   protected int age; 

   abstract void printInfo();

   public String getNameAndAge() { 
      return this.name + ", " + age + " years";
   }
}