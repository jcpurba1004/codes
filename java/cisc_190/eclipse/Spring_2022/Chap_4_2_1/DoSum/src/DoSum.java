import java.util.Scanner;

public class DoSum {
   public static void main (String [] args) {
      Scanner scnr = new Scanner(System.in);
      int userValue;
      int finalSum;

      finalSum = 0;

      userValue = scnr.nextInt();

      while (userValue > 0) {
         finalSum = finalSum + userValue;
         userValue = scnr.nextInt();
      }

      System.out.print("Sum: " + finalSum);
   }
}