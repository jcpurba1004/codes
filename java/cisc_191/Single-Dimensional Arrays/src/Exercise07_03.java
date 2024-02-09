import java.util.Scanner;

public class Exercise07_03 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int[] numbers = new int[100];
		int[] count = new int[100];
		
		int temp = 0;
		System.out.print("Enter the integers between 1 and 100: ");
		for (int i = 0; i < numbers.length; i++) {
			numbers[i] = sc.nextInt();
			if(numbers[i] > 100) {
				System.out.println("Number must be between 1 to 100");
				break;
			}
			// Expected input will end when user enters 0
			if(numbers[i] == 0) {
				break;
			}
		}
		
		// Value at a given index of num array will be stored in temp variable
		for (int i = 0; i < numbers.length; i++) {
			temp = numbers[i];
			count[temp]++;
		}
		
		for(int i = 1; i < count.length - 1; i++) {
			
			if(count[i] > 0 && count[i] == 1) {
				System.out.printf("%d occurs %d time\n", i, count[i]);
			}
			else if(count[i] >= 2) {
				System.out.printf("%d occurs %d times\n", i, count[i]);
			}
		}
	}
}