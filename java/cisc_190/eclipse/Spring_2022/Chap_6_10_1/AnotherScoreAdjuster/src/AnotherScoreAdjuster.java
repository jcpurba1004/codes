import java.util.Scanner;

public class AnotherScoreAdjuster {

   public static void updateScoreVals(int[] scoreVals, int updateVal) {
      int i;
      int[] updatedScoreVals = new int[scoreVals.length];

      for (i = 0; i < scoreVals.length; ++i) {
          updatedScoreVals[i] = scoreVals[i] - updateVal;
      }
      scoreVals = updatedScoreVals;
   }

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
      int scoreUpdate = 5;
      int i;

      for (i = 0; i < quizScores.length; ++i) {
          quizScores[i] = scnr.nextInt();
      }

      updateScoreVals(quizScores, scoreUpdate);
      printScoreVals(quizScores);
   }
}