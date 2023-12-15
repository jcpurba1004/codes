import java.util.ArrayList;

public class ArrayListProject {

	public static void main(String[] args) {
		
		String[] fruits = new String[4];
		fruits[0] = "Mango";
		fruits[1] = "Apple";
		fruits[2] = "Strawberry";
		fruits[3] = "Watermelon";
		System.out.println(fruits[1]);
		
		ArrayList fruitList = new ArrayList();
		fruitList.add("Mango");
		fruitList.add("Apple");
		fruitList.add("Strawberry");
		fruitList.add("Watermelon");
		
		fruitList.remove("Strawberry");
		// fruitList.clear();
		System.out.println(fruitList.contains("Raspberry"));
		
		System.out.println(fruitList);
	}
}