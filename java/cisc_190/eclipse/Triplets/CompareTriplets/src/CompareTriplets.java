import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class CompareTriplets {

	//given values for ai and bi
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int a0 = in.nextInt();
		int a1 = in.nextInt();
		int a2 = in.nextInt();
		int b0 = in.nextInt();
		int b1 = in.nextInt();
		int b2 = in.nextInt();
		
		//initialize both Alice's and Bob's points to 0
		int aliceCount = 0;
        int bobCount = 0;
        
        if(a0 > b0){
            aliceCount++;
        }
        else if(a0 < b0){
            bobCount++;
        }
        if(a1 > b1){
            aliceCount++;
        }
        else if (a1 < b1){
            bobCount++;
        }
        if(a2 > b2){
            aliceCount++;
        }
        else if(a2 < b2) {
            bobCount++;
        }
        
        System.out.println(aliceCount + " " + bobCount);
    }
}