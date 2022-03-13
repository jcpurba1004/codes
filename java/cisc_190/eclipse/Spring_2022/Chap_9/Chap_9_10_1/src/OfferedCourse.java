public class OfferedCourse extends Course {
private String instructorName;
   private String term;
   private String classTime;
	
   public void setInstructorName(String oInstructorName) {
	  instructorName = oInstructorName;
   }
   
   public void setTerm(String oTerm) {
	  term = oTerm;
   }
   
   public void setClassTime(String oClassTime) {
	  classTime = oClassTime;
   }
   
   public String getInstructorName() {
	  return instructorName;
   }
   
   public String getTerm() {
	  return term;
   }
   
   public String getClassTime() {
	  return classTime;
   }
}