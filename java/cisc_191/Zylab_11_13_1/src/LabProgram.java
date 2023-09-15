import java.util.Scanner;

public class LabProgram {
   
   public static int digitCount(int num) {
    if (num < 10) {
        return 1;
    } 
    else {
        return 1 + digitCount(num / 10);
      }
   }
   
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int num, digits;
      
      num = scnr.nextInt();
      digits = digitCount(num);
      System.out.println(digits);
   }
}