/*

Problem 6.3: Personal Information Class

Design a class that holds the following personal data: name, address, age and phone number. Write appropriate accessor and
mutator methods. Demonstrate the class by writing a program that creates three instances of it. One instance should hold
your information and the other two should hold your friends' or family members' information.

*/

public class PersonalInformation{
	private String name;
	private String address;
	private int age;
	private String phoneNumber;
	
	public String getName() {
		return name;
	}
	
	public String getAddress() {
		return address;
	}
	
	public int getAge() {
		return age;
	}
	
	public String getPhoneNumber() {
		return phoneNumber;
	}
	
	public void setName( String nameGiven ) {
		name = nameGiven;
	}
	
	public void setAddress( String addressGiven ) {
		name = addressGiven;
	}
	
	public void setAge( String ageGiven ) {
		name = ageGiven;
	}
	
	public void setPhoneNumber( String phoneNumberGiven ) {
		phoneNumber = phoneNumberGiven;
	}
	
	public PersonalInformation() {
		name = "";
		address = "";
		age = 0;
		phoneNumber = "( 000 ) 123 - 4567";
	}
}