package complexTypes;

public class complexTypes 
{
	public static void main(String[] args) 
	{
		String person = "James Bond";
		String alias;
		String aka;
		aka = person;
		alias = aka;
		person = null;
		System.out.println(person);
		System.out.println(alias);
		System.out.println(aka);
	}
}