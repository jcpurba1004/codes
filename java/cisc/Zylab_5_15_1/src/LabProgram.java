import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];   // List of integers from input

      int size = scnr.nextInt();
        
        for(int i=0;i<size;i++){
            userValues[i] = scnr.nextInt();
        }
        
        int threshold = scnr.nextInt();
        for(int i=0;i<size;i++){
            
            if(userValues[i]<=threshold){
                System.out.print(userValues[i]+",");
            }
        }
   }
}