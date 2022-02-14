import java.util.Scanner;

public class DoProduct {
   public static void main (String [] args) {
      Scanner scnr = new Scanner(System.in);
      int currValue;
      int totalProduct;

      totalProduct = 1;

      currValue = scnr.nextInt();

      while (currValue > 0) {
         totalProduct = totalProduct * currValue;
         currValue = scnr.nextInt();
      }

      System.out.print("Product: " + totalProduct);
   }
}