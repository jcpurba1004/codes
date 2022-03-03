import java.util.Scanner;
import java.util.InputMismatchException;

public class PowerResistorExceptHandling {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int currentLevel;
      int powerResistor;
      int resistorOhms = 1;
 
      try {
         currentLevel = scnr.nextInt();

         powerResistor = currentLevel * currentLevel * resistorOhms;
         
         System.out.println("Power is " + powerResistor + "W");
      }
      catch (InputMismatchException excpt) {
         System.out.println("Invalid input");
      }
   }
}