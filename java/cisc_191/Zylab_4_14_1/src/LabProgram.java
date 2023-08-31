import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.print("Enter a positive integer: ");
      int number = input.nextInt();

      StringBuilder reverseBinary = new StringBuilder();

      while (number > 0) {
         reverseBinary.append(number % 2);
         number /= 2;
      }

         System.out.println("The reverse binary representation of the input is: " + reverseBinary);
   }
}