public class SmartWatch extends Watch {
   private int batteryPercentage;

   void setPercentage(int setPercentage) {
      batteryPercentage = setPercentage;
   }

   @Override
   void printItem() {
      System.out.println(hours + ":" + mins + " " + batteryPercentage + "%");
   }
}