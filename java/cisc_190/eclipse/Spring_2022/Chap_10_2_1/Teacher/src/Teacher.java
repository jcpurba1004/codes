public class Teacher extends Person {
   private String subject; 

   public Teacher(String teacherName, int teacherAge, String teacherSubject) {
      this.name = teacherName;
      this.age = teacherAge;
      this.subject = teacherSubject;
   }

   public void printInfo() {
      String nameAndAge = this.getNameAndAge();

      System.out.println(nameAndAge);
      System.out.println("Subject: " + this.subject);
   }
}