package compscistudentdemo;

/**
   This program demonstrates the CompSciStudent class.
 */

public class CompSciStudentDemo 
{
    public static void main(String[] args) 
    {
        // Create a CompSelStudent object.
        CompSciStudent csStudent =
                new CompSciStudent("Jennifer Haynes",
                                   "167W98337", 2015);
        Student student = new Student("Rohani Banksota",
                                  "259W90128", 2018);
        // Store values for math, CS and gen ed hours.
        csStudent.setMathHours(12);
        csStudent.setCsHours(20);
        csStudent.setGenEdHours(40);
        
        // Display the student's data.
        System.out.println(csStudent);
        
        // Display the number of remaining hours.
        System.out.println("Hours remaining: " +
                     csStudent.getRemainingHours());
    }
}