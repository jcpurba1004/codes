import java.util.Scanner;

public class ArrayTraversal {

   public static void printScoreVals(int[] scoreVals) {
      int i;

      for (i = 0; i < scoreVals.length; ++i) {
         System.out.println(scoreVals[i]);
      }
   }

   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      final int NUM_SCORES = 3;
      int[] quizScores = new int[NUM_SCORES];
      int i;

      for (i = 0; i < quizScores.length; ++i) {
          quizScores[i] = scnr.nextInt();
      }

      printScoreVals(quizScores);
   }
}