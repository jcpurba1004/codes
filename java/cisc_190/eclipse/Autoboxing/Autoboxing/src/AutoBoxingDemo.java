public class AutoBoxingDemo {
	public static void main(String[] args) 
	{
		int i = 10;
		
		// Autobox
		Integer iObj = Integer.valueOf(i);
		System.out.println("Value of Integer obj: " + iObj);
		
		// auto-unbox
		int i1 = iObj;
		System.out.println("Value of i1: " + i1);
		
		char x = 'a';
		// Autobox
		Character charObj = Character.valueOf(x);
		
		// Auto-unbox
		char ch = charObj;
		System.out.println("Value of ch: " + ch);
		System.out.println("Value of charObj: " + charObj);
	}
}