import java.util.Scanner;

public class LabProgram {
   
   public static int fibonacci(int n) {
      if(n<0)
            return -1;
        
        int term1=0,term2=1,nextTerm;
       
        for(int i=1;i<=n;i++)
        {
            
            nextTerm=term1+term2;
            
            term1=term2;
            
            term2=nextTerm;
        }
        return term1;      
   }
   
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int startNum;
      
      startNum = scnr.nextInt();
      System.out.println("fibonacci(" + startNum + ") is " + fibonacci(startNum));
   }
}