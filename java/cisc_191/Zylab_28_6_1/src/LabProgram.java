import java.util.Scanner;

public class LabProgram {
    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int size;
        int sum = 0;
      
      size = scnr.nextInt();
      int[] listA = new int[size];   // List A
      int[] listB = new int[size];   // List B

        for (int i = 0; i < size; i++) {
            listA[i] = scnr.nextInt();
        }

        for (int i = 0; i < size; i++) {
            listB[i] = scnr.nextInt();
        }

        for (int i = 0; i < size; i++) {
            sum += listA[i] * listB[i];
        }
        
        System.out.println(sum);
   }
}