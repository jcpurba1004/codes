public class Person {
   private int ageYears;
   private String lastNames;
   
   public void setName(String userName) {
	  lastName = userName;
   }
   
   public void setAge(int numYears) {
	  ageYears = numYears;
   }
   
   public void printAll() {
	  System.out.print("Name: " + lastName);
	  System.out.print(", Age: " + ageYears);
   }
}

public class Student extends Person {
   private int idNum;
   
   public void setID(int studentId) {
	  idNum = studentId;
   }
   
   public int getID() {
	  return idNum;
   }
}

public class StudentDerivationFromPerson {
   public static void main(String[] args) {
	  Student courseStudent = new Student();
	  
	  courseStudent.setName("Smith");
	  courseStudent.setID(9999);
	  courseStudent.setAge(20);
	  courseStudent.printAll();
	  System.out.println(", ID: " + courseStudent.getID());
   }
}