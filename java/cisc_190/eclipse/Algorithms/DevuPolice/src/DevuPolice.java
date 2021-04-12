import java.math.*;
import java.util.*;

public class DevuPolice {
	public static long powermod(long x,long y,long M) {
	      x %= M;
	      
	      if (y == 0) {
	        return 1;
	      }
	      if (x == 0) {
	        return 0;
	      }
	      long r = 1L;
	      for (;y > 0; y >>= 1) {
	        if ((y & 1) > 0) {
	              r = r * x % M;
	        }
	        x = x * x % M;
	      }
	      return r;
	    }
	      public static long phi(long m) {
	      long p = 1L;
	       for (long i = 2L; i * i <= m; ++i) {
	           if (m % i == 0) {
	             long j = 1L;
	             while (m % i == 0) {
	                 m /= i;
	                j *= i;
	             }
	               
	             p *= j - j / i;
	        }
	      }
	      return (m > 1)?(p * (m - 1)):p;
	    }
	      public static long cmp(long n,long k,long x) {  //n ^ k > x < x = x
	    long i = 0L, temp = 1L;
	          while ((i < k) && (temp < x)) {
	           i++;
	           temp *= n;
	        }
	          if ((i >= k) && (temp <= x)) {
	          return temp;
	        }
	          return -1;
	      
	    }
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        for (int cases = scanner.nextInt(); cases > 0; cases--) {
        long n1 = scanner.nextLong();
        long k1 = scanner.nextLong();
        long n2 = scanner.nextLong();
          long k2 = scanner.nextLong();
        long n = scanner.nextLong();
        if (n == 1) {
          System.out.println(0);
        }
        else {
          long x = powermod(n1,k1,n);
          if ((k2 == 0) || (n2 == 1)) {
            System.out.println(x);
          }
          else if (n2 == 0) {
            System.out.println(1);
          }
          else if (x <= 1) {
               System.out.println(x);
          }
          else {  // n2 > 1, k2 > 0, x > 1
            long p = phi(n);
            long y = cmp(n2,k2,p);
            System.out.println(powermod(x, (y >= 0)?y:(powermod(n2,k2,p) + p),n));
            
          }
          
        }
      }
      
  }
}