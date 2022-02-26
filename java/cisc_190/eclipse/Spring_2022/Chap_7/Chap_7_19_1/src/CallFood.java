public class CallFood {
   public static void main(String[] args) {
      FoodType order1 = new FoodType("Hamburger");
      FoodType order2 = new FoodType("Salad");
      FoodType order3 = new FoodType("Pasta");
      FoodType order4 = new FoodType("Bread");
      FoodType order5 = new FoodType("Ham");

      order2.print();

      System.out.println("Next ID: " + FoodType.getNextId());
   }
}