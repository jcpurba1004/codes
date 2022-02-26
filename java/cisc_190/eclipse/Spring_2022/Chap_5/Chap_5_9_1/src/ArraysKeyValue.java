import java.util.Scanner;

public class ArraysKeyValue {
	public static void main(String[] args) {
	    Scanner scnr = new Scanner(System.in);
	    final int NUM_ROWS = 2;
	    final int NUM_COLS = 2;
	    int [][] milesTracker = new int[NUM_ROWS][NUM_COLS];
	    int i;
	    int j;
	    int maxMiles;
	    int minMiles;
	    
	    for (i = 0; i < milesTracker.length; i++) {
	       for (j = 0; j < milesTracker[i].length; j++) {
	    	  milesTracker[i][j] = scnr.nextInt();
	       }
	    }
	    
	    minMiles = milesTracker[0][0];
	    maxMiles = milesTracker[0][0];
	    for (i = 0; i < NUM_ROWS; ++i) {
	       for (j = 0; j < NUM_COLS; ++j) {
	    	  if (milesTracker[i][j] > maxMiles) maxMiles = milesTracker[i][j];
	    	  if (milesTracker[i][j] < minMiles) minMiles = milesTracker[i][j];
	       }
	    }
	    
	    System.out.println("Min miles: " + minMiles);
	    System.out.println("Max miles: " + maxMiles);
	}
}