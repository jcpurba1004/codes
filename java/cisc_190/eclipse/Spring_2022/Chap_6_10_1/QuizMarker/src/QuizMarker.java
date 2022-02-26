import java.util.Scanner;

public class QuizMarker {

   public static void passFail(int[] scoreVals, int quizThres) {
      int i;

      for (i = 0; i < scoreVals.length; ++i) {
          System.out.print(scoreVals[i]);
          System.out.print(" ");
          if (scoreVals[i] >= quizThres) {
            System.out.println("p");
          }
          else {
            System.out.println("f");
          }
      }
   }

   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      final int NUM_SCORES = 4;
      int[] quizScores = new int[NUM_SCORES];
      int threshold = 6;
      int i;

      for (i = 0; i < quizScores.length; ++i) {
          quizScores[i] = scnr.nextInt();
      }

      passFail(quizScores, threshold);
   }
}