import java.util.Scanner;

public class LabProgram {

	public static void main(String[] args) {
		Scanner scnr = new Scanner(System.in);
		int [] arr = new int [12];
		int i = 0;
		int n;
		n = scnr.nextInt();
		while (n != -1) {
		 if (i==9) {
			System.out.println("Too many numbers");
			return;
		 }
			arr[i++] = n;
			n = scnr.nextInt();
		 }
		 if(i <= 9) {
			  System.out.println("Middle item: " + arr[i / 2]);
		 }
	}
}