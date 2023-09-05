import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      int areaCode = scnr.nextInt();
      int prefix = scnr.nextInt();
      int lineNumber = scnr.nextInt();
      System.out.println("Country  Phone Number");
      System.out.println("-------  ------------");
      System.out.print("U.S.     +1 (" + areaCode + ")" + prefix + "-" + lineNumber + "\n");
      System.out.print("Brazil   +55 (" + areaCode + ")" + (prefix + 100) + "-" + lineNumber + "\n");
      System.out.print("Croatia  +385 (" + areaCode + ")" + prefix + "-" + (lineNumber + 50) + "\n");
      System.out.print("Egypt    +20 (" + (areaCode + 30) + ")" + prefix + "-" + lineNumber + "\n");
      System.out.print("France   +33 (" + prefix + ")" + areaCode + "-" + lineNumber + "\n");
   }
}