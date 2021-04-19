import java.util.*;

public class CamelCase {

	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        scan.close();
        
        // use a regex matching to split the string on capital letters
        // the resulting array contains contiguous sections of lowercase letters
        String[] words = s.split("[A-Z]");
        // this works because the problem states that each word has at least 2 characters, and we know that the first character of each word is always capitalized.
        
        System.out.println(words.length);
    }
}