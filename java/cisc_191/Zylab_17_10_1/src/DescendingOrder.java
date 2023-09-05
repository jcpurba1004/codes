import java.util.Scanner;

public class DescendingOrder {

    private static void swap(int[] array, int firstIndex, int secondIndex) {
        int temp = array[firstIndex];
        array[firstIndex] = array[secondIndex];
        array[secondIndex] = temp;
    }

    public static void selectionSortDescendTrace(int[] numbers, int numElements) {
        int maxIndex;
        for (int i = 0; i < numElements - 1; ++i) {
            maxIndex = i;
            for (int j = i; j < numElements; ++j) {
                if (numbers[j] > numbers[maxIndex]) {
                    maxIndex = j;
                }
            }
            swap(numbers, i, maxIndex);
            for (int j = 0; j < numElements; j++) {
                System.out.print(numbers[j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scnr = new Scanner(System.in);
        int input, i = 0;
        int numElements = 0;
        int[] numbers = new int[10];
        for (i = 0; i < numbers.length; i++) {
            numbers[i] = scnr.nextInt();
            if (numbers[i] == -1)
                break;
            ++numElements;
        }
        selectionSortDescendTrace(numbers, numElements);
    }
}