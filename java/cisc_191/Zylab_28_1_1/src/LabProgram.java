import java.util.Scanner;

public class LabProgram
{
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int[] userValues = new int[20];  
		int n = scnr.nextInt();
		int[] vals = new int[n];
		int j=n-1;
		boolean isPal = true;
		for(int i=0; i<n; i++){
		    userValues[i] = scnr.nextInt();
		    vals[j] = userValues[i];
		    j--;
		}
		
		for(int i=0; i<n; i++){
		    if(userValues[i] != vals[i]){
		        isPal = false;
		        break;
		    }
		}
		
		if(isPal){
		    System.out.println("yes");
		}
		else{
		    System.out.println("no");
		}
	}
}