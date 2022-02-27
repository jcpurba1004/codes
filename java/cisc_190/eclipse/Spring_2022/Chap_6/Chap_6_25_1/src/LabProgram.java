import java.util.Scanner;

public class LabProgram {

	public static void swapValues(int[] values) {
		int temp = values[0];
		values[0] = values[1];
		values[1] = temp;
		temp = values[2];
		values[2] = values[3]; 
		values[3] = temp;
	}
	
	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int[] values = new int[4];
		values[0] = scnr.nextInt();
		values[1] = scnr.nextInt();
		values[2] = scnr.nextInt();
		values[3] = scnr.nextInt();
		swapValues(values);
		System.out.println(values[0] + " " + values[1] + " " + values[2] + " " + values[3]);
	}
}