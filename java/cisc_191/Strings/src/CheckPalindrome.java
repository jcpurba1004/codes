public class CheckPalindrome {
	public static void main(String[] args) {
		String str = "racecar";
		boolean isPalindrome = true;
		for (int i = 0; i < str.length() / 2; i++) {
			if (str.charAt(i) != str.charAt(str.length() - 1 - i)) {
				isPalindrome = false;
				break;
			}
		}
		System.out.println(isPalindrome);
	}
}