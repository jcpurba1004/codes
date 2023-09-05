import java.util.Scanner;

public class LabProgram {
   
    public static void drawTriangle(int baseLength) {
    
    if (baseLength == 1) {
      System.out.println("*");
      return;
    }
    
    for (int i = 0; i < baseLength; i++) {
      System.out.print("*");
    }
    System.out.println();
    drawTriangle(baseLength - 2);
    
    for (int i = 0; i < (19 - baseLength) / 2; i++) {
      System.out.print(" ");
    }
  }
   
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int baseLength;
      
      baseLength = scnr.nextInt();
      drawTriangle(baseLength);
   }
}