import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      Scanner scnr = new Scanner(System.in);
      int n;
      
      n = scnr.nextInt();
      int[] matrixA = new int[n];        // Matrix A
      int[][] matrixB = new int[n][n];   // Matrix B 
      int[] matrixC = new int[n];        // Matrix C

      for (int i = 0; i < n; i++) matrixA[i] = scnr.nextInt();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrixB[i][j] = scnr.nextInt();
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrixC[i] += matrixB[j][i] * matrixA[j];
            }
        }
        
        for (int i = 0; i < n; i++) System.out.print(matrixC[i] + " ");
        System.out.println();
   }
}