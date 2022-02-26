import java.util.Scanner;
 
public class Bicycle {                          
	   private String type = "NoType";
	   private int year = -1;

	   public void setType(String bicycleType) {  
	      type = bicycleType;
	   }

	   public void setYear(int bicycleYear) {
	      year = bicycleYear;
	   }

	   public void print() {  
	      System.out.println(type + " " + year);
	   }
	}	