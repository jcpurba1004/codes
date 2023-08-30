import java.util.Scanner;

public class LabProgram
{
   public static void main(String args[])
   {
      Scanner scnr=new Scanner(System.in);
      int currentPrice;
      int lastMonthsPrice;

      currentPrice=scnr.nextInt();
      lastMonthsPrice=scnr.nextInt();

      System.out.printf("The house is $%d. The change is $%d since last month.\n",currentPrice,(currentPrice-lastMonthsPrice));
      System.out.printf("The estimated monthly mortgage is $%.1f.",(currentPrice*0.051)/12);
   }
}