import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];   // List of integers from input

      int n = scnr.nextInt();
		for(int i=0; i<n; i++){
		    userValues[i] = scnr.nextInt();
		}
		
		int newVal[] = new int[20];
		for(int i=0; i<n; i++){
		    if(i==0){
		        newVal[i] = userValues[n-1];
		    }
		    else{
		        newVal[i] = userValues[i-1];
		    }
		}
		
		for(int i=0; i<n; i++){
		    userValues[i] = newVal[i];
		    System.out.print(userValues[i]+" ");
		}
		System.out.print("\n");
   }
}