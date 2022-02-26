public class CallFood {
   public static void main(String[] args) {
      FoodType order1 = new FoodType("Soup");
      FoodType order2 = new FoodType("Cake");
      FoodType order3 = new FoodType("Crab");

      order1.print();
      order2.print();
      order3.print();
   }
}