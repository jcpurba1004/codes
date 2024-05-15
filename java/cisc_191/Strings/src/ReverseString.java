public class ReverseString {
	public static void main(String[] args) {
		String str = "Hello, world!";
		String reversedStr = "";
		for (int i = str.length() - 1; i >= 0; i--) {
			reversedStr += str.charAt(i);
		}
		System.out.println(reversedStr);
	}
}