import java.util.ArrayList;
import java.util.Scanner;

public class Exercise_19_09 {

	public static <E extends Comparable<E>> void sort(ArrayList<E> list) {
		E temp;
		for(int i = 0; i < list.size(); ++i) {
			for(int j = 0; j < list.size()-1; ++j) {
				if(list.get(j).compareTo(list.get(j+1)) > 0) {
					temp = list.get(j);
					list.set(j,  list.get(j+1));
					list.set(j+1, temp);
				}
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.print("Enter 10 integers: ");
		ArrayList<Integer> list = new ArrayList<>();
		for (int i = 0; i < 10; i++) {
			list.add(in.nextInt());
		}
		sort(list);
		System.out.print("The sorted numbers are ");
		for (int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + " ");
		}
		System.out.println();
	}
}