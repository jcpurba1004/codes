import java.util.Scanner;

public class FindMatch {
   public static void main (String [] args) {
      Scanner scnr = new Scanner(System.in);
      int userAge;

      userAge = scnr.nextInt();

      while (userAge < 18 || userAge > 40) {
         if (userAge < 18) {
            System.out.println("Very young");
         }
         else {
            System.out.println("Grown up");
         }
         userAge = scnr.nextInt();
      }

      System.out.print("Perfect match");
   }
}