import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int[] userValues = new int[20];

      int numValues = scnr.nextInt(); 

        for (int i = 0; i < numValues; i++) {
            userValues[i] = scnr.nextInt();
        }

        int temp = userValues[0];
        userValues[0] = userValues[numValues - 1];
        userValues[numValues - 1] = temp;

        for (int i = 0; i < numValues; i++) {
            System.out.print(userValues[i] + " ");
        }
        System.out.println(); 
   }
}