public class CallCar {
   public static void main(String[] args) {
      Car car1 = new Car();
      Car car2 = new Car();

      car1.setBrand("Toyota");
      car1.setModel("Corolla");
      car2.setBrand("Honda");
      car2.setModel("CR-V");

      System.out.println(car1);
      System.out.println(car2);
   }
}