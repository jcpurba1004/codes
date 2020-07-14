public class ArrayDemo 
{
	public static void main(String[] args) 
	{
		// Create an array with three primitive types
		char[] a = new char[3];
		System.out.println("Length is: " + a.length);
		System.out.println("First element is: " + a[0]);
		
		// Change each element independently
		a[0] = 'A'; // Note: index starts at zero!
		a[2] = 'C'; // Note: last index is length - 1
		a[1] = 'B';
		a[a.length-1] = 'Z';
		
		// Creating a new variable (but not new array)
		char[] b;
		b = a;
		// a and b are reference types, referencing the same objects
		System.out.println("Third element is: " + b[2]);
		
		b[0] = 'X'; // Changes the original array
		System.out.println("First element is: " + a[0]);
		
		
		// Print out each element
		for (int index = 0; index < a.length; index++)
		{
			System.out.println("Element number " + index + " is " + a[index]);
		}
		
		// Deep copy the value's of a into new array
		char[] c = new char[a.length]; // Note: uses new
		for (int index = 0; index < c.length; index++)
		{
			// Copy each element separately
			c[index] = a[index];
		}
		
		// Comparing arrays
		System.out.println("a == b: " + (a == b));
		System.out.println("a == c: " + (a == c));
		// False because not same object (even though contains same elements)
		
		
		// c contains similar values but is different from the original array
		c[0] = 'M';
		
		// -------------------------------------------------
		
		// Strings are objects
		// Strings are stored as reference
		String[] sa = new String[3];
		sa[0] = "Alice";
		sa[2] = "Charlie";
		sa[1] = "Bob";
		
		// Get the length of a string in the array
		// Note: it's a method (not an instance field)
		System.out.println("3rd string length: " + sa[2].length());
	}
}