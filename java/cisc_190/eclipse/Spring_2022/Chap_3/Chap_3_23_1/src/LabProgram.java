import java.util.Scanner; 

public class LabProgram {
   public static void main(String[] args) {
      
		  Scanner scnr = new Scanner(System.in);
	      
		  int cents;

	      int centsRem;
	      int numDollars;
	      int numQuarters;
	      int numDimes; 
	      int numNickels;	      
	      
	      cents = scnr.nextInt();

	      centsRem = 0;
	      numDollars = (cents / 100);
	      numQuarters = (cents / 25);
	      numDimes    = (cents / 10);
	      numNickels  = (cents / 5);
	      
	      //System.out.println("numDollars = " + numDollars + " Dollar");
	      //System.out.println("numQuarters = " + numQuarters + " Quarters");
	      //System.out.println("numDimes = " + numDimes + " Dimes");
	      //System.out.println("numNickels = " + numNickels + " nickels");
	      //System.out.println("numPennies = " + numPennies + " Pennies");      

	      // no change
	      if (cents == 0) {
	         System.out.println("No change");
	         System.exit(0);
	      }
	      
	      // dollars
	      if (numDollars > 0) {
	         //System.out.println(numDollars + " Dollar");
	    	  if (numDollars==1) {
		          System.out.println(numDollars + " Dollar");
	    	  }
	    	  else {
		          System.out.println(numDollars + " Dollars");		    		  
	    	  }
	         
	         centsRem = cents % 100;
	         //System.out.println("centsRem1 = " + centsRem + " cents");
	         
		      if (centsRem >= 25) {
		    	  numQuarters = (centsRem / 25);
		    	  //System.out.println("numQuarters = " + numQuarters + " Quarter");
		    	  
		    	  if (numQuarters==1) {
			          System.out.println(numQuarters + " Quarter");
		    	  }
		    	  else {
			          System.out.println(numQuarters + " Quarters");		    		  
		    	  }
		    	  
		    	  centsRem = centsRem % 25;
		    	  //System.out.println("centsRem2 = " + centsRem + " cents");
		    	  
		    	  if (centsRem >= 10) {
		    		  numDimes = (centsRem / 10);
			    	  //System.out.println("numDimes = " + numDimes + " Dimes");
			    	  
			    	  if (numDimes==1) {
				          System.out.println(numDimes + " Dime");
			    	  }
			    	  else {
				          System.out.println(numDimes + " Dimes");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 10;
			    	  //System.out.println("centsRem3 = " + centsRem + " cents");
			    	  if(centsRem >=5) {
			    		  numNickels = (centsRem / 5);
				    	  //System.out.println("numNickels = " + numNickels + " Nickels");
				    	  
				    	  if (numNickels==1) {
					          System.out.println(numNickels + " Nickel");
				    	  }
				    	  else {
					          System.out.println(numNickels + " Nickels");		    		  
				    	  }
				    	  
				    	  centsRem = centsRem % 5;
				    	  //System.out.println("centsRem4 = " + centsRem + " cents");
				    	  
				    	  if (centsRem==0) {
					          System.exit(0);
				    	  }
				    	  else  if(centsRem==1){
					          System.out.println(centsRem + " Penny");		
					          System.exit(0);
				    	  }
				    	  else {
				    		  System.out.println(centsRem + " Pennies");
				    		  System.exit(0);
				    	  }
				    	  
			    	  }
			    	  else {
			    		  
			    		  if(centsRem==0) {
			    			  System.exit(0);
			    		  }
			    		  
			    		  else if (centsRem==1) {
					          System.out.println(centsRem + " Penny");
					          System.exit(0);
				    	  }
				    	  else {
					          System.out.println(centsRem + " Pennies");	
					          System.exit(0);
				    	  }
			    		  
			    	  }
			      }
		    	  
		    	  if(centsRem >=5) {
		    		  numNickels = (centsRem / 5);
			    	  //System.out.println("numNickels = " + numNickels + " Nickels");
			    	  
			    	  if (numNickels==1) {
				          System.out.println(numNickels + " Nickel");
			    	  }
			    	  else {
				          System.out.println(numNickels + " Nickels");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 5;
			    	  //System.out.println("centsRem4 = " + centsRem + " cents");
			    	  
			    	  if (centsRem==0) {
				          System.exit(0);
			    	  }
			    	  else  if(centsRem==1){
				          System.out.println(centsRem + " Penny");		
				          System.exit(0);
			    	  }
			    	  else {
			    		  System.out.println(centsRem + " Pennies");
			    		  System.exit(0);
			    	  }
		    	  }
		    	  else {
		    		  if(centsRem==0) {
		    			  System.exit(0);
		    		  }
		    		  else if (centsRem==1) {
				          System.out.println(centsRem + " Penny");
				          System.exit(0);
			    	  }
			    	  else {
				          System.out.println(centsRem + " Pennies");		
				          System.exit(0);
			    	  }  
		    	  }
		      }
		      else if (centsRem >= 10) {
	    		  numDimes = (centsRem / 10);
		    	  //System.out.println("numDimes2 = " + numDimes + " Dimes");
		    	  
		    	  if (numDimes==1) {
			          System.out.println(numDimes + " Dime");
		    	  }
		    	  else {
			          System.out.println(numDimes + " Dimes");		    		  
		    	  }
		    	  
		    	  centsRem = centsRem % 10;
		    	  //System.out.println("centsRem3 = " + centsRem + " cents");
		    	  if(centsRem >=5) {
		    		  numNickels = (centsRem / 5);
			    	  //System.out.println("numNickels = " + numNickels + " Nickels");
			    	  
			    	  if (numNickels==1) {
				          System.out.println(numNickels + " Nickel");
			    	  }
			    	  else {
				          System.out.println(numNickels + " Nickels");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 5;
			    	  //System.out.println("centsRem4 = " + centsRem + " cents");
			    	  
			    	  if (centsRem==0) {
				          System.exit(0);
			    	  }
			    	  else  if(centsRem==1){
				          System.out.println(centsRem + " Penny");		
				          System.exit(0);
			    	  }
			    	  else {
			    		  System.out.println(centsRem + " Pennies");
			    		  System.exit(0);
			    	  }
			    	  
		    	  }
		    	  else {
		    		  if (centsRem==0) {
				          System.exit(0);
			    	  }
		    		  if (centsRem==1) {
				          System.out.println(centsRem + " Penny");
				          System.exit(0);
			    	  }
			    	  else {
				          System.out.println(centsRem + " Pennies");	
				          System.exit(0);
			    	  }
		    		  
		    	  }

		      }
		      else if (centsRem >= 5) {
		    	  numNickels = (centsRem / 5);
		    	  //System.out.println("numNickels2 = " + numNickels + " Nickels");
		    	  if (numNickels==1) {
			          System.out.println(numNickels + " Nickel");
		    	  }
		    	  else {
			          System.out.println(numNickels + " Nickels");		    		  
		    	  }
		      }
		      else {
		    	  if (centsRem==0) {
			          System.exit(0);
		    	  }
		    	  else if (centsRem==1) {
			          System.out.println(centsRem + " Penny");
			          System.exit(0);
		    	  }
		    	  else {
			          System.out.println(centsRem + " Pennies");	
			          System.exit(0);
		    	  }
		      }
		      
	      }
	      else if ( (numDollars == 0) && (numQuarters > 0) ){
	    	
	    	  
	    	  numQuarters = (cents / 25);
	    	  //System.out.println("numQuarters2 = " + numQuarters + " Quarter");
	    	  
	    	  if (numQuarters==1) {
		          System.out.println(numQuarters + " Quarter");
	    	  }
	    	  else {
		          System.out.println(numQuarters + " Quarters");		    		  
	    	  }
	    	  
	    	  centsRem = cents % 25;
	    	  //System.out.println("centsRem5 = " + centsRem + " cents");
	    	  
	    	  if (centsRem >= 10) {
	    		  numDimes = (centsRem / 10);
		    	  //System.out.println("numDimes2 = " + numDimes + " Dimes");
		    	  
		    	  if (numDimes==1) {
			          System.out.println(numDimes + " Dime");
		    	  }
		    	  else {
			          System.out.println(numDimes + " Dimes");		    		  
		    	  }
		    	  
		    	  centsRem = centsRem % 10;
		    	  //System.out.println("centsRem6 = " + centsRem + " cents");
		    	  if(centsRem >=5) {
		    		  numNickels = (centsRem / 5);
			    	  //System.out.println("numNickels2 = " + numNickels + " Nickels");
			    	  
			    	  if (numNickels==1) {
				          System.out.println(numNickels + " Nickel");
			    	  }
			    	  else {
				          System.out.println(numNickels + " Nickels");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 5;
			    	  //System.out.println("centsRem4 = " + centsRem + " cents");
			    	  
			    	  if (centsRem==0) {
				          System.exit(0);
			    	  }
			    	  else  if(centsRem==1){
				          System.out.println(centsRem + " Penny");	
				          System.exit(0);
			    	  }
			    	  else {
			    		  System.out.println(centsRem + " Pennies");
			    		  System.exit(0);
			    	  }
			    	  
		    	  }
		    	  else {
		    		  if(centsRem==0) {
		    			  System.exit(0);
		    		  }
		    		  else if (centsRem==1) {
				          System.out.println(centsRem + " Penny");
				          System.exit(0);
			    	  }
			    	  else {
				          System.out.println(centsRem + " Pennies");	
				          System.exit(0);
			    	  }
		    		  
		    	  }
		      }
	    	  
	    	  else if (centsRem >= 5) {
		    	  numNickels = (centsRem / 5);
		    	  //System.out.println("numNickels2 = " + numNickels + " Nickels");
		    	  if (numNickels==1) {
			          System.out.println(numNickels + " Nickel");
		    	  }
		    	  else {
			          System.out.println(numNickels + " Nickels");		    		  
		    	  }
		    	  
		    	  centsRem = centsRem % 5;
		    	  //System.out.println("centsRem7 = " + centsRem + " cents");
		    	  
		    	  if (centsRem==0) {
			          System.exit(0);
		    	  }
		    	  else  if(centsRem==1){
			          System.out.println(centsRem + " Penny");	
			          System.exit(0);
		    	  }
		    	  else {
		    		  System.out.println(centsRem + " Pennies");
		    		  System.exit(0);
		    	  }
		    	  
		    	  
		      }
		      else {
		    	  if (centsRem==0) {
			          System.exit(0);
		    	  }
		    	  else if (centsRem==1) {
			          System.out.println(centsRem + " Penny");
			          System.exit(0);
		    	  }
		    	  else {
			          System.out.println(centsRem + " Pennies");	
			          System.exit(0);
		    	  }
		      }  
	      }
	      
          else if ( (numDollars == 0) && (numQuarters == 0 ) && (numDimes > 0) ){
	    	
	    		  numDimes = (cents / 10);
		    	  //System.out.println("numDimes3 = " + numDimes + " Dimes");
		    	  
		    	  if (numDimes==1) {
			          System.out.println(numDimes + " Dime");
		    	  }
		    	  else {
			          System.out.println(numDimes + " Dimes");		    		  
		    	  }
		    	  
		    	  centsRem = cents % 10;
		    	  //System.out.println("centsRem8 = " + centsRem + " cents");
		    	  if(centsRem >=5) {
		    		  numNickels = (centsRem / 5);
			    	  //System.out.println("numNickels3 = " + numNickels + " Nickels");
			    	  
			    	  if (numNickels==1) {
				          System.out.println(numNickels + " Nickel");
			    	  }
			    	  else {
				          System.out.println(numNickels + " Nickels");		    		  
			    	  }
			    	  
			    	  centsRem = centsRem % 5;
			    	  //System.out.println("centsRem9 = " + centsRem + " cents");
			    	  
			    	  if (centsRem==0) {
				          System.exit(0);
			    	  }
			    	  else  if(centsRem==1){
				          System.out.println(centsRem + " Penny");	
				          System.exit(0);
			    	  }
			    	  else {
			    		  System.out.println(centsRem + " Pennies");
			    		  System.exit(0);
			    	  }
			    	  
		    	  }
		    	  else {
		    		  if(centsRem==0) {
		    			  System.exit(0);
		    		  }
		    		  else if (centsRem==1) {
				          System.out.println(centsRem + " Penny");
				          System.exit(0);
			    	  }
			    	  else {
				          System.out.println(centsRem + " Pennies");	
				          System.exit(0);
			    	  }
		    		  
		    	  }
		      }
	      
          else if ( (numDollars == 0) && (numQuarters == 0 ) && (numDimes == 0) && (numNickels > 0) ){
  	    	
	    		  numNickels = (cents / 5);
		    	  //System.out.println("numNickels3 = " + numNickels + " Nickels");
			    	  
		    	  if (numNickels==1) {
			          System.out.println(numNickels + " Nickel");
		    	  }
		    	  else {
			          System.out.println(numNickels + " Nickels");		    		  
		    	  }
			    	  
		    	  centsRem = cents % 5;
		    	  //System.out.println("centsRem10 = " + centsRem + " cents");
			    	  
		    	  if (centsRem==0) {
			          System.exit(0);
		    	  }
		    	  else  if(centsRem==1){
			          System.out.println(centsRem + " Penny");		
			          System.exit(0);
		    	  }
		    	  else {
		    		  System.out.println(centsRem + " Pennies");
		    		  System.exit(0);
		    	  }
			    	  
	    	  }
	    	  else {

	    		  if (cents==1) {
			          System.out.println(cents + " Penny");
			          System.exit(0);
		    	  }
		    	  else {
			          System.out.println(cents + " Pennies");	
			          System.exit(0);
		    	  }
		    		  
	    	  }
      
   }
}