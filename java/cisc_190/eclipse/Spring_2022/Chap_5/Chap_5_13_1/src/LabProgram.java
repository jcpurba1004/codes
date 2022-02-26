import java.util.Scanner;

public class LabProgram {
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int n = scnr.nextInt();
		int[] arr = new int[n];
		
		for (int i = 0; i < arr.length; ++i) {
		   arr[i] = scnr.nextInt();
		}
		for (int i = arr.length - 1; i >= 0; --i) {
		   System.out.print(arr[i] + ",");
		}
		System.out.println();
	}
}