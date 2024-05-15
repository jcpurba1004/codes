public class FindCharOccurrences {
	public static void main(String[] args) {
		String str = "Hello, world!";
		char ch = '1';
		int count = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str.charAt(i) == ch) {
				count++;
			}
		}
		System.out.println(count);
	}
}