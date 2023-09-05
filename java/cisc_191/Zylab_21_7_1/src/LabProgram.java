import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      int n1 = scnr.nextInt();
      int n2 = scnr.nextInt();
      int n3 = scnr.nextInt();

      int max = n1;
      if (n2 > max) max = n2;
      if (n3 > max) max = n3;

      System.out.println(max);
   }
}