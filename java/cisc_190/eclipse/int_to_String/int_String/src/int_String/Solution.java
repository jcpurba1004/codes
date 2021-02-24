package int_String;
import java.util.*;
import java.security.*;
public class Solution {
	public static void main(String[] args) {
	 
	 try {
	  Scanner in = new Scanner(System.in);
	  int n = in.nextInt();
	  in.close();
	  //String s=???; Complete this line below
	  // There are many ways to solve this question. Here are some.
	  
    // 1. Solution
    String s = String.valueOf(n);
    // 2. Solution
    String s = Integer.toString(n);
    // 3.Solution
    // Stack stc = new Stack();
    // int count=0;
    // while(n!=0){
    //	   stc.add(n%10);
    //         n=n/10;
    //     count++
	// }
    // StringBuilder sb = new StringBuilder();
    // for(int i=0; i<count; i++){
    //     sb.append(stc.pop());
    
	// }
    // String s=sb.toString();
    
       if (n == Integer.parseInt(s)) {
    	System.out.println("Good job");
       } else {
    	System.out.println("Wrong answer.");
       }
	 }  catch (DoNotTerminate.ExitTrappedException e) {
	  System.out.println("Unsuccessful Termination!!");
	 }
   }
}

//The following class will prevent you from terminating the code using exit(0)!
class DoNotTerminate {
	
 public static class ExitTrappedException extends SecurityException {
  
  private static final long serialVersionUID = 1;
 }
 
 public static void forbidExit() {
  final SecurityManager securityManager = new SecurityManager() {
   @Override
   public void checkPermission(Permission permission) {
	if (permission.getName().contains("exitVM")) {
	 throw new ExitTrappedException();
	}
   }
  };
  System.setSecurityManager(securityManager);
 }
}