public class Artwork {
	
	private String title;
	private int yearCreated;
	private Artist artist;

	public Artwork() {
		title = "unknown";
		yearCreated = -1;
		artist = new Artist();
	}

	public String getTitle() {
		return title;
	}

	public int getYearCreated() {
		return yearCreated;
	}

	public Artwork(String title, int yearCreated, Artist artist) {
		this.title = title;
		this.yearCreated = yearCreated;
		this.artist = artist;
	}

	public void printInfo() {
		artist.printInfo();
		System.out.println("Title: " + title + ", " + yearCreated);
	}
}