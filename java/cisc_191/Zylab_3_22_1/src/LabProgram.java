import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
       // declaring variable
       Scanner scnr = new Scanner(System.in);
       int red, green, blue;

       // reading values from user
       red = scnr.nextInt();
       green = scnr.nextInt();
       blue = scnr.nextInt();

       // calculating minimum value among all inputted values
       int min = red;
       if(min > green){
           min = green;
       }
       if(min > blue){
           min = blue;
       }

       // printing output
       System.out.println((red-min)+" "+(green-min)+" "+(blue-min));
   }
}