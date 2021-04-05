import java.io.*;
import java.util.*;

public class SimpleArray {
    
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
        int numberOfElements = in.nextInt();
        int array[] = new int[numberOfElements];
        int sumOfArray = 0;
        for(int i = 0; i < numberOfElements; i++) {
            array[i] = in.nextInt();
            sumOfArray += array[i];
        }
        System.out.println(sumOfArray);
        in.close();
    }
}