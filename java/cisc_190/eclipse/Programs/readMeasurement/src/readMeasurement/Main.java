/**
 * Reads the user's input measurement from one line of input.
 * Precondition:   The input line is not empty.
 * Postcondition:  If the user's input is legal, the measurement
 *                 is converted to inches and returned.  If the
 *                 input is not legal, the value -1 is returned.
 *                 The end-of-line is NOT read by this routine.
 */
static double readMeasurement() {

   double inches;  // Total number of inches in user's measurement.
   
   double measurement;  // One measurement, 
                        //   such as the 12 in "12 miles"
   String units;        // The units specified for the measurement,
                        //   such as "miles"
   
   char ch;  // Used to peek at next character in the user's input.

   inches = 0;  // No inches have yet been read.

   skipBlanks();
   ch = TextIO.peek();
   
   /* As long as there is more input on the line, read a measurement and
      add the equivalent number of inches to the variable, inches.  If an
      error is detected during the loop, end the subroutine immediately
      by returning -1. */

   while (ch != '\n') {
   
       /* Get the next measurement and the units.  Before reading
          anything, make sure that a legal value is there to read. */
   
       if ( ! Character.isDigit(ch) ) {
           System.out.println(
                 "Error:  Expected to find a number, but found " + ch);
           return -1;
       }
       measurement = TextIO.getDouble();
       
       skipBlanks();
       if (TextIO.peek() == '\n') {
           System.out.println(
                 "Error:  Missing unit of measure at end of line.");
           return -1;
       }
       units = TextIO.getWord();
       units = units.toLowerCase();
       
       /* Convert the measurement to inches and add it to the total. */
       
       if (units.equals("inch") 
               || units.equals("inches") || units.equals("in")) {
           inches += measurement;
       }
       else if (units.equals("foot") 
                  || units.equals("feet") || units.equals("ft")) {
           inches += measurement * 12;
       }
       else if (units.equals("yard") 
                  || units.equals("yards") || units.equals("yd")) {
           inches += measurement * 36;
       }
       else if (units.equals("mile") 
                  || units.equals("miles") || units.equals("mi")) {
           inches += measurement * 12 * 5280;
       }
       else {
           System.out.println("Error: \"" + units 
                             + "\" is not a legal unit of measure.");
           return -1;
       }
     
       /* Look ahead to see whether the next thing on the line is 
          the end-of-line. */
      
       skipBlanks();
       ch = TextIO.peek();
       
   }  // end while
   
   return inches;
   
} // end readMeasurement()