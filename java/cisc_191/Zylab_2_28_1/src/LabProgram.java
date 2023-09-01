import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
      
     Scanner sc = new Scanner(System.in);
      int age, weight, heartRate, time;
      age = sc.nextInt();
      weight = sc.nextInt();
      heartRate = sc.nextInt();
      time = sc.nextInt();
      double calories;
      calories = (((age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991) * time) / 8.368;
      System.out.printf("Calories: %.2f calories", calories, "\n", "\n");
      sc.close();
   }
}