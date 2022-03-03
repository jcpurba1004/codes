public class FoodItem {
   private String name;
   private double fat;
   private double carbs;
   private double protein;
   
	public FoodItem() {
		name = "None";
		fat = 0.0;
		carbs = 0.0;
		protein = 0.0;
	}
	
	public FoodItem(String foodName, double gramFat, double gramCarbs, double gramProtein) {
		name = foodName;
		fat = gramFat;
		carbs = gramCarbs;
		protein = gramProtein;
	}
   
   public String getName() {
      return name;
   }
   
   public double getFat() {
      return fat;
   }
   
   public double getCarbs() {
      return carbs;
   }
   
   public double getProtein() {
      return protein;
   }
   
   public double getCalories(double numServings) {
      // Calorie formula
      double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
      return calories;
   }
   
   public void printInfo() {
      System.out.println("Nutritional information per serving of " + name + ":");
      System.out.printf("   Fat: %.2f g\n", fat);
      System.out.printf("   Carbohydrates: %.2f g\n", carbs);
      System.out.printf("   Protein: %.2f g\n", protein);
   }
}