public class VehicleDerivation {
   public static void main(String[] args) {
      Car myCar = new Car();
      AnimalPowered cart = new AnimalPowered();

      myCar.setSpeed(50);
      cart.setSpeed(12);
      cart.setAnimal("Horse");

      myCar.printCarSpeed();
      System.out.println();
      cart.printAnimalSpeed();
   }
}