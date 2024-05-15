import java.util.Scanner;
public class GCD {
  public static int gcd(int m, int n){
    if (m%n==0)
      return n;
    else
      return gcd(n,m%n);
  }

  public static void main(String args[]) {
    Scanner in = new Scanner(System.in);
    
    System.out.print("Enter first value: ");
    int m = in.nextInt();
    
    System.out.print("Enter second value: ");
    int n = in.nextInt();
    
    int g = gcd(m,n);
    
    if(g==1) {
      System.out.println("GCD is 1");
    }
    else{
      System.out.println(g);
    }
  }
}