public class FoodType {
   public static int nextId = 70;

   private String type;
   private int id;

   public FoodType(String foodType) {
      type = foodType;
      id = nextId;

      nextId -= 4;
   }

   public void print() {
      System.out.println(type + ": " + id);
   }
}