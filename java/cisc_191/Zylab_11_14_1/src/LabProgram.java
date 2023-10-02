import java.util.Scanner;

public class LabProgram {
   
   public static void drawTriangle(int n)
    {
        if (n == 1)
        {
            System.out.print("         "); 
            System.out.print("*\n");
        }
        else 
        {
            drawTriangle(n - 2);
            for(int i=0;i<(19-n)/2;i++)
                System.out.print(" ");
            for(int i=0;i<n;i++)
            {
                System.out.print("*"); 
            }
            System.out.print("\n");
        }
    }
	
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int baseLength;
      
      baseLength = scnr.nextInt();
      drawTriangle(baseLength);
   }
}