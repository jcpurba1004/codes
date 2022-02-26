public class Coffee {
   public String type;
   public String beanRoast;
   
   public Coffee() {}
   
   public Coffee(String coffeeType, String coffeeRoast) {
      type = coffeeType;
      beanRoast = coffeeRoast;
   }
   
   @Override
   public String toString() {
      return type + " (" + beanRoast + ")";
   }
}