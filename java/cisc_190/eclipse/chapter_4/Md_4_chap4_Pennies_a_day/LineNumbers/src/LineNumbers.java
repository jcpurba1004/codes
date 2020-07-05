import java.util.*;

import java.io.*;

public class LineNumbers{

	public static void main(String[] args) throws IOException
	{
		Scanner input=new Scanner(System.in);
		
		String filename,input;
		int wcount=0;
	int i,j;
	char ch;
	
	System.out.print("Enter input file name: ");
	filename=in.next();
	try(Scanner finput=new Scanner(new FileReader(filename));
	  if(!finput.hasNext())
	  {System.out.println(filename+"empty-program aborting");
	  System.exit(1);
	  }
	 System.out.println("The data\n---------");
	 while(finput.hasNextLine())
	 {input=finput.nextLine();
	   System.out.println(input);
	   StringTokenizer st = new StringTokenizer(input);
	   while (st.hasMoreToken())
	     { st.nextToken();
	       wcount++;
	        }
	 }
 System.out.println("words: "+wcount);
 finput.close();
 System.exit(0);
 }catch ( FileNotFoundException e)
 {System.out.println("C:\\java word\n The file you entered either do not exist or the name is spelled wrong.");
 System.exit(2);
 }
 }
 }