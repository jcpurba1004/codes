package arrayOutput;

public class arrayOutput {
	   public static void main (String [] args) {
	      final int NUM_ELEMENTS = 4;
	      int [] userVals = new int[NUM_ELEMENTS];
	      int i;
	   
	      userVals[0] = -1;
	      userVals[1] = 3;
	      userVals[2] = -6;
	      userVals[3] = 7;
	   
	      for (i = 0; i < userVals.length; ++i) {
	         if (userVals[i] < 0) {
	            userVals[i] = -1 * userVals[i];
	         }
	         System.out.println(userVals[i]);
	      }
	   }
	}