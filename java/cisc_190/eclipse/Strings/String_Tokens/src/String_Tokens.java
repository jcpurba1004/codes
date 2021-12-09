import java.util.Scanner;
import java.util.StringTokenizer;

public class String_Tokens {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();

        StringTokenizer tokenizer = new StringTokenizer(str, " !,?.\\_'@");
        System.out.println(tokenizer.countTokens());

        while(tokenizer.hasMoreElements()) {
            System.out.println(tokenizer.nextToken());
        }
    }
}