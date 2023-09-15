public class FoodItem {
    private String name;
    private double fat;
    private double carbs;
    private double protein;

    public FoodItem() {
        this("None", 0.0, 0.0, 0.0);
    }

    public FoodItem(String name, double fat, double carbs, double protein) {
        this.name = name;
        this.fat = fat;
        this.carbs = carbs;
        this.protein = protein;
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
        return ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
    }

    public void printInfo() {
        System.out.println("Nutritional information per serving of " + name + ":");
        System.out.printf("   Fat: %.2f g\n", fat);
        System.out.printf("   Carbohydrates: %.2f g\n", carbs);
        System.out.printf("   Protein: %.2f g\n", protein);
    }
}