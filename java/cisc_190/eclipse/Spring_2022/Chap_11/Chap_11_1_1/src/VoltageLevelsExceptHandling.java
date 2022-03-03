import java.util.Scanner;
import java.util.InputMismatchException;

public class VoltageLevelsExceptHandling {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      double voltageLevel;

      while (scnr.hasNext()) {
         try {
            voltageLevel = scnr.nextDouble();

            if (voltageLevel >= 3.7) {
               System.out.println("high");
            }
            else if (voltageLevel >= 0.0 && voltageLevel <= 1.6) {
               System.out.println("low");
            }
            else {
               System.out.println("?");
            }
         }
         catch (InputMismatchException excpt) {
            System.out.println("Invalid input");
            scnr.next();
         }
      }
   }
}