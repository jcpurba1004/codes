import java.util.ArrayList;

public class ArrayListManager {
   
   public static void printArrayList(ArrayList<Object> objList) {
      int i;

      for (i = 0; i < objList.size(); ++i) {
         System.out.println(objList.get(i));
      }
   }
   
   public static void main(String[] args) {       
      ArrayList<Object> objList = new ArrayList<Object>();
      
      String myString = new String("Graph");
      Coffee myCoffee = new Coffee("Latte", "Dark");
      Business myBusiness = new Business("Aperture", "4 Park Ave");
      
      objList.add(myCoffee);
      objList.add(myString);
      objList.add(myBusiness);
      
      printArrayList(objList);   
   }
}