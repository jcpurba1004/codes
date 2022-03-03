import java.util.Scanner;

public class TriangleArea {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      
      double base1;
	  double height1;
	  double base2;
	  double height2;
	
	  base1 = scnr.nextDouble();
	  height1 = scnr.nextDouble();
	  base2 = scnr.nextDouble();
	  height2 = scnr.nextDouble();
      
      Triangle triangle1 = new Triangle();
      triangle1.setBase(base1);
	  triangle1.setHeight(height1);
		
      Triangle triangle2 = new Triangle();
      triangle2.setBase(base2);
	  triangle2.setHeight(height2);
		
	  System.out.println("Triangle with larger area:");
	  if(triangle1.getArea() > triangle2.getArea()) {
		 triangle1.printInfo();
	  }
	  else {
		 triangle2.printInfo();
	  }
   }
}