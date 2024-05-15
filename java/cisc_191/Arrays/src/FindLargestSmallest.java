public class FindLargestSmallest {
	public static void main(String[] args) {
		int[] arr = {10, 20, 30, 40, 50};
		int largest = arr[0];
		int smallest = arr[0];
		for (int i = 1; i < arr.length; i++) {
			if (arr[i] > largest) {
				largest = arr[i];
			} else if (arr[i] < smallest) {
				smallest = arr[i];
			}
		}
		System.out.println("Largest element: " + largest);
		System.out.println("Smallest element: " + smallest);
	}
}