import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];   // List of integers from input

      int i=0,N,length;
		
		while(true){
		    N = scnr.nextInt();
		    
		    if(N < 0){
		        N = -(N);
		        break;
		    }
		      
		    userValues[i] = N;
		    
		    i++;
		}
		 
		length = i;

		if(N > length){
		    N = -(N);
		    System.out.println(N);
		}
		
		else{
		    System.out.println(userValues[length-N]);
		}
   }
}