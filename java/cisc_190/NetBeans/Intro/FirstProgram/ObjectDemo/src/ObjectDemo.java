import java.util.ArrayList;
public class ObjectDemo {
    public static void main(String[] args) {
        Integer year = new Integer(1999);
        String name = new String("Honda Civic");
        Double price = new Double(29650.48);
        
        ArrayList<Object> list = new ArrayList<>();
        
        list.add(year);
        list.add(name);
        list.add(price);
        
        for (Object obj : list) {
            System.out.println("List contains " + obj);
        }
    }
}