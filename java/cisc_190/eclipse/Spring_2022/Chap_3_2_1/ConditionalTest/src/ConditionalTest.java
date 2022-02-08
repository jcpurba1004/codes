public class ConditionalTest {
   public static void main (String [] args) {
      int myNumber;
      int yourNumber;
      
      myNumber = 6;
      yourNumber = (myNumber == 3) ? myNumber + 2 : myNumber - 7;

      System.out.println(yourNumber);
   }
}