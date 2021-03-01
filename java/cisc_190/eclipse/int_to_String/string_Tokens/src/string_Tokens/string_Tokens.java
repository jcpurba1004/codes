package string_Tokens;

import java.io.*;
import java.util.*;

public class string_Tokens {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String s = scan.nextLine();
		// Write your code here.
		scan.close();
		
		s = s.trim();
		
		if (s.length() == 0) {
			System.out.println(0);
			return;
		}
		
		String[] tokens = s.split("[^A-Za-z]+");
		System.out.println(tokens.length);
		
		for (String token : tokens) {
			System.out.println(token);
		}
	}
}