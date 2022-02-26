public class CallPhonePlan {

	public static void main(String[] args) {
		PhonePlan user1Plan = new PhonePlan();
		PhonePlan user2Plan = new PhonePlan(1000, 5000);
		
		System.out.print("User1: ");
		user1Plan.print();
		
		System.out.print("User2: ");
		user2Plan.print();
	}
}