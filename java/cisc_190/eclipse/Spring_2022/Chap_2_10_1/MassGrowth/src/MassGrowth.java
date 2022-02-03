import java.util.Scanner;

public class MassGrowth {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double initMass;   // Initial mass of a substance
      double growthRate; // Annual growth rate
      double yearsGrow;  // Years of growth
      double finalMass;  // Final mass after those years

      System.out.print("Enter initial mass: ");
      initMass = scnr.nextDouble();

      System.out.print("Enter growth rate (Ex: 0.05 is 5%/year): ");
      growthRate = scnr.nextDouble();

      System.out.print("Enter years of growth: ");
      yearsGrow = scnr.nextDouble();

      finalMass = initMass * Math.pow(1.0 + growthRate, yearsGrow);
      // Ex: Rate of 0.05 yields initMass * 1.05^yearsGrow
   
      finalMass = initMass * Math.pow(1.0 + growthRate, yearsGrow);
      
      System.out.print(" Final mass after " + yearsGrow);
      System.out.println(" years is: " + finalMass);
      
      double x;
      double y;
      double z; 
      
      z = Math.pow(2.0, Math.pow(2.0, 3.0));
      System.out.println("z value is " + z);
      
      x = 9.0;
      z = Math.pow(Math.sqrt(x) + Math.sqrt(x), 2.0);
      System.out.println("z value is " + z);
      
      x = -9.0;
      z = Math.sqrt(Math.abs(x));
      System.out.println("z value is " + z);
   }
}