public class Artist {
	
	private String artistName;
	private int birthYear;
	private int deathYear;

	public Artist() {
		artistName = "unknown";
		birthYear = -1;
		deathYear = -1;
	}

	public Artist(String artistName, int birthYear, int deathYear) {
		this.artistName = artistName;
		this.birthYear = birthYear;
		this.deathYear = deathYear;
	}

	public String getName() {
		return artistName;
	}

	public int getBirthYear() {
		return birthYear;
	}

	public int getDeathYear() {
		return deathYear;
	}

	public void printInfo() {
		
		if (deathYear != -1 && birthYear != -1) {
			System.out.printf("Artist: %s (%d to %d)\n",
				artistName, birthYear, deathYear);
		} else if (birthYear != -1) {
			System.out.printf("Artist: %s (%d to present)\n",
				artistName, birthYear);
		} else {
			System.out.printf("Artist: %s (unknown)\n",
				artistName);
		}
	}
}