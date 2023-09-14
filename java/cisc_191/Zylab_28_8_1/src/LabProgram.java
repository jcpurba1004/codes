import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];   

      int n,start,end;
        
        n=scnr.nextInt();
        
        for(int i=0;i<n;i++)
            
            userValues[i]=scnr.nextInt();
        
        start=scnr.nextInt();
        end=scnr.nextInt();
        
        for(int i=start-1;i<end-1;i++)
        {
            if(userValues[i]>userValues[i+1])
            {
                System.out.println("no");
                return;
            }
        }
        
        System.out.println("yes");
    }
}