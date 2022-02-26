public class Restaurant {
	private String name;
	private int rating;
	
	public Restaurant() {
		name = "NoName";
		rating = -1;
	}
	
	public static void main(String[] args) {
		name = initName;
		rating = initRating;
	}
	
	public void print() {
		System.out.println(name + " -- " + rating);
	}
}