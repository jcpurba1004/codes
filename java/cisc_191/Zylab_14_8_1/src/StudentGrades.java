import java.util.Scanner;
import java.util.HashMap;

public class StudentGrades {
       
   public static void main (String[] args) {
      Scanner scnr = new Scanner(System.in);
      String studentName;
      double studentGrade;
      
      HashMap<String, Double> studentGrades = new HashMap<String, Double>();
      
      // Students's grades (pre-entered)
      studentGrades.put("Harry Rawlins", 84.3);
      studentGrades.put("Stephanie Kong", 91.0);
      studentGrades.put("Shailen Tennyson", 78.6);
      studentGrades.put("Quincy Wraight", 65.4);
      studentGrades.put("Janine Antinori", 98.2);
      
      studentName = scnr.nextLine(); 
      studentGrade = scnr.nextDouble(); 
      if (studentGrades.containsKey(studentName)) 
      {
         System.out.println(studentName + "'s original grade: " + studentGrades.get(studentName));
      }
      
      studentGrades.put(studentName, studentGrade);
      System.out.println(studentName + "'s new grade: " + studentGrades.get(studentName)); 
      
      scnr.close(); 
   }
}