import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);

      int low, high, x;
      int count = 0;
      
      low = scnr.nextInt();
      high = scnr.nextInt();
      x = scnr.nextInt();
      
      for(int i = low; i <= high; i++){
         
         if(i % x == 0){
            count++;
         }
         
         if (i % x != 0){
            
         }
      }
      System.out.println(count);
   }
}