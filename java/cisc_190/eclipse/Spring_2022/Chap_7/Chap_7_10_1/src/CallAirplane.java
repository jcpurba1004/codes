public class CallAirplane {

	public static void main(String[] args) {
		Airplane airbus330 = new Airplane();
		
		airbus330.addPassengers(9);
		airbus330.addPassengers(6);
		
		System.out.println(airbus330.getAvailableSeats() + " seats");
	}
}