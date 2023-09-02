import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int numberWords = scnr.nextInt();
      String[] wordsList = new String[numberWords];
      int i;
      int j;
      int[] frequency = new int[numberWords];
      

      for (i = 0; i < numberWords; ++i) {
         wordsList[i] = scnr.next();
         frequency[i] = 0;
         for (j = 0; j < numberWords; ++j) {
            if (wordsList[i].equals(wordsList[j])) {
               frequency[i] = frequency[i] + 1;
            }
         }
      }
      
      for (i = 0; i < numberWords; ++i) {
         System.out.print(wordsList[i] + " - " + frequency[i]);
         System.out.print("\n");
      }
   }
}