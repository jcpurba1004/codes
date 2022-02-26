public class TestPerson {
   public static void main(String[] args) {
      Student myStudent = new Student("Gus", 11, 2.0);
      Teacher myTeacher = new Teacher("Turing", 26, "Math");

      myStudent.printInfo();
      System.out.println();
      myTeacher.printInfo();
   }
}