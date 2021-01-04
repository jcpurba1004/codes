package showCharMethod;
/*

Problem 5.1: showChar Method

Write a method named showChar. The method should accept two arguments: a reference to a String object and an integer.
The integer argument is a character position within the String, with the first character being at position 0.
When the method executes, it should display the character at that character position. Here is an example of a call to a method:

showChar("New York", 2);
  
*/

public class showCharMethod{
	
	public static void showChar( String stringGiven, int integerGiven ) {
		if ( ( integerGiven < 0 ) || ( integerGiven > stringGiven.length() - 1 ) ) {
			 System.out.println( "Please enter an index of 0 to the last index of " + stringGiven + " which is " +
					 		      ( stringGiven.length() - 1 ) );
		} else{
			 System.out.println( "The character at position " + integerGiven + " in " + stringGiven +
		 	 	      			 " is " + stringGiven.charAt( integerGiven ) );
		}
	}

	public static void main(String[ ] args) {
		showChar( "Kay", 2 );
	}
	
}