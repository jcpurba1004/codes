public class Student extends Person {
   private double gpa; 

   public Student(String studentName, int studentAge, double studentGPA) {
      this.name = studentName;
      this.age = studentAge;
      this.gpa = studentGPA;
   }

   public void printInfo() {
      String nameAndAge = this.getNameAndAge();

      System.out.println(nameAndAge);
      System.out.println("GPA: " + this.gpa);
   }
}