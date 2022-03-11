import java.util.Scanner;

public class CourseInformation {
	public static void main(String[] args) {
	   Scanner scnr = new Scanner(System.in);
	   
	   Course myCourse = new Course();
	   OfferedCourse myOfferedCourse = new OfferedCourse();
	   
	   String courseNumber, courseTitle;
	   String oCourseNumber, oCourseTitle, instructorName, term, classTime;
	   
	   courseNumber = scnr.nextLine();
	   courseTitle = scnr.nextLine();
	   
	   oCourseNumber = scnr.nextLine();
	   oCourseTitle = scnr.nextLine();
	   instructorName = scnr.nextLine();
	   term = scnr.nextLine();
	   classTime = scnr.nextLine();
	   
	   myCourse.setCourseNumber(courseNumber);
	   myCourse.setCourseTitle(courseTitle);
	   myCourse.printInfo();
	   
	   myOfferedCourse.setCourseNumber(oCourseNumber);
	   myOfferedCourse.setCourseTitle(oCourseTitle);
	   myOfferedCourse.setInstructorName(instructorName);
	   myOfferedCourse.setTerm(term);
	   myOfferedCourse.setClassTime(classTime);
	   myOfferedCourse.printInfo();
	   
	   System.out.println("   Instructor Name: " + myOfferedCourse.getInstructorName());
	   System.out.println("   Term: " + myOfferedCourse.getTerm());
	   System.out.println("   ClassTime:  " + myOfferedCourse.getClassTime());
	}
}