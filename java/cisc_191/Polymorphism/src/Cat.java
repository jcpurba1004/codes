public class Cat extends Animal {
	private String litterPreference;
	
	public void eat() {
		System.out.println("nom nom nom");
	}
	
	public String getLitterPreference() {
		return litterPreference;
	}
	
	public void setlitterPreference(String litterPreference) {
		this.litterPreference = litterPreference;
	}
}