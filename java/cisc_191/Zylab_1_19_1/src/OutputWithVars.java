import java.util.Scanner; 

public class OutputWithVars {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int userNum;

      System.out.println("Enter integer:");
      userNum = scnr.nextInt();  
      
      System.out.println("You entered: " + userNum);
      System.out.println(userNum + " squared is " + (userNum * userNum));
      System.out.println("And " + userNum + " cubed is " + (userNum * userNum * userNum) + "!!");

      System.out.print("Enter another integer: ");
      int userNum2 = input.nextInt();

      System.out.println(userNum + " + " + userNum2 + " is " + (userNum + userNum2));
      System.out.println(userNum + " * " + userNum2 + " is " + (userNum * userNum2));

      input.close();
   }
}