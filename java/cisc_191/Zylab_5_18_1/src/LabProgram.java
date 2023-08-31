import java.util.Scanner;

public class LabProgram {
   public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n;
	    char c;
	    
	    n=sc.nextInt();
	    
	    String[] s=new String[n];
	    
	    for(int i=0; i<n;i++)
	    {
	        s[i]=sc.next();
	    }
	    
	    c=sc.next().charAt(0);
	    
	    for(int i=0; i<n;i++)
	    {
	        String str=s[i];
	         for(int j=0; j<str.length();j++)
	       {
	           
	        if(str.charAt(j)==c)
	         {
	            System.out.print(str+",");
	            break;
	         }
	       }
	    }
		System.out.println();
   }
}