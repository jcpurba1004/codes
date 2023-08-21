/**
 * Reads the user's input measurement from one line of input.
 * Precondition:   The input line is not empty.
 * Postcondition:  If the user's input is legal, the measurement
 *                 is converted to inches and returned.
 * @throws ParseError if the user's input is not legal.
 */
static double readMeasurement() throws ParseError {

   double inches;  // Total number of inches in user's measurement.
   
   double measurement;  // One measurement, 
                        //   such as the 12 in "12 miles."
   String units;        // The units specified for the measurement,
                        //   such as "miles."
   
   char ch;  // Used to peek at next character in the user's input.

   inches = 0;  // No inches have yet been read.

   skipBlanks();
   ch = TextIO.peek();
   
   /* As long as there is more input on the line, read a measurement and
      add the equivalent number of inches to the variable, inches.  If an
      error is detected during the loop, end the subroutine immediately
      by throwing a ParseError. */

   while (ch != '\n') {
   
       /* Get the next measurement and the units.  Before reading
          anything, make sure that a legal value is there to read. */
   
       if ( ! Character.isDigit(ch) ) {
           throw new ParseError("Expected to find a number, but found " + ch);
       }
       measurement = TextIO.getDouble();
       
       skipBlanks();
       if (TextIO.peek() == '\n') {
          throw new ParseError("Missing unit of measure at end of line.");
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
           throw new ParseError("\"" + units 
                                + "\" is not a legal unit of measure.");
       }
     
       /* Look ahead to see whether the next thing on the line is 
          the end-of-line. */
      
       skipBlanks();
       ch = TextIO.peek();
       
   }  // end while
   
   return inches;
   
} // end readMeasurement()