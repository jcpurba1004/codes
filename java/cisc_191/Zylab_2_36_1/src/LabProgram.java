import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      double wallHeight;
      double wallWidth;
      double wallArea;
      double paintNeeded;
      final double gallonOfpaint = 350;
      
      System.out.println("Enter wall height (feet): ");
      wallHeight = scnr.nextDouble();
      
      System.out.println("Enter wall width (feet): ");
      wallWidth = scnr.nextDouble();
      
      wallArea = wallHeight * wallWidth;
      
      System.out.println("Wall area: "+wallArea+" square feet");
      
      paintNeeded = wallArea / gallonOfpaint;
      
      System.out.println("Paint need: "+paintNeeded+" gallons");
      
      System.out.println("Cans needed: "+Math.round(paintNeeded)+" can(s)");
   }
}