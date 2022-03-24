public class Demo {

	public static void main(String[] args) {
		
		int[] array = {2, 5, 9, 12, 58};
		
		try {
			for (int i=0; i<=array.length; i++) {
			System.out.println(array[i]);
			}
		}
		catch (Throwable e) {
			System.out.println("Reached the end of the array");
		}
	}
}