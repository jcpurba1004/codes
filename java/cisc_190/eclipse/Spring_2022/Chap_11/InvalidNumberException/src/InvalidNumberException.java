public class InvalidNumberException extends Exception {

	public InvalidNumberException() {
		super("Invalid number. It should be between 1 and 10");
	}
	
	public InvalidNumberException(String message) {
		super(message);
	}
}