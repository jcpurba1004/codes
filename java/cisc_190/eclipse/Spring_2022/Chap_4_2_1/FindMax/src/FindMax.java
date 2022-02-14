import java.util.Scanner;

public class FindMax {
   public static void main (String [] args) {
      Scanner scnr = new Scanner(System.in);
      int currValue;
      int maxNumber;

      currValue = scnr.nextInt();
      maxNumber = currValue;

      while (currValue > 0) {
         if (currValue > maxNumber) {
            maxNumber = currValue;
         }

         currValue = scnr.nextInt();
      }

      System.out.print("Max value: " + maxNumber);
   }
}