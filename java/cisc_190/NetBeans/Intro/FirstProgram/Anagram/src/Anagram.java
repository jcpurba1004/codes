import java.io.*;
import java.util.*;

public class Anagram {

    static boolean isAnagram(String A, String B) {
	   A=A.toLowerCase();
	   B=B.toLowerCase();
	   boolean f = false;
	  char[] c = A.toCharArray();
	  Arrays.sort(c);
	  char[] d = B.toCharArray();
	  Arrays.sort(d);
	  String a = new String (c);
      String b = new String (d);
      if (a.equals(b)) {
    	  f=true;
      }
      return f;
   
   }
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        boolean ret=isAnagram(A,B);
        if(ret)System.out.println("Anagrams");
        else System.out.println("Not Anagrams");
        
    }
}