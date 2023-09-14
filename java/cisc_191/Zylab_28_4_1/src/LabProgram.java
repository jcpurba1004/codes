import java.util.Scanner;

public class LabProgram {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
    	/* numCount [] counts the number of occurrences for values 1-20 in the corresponding array index.
    	Items in index 0 are ignored */ 
    	int[] numCount = new int[21];
    	int inputNum;
    
    	// Read input until -1 is entered, counting occurrences of each number
    	do {
    		inputNum = scnr.nextInt();
    		if (inputNum != -1) {
    			numCount[inputNum]++;
    		}
    	} while (inputNum != -1);
    
    	// Find the mode by identifying the index with the highest count
    	int modeIndex = 1;
    	for (int i = 2; i < numCount.length; i++) {
    		if (numCount[i] > numCount[modeIndex]) {
    			modeIndex = i;
    		}
    	}
    
    	// Output the mode
    	System.out.println(modeIndex);
    }
}