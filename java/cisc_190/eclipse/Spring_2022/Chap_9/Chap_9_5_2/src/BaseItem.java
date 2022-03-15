public class BaseItem {
   protected String lastName;
   
	public void setLastName(String providedName) {
	   lastName = providedName;
	}
	
	void printItem() {
	   System.out.println("Last name: " + lastName);
	}
}

public class DerivedItem extends BaseItem {
   private String firstName;
   
   public void setFirstName(String provideName) {
	  firstName = provideName;
   }
   
   @Override
   public void printItem() {
	  System.out.print("First and last name: ");
	  System.out.println(firstName + " " + lastName);
   }
}