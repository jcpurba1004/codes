public class Watch {
   protected int hours;
   protected int mins;

   void setHours(int setHours) {
      hours = setHours;
   }

   void setMins(int setMins) {
      mins = setMins;
   }

   void printItem() {
      System.out.println(hours + ":" + mins);
   }
}